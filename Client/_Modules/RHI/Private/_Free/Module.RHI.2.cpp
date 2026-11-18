// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 444

// DefaultTexture'' @ 14105bb00

void __cdecl `dynamic_initializer_for_'FRHITextureReference::DefaultTexture__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRHITextureReference::DefaultTexture__);
  return;
}

// MemoryPool'' @ 14105bb20

void __cdecl `dynamic_initializer_for_'FRHICommandListExecutor::FTaskPipe::FTask::MemoryPool__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRHICommandListExecutor::FTaskPipe::FTask::MemoryPool__);
  return;
}

// Sentinel'' @ 14105bb40

void __cdecl `dynamic_initializer_for_'FRHIBreadcrumbNode::Sentinel__(void)

{
  int *piVar1;
  uint uStack_1c;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      StaticData._12_8_ = ZEXT48(uStack_1c);
      StaticData._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      StaticData._padding_._4_4_ = 0;
      StaticData._padding_ = (longlong)u_Sentinel;
      StaticData._padding_._0_4_ = 0x13;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&StaticData.Cs,4000);
      StaticData.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      StaticData.TraceGpuSpecId = 0;
      StaticData.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(`FRHIBreadcrumbNode::<lambda_8>::operator()'::__l2::
             _dynamic_atexit_destructor_for__StaticData__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar1 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      SentinelNode._padding_ = (longlong)FRHIBreadcrumbNode::Sentinel;
      SentinelNode._padding_ = (longlong)&StaticData;
      SentinelNode._padding_ =
           (longlong)
           &
           ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
      ;
      SentinelNode._padding_ = 0;
      SentinelNode._padding_ = 0;
      SentinelNode._padding_ = 0;
      SentinelNode._padding_ = 0;
      SentinelNode._padding_ = 0;
      SentinelNode._padding_._0_4_ = 0;
      SentinelNode._padding_._4_2_ = 0;
      SentinelNode.Desc = &StaticData;
      _Init_thread_footer(&::_TSS1);
    }
  }
  FRHIBreadcrumbNode::Sentinel = (FRHIBreadcrumbNode *)&SentinelNode;
  return;
}

// `dynamic_initializer_for_'CPrio_FCompilePipelineStateTask'' @ 14105bcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_FCompilePipelineStateTask__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_FCompilePipelineStateTask,L"TaskGraph.TaskPriorities.CompilePipelineStateTask",
             L"Task and thread priority for FCompilePipelineStateTask.",HighThreadPriority,MainQueue
             ,HighTaskPriority);
  atexit(_dynamic_atexit_destructor_for__CPrio_FCompilePipelineStateTask__);
  return;
}

// `dynamic_initializer_for_'CPrio_SceneRenderingTask'' @ 14105bd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_SceneRenderingTask__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_SceneRenderingTask,L"TaskGraph.TaskPriorities.SceneRenderingTask",
             L"Task and thread priority for various scene rendering tasks.",MainQueue,
             HighTaskPriority,UnusedAnchor);
  atexit(_dynamic_atexit_destructor_for__CPrio_SceneRenderingTask__);
  return;
}

// `dynamic_initializer_for_'CVarCreatePSOsOnRHIThread'' @ 14105bd60

void __cdecl _dynamic_initializer_for__CVarCreatePSOsOnRHIThread__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCreatePSOsOnRHIThread,L"r.pso.CreateOnRHIThread",&GRunPSOCreateTasksOnRHIT,
             L"0: Run PSO creation on task threads\n1: Run PSO creation on RHI thread.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarCreatePSOsOnRHIThread__);
  return;
}

// `dynamic_initializer_for_'CVarDisableEngineAndAppRegistration'' @ 14105bdb0

void __cdecl _dynamic_initializer_for__CVarDisableEngineAndAppRegistration__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDisableEngineAndAppRegistration,L"r.DisableEngineAndAppRegistration",local_res8,
             L"If true, disables engine and app registration, to disable GPU driver optimizations during debugging and development\nChanges will only take effect in new game/editor instances - can\'t be changed at runtime.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableEngineAndAppRegistration__);
  return;
}

// `dynamic_initializer_for_'CVarEnableBindless'' @ 14105be00

void __cdecl _dynamic_initializer_for__CVarEnableBindless__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableBindless,L"rhi.Bindless",&GRHIBindlessConfiguration,
             L"Set to Enabled to enable for all shader types. Set to RayTracing to restrict to Raytracing shaders."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarEnableBindless__);
  return;
}

// `dynamic_initializer_for_'CVarEnablePSOAsyncCacheConsolidation'' @ 14105be50

void __cdecl _dynamic_initializer_for__CVarEnablePSOAsyncCacheConsolidation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnablePSOAsyncCacheConsolidation,L"r.pso.EnableAsyncCacheConsolidation",
             &GEnablePSOAsyncCacheConsolidation,
             L"0: Require Render Thread and RHI Thread to synchronize before flushing the PSO cache.1: Flush the PSO cache without synchronizing the Render Thread with the RHI Thread.\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarEnablePSOAsyncCacheConsolidation__);
  return;
}

// `dynamic_initializer_for_'CVarGPUCrashDebugging'' @ 14105bea0

void __cdecl UE::RHI::_dynamic_initializer_for__CVarGPUCrashDebugging__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGPUCrashDebugging,L"r.GPUCrashDebugging",local_res8,
             L"Enable vendor specific GPU crash analysis tools",4);
  atexit(_dynamic_atexit_destructor_for__CVarGPUCrashDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarGPUCrashDebuggingBreadcrumbs'' @ 14105bef0

void __cdecl UE::RHI::_dynamic_initializer_for__CVarGPUCrashDebuggingBreadcrumbs__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGPUCrashDebuggingBreadcrumbs,L"r.GPUCrashDebugging.Breadcrumbs",local_res8,
             L"Enable RHI breadcrumbs, a vendor-agnostic method for determining which passes were active when a GPU crash occurs"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarGPUCrashDebuggingBreadcrumbs__);
  return;
}

// `dynamic_initializer_for_'CVarGPUCrashOnOutOfMemory'' @ 14105bf40

void __cdecl _dynamic_initializer_for__CVarGPUCrashOnOutOfMemory__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGPUCrashOnOutOfMemory,L"r.GPUCrashOnOutOfMemory",local_res8,
             L"Enable crash reporting on GPU OOM",4);
  atexit(_dynamic_atexit_destructor_for__CVarGPUCrashOnOutOfMemory__);
  return;
}

// `dynamic_initializer_for_'CVarGraphicsAdapter'' @ 14105bf90

void __cdecl _dynamic_initializer_for__CVarGraphicsAdapter__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGraphicsAdapter,L"r.GraphicsAdapter",local_res8,
             L"User request to pick a specific graphics adapter (e.g. when using a integrated graphics card with a discrete one)\nFor Windows D3D, unless a specific adapter is chosen we reject Microsoft adapters because we don\'t want the software emulation.\nThis takes precedence over -prefer{AMD|NVidia|Intel} when the value is >= 0.\n -2: Take the first one that fulfills the criteria\n -1: Favour non integrated because there are usually faster (default)\n  0: Adapter #0\n  1: Adapter #1, ..."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarGraphicsAdapter__);
  return;
}

// `dynamic_initializer_for_'CVarPSOEvictionTime'' @ 14105bfe0

void __cdecl _dynamic_initializer_for__CVarPSOEvictionTime__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x3c;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOEvictionTime,L"r.pso.evictiontime",local_res8,
             L"Time between checks to remove stale objects from the cache. 0 = no eviction (which may eventually OOM...)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOEvictionTime__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecacheEnableCompileStats'' @ 14105c030

void __cdecl _dynamic_initializer_for__CVarPSOPrecacheEnableCompileStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecacheEnableCompileStats,L"r.PSOPrecache.EnableCompileStats",
             &FPSOCSVStatTracker::bEnableStatTracker,
             L"Enable CSV stat tracking of precache compile progress. (default enabled)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecacheEnableCompileStats__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecacheKeepInMemoryComputeMaxNum'' @ 14105c080

void __cdecl _dynamic_initializer_for__CVarPSOPrecacheKeepInMemoryComputeMaxNum__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecacheKeepInMemoryComputeMaxNum,L"r.PSOPrecache.KeepInMemoryComputeMaxNum",
             &GPSOPrecacheKeepInMemoryComputeMaxNum,
             L"If r.PSOPrecache.KeepInMemoryUntilUsed is enabled, this value will control the maximum number of precached compute PSOs that are kept in memory at a time.\nIf set to 0, no limit will be applied (not recommended outside of testing, as it can cause unbounded memory usage)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecacheKeepInMemoryComputeMaxNum__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecacheKeepInMemoryGraphicsMaxNum'' @ 14105c0d0

void __cdecl _dynamic_initializer_for__CVarPSOPrecacheKeepInMemoryGraphicsMaxNum__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecacheKeepInMemoryGraphicsMaxNum,L"r.PSOPrecache.KeepInMemoryGraphicsMaxNum",
             &GPSOPrecacheKeepInMemoryGraphicsMaxNum,
             L"If r.PSOPrecache.KeepInMemoryUntilUsed is enabled, this value will control the maximum number of precached graphics PSOs that are kept in memory at a time.\nIf set to 0, no limit will be applied (not recommended outside of testing, as it can cause unbounded memory usage)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecacheKeepInMemoryGraphicsMaxNum__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecacheKeepInMemoryUntilUsed'' @ 14105c120

void __cdecl _dynamic_initializer_for__CVarPSOPrecacheKeepInMemoryUntilUsed__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecacheKeepInMemoryUntilUsed,L"r.PSOPrecache.KeepInMemoryUntilUsed",
             &GPSOPrecacheKeepInMemoryUntilUsed,
             L"If enabled and if the underlying GPU vendor is NVIDIA or Qualcomm, precached PSOs will be kept in memory instead of being deleted immediately after creation, and will only be deleted once they are actually used for rendering or when the maximum limit of in-memory PSOs is reached.\nThis can speed up the re-creation of precached PSOs for NVIDIA and Qualcomm drivers and avoid small hitches, at the cost of memory.\nIt\'s recommended to set r.PSOPrecache.KeepInMemoryGraphicsMaxNum and r.PSOPrecache.KeepInMemoryComputeMaxNum to a non-zero value to ensure the number of in-memory PSOs is bounded.\nValid options:\n0 = off (default)\n1 = PSOs are kept in memory after precaching but not deleted immediately when used by the renderer. They are instead only evicted when the limit of in-memory PSOs is reached\n2 = PSOs are kept in memory after precaching and deleted when used by the renderer"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecacheKeepInMemoryUntilUsed__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecachePermitPriorityEscalation'' @ 14105c170

void __cdecl _dynamic_initializer_for__CVarPSOPrecachePermitPriorityEscalation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecachePermitPriorityEscalation,L"r.PSOPrecaching.PermitPriorityEscalation",
             &GPSOPrecachePermitPriorityEscalation,
             L"Whether to permit requests to increase high pri PSO precaching tasks to highest.\n1: High priority tasks can be escalated to highest if requested. (default)\n0: High priority tasks will remain unchanged."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecachePermitPriorityEscalation__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecacheUnhealthyCacheHitchThresholdMs'' @ 14105c1c0

void __cdecl _dynamic_initializer_for__CVarPSOPrecacheUnhealthyCacheHitchThresholdMs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecacheUnhealthyCacheHitchThresholdMs,
             L"r.PSOPrecache.UnhealthyCacheHitchThresholdMs",
             &GPSOPrecacheUnhealthyCacheHitchThresholdMs,
             L"Threshold for runtime previously-precached PSO creation to count towards suspected unhealthy driver cache behavior, in milliseconds (default 80)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecacheUnhealthyCacheHitchThresholdMs__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecacheUnhealthyCacheMaxHitches'' @ 14105c210

void __cdecl _dynamic_initializer_for__CVarPSOPrecacheUnhealthyCacheMaxHitches__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecacheUnhealthyCacheMaxHitches,L"r.PSOPrecache.UnhealthyCacheMaxHitches",
             &GPSOPrecacheUnhealthyCacheMaxHitches,
             L"Threshold for the number of runtime previously-precached PSO creation hitches to set a flag indicating a suspected unhealthy driver cache (default 100)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecacheUnhealthyCacheMaxHitches__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecaching'' @ 14105c260

void __cdecl _dynamic_initializer_for__CVarPSOPrecaching__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecaching,L"r.PSOPrecaching",&GPSOPrecaching,
             L"0 to Disable PSOs precaching\n1 to Enable PSO precaching\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecaching__);
  return;
}

// `dynamic_initializer_for_'CVarPSORuntimeCreationHitchThreshold'' @ 14105c2b0

void __cdecl _dynamic_initializer_for__CVarPSORuntimeCreationHitchThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x14;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSORuntimeCreationHitchThreshold,L"r.PSO.RuntimeCreationHitchThreshold",local_res8
             ,L"Threshold for runtime PSO creation to count as a hitch (in msec) (default 20)",0x24)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarPSORuntimeCreationHitchThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarPSOWaitForHighPriorityRequestsOnly'' @ 14105c300

void __cdecl _dynamic_initializer_for__CVarPSOWaitForHighPriorityRequestsOnly__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOWaitForHighPriorityRequestsOnly,
             L"r.PSOPrecaching.WaitForHighPriorityRequestsOnly",&GPSOWaitForHighPriorityRequestsOnly
             ,
             L"0 to wait for all pending PSO precache requests during loading (default)\n1 to only wait for the high priority and above PSO precache requests during loading\n2 to only wait for the highest priority PSO precache requests during loading"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPSOWaitForHighPriorityRequestsOnly__);
  return;
}

// `dynamic_initializer_for_'CVarPrecompileThreadPoolThreadPriority'' @ 14105c350

void __cdecl _dynamic_initializer_for__CVarPrecompileThreadPoolThreadPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrecompileThreadPoolThreadPriority,L"r.pso.PrecompileThreadPoolThreadPriority",
             &GPSOPrecompileThreadPoolThreadPriority,L"Thread priority for the PSO precompile pool",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPrecompileThreadPoolThreadPriority__);
  return;
}

// `dynamic_initializer_for_'CVarRHICmdBufferWriteLocks'' @ 14105c3a0

void __cdecl _dynamic_initializer_for__CVarRHICmdBufferWriteLocks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRHICmdBufferWriteLocks,L"r.RHICmdBufferWriteLocks",local_res8,
             L"Only relevant with an RHI thread. Debugging option to diagnose problems with buffered locks."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHICmdBufferWriteLocks__);
  return;
}

// `dynamic_initializer_for_'CVarRHICmdBypass'' @ 14105c3f0

void __cdecl _dynamic_initializer_for__CVarRHICmdBypass__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRHICmdBypass,L"r.RHICmdBypass",local_res8,
             L"Whether to bypass the rhi command list and send the rhi commands immediately.\n0: Disable (required for the multithreaded renderer)\n1: Enable (convenient for debugging low level graphics API calls, can suppress artifacts from multithreaded renderer code)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHICmdBypass__);
  return;
}

// `dynamic_initializer_for_'CVarRHICmdMaxAccelerationStructureBuildScratchSize'' @ 14105c440

void __cdecl _dynamic_initializer_for__CVarRHICmdMaxAccelerationStructureBuildScratchSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRHICmdMaxAccelerationStructureBuildScratchSize,
             L"r.RHICmd.MaxAccelerationStructureBuildScratchSize",local_res8,
             L"Set the maximum size in bytes of scratch buffer used for acceleration structures build. Setting it to 0 will serialize all builds. (default 2GB)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHICmdMaxAccelerationStructureBuildScratchSize__);
  return;
}

// `dynamic_initializer_for_'CVarRHICmdParallelTranslateCombineSingleAndParallel'' @ 14105c490

void __cdecl _dynamic_initializer_for__CVarRHICmdParallelTranslateCombineSingleAndParallel__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRHICmdParallelTranslateCombineSingleAndParallel,
             L"r.RHICmd.ParallelTranslate.CombineSingleAndParallel",local_res8,
             L"When true, allows the batching of both parallel and single threaded RHI command lists into the same translate job. Any parallel command lists that get batched with a single thread command list will fall back to translating on the RHI thread. Enabling this may trade reduced parallelism for reduced dispatch overhead."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHICmdParallelTranslateCombineSingleAndParallel__);
  return;
}

// `dynamic_initializer_for_'CVarRHICmdParallelTranslateEnable'' @ 14105c4e0

void __cdecl _dynamic_initializer_for__CVarRHICmdParallelTranslateEnable__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRHICmdParallelTranslateEnable,L"r.RHICmd.ParallelTranslate.Enable",local_res8,
             L"When true, allows recorded RHI command lists to be translated in parallel, on supported platforms. Setting this to false will make all command lists translate on the RHI thread."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHICmdParallelTranslateEnable__);
  return;
}

// `dynamic_initializer_for_'CVarRHICmdParallelTranslateMaxCommandsPerTranslate'' @ 14105c530

void __cdecl _dynamic_initializer_for__CVarRHICmdParallelTranslateMaxCommandsPerTranslate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRHICmdParallelTranslateMaxCommandsPerTranslate,
             L"r.RHICmd.ParallelTranslate.MaxCommandsPerTranslate",local_res8,
             L"When parallel translation is enabled, specifies the target maximum number of RHI command list commands to allow in a single translation job. If a newly submitted command list would cause an existing translate job to exceed this threshold, a new job will be started. A value of 0 means \'no limit\'. Translate jobs will not be split. A value less than 0 means \'always split\'. Command lists will never be batched together in the same translate job."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRHICmdParallelTranslateMaxCommandsPerTranslate__);
  return;
}

// `dynamic_initializer_for_'CVarRHICmdWidth'' @ 14105c580

void __cdecl _dynamic_initializer_for__CVarRHICmdWidth__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 8;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRHICmdWidth,L"r.RHICmdWidth",local_res8,
             L"Controls the task granularity of a great number of things in the parallel renderer.",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarRHICmdWidth__);
  return;
}

// `dynamic_initializer_for_'CVarRHISetGPUCaptureOptions'' @ 14105c5d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CVarRHISetGPUCaptureOptions__(void)

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
    puVar3[3] = <lambda_5>::<lambda_invoker_cdecl>;
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
                     (IConsoleManager::Singleton,L"r.RHISetGPUCaptureOptions",
                      L"Utility function to change multiple CVARs useful when profiling or debugging GPU rendering. Setting to 1 or 0 will guarantee all options are in the appropriate state.\nr.showmaterialdrawevents, toggledrawevents."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CVarRHISetGPUCaptureOptions,pIVar5);
  CVarRHISetGPUCaptureOptions._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CVarRHISetGPUCaptureOptions__);
  return;
}

// `dynamic_initializer_for_'CVarRTPSOCacheSize'' @ 14105c770

void __cdecl _dynamic_initializer_for__CVarRTPSOCacheSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x32;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRTPSOCacheSize,L"r.RayTracing.PSOCacheSize",local_res8,
             L"Number of ray tracing pipelines to keep in the cache (default = 50). Set to 0 to disable eviction.\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarRTPSOCacheSize__);
  return;
}

// `dynamic_initializer_for_'ComputePipelineCacheMissesHistory'' @ 14105c7c0

void __cdecl _dynamic_initializer_for__ComputePipelineCacheMissesHistory__(void)

{
  atexit(_dynamic_atexit_destructor_for__ComputePipelineCacheMissesHistory__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper41'' @ 14105c7e0

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper41__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_3>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper41,ShaderTypesReady,(TFunction<void___cdecl(void)> *)local_38
             ,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper42'' @ 14105c840

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper42__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_4>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper42,ShaderTypesReady,(TFunction<void___cdecl(void)> *)local_38
             ,false);
  return;
}

// `dynamic_initializer_for_'DumpPipelineCmd'' @ 14105c8a0

void __cdecl _dynamic_initializer_for__DumpPipelineCmd__(void)

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
    puVar1[3] = DumpPipelineCacheStats;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&DumpPipelineCmd,L"r.DumpPipelineCache",L"Dump current cache stats.",
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
  atexit(_dynamic_atexit_destructor_for__DumpPipelineCmd__);
  return;
}

// `dynamic_initializer_for_'GCVarAsyncPipelineCompile'' @ 14105c9e0

void __cdecl _dynamic_initializer_for__GCVarAsyncPipelineCompile__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GCVarAsyncPipelineCompile,L"r.AsyncPipelineCompile",local_res8,
             L"0 to Create PSOs at the moment they are requested\n1 to Create Pipeline State Objects asynchronously(default)\n2 to Create Only precompile PSOs asynchronously\n3 to Create Only non-precompile PSOs asynchronously"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GCVarAsyncPipelineCompile__);
  return;
}

// `dynamic_initializer_for_'GCVarRHIRenderPass'' @ 14105ca30

void __cdecl _dynamic_initializer_for__GCVarRHIRenderPass__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GCVarRHIRenderPass,L"r.RHIRenderPasses",local_res8,L"",0);
  atexit(_dynamic_atexit_destructor_for__GCVarRHIRenderPass__);
  return;
}

// `dynamic_initializer_for_'GComputePipelineCache'' @ 14105ca80

void __cdecl _dynamic_initializer_for__GComputePipelineCache__(void)

{
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>(&GComputePipelineCache);
  atexit(_dynamic_atexit_destructor_for__GComputePipelineCache__);
  return;
}

// `dynamic_initializer_for_'GDumpRHIMemoryCmd'' @ 14105cab0

void __cdecl _dynamic_initializer_for__GDumpRHIMemoryCmd__(void)

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
    puVar3[3] = DumpRHIMemory;
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
                     (IConsoleManager::Singleton,L"rhi.DumpMemory",
                      L"Dumps RHI memory stats to the log",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GDumpRHIMemoryCmd,pIVar5);
  GDumpRHIMemoryCmd._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GDumpRHIMemoryCmd__);
  return;
}

// `dynamic_initializer_for_'GDumpRHIResourceCountsCmd'' @ 14105cc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GDumpRHIResourceCountsCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_6>::<lambda_invoker_cdecl>;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"rhi.DumpResourceCounts",
                      L"Dumps RHI resource counts to the log",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GDumpRHIResourceCountsCmd,pIVar5);
  GDumpRHIResourceCountsCmd._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GDumpRHIResourceCountsCmd__);
  return;
}

// `dynamic_initializer_for_'GDumpRHIResourceMemoryCmd'' @ 14105cdf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GDumpRHIResourceMemoryCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_7>::<lambda_invoker_cdecl>;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"rhi.DumpResourceMemory",
                      L"Dumps RHI resource memory stats to the log\nUsage: rhi.DumpResourceMemory [<Number To Show>] [all] [summary] [Name=<Filter Text>] [Type=<RHI Resource Type>] [Transient=<no, yes, or all> [csv]"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GDumpRHIResourceMemoryCmd,pIVar5);
  GDumpRHIResourceMemoryCmd._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GDumpRHIResourceMemoryCmd__);
  return;
}

// `dynamic_initializer_for_'GGraphicsPipelineCache'' @ 14105cf90

void __cdecl _dynamic_initializer_for__GGraphicsPipelineCache__(void)

{
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
            (&GGraphicsPipelineCache);
  atexit(_dynamic_atexit_destructor_for__GGraphicsPipelineCache__);
  return;
}

// `dynamic_initializer_for_'GLockTracker'' @ 14105cfc0

void __cdecl _dynamic_initializer_for__GLockTracker__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GLockTracker,4000);
  GLockTracker.OutstandingLocks.ArrayMax = 0x10;
  GLockTracker.OutstandingLocks.AllocatorInstance.SecondaryData =
       (ForElementType<FLockTracker::FLockParams>)0x0;
  GLockTracker.OutstandingLocks.ArrayNum = 0;
  atexit(_dynamic_atexit_destructor_for__GLockTracker__);
  return;
}

// `dynamic_initializer_for_'GPSOPrecacheThreadPool'' @ 14105d010

void __cdecl _dynamic_initializer_for__GPSOPrecacheThreadPool__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GPSOPrecacheThreadPool,4000);
  GPSOPrecacheThreadPool.PSOPrecompileCompileThreadPool = (atomic<FQueuedThreadPool_*>)0x0;
  atexit(_dynamic_atexit_destructor_for__GPSOPrecacheThreadPool__);
  return;
}

// `dynamic_initializer_for_'GPSOPrecompileThreadPoolPercentOfHardwareThreadsVar'' @ 14105d050

void __cdecl _dynamic_initializer_for__GPSOPrecompileThreadPoolPercentOfHardwareThreadsVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GPSOPrecompileThreadPoolPercentOfHardwareThreadsVar,
             L"r.pso.PrecompileThreadPoolPercentOfHardwareThreads",
             &GPSOPrecompileThreadPoolPercentOfHardwareThreads,
             L"If > 0, use this percentage of cores (rounded up) for the PSO precompile thread pool\nUse this as an alternative to r.pso.PrecompileThreadPoolSize\n0 to disable threadpool usage when precompiling PSOs. (default 75%)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GPSOPrecompileThreadPoolPercentOfHardwareThreadsVar__);
  return;
}

// `dynamic_initializer_for_'GPSOPrecompileThreadPoolSizeMaxVar'' @ 14105d0a0

void __cdecl _dynamic_initializer_for__GPSOPrecompileThreadPoolSizeMaxVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GPSOPrecompileThreadPoolSizeMaxVar,L"r.pso.PrecompileThreadPoolSizeMax",
             &GPSOPrecompileThreadPoolSizeMax,
             L"The maximum number of threads available for concurrent PSO Precompiling.\nIgnored unless r.pso.PrecompileThreadPoolPercentOfHardwareThreads is specified\nDefault is no maximum (INT_MAX)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GPSOPrecompileThreadPoolSizeMaxVar__);
  return;
}

// `dynamic_initializer_for_'GPSOPrecompileThreadPoolSizeMinVar'' @ 14105d0f0

void __cdecl _dynamic_initializer_for__GPSOPrecompileThreadPoolSizeMinVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GPSOPrecompileThreadPoolSizeMinVar,L"r.pso.PrecompileThreadPoolSizeMin",
             &GPSOPrecompileThreadPoolSizeMin,
             L"The minimum number of threads available for concurrent PSO Precompiling.\nIgnored unless r.pso.PrecompileThreadPoolPercentOfHardwareThreads is specified\n0 = no minimum (default 2)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GPSOPrecompileThreadPoolSizeMinVar__);
  return;
}

// `dynamic_initializer_for_'GPSOPrecompileThreadPoolSizeVar'' @ 14105d140

void __cdecl _dynamic_initializer_for__GPSOPrecompileThreadPoolSizeVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GPSOPrecompileThreadPoolSizeVar,L"r.pso.PrecompileThreadPoolSize",
             &GPSOPrecompileThreadPoolSize,
             L"The number of threads available for concurrent PSO Precompiling.\n0 to disable threadpool usage when precompiling PSOs. (default)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GPSOPrecompileThreadPoolSizeVar__);
  return;
}

// `dynamic_initializer_for_'GPrecacheComputePipelineCache'' @ 14105d190

void __cdecl _dynamic_initializer_for__GPrecacheComputePipelineCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPrecacheComputePipelineCache__);
  return;
}

// `dynamic_initializer_for_'GPrecacheGraphicsPipelineCache'' @ 14105d1b0

void __cdecl _dynamic_initializer_for__GPrecacheGraphicsPipelineCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPrecacheGraphicsPipelineCache__);
  return;
}

// `dynamic_initializer_for_'GRHIBindlessConfiguration'' @ 14105d1d0

void __cdecl _dynamic_initializer_for__GRHIBindlessConfiguration__(void)

{
  FString::FString(&GRHIBindlessConfiguration,L"Disabled");
  atexit(_dynamic_atexit_destructor_for__GRHIBindlessConfiguration__);
  return;
}

// `dynamic_initializer_for_'GRHICommandList'' @ 14105d200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GRHICommandList__(void)

{
  FRHICommandListBase::FRHICommandListBase
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),true);
  GRHICommandList.CommandListImmediate._776_1_ = 1;
  GRHICommandList.DispatchPipe.LastThread.bIsSet = false;
  GRHICommandList.RHIThreadPipe.LastThread.bIsSet = false;
  GRHICommandList.NextDispatchTaskPrerequisites.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  GRHICommandList.NextDispatchTaskPrerequisites.ArrayNum = 0;
  GRHICommandList.NextDispatchTaskPrerequisites.ArrayMax = 4;
  GRHICommandList.CommandListImmediate._760_8_ = 0;
  GRHICommandList.CommandListImmediate._768_8_ = 0;
  GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  GRHICommandList.DispatchPipe.Current = (FTask *)0x0;
  GRHICommandList.DispatchPipe.LastEvent.Reference = (FBaseGraphTask *)0x0;
  GRHICommandList.Breadcrumbs.CPU.Last.AllocatorRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  GRHICommandList.RHIThreadPipe.Current = (FTask *)0x0;
  GRHICommandList.RHIThreadPipe.LastEvent.Reference = (FBaseGraphTask *)0x0;
  GRHICommandList.Breadcrumbs.GPU._16_8_ = 0;
  GRHICommandList.SubmitState = (FSubmitState *)0x0;
  GRHICommandList.LastMutate.Reference = (FBaseGraphTask *)0x0;
  GRHICommandList.Breadcrumbs.GPU._40_8_ = 0;
  GRHICommandList.LastSubmit.Reference = (FBaseGraphTask *)0x0;
  GRHICommandList.CompletionEvent.Reference = (FBaseGraphTask *)0x0;
  GRHICommandList.Breadcrumbs.GPU._64_8_ = 0;
  GRHICommandList.Breadcrumbs.CPU.Current.Node = (FRHIBreadcrumbNode *)0x0;
  GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.Object = (FRHIBreadcrumbAllocator *)0x0;
  GRHICommandList.Breadcrumbs.CPU.Last.Node = (FRHIBreadcrumbNode *)0x0;
  GRHICommandList.Breadcrumbs.CPU.Last.AllocatorRef.Object = (FRHIBreadcrumbAllocator *)0x0;
  GRHICommandList.Breadcrumbs.GPU._0_8_ = 0;
  GRHICommandList.Breadcrumbs.GPU._8_8_ = 0;
  GRHICommandList.Breadcrumbs.GPU._24_8_ = 0;
  GRHICommandList.Breadcrumbs.GPU._32_8_ = 0;
  GRHICommandList.Breadcrumbs.GPU._48_8_ = 0;
  GRHICommandList.Breadcrumbs.GPU._56_8_ = 0;
  GRHICommandList.Breadcrumbs.GPU._72_8_ = 0;
  GRHICommandList.Breadcrumbs.GPU._80_8_ = 0;
  GRHICommandList.Breadcrumbs.GPU._88_8_ = 0;
  GRHICommandList.CurrentDrawStatsCategory = (FRHIDrawStatsCategory *)0x0;
  memset(&GRHICommandList.FrameDrawStats,0,0x1800);
  GRHICommandList.FrameNumber = 0;
  atexit(_dynamic_atexit_destructor_for__GRHICommandList__);
  return;
}

// `dynamic_initializer_for_'GRHIGlobals'' @ 14105d310

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GRHIGlobals__(void)

{
  FRHIGlobals::FRHIGlobals(&GRHIGlobals);
  atexit(_dynamic_atexit_destructor_for__GRHIGlobals__);
  return;
}

// `dynamic_initializer_for_'GRHILockTracker'' @ 14105d340

void __cdecl _dynamic_initializer_for__GRHILockTracker__(void)

{
  atexit(_dynamic_atexit_destructor_for__GRHILockTracker__);
  return;
}

// `dynamic_initializer_for_'GRHIResourceTrackingCriticalSection'' @ 14105d360

void __cdecl _dynamic_initializer_for__GRHIResourceTrackingCriticalSection__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection,4000);
  atexit(_dynamic_atexit_destructor_for__GRHIResourceTrackingCriticalSection__);
  return;
}

// `dynamic_initializer_for_'GRHIThreadOnTasksCritical'' @ 14105d390

void __cdecl _dynamic_initializer_for__GRHIThreadOnTasksCritical__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical,4000);
  atexit(_dynamic_atexit_destructor_for__GRHIThreadOnTasksCritical__);
  return;
}

// `dynamic_initializer_for_'GRHITrackedResources'' @ 14105d3c0

void __cdecl _dynamic_initializer_for__GRHITrackedResources__(void)

{
  atexit(_dynamic_atexit_destructor_for__GRHITrackedResources__);
  return;
}

// `dynamic_initializer_for_'GRayTracingPipelineCache'' @ 14105d3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__GRayTracingPipelineCache__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GRayTracingPipelineCache,4000);
  GRayTracingPipelineCache.FullPipelines._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  GRayTracingPipelineCache.FullPipelines._48_8_ = _UNK_150631d98;
  GRayTracingPipelineCache.FullPipelines._0_8_ = 0;
  GRayTracingPipelineCache.FullPipelines._8_8_ = 0;
  GRayTracingPipelineCache.FullPipelines._32_8_ = 0;
  GRayTracingPipelineCache.FullPipelines._64_8_ = 0;
  GRayTracingPipelineCache.FullPipelines._72_4_ = 0;
  GRayTracingPipelineCache.PartialPipelines._0_8_ = 0;
  GRayTracingPipelineCache.PartialPipelines._8_8_ = 0;
  GRayTracingPipelineCache.PartialPipelines._32_8_ = 0;
  GRayTracingPipelineCache.PartialPipelines._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  GRayTracingPipelineCache.PartialPipelines._48_8_ = _UNK_150631d98;
  GRayTracingPipelineCache.PartialPipelines._64_8_ = 0;
  GRayTracingPipelineCache.PartialPipelines._72_4_ = 0;
  GRayTracingPipelineCache.LastTrimFrame = 0;
  atexit(_dynamic_atexit_destructor_for__GRayTracingPipelineCache__);
  return;
}

// `dynamic_initializer_for_'GVertexDeclarationCache'' @ 14105d480

void __cdecl _dynamic_initializer_for__GVertexDeclarationCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GVertexDeclarationCache__);
  return;
}

// `dynamic_initializer_for_'GVertexDeclarationLock'' @ 14105d4a0

void __cdecl _dynamic_initializer_for__GVertexDeclarationLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GVertexDeclarationLock,4000);
  atexit(_dynamic_atexit_destructor_for__GVertexDeclarationLock__);
  return;
}

// `dynamic_initializer_for_'GWorkGraphPipelineCache'' @ 14105d4d0

void __cdecl _dynamic_initializer_for__GWorkGraphPipelineCache__(void)

{
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
            (&GWorkGraphPipelineCache);
  atexit(_dynamic_atexit_destructor_for__GWorkGraphPipelineCache__);
  return;
}

// `dynamic_initializer_for_'GraphicsPipelineCacheMissesHistory'' @ 14105d500

void __cdecl _dynamic_initializer_for__GraphicsPipelineCacheMissesHistory__(void)

{
  atexit(_dynamic_atexit_destructor_for__GraphicsPipelineCacheMissesHistory__);
  return;
}

// `dynamic_initializer_for_'LogPSOHitching'' @ 14105d520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPSOHitching__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogPSOHitching,L"LogPSOHitching",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPSOHitching__);
  return;
}

// `dynamic_initializer_for_'LogRHI'' @ 14105d560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRHI__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogRHI,L"LogRHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRHI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantRHI'' @ 14105d5a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantRHI__(void)

{
  uint uVar1;
  FLiteralOrName local_18;
  uint uStack_10;
  ELiteralType EStack_c;
  undefined3 uStack_b;
  
  local_18.AnsiLiteral = "R";
  uVar1 = FLazyName::CallParseNumber<wchar_t>(L"R",3);
  _uStack_10 = CONCAT14(3,uVar1);
  FModuleManager::RegisterStaticallyLinkedModule
            ((FLazyName *)&local_18,
             FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'PendingDeletes'' @ 14105d5f0

void __cdecl _dynamic_initializer_for__PendingDeletes__(void)

{
  atexit(_dynamic_atexit_destructor_for__PendingDeletes__);
  return;
}

// `dynamic_initializer_for_'PendingDeletesWithLifetimeExtension'' @ 14105d610

void __cdecl _dynamic_initializer_for__PendingDeletesWithLifetimeExtension__(void)

{
  atexit(_dynamic_atexit_destructor_for__PendingDeletesWithLifetimeExtension__);
  return;
}

// `dynamic_initializer_for_'RHICommandsChannelReg'' @ 14105d630

void __cdecl _dynamic_initializer_for__RHICommandsChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&RHICommandsChannelObject,"RHICommandsChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'RHIPanicEvent'' @ 14105d660

void __cdecl _dynamic_initializer_for__RHIPanicEvent__(void)

{
  atexit(_dynamic_atexit_destructor_for__RHIPanicEvent__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ActiveComputePSOPrecacheRequests'' @ 14105d680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ActiveComputePSOPrecacheRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ActiveComputePSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_ActiveComputePSOPrecacheRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ActiveComputePSOPrecacheRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ActiveComputePSOPrecacheRequests,*pFVar1,
               L"Active Compute PSO Precache Requests","STATGROUP_PipelineStateCache",
               "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ActiveGraphicsPSOPrecacheRequests'' @ 14105d710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ActiveGraphicsPSOPrecacheRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ActiveGraphicsPSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_ActiveGraphicsPSOPrecacheRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ActiveGraphicsPSOPrecacheRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ActiveGraphicsPSOPrecacheRequests,*pFVar1,
               L"Active Graphics PSO Precache Requests","STATGROUP_PipelineStateCache",
               "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BindlessResourceDescriptorsAllocated'' @ 14105d7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BindlessResourceDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BindlessResourceDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_BindlessResourceDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BindlessResourceDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BindlessResourceDescriptorsAllocated,
               *pFVar1,L"Bindless Resource Descriptors Allocated","STATGROUP_RHI","STATCAT_Advanced"
               ,L"RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BindlessResourceHeapMemory'' @ 14105d830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BindlessResourceHeapMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BindlessResourceHeapMemory ==
      (FThreadSafeStaticStat<FStat_STAT_BindlessResourceHeapMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BindlessResourceHeapMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BindlessResourceHeapMemory,*pFVar1,
               L"Bindless Resource Heap","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,
               ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BindlessSamplerDescriptorsAllocated'' @ 14105d8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BindlessSamplerDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BindlessSamplerDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_BindlessSamplerDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BindlessSamplerDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BindlessSamplerDescriptorsAllocated,
               *pFVar1,L"Bindless Sampler Descriptors Allocated","STATGROUP_RHI","STATCAT_Advanced",
               L"RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BindlessSamplerHeapMemory'' @ 14105d950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BindlessSamplerHeapMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BindlessSamplerHeapMemory ==
      (FThreadSafeStaticStat<FStat_STAT_BindlessSamplerHeapMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BindlessSamplerHeapMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BindlessSamplerHeapMemory,*pFVar1,
               L"Bindless Sampler Heap","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,
               ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ByteAddressBufferMemory'' @ 14105d9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ByteAddressBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ByteAddressBufferMemory ==
      (FThreadSafeStaticStat<FStat_STAT_ByteAddressBufferMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ByteAddressBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ByteAddressBufferMemory,*pFVar1,
               L"Byte Address Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,
               ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3DAvailableSystemMemory'' @ 14105da70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3DAvailableSystemMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3DAvailableSystemMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3DAvailableSystemMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3DAvailableSystemMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DAvailableSystemMemory,*pFVar1,
               L"Available System Memory","STATGROUP_D3DMemory","STATCAT_Advanced",
               L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3DAvailableVideoMemory'' @ 14105db00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3DAvailableVideoMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3DAvailableVideoMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3DAvailableVideoMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3DAvailableVideoMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DAvailableVideoMemory,*pFVar1,
               L"Available Video Memory","STATGROUP_D3DMemory","STATCAT_Advanced",
               L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3DDemotedSystemMemory'' @ 14105db90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3DDemotedSystemMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3DDemotedSystemMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3DDemotedSystemMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3DDemotedSystemMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DDemotedSystemMemory,*pFVar1,
               L"Demoted System Memory","STATGROUP_D3DMemory","STATCAT_Advanced",L"D3D Video Memory"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3DDemotedVideoMemory'' @ 14105dc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3DDemotedVideoMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3DDemotedVideoMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3DDemotedVideoMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3DDemotedVideoMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DDemotedVideoMemory,*pFVar1,
               L"Demoted Video Memory","STATGROUP_D3DMemory","STATCAT_Advanced",L"D3D Video Memory",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3DTotalSystemMemory'' @ 14105dcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3DTotalSystemMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3DTotalSystemMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3DTotalSystemMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3DTotalSystemMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DTotalSystemMemory,*pFVar1,
               L"Total System Memory (Budget)","STATGROUP_D3DMemory","STATCAT_Advanced",
               L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3DTotalVideoMemory'' @ 14105dd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3DTotalVideoMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3DTotalVideoMemory == (FThreadSafeStaticStat<FStat_STAT_D3DTotalVideoMemory>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_D3DTotalVideoMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DTotalVideoMemory,*pFVar1,
               L"Total Video Memory (Budget)","STATGROUP_D3DMemory","STATCAT_Advanced",
               L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3DUpdateVideoMemoryStats'' @ 14105ddd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3DUpdateVideoMemoryStats__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3DUpdateVideoMemoryStats ==
      (FThreadSafeStaticStat<FStat_STAT_D3DUpdateVideoMemoryStats>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3DUpdateVideoMemoryStats");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DUpdateVideoMemoryStats,*pFVar1,
               L"Video Memory stats update time","STATGROUP_D3DMemory","STATCAT_Advanced",
               L"D3D Video Memory",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3DUsedSystemMemory'' @ 14105de60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3DUsedSystemMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3DUsedSystemMemory == (FThreadSafeStaticStat<FStat_STAT_D3DUsedSystemMemory>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_D3DUsedSystemMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DUsedSystemMemory,*pFVar1,
               L"Used System Memory","STATGROUP_D3DMemory","STATCAT_Advanced",L"D3D Video Memory",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3DUsedVideoMemory'' @ 14105def0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3DUsedVideoMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3DUsedVideoMemory == (FThreadSafeStaticStat<FStat_STAT_D3DUsedVideoMemory>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_D3DUsedVideoMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DUsedVideoMemory,*pFVar1,
               L"Used Video Memory","STATGROUP_D3DMemory","STATCAT_Advanced",L"D3D Video Memory",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DrawIndirectBufferMemory'' @ 14105df80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DrawIndirectBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DrawIndirectBufferMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DrawIndirectBufferMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DrawIndirectBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DrawIndirectBufferMemory,*pFVar1,
               L"Draw Indirect Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,
               ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExplicitWait'' @ 14105e010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExplicitWait__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExplicitWait == (FThreadSafeStaticStat<FStat_STAT_ExplicitWait>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExplicitWait");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitWait,*pFVar1,
               L"Explicit wait for tasks","STATGROUP_RHICMDLIST","STATCAT_Advanced",L"RHICmdList",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ExplicitWaitRHIThread'' @ 14105e0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ExplicitWaitRHIThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ExplicitWaitRHIThread ==
      (FThreadSafeStaticStat<FStat_STAT_ExplicitWaitRHIThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ExplicitWaitRHIThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitWaitRHIThread,*pFVar1,
               L"Explicit wait for RHI thread","STATGROUP_RHICMDLIST","STATCAT_Advanced",
               L"RHICmdList",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GatherDeletedResources'' @ 14105e130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GatherDeletedResources__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GatherDeletedResources ==
      (FThreadSafeStaticStat<FStat_STAT_GatherDeletedResources>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GatherDeletedResources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherDeletedResources,*pFVar1,
               L"Gather Deleted Resources","STATGROUP_RHICMDLIST","STATCAT_Advanced",L"RHICmdList",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HighPriorityComputePSOPrecacheRequests'' @ 14105e1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HighPriorityComputePSOPrecacheRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HighPriorityComputePSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_HighPriorityComputePSOPrecacheRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HighPriorityComputePSOPrecacheRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HighPriorityComputePSOPrecacheRequests,
               *pFVar1,L"High Priority Compute PSO Precache Requests","STATGROUP_PipelineStateCache"
               ,"STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HighPriorityGraphicsPSOPrecacheRequests'' @ 14105e250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HighPriorityGraphicsPSOPrecacheRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HighPriorityGraphicsPSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_HighPriorityGraphicsPSOPrecacheRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HighPriorityGraphicsPSOPrecacheRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HighPriorityGraphicsPSOPrecacheRequests,
               *pFVar1,L"High Priority Graphics PSO Precache Requests",
               "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HighestPriorityComputePSOPrecacheRequests'' @ 14105e2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_HighestPriorityComputePSOPrecacheRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HighestPriorityComputePSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_HighestPriorityComputePSOPrecacheRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HighestPriorityComputePSOPrecacheRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HighestPriorityComputePSOPrecacheRequests,
               *pFVar1,L"Highest Priority Compute PSO Precache Requests",
               "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HighestPriorityGraphicsPSOPrecacheRequests'' @ 14105e370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_HighestPriorityGraphicsPSOPrecacheRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HighestPriorityGraphicsPSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_HighestPriorityGraphicsPSOPrecacheRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HighestPriorityGraphicsPSOPrecacheRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HighestPriorityGraphicsPSOPrecacheRequests
               ,*pFVar1,L"Highest Priority Graphics PSO Precache Requests",
               "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImmedCmdListCount'' @ 14105e400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImmedCmdListCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImmedCmdListCount == (FThreadSafeStaticStat<FStat_STAT_ImmedCmdListCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImmedCmdListCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmedCmdListCount,*pFVar1,
               L"Immed. Command count","STATGROUP_RHICMDLIST","STATCAT_Advanced",L"RHICmdList",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImmedCmdListExecuteTime'' @ 14105e490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImmedCmdListExecuteTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImmedCmdListExecuteTime ==
      (FThreadSafeStaticStat<FStat_STAT_ImmedCmdListExecuteTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImmedCmdListExecuteTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmedCmdListExecuteTime,*pFVar1,
               L"All Command List Execute","STATGROUP_RHICMDLIST","STATCAT_Advanced",L"RHICmdList",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImmedCmdListMemory'' @ 14105e520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImmedCmdListMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImmedCmdListMemory == (FThreadSafeStaticStat<FStat_STAT_ImmedCmdListMemory>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_ImmedCmdListMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmedCmdListMemory,*pFVar1,
               L"Immed. Command List memory","STATGROUP_RHICMDLIST","STATCAT_Advanced",L"RHICmdList"
               ,true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InMemoryPrecachedPSOCount'' @ 14105e5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InMemoryPrecachedPSOCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InMemoryPrecachedPSOCount ==
      (FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InMemoryPrecachedPSOCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InMemoryPrecachedPSOCount,*pFVar1,
               L"Precached PSOs Kept In Memory","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IndexBufferMemory'' @ 14105e640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IndexBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IndexBufferMemory == (FThreadSafeStaticStat<FStat_STAT_IndexBufferMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IndexBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IndexBufferMemory,*pFVar1,
               L"Index Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,ST_int64,
               false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MiscBufferMemory'' @ 14105e6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MiscBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MiscBufferMemory == (FThreadSafeStaticStat<FStat_STAT_MiscBufferMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MiscBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MiscBufferMemory,*pFVar1,
               L"Misc Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,ST_int64,
               false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NonImmedCmdListCount'' @ 14105e760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NonImmedCmdListCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NonImmedCmdListCount ==
      (FThreadSafeStaticStat<FStat_STAT_NonImmedCmdListCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NonImmedCmdListCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NonImmedCmdListCount,*pFVar1,
               L"Nonimmed. Command count","STATGROUP_RHICMDLIST","STATCAT_Advanced",L"RHICmdList",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NonImmedCmdListExecuteTime'' @ 14105e7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NonImmedCmdListExecuteTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NonImmedCmdListExecuteTime ==
      (FThreadSafeStaticStat<FStat_STAT_NonImmedCmdListExecuteTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NonImmedCmdListExecuteTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NonImmedCmdListExecuteTime,*pFVar1,
               L"Nonimmed. Command List Execute","STATGROUP_RHICMDLIST","STATCAT_Advanced",
               L"RHICmdList",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NonImmedCmdListMemory'' @ 14105e880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NonImmedCmdListMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NonImmedCmdListMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NonImmedCmdListMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NonImmedCmdListMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NonImmedCmdListMemory,*pFVar1,
               L"Nonimmed. Command List memory","STATGROUP_RHICMDLIST","STATCAT_Advanced",
               L"RHICmdList",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParallelTranslate'' @ 14105e910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParallelTranslate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParallelTranslate == (FThreadSafeStaticStat<FStat_STAT_ParallelTranslate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParallelTranslate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelTranslate,*pFVar1,
               L"Parallel Translate","STATGROUP_RHICMDLIST","STATCAT_Advanced",L"RHICmdList",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParallelTranslateWait'' @ 14105e9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParallelTranslateWait__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParallelTranslateWait ==
      (FThreadSafeStaticStat<FStat_STAT_ParallelTranslateWait>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParallelTranslateWait");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelTranslateWait,*pFVar1,
               L"RHI Thread Parallel Translate Wait","STATGROUP_RHICMDLIST","STATCAT_Advanced",
               L"RHICmdList",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHIDrawPrimitiveCalls'' @ 14105ea30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHIDrawPrimitiveCalls__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHIDrawPrimitiveCalls ==
      (FThreadSafeStaticStat<FStat_STAT_RHIDrawPrimitiveCalls>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHIDrawPrimitiveCalls");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIDrawPrimitiveCalls,*pFVar1,
               L"DrawPrimitive calls","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHILines'' @ 14105eac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHILines__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHILines == (FThreadSafeStaticStat<FStat_STAT_RHILines>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHILines");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHILines,*pFVar1,L"Lines drawn",
               "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,false,false,MCR_Invalid)
    ;
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHIThreadExecute'' @ 14105eb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHIThreadExecute__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHIThreadExecute == (FThreadSafeStaticStat<FStat_STAT_RHIThreadExecute>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHIThreadExecute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHIThreadExecute,*pFVar1,
               L"RHI Thread Execute","STATGROUP_RHICMDLIST","STATCAT_Advanced",L"RHICmdList",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RHITriangles'' @ 14105ebe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RHITriangles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RHITriangles == (FThreadSafeStaticStat<FStat_STAT_RHITriangles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RHITriangles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RHITriangles,*pFVar1,L"Triangles drawn",
               "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,false,false,MCR_Invalid)
    ;
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RTAccelerationStructureMemory'' @ 14105ec70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RTAccelerationStructureMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RTAccelerationStructureMemory ==
      (FThreadSafeStaticStat<FStat_STAT_RTAccelerationStructureMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RTAccelerationStructureMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RTAccelerationStructureMemory,*pFVar1,
               L"RayTracing Acceleration Structure Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI"
               ,true,false,ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RenderTargetMemory2D'' @ 14105ed00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RenderTargetMemory2D__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RenderTargetMemory2D ==
      (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory2D>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RenderTargetMemory2D");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderTargetMemory2D,*pFVar1,
               L"Render Target 2D Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,
               ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RenderTargetMemory3D'' @ 14105ed90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RenderTargetMemory3D__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RenderTargetMemory3D ==
      (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemory3D>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RenderTargetMemory3D");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderTargetMemory3D,*pFVar1,
               L"Render Target 3D Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,
               ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RenderTargetMemoryCube'' @ 14105ee20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RenderTargetMemoryCube__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RenderTargetMemoryCube ==
      (FThreadSafeStaticStat<FStat_STAT_RenderTargetMemoryCube>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RenderTargetMemoryCube");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderTargetMemoryCube,*pFVar1,
               L"Render Target Cube Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,
               ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReservedCommittedBufferMemory'' @ 14105eeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ReservedCommittedBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReservedCommittedBufferMemory ==
      (FThreadSafeStaticStat<FStat_STAT_ReservedCommittedBufferMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ReservedCommittedBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReservedCommittedBufferMemory,*pFVar1,
               L"Reserved Buffer Memory (Committed)","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,
               false,ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReservedCommittedTextureMemory'' @ 14105ef40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ReservedCommittedTextureMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReservedCommittedTextureMemory ==
      (FThreadSafeStaticStat<FStat_STAT_ReservedCommittedTextureMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ReservedCommittedTextureMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReservedCommittedTextureMemory,*pFVar1,
               L"Reserved Texture Memory (Committed)","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true
               ,false,ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReservedUncommittedBufferMemory'' @ 14105efd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ReservedUncommittedBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReservedUncommittedBufferMemory ==
      (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedBufferMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ReservedUncommittedBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReservedUncommittedBufferMemory,*pFVar1,
               L"Reserved Buffer Memory (Uncommitted)","STATGROUP_RHI","STATCAT_Advanced",L"RHI",
               true,false,ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReservedUncommittedTextureMemory'' @ 14105f060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ReservedUncommittedTextureMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReservedUncommittedTextureMemory ==
      (FThreadSafeStaticStat<FStat_STAT_ReservedUncommittedTextureMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ReservedUncommittedTextureMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReservedUncommittedTextureMemory,*pFVar1,
               L"Reserved Texture Memory (Uncommitted)","STATGROUP_RHI","STATCAT_Advanced",L"RHI",
               true,false,ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ResourceDescriptorsAllocated'' @ 14105f0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ResourceDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ResourceDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_ResourceDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ResourceDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResourceDescriptorsAllocated,*pFVar1,
               L"Resource Descriptors Allocated","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RuntimeComputePSOHitchCount'' @ 14105f180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RuntimeComputePSOHitchCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RuntimeComputePSOHitchCount ==
      (FThreadSafeStaticStat<FStat_STAT_RuntimeComputePSOHitchCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RuntimeComputePSOHitchCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RuntimeComputePSOHitchCount,*pFVar1,
               L"Runtime Compute PSO Hitch Count","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RuntimeGraphicsPSOHitchCount'' @ 14105f210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RuntimeGraphicsPSOHitchCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RuntimeGraphicsPSOHitchCount ==
      (FThreadSafeStaticStat<FStat_STAT_RuntimeGraphicsPSOHitchCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RuntimeGraphicsPSOHitchCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RuntimeGraphicsPSOHitchCount,*pFVar1,
               L"Runtime Graphics PSO Hitch Count","STATGROUP_PipelineStateCache","STATCAT_Advanced"
               ,L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SamplerDescriptorsAllocated'' @ 14105f2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SamplerDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SamplerDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_SamplerDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SamplerDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SamplerDescriptorsAllocated,*pFVar1,
               L"Sampler Descriptors Allocated","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SpinWaitRHIThreadStall'' @ 14105f330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SpinWaitRHIThreadStall__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SpinWaitRHIThreadStall ==
      (FThreadSafeStaticStat<FStat_STAT_SpinWaitRHIThreadStall>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SpinWaitRHIThreadStall");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpinWaitRHIThreadStall,*pFVar1,
               L"Spin RHIThread wait for stall","STATGROUP_RHICMDLIST","STATCAT_Advanced",
               L"RHICmdList",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StructuredBufferMemory'' @ 14105f3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StructuredBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StructuredBufferMemory ==
      (FThreadSafeStaticStat<FStat_STAT_StructuredBufferMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_StructuredBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StructuredBufferMemory,*pFVar1,
               L"Structured Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,
               ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TextureMemory2D'' @ 14105f450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TextureMemory2D__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TextureMemory2D == (FThreadSafeStaticStat<FStat_STAT_TextureMemory2D>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TextureMemory2D");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureMemory2D,*pFVar1,
               L"Texture 2D Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,ST_int64,
               false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TextureMemory3D'' @ 14105f4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TextureMemory3D__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TextureMemory3D == (FThreadSafeStaticStat<FStat_STAT_TextureMemory3D>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TextureMemory3D");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureMemory3D,*pFVar1,
               L"Texture 3D Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,ST_int64,
               false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TextureMemoryCube'' @ 14105f570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TextureMemoryCube__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TextureMemoryCube == (FThreadSafeStaticStat<FStat_STAT_TextureMemoryCube>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TextureMemoryCube");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureMemoryCube,*pFVar1,
               L"Texture Cube Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,ST_int64,
               false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UAVTextureMemory'' @ 14105f600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UAVTextureMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UAVTextureMemory == (FThreadSafeStaticStat<FStat_STAT_UAVTextureMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UAVTextureMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UAVTextureMemory,*pFVar1,
               L"UAV Texture Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,ST_int64,
               false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UniformBufferMemory'' @ 14105f690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UniformBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UniformBufferMemory == (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_UniformBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UniformBufferMemory,*pFVar1,
               L"Uniform Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,
               ST_int64,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VertexBufferMemory'' @ 14105f720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VertexBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VertexBufferMemory == (FThreadSafeStaticStat<FStat_STAT_VertexBufferMemory>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VertexBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VertexBufferMemory,*pFVar1,
               L"Vertex Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,false,ST_int64
               ,false,false,MCR_GPU);
  }
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_DrawCall'' @ 14105f7b0

void __cdecl _dynamic_initializer_for___GCsvCategory_DrawCall__(void)

{
  FString::operator=(&_GCsvCategory_DrawCall.Name,L"DrawCall");
  _GCsvCategory_DrawCall.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_DrawCall.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_DrawCall__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_GPUMem'' @ 14105f800

void __cdecl _dynamic_initializer_for___GCsvCategory_GPUMem__(void)

{
  FString::operator=(&_GCsvCategory_GPUMem.Name,L"GPUMem");
  _GCsvCategory_GPUMem.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_GPUMem.Name,true,false)
  ;
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_GPUMem__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_PSOPrecacheCompiling'' @ 14105f850

void __cdecl _dynamic_initializer_for___GCsvCategory_PSOPrecacheCompiling__(void)

{
  FString::operator=(&_GCsvCategory_PSOPrecacheCompiling.Name,L"PSOPrecacheCompiling");
  _GCsvCategory_PSOPrecacheCompiling.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_PSOPrecacheCompiling.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_PSOPrecacheCompiling__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_RHI'' @ 14105f8a0

void __cdecl _dynamic_initializer_for___GCsvCategory_RHI__(void)

{
  FString::operator=(&_GCsvCategory_RHI.Name,L"RHI");
  _GCsvCategory_RHI.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_RHI.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_RHI__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_RHITFlushes'' @ 14105f8f0

void __cdecl _dynamic_initializer_for___GCsvCategory_RHITFlushes__(void)

{
  FString::operator=(&_GCsvCategory_RHITFlushes.Name,L"RHITFlushes");
  _GCsvCategory_RHITFlushes.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_RHITFlushes.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_RHITFlushes__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_RHITStalls'' @ 14105f940

void __cdecl _dynamic_initializer_for___GCsvCategory_RHITStalls__(void)

{
  FString::operator=(&_GCsvCategory_RHITStalls.Name,L"RHITStalls");
  _GCsvCategory_RHITStalls.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_RHITStalls.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_RHITStalls__);
  return;
}

// <lambda_invoker_cdecl> @ 145c7f320

void __cdecl <lambda_3>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FRHIUniformBufferLayoutInitializer::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 145c7f340

void __cdecl <lambda_4>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FRHIUniformBufferResourceInitializer::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 145c7f360

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
<lambda_5>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  bool bVar1;
  
  if (0 < param_1->ArrayNum) {
    bVar1 = ::FString::ToBool((FString *)(param_1->AllocatorInstance).Data);
    FDynamicRHI::EnableIdealGPUCaptureOptions(bVar1);
    return;
  }
  if (3 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Usage__r_RHISet_151107c00,(FLogCategoryBase *)&LogRHI
              );
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 145c7f3b0

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
<lambda_6>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  <lambda_6> local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 145c7f3d0

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
<lambda_7>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  <lambda_7> local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// operator()<`FRHIBreadcrumbNode::GetFullPath'::__l2::<lambda_1>_> @ 145c7f5a0

void __thiscall
`FRHIBreadcrumbNode::GetFullPath'::__l2::<lambda_1>::
operator()<_FRHIBreadcrumbNode::GetFullPath_::__l2::<lambda_1>_>
          (void *this,<lambda_1> *param_1,FRHIBreadcrumbNode *param_2)

{
  wchar_t *_Str;
  size_t sVar1;
  
  if ((param_2 != (FRHIBreadcrumbNode *)0x0) && (param_2 != FRHIBreadcrumbNode::Sentinel)) {
    operator()<_FRHIBreadcrumbNode::GetFullPath_::__l2::<lambda_1>_>
              (param_1,param_1,param_2->Parent);
    _Str = (wchar_t *)
           (**(code **)(param_2->_padding_ + 0x10))(param_2,*(undefined8 *)((longlong)this + 8));
    sVar1 = wcslen(_Str);
    ::FString::AppendChars(*(FString **)this,_Str,(int)sVar1);
    if (param_2 != *(FRHIBreadcrumbNode **)((longlong)this + 0x10)) {
      ::FString::AppendChars(*(FString **)this,L"/",1);
    }
  }
  return;
}

// operator()<`FRHICommandListExecutor::Submit'::__l2::<lambda_1>_> @ 145c7f630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRHICommandListExecutor::Submit'::__l2::<lambda_1>::
operator()<_FRHICommandListExecutor::Submit_::__l2::<lambda_1>_>
          (void *this,<lambda_1> *param_1,FRHICommandListBase *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FRHICommandListBase *local_res18 [2];
  
  pFVar7 = (param_2->AttachedCmdLists).AllocatorInstance.Data;
  iVar6 = (param_2->AttachedCmdLists).ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar6 * 8;
  local_res18[0] = param_2;
  while( true ) {
    if ((param_2->AttachedCmdLists).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRHICommandListBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar2) break;
    operator()<_FRHICommandListExecutor::Submit_::__l2::<lambda_1>_>
              (param_1,param_1,*(FRHICommandListBase **)pFVar7);
    pFVar7 = pFVar7 + 8;
  }
  pFVar3 = *(ForAnyElementType **)this;
  if ((pFVar3->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar6 + 1;
  *(FRHICommandListBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_res18[0];
  return;
}

// operator()<`FRHIBreadcrumbNode::WalkIn'::__l5::<lambda_1>_> @ 145c7f760

void __thiscall
`FRHIBreadcrumbNode::WalkIn'::__l5::<lambda_1>::
operator()<_FRHIBreadcrumbNode::WalkIn_::__l5::<lambda_1>_>
          (void *this,<lambda_1> *param_1,FRHIBreadcrumbNode *param_2)

{
  if ((param_2 != (FRHIBreadcrumbNode *)0x0) && (param_2 != FRHIBreadcrumbNode::Sentinel)) {
    operator()<_FRHIBreadcrumbNode::WalkIn_::__l5::<lambda_1>_>(param_1,param_1,param_2->Parent);
    if (param_2->TraceCpuSpecId != 0) {
      if (param_2->TraceCpuMetadataId != 0) {
        FCpuProfilerTrace::OutputBeginEventWithMetadata(param_2->TraceCpuMetadataId);
        return;
      }
      FCpuProfilerTrace::OutputBeginEvent(param_2->TraceCpuSpecId);
    }
  }
  return;
}

// operator()<``FRHICommandListBase::ActivatePipelines'::__l2::<lambda_1>::operator()'::__l77::<lambda_1>_> @ 145c7f7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
``FRHICommandListBase::ActivatePipelines'::__l2::<lambda_1>::operator()'::__l77::<lambda_1>::
operator()<__FRHICommandListBase::ActivatePipelines_::__l2::<lambda_1>::operator()_::__l77::<lambda_1>_>
          (void *this,FRHIBreadcrumbNode *param_1,<lambda_1> *param_2)

{
  if (param_1 != *(FRHIBreadcrumbNode **)this) {
    operator()<__FRHICommandListBase::ActivatePipelines_::__l2::<lambda_1>::operator()_::__l77::<lambda_1>_>
              (param_2,param_1->Parent,param_2);
    FRHIComputeCommandList::BeginBreadcrumbGPU
              (*(FRHIComputeCommandList **)((longlong)this + 8),param_1,
               *(ERHIPipeline *)((longlong)this + 0x10));
  }
  return;
}

// operator()<`FRHIBreadcrumbNode::WalkInRange'::__l12::<lambda_1>_> @ 145c7f800

void __thiscall
`FRHIBreadcrumbNode::WalkInRange'::__l12::<lambda_1>::
operator()<_FRHIBreadcrumbNode::WalkInRange_::__l12::<lambda_1>_>
          (void *this,<lambda_1> *param_1,FRHIBreadcrumbNode *param_2)

{
  if (param_2 != (FRHIBreadcrumbNode *)**(longlong **)this) {
    operator()<_FRHIBreadcrumbNode::WalkInRange_::__l12::<lambda_1>_>
              (param_1,param_1,param_2->Parent);
  }
  if (param_2->TraceCpuSpecId != 0) {
    if (param_2->TraceCpuMetadataId != 0) {
      FCpuProfilerTrace::OutputBeginEventWithMetadata(param_2->TraceCpuMetadataId);
      return;
    }
    FCpuProfilerTrace::OutputBeginEvent(param_2->TraceCpuSpecId);
    return;
  }
  return;
}

// operator()<`FRHIBreadcrumbState::DumpActiveBreadcrumbs'::__l59::<lambda_2>_> @ 145c7f850

void __thiscall
`FRHIBreadcrumbState::DumpActiveBreadcrumbs'::__l59::<lambda_2>::
operator()<_FRHIBreadcrumbState::DumpActiveBreadcrumbs_::__l59::<lambda_2>_>
          (void *this,FRHIBreadcrumbNode *param_1,<lambda_2> *param_2)

{
  if (param_1 != (FRHIBreadcrumbNode *)0x0) {
    operator()<_FRHIBreadcrumbState::DumpActiveBreadcrumbs_::__l59::<lambda_2>_>
              (param_2,param_1->Parent,param_2);
    __l59::<lambda_1>::operator()(*(void **)this,param_1);
  }
  return;
}

// ConstructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,TSharedRef<FRHIBreadcrumbAllocator,1>,int> @ 145c7f890

void __cdecl
ConstructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,TSharedRef<FRHIBreadcrumbAllocator,1>,int>
          (void *param_1,TSharedRef<FRHIBreadcrumbAllocator,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FRHIBreadcrumbAllocator **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// DestructItems<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,int> @ 145c7f8d0

void __cdecl
DestructItems<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,int>
          (TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> *param_1,int param_2
          )

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x30;
    do {
      DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int>
                ((FNameMap *)*puVar1,*(int *)(puVar1 + 1));
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      if ((void *)puVar1[-2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-2]);
      }
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRHILockTracker::FUnlockFenceParams,int> @ 145c7f930

void __cdecl
DestructItems<FRHILockTracker::FUnlockFenceParams,int>(FUnlockFenceParams *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  
  if (param_2 != 0) {
    pTVar4 = &param_1->UnlockEvent;
    do {
      pFVar3 = pTVar4->Reference;
      if (pFVar3 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar3->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
        }
      }
      pTVar4 = pTVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FRHIResourceStats,1>,int> @ 145c7f980

void __cdecl
DestructItems<TSharedPtr<FRHIResourceStats,1>,int>
          (TSharedPtr<FRHIResourceStats,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<FRHICommandListExecutor::FTranslateState,TDefaultDelete<FRHICommandListExecutor::FTranslateState>_>,int> @ 145c7f9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TUniquePtr<FRHICommandListExecutor::FTranslateState,TDefaultDelete<FRHICommandListExecutor::FTranslateState>_>,int>
          (TUniquePtr<FRHICommandListExecutor::FTranslateState,TDefaultDelete<FRHICommandListExecutor::FTranslateState>_>
           *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FTranslateState *pFVar3;
  FBaseGraphTask *pFVar4;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar5;
  void *pvVar6;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar7;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar3 = param_1->Ptr;
    if (pFVar3 != (FTranslateState *)0x0) {
      pFVar4 = (pFVar3->TranslatePipe).LastEvent.Reference;
      if (pFVar4 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar4->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
        }
      }
      pTVar5 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)
                &(pFVar3->BreadcrumbAllocatorRefs).field_0x20;
      pTVar7 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)&pFVar3->BreadcrumbAllocatorRefs;
      if (pTVar5 != (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
        pTVar7 = pTVar5;
      }
      DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
                (pTVar7,*(int *)&(pFVar3->BreadcrumbAllocatorRefs).field_0x28);
      pvVar6 = *(void **)&(pFVar3->BreadcrumbAllocatorRefs).field_0x20;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      operator_delete(pFVar3,0x1898);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_> @ 145c81450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
ExecuteImmediateCommand<_TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap_::__l5::<lambda_1>_>
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this,
          <lambda_1> *param_1)

{
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *this_00;
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_128 [32];
  undefined8 *local_f8 [2];
  code *local_e8 [5];
  undefined8 *local_c0;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar4 = IsInRenderingThread();
  if (bVar4) {
    bVar4 = IsInRenderingThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_8c = 0x80;
    local_b8._0_8_ = (FScriptContainerElement *)0x0;
    local_b8._8_8_ = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_84 = 0;
    local_78 = (ForElementType<FSetElementId>)0x0;
    local_70 = 0;
    local_88 = 0xffffffff;
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                 *)local_b8,
                (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                 *)param_1);
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
      puVar5 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x68,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar5;
      GRHICommandList.CommandListImmediate._48_8_ = puVar5 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar5 = &
                ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__4____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV2_4__DiscardAndSwap_3_AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z__Z___6B_
      ;
      TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
      ::
      TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                ((TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                  *)(puVar5 + 2),
                 (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                  *)local_b8);
      puVar5[0xc] = L"TRHILambdaCommand";
    }
    else {
      `TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap'::__l5
      ::<lambda_1>::operator()(local_b8,&GRHICommandList.CommandListImmediate);
    }
    local_70 = 0;
    if (local_78 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78);
    }
    iVar2 = SUB84(local_b8._8_8_,4);
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
    }
    local_88 = 0xffffffff;
    local_84 = 0;
    local_90 = 0;
    if (0x80 < local_8c) {
      local_8c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
    }
    pFVar6 = (FScriptContainerElement *)local_b8._0_8_;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
      pFVar6 = (FScriptContainerElement *)local_b8._0_8_;
    }
  }
  else {
    local_3c = 0x80;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_34 = 0;
    local_28 = (ForElementType<FSetElementId>)0x0;
    local_20 = 0;
    local_38 = 0xffffffff;
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                 *)local_68,
                (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                 *)param_1);
    local_e8[0] = (code *)0x0;
    local_c0 = FMemory::Malloc(0x58,8);
    this_00 = (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
               *)(local_c0 + 1);
    *local_c0 = &
                ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV<lambda_1>__4__DiscardAndSwap_2_AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z__Z__00_00_Function_Private_Core_UE__6B_
    ;
    TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
    ::
    TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
              (this_00,(TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                        *)local_68);
    if (this_00 !=
        (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
         *)0x0) {
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,void>
                    ::Call;
    }
    FFunctionGraphTask::CreateAndDispatchWhenReady
              ((TUniqueFunction<void___cdecl(void)> *)local_f8,(TStatIdData *)local_e8,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)&TStatId::TStatId_NAME_None,MainQueue);
    if (local_f8[0] != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_f8[0] + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_f8[0])();
      }
    }
    local_20 = 0;
    if (local_28 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_28);
    }
    iVar2 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
    }
    local_38 = 0xffffffff;
    local_34 = 0;
    local_40 = 0;
    if (0x80 < local_3c) {
      local_3c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
    }
    pFVar6 = (FScriptContainerElement *)local_68._0_8_;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
      pFVar6 = (FScriptContainerElement *)local_68._0_8_;
    }
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return;
}

// ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_> @ 145c81760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
ExecuteImmediateCommand<_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::DiscardAndSwap_::__l5::<lambda_1>_>
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this,<lambda_1> *param_1)

{
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *this_00;
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_128 [32];
  undefined8 *local_f8 [2];
  code *local_e8 [5];
  undefined8 *local_c0;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar4 = IsInRenderingThread();
  if (bVar4) {
    bVar4 = IsInRenderingThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_8c = 0x80;
    local_b8._0_8_ = (FScriptContainerElement *)0x0;
    local_b8._8_8_ = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_84 = 0;
    local_78 = (ForElementType<FSetElementId>)0x0;
    local_70 = 0;
    local_88 = 0xffffffff;
    TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                 *)local_b8,
                (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                 *)param_1);
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
      puVar5 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x68,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar5;
      GRHICommandList.CommandListImmediate._48_8_ = puVar5 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar5 = &
                ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__4____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV2_4__DiscardAndSwap_3_AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z__Z___6B_
      ;
      TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
      ::
      TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                ((TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                  *)(puVar5 + 2),
                 (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                  *)local_b8);
      puVar5[0xc] = L"TRHILambdaCommand";
    }
    else {
      `TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
      DiscardAndSwap'::__l5::<lambda_1>::operator()(local_b8,&GRHICommandList.CommandListImmediate);
    }
    local_70 = 0;
    if (local_78 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78);
    }
    iVar2 = SUB84(local_b8._8_8_,4);
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
    }
    local_88 = 0xffffffff;
    local_84 = 0;
    local_90 = 0;
    if (0x80 < local_8c) {
      local_8c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
    }
    pFVar6 = (FScriptContainerElement *)local_b8._0_8_;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
      pFVar6 = (FScriptContainerElement *)local_b8._0_8_;
    }
  }
  else {
    local_3c = 0x80;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_34 = 0;
    local_28 = (ForElementType<FSetElementId>)0x0;
    local_20 = 0;
    local_38 = 0xffffffff;
    TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                 *)local_68,
                (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                 *)param_1);
    local_e8[0] = (code *)0x0;
    local_c0 = FMemory::Malloc(0x58,8);
    this_00 = (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
               *)(local_c0 + 1);
    *local_c0 = &
                ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV<lambda_1>__4__DiscardAndSwap_2_AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z__Z__00_00_Function_Private_Core_UE__6B_
    ;
    TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
    ::
    TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
              (this_00,(TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                        *)local_68);
    if (this_00 !=
        (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
         *)0x0) {
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,void>
                    ::Call;
    }
    FFunctionGraphTask::CreateAndDispatchWhenReady
              ((TUniqueFunction<void___cdecl(void)> *)local_f8,(TStatIdData *)local_e8,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)&TStatId::TStatId_NAME_None,MainQueue);
    if (local_f8[0] != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_f8[0] + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_f8[0])();
      }
    }
    local_20 = 0;
    if (local_28 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_28);
    }
    iVar2 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
    }
    local_38 = 0xffffffff;
    local_34 = 0;
    local_40 = 0;
    if (0x80 < local_3c) {
      local_3c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
    }
    pFVar6 = (FScriptContainerElement *)local_68._0_8_;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
      pFVar6 = (FScriptContainerElement *)local_68._0_8_;
    }
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return;
}

// ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_> @ 145c81a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
ExecuteImmediateCommand<_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::DiscardAndSwap_::__l5::<lambda_1>_>
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this,<lambda_1> *param_1)

{
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_128 [32];
  undefined8 *local_f8 [2];
  code *local_e8 [5];
  undefined8 *local_c0;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar4 = IsInRenderingThread();
  if (bVar4) {
    bVar4 = IsInRenderingThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_8c = 0x80;
    local_b8._0_8_ = (FScriptContainerElement *)0x0;
    local_b8._8_8_ = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_84 = 0;
    local_78 = (ForElementType<FSetElementId>)0x0;
    local_70 = 0;
    local_88 = 0xffffffff;
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                 *)local_b8,
                (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                 *)param_1);
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
      puVar5 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x68,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar5;
      GRHICommandList.CommandListImmediate._48_8_ = puVar5 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar5 = &
                ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__4____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV2_4__DiscardAndSwap_3_AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z__Z___6B_
      ;
      TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                  *)(puVar5 + 2),
                 (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                  *)local_b8);
      puVar5[0xc] = L"TRHILambdaCommand";
    }
    else {
      `TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
      DiscardAndSwap'::__l5::<lambda_1>::operator()(local_b8,&GRHICommandList.CommandListImmediate);
    }
    local_70 = 0;
    if (local_78 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78);
    }
    TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_b8,0,local_b8._8_4_);
    iVar2 = SUB84(local_b8._8_8_,4);
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
    }
    local_88 = 0xffffffff;
    local_84 = 0;
    local_90 = 0;
    if (0x80 < local_8c) {
      local_8c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
    }
    pFVar6 = (FScriptContainerElement *)local_b8._0_8_;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
      pFVar6 = (FScriptContainerElement *)local_b8._0_8_;
    }
  }
  else {
    local_3c = 0x80;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_34 = 0;
    local_28 = (ForElementType<FSetElementId>)0x0;
    local_20 = 0;
    local_38 = 0xffffffff;
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                 *)local_68,
                (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                 *)param_1);
    local_e8[0] = (code *)0x0;
    local_c0 = FMemory::Malloc(0x58,8);
    this_00 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
               *)(local_c0 + 1);
    *local_c0 = &
                ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV<lambda_1>__4__DiscardAndSwap_2_AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z__Z__00_00_Function_Private_Core_UE__6B_
    ;
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
              (this_00,(TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                        *)local_68);
    if (this_00 !=
        (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
         *)0x0) {
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,void>
                    ::Call;
    }
    FFunctionGraphTask::CreateAndDispatchWhenReady
              ((TUniqueFunction<void___cdecl(void)> *)local_f8,(TStatIdData *)local_e8,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)&TStatId::TStatId_NAME_None,MainQueue);
    if (local_f8[0] != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_f8[0] + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_f8[0])();
      }
    }
    local_20 = 0;
    if (local_28 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_28);
    }
    TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_68,0,local_68._8_4_);
    iVar2 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
    }
    local_38 = 0xffffffff;
    local_34 = 0;
    local_40 = 0;
    if (0x80 < local_3c) {
      local_3c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
    }
    pFVar6 = (FScriptContainerElement *)local_68._0_8_;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
      pFVar6 = (FScriptContainerElement *)local_68._0_8_;
    }
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return;
}

// GetTypeHash<unsigned_char,8,4294967295> @ 145c81f50

uint __cdecl
GetTypeHash<unsigned_char,8,4294967295>(TStaticArray<unsigned_char,8,4294967295> *param_1)

{
  TStaticArray<unsigned_char,8,4294967295> *pTVar1;
  uint uVar2;
  
  uVar2 = 0;
  pTVar1 = param_1 + 1;
  for (; param_1 != pTVar1;
      param_1 = (TStaticArray<unsigned_char,8,4294967295> *)((longlong)param_1 + 1)) {
    uVar2 = uVar2 ^ param_1->Elements[0] + 0x9e3779b9 + uVar2 * 0x40 + (uVar2 >> 2);
  }
  return uVar2;
}

// GetTypeHash<FRHISamplerState_*,2,4294967295> @ 145c81f90

uint __cdecl
GetTypeHash<FRHISamplerState_*,2,4294967295>(TStaticArray<FRHISamplerState_*,2,4294967295> *param_1)

{
  TStaticArray<FRHISamplerState_*,2,4294967295> *pTVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  pTVar1 = param_1 + 1;
  for (; param_1 != pTVar1;
      param_1 = (TStaticArray<FRHISamplerState_*,2,4294967295> *)((longlong)param_1 + 8)) {
    uVar3 = ((uint)(*(ulonglong *)param_1 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar2 = uVar2 ^ (uVar2 >> 2) + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 + -0x61c88647;
  }
  return uVar2;
}

// HeapSortInternal<`FRayTracingPipelineCache::Trim'::__l2::FEntry,int,FIdentityFunctor,TDereferenceWrapper<`FRayTracingPipelineCache::Trim'::__l2::FEntry,`FRayTracingPipelineCache::Trim'::__l2::<lambda_1>_>_> @ 145c81ff0

void __cdecl
AlgoImpl::
HeapSortInternal<_FRayTracingPipelineCache::Trim_::__l2::FEntry,int,FIdentityFunctor,TDereferenceWrapper<_FRayTracingPipelineCache::Trim_::__l2::FEntry,_FRayTracingPipelineCache::Trim_::__l2::<lambda_1>_>_>
          (FEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_FRayTracingPipelineCache::Trim(int)_::_2_::FEntry,_public:_void___cdecl_FRayTracingPipelineCache::Trim(int)_::_2_::<lambda_1>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  FRayTracingPipelineState *pFVar11;
  FRayTracingPipelineState *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  FEntry *pFVar21;
  int iVar22;
  FEntry *pFVar23;
  FEntry *pFVar24;
  longlong lVar25;
  
  if (param_2 < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar17 = (param_2 + -2) / 2;
  iVar18 = iVar17 * 2 + 1;
  iVar22 = iVar18;
  iVar20 = iVar17;
  do {
    while (param_2 <= iVar18) {
LAB_145c82160:
      if (iVar20 == 0) {
        iVar18 = param_2 + -1;
        lVar25 = (longlong)iVar18;
        if (0 < iVar18) {
          pFVar21 = param_1 + lVar25;
          do {
            uVar13 = (pFVar21->Key).MaxPayloadSizeInBytes;
            uVar4 = (pFVar21->Key).RayGenHash;
            uVar14 = (param_1->Key).MaxAttributeSizeInBytes;
            uVar15 = (param_1->Key).MaxPayloadSizeInBytes;
            uVar5 = (param_1->Key).RayGenHash;
            uVar6 = (param_1->Key).MissHash;
            uVar7 = (param_1->Key).HitGroupHash;
            uVar8 = (param_1->Key).CallableHash;
            uVar9 = param_1->LastFrameHit;
            uVar10 = param_1->HitsAcrossFrames;
            pFVar11 = param_1->Pipeline;
            (param_1->Key).MaxAttributeSizeInBytes = (pFVar21->Key).MaxAttributeSizeInBytes;
            (param_1->Key).MaxPayloadSizeInBytes = uVar13;
            (param_1->Key).RayGenHash = uVar4;
            uVar4 = (pFVar21->Key).HitGroupHash;
            (param_1->Key).MissHash = (pFVar21->Key).MissHash;
            (param_1->Key).HitGroupHash = uVar4;
            uVar4 = pFVar21->LastFrameHit;
            (param_1->Key).CallableHash = (pFVar21->Key).CallableHash;
            param_1->LastFrameHit = uVar4;
            pFVar12 = pFVar21->Pipeline;
            param_1->HitsAcrossFrames = pFVar21->HitsAcrossFrames;
            param_1->Pipeline = pFVar12;
            (pFVar21->Key).MaxAttributeSizeInBytes = uVar14;
            (pFVar21->Key).MaxPayloadSizeInBytes = uVar15;
            (pFVar21->Key).RayGenHash = uVar5;
            (pFVar21->Key).MissHash = uVar6;
            (pFVar21->Key).HitGroupHash = uVar7;
            (pFVar21->Key).CallableHash = uVar8;
            pFVar21->LastFrameHit = uVar9;
            pFVar21->HitsAcrossFrames = uVar10;
            pFVar21->Pipeline = pFVar11;
            iVar22 = 0;
            if (1 < iVar18) {
              do {
                iVar20 = iVar22 * 2;
                iVar17 = iVar20 + 1;
                if (iVar20 + 2 < iVar18) {
                  lVar1 = (longlong)iVar20 + 2;
                  lVar2 = (longlong)iVar20 + 1;
                  bVar16 = param_1[lVar2].LastFrameHit < param_1[lVar1].LastFrameHit;
                  if (param_1[lVar2].LastFrameHit == param_1[lVar1].LastFrameHit) {
                    bVar16 = param_1[lVar2].HitsAcrossFrames < param_1[lVar1].HitsAcrossFrames;
                  }
                  if (bVar16) {
                    iVar17 = iVar20;
                  }
                  iVar17 = iVar17 + 1;
                }
                pFVar23 = param_1 + iVar17;
                pFVar24 = param_1 + iVar22;
                if (pFVar24->LastFrameHit == pFVar23->LastFrameHit) {
                  bVar16 = pFVar23->HitsAcrossFrames < pFVar24->HitsAcrossFrames;
                }
                else {
                  bVar16 = pFVar23->LastFrameHit < pFVar24->LastFrameHit;
                }
                if (!bVar16) break;
                uVar13 = (pFVar23->Key).MaxPayloadSizeInBytes;
                uVar4 = (pFVar23->Key).RayGenHash;
                uVar14 = (pFVar24->Key).MaxAttributeSizeInBytes;
                uVar15 = (pFVar24->Key).MaxPayloadSizeInBytes;
                uVar5 = (pFVar24->Key).RayGenHash;
                uVar6 = (pFVar24->Key).MissHash;
                uVar7 = (pFVar24->Key).HitGroupHash;
                uVar8 = (pFVar24->Key).CallableHash;
                uVar9 = pFVar24->LastFrameHit;
                uVar10 = pFVar24->HitsAcrossFrames;
                pFVar11 = pFVar24->Pipeline;
                (pFVar24->Key).MaxAttributeSizeInBytes = (pFVar23->Key).MaxAttributeSizeInBytes;
                (pFVar24->Key).MaxPayloadSizeInBytes = uVar13;
                (pFVar24->Key).RayGenHash = uVar4;
                uVar4 = (pFVar23->Key).HitGroupHash;
                (pFVar24->Key).MissHash = (pFVar23->Key).MissHash;
                (pFVar24->Key).HitGroupHash = uVar4;
                uVar4 = pFVar23->LastFrameHit;
                (pFVar24->Key).CallableHash = (pFVar23->Key).CallableHash;
                pFVar24->LastFrameHit = uVar4;
                pFVar12 = pFVar23->Pipeline;
                pFVar24->HitsAcrossFrames = pFVar23->HitsAcrossFrames;
                pFVar24->Pipeline = pFVar12;
                (pFVar23->Key).MaxAttributeSizeInBytes = uVar14;
                (pFVar23->Key).MaxPayloadSizeInBytes = uVar15;
                (pFVar23->Key).RayGenHash = uVar5;
                (pFVar23->Key).MissHash = uVar6;
                (pFVar23->Key).HitGroupHash = uVar7;
                (pFVar23->Key).CallableHash = uVar8;
                pFVar23->LastFrameHit = uVar9;
                pFVar23->HitsAcrossFrames = uVar10;
                pFVar23->Pipeline = pFVar11;
                iVar22 = iVar17;
              } while (iVar17 * 2 + 1 < iVar18);
            }
            iVar18 = iVar18 + -1;
            lVar25 = lVar25 + -1;
            pFVar21 = pFVar21 + -1;
          } while (0 < lVar25);
        }
        return;
      }
      iVar17 = iVar20 + -1;
      iVar18 = iVar22 + -2;
      iVar22 = iVar18;
      iVar20 = iVar17;
    }
    iVar18 = iVar17 * 2;
    iVar19 = iVar18 + 1;
    if (iVar18 + 2 < param_2) {
      lVar25 = (longlong)iVar18 + 2;
      lVar1 = (longlong)iVar18 + 1;
      bVar16 = param_1[lVar1].LastFrameHit < param_1[lVar25].LastFrameHit;
      if (param_1[lVar1].LastFrameHit == param_1[lVar25].LastFrameHit) {
        bVar16 = param_1[lVar1].HitsAcrossFrames < param_1[lVar25].HitsAcrossFrames;
      }
      if (bVar16) {
        iVar19 = iVar18;
      }
      iVar19 = iVar19 + 1;
    }
    pFVar21 = param_1 + iVar19;
    pFVar23 = param_1 + iVar17;
    if (pFVar23->LastFrameHit == pFVar21->LastFrameHit) {
      bVar16 = pFVar21->HitsAcrossFrames < pFVar23->HitsAcrossFrames;
    }
    else {
      bVar16 = pFVar21->LastFrameHit < pFVar23->LastFrameHit;
    }
    if (!bVar16) goto LAB_145c82160;
    uVar13 = (pFVar21->Key).MaxPayloadSizeInBytes;
    uVar4 = (pFVar21->Key).RayGenHash;
    iVar18 = iVar19 * 2 + 1;
    uVar14 = (pFVar23->Key).MaxAttributeSizeInBytes;
    uVar15 = (pFVar23->Key).MaxPayloadSizeInBytes;
    uVar5 = (pFVar23->Key).RayGenHash;
    uVar6 = (pFVar23->Key).MissHash;
    uVar7 = (pFVar23->Key).HitGroupHash;
    uVar8 = (pFVar23->Key).CallableHash;
    uVar9 = pFVar23->LastFrameHit;
    uVar10 = pFVar23->HitsAcrossFrames;
    pFVar11 = pFVar23->Pipeline;
    (pFVar23->Key).MaxAttributeSizeInBytes = (pFVar21->Key).MaxAttributeSizeInBytes;
    (pFVar23->Key).MaxPayloadSizeInBytes = uVar13;
    (pFVar23->Key).RayGenHash = uVar4;
    uVar4 = (pFVar21->Key).HitGroupHash;
    (pFVar23->Key).MissHash = (pFVar21->Key).MissHash;
    (pFVar23->Key).HitGroupHash = uVar4;
    uVar4 = pFVar21->LastFrameHit;
    (pFVar23->Key).CallableHash = (pFVar21->Key).CallableHash;
    pFVar23->LastFrameHit = uVar4;
    pFVar12 = pFVar21->Pipeline;
    pFVar23->HitsAcrossFrames = pFVar21->HitsAcrossFrames;
    pFVar23->Pipeline = pFVar12;
    (pFVar21->Key).MaxAttributeSizeInBytes = uVar14;
    (pFVar21->Key).MaxPayloadSizeInBytes = uVar15;
    (pFVar21->Key).RayGenHash = uVar5;
    (pFVar21->Key).MissHash = uVar6;
    (pFVar21->Key).HitGroupHash = uVar7;
    (pFVar21->Key).CallableHash = uVar8;
    pFVar21->LastFrameHit = uVar9;
    pFVar21->HitsAcrossFrames = uVar10;
    pFVar21->Pipeline = pFVar11;
    iVar17 = iVar19;
  } while( true );
}

// HeapSortInternal<RHIInternal::FResourceEntry,int,FIdentityFunctor,TDereferenceWrapper<RHIInternal::FResourceEntry,`RHIInternal::GetTrackedResourcesInternal'::__l2::<lambda_2>_>_> @ 145c822f0

void __cdecl
AlgoImpl::
HeapSortInternal<RHIInternal::FResourceEntry,int,FIdentityFunctor,TDereferenceWrapper<RHIInternal::FResourceEntry,_RHIInternal::GetTrackedResourcesInternal_::__l2::<lambda_2>_>_>
          (FResourceEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<RHIInternal::FResourceEntry,_void___cdecl_RHIInternal::GetTrackedResourcesInternal(FString_const_&,ERHIResourceType,EBooleanFilter,TArray<RHIInternal::FResourceEntry,TSizedDefaultAllocator<32>_>_&,int_&,int_&,int_&,__int64_&,__int64_&)_::_2_::<lambda_2>_>
          param_4)

{
  ulong64 *puVar1;
  code *pcVar2;
  FName FVar3;
  FRHIResource *pFVar4;
  FName FVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  undefined8 uVar8;
  ulong64 uVar9;
  undefined8 uVar10;
  FResourceEntry *pFVar11;
  undefined7 uVar12;
  ERHIResourceType EVar13;
  undefined7 uVar14;
  bool bVar15;
  bool bVar16;
  undefined5 uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined5 uVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  FResourceEntry *pFVar28;
  FResourceEntry *pFVar29;
  int iVar30;
  
  if (param_2 < 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar22) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar22) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar23 = (param_2 + -2) / 2;
  iVar24 = iVar23 * 2 + 1;
  iVar30 = iVar24;
  iVar25 = iVar23;
  do {
    while (param_2 <= iVar24) {
LAB_145c82423:
      if (iVar25 == 0) {
        iVar24 = param_2 + -1;
        lVar27 = (longlong)iVar24;
        if (0 < iVar24) {
          pFVar28 = param_1 + lVar27;
          do {
            FVar3 = (pFVar28->ResourceInfo).Name;
            pFVar4 = param_1->Resource;
            FVar5 = (param_1->ResourceInfo).Name;
            EVar13 = (param_1->ResourceInfo).Type;
            uVar14 = *(undefined7 *)&(param_1->ResourceInfo).field_0x9;
            uVar6 = (param_1->ResourceInfo).VRamAllocation.AllocationStart;
            uVar7 = (param_1->ResourceInfo).VRamAllocation.AllocationSize;
            bVar18 = (param_1->ResourceInfo).IsTransient;
            bVar19 = (param_1->ResourceInfo).bValid;
            bVar20 = (param_1->ResourceInfo).bResident;
            uVar21 = *(undefined5 *)&(param_1->ResourceInfo).field_0x23;
            param_1->Resource = pFVar28->Resource;
            (param_1->ResourceInfo).Name = FVar3;
            uVar12 = *(undefined7 *)&(pFVar28->ResourceInfo).field_0x9;
            uVar9 = (pFVar28->ResourceInfo).VRamAllocation.AllocationStart;
            (param_1->ResourceInfo).Type = (pFVar28->ResourceInfo).Type;
            *(undefined7 *)&(param_1->ResourceInfo).field_0x9 = uVar12;
            (param_1->ResourceInfo).VRamAllocation.AllocationStart = uVar9;
            bVar22 = (pFVar28->ResourceInfo).IsTransient;
            bVar15 = (pFVar28->ResourceInfo).bValid;
            bVar16 = (pFVar28->ResourceInfo).bResident;
            uVar17 = *(undefined5 *)&(pFVar28->ResourceInfo).field_0x23;
            (param_1->ResourceInfo).VRamAllocation.AllocationSize =
                 (pFVar28->ResourceInfo).VRamAllocation.AllocationSize;
            (param_1->ResourceInfo).IsTransient = bVar22;
            (param_1->ResourceInfo).bValid = bVar15;
            (param_1->ResourceInfo).bResident = bVar16;
            *(undefined5 *)&(param_1->ResourceInfo).field_0x23 = uVar17;
            pFVar28->Resource = pFVar4;
            (pFVar28->ResourceInfo).Name = FVar5;
            (pFVar28->ResourceInfo).Type = EVar13;
            *(undefined7 *)&(pFVar28->ResourceInfo).field_0x9 = uVar14;
            (pFVar28->ResourceInfo).VRamAllocation.AllocationStart = uVar6;
            (pFVar28->ResourceInfo).VRamAllocation.AllocationSize = uVar7;
            (pFVar28->ResourceInfo).IsTransient = bVar18;
            (pFVar28->ResourceInfo).bValid = bVar19;
            (pFVar28->ResourceInfo).bResident = bVar20;
            *(undefined5 *)&(pFVar28->ResourceInfo).field_0x23 = uVar21;
            iVar30 = 0;
            if (1 < iVar24) {
              do {
                iVar23 = iVar30 * 2;
                iVar25 = iVar23 + 1;
                if (iVar23 + 2 < iVar24) {
                  if (param_1[iVar25].ResourceInfo.VRamAllocation.AllocationSize <
                      param_1[(longlong)iVar23 + 2].ResourceInfo.VRamAllocation.AllocationSize) {
                    iVar25 = iVar23;
                  }
                  iVar25 = iVar25 + 1;
                }
                pFVar29 = param_1 + iVar25;
                if (param_1[iVar30].ResourceInfo.VRamAllocation.AllocationSize <=
                    (pFVar29->ResourceInfo).VRamAllocation.AllocationSize) break;
                FVar3 = (pFVar29->ResourceInfo).Name;
                pFVar4 = param_1[iVar30].Resource;
                FVar5 = param_1[iVar30].ResourceInfo.Name;
                pFVar11 = param_1 + iVar30;
                EVar13 = (pFVar11->ResourceInfo).Type;
                uVar14 = *(undefined7 *)&(pFVar11->ResourceInfo).field_0x9;
                uVar6 = ((FVRamAllocation *)(&(pFVar11->ResourceInfo).Type + 8))->AllocationStart;
                puVar1 = &param_1[iVar30].ResourceInfo.VRamAllocation.AllocationSize;
                uVar7 = *puVar1;
                uVar8 = puVar1[1];
                param_1[iVar30].Resource = pFVar29->Resource;
                param_1[iVar30].ResourceInfo.Name = FVar3;
                uVar12 = *(undefined7 *)&(pFVar29->ResourceInfo).field_0x9;
                uVar9 = (pFVar29->ResourceInfo).VRamAllocation.AllocationStart;
                pFVar11 = param_1 + iVar30;
                (pFVar11->ResourceInfo).Type = (pFVar29->ResourceInfo).Type;
                *(undefined7 *)&(pFVar11->ResourceInfo).field_0x9 = uVar12;
                ((FVRamAllocation *)(&(pFVar11->ResourceInfo).Type + 8))->AllocationStart = uVar9;
                uVar10 = *(undefined8 *)&(pFVar29->ResourceInfo).IsTransient;
                puVar1 = &param_1[iVar30].ResourceInfo.VRamAllocation.AllocationSize;
                *puVar1 = (pFVar29->ResourceInfo).VRamAllocation.AllocationSize;
                puVar1[1] = uVar10;
                pFVar29->Resource = pFVar4;
                (pFVar29->ResourceInfo).Name = FVar5;
                (pFVar29->ResourceInfo).Type = EVar13;
                *(undefined7 *)&(pFVar29->ResourceInfo).field_0x9 = uVar14;
                (pFVar29->ResourceInfo).VRamAllocation.AllocationStart = uVar6;
                (pFVar29->ResourceInfo).VRamAllocation.AllocationSize = uVar7;
                (pFVar29->ResourceInfo).IsTransient = (bool)(char)uVar8;
                (pFVar29->ResourceInfo).bValid = (bool)(char)((ulonglong)uVar8 >> 8);
                (pFVar29->ResourceInfo).bResident = (bool)(char)((ulonglong)uVar8 >> 0x10);
                *(int5 *)&(pFVar29->ResourceInfo).field_0x23 = (int5)((ulonglong)uVar8 >> 0x18);
                iVar30 = iVar25;
              } while (iVar25 * 2 + 1 < iVar24);
            }
            iVar24 = iVar24 + -1;
            lVar27 = lVar27 + -1;
            pFVar28 = pFVar28 + -1;
          } while (0 < lVar27);
        }
        return;
      }
      iVar23 = iVar25 + -1;
      iVar24 = iVar30 + -2;
      iVar30 = iVar24;
      iVar25 = iVar23;
    }
    iVar24 = iVar23 * 2;
    iVar26 = iVar24 + 1;
    if (iVar24 + 2 < param_2) {
      if (param_1[iVar26].ResourceInfo.VRamAllocation.AllocationSize <
          param_1[(longlong)iVar24 + 2].ResourceInfo.VRamAllocation.AllocationSize) {
        iVar26 = iVar24;
      }
      iVar26 = iVar26 + 1;
    }
    pFVar28 = param_1 + iVar26;
    if (param_1[iVar23].ResourceInfo.VRamAllocation.AllocationSize <=
        (pFVar28->ResourceInfo).VRamAllocation.AllocationSize) goto LAB_145c82423;
    FVar3 = (pFVar28->ResourceInfo).Name;
    iVar24 = iVar26 * 2 + 1;
    pFVar4 = param_1[iVar23].Resource;
    FVar5 = param_1[iVar23].ResourceInfo.Name;
    pFVar29 = param_1 + iVar23;
    EVar13 = (pFVar29->ResourceInfo).Type;
    uVar14 = *(undefined7 *)&(pFVar29->ResourceInfo).field_0x9;
    uVar6 = ((FVRamAllocation *)(&(pFVar29->ResourceInfo).Type + 8))->AllocationStart;
    puVar1 = &param_1[iVar23].ResourceInfo.VRamAllocation.AllocationSize;
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    param_1[iVar23].Resource = pFVar28->Resource;
    param_1[iVar23].ResourceInfo.Name = FVar3;
    uVar12 = *(undefined7 *)&(pFVar28->ResourceInfo).field_0x9;
    uVar9 = (pFVar28->ResourceInfo).VRamAllocation.AllocationStart;
    pFVar29 = param_1 + iVar23;
    (pFVar29->ResourceInfo).Type = (pFVar28->ResourceInfo).Type;
    *(undefined7 *)&(pFVar29->ResourceInfo).field_0x9 = uVar12;
    ((FVRamAllocation *)(&(pFVar29->ResourceInfo).Type + 8))->AllocationStart = uVar9;
    uVar10 = *(undefined8 *)&(pFVar28->ResourceInfo).IsTransient;
    puVar1 = &param_1[iVar23].ResourceInfo.VRamAllocation.AllocationSize;
    *puVar1 = (pFVar28->ResourceInfo).VRamAllocation.AllocationSize;
    puVar1[1] = uVar10;
    pFVar28->Resource = pFVar4;
    (pFVar28->ResourceInfo).Name = FVar5;
    (pFVar28->ResourceInfo).Type = EVar13;
    *(undefined7 *)&(pFVar28->ResourceInfo).field_0x9 = uVar14;
    (pFVar28->ResourceInfo).VRamAllocation.AllocationStart = uVar6;
    (pFVar28->ResourceInfo).VRamAllocation.AllocationSize = uVar7;
    (pFVar28->ResourceInfo).IsTransient = (bool)(char)uVar8;
    (pFVar28->ResourceInfo).bValid = (bool)(char)((ulonglong)uVar8 >> 8);
    (pFVar28->ResourceInfo).bResident = (bool)(char)((ulonglong)uVar8 >> 0x10);
    *(int5 *)&(pFVar28->ResourceInfo).field_0x23 = (int5)((ulonglong)uVar8 >> 0x18);
    iVar23 = iVar26;
  } while( true );
}

// InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer> @ 145c82560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
          (FComputePipelineStateInitializer *param_1,EPSOPrecacheResult param_2,bool param_3,
          FPipelineStateAsync *param_4,FPSOCompilationDebugData *param_5,bool param_6)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  int iVar4;
  Type TVar5;
  FCompileComputePipelineStateTask *pFVar6;
  FPSOPrecacheAsyncTask *this;
  longlong lVar7;
  FQueuedThreadPool *pFVar8;
  FTaskBase *this_00;
  TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
  *this_01;
  FAsyncTaskBase *this_02;
  FPSOPrecacheAsyncTask *local_res8;
  ETaskPriority local_58 [16];
  code *local_48 [2];
  undefined **local_38;
  FCompileComputePipelineStateTask *local_30;
  undefined8 local_20;
  
  if ((((param_1->field1_0x8).Flags & 0x40) != 0) &&
     (iVar4 = FPSOPrecacheThreadPool::GetDesiredPoolSize(), 0 < iVar4)) {
    pFVar6 = operator_new(0x40);
    if (pFVar6 == (FCompileComputePipelineStateTask *)0x0) {
      pFVar6 = (FCompileComputePipelineStateTask *)0x0;
    }
    else {
      pFVar6 = FCompileComputePipelineStateTask::FCompileComputePipelineStateTask
                         (pFVar6,param_4,param_1,param_2,param_3,param_6,param_5);
    }
    this = operator_new(0xa0);
    if (this == (FPSOPrecacheAsyncTask *)0x0) {
      local_res8 = (FPSOPrecacheAsyncTask *)0x0;
      FPipelineStateAsync::SetPrecompileTask(param_4,(FPSOPrecacheAsyncTask *)&local_res8);
      if (pFVar6 != (FCompileComputePipelineStateTask *)0x0) {
        if ((char)pFVar6->field_0x10 < '\0') {
          LOCK();
          GPipelinePrecompileTasksInFlight =
               (atomic<int>)((int)GPipelinePrecompileTasksInFlight + -1);
          UNLOCK();
        }
        if (*(void **)&pFVar6->field_0x20 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar6->field_0x20);
        }
        operator_delete(pFVar6,0x40);
      }
    }
    else {
      local_20 = 0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>'::`7'::<lambda_1>,1,0>
                  ::_vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>'::__l7::<lambda_1>,void,FPSOPrecacheAsyncTask_const_*>
                    ::Call;
      local_30 = pFVar6;
      local_res8 = FPSOPrecacheAsyncTask::FPSOPrecacheAsyncTask
                             (this,(TUniqueFunction<void___cdecl(FPSOPrecacheAsyncTask_const_*)> *)
                                   local_48);
      FPipelineStateAsync::SetPrecompileTask(param_4,(FPSOPrecacheAsyncTask *)&local_res8);
    }
    bVar3 = (bool)(**(code **)(param_4->_padding_ + 8))(param_4);
    FPSOCSVStatTracker::SetState
              (&param_4->CSVStat,(bool)((param_1->field1_0x8).Flags >> 6 & 1),bVar3,NormalPri);
    bVar3 = IsInParallelRHIThread();
    if ((bVar3) || (lVar7 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
      lVar7 = 0x20;
    }
    lVar7 = *(longlong *)
             ((longlong)&((FPipelineStateAsync *)(param_4->CompletionStates + -1))->_padding_ +
             lVar7);
    if (lVar7 == 0) {
      this_02 = (FAsyncTaskBase *)0x0;
    }
    else {
      this_02 = *(FAsyncTaskBase **)(lVar7 + 8);
    }
    pFVar8 = FPSOPrecacheThreadPool::Get(&GPSOPrecacheThreadPool);
    FAsyncTaskBase::Start(this_02,false,pFVar8,Normal,None,-1,(wchar_t *)0x0);
    return;
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x118,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFCompileComputePipelineStateTask____6B_;
  }
  this_01 = (TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
             *)FCompileComputePipelineStateTask::FCompileComputePipelineStateTask
                         ((FCompileComputePipelineStateTask *)(this_00 + 1),param_4,param_1,param_2,
                          param_3,param_6,param_5);
  TVar5 = TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
          ::GetDesiredThread(this_01);
  UE::Tasks::Private::TranslatePriority(TVar5,local_58,(EExtendedTaskPriority *)&local_res8);
  UE::Tasks::Private::FTaskBase::Init
            (this_00,L"GraphTask",local_58[0],(EExtendedTaskPriority)local_res8,None);
  if (this_00 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x118);
  }
  else {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x118);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

// InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer> @ 145c82810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
          (FGraphicsPipelineStateInitializer *param_1,EPSOPrecacheResult param_2,bool param_3,
          FPipelineStateAsync *param_4,FPSOCompilationDebugData *param_5,bool param_6)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  EPSOPrecacheCompileType EVar3;
  bool bVar4;
  int iVar5;
  Type TVar6;
  FCompileGraphicsPipelineStateTask *pFVar7;
  FPSOPrecacheAsyncTask *this;
  longlong lVar8;
  FQueuedThreadPool *pFVar9;
  FTaskBase *this_00;
  TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
  *this_01;
  FAsyncTaskBase *this_02;
  EQueuedWorkPriority EVar10;
  FPSOPrecacheAsyncTask *local_res8;
  ETaskPriority local_58 [16];
  code *local_48 [2];
  undefined **local_38;
  FCompileGraphicsPipelineStateTask *local_30;
  undefined8 local_20;
  
  if ((((param_1->field25_0xd2).Flags & 0x800) != 0) &&
     (iVar5 = FPSOPrecacheThreadPool::GetDesiredPoolSize(), 0 < iVar5)) {
    pFVar7 = operator_new(0x110);
    if (pFVar7 == (FCompileGraphicsPipelineStateTask *)0x0) {
      pFVar7 = (FCompileGraphicsPipelineStateTask *)0x0;
    }
    else {
      pFVar7 = FCompileGraphicsPipelineStateTask::FCompileGraphicsPipelineStateTask
                         (pFVar7,param_4,param_1,param_2,param_3,param_6,param_5);
    }
    this = operator_new(0xa0);
    if (this == (FPSOPrecacheAsyncTask *)0x0) {
      local_res8 = (FPSOPrecacheAsyncTask *)0x0;
      FPipelineStateAsync::SetPrecompileTask(param_4,(FPSOPrecacheAsyncTask *)&local_res8);
      if (pFVar7 != (FCompileGraphicsPipelineStateTask *)0x0) {
        if ((*(ushort *)&pFVar7->field_0xda & 0x1000) != 0) {
          LOCK();
          GPipelinePrecompileTasksInFlight =
               (atomic<int>)((int)GPipelinePrecompileTasksInFlight + -1);
          UNLOCK();
        }
        if (*(void **)&pFVar7->field_0xf0 != (void *)0x0) {
          FMemory::Free(*(void **)&pFVar7->field_0xf0);
        }
        operator_delete(pFVar7,0x110);
      }
    }
    else {
      local_20 = 0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>'::`7'::<lambda_1>,1,0>
                  ::_vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>'::__l7::<lambda_1>,void,FPSOPrecacheAsyncTask_const_*>
                    ::Call;
      local_30 = pFVar7;
      local_res8 = FPSOPrecacheAsyncTask::FPSOPrecacheAsyncTask
                             (this,(TUniqueFunction<void___cdecl(FPSOPrecacheAsyncTask_const_*)> *)
                                   local_48);
      FPipelineStateAsync::SetPrecompileTask(param_4,(FPSOPrecacheAsyncTask *)&local_res8);
    }
    EVar10 = (((param_1->field25_0xd2).Flags & 0x800) != 0) + Normal;
    EVar3 = GetPSOCompileTypeFromQueuePri(EVar10);
    bVar4 = (bool)(**(code **)(param_4->_padding_ + 8))(param_4);
    FPSOCSVStatTracker::SetState
              (&param_4->CSVStat,(bool)((byte)((param_1->field25_0xd2).Flags >> 0xb) & 1),bVar4,
               EVar3);
    bVar4 = IsInParallelRHIThread();
    if ((bVar4) || (lVar8 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
      lVar8 = 0x20;
    }
    lVar8 = *(longlong *)
             ((longlong)&((FPipelineStateAsync *)(param_4->CompletionStates + -1))->_padding_ +
             lVar8);
    if (lVar8 == 0) {
      this_02 = (FAsyncTaskBase *)0x0;
    }
    else {
      this_02 = *(FAsyncTaskBase **)(lVar8 + 8);
    }
    pFVar9 = FPSOPrecacheThreadPool::Get(&GPSOPrecacheThreadPool);
    FAsyncTaskBase::Start(this_02,false,pFVar9,EVar10,None,-1,(wchar_t *)0x0);
    return;
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x1e8,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFCompileGraphicsPipelineStateTask____6B_;
  }
  this_01 = (TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
             *)FCompileGraphicsPipelineStateTask::FCompileGraphicsPipelineStateTask
                         ((FCompileGraphicsPipelineStateTask *)(this_00 + 1),param_4,param_1,param_2
                          ,param_3,param_6,param_5);
  TVar6 = TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
          ::GetDesiredThread(this_01);
  UE::Tasks::Private::TranslatePriority(TVar6,local_58,(EExtendedTaskPriority *)&local_res8);
  UE::Tasks::Private::FTaskBase::Init
            (this_00,L"GraphTask",local_58[0],(EExtendedTaskPriority)local_res8,None);
  if (this_00 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x1e8);
  }
  else {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x1e8);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

// IntrinsicAppendHash<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> @ 145c82b10

uint __cdecl
Freeze::IntrinsicAppendHash<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>
          (TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicGetTargetAlignment<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> @ 145c82b30

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>
          (TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicToString<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> @ 145c82b50

void __cdecl
Freeze::IntrinsicToString<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>
          (TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = FRHIUniformBufferResourceInitializer::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicUnfrozenCopy<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> @ 145c82bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>
          (FMemoryUnfreezeContent *param_1,
          TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> *param_2,
          void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>::SetNumZeroed
            (param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = FRHIUniformBufferResourceInitializer::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicWriteMemoryImage<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> @ 145c82c50

void __cdecl
Freeze::IntrinsicWriteMemoryImage<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>
          (FMemoryImageWriter *param_1,
          TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = FRHIUniformBufferResourceInitializer::StaticGetTypeLayout();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntroSortInternal<`FRayTracingPipelineCache::Trim'::__l2::FEntry,int,FIdentityFunctor,TDereferenceWrapper<`FRayTracingPipelineCache::Trim'::__l2::FEntry,`FRayTracingPipelineCache::Trim'::__l2::<lambda_1>_>_> @ 145c82cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FRayTracingPipelineCache::Trim_::__l2::FEntry,int,FIdentityFunctor,TDereferenceWrapper<_FRayTracingPipelineCache::Trim_::__l2::FEntry,_FRayTracingPipelineCache::Trim_::__l2::<lambda_1>_>_>
          (FEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_FRayTracingPipelineCache::Trim(int)_::_2_::FEntry,_public:_void___cdecl_FRayTracingPipelineCache::Trim(int)_::_2_::<lambda_1>_>
          param_4)

{
  FEntry *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  FRayTracingPipelineState *pFVar9;
  FRayTracingPipelineState *pFVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FEntry *pFVar17;
  FEntry **ppFVar18;
  FEntry *pFVar19;
  FEntry *pFVar20;
  FEntry *pFVar21;
  FEntry *pFVar22;
  FEntry *pFVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_368 [48];
  FEntry *local_338;
  FEntry *local_328;
  FEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar25 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar25;
    memset(local_310,0,0x2e8);
    ppFVar18 = &local_328;
    do {
      pFVar23 = ppFVar18[1];
      pFVar22 = *ppFVar18;
      pFVar1 = ppFVar18[2];
      iVar16 = (int)((longlong)pFVar23 - (longlong)pFVar22 >> 6) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar21 = pFVar22;
      if ((int)local_338 != 0) {
LAB_145c82d80:
        if (8 < iVar16) {
          uVar13 = (pFVar21->Key).MaxPayloadSizeInBytes;
          uVar2 = (pFVar21->Key).RayGenHash;
          pFVar19 = pFVar23 + 1;
          pFVar22 = pFVar21 + iVar16 / 2;
          uVar14 = (pFVar22->Key).MaxAttributeSizeInBytes;
          uVar15 = (pFVar22->Key).MaxPayloadSizeInBytes;
          uVar3 = (pFVar22->Key).RayGenHash;
          uVar4 = (pFVar22->Key).MissHash;
          uVar5 = (pFVar22->Key).HitGroupHash;
          uVar6 = (pFVar22->Key).CallableHash;
          uVar7 = pFVar22->LastFrameHit;
          uVar8 = pFVar22->HitsAcrossFrames;
          pFVar9 = pFVar22->Pipeline;
          (pFVar22->Key).MaxAttributeSizeInBytes = (pFVar21->Key).MaxAttributeSizeInBytes;
          (pFVar22->Key).MaxPayloadSizeInBytes = uVar13;
          (pFVar22->Key).RayGenHash = uVar2;
          uVar2 = (pFVar21->Key).HitGroupHash;
          (pFVar22->Key).MissHash = (pFVar21->Key).MissHash;
          (pFVar22->Key).HitGroupHash = uVar2;
          uVar2 = pFVar21->LastFrameHit;
          (pFVar22->Key).CallableHash = (pFVar21->Key).CallableHash;
          pFVar22->LastFrameHit = uVar2;
          pFVar10 = pFVar21->Pipeline;
          pFVar22->HitsAcrossFrames = pFVar21->HitsAcrossFrames;
          pFVar22->Pipeline = pFVar10;
          (pFVar21->Key).MaxAttributeSizeInBytes = uVar14;
          (pFVar21->Key).MaxPayloadSizeInBytes = uVar15;
          (pFVar21->Key).RayGenHash = uVar3;
          (pFVar21->Key).MissHash = uVar4;
          (pFVar21->Key).HitGroupHash = uVar5;
          (pFVar21->Key).CallableHash = uVar6;
          pFVar21->LastFrameHit = uVar7;
          pFVar21->HitsAcrossFrames = uVar8;
          pFVar21->Pipeline = pFVar9;
          pFVar22 = pFVar21;
LAB_145c82de3:
          pFVar17 = pFVar22;
          pFVar22 = pFVar17 + 1;
          if (pFVar22 <= pFVar23) goto code_r0x000145c82def;
          goto LAB_145c82e10;
        }
        for (; pFVar22 = pFVar21, pFVar1 = pFVar21, pFVar21 < pFVar23; pFVar23 = pFVar23 + -1) {
          while (pFVar19 = pFVar22, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar23) {
            if (pFVar19->LastFrameHit == pFVar1->LastFrameHit) {
              bVar24 = pFVar1->HitsAcrossFrames < pFVar19->HitsAcrossFrames;
            }
            else {
              bVar24 = pFVar1->LastFrameHit < pFVar19->LastFrameHit;
            }
            pFVar22 = pFVar1;
            if (!bVar24) {
              pFVar22 = pFVar19;
            }
          }
          uVar14 = (pFVar19->Key).MaxAttributeSizeInBytes;
          uVar15 = (pFVar19->Key).MaxPayloadSizeInBytes;
          uVar2 = (pFVar19->Key).RayGenHash;
          uVar3 = (pFVar19->Key).MissHash;
          uVar4 = (pFVar19->Key).HitGroupHash;
          uVar5 = (pFVar19->Key).CallableHash;
          uVar6 = pFVar19->LastFrameHit;
          uVar13 = (pFVar23->Key).MaxPayloadSizeInBytes;
          uVar7 = (pFVar23->Key).RayGenHash;
          uVar8 = pFVar19->HitsAcrossFrames;
          pFVar9 = pFVar19->Pipeline;
          (pFVar19->Key).MaxAttributeSizeInBytes = (pFVar23->Key).MaxAttributeSizeInBytes;
          (pFVar19->Key).MaxPayloadSizeInBytes = uVar13;
          (pFVar19->Key).RayGenHash = uVar7;
          uVar7 = (pFVar23->Key).HitGroupHash;
          (pFVar19->Key).MissHash = (pFVar23->Key).MissHash;
          (pFVar19->Key).HitGroupHash = uVar7;
          uVar7 = pFVar23->LastFrameHit;
          (pFVar19->Key).CallableHash = (pFVar23->Key).CallableHash;
          pFVar19->LastFrameHit = uVar7;
          pFVar10 = pFVar23->Pipeline;
          pFVar19->HitsAcrossFrames = pFVar23->HitsAcrossFrames;
          pFVar19->Pipeline = pFVar10;
          (pFVar23->Key).MaxAttributeSizeInBytes = uVar14;
          (pFVar23->Key).MaxPayloadSizeInBytes = uVar15;
          (pFVar23->Key).RayGenHash = uVar2;
          (pFVar23->Key).MissHash = uVar3;
          (pFVar23->Key).HitGroupHash = uVar4;
          (pFVar23->Key).CallableHash = uVar5;
          pFVar23->LastFrameHit = uVar6;
          pFVar23->HitsAcrossFrames = uVar8;
          pFVar23->Pipeline = pFVar9;
        }
        goto LAB_145c82f59;
      }
LAB_145c82f48:
      local_338 = pFVar1;
      HeapSortInternal<_FRayTracingPipelineCache::Trim_::__l2::FEntry,int,FIdentityFunctor,TDereferenceWrapper<_FRayTracingPipelineCache::Trim_::__l2::FEntry,_FRayTracingPipelineCache::Trim_::__l2::<lambda_1>_>_>
                (pFVar22,iVar16,param_3,param_4);
LAB_145c82f59:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_328 <= ppFVar18);
  }
  return;
code_r0x000145c82def:
  if (pFVar21->LastFrameHit == pFVar17[1].LastFrameHit) {
    bVar24 = pFVar17[1].HitsAcrossFrames < pFVar21->HitsAcrossFrames;
  }
  else {
    bVar24 = pFVar17[1].LastFrameHit < pFVar21->LastFrameHit;
  }
  if (!bVar24) goto LAB_145c82de3;
LAB_145c82e10:
  do {
    pFVar20 = pFVar19;
    pFVar19 = pFVar20 + -1;
    if (pFVar19 <= pFVar21) break;
    if (pFVar20[-1].LastFrameHit == pFVar21->LastFrameHit) {
      bVar24 = pFVar21->HitsAcrossFrames < pFVar20[-1].HitsAcrossFrames;
    }
    else {
      bVar24 = pFVar21->LastFrameHit < pFVar20[-1].LastFrameHit;
    }
  } while (!bVar24);
  uVar11 = (pFVar19->Key).MaxAttributeSizeInBytes;
  uVar12 = (pFVar19->Key).MaxPayloadSizeInBytes;
  uVar2 = pFVar20[-1].Key.RayGenHash;
  if (pFVar22 <= pFVar19) {
    uVar13 = (pFVar22->Key).MaxAttributeSizeInBytes;
    uVar14 = (pFVar22->Key).MaxPayloadSizeInBytes;
    uVar3 = pFVar17[1].Key.RayGenHash;
    uVar4 = pFVar17[1].Key.MissHash;
    uVar5 = pFVar17[1].Key.HitGroupHash;
    uVar6 = pFVar17[1].Key.CallableHash;
    uVar7 = pFVar17[1].LastFrameHit;
    uVar8 = pFVar17[1].HitsAcrossFrames;
    pFVar9 = pFVar17[1].Pipeline;
    (pFVar22->Key).MaxAttributeSizeInBytes = uVar11;
    (pFVar22->Key).MaxPayloadSizeInBytes = uVar12;
    pFVar17[1].Key.RayGenHash = uVar2;
    uVar2 = pFVar20[-1].Key.HitGroupHash;
    pFVar17[1].Key.MissHash = pFVar20[-1].Key.MissHash;
    pFVar17[1].Key.HitGroupHash = uVar2;
    uVar2 = pFVar20[-1].LastFrameHit;
    pFVar17[1].Key.CallableHash = pFVar20[-1].Key.CallableHash;
    pFVar17[1].LastFrameHit = uVar2;
    pFVar10 = pFVar20[-1].Pipeline;
    pFVar17[1].HitsAcrossFrames = pFVar20[-1].HitsAcrossFrames;
    pFVar17[1].Pipeline = pFVar10;
    (pFVar19->Key).MaxAttributeSizeInBytes = uVar13;
    (pFVar19->Key).MaxPayloadSizeInBytes = uVar14;
    pFVar20[-1].Key.RayGenHash = uVar3;
    pFVar20[-1].Key.MissHash = uVar4;
    pFVar20[-1].Key.HitGroupHash = uVar5;
    pFVar20[-1].Key.CallableHash = uVar6;
    pFVar20[-1].LastFrameHit = uVar7;
    pFVar20[-1].HitsAcrossFrames = uVar8;
    pFVar20[-1].Pipeline = pFVar9;
    goto LAB_145c82de3;
  }
  uVar13 = (pFVar21->Key).MaxAttributeSizeInBytes;
  uVar14 = (pFVar21->Key).MaxPayloadSizeInBytes;
  uVar3 = (pFVar21->Key).RayGenHash;
  uVar4 = (pFVar21->Key).MissHash;
  uVar5 = (pFVar21->Key).HitGroupHash;
  uVar6 = (pFVar21->Key).CallableHash;
  uVar7 = pFVar21->LastFrameHit;
  local_338._0_4_ = (int)local_338 + -1;
  uVar8 = pFVar21->HitsAcrossFrames;
  pFVar9 = pFVar21->Pipeline;
  (pFVar21->Key).MaxAttributeSizeInBytes = uVar11;
  (pFVar21->Key).MaxPayloadSizeInBytes = uVar12;
  (pFVar21->Key).RayGenHash = uVar2;
  uVar2 = pFVar20[-1].Key.HitGroupHash;
  (pFVar21->Key).MissHash = pFVar20[-1].Key.MissHash;
  (pFVar21->Key).HitGroupHash = uVar2;
  uVar2 = pFVar20[-1].LastFrameHit;
  (pFVar21->Key).CallableHash = pFVar20[-1].Key.CallableHash;
  pFVar21->LastFrameHit = uVar2;
  pFVar10 = pFVar20[-1].Pipeline;
  pFVar21->HitsAcrossFrames = pFVar20[-1].HitsAcrossFrames;
  pFVar21->Pipeline = pFVar10;
  (pFVar19->Key).MaxAttributeSizeInBytes = uVar13;
  (pFVar19->Key).MaxPayloadSizeInBytes = uVar14;
  pFVar20[-1].Key.RayGenHash = uVar3;
  pFVar20[-1].Key.MissHash = uVar4;
  pFVar20[-1].Key.HitGroupHash = uVar5;
  pFVar20[-1].Key.CallableHash = uVar6;
  pFVar20[-1].LastFrameHit = uVar7;
  pFVar20[-1].HitsAcrossFrames = uVar8;
  pFVar20[-1].Pipeline = pFVar9;
  if ((longlong)((longlong)pFVar19 + (-0x40 - (longlong)pFVar21) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pFVar23 - (longlong)pFVar22 & 0xffffffffffffffc0U)) {
    if (pFVar22 < pFVar23) {
      *ppFVar18 = pFVar22;
      ppFVar18[1] = pFVar23;
      *(int *)(ppFVar18 + 2) = (int)local_338;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar19 <= pFVar21 + 1) goto LAB_145c82f59;
    pFVar23 = pFVar20 + -2;
    pFVar22 = pFVar21;
  }
  else {
    if (pFVar21 + 1 < pFVar19) {
      *ppFVar18 = pFVar21;
      ppFVar18[1] = pFVar20 + -2;
      *(int *)(ppFVar18 + 2) = (int)local_338;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar23 <= pFVar22) goto LAB_145c82f59;
  }
  iVar16 = (int)((longlong)pFVar23 - (longlong)pFVar22 >> 6) + 1;
  pFVar21 = pFVar22;
  if ((int)local_338 == 0) goto LAB_145c82f48;
  goto LAB_145c82d80;
}

// IntroSortInternal<RHIInternal::FResourceEntry,int,FIdentityFunctor,TDereferenceWrapper<RHIInternal::FResourceEntry,`RHIInternal::GetTrackedResourcesInternal'::__l2::<lambda_2>_>_> @ 145c83040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<RHIInternal::FResourceEntry,int,FIdentityFunctor,TDereferenceWrapper<RHIInternal::FResourceEntry,_RHIInternal::GetTrackedResourcesInternal_::__l2::<lambda_2>_>_>
          (FResourceEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<RHIInternal::FResourceEntry,_void___cdecl_RHIInternal::GetTrackedResourcesInternal(FString_const_&,ERHIResourceType,EBooleanFilter,TArray<RHIInternal::FResourceEntry,TSizedDefaultAllocator<32>_>_&,int_&,int_&,int_&,__int64_&,__int64_&)_::_2_::<lambda_2>_>
          param_4)

{
  FResourceEntry *pFVar1;
  FName FVar2;
  FRHIResource *pFVar3;
  FName FVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  undefined7 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined5 uVar12;
  ERHIResourceType EVar13;
  undefined7 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined5 uVar18;
  longlong lVar19;
  int iVar20;
  FResourceEntry *pFVar21;
  FResourceEntry *pFVar22;
  FResourceEntry *pFVar23;
  FResourceEntry *pFVar24;
  FResourceEntry *pFVar25;
  FResourceEntry *pFVar26;
  FResourceEntry **ppFVar27;
  float fVar28;
  undefined1 auStack_378 [48];
  FResourceEntry *local_348;
  FResourceEntry *local_338;
  FResourceEntry *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar28 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar28;
    memset(local_320,0,0x2e8);
    ppFVar27 = &local_338;
    do {
      pFVar21 = ppFVar27[1];
      pFVar26 = *ppFVar27;
      pFVar1 = ppFVar27[2];
      local_348._0_4_ = (int)pFVar1;
      iVar20 = (int)(((longlong)pFVar21 - (longlong)pFVar26) / 0x30) + 1;
      pFVar25 = pFVar26;
      if ((int)local_348 != 0) {
LAB_145c83120:
        if (8 < iVar20) {
          FVar2 = (pFVar25->ResourceInfo).Name;
          pFVar22 = pFVar21 + 1;
          pFVar26 = pFVar25 + iVar20 / 2;
          pFVar3 = pFVar26->Resource;
          FVar4 = (pFVar26->ResourceInfo).Name;
          EVar13 = (pFVar26->ResourceInfo).Type;
          uVar14 = *(undefined7 *)&(pFVar26->ResourceInfo).field_0x9;
          uVar5 = (pFVar26->ResourceInfo).VRamAllocation.AllocationStart;
          uVar6 = (pFVar26->ResourceInfo).VRamAllocation.AllocationSize;
          bVar15 = (pFVar26->ResourceInfo).IsTransient;
          bVar16 = (pFVar26->ResourceInfo).bValid;
          bVar17 = (pFVar26->ResourceInfo).bResident;
          uVar18 = *(undefined5 *)&(pFVar26->ResourceInfo).field_0x23;
          pFVar26->Resource = pFVar25->Resource;
          (pFVar26->ResourceInfo).Name = FVar2;
          uVar8 = *(undefined7 *)&(pFVar25->ResourceInfo).field_0x9;
          uVar7 = (pFVar25->ResourceInfo).VRamAllocation.AllocationStart;
          (pFVar26->ResourceInfo).Type = (pFVar25->ResourceInfo).Type;
          *(undefined7 *)&(pFVar26->ResourceInfo).field_0x9 = uVar8;
          (pFVar26->ResourceInfo).VRamAllocation.AllocationStart = uVar7;
          bVar9 = (pFVar25->ResourceInfo).IsTransient;
          bVar10 = (pFVar25->ResourceInfo).bValid;
          bVar11 = (pFVar25->ResourceInfo).bResident;
          uVar12 = *(undefined5 *)&(pFVar25->ResourceInfo).field_0x23;
          (pFVar26->ResourceInfo).VRamAllocation.AllocationSize =
               (pFVar25->ResourceInfo).VRamAllocation.AllocationSize;
          (pFVar26->ResourceInfo).IsTransient = bVar9;
          (pFVar26->ResourceInfo).bValid = bVar10;
          (pFVar26->ResourceInfo).bResident = bVar11;
          *(undefined5 *)&(pFVar26->ResourceInfo).field_0x23 = uVar12;
          pFVar25->Resource = pFVar3;
          (pFVar25->ResourceInfo).Name = FVar4;
          (pFVar25->ResourceInfo).Type = EVar13;
          *(undefined7 *)&(pFVar25->ResourceInfo).field_0x9 = uVar14;
          (pFVar25->ResourceInfo).VRamAllocation.AllocationStart = uVar5;
          (pFVar25->ResourceInfo).VRamAllocation.AllocationSize = uVar6;
          (pFVar25->ResourceInfo).IsTransient = bVar15;
          (pFVar25->ResourceInfo).bValid = bVar16;
          (pFVar25->ResourceInfo).bResident = bVar17;
          *(undefined5 *)&(pFVar25->ResourceInfo).field_0x23 = uVar18;
          pFVar26 = pFVar25;
LAB_145c83177:
          pFVar24 = pFVar26;
          pFVar26 = pFVar24 + 1;
          if (pFVar26 <= pFVar21) goto code_r0x000145c83180;
          goto LAB_145c83190;
        }
        for (; pFVar26 = pFVar25, pFVar1 = pFVar25, pFVar25 < pFVar21; pFVar21 = pFVar21 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar21) {
            if ((pFVar1->ResourceInfo).VRamAllocation.AllocationSize <
                (pFVar26->ResourceInfo).VRamAllocation.AllocationSize) {
              pFVar26 = pFVar1;
            }
          }
          pFVar3 = pFVar26->Resource;
          FVar2 = (pFVar26->ResourceInfo).Name;
          EVar13 = (pFVar26->ResourceInfo).Type;
          uVar14 = *(undefined7 *)&(pFVar26->ResourceInfo).field_0x9;
          uVar5 = (pFVar26->ResourceInfo).VRamAllocation.AllocationStart;
          uVar6 = (pFVar26->ResourceInfo).VRamAllocation.AllocationSize;
          bVar15 = (pFVar26->ResourceInfo).IsTransient;
          bVar16 = (pFVar26->ResourceInfo).bValid;
          bVar17 = (pFVar26->ResourceInfo).bResident;
          uVar18 = *(undefined5 *)&(pFVar26->ResourceInfo).field_0x23;
          FVar4 = (pFVar21->ResourceInfo).Name;
          pFVar26->Resource = pFVar21->Resource;
          (pFVar26->ResourceInfo).Name = FVar4;
          uVar8 = *(undefined7 *)&(pFVar21->ResourceInfo).field_0x9;
          uVar7 = (pFVar21->ResourceInfo).VRamAllocation.AllocationStart;
          (pFVar26->ResourceInfo).Type = (pFVar21->ResourceInfo).Type;
          *(undefined7 *)&(pFVar26->ResourceInfo).field_0x9 = uVar8;
          (pFVar26->ResourceInfo).VRamAllocation.AllocationStart = uVar7;
          bVar9 = (pFVar21->ResourceInfo).IsTransient;
          bVar10 = (pFVar21->ResourceInfo).bValid;
          bVar11 = (pFVar21->ResourceInfo).bResident;
          uVar12 = *(undefined5 *)&(pFVar21->ResourceInfo).field_0x23;
          (pFVar26->ResourceInfo).VRamAllocation.AllocationSize =
               (pFVar21->ResourceInfo).VRamAllocation.AllocationSize;
          (pFVar26->ResourceInfo).IsTransient = bVar9;
          (pFVar26->ResourceInfo).bValid = bVar10;
          (pFVar26->ResourceInfo).bResident = bVar11;
          *(undefined5 *)&(pFVar26->ResourceInfo).field_0x23 = uVar12;
          pFVar21->Resource = pFVar3;
          (pFVar21->ResourceInfo).Name = FVar2;
          (pFVar21->ResourceInfo).Type = EVar13;
          *(undefined7 *)&(pFVar21->ResourceInfo).field_0x9 = uVar14;
          (pFVar21->ResourceInfo).VRamAllocation.AllocationStart = uVar5;
          (pFVar21->ResourceInfo).VRamAllocation.AllocationSize = uVar6;
          (pFVar21->ResourceInfo).IsTransient = bVar15;
          (pFVar21->ResourceInfo).bValid = bVar16;
          (pFVar21->ResourceInfo).bResident = bVar17;
          *(undefined5 *)&(pFVar21->ResourceInfo).field_0x23 = uVar18;
        }
        goto LAB_145c832d2;
      }
LAB_145c832c3:
      local_348 = pFVar1;
      HeapSortInternal<RHIInternal::FResourceEntry,int,FIdentityFunctor,TDereferenceWrapper<RHIInternal::FResourceEntry,_RHIInternal::GetTrackedResourcesInternal_::__l2::<lambda_2>_>_>
                (pFVar26,iVar20,param_3,param_4);
LAB_145c832d2:
      ppFVar27 = ppFVar27 + -3;
    } while (&local_338 <= ppFVar27);
  }
  return;
code_r0x000145c83180:
  if ((pFVar25->ResourceInfo).VRamAllocation.AllocationSize <=
      pFVar24[1].ResourceInfo.VRamAllocation.AllocationSize) goto LAB_145c83177;
LAB_145c83190:
  do {
    pFVar23 = pFVar22;
    pFVar22 = pFVar23 + -1;
    if (pFVar22 <= pFVar25) break;
  } while (pFVar23[-1].ResourceInfo.VRamAllocation.AllocationSize <=
           (pFVar25->ResourceInfo).VRamAllocation.AllocationSize);
  FVar2 = pFVar23[-1].ResourceInfo.Name;
  if (pFVar26 <= pFVar22) {
    pFVar3 = pFVar26->Resource;
    FVar4 = pFVar24[1].ResourceInfo.Name;
    EVar13 = pFVar24[1].ResourceInfo.Type;
    uVar14 = *(undefined7 *)&pFVar24[1].ResourceInfo.field_0x9;
    uVar5 = pFVar24[1].ResourceInfo.VRamAllocation.AllocationStart;
    uVar6 = pFVar24[1].ResourceInfo.VRamAllocation.AllocationSize;
    bVar15 = pFVar24[1].ResourceInfo.IsTransient;
    bVar16 = pFVar24[1].ResourceInfo.bValid;
    bVar17 = pFVar24[1].ResourceInfo.bResident;
    uVar18 = *(undefined5 *)&pFVar24[1].ResourceInfo.field_0x23;
    pFVar26->Resource = pFVar22->Resource;
    pFVar24[1].ResourceInfo.Name = FVar2;
    uVar8 = *(undefined7 *)&pFVar23[-1].ResourceInfo.field_0x9;
    uVar7 = pFVar23[-1].ResourceInfo.VRamAllocation.AllocationStart;
    pFVar24[1].ResourceInfo.Type = pFVar23[-1].ResourceInfo.Type;
    *(undefined7 *)&pFVar24[1].ResourceInfo.field_0x9 = uVar8;
    pFVar24[1].ResourceInfo.VRamAllocation.AllocationStart = uVar7;
    bVar9 = pFVar23[-1].ResourceInfo.IsTransient;
    bVar10 = pFVar23[-1].ResourceInfo.bValid;
    bVar11 = pFVar23[-1].ResourceInfo.bResident;
    uVar12 = *(undefined5 *)&pFVar23[-1].ResourceInfo.field_0x23;
    pFVar24[1].ResourceInfo.VRamAllocation.AllocationSize =
         pFVar23[-1].ResourceInfo.VRamAllocation.AllocationSize;
    pFVar24[1].ResourceInfo.IsTransient = bVar9;
    pFVar24[1].ResourceInfo.bValid = bVar10;
    pFVar24[1].ResourceInfo.bResident = bVar11;
    *(undefined5 *)&pFVar24[1].ResourceInfo.field_0x23 = uVar12;
    pFVar22->Resource = pFVar3;
    pFVar23[-1].ResourceInfo.Name = FVar4;
    pFVar23[-1].ResourceInfo.Type = EVar13;
    *(undefined7 *)&pFVar23[-1].ResourceInfo.field_0x9 = uVar14;
    pFVar23[-1].ResourceInfo.VRamAllocation.AllocationStart = uVar5;
    pFVar23[-1].ResourceInfo.VRamAllocation.AllocationSize = uVar6;
    pFVar23[-1].ResourceInfo.IsTransient = bVar15;
    pFVar23[-1].ResourceInfo.bValid = bVar16;
    pFVar23[-1].ResourceInfo.bResident = bVar17;
    *(undefined5 *)&pFVar23[-1].ResourceInfo.field_0x23 = uVar18;
    goto LAB_145c83177;
  }
  pFVar3 = pFVar25->Resource;
  FVar4 = (pFVar25->ResourceInfo).Name;
  EVar13 = (pFVar25->ResourceInfo).Type;
  uVar14 = *(undefined7 *)&(pFVar25->ResourceInfo).field_0x9;
  uVar5 = (pFVar25->ResourceInfo).VRamAllocation.AllocationStart;
  local_348._0_4_ = (int)local_348 + -1;
  uVar6 = (pFVar25->ResourceInfo).VRamAllocation.AllocationSize;
  bVar15 = (pFVar25->ResourceInfo).IsTransient;
  bVar16 = (pFVar25->ResourceInfo).bValid;
  bVar17 = (pFVar25->ResourceInfo).bResident;
  uVar18 = *(undefined5 *)&(pFVar25->ResourceInfo).field_0x23;
  lVar19 = (longlong)pFVar22 + (-0x30 - (longlong)pFVar25);
  lVar19 = lVar19 / 6 + (lVar19 >> 0x3f);
  pFVar25->Resource = pFVar22->Resource;
  (pFVar25->ResourceInfo).Name = FVar2;
  uVar8 = *(undefined7 *)&pFVar23[-1].ResourceInfo.field_0x9;
  uVar7 = pFVar23[-1].ResourceInfo.VRamAllocation.AllocationStart;
  (pFVar25->ResourceInfo).Type = pFVar23[-1].ResourceInfo.Type;
  *(undefined7 *)&(pFVar25->ResourceInfo).field_0x9 = uVar8;
  (pFVar25->ResourceInfo).VRamAllocation.AllocationStart = uVar7;
  bVar9 = pFVar23[-1].ResourceInfo.IsTransient;
  bVar10 = pFVar23[-1].ResourceInfo.bValid;
  bVar11 = pFVar23[-1].ResourceInfo.bResident;
  uVar12 = *(undefined5 *)&pFVar23[-1].ResourceInfo.field_0x23;
  (pFVar25->ResourceInfo).VRamAllocation.AllocationSize =
       pFVar23[-1].ResourceInfo.VRamAllocation.AllocationSize;
  (pFVar25->ResourceInfo).IsTransient = bVar9;
  (pFVar25->ResourceInfo).bValid = bVar10;
  (pFVar25->ResourceInfo).bResident = bVar11;
  *(undefined5 *)&(pFVar25->ResourceInfo).field_0x23 = uVar12;
  pFVar22->Resource = pFVar3;
  pFVar23[-1].ResourceInfo.Name = FVar4;
  pFVar23[-1].ResourceInfo.Type = EVar13;
  *(undefined7 *)&pFVar23[-1].ResourceInfo.field_0x9 = uVar14;
  pFVar23[-1].ResourceInfo.VRamAllocation.AllocationStart = uVar5;
  pFVar23[-1].ResourceInfo.VRamAllocation.AllocationSize = uVar6;
  pFVar23[-1].ResourceInfo.IsTransient = bVar15;
  pFVar23[-1].ResourceInfo.bValid = bVar16;
  pFVar23[-1].ResourceInfo.bResident = bVar17;
  *(undefined5 *)&pFVar23[-1].ResourceInfo.field_0x23 = uVar18;
  if ((lVar19 >> 3) - (lVar19 >> 0x3f) < ((longlong)pFVar21 - (longlong)pFVar26) / 0x30) {
    if (pFVar26 < pFVar21) {
      *ppFVar27 = pFVar26;
      ppFVar27[1] = pFVar21;
      *(int *)(ppFVar27 + 2) = (int)local_348;
      ppFVar27 = ppFVar27 + 3;
    }
    if (pFVar22 <= pFVar25 + 1) goto LAB_145c832d2;
    pFVar21 = pFVar23 + -2;
    pFVar26 = pFVar25;
  }
  else {
    if (pFVar25 + 1 < pFVar22) {
      *ppFVar27 = pFVar25;
      ppFVar27[1] = pFVar23 + -2;
      *(int *)(ppFVar27 + 2) = (int)local_348;
      ppFVar27 = ppFVar27 + 3;
    }
    if (pFVar21 <= pFVar26) goto LAB_145c832d2;
  }
  iVar20 = (int)(((longlong)pFVar21 - (longlong)pFVar26) / 0x30) + 1;
  pFVar25 = pFVar26;
  if ((int)local_348 == 0) goto LAB_145c832c3;
  goto LAB_145c83120;
}

// IsPrecachedPSO<FComputePipelineStateInitializer> @ 145c833a0

bool __cdecl
IsPrecachedPSO<FComputePipelineStateInitializer>(FComputePipelineStateInitializer *param_1)

{
  if ((-1 < (char)(param_1->field1_0x8).Flags) && (((param_1->field1_0x8).Flags & 0x40) == 0)) {
    return false;
  }
  return true;
}

// IsPrecachedPSO<FGraphicsPipelineStateInitializer> @ 145c833c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

bool __cdecl
IsPrecachedPSO<FGraphicsPipelineStateInitializer>(FGraphicsPipelineStateInitializer *param_1)

{
  return ((param_1->field25_0xd2).Flags & 0x1800) != 0;
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<`FRayTracingPipelineCache::Trim'::__l2::FEntry>_> @ 145c83bd0

/* WARNING: Removing unreachable block (ram,0x000145c83c17) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FRayTracingPipelineCache::Trim_::__l2::FEntry>_>
          (ushort param_1,
          ForElementType<_public:_void___cdecl_FRayTracingPipelineCache::Trim(int)_::_2_::FEntry>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<`FRayTracingPipelineCache::Trim'::__l2::FEntry>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<`FRayTracingPipelineCache::Trim'::__l2::FEntry>_> @ 145c83fa0

void __cdecl
UE::Core::Private::
ReallocShrink<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FRayTracingPipelineCache::Trim_::__l2::FEntry>_>
          (uint param_1,uint param_2,
          ForElementType<_public:_void___cdecl_FRayTracingPipelineCache::Trim(int)_::_2_::FEntry>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<`FRayTracingPipelineCache::Trim'::__l2::FEntry>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<`FRayTracingPipelineCache::Trim'::__l2::FEntry>_> @ 145c84010

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FRayTracingPipelineCache::Trim_::__l2::FEntry>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_public:_void___cdecl_FRayTracingPipelineCache::Trim(int)_::_2_::FEntry>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<`FRayTracingPipelineCache::Trim'::__l2::FEntry>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// StaticGetTypeLayoutDesc<unsigned_short> @ 145c841f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl StaticGetTypeLayoutDesc<unsigned_short>(void)

{
  if ((DAT_155176ebf & 2) == 0) {
    DAT_155176ebf = DAT_155176ebf | 3;
    _DAT_155176eb0 = 2;
    _DAT_155176e60 = L"unsigned short";
    _DAT_155176e78 = TStaticGetTypeLayoutHelper<unsigned_short>::CallWriteMemoryImage;
    _DAT_155176e80 = TStaticGetTypeLayoutHelper<unsigned_short>::CallUnfrozenCopy;
    _DAT_155176e88 = TStaticGetTypeLayoutHelper<unsigned_short>::CallAppendHash;
    _DAT_155176e90 = TStaticGetTypeLayoutHelper<unsigned_short>::CallGetTargetAlignment;
    _DAT_155176e98 = TStaticGetTypeLayoutHelper<unsigned_short>::CallToString;
    _DAT_155176e70 = TStaticGetTypeLayoutHelper<unsigned_short>::CallDestroy;
    _DAT_155176eb8 = 2;
    DAT_155176ebc = 0;
    _DAT_155176eb4 = 2;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned_short>::Do(void)'
          ::__l2::TypeBuffer;
}

// StaticGetTypeLayoutDesc<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_> @ 145c842a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
StaticGetTypeLayoutDesc<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
          (void)

{
  if ((DAT_1551793ef & 2) == 0) {
    DAT_1551793ef = DAT_1551793ef | 3;
    _DAT_1551793e0 = 0x10;
    _DAT_155179390 = L"(TArray<T, AllocatorType>)";
    _DAT_1551793a8 =
         TStaticGetTypeLayoutHelper<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_1551793b0 =
         TStaticGetTypeLayoutHelper<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_1551793b8 =
         TStaticGetTypeLayoutHelper<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_1551793c0 =
         TStaticGetTypeLayoutHelper<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_1551793c8 =
         TStaticGetTypeLayoutHelper<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_1551793a0 =
         TStaticGetTypeLayoutHelper<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_1551793e8 = 8;
    DAT_1551793ec = 0;
    _DAT_1551793e4 = 0x10;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FRHIUniformBufferResourceInitializer,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>_> @ 145c84350

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>_>
          (_Atomic_padded<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>_> @ 145c84360

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>_>
          (_Atomic_padded<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FRHICommandListExecutor::FTaskPipe::FTask_*>_> @ 145c84370

/* WARNING: Enum "Type": Some values do not have unique names */

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FRHICommandListExecutor::FTaskPipe::FTask_*>_>
          (_Atomic_padded<FRHICommandListExecutor::FTaskPipe::FTask_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FQueuedThreadPool_*>_> @ 145c84380

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FQueuedThreadPool_*>_>
          (_Atomic_padded<FQueuedThreadPool_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FQueuedThreadPool_*>_> @ 145c84390

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FQueuedThreadPool_*>_>
          (_Atomic_padded<FQueuedThreadPool_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> @ 145c843a0

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,FRHICommandListExecutor::FTaskPipe::FTask_*> @ 145c843b0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,FRHICommandListExecutor::FTaskPipe::FTask_*>(FTask **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,FQueuedThreadPool_*> @ 145c843c0

long64 __cdecl std::_Atomic_reinterpret_as<__int64,FQueuedThreadPool_*>(FQueuedThreadPool **param_1)

{
  return (long64)*param_1;
}

// get<1,TTuple<FRHIComputeShader_*,FComputePipelineState_*>_&> @ 145c843d0

FComputePipelineState ** __cdecl
get<1,TTuple<FRHIComputeShader_*,FComputePipelineState_*>_&>
          (TTuple<FRHIComputeShader_*,FComputePipelineState_*> *param_1)

{
  return (FComputePipelineState **)&param_1->field_0x8;
}

// get<1,TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_&> @ 145c843e0

/* WARNING: Enum "Type": Some values do not have unique names */

FGraphicsPipelineState ** __cdecl
get<1,TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_&>
          (TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*> *param_1)

{
  return (FGraphicsPipelineState **)&param_1->field_0xe0;
}

// get<1,TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_&> @ 145c843f0

FRayTracingPipelineState ** __cdecl
get<1,TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_&>
          (TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*> *param_1)

{
  return (FRayTracingPipelineState **)&param_1->field_0x28;
}

// get<1,TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_&> @ 145c84400

FWorkGraphPipelineState ** __cdecl
get<1,TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_&>
          (TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> *param_1)

{
  return (FWorkGraphPipelineState **)&param_1->field_0x68;
}

// get<1,TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>_const_&> @ 145c84410

TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_> * __cdecl
get<1,TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>_const_&>
          (TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  return (TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_> *)&param_1->field_0x8;
}

// get<0,TTuple<FRHIComputeShader_*,FComputePipelineState_*>_&> @ 145c84420

FRHIComputeShader ** __cdecl
get<0,TTuple<FRHIComputeShader_*,FComputePipelineState_*>_&>
          (TTuple<FRHIComputeShader_*,FComputePipelineState_*> *param_1)

{
  return (FRHIComputeShader **)param_1;
}

// get<0,TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_&> @ 145c84430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FGraphicsPipelineStateInitializer * __cdecl
get<0,TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_&>
          (TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*> *param_1)

{
  return (FGraphicsPipelineStateInitializer *)param_1;
}

// get<0,TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_&> @ 145c84440

FRayTracingPipelineStateSignature * __cdecl
get<0,TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_&>
          (TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*> *param_1)

{
  return (FRayTracingPipelineStateSignature *)param_1;
}

// get<0,TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_&> @ 145c84450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FWorkGraphPipelineStateInitializer * __cdecl
get<0,TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_&>
          (TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> *param_1)

{
  return (FWorkGraphPipelineStateInitializer *)param_1;
}

// get<0,TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>_const_&> @ 145c84460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FQueueID * __cdecl
get<0,TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>_const_&>
          (TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  return (FQueueID *)param_1;
}

// FThreadSafeStaticStat<`TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId'::__l2::FStat_FCompilePipelineStateTask> @ 145c84620

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId(void)const_::_2_::FStat_FCompilePipelineStateTask>
* __thiscall
FThreadSafeStaticStat<`TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId'::__l2::FStat_FCompilePipelineStateTask>
::
FThreadSafeStaticStat<_TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::GetStatId_::__l2::FStat_FCompilePipelineStateTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FCompilePipelineStateTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FCompilePipelineStateTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId'::__l2::FStat_FCompilePipelineStateTask> @ 145c846b0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId(void)const_::_2_::FStat_FCompilePipelineStateTask>
* __thiscall
FThreadSafeStaticStat<`TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId'::__l2::FStat_FCompilePipelineStateTask>
::
FThreadSafeStaticStat<_TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::GetStatId_::__l2::FStat_FCompilePipelineStateTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FCompilePipelineStateTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FCompilePipelineStateTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FCompileRayTracingPipelineStateTask::GetStatId'::__l2::FStat_FCompileRayTracingPipelineStateTask> @ 145c84740

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FCompileRayTracingPipelineStateTask::GetStatId(void)const_::_2_::FStat_FCompileRayTracingPipelineStateTask>
* __thiscall
FThreadSafeStaticStat<`FCompileRayTracingPipelineStateTask::GetStatId'::__l2::FStat_FCompileRayTracingPipelineStateTask>
::
FThreadSafeStaticStat<_FCompileRayTracingPipelineStateTask::GetStatId_::__l2::FStat_FCompileRayTracingPipelineStateTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FCompileRayTracingPipelineStateTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FCompileRayTracingPipelineStateTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FPSOPrecacheAsyncTask::GetStatId'::__l2::FStat_FPSOPrecacheAsyncTask> @ 145c847d0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FPSOPrecacheAsyncTask::GetStatId(void)const_::_2_::FStat_FPSOPrecacheAsyncTask>
* __thiscall
FThreadSafeStaticStat<`FPSOPrecacheAsyncTask::GetStatId'::__l2::FStat_FPSOPrecacheAsyncTask>::
FThreadSafeStaticStat<_FPSOPrecacheAsyncTask::GetStatId_::__l2::FStat_FPSOPrecacheAsyncTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FPSOPrecacheAsyncTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FPSOPrecacheAsyncTask","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<``FRHICommandListExecutor::Submit'::__l56::<lambda_3>::operator()'::__l2::<lambda_1>,0,1> @ 145c894b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FRHICommandListExecutor::Submit'::__l56::<lambda_3>::operator()'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__FRHICommandListExecutor::Submit_::__l56::<lambda_3>::operator()_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FRHICommandListExecutor::Submit'::`56'::<lambda_3>::operator()'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRHICommandListBase::Execute'::__l2::<lambda_1>,1,0> @ 145c894d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListBase::Execute'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FRHICommandListBase::Execute_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListBase::Execute'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRHICommandListExecutor::FTranslateState::Finalize'::__l2::<lambda_1>,0,0> @ 145c894f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListExecutor::FTranslateState::Finalize'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FRHICommandListExecutor::FTranslateState::Finalize_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListExecutor::FTranslateState::Finalize'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRHICommandListExecutor::FTaskPipe::LaunchTask'::__l2::<lambda_1>,1,0> @ 145c89510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListExecutor::FTaskPipe::LaunchTask'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FRHICommandListExecutor::FTaskPipe::LaunchTask_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListExecutor::FTaskPipe::LaunchTask'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,1,0> @ 145c89530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::StartAsyncCacheConsolidation_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartAsyncCacheConsolidation___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,1,0> @ 145c89550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::StartAsyncCacheConsolidation_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartAsyncCacheConsolidation___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,1,0> @ 145c89570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::StartAsyncCacheConsolidation_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartAsyncCacheConsolidation___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>'::__l7::<lambda_1>,1,0> @ 145c89590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>'::__l7::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>_::__l7::<lambda_1>,1,0>
          (void *this)

{
  void *pvVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 != (void *)0x0) {
    if (*(char *)((longlong)pvVar1 + 0x10) < '\0') {
      LOCK();
      GPipelinePrecompileTasksInFlight = (atomic<int>)((int)GPipelinePrecompileTasksInFlight + -1);
      UNLOCK();
    }
    if (*(void **)((longlong)pvVar1 + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x20));
    }
    ::operator_delete(pvVar1,0x40);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>'::__l7::<lambda_1>,1,0> @ 145c895f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>'::__l7::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>_::__l7::<lambda_1>,1,0>
          (void *this)

{
  void *pvVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 != (void *)0x0) {
    if ((*(ushort *)((longlong)pvVar1 + 0xda) & 0x1000) != 0) {
      LOCK();
      GPipelinePrecompileTasksInFlight = (atomic<int>)((int)GPipelinePrecompileTasksInFlight + -1);
      UNLOCK();
    }
    if (*(void **)((longlong)pvVar1 + 0xf0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0xf0));
    }
    ::operator_delete(pvVar1,0x110);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRHICommandListExecutor::FSubmitState::Dispatch'::__l10::<lambda_1>,0,0> @ 145c89650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListExecutor::FSubmitState::Dispatch'::__l10::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FRHICommandListExecutor::FSubmitState::Dispatch_::__l10::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListExecutor::FSubmitState::Dispatch'::`10'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,1,0> @ 145c89670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<_TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup_::__l2::<lambda_1>_>_::__l7::<lambda_2>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAXXZ____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV<lambda_1>__1__ProcessDelayedCleanup_2_AEAAXXZ__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,1,0> @ 145c89690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ProcessDelayedCleanup_::__l2::<lambda_1>_>_::__l7::<lambda_2>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV<lambda_1>__1__ProcessDelayedCleanup_2_AEAAXXZ__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,1,0> @ 145c896b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ProcessDelayedCleanup_::__l2::<lambda_1>_>_::__l7::<lambda_2>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV<lambda_1>__1__ProcessDelayedCleanup_2_AEAAXXZ__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,1,1> @ 145c896d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<_TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap_::__l5::<lambda_1>_>_::__l7::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV<lambda_1>__4__DiscardAndSwap_2_AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,1,1> @ 145c89710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::DiscardAndSwap_::__l5::<lambda_1>_>_::__l7::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV<lambda_1>__4__DiscardAndSwap_2_AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,1,1> @ 145c89750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::DiscardAndSwap_::__l5::<lambda_1>_>_::__l7::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV<lambda_1>__4__DiscardAndSwap_2_AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::__l53::<lambda_2>,0,0> @ 145c89790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::__l53::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FRHICommandListExecutor::Submit_::__l53::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::`53'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::__l56::<lambda_3>,0,1> @ 145c897b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::__l56::<lambda_3>,0,1>::
~TFunction_OwnedObject<_FRHICommandListExecutor::Submit_::__l56::<lambda_3>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::`56'::<lambda_3>,0,1>::_vftable_;
  return;
}

// operator== @ 145c8b910

bool __cdecl
operator==(FDepthStencilStateInitializerRHI *param_1,FDepthStencilStateInitializerRHI *param_2)

{
  if (((((param_1->bEnableDepthWrite == param_2->bEnableDepthWrite) &&
        ((param_1->DepthTest).Value == (param_2->DepthTest).Value)) &&
       (param_1->bEnableFrontFaceStencil == param_2->bEnableFrontFaceStencil)) &&
      (((((param_1->FrontFaceStencilTest).Value == (param_2->FrontFaceStencilTest).Value &&
         ((param_1->FrontFaceStencilFailStencilOp).Value ==
          (param_2->FrontFaceStencilFailStencilOp).Value)) &&
        (((param_1->FrontFaceDepthFailStencilOp).Value ==
          (param_2->FrontFaceDepthFailStencilOp).Value &&
         (((param_1->FrontFacePassStencilOp).Value == (param_2->FrontFacePassStencilOp).Value &&
          (param_1->bEnableBackFaceStencil == param_2->bEnableBackFaceStencil)))))) &&
       ((param_1->BackFaceStencilTest).Value == (param_2->BackFaceStencilTest).Value)))) &&
     (((((param_1->BackFaceStencilFailStencilOp).Value ==
         (param_2->BackFaceStencilFailStencilOp).Value &&
        ((param_1->BackFaceDepthFailStencilOp).Value == (param_2->BackFaceDepthFailStencilOp).Value)
        ) && ((param_1->BackFacePassStencilOp).Value == (param_2->BackFacePassStencilOp).Value)) &&
      ((param_1->StencilReadMask == param_2->StencilReadMask &&
       (param_1->StencilWriteMask == param_2->StencilWriteMask)))))) {
    return true;
  }
  return false;
}

// operator== @ 145c8b9a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

bool __cdecl
operator==(FRasterizerStateInitializerRHI *param_1,FRasterizerStateInitializerRHI *param_2)

{
  if (((((param_1->FillMode).Value == (param_2->FillMode).Value) &&
       ((param_1->CullMode).Value == (param_2->CullMode).Value)) &&
      (param_2->DepthBias == param_1->DepthBias)) &&
     (((param_2->SlopeScaleDepthBias == param_1->SlopeScaleDepthBias &&
       (param_1->DepthClipMode == param_2->DepthClipMode)) &&
      (param_1->bAllowMSAA == param_2->bAllowMSAA)))) {
    return true;
  }
  return false;
}

// operator== @ 145c8b9f0

bool __cdecl operator==(FRenderTarget *param_1,FRenderTarget *param_2)

{
  if (((((param_1->ColorBlendOp).Value == (param_2->ColorBlendOp).Value) &&
       ((param_1->ColorDestBlend).Value == (param_2->ColorDestBlend).Value)) &&
      ((param_1->ColorSrcBlend).Value == (param_2->ColorSrcBlend).Value)) &&
     ((((param_1->AlphaBlendOp).Value == (param_2->AlphaBlendOp).Value &&
       ((param_1->AlphaDestBlend).Value == (param_2->AlphaDestBlend).Value)) &&
      (((param_1->AlphaSrcBlend).Value == (param_2->AlphaSrcBlend).Value &&
       ((param_1->ColorWriteMask).Value == (param_2->ColorWriteMask).Value)))))) {
    return true;
  }
  return false;
}

// operator== @ 145c8ba40

bool __cdecl operator==(FSamplerStateInitializerRHI *param_1,FSamplerStateInitializerRHI *param_2)

{
  if (((((((param_1->Filter).Value == (param_2->Filter).Value) &&
         ((param_1->AddressU).Value == (param_2->AddressU).Value)) &&
        ((param_1->AddressV).Value == (param_2->AddressV).Value)) &&
       (((param_1->AddressW).Value == (param_2->AddressW).Value &&
        (param_2->MipBias == param_1->MipBias)))) &&
      ((param_2->MinMipLevel == param_1->MinMipLevel &&
       ((param_2->MaxMipLevel == param_1->MaxMipLevel &&
        (param_1->MaxAnisotropy == param_2->MaxAnisotropy)))))) &&
     ((param_1->BorderColor == param_2->BorderColor &&
      ((param_1->SamplerComparisonFunction).Value == (param_2->SamplerComparisonFunction).Value))))
  {
    return true;
  }
  return false;
}

// operator== @ 145c8bab0

bool __cdecl operator==(FBlendStateInitializerRHI *param_1,FBlendStateInitializerRHI *param_2)

{
  TEnumAsByte<EBlendFactor> *pTVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  if ((param_1->bUseIndependentRenderTargetBlendStates ==
       param_2->bUseIndependentRenderTargetBlendStates) &&
     (param_1->bUseAlphaToCoverage == param_2->bUseAlphaToCoverage)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  lVar2 = 0;
  pTVar1 = &(param_2->RenderTargets).Elements[0].ColorDestBlend;
  lVar4 = (longlong)param_1 - (longlong)param_2;
  do {
    if (bVar3 == false) {
      return false;
    }
    if ((((pTVar1[lVar4 + -2].Value == (((FRenderTarget *)(pTVar1 + -2))->ColorBlendOp).Value) &&
         (pTVar1[lVar4].Value == pTVar1->Value)) && (pTVar1[lVar4 + -1].Value == pTVar1[-1].Value))
       && (((pTVar1[lVar4 + 1].Value == ((TEnumAsByte<EBlendOperation> *)(pTVar1 + 1))->Value &&
            (pTVar1[lVar4 + 3].Value == pTVar1[3].Value)) &&
           ((pTVar1[lVar4 + 2].Value == pTVar1[2].Value &&
            (pTVar1[lVar4 + 4].Value == ((TEnumAsByte<EColorWriteMask> *)(pTVar1 + 4))->Value))))))
    {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    lVar2 = lVar2 + 1;
    pTVar1 = pTVar1 + 7;
  } while (lVar2 < 8);
  return bVar3;
}

// operator() @ 145c8be20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``FRHICommandListExecutor::Submit'::__l56::<lambda_3>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHI_SubmitToGPU");
  if (CpuChannel->Enabled < 0) {
    FRHICommandListExecutor::FSubmitState::Submit
              (*(FSubmitState **)this,(FSubmitArgs *)((longlong)this + 8));
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1481,"RHI_SubmitToGPU",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
             ,0x5c9);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1481);
  FRHICommandListExecutor::FSubmitState::Submit
            (*(FSubmitState **)this,(FSubmitArgs *)((longlong)this + 8));
  FCpuProfilerTrace::OutputEndEvent();
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 145c8ca10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
`HandlePipelineCreationFailure'::__l2::<lambda_1>::operator()(void *this,FRHIShader *param_1)

{
  FString *pFVar1;
  undefined1 auStack_58 [32];
  FString local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_1 != (FRHIShader *)0x0) {
    local_18 = *(undefined4 *)((param_1->Hash).Hash + 0x10);
    local_28 = *(undefined8 *)(param_1->Hash).Hash;
    uStack_20 = *(undefined8 *)((param_1->Hash).Hash + 8);
    pFVar1 = *(FString **)((longlong)this + 8);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    BytesToHex((uchar *)&local_28,0x14,&local_38);
    switch(param_1->Frequency) {
    case SF_Vertex:
      break;
    case SF_Mesh:
      break;
    case SF_Amplification:
      break;
    case SF_Pixel:
      break;
    case SF_Geometry:
      break;
    case SF_Compute:
      break;
    case SF_NumStandardFrequencies:
      break;
    case SF_RayMiss:
      break;
    case SF_RayHitGroup:
      break;
    case SF_RayCallable:
      break;
    case SF_WorkGraphRoot:
      break;
    case SF_WorkGraphComputeNode:
    }
    ::FString::AppendfImpl(pFVar1,L"%s: %s, ");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  FSHA1::Update(*(FSHA1 **)this,(uchar *)&local_28,0x14);
  return;
}

// operator() @ 145c8ced0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `RHIGetTrackedResourceStats'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  uint uVar8;
  wchar_t *pwVar9;
  FResourceFlags *pFVar10;
  FString *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> **ppTVar13;
  longlong lVar14;
  longlong lVar15;
  TReferenceControllerBase<1> *pTVar16;
  FSharedReferencer<1> FVar17;
  uint uVar18;
  FResourceFlags local_a0;
  FResourceFlags local_90;
  TReferenceControllerBase<1> *local_80;
  FSharedReferencer<1> FStack_78;
  FString local_70;
  FString local_60 [2];
  
  plVar1 = *(longlong **)this;
  uVar18 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar8 = uVar18;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  plVar2 = *(longlong **)this;
  lVar14 = (longlong)param_1 * 0x30;
  lVar3 = *(longlong *)(lVar14 + *plVar1);
  uVar8 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar8 = uVar18;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar15 = *plVar2 + lVar14;
  pwVar9 = StringFromRHIResourceType(*(ERHIResourceType *)(lVar15 + 0x10));
  plVar1 = *(longlong **)this;
  lVar4 = *(longlong *)(lVar15 + 0x20);
  uVar8 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar8 = uVar18;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar10 = RHIInternal::GetResourceFlagsInternal(&local_90,(FResourceEntry *)(*plVar1 + lVar14));
  local_a0.bResident = pFVar10->bResident;
  local_a0.bMarkedForDelete = pFVar10->bMarkedForDelete;
  local_a0.bTransient = pFVar10->bTransient;
  local_a0.bStreaming = pFVar10->bStreaming;
  local_a0.bRT = pFVar10->bRT;
  local_a0.bDS = pFVar10->bDS;
  local_a0.bUAV = pFVar10->bUAV;
  local_a0.bRTAS = pFVar10->bRTAS;
  bVar7 = pFVar10->bHasFlags;
  local_a0.bHasFlags = bVar7;
  pFVar11 = RHIInternal::FResourceFlags::GetString(&local_a0,local_60);
  uVar5 = *(undefined8 *)(lVar3 + 0x10);
  pTVar12 = ::operator_new(0x58);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    pTVar16 = ___xmm_00000000000000000000000000000010;
    FVar17.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFRHIResourceStats___00_SharedPointerInternals__6B_;
    ::FString::FString(&local_70,pwVar9);
    _Src.Data = local_70.Data.AllocatorInstance.Data;
    pTVar16 = pTVar12 + 2;
    pTVar12[1]._padding_ = *(longlong *)(lVar15 + 8);
    pTVar12[1].SharedReferenceCount = (atomic<int>)(int)uVar5;
    pTVar12[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar5 >> 0x20);
    pTVar16->_padding_ = 0;
    pTVar12[2].SharedReferenceCount = (atomic<int>)local_70.Data.ArrayNum;
    if ((atomic<int>)local_70.Data.ArrayNum == (atomic<int>)0x0) {
      pTVar12[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_70.Data.ArrayNum,0,(ForAnyElementType *)pTVar16,local_70.Data.ArrayNum,
                 (int *)&pTVar12[2].WeakReferenceCount);
      memcpy((FScriptContainerElement *)pTVar16->_padding_,_Src.Data,
             (longlong)local_70.Data.ArrayNum * 2);
    }
    ::FString::FString((FString *)(pTVar12 + 3),pFVar11);
    pTVar12[4]._padding_ = lVar4;
    *(bool *)&pTVar12[4].SharedReferenceCount = local_a0.bResident;
    pTVar12[4].SharedReferenceCount.field_0x1 = local_a0.bMarkedForDelete;
    pTVar12[4].SharedReferenceCount.field_0x2 = local_a0.bTransient;
    pTVar12[4].SharedReferenceCount.field_0x3 = local_a0.bStreaming;
    *(bool *)&pTVar12[4].WeakReferenceCount = local_a0.bRT;
    pTVar12[4].WeakReferenceCount.field_0x1 = local_a0.bDS;
    pTVar12[4].WeakReferenceCount.field_0x2 = local_a0.bUAV;
    pTVar12[4].WeakReferenceCount.field_0x3 = local_a0.bRTAS;
    *(bool *)&pTVar12[5]._padding_ = bVar7;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    pTVar16 = pTVar12 + 1;
    FVar17.ReferenceController = pTVar12;
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar8 = uVar18;
  }
  local_80 = pTVar16;
  FStack_78.ReferenceController = FVar17.ReferenceController;
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  ppTVar13 = (TReferenceControllerBase<1> **)(*plVar1 + (longlong)param_1 * 0x10);
  if (ppTVar13 != &local_80) {
    *ppTVar13 = pTVar16;
    local_80 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(ppTVar13 + 1),&FStack_78);
    FVar17.ReferenceController = FStack_78.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145c8f0f0

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

void __thiscall
<lambda_6>::operator()
          (<lambda_6> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> *pTVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int *_Dst;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  int local_1c0;
  undefined1 local_1b8 [8];
  FName local_1b0;
  TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  int local_188;
  uint uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178;
  FOutputDevice *local_170;
  TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FBufferedOutputDevice local_138;
  int local_e8 [44];
  ulonglong local_38;
  
  _Dst = local_e8;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_170 = param_3;
  memset(_Dst,0,0xac);
  EnterCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
  iVar13 = GRHITrackedResources.Elements._8_4_ - GRHITrackedResources.Elements._52_4_;
  iVar10 = 0;
  iStack_1a0 = 0;
  uStack_19c = 1;
  local_188 = 0;
  uVar9 = GRHITrackedResources.Elements._40_4_;
  uStack_18c = 0;
  if (uVar9 != 0) {
    puVar12 = (uint *)&GRHITrackedResources.Elements.field_0x10;
    if (GRHITrackedResources.Elements._32_8_ != 0) {
      puVar12 = (uint *)GRHITrackedResources.Elements._32_8_;
    }
    uVar14 = *puVar12;
    local_188 = 0;
    while (uVar14 == 0) {
      lVar6 = (longlong)iStack_1a0;
      local_188 = local_188 + 0x20;
      iStack_1a0 = iStack_1a0 + 1;
      uStack_18c = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
      goto LAB_145c8f1e1;
      uVar14 = puVar12[lVar6 + 1];
    }
    uStack_19c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_19c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_178 = (int)lVar6;
    uStack_18c = local_178 + -1 + local_188;
    if ((int)uVar9 < (int)uStack_18c) {
      uStack_18c = uVar9;
    }
  }
LAB_145c8f1e1:
  local_198 = 0x154be9400;
  local_1a8 = &GRHITrackedResources;
  bVar2 = GRHITrackedResources.Elements._40_1_;
  uStack_190 = 0xffffffff;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_160.CurrentBitIndex = uStack_18c;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160._padding_ = CONCAT44(uStack_19c,iStack_1a0);
  local_168 = &GRHITrackedResources;
  TStack_160._28_4_ = uStack_18c;
  TStack_160.BaseBitIndex = local_188;
  uStack_140 = CONCAT44(uStack_17c,iVar13);
  iVar8 = (int)uVar9 >> 5;
  TStack_160.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&GRHITrackedResources.Elements.field_0x10;
  uVar11 = uVar9;
  uStack_184 = uStack_18c;
  iStack_180 = iVar13;
  if ((int)uVar9 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar11 = GRHITrackedResources.Elements._40_4_;
  }
  if (uVar9 != uVar11) {
    lVar6 = 0x154be9400;
    if (GRHITrackedResources.Elements._32_8_ != 0) {
      lVar6 = GRHITrackedResources.Elements._32_8_;
    }
    uVar9 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar14 = uVar14 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_145c8f300;
      uVar9 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar9 = (int)lVar6 + -1 + uVar14;
    if ((int)uVar11 < (int)uVar9) {
      uVar9 = uVar11;
    }
  }
LAB_145c8f300:
  while( true ) {
    pTVar4 = local_168;
    if (*(int *)&(local_168->Elements).field_0x8 - *(int *)&(local_168->Elements).field_0x34 !=
        (int)uStack_140) {
      `TSparseArray<TSparseSetElement<FRHIResource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b8);
    }
    if (((TStack_160.CurrentBitIndex == uVar9) &&
        (TStack_160.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&GRHITrackedResources.Elements.field_0x10)) &&
       (pTVar4 == &GRHITrackedResources)) break;
    lVar6 = *(longlong *)
             (*(longlong *)&pTVar4->Elements + (longlong)TStack_160.CurrentBitIndex * 0x10);
    if ((lVar6 != 0) && (bVar2 = *(byte *)(lVar6 + 0xc), (byte)(bVar2 - 1) < 0x2a)) {
      _Dst[bVar2] = _Dst[bVar2] + 1;
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
  FBufferedOutputDevice::FBufferedOutputDevice(&local_138);
  ::FName::FName(&local_1b0,L"RHIResources");
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_138,&local_1b0,Log,L"RHIResource Counts");
  do {
    iVar8 = *_Dst;
    if (0 < iVar8) {
      local_1c8 = StringFromRHIResourceType((ERHIResourceType)iVar10);
      local_1c0 = iVar8;
      FOutputDevice::CategorizedLogfImpl((FOutputDevice *)&local_138,&local_1b0,Log,L"%s: %d");
    }
    iVar10 = iVar10 + 1;
    _Dst = _Dst + 1;
  } while (iVar10 < 0x2b);
  local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,iVar13);
  FOutputDevice::CategorizedLogfImpl((FOutputDevice *)&local_138,&local_1b0,Log,L"Total: %d");
  FBufferedOutputDevice::RedirectTo(&local_138,local_170);
  FBufferedOutputDevice::~FBufferedOutputDevice(&local_138);
  return;
}

// operator() @ 145c8f470

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

void __thiscall
<lambda_7>::operator()
          (<lambda_7> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *this_00;
  bool bVar8;
  bool bVar9;
  EBooleanFilter EVar10;
  bool bVar11;
  undefined1 auStackY_1a8 [32];
  bool local_168;
  ERHIResourceType local_167;
  FString local_160;
  undefined1 local_150 [4];
  uint local_14c;
  FScriptContainerElement *local_148;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_140;
  FOutputDevice *local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FBufferedOutputDevice local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = (param_1->AllocatorInstance).Data;
  local_167 = RRT_None;
  EVar10 = No;
  local_168 = false;
  bVar8 = false;
  local_14c = param_1->ArrayNum;
  uVar5 = (ulonglong)(int)local_14c;
  bVar9 = false;
  iVar4 = 0x32;
  local_148 = this_00 + uVar5 * 0x10;
  local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.Data.ArrayNum = 0;
  local_160.Data.ArrayMax = 0;
  local_140 = param_1;
  local_138 = param_3;
LAB_145c8f4f1:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          pFVar1 = local_148;
          if (local_140->ArrayNum != (int)uVar5) {
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_150);
          }
          if (this_00 == pFVar1) {
            FBufferedOutputDevice::FBufferedOutputDevice(&local_88);
            RHIDumpResourceMemory(&local_160,local_167,EVar10,iVar4,bVar8,bVar9,local_168,&local_88)
            ;
            FBufferedOutputDevice::RedirectTo(&local_88,local_138);
            FBufferedOutputDevice::~FBufferedOutputDevice(&local_88);
            if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_160.Data.AllocatorInstance.Data);
            }
            return;
          }
          ::FString::FString(&local_130,L"all");
          iVar3 = *(int *)(this_00 + 8);
          if (iVar3 == local_130.Data.ArrayNum) {
            if (iVar3 < 2) {
              bVar11 = true;
            }
            else {
              iVar3 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)&this_00->field_0x0,
                                 (wchar_t *)local_130.Data.AllocatorInstance.Data);
              bVar11 = iVar3 == 0;
            }
          }
          else {
            bVar11 = iVar3 + local_130.Data.ArrayNum == 1;
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if (!bVar11) break;
          iVar4 = -1;
          this_00 = this_00 + 0x10;
          uVar5 = (ulonglong)local_14c;
        }
        ::FString::FString(&local_120,L"-csv");
        iVar3 = *(int *)(this_00 + 8);
        if (iVar3 == local_120.Data.ArrayNum) {
          if (iVar3 < 2) {
            bVar11 = true;
          }
          else {
            iVar3 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)&this_00->field_0x0,
                               (wchar_t *)local_120.Data.AllocatorInstance.Data);
            bVar11 = iVar3 == 0;
          }
        }
        else {
          bVar11 = iVar3 + local_120.Data.ArrayNum == 1;
        }
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (!bVar11) break;
        bVar8 = true;
        this_00 = this_00 + 0x10;
        uVar5 = (ulonglong)local_14c;
      }
      ::FString::FString(&local_110,L"-csvfile");
      iVar3 = *(int *)(this_00 + 8);
      if (iVar3 == local_110.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar11 = true;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)&this_00->field_0x0,
                             (wchar_t *)local_110.Data.AllocatorInstance.Data);
          bVar11 = iVar3 == 0;
        }
      }
      else {
        bVar11 = iVar3 + local_110.Data.ArrayNum == 1;
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (!bVar11) break;
      this_00 = this_00 + 0x10;
      uVar5 = (ulonglong)local_14c;
      local_168 = true;
    }
    bVar11 = ::FString::StartsWith((FString *)this_00,L"Name=",5,IgnoreCase);
    if (bVar11) {
      pFVar6 = ::FString::RightChop((FString *)this_00,&local_c0,5);
      if (&local_160 != pFVar6) {
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        local_160.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_160.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_c0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_145c8fa3b;
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      this_00 = this_00 + 0x10;
      uVar5 = (ulonglong)local_14c;
      goto LAB_145c8f4f1;
    }
    bVar11 = ::FString::StartsWith((FString *)this_00,L"Type=",5,IgnoreCase);
    if (bVar11) {
      pFVar6 = ::FString::RightChop((FString *)this_00,&local_b0,5);
      local_167 = RHIResourceTypeFromString(pFVar6);
      if (local_b0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_145c8fa3b;
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      this_00 = this_00 + 0x10;
      uVar5 = (ulonglong)local_14c;
    }
    else {
      bVar11 = ::FString::StartsWith((FString *)this_00,L"Transient=",10,IgnoreCase);
      if (!bVar11) break;
      pFVar6 = ::FString::RightChop((FString *)this_00,&local_a0,10);
      ::FString::FString(&local_100,L"No");
      iVar3 = (pFVar6->Data).ArrayNum;
      if (iVar3 == local_100.Data.ArrayNum) {
        if (iVar3 < 2) {
          bVar11 = true;
        }
        else {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                             (wchar_t *)local_100.Data.AllocatorInstance.Data);
          bVar11 = iVar3 == 0;
        }
      }
      else {
        bVar11 = iVar3 + local_100.Data.ArrayNum == 1;
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        EVar10 = No;
      }
      else {
        ::FString::FString(&local_f0,L"Yes");
        iVar3 = (pFVar6->Data).ArrayNum;
        if (iVar3 == local_f0.Data.ArrayNum) {
          if (iVar3 < 2) {
            bVar11 = true;
          }
          else {
            iVar3 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                               (wchar_t *)local_f0.Data.AllocatorInstance.Data);
            bVar11 = iVar3 == 0;
          }
        }
        else {
          bVar11 = iVar3 + local_f0.Data.ArrayNum == 1;
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
          EVar10 = Yes;
        }
        else {
          ::FString::FString(&local_e0,L"All");
          iVar3 = (pFVar6->Data).ArrayNum;
          if (iVar3 == local_e0.Data.ArrayNum) {
            if (iVar3 < 2) {
              bVar11 = true;
            }
            else {
              iVar3 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                                 (wchar_t *)local_e0.Data.AllocatorInstance.Data);
              bVar11 = iVar3 == 0;
            }
          }
          else {
            bVar11 = iVar3 + local_e0.Data.ArrayNum == 1;
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          EVar10 = -(uint)bVar11 & All;
        }
      }
      if (local_a0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_145c8fa3b;
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      this_00 = this_00 + 0x10;
      uVar5 = (ulonglong)local_14c;
    }
  } while( true );
  if (*(int *)(this_00 + 8) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)&this_00->field_0x0;
  }
  wVar2 = *pwVar7;
  if ((wVar2 == L'-') || (wVar2 == L'+')) {
    pwVar7 = pwVar7 + 1;
    wVar2 = *pwVar7;
  }
  bVar11 = false;
  if (wVar2 != L'\0') {
    wVar2 = *pwVar7;
    do {
      if (wVar2 == L'.') {
        if (bVar11) {
LAB_145c8f922:
          ::FString::FString(&local_d0,L"summary");
          iVar3 = *(int *)(this_00 + 8);
          if (iVar3 == local_d0.Data.ArrayNum) {
            if (iVar3 < 2) {
              bVar11 = true;
            }
            else {
              iVar3 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)&this_00->field_0x0,
                                 (wchar_t *)local_d0.Data.AllocatorInstance.Data);
              bVar11 = iVar3 == 0;
            }
          }
          else {
            bVar11 = iVar3 + local_d0.Data.ArrayNum == 1;
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (bVar11) {
            bVar9 = true;
            iVar4 = -1;
            uVar5 = (ulonglong)local_14c;
            this_00 = this_00 + 0x10;
            goto LAB_145c8f4f1;
          }
          if ((FScriptContainerElement *)&local_160 == this_00) goto LAB_145c8fa3b;
          iVar3 = *(int *)(this_00 + 8);
          _Src = *(void **)&this_00->field_0x0;
          local_160.Data.ArrayNum = iVar3;
          if ((iVar3 == 0) && (local_160.Data.ArrayMax == 0)) {
            this_00 = this_00 + 0x10;
            uVar5 = (ulonglong)local_14c;
            local_160.Data.ArrayNum = 0;
            local_160.Data.ArrayMax = 0;
            goto LAB_145c8f4f1;
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,local_160.Data.ArrayMax,(ForAnyElementType *)&local_160,iVar3,
                     &local_160.Data.ArrayMax);
          if (iVar3 == 0) goto LAB_145c8fa3b;
          memcpy(local_160.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
          this_00 = this_00 + 0x10;
          uVar5 = (ulonglong)local_14c;
          goto LAB_145c8f4f1;
        }
        bVar11 = true;
      }
      else {
        iVar3 = iswdigit(wVar2);
        if (iVar3 == 0) goto LAB_145c8f922;
      }
      wVar2 = pwVar7[1];
      pwVar7 = pwVar7 + 1;
    } while (wVar2 != L'\0');
  }
  if (*(int *)(this_00 + 8) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)&this_00->field_0x0;
  }
  iVar4 = _wtoi(pwVar7);
LAB_145c8fa3b:
  this_00 = this_00 + 0x10;
  uVar5 = (ulonglong)local_14c;
  goto LAB_145c8f4f1;
}

// `vector_deleting_destructor' @ 145c8faf0

/* WARNING: Type propagation algorithm not settling */

void * __thiscall
TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
::_vector_deleting_destructor_
          (TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
           *this,uint param_1)

{
  void *pvVar1;
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar2;
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  longlong lVar3;
  
  if ((param_1 & 2) == 0) {
    if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
      pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this);
    }
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x50);
    }
    return this;
  }
  lVar3 = *(longlong *)((longlong)&this[-1].field0_0x0 + 0x48);
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(this + lVar3);
  while (pTVar2 = this_00, lVar3 != 0) {
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x20);
    lVar3 = lVar3 + -1;
    if (*(int *)&((TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
                   *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x2c))->field0_0x0 != -1) {
      *(undefined4 *)
       &((TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
          *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x68))->field0_0x0 = 0;
      pvVar1 = *(void **)&((TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
                            *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x60))->field0_0x0;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
    }
  }
  if ((param_1 & 1) != 0) {
    operator_delete__((void *)((longlong)&this[-1].field0_0x0 + 0x48),
                      *(longlong *)((longlong)&this[-1].field0_0x0 + 0x48) * 0x50 + 8);
  }
  return (void *)((longlong)&this[-1].field0_0x0 + 0x48);
}

// `vector_deleting_destructor' @ 145c8fbe0

/* WARNING: Type propagation algorithm not settling */

void * __thiscall
TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
::_vector_deleting_destructor_
          (TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
           *this,uint param_1)

{
  void *pvVar1;
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar2;
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  longlong lVar3;
  
  if ((param_1 & 2) == 0) {
    if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
      pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this);
    }
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x50);
    }
    return this;
  }
  lVar3 = *(longlong *)((longlong)&this[-1].field0_0x0 + 0x48);
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(this + lVar3);
  while (pTVar2 = this_00, lVar3 != 0) {
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x20);
    lVar3 = lVar3 + -1;
    if (*(int *)&((TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
                   *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x2c))->field0_0x0 != -1) {
      *(undefined4 *)
       &((TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
          *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x68))->field0_0x0 = 0;
      pvVar1 = *(void **)&((TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
                            *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x60))->field0_0x0;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
    }
  }
  if ((param_1 & 1) != 0) {
    operator_delete__((void *)((longlong)&this[-1].field0_0x0 + 0x48),
                      *(longlong *)((longlong)&this[-1].field0_0x0 + 0x48) * 0x50 + 8);
  }
  return (void *)((longlong)&this[-1].field0_0x0 + 0x48);
}

// `vector_deleting_destructor' @ 145c8fcd0

/* WARNING: Type propagation algorithm not settling */

void * __thiscall
TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
::_vector_deleting_destructor_
          (TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
           *this,uint param_1)

{
  void *pvVar1;
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar2;
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  longlong lVar3;
  
  if ((param_1 & 2) == 0) {
    if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
      pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this);
    }
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x50);
    }
    return this;
  }
  lVar3 = *(longlong *)((longlong)&this[-1].field0_0x0 + 0x48);
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(this + lVar3);
  while (pTVar2 = this_00, lVar3 != 0) {
    this_00 = (TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x20);
    lVar3 = lVar3 + -1;
    if (*(int *)&((TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
                   *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x2c))->field0_0x0 != -1) {
      *(undefined4 *)
       &((TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
          *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x68))->field0_0x0 = 0;
      pvVar1 = *(void **)&((TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
                            *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x60))->field0_0x0;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
    }
  }
  if ((param_1 & 1) != 0) {
    operator_delete__((void *)((longlong)&this[-1].field0_0x0 + 0x48),
                      *(longlong *)((longlong)&this[-1].field0_0x0 + 0x48) * 0x50 + 8);
  }
  return (void *)((longlong)&this[-1].field0_0x0 + 0x48);
}

// `vector_deleting_destructor'`adjustor{40}' @ 145c8fdbc

/* [thunk]:public: virtual void * __ptr64 __cdecl FRHITexture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FRHITexture::_vector_deleting_destructor__adjustor_40__(FRHITexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FRHITexture *)&this[-1].TextureDesc.NumMips,param_1);
  return pvVar1;
}

// `default_constructor_closure' @ 145c8fdd0

void __thiscall
TSharedPtr<FPipelineStateAsync::FCompletionState,1>::_default_constructor_closure_
          (TSharedPtr<FPipelineStateAsync::FCompletionState,1> *this)

{
  this->Object = (FCompletionState *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return;
}

// `scalar_deleting_destructor' @ 145c8fde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FRHICommandListExecutor::Submit'::__l56::<lambda_3>::operator()'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``FRHICommandListExecutor::Submit'::`56'::<lambda_3>::operator()'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c8fe20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListBase::Execute'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListBase::Execute'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c8fe60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListExecutor::FTranslateState::Finalize'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListExecutor::FTranslateState::Finalize'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c8fea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListExecutor::FTaskPipe::LaunchTask'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListExecutor::FTaskPipe::LaunchTask'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c8fee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartAsyncCacheConsolidation___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c8ff20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartAsyncCacheConsolidation___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c8ff60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartAsyncCacheConsolidation___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c8ffa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>'::__l7::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 != (void *)0x0) {
    if (*(char *)((longlong)pvVar1 + 0x10) < '\0') {
      LOCK();
      GPipelinePrecompileTasksInFlight = (atomic<int>)((int)GPipelinePrecompileTasksInFlight + -1);
      UNLOCK();
    }
    if (*(void **)((longlong)pvVar1 + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x20));
    }
    ::operator_delete(pvVar1,0x40);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>'::__l7::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>'::`7'::<lambda_1>,1,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 != (void *)0x0) {
    if ((*(ushort *)((longlong)pvVar1 + 0xda) & 0x1000) != 0) {
      LOCK();
      GPipelinePrecompileTasksInFlight = (atomic<int>)((int)GPipelinePrecompileTasksInFlight + -1);
      UNLOCK();
    }
    if (*(void **)((longlong)pvVar1 + 0xf0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0xf0));
    }
    ::operator_delete(pvVar1,0x110);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c900b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListExecutor::FSubmitState::Dispatch'::__l10::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListExecutor::FSubmitState::Dispatch'::`10'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c900f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAXXZ____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV<lambda_1>__1__ProcessDelayedCleanup_2_AEAAXXZ__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV<lambda_1>__1__ProcessDelayedCleanup_2_AEAAXXZ__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV<lambda_1>__1__ProcessDelayedCleanup_2_AEAAXXZ__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c901e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV<lambda_1>__4__DiscardAndSwap_2_AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV<lambda_1>__4__DiscardAndSwap_2_AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c902c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV<lambda_1>__4__DiscardAndSwap_2_AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z__Z__00_00_Function_Private_Core_UE__6B_
  ;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::__l53::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::`53'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::__l56::<lambda_3>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::`56'::<lambda_3>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c903b0

void * __thiscall
TGraphTask<FCompileComputePipelineStateTask>::_scalar_deleting_destructor_
          (TGraphTask<FCompileComputePipelineStateTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90410

void * __thiscall
TGraphTask<FCompileGraphicsPipelineStateTask>::_scalar_deleting_destructor_
          (TGraphTask<FCompileGraphicsPipelineStateTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90470

void * __thiscall
TGraphTask<FCompileRayTracingPipelineStateTask>::_scalar_deleting_destructor_
          (TGraphTask<FCompileRayTracingPipelineStateTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c904d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPipelineStateAsync::FCompletionState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPipelineStateAsync::FCompletionState,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90510

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRHIResourceStats,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FRHIResourceStats,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90550

void * __thiscall
FComputePipelineState::_scalar_deleting_destructor_(FComputePipelineState *this,uint param_1)

{
  FRHIComputePipelineState *this_00;
  
  this->_padding_ = (longlong)&___7FComputePipelineState__6B_;
  FRHIResource::Release((FRHIResource *)this->ComputeShader);
  this_00 = (this->RHIPipeline).Reference;
  if (this_00 != (FRHIComputePipelineState *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FPipelineStateAsync::~FPipelineStateAsync((FPipelineStateAsync *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c905b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FGraphicsPipelineState::_scalar_deleting_destructor_(FGraphicsPipelineState *this,uint param_1)

{
  FRHIGraphicsPipelineState *this_00;
  
  this_00 = (this->RHIPipeline).Reference;
  if (this_00 != (FRHIGraphicsPipelineState *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FPipelineStateAsync::~FPipelineStateAsync((FPipelineStateAsync *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90600

void * __thiscall
FPSOPrecacheAsyncTask::_scalar_deleting_destructor_(FPSOPrecacheAsyncTask *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->AsyncTaskFunc != 0) {
    plVar1 = *(longlong **)&(this->AsyncTaskFunc).field_0x28;
    plVar2 = (longlong *)&(this->AsyncTaskFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90660

void * __thiscall FPipelineState::_scalar_deleting_destructor_(FPipelineState *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90690

void * __thiscall
FPipelineStateAsync::_scalar_deleting_destructor_(FPipelineStateAsync *this,uint param_1)

{
  ~FPipelineStateAsync(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c906d0

void * __thiscall
FPipelineStateSync::_scalar_deleting_destructor_(FPipelineStateSync *this,uint param_1)

{
  ~FPipelineStateSync(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90710

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall FRHIBuffer::_scalar_deleting_destructor_(FRHIBuffer *this,uint param_1)

{
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90760

void * __thiscall FRHIResource::_scalar_deleting_destructor_(FRHIResource *this,uint param_1)

{
  ~FRHIResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c907a0

void * __thiscall
FRHIResourceCollection::_scalar_deleting_destructor_(FRHIResourceCollection *this,uint param_1)

{
  ~FRHIResourceCollection(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c907e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall FRHITexture::_scalar_deleting_destructor_(FRHITexture *this,uint param_1)

{
  ForElementType<EPixelFormat> FVar1;
  
  FVar1 = (this->TextureDesc).AliasableFormats.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90850

void * __thiscall
FRHIUniformBufferLayout::_scalar_deleting_destructor_(FRHIUniformBufferLayout *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GraphUniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GraphBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GraphTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GraphResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Resources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c908f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRHIViewableResource::_scalar_deleting_destructor_(FRHIViewableResource *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90930

void * __thiscall
FRayTracingPipelineState::_scalar_deleting_destructor_(FRayTracingPipelineState *this,uint param_1)

{
  void *pvVar1;
  FRHIRayTracingPipelineState *this_00;
  
  *(undefined4 *)&(this->MissShaderMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MissShaderMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MissShaderMap);
  *(undefined4 *)&(this->CallableShaderMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CallableShaderMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CallableShaderMap);
  *(undefined4 *)&(this->HitGroupShaderMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HitGroupShaderMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSHAHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HitGroupShaderMap);
  this_00 = (this->RHIPipeline).Reference;
  if (this_00 != (FRHIRayTracingPipelineState *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FPipelineStateSync::~FPipelineStateSync((FPipelineStateSync *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c90a00

void * __thiscall
FWorkGraphPipelineState::_scalar_deleting_destructor_(FWorkGraphPipelineState *this,uint param_1)

{
  FRHIResource *this_00;
  FRHIWorkGraphShader *this_01;
  
  this->_padding_ = (longlong)&___7FWorkGraphPipelineState__6B_;
  FRHIResource::Release((FRHIResource *)(this->WorkGraphShader).Reference);
  this_00 = (FRHIResource *)(this->RHIPipeline).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  this_01 = (this->WorkGraphShader).Reference;
  if (this_01 != (FRHIWorkGraphShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FPipelineStateAsync::~FPipelineStateAsync((FPipelineStateAsync *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// BoostPrecachePriority @ 145c92330

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PipelineStateCache::BoostPrecachePriority
          (EPSOPrecachePriority param_1,FPSOPrecacheRequestID *param_2)

{
  EPSOPrecacheStateMask EVar1;
  code *pcVar2;
  TUniquePtr<FPrecacheGraphicsPipelineCache,TDefaultDelete<FPrecacheGraphicsPipelineCache>_> this;
  bool bVar3;
  EPSOPrecacheStateMask EVar4;
  uint uVar5;
  FPrecacheTask *pFVar6;
  FPrecacheTask *pFVar7;
  EPSOPrecacheStateMask EVar8;
  TUniquePtr<FPrecacheComputePipelineCache,TDefaultDelete<FPrecacheComputePipelineCache>_> this_00;
  
  this_00.Ptr = GPrecacheComputePipelineCache.Ptr;
  this.Ptr = GPrecacheGraphicsPipelineCache.Ptr;
  if ((GPSOPrecaching != 0) && (GRHIGlobals.SupportsPSOPrecaching)) {
    if ((GForceHighToHighestPri) && (param_1 == High)) {
      param_1 = Highest;
    }
    uVar5 = param_2->Type;
    if (uVar5 == 1) {
      if ((*(int *)GPrecacheGraphicsPipelineCache.Ptr != 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RequestID.GetType() == PSOType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x9ed,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AcquireSRWLockShared((PSRWLOCK)&(this.Ptr)->field_0x8);
      uVar5 = param_2->RequestID;
      if ((*(int *)&(this.Ptr)->field_0x18 <= (int)uVar5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
               ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
                       *)&(this.Ptr)->field_0x20,
                      *(ulong64 *)(*(longlong *)&(this.Ptr)->field_0x10 + (ulonglong)uVar5 * 8));
      if ((pFVar6 == (FPrecacheTask *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("FindResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x9f3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar8 = Boosted;
      if (param_1 == Highest) {
        EVar8 = HighestPri|Boosted;
      }
      EVar4 = pFVar6->StateMask;
      do {
        LOCK();
        EVar1 = pFVar6->StateMask;
        bVar3 = EVar4 == EVar1;
        if (bVar3) {
          pFVar6->StateMask = EVar4 | EVar8;
          EVar1 = EVar4;
        }
        EVar4 = EVar1;
        UNLOCK();
      } while (!bVar3);
      this_00.Ptr = (FPrecacheComputePipelineCache *)this;
      if (((((EVar4 & (Failed|Succeeded)) == None) && ((EVar4 & Compiling) != None)) &&
          ((EVar4 & HighestPri) == None)) &&
         (((EVar4 & Boosted) == None || ((EVar8 & HighestPri) != None)))) {
        TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
        ::RescheduleTaskToHighPriority
                  ((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                    *)this.Ptr,EVar8,EVar4,pFVar6->PipelineState);
      }
    }
    else {
      if ((uVar5 != *(uint *)GPrecacheComputePipelineCache.Ptr) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RequestID.GetType() == PSOType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x9ed,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AcquireSRWLockShared((PSRWLOCK)&(this_00.Ptr)->field_0x8);
      uVar5 = param_2->RequestID;
      if ((*(int *)&(this_00.Ptr)->field_0x18 <= (int)uVar5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
               ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
                       *)&(this_00.Ptr)->field_0x20,
                      *(ulong64 *)(*(longlong *)&(this_00.Ptr)->field_0x10 + (ulonglong)uVar5 * 8));
      if ((pFVar7 == (FPrecacheTask *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("FindResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x9f3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar8 = Boosted;
      if (param_1 == Highest) {
        EVar8 = HighestPri|Boosted;
      }
      EVar4 = pFVar7->StateMask;
      do {
        LOCK();
        EVar1 = pFVar7->StateMask;
        bVar3 = EVar4 == EVar1;
        if (bVar3) {
          pFVar7->StateMask = EVar4 | EVar8;
          EVar1 = EVar4;
        }
        EVar4 = EVar1;
        UNLOCK();
      } while (!bVar3);
      if (((((EVar4 & (Failed|Succeeded)) == None) && ((EVar4 & Compiling) != None)) &&
          ((EVar4 & HighestPri) == None)) &&
         (((EVar4 & Boosted) == None || ((EVar8 & HighestPri) != None)))) {
        TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
        ::RescheduleTaskToHighPriority
                  ((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                    *)this_00.Ptr,EVar8,EVar4,pFVar7->PipelineState);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&((FPrecacheGraphicsPipelineCache *)this_00.Ptr)->field_0x8);
  }
  return;
}

// CalculateImageBytes @ 145c92c50

ulong64 __cdecl CalculateImageBytes(uint param_1,uint param_2,uint param_3,uchar param_4)

{
  ulong64 uVar1;
  
  if (param_4 == '\x19') {
    return (ulonglong)(param_1 + 7 >> 3) * (ulonglong)param_2;
  }
  if (param_3 != 0) {
    uVar1 = FPixelFormatInfo::Get3DImageSizeInBytes(GPixelFormats + param_4,param_1,param_2,param_3)
    ;
    return uVar1;
  }
  uVar1 = FPixelFormatInfo::Get2DImageSizeInBytes(GPixelFormats + param_4,param_1,param_2);
  return uVar1;
}

// CalculateMSAASampleArrayIndex @ 145c92cb0

int __cdecl CalculateMSAASampleArrayIndex(int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (0xf < param_1 - 1U) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("NumSamples > 0 && NumSamples <= 16",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x75b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((param_1 & param_1 - 1U) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo(NumSamples)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x75c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_1 <= param_2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("SampleIndex < NumSamples",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x75d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return param_2 + -1 + param_1;
}

// CheckAndUpdateHitchCountStat @ 145c933f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
CheckAndUpdateHitchCountStat
          (EType param_1,bool param_2,FPSOCompilationDebugData *param_3,ulong64 param_4,
          EPSOPrecacheResult param_5)

{
  uint uVar1;
  LARGE_INTEGER LVar2;
  atomic<unsigned_int> aVar3;
  double dVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  longlong lVar7;
  FString *pFVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_RuntimeGraphicsPSOHitchCount> FVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FThreadSafeStaticStat<FStat_STAT_RuntimeComputePSOHitchCount> FVar11;
  bool bVar12;
  int iVar13;
  LARGE_INTEGER local_48;
  FStatMessage local_40 [2];
  
  pTVar5 = CVarPSORuntimeCreationHitchThreshold.Ref;
  if (param_2) {
    bVar12 = false;
    LOCK();
    RuntimePSOCreationCount = (atomic<unsigned_int>)((int)RuntimePSOCreationCount + 1);
    UNLOCK();
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    iVar13 = *(int *)((longlong)pTVar5->ShadowedValue + lVar7);
    QueryPerformanceCounter(&local_48);
    dVar4 = (double)(local_48.QuadPart - param_4) * FGenericPlatformTime::SecondsPerCycle64 *
            __real_408f400000000000;
    if ((double)iVar13 < dVar4) {
      if (param_1 == Graphics) {
        if (5 < (byte)LogPSOHitching._0_1_) {
          bVar12 = false;
          if ((param_3->BreadcrumbNode != (FRHIBreadcrumbNode *)0x0) &&
             (pFVar8 = FRHIBreadcrumbNode::GetFullPath(param_3->BreadcrumbNode,(FString *)local_40),
             bVar12 = true, (pFVar8->Data).ArrayNum == 0)) {
            bVar12 = true;
          }
          LexToString(param_5);
          UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogPSOHitching);
          if ((bVar12) && (local_40[0].StatData.Pad != (uchar  [8])0x0)) {
            FMemory::Free((void *)local_40[0].StatData.Pad);
          }
        }
        FVar10 = StatPtr_STAT_RuntimeGraphicsPSOHitchCount;
        if (StatPtr_STAT_RuntimeGraphicsPSOHitchCount ==
            (FThreadSafeStaticStat<FStat_STAT_RuntimeGraphicsPSOHitchCount>)0x0) {
          pFVar9 = FName::FName((FName *)&local_48.s,"STAT_RuntimeGraphicsPSOHitchCount");
          FVar10 = (FThreadSafeStaticStat<FStat_STAT_RuntimeGraphicsPSOHitchCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_RuntimeGraphicsPSOHitchCount,*pFVar9,
                              L"Runtime Graphics PSO Hitch Count","STATGROUP_PipelineStateCache",
                              "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,
                              false,MCR_Invalid);
        }
        LVar2 = *(LARGE_INTEGER *)FVar10;
        local_48 = LVar2;
        if ((((FName)LVar2.QuadPart != (FName)0x0) &&
            (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this = TlsGetValue(FThreadStats::TlsSlot);
          if (this == (FThreadStats *)0x0) {
            this_00 = FThreadStatsPool::Get();
            this = FThreadStatsPool::GetFromPool(this_00);
          }
          local_40[0].NameAndInfo.Number = LVar2.s.HighPart & 0xffffafffU | 0xa000;
          local_40[0].StatData.Pad = (uchar  [8])&DAT_00000001;
          local_48 = LVar2;
          local_40[0].NameAndInfo.Index.Value = LVar2.s.LowPart;
          FThreadStats::AddStatMessage(this,local_40);
          FStatsTrace::Add((FName *)&local_48.s,1);
          if (this->ScopeCount == 0) {
            FThreadStats::Flush(this,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this,false,false);
          }
        }
        if (__CsvProfilerStat280 == false) {
          FCsvProfilerTrace::OutputInlineStat("GraphicsPSOHitch",_GCsvCategory_PSO.Index);
          __CsvProfilerStat280 = true;
        }
        FCsvProfiler::RecordCustomStat("GraphicsPSOHitch",_GCsvCategory_PSO.Index,1,Accumulate);
        if (__CsvProfilerStat281 == false) {
          FCsvProfilerTrace::OutputInlineStat("GraphicsPSOHitchTime",_GCsvCategory_PSO.Index);
          __CsvProfilerStat281 = true;
        }
        FCsvProfiler::RecordCustomStat
                  ("GraphicsPSOHitchTime",_GCsvCategory_PSO.Index,dVar4,Accumulate);
        LOCK();
        GraphicsPSOCreationHitchCount =
             (atomic<unsigned_int>)((int)GraphicsPSOCreationHitchCount + 1);
        UNLOCK();
      }
      else if (param_1 == Compute) {
        if (5 < (byte)LogPSOHitching._0_1_) {
          if (param_3->BreadcrumbNode != (FRHIBreadcrumbNode *)0x0) {
            pFVar8 = FRHIBreadcrumbNode::GetFullPath(param_3->BreadcrumbNode,(FString *)local_40);
            if ((pFVar8->Data).ArrayNum == 0) {
              bVar12 = true;
            }
            else {
              bVar12 = true;
            }
          }
          LexToString(param_5);
          UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogPSOHitching);
          if ((bVar12) && (local_40[0].StatData.Pad != (uchar  [8])0x0)) {
            FMemory::Free((void *)local_40[0].StatData.Pad);
          }
        }
        FVar11 = StatPtr_STAT_RuntimeComputePSOHitchCount;
        if (StatPtr_STAT_RuntimeComputePSOHitchCount ==
            (FThreadSafeStaticStat<FStat_STAT_RuntimeComputePSOHitchCount>)0x0) {
          pFVar9 = FName::FName((FName *)&local_48.s,"STAT_RuntimeComputePSOHitchCount");
          FVar11 = (FThreadSafeStaticStat<FStat_STAT_RuntimeComputePSOHitchCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RuntimeComputePSOHitchCount
                              ,*pFVar9,L"Runtime Compute PSO Hitch Count",
                              "STATGROUP_PipelineStateCache","STATCAT_Advanced",
                              L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
        }
        local_48 = *(LARGE_INTEGER *)FVar11;
        FThreadStats::AddMessage<__int64>((FName)local_48.s,Add,1,false);
        if (__CsvProfilerStat292 == false) {
          FCsvProfilerTrace::OutputInlineStat("ComputePSOHitch",_GCsvCategory_PSO.Index);
          __CsvProfilerStat292 = true;
        }
        FCsvProfiler::RecordCustomStat("ComputePSOHitch",_GCsvCategory_PSO.Index,1,Accumulate);
        if (__CsvProfilerStat293 == false) {
          FCsvProfilerTrace::OutputInlineStat("ComputePSOHitchTime",_GCsvCategory_PSO.Index);
          __CsvProfilerStat293 = true;
        }
        FCsvProfiler::RecordCustomStat
                  ("ComputePSOHitchTime",_GCsvCategory_PSO.Index,dVar4,Accumulate);
        LOCK();
        ComputePSOCreationHitchCount = (atomic<unsigned_int>)((int)ComputePSOCreationHitchCount + 1)
        ;
        UNLOCK();
      }
      if (param_5 == Complete) {
        LOCK();
        PrecachedPSOCreationHitchCount =
             (atomic<unsigned_int>)((int)PrecachedPSOCreationHitchCount + 1);
        UNLOCK();
        if ((double)GPSOPrecacheUnhealthyCacheHitchThresholdMs < dVar4) {
          LOCK();
          aVar3 = (atomic<unsigned_int>)((int)UnhealthyDriverCachePSOCreationHitchCount + 1);
          UNLOCK();
          iVar13 = (int)UnhealthyDriverCachePSOCreationHitchCount + 1;
          UnhealthyDriverCachePSOCreationHitchCount = aVar3;
          if (iVar13 == GPSOPrecacheUnhealthyCacheMaxHitches) {
            if (2 < (byte)LogPSOHitching._0_1_) {
              UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPSOHitching);
            }
            bDriverCacheSuspectedUnhealthy = (atomic<bool>)0x1;
          }
        }
      }
      LOCK();
      aVar3 = (atomic<unsigned_int>)((int)TotalPSOCreationHitchCount + 1);
      UNLOCK();
      uVar1 = (int)TotalPSOCreationHitchCount + 1;
      TotalPSOCreationHitchCount = aVar3;
      if (((uVar1 != 0) && (uVar1 == (uVar1 / 0x32) * 0x32)) && (4 < (byte)LogPSOHitching._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogPSOHitching);
      }
    }
  }
  return;
}

// CheckPipelineStateInCache @ 145c939a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EPSOPrecacheResult __cdecl
PipelineStateCache::CheckPipelineStateInCache(FGraphicsPipelineStateInitializer *param_1)

{
  EPSOPrecacheResult EVar1;
  
  if ((GPSOPrecaching != 0) && (GRHIGlobals.SupportsPSOPrecaching)) {
    EVar1 = TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
            ::GetPrecachingState
                      ((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                        *)GPrecacheGraphicsPipelineCache.Ptr,param_1);
    return EVar1;
  }
  return Unknown;
}

// CheckPipelineStateInCache @ 145c939d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EPSOPrecacheResult __cdecl PipelineStateCache::CheckPipelineStateInCache(FRHIComputeShader *param_1)

{
  EPSOPrecacheResult EVar1;
  FComputePipelineStateInitializer local_18;
  
  if (((GPSOPrecaching != 0) && (GRHIGlobals.SupportsPSOPrecaching)) &&
     (param_1 != (FRHIComputeShader *)0x0)) {
    local_18.field1_0x8.Flags = '\0';
    local_18.ComputeShader = param_1;
    EVar1 = TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
            ::GetPrecachingState
                      ((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                        *)GPrecacheComputePipelineCache.Ptr,&local_18);
    return EVar1;
  }
  return Unknown;
}

// DetermineRuntimeBindlessConfiguration @ 145c995a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ERHIBindlessConfiguration __cdecl
DetermineRuntimeBindlessConfiguration(EShaderPlatform param_1,wchar_t *param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FConfigCacheIni *this;
  bool bVar4;
  ERHIBindlessConfiguration EVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  ERHIBindlessConfiguration local_res8 [2];
  ERHIBindlessConfiguration local_res20 [2];
  TStringBuilderBase<wchar_t> local_b8;
  FString local_98;
  FName local_88 [2];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  undefined4 local_30;
  
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ec,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    EVar5 = (*pcVar2)();
    return EVar5;
  }
  this = GConfig;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsBindless == 0) {
    return Disabled;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_b8.Base = (wchar_t *)0x0;
  local_b8.CurPos = (wchar_t *)0x0;
  local_b8.End = (wchar_t *)0x0;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x9d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    EVar5 = (*pcVar2)();
    return EVar5;
  }
  local_88[0] = FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Name;
  FName::ToString(local_88,&local_b8);
  if (0 < (int)((longlong)local_b8.CurPos - (longlong)local_b8.Base >> 1)) {
    local_30 = 0x15;
    if (local_b8.End < local_b8.CurPos + 0x15) {
      TStringBuilderBase<wchar_t>::Extend(&local_b8,0x15);
    }
    pwVar6 = local_b8.CurPos + 0x15;
    uVar3 = u_ShaderPlatformC._8_8_;
    for (pwVar7 = local_b8.CurPos + 0x14; u_ShaderPlatformC._8_8_ = uVar3,
        pwVar7 != local_b8.Base + 0x14; pwVar7 = pwVar7 + -1) {
      *pwVar7 = pwVar7[-0x15];
      uVar3 = u_ShaderPlatformC._8_8_;
    }
    *(undefined8 *)local_b8.Base = u_ShaderPlatformC._0_8_;
    *(undefined8 *)(local_b8.Base + 4) = uVar3;
    uVar3 = u_ShaderPlatformC._24_8_;
    *(undefined8 *)(local_b8.Base + 8) = u_ShaderPlatformC._16_8_;
    *(undefined8 *)(local_b8.Base + 0xc) = uVar3;
    *(undefined8 *)(local_b8.Base + 0x10) = u_ShaderPlatformC._32_8_;
    local_b8.Base[0x14] = u_ShaderPlatformC[0x14];
    pwVar7 = local_b8.CurPos + 0x16;
    local_b8.CurPos = pwVar6;
    if (local_b8.End < pwVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
    }
    *local_b8.CurPos = L'\0';
    FConfigCacheIni::GetString(this,local_b8.Base,param_2,&local_98,&GEngineIni);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ec,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    EVar5 = (*pcVar2)();
    return EVar5;
  }
  EVar5 = Disabled;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsBindless != 0) {
    local_78 = local_98.Data.AllocatorInstance.Data;
    local_res20[0] = Disabled;
    iStack_70 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iStack_70 = 0;
    }
    local_58._12_4_ = uStack_6c;
    local_58.Size = iStack_70;
    local_58.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
    GetBindlessConfigurationFromString(&local_58,local_res20);
    local_68 = (param_3->Data).AllocatorInstance.Data;
    iVar1 = (param_3->Data).ArrayNum;
    local_res8[0] = Disabled;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    GetBindlessConfigurationFromString(&local_48,local_res8);
    if (((local_res20[0] != Disabled) || (local_res8[0] != Disabled)) &&
       (EVar5 = local_res20[0], local_res8[0] != Disabled)) {
      EVar5 = local_res8[0];
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return EVar5;
}

// DumpPipelineCacheStats @ 145c9cbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DumpPipelineCacheStats(void)

{
  if (1 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    return;
  }
  return;
}

// DumpRHIMemory @ 145c9cc00

void __cdecl DumpRHIMemory(FOutputDevice *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FStatMessage *pFVar6;
  FName local_res18;
  FName local_res20;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  GetPermanentStats(&local_48);
  FName::FName(&local_res18,"STATGROUP_RHI");
  FOutputDevice::Log(param_1,L"RHI resource memory (not tracked by our allocator)");
  uVar4 = 0;
  if (0 < local_48.ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < local_48.ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (FStatMessage *)(local_48.AllocatorInstance.Data + lVar5);
      FStatNameAndInfo::GetGroupNameFrom((FName)&local_res20);
      if ((local_res20 == local_res18) && (((pFVar6->NameAndInfo).Number & 0x80000U) != 0)) {
        FStatsUtils::DebugPrint(&local_38,pFVar6);
        FOutputDevice::LogfImpl(param_1,L"%s");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((int)uVar4 < local_48.ArrayNum);
  }
  FOutputDevice::LogfImpl(param_1,L"%.3fMB total");
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// ExecuteSetComputePipelineState @ 145ca2990

FRHIComputePipelineState * __cdecl ExecuteSetComputePipelineState(FComputePipelineState *param_1)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputePipelineState *pFVar5;
  
  if ((param_1->RHIPipeline).Reference == (FRHIComputePipelineState *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4687553501859942441>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x1029,"PipelineState->RHIPipeline");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRHIComputePipelineState *)(*pcVar3)();
      return pFVar5;
    }
  }
  FPipelineStateStats::UpdateStats((FPipelineStateStats *)param_1->_padding_);
  LOCK();
  pFVar1 = &param_1->InUseCount;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Result >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x482,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRHIComputePipelineState *)(*pcVar3)();
      return pFVar5;
    }
  }
  return (param_1->RHIPipeline).Reference;
}

// ExecuteSetGraphicsPipelineState @ 145ca2a20

/* WARNING: Enum "Type": Some values do not have unique names */

FRHIGraphicsPipelineState * __cdecl ExecuteSetGraphicsPipelineState(FGraphicsPipelineState *param_1)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRHIGraphicsPipelineState *pFVar5;
  
  pFVar5 = (param_1->RHIPipeline).Reference;
  FPipelineStateStats::UpdateStats((FPipelineStateStats *)param_1->_padding_);
  LOCK();
  pFVar1 = &param_1->InUseCount;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Result >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x4e5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRHIGraphicsPipelineState *)(*pcVar3)();
      return pFVar5;
    }
  }
  return pFVar5;
}

// FindComputePipelineState @ 145ca4620

FComputePipelineState * __cdecl FindComputePipelineState(FRHIComputeShader *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FComputePipelineState *pFVar3;
  FLLMScope local_res8 [2];
  FRHIComputeShader *local_res18;
  FComputePipelineState *local_res20;
  FMemScope local_18 [2];
  
  local_res18 = param_1;
  FLLMScope::FLLMScope(local_res8,PSO,false,None,Default,true);
  FMemScope::FMemScope(local_18,PSO,true);
  if (local_res18 == (FRHIComputeShader *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("ComputeShader != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x10f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FComputePipelineState *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_res20 = (FComputePipelineState *)0x0;
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::Find
            (&GComputePipelineCache,&local_res18,&local_res20);
  pFVar3 = local_res20;
  if (local_res20 != (FComputePipelineState *)0x0) {
    bVar2 = FPipelineStateAsync::IsComplete((FPipelineStateAsync *)local_res20);
    if (bVar2) {
      if (param_2) {
        FComputePipelineState::Verify_IncUse(pFVar3);
      }
      goto LAB_145ca46d1;
    }
  }
  pFVar3 = (FComputePipelineState *)0x0;
LAB_145ca46d1:
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar3;
}

// FindComputePipelineState @ 145ca4700

FComputePipelineState * __cdecl
PipelineStateCache::FindComputePipelineState(FRHIComputeShader *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FComputePipelineState *pFVar3;
  FRHIComputeShader *local_res8;
  FLLMScope local_res18 [2];
  FComputePipelineState *local_res20;
  FMemScope local_18 [2];
  
  local_res8 = param_1;
  FLLMScope::FLLMScope(local_res18,PSO,false,None,Default,true);
  FMemScope::FMemScope(local_18,PSO,true);
  if (local_res8 == (FRHIComputeShader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComputeShader != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x10f4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FComputePipelineState *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_res20 = (FComputePipelineState *)0x0;
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::Find
            (&GComputePipelineCache,&local_res8,&local_res20);
  pFVar3 = local_res20;
  if (local_res20 != (FComputePipelineState *)0x0) {
    bVar2 = FPipelineStateAsync::IsComplete((FPipelineStateAsync *)local_res20);
    if (bVar2) {
      if (param_2) {
        FComputePipelineState::Verify_IncUse(pFVar3);
      }
      goto LAB_145ca47b1;
    }
  }
  pFVar3 = (FComputePipelineState *)0x0;
LAB_145ca47b1:
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res18);
  return pFVar3;
}

// FindGraphicsPipelineState @ 145ca47e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FGraphicsPipelineState * __cdecl
FindGraphicsPipelineState(FGraphicsPipelineStateInitializer *param_1,bool param_2)

{
  bool bVar1;
  FGraphicsPipelineState *this;
  FLLMScope local_res18 [2];
  FGraphicsPipelineState *local_res20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res18,PSO,false,None,Default,true);
  FMemScope::FMemScope(local_18,PSO,true);
  ValidateGraphicsPipelineStateInitializer(param_1);
  local_res20 = (FGraphicsPipelineState *)0x0;
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::Find
            (&GGraphicsPipelineCache,param_1,&local_res20);
  this = local_res20;
  if (local_res20 != (FGraphicsPipelineState *)0x0) {
    bVar1 = FPipelineStateAsync::IsComplete((FPipelineStateAsync *)local_res20);
    if (bVar1) {
      if (param_2) {
        FGraphicsPipelineState::Verify_IncUse(this);
      }
      goto LAB_145ca4867;
    }
  }
  this = (FGraphicsPipelineState *)0x0;
LAB_145ca4867:
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res18);
  return this;
}

// FindGraphicsPipelineState @ 145ca4890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FGraphicsPipelineState * __cdecl
PipelineStateCache::FindGraphicsPipelineState
          (FGraphicsPipelineStateInitializer *param_1,bool param_2)

{
  bool bVar1;
  FGraphicsPipelineState *this;
  FLLMScope local_res18 [2];
  FGraphicsPipelineState *local_res20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res18,PSO,false,None,Default,true);
  FMemScope::FMemScope(local_18,PSO,true);
  ValidateGraphicsPipelineStateInitializer(param_1);
  local_res20 = (FGraphicsPipelineState *)0x0;
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::Find
            (&GGraphicsPipelineCache,param_1,&local_res20);
  this = local_res20;
  if (local_res20 != (FGraphicsPipelineState *)0x0) {
    bVar1 = FPipelineStateAsync::IsComplete((FPipelineStateAsync *)local_res20);
    if (bVar1) {
      if (param_2) {
        FGraphicsPipelineState::Verify_IncUse(this);
      }
      goto LAB_145ca4917;
    }
  }
  this = (FGraphicsPipelineState *)0x0;
LAB_145ca4917:
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res18);
  return this;
}

// FindRayTracingCallableShaderIndex @ 145ca4940

int __cdecl
FindRayTracingCallableShaderIndex
          (FRayTracingPipelineState *param_1,FRHIRayTracingShader *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  
  iVar3 = TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSHAHash>
                    ((TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
                      *)&param_1->CallableShaderMap,(uint)param_2->_padding_,
                     (FSHAHash *)&param_2->_padding_);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&(param_1->CallableShaderMap).field_0x0;
    piVar5 = (int *)(lVar4 + 0x14);
    if (lVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      return *piVar5;
    }
  }
  if (param_3) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!bRequired",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x57f,L"Required callable shader was not found in the ray tracing pipeline."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return -1;
}

// FindRayTracingHitGroupIndex @ 145ca49e0

int __cdecl
FindRayTracingHitGroupIndex
          (FRayTracingPipelineState *param_1,FRHIRayTracingShader *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  
  iVar3 = TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSHAHash>
                    ((TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
                      *)&param_1->HitGroupShaderMap,(uint)param_2->_padding_,
                     (FSHAHash *)&param_2->_padding_);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&(param_1->HitGroupShaderMap).field_0x0;
    piVar5 = (int *)(lVar4 + 0x14);
    if (lVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      return *piVar5;
    }
  }
  if (param_3) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!bRequired",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x572,
                       L"Required hit group shader was not found in the ray tracing pipeline.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return -1;
}

// FindRayTracingMissShaderIndex @ 145ca4a80

int __cdecl
FindRayTracingMissShaderIndex
          (FRayTracingPipelineState *param_1,FRHIRayTracingShader *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  
  iVar3 = TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSHAHash>
                    ((TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
                      *)&param_1->MissShaderMap,(uint)param_2->_padding_,
                     (FSHAHash *)&param_2->_padding_);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&(param_1->MissShaderMap).field_0x0;
    piVar5 = (int *)(lVar4 + 0x14);
    if (lVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      return *piVar5;
    }
  }
  if (param_3) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!bRequired",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x58c,L"Required miss shader was not found in the ray tracing pipeline.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return -1;
}

// FindWorkGraphPipelineState @ 145ca4b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FWorkGraphPipelineState * __cdecl
PipelineStateCache::FindWorkGraphPipelineState
          (FWorkGraphPipelineStateInitializer *param_1,bool param_2)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FWorkGraphPipelineState *pFVar5;
  FLLMScope local_res8 [2];
  FWorkGraphPipelineState *local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,PSO,true);
  if ((param_1->ShaderTable).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Initializer.GetShaderTable().Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0xed5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FWorkGraphPipelineState *)(*pcVar3)();
      return pFVar5;
    }
  }
  local_res18 = (FWorkGraphPipelineState *)0x0;
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::Find
            (&GWorkGraphPipelineCache,param_1,&local_res18);
  pFVar5 = local_res18;
  if (local_res18 != (FWorkGraphPipelineState *)0x0) {
    bVar4 = FPipelineStateAsync::IsComplete((FPipelineStateAsync *)local_res18);
    if (bVar4) {
      if (param_2) {
        LOCK();
        pFVar1 = &pFVar5->InUseCount;
        iVar2 = pFVar1->Counter;
        pFVar1->Counter = pFVar1->Counter + 1;
        UNLOCK();
        if (iVar2 + 1 < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result >= 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x4b2,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FWorkGraphPipelineState *)(*pcVar3)();
            return pFVar5;
          }
        }
      }
      goto LAB_145ca4bff;
    }
  }
  pFVar5 = (FWorkGraphPipelineState *)0x0;
LAB_145ca4bff:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar5;
}

// FlushResources @ 145ca5db0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl PipelineStateCache::FlushResources(void)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  TAtomic<unsigned_int> TVar6;
  TAtomic<unsigned_int> TVar7;
  TAtomic<unsigned_int> TVar8;
  longlong lVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  TAtomic<unsigned_int> local_28;
  TAtomic<unsigned_int> local_24 [7];
  
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0xdd0,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    QueryPerformanceCounter(&local_res8);
    LastEvictionTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    _Init_thread_footer(&::_TSS0);
  }
  QueryPerformanceCounter(&local_res10);
  pTVar4 = CVarPSOEvictionTime.Ref;
  dVar3 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    lVar9 = 4;
    if (!bVar5) goto LAB_145ca5e68;
  }
  lVar9 = 0;
LAB_145ca5e68:
  iVar1 = *(int *)((longlong)pTVar4->ShadowedValue + lVar9);
  if ((iVar1 == 0) || (dVar3 - LastEvictionTime < (double)iVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    LastEvictionTime = dVar3;
  }
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::FlushResources
            (&GComputePipelineCache,bVar5);
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  FlushResources(&GWorkGraphPipelineCache,bVar5);
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  FlushResources(&GGraphicsPipelineCache,bVar5);
  if (((GPrecacheGraphicsPipelineCache.Ptr == (FPrecacheGraphicsPipelineCache *)0x0) ||
      (GPrecacheComputePipelineCache.Ptr == (FPrecacheComputePipelineCache *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPrecacheGraphicsPipelineCache && GPrecacheComputePipelineCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0xde6,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
  ::SetMaxInMemoryPSOs
            ((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
              *)GPrecacheGraphicsPipelineCache.Ptr,GPSOPrecacheKeepInMemoryGraphicsMaxNum);
  TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
  ::SetMaxInMemoryPSOs
            ((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
              *)GPrecacheComputePipelineCache.Ptr,GPSOPrecacheKeepInMemoryComputeMaxNum);
  TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
  ::ProcessDelayedCleanup
            ((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
              *)GPrecacheGraphicsPipelineCache.Ptr);
  TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
  ::ProcessDelayedCleanup
            ((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
              *)GPrecacheComputePipelineCache.Ptr);
  FPipelineFileCacheManager::BroadcastNewPSOsDelegate();
  TVar7 = GraphicsPipelineCacheMisses;
  TVar8 = (TAtomic<unsigned_int>)0x0;
  TVar6 = TVar8;
  if (1 < GraphicsPipelineCacheMissesHistory.ArrayNum) {
    TVar6 = *(TAtomic<unsigned_int> *)
             (GraphicsPipelineCacheMissesHistory.AllocatorInstance.Data + 4);
  }
  if (__CsvProfilerStat3569 == false) {
    FCsvProfilerTrace::OutputInlineStat("PSOMisses",_GCsvCategory_PSO.Index);
    __CsvProfilerStat3569 = true;
  }
  FCsvProfiler::RecordCustomStat("PSOMisses",_GCsvCategory_PSO.Index,(int)TVar7,Set);
  if (ReportFrameHitchThisFrame == false) {
    TVar7 = (TAtomic<unsigned_int>)0xffffffff;
    TVar6 = TVar7;
  }
  if (__CsvProfilerStat3577 == false) {
    FCsvProfilerTrace::OutputInlineStat("PSOMissesOnHitch",_GCsvCategory_PSO.Index);
    __CsvProfilerStat3577 = true;
  }
  FCsvProfiler::RecordCustomStat("PSOMissesOnHitch",_GCsvCategory_PSO.Index,(int)TVar7,Set);
  if (__CsvProfilerStat3578 == false) {
    FCsvProfilerTrace::OutputInlineStat("PSOPrevFrameMissesOnHitch",_GCsvCategory_PSO.Index);
    __CsvProfilerStat3578 = true;
  }
  FCsvProfiler::RecordCustomStat("PSOPrevFrameMissesOnHitch",_GCsvCategory_PSO.Index,(int)TVar6,Set)
  ;
  TVar7 = ComputePipelineCacheMisses;
  if (1 < ComputePipelineCacheMissesHistory.ArrayNum) {
    TVar8 = *(TAtomic<unsigned_int> *)(ComputePipelineCacheMissesHistory.AllocatorInstance.Data + 4)
    ;
  }
  if (__CsvProfilerStat3584 == false) {
    FCsvProfilerTrace::OutputInlineStat("PSOComputeMisses",_GCsvCategory_PSO.Index);
    __CsvProfilerStat3584 = true;
  }
  FCsvProfiler::RecordCustomStat("PSOComputeMisses",_GCsvCategory_PSO.Index,(int)TVar7,Set);
  if (ReportFrameHitchThisFrame == false) {
    TVar7 = (TAtomic<unsigned_int>)0xffffffff;
    TVar8 = TVar7;
  }
  if (__CsvProfilerStat3592 == false) {
    FCsvProfilerTrace::OutputInlineStat("PSOComputeMissesOnHitch",_GCsvCategory_PSO.Index);
    __CsvProfilerStat3592 = true;
  }
  FCsvProfiler::RecordCustomStat("PSOComputeMissesOnHitch",_GCsvCategory_PSO.Index,(int)TVar7,Set);
  if (__CsvProfilerStat3593 == false) {
    FCsvProfilerTrace::OutputInlineStat("PSOComputePrevFrameMissesOnHitch",_GCsvCategory_PSO.Index);
    __CsvProfilerStat3593 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("PSOComputePrevFrameMissesOnHitch",_GCsvCategory_PSO.Index,(int)TVar8,Set);
  ReportFrameHitchThisFrame = false;
  local_28 = GraphicsPipelineCacheMisses;
  if (((GraphicsPipelineCacheMissesHistory.AllocatorInstance.Data <= &local_28) &&
      (&local_28 <
       (TAtomic<unsigned_int> *)
       (GraphicsPipelineCacheMissesHistory.AllocatorInstance.Data +
       (longlong)GraphicsPipelineCacheMissesHistory.ArrayMax * 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (GraphicsPipelineCacheMissesHistory.ArrayNum == GraphicsPipelineCacheMissesHistory.ArrayMax) {
    GraphicsPipelineCacheMissesHistory.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&GraphicsPipelineCacheMissesHistory.AllocatorInstance,
                    &GraphicsPipelineCacheMissesHistory.ArrayMax);
  }
  lVar9 = (longlong)GraphicsPipelineCacheMissesHistory.ArrayNum;
  GraphicsPipelineCacheMissesHistory.ArrayNum = GraphicsPipelineCacheMissesHistory.ArrayNum + 1;
  memmove(GraphicsPipelineCacheMissesHistory.AllocatorInstance.Data + 4,
          GraphicsPipelineCacheMissesHistory.AllocatorInstance.Data,lVar9 << 2);
  *(TAtomic<unsigned_int> *)GraphicsPipelineCacheMissesHistory.AllocatorInstance.Data = local_28;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (&GraphicsPipelineCacheMissesHistory,3,Default);
  local_24[0] = ComputePipelineCacheMisses;
  if (((ComputePipelineCacheMissesHistory.AllocatorInstance.Data <= local_24) &&
      (local_24 <
       (TAtomic<unsigned_int> *)
       (ComputePipelineCacheMissesHistory.AllocatorInstance.Data +
       (longlong)ComputePipelineCacheMissesHistory.ArrayMax * 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (ComputePipelineCacheMissesHistory.ArrayNum == ComputePipelineCacheMissesHistory.ArrayMax) {
    ComputePipelineCacheMissesHistory.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&ComputePipelineCacheMissesHistory.AllocatorInstance,
                    &ComputePipelineCacheMissesHistory.ArrayMax);
  }
  lVar9 = (longlong)ComputePipelineCacheMissesHistory.ArrayNum;
  ComputePipelineCacheMissesHistory.ArrayNum = ComputePipelineCacheMissesHistory.ArrayNum + 1;
  memmove(ComputePipelineCacheMissesHistory.AllocatorInstance.Data + 4,
          ComputePipelineCacheMissesHistory.AllocatorInstance.Data,lVar9 << 2);
  *(TAtomic<unsigned_int> *)ComputePipelineCacheMissesHistory.AllocatorInstance.Data = local_24[0];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (&ComputePipelineCacheMissesHistory,3,Default);
  LOCK();
  GraphicsPipelineCacheMisses = (TAtomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  ComputePipelineCacheMisses = (TAtomic<unsigned_int>)0x0;
  UNLOCK();
  return;
}

// GetAndOrCreateComputePipelineState @ 145ca7740

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FComputePipelineState * __cdecl
PipelineStateCache::GetAndOrCreateComputePipelineState
          (FRHIComputeCommandList *param_1,FRHIComputeShader *param_2,bool param_3)

{
  undefined1 *puVar1;
  FRHIComputeShader *this;
  FRHIBreadcrumbNode *pFVar2;
  code *pcVar3;
  FRHIBreadcrumbNode *pFVar4;
  bool bVar5;
  bool bVar6;
  EPSOPrecacheResult EVar7;
  int iVar8;
  FComputePipelineState *pFVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  FBaseGraphTask *pFVar11;
  FComputePipelineState *pFVar12;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  int *piVar15;
  undefined1 uVar16;
  FRHIComputeShader *local_res10 [2];
  bool local_res20 [8];
  FComputePipelineState *local_b8;
  FLLMScope local_b0 [2];
  TRefCountPtr<FBaseGraphTask> local_a8;
  FPipelineStateStats *local_a0;
  TRefCountPtr<FBaseGraphTask> local_98;
  FComputePipelineStateInitializer local_90;
  FPSOCompilationDebugData local_80;
  TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&> local_60;
  FRHIComputeShader **local_50;
  FComputePipelineState **local_48;
  
  local_res10[0] = param_2;
  FLLMScope::FLLMScope(local_b0,PSO,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&local_60.Value,PSO,true);
  pFVar12 = (FComputePipelineState *)0x0;
  local_b8 = (FComputePipelineState *)0x0;
  bVar5 = TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::Find
                    (&GComputePipelineCache,local_res10,&local_b8);
  bVar6 = IsAsyncCompilationAllowed(param_1,param_3);
  if (bVar5) {
    if ((!param_3) &&
       (bVar5 = FPipelineStateAsync::IsComplete((FPipelineStateAsync *)local_b8), !bVar5)) {
      pFVar11 = FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)local_b8);
      local_98.Reference = pFVar11;
      if (pFVar11 == (FBaseGraphTask *)0x0) {
        FRHICommandListBase::AddDispatchPrerequisite((FRHICommandListBase *)param_1,&local_98);
      }
      else {
        LOCK();
        *(int *)&pFVar11->field_0x30 = *(int *)&pFVar11->field_0x30 + 1;
        UNLOCK();
        FRHICommandListBase::AddDispatchPrerequisite((FRHICommandListBase *)param_1,&local_98);
        LOCK();
        puVar1 = &pFVar11->field_0x30;
        iVar8 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (*(code *)**(undefined8 **)pFVar11)(pFVar11,1);
        }
      }
    }
    goto LAB_145ca7bec;
  }
  local_90.field1_0x8.Flags = param_3 << 7;
  uVar16 = 0;
  local_90.ComputeShader = local_res10[0];
  local_res20[0] = false;
  EVar7 = Unknown;
  if ((GPSOPrecaching == 0) || (EVar7 = Unknown, GRHIGlobals.SupportsPSOPrecaching == false)) {
LAB_145ca7850:
    bVar5 = false;
  }
  else {
    bVar5 = ShouldKeepPrecachedPSOsInMemory();
    if ((bVar5) && (GPSOPrecacheKeepInMemoryUntilUsed == 2)) {
      EVar7 = TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
              ::GetPrecachingStateInternal
                        ((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                          *)GPrecacheComputePipelineCache.Ptr,
                         (ulonglong)(uint)(local_90.ComputeShader)->_padding_,true,local_res20);
      uVar16 = local_res20[0];
    }
    else {
      EVar7 = TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
              ::GetPrecachingState
                        ((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                          *)GPrecacheComputePipelineCache.Ptr,&local_90);
    }
    if (1 < EVar7 - Active) goto LAB_145ca7850;
    bVar5 = true;
  }
  local_a0 = (FPipelineStateStats *)0x0;
  uVar13 = ((uint)((ulonglong)local_res10[0] >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_res10[0] >> 4)) * -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  FPipelineFileCacheManager::CacheComputePSO(uVar13 >> 0x10 ^ uVar13,local_res10[0],bVar5,&local_a0)
  ;
  pFVar9 = ::operator_new(0x50);
  if (pFVar9 != (FComputePipelineState *)0x0) {
    pFVar9->_padding_ = 0;
    ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)&pFVar9->_padding_)->Object =
         (FCompletionState *)0x0;
    ((FSharedReferencer<1> *)&pFVar9->_padding_)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    *(bool *)&pFVar9->_padding_ = false;
    *(bool *)((longlong)&pFVar9->_padding_ + 1) = false;
    ((FPSOCSVStatTracker *)&pFVar9->_padding_)->Pri = NotSet;
    pFVar9->ComputeShader = local_res10[0];
    this = pFVar9->ComputeShader;
    pFVar9->_padding_ = (longlong)&___7FComputePipelineState__6B_;
    (pFVar9->RHIPipeline).Reference = (FRHIComputePipelineState *)0x0;
    (pFVar9->InUseCount).Counter = 0;
    FRHIResource::AddRef((FRHIResource *)this);
    pFVar12 = pFVar9;
  }
  pFVar12->_padding_ = (longlong)local_a0;
  local_b8 = pFVar12;
  if (bVar6) {
    TVar10 = FBaseGraphTask::CreateGraphEvent();
    FPipelineStateAsync::SetCompletionEvent((FPipelineStateAsync *)local_b8,TVar10);
  }
  if (!param_3) {
    LOCK();
    ComputePipelineCacheMisses = (TAtomic<unsigned_int>)((int)ComputePipelineCacheMisses + 1);
    UNLOCK();
  }
  local_80.PSOCompilationEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.PSOCompilationEventName.Data.ArrayNum = 0;
  local_80.PSOCompilationEventName.Data.ArrayMax = 0;
  if (EVar7 == Active) {
    EVar7 = TooLate;
  }
  local_80.BreadcrumbRoot = (FRHIBreadcrumbNode *)0x0;
  local_80.BreadcrumbNode = (FRHIBreadcrumbNode *)0x0;
  if (((bVar6) &&
      (pFVar2 = *(FRHIBreadcrumbNode **)&param_1->field_0x2f8, pFVar2 != (FRHIBreadcrumbNode *)0x0))
     && (pFVar2 != FRHIBreadcrumbNode::Sentinel)) {
    local_80.BreadcrumbRoot = pFVar2;
    for (pFVar4 = pFVar2->Parent;
        (pFVar4 != (FRHIBreadcrumbNode *)0x0 && (pFVar4 != FRHIBreadcrumbNode::Sentinel));
        pFVar4 = pFVar4->Parent) {
      local_80.BreadcrumbRoot = pFVar4;
    }
    local_80.BreadcrumbNode = (FRHIBreadcrumbNode *)0x0;
    if (local_80.BreadcrumbRoot != (FRHIBreadcrumbNode *)0x0) {
      local_80.BreadcrumbNode = pFVar2;
    }
  }
  pFVar11 = FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)local_b8);
  if (pFVar11 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar11->field_0x30 = *(int *)&pFVar11->field_0x30 + 1;
    UNLOCK();
  }
  local_a8.Reference = pFVar11;
  InternalCreateComputePipelineState
            (&local_90,bVar6,EVar7,(bool)uVar16,local_b8,&local_80,
             (bool)((byte)param_1->field_0x29b >> 5 & 1));
  if ((pFVar11 != (FBaseGraphTask *)0x0) && (!param_3)) {
    if ((!bVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DoAsyncCompile",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0xebd,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FComputePipelineState *)(*pcVar3)();
      return pFVar12;
    }
    FRHICommandListBase::AddDispatchPrerequisite((FRHICommandListBase *)param_1,&local_a8);
  }
  bVar5 = IsInParallelRHIThread();
  if ((bVar5) ||
     (piVar15 = GComputePipelineCache.VerifyMutex, GEnablePSOAsyncCacheConsolidation == false)) {
    piVar15 = GComputePipelineCache.VerifyMutex + 1;
  }
  LOCK();
  iVar8 = *piVar15;
  *piVar15 = *piVar15 + 1;
  UNLOCK();
  if (*piVar15 == 0 || SCARRY4(iVar8,1) != *piVar15 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyIncrement::FScopeVerifyIncrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  AcquireSRWLockShared((PSRWLOCK)&GComputePipelineCache.InterruptLock);
  this_00 = (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
             *)TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::GetLocalCache
                         (&GComputePipelineCache);
  uVar13 = ((uint)((ulonglong)local_res10[0] >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_res10[0] >> 4)) * -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar14 = (this_00->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    iVar8 = *(int *)((longlong)FVar14 +
                    (ulonglong)(this_00->HashSize - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(FRHIComputeShader **)(*(longlong *)&this_00->Elements + (longlong)iVar8 * 0x18) ==
            local_res10[0]) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalCache.Contains(InKey) == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x680,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar12 = (FComputePipelineState *)(*pcVar3)();
            return pFVar12;
          }
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->Elements + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  local_50 = local_res10;
  local_48 = &local_b8;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&>_>
            (this_00,&local_60,(bool *)&local_50);
  ReleaseSRWLockShared((PSRWLOCK)&GComputePipelineCache.InterruptLock);
  LOCK();
  iVar8 = *piVar15;
  *piVar15 = *piVar15 + -1;
  UNLOCK();
  if (iVar8 + -1 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyIncrement::~FScopeVerifyIncrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (pFVar11 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar11->field_0x30;
    iVar8 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (*(code *)**(undefined8 **)pFVar11)(pFVar11,1);
    }
  }
  if (local_80.PSOCompilationEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_80.PSOCompilationEventName.Data.AllocatorInstance.Data);
  }
LAB_145ca7bec:
  pFVar12 = local_b8;
  FMemScope::~FMemScope((FMemScope *)&local_60.Value);
  FLLMScope::~FLLMScope(local_b0);
  return pFVar12;
}

// GetAndOrCreateGraphicsPipelineState @ 145ca7c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGraphicsPipelineState * __cdecl
PipelineStateCache::GetAndOrCreateGraphicsPipelineState
          (FRHICommandList *param_1,FGraphicsPipelineStateInitializer *param_2,
          EApplyRendertargetOption param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FRHIBreadcrumbNode *pFVar3;
  code *pcVar4;
  FRHIBreadcrumbNode *pFVar5;
  TUniquePtr<FPrecacheGraphicsPipelineCache,TDefaultDelete<FPrecacheGraphicsPipelineCache>_> this;
  EPSOPrecacheResult EVar6;
  uint uVar7;
  int iVar8;
  FGraphicsPipelineState *pFVar9;
  ulong64 uVar10;
  FGraphicsPipelineState *pFVar11;
  TRefCountPtr<FBaseGraphTask> TVar12;
  FTaskBase *pFVar13;
  undefined8 *puVar14;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar15;
  FQueuedThreadPool *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  FPSOPrecacheAsyncTask *this_01;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  undefined1 uVar24;
  int *piVar25;
  bool bVar26;
  undefined1 auStackY_2b8 [32];
  bool local_278 [8];
  FGraphicsPipelineState *local_270;
  FLLMScope local_264;
  FPipelineStateStats *local_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  FRHIBreadcrumbNode *local_240;
  FRHIBreadcrumbNode *pFStack_238;
  FMemScope local_230;
  FGraphicsPipelineStateInitializer *local_228;
  FGraphicsPipelineState **local_220;
  FGraphicsPipelineStateInitializer local_208;
  FGraphicsPipelineStateInitializer local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FLLMScope::FLLMScope(&local_264,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_230,PSO,true);
  ValidateGraphicsPipelineStateInitializer(param_2);
  pFVar9 = (FGraphicsPipelineState *)0x0;
  EVar6 = Unknown;
  lVar21 = 0x10;
  uVar7 = 0;
  if (param_3 == CheckApply) {
    local_208.BoundShaderState.VertexDeclarationRHI =
         (param_2->BoundShaderState).VertexDeclarationRHI;
    local_208.BoundShaderState.VertexShaderRHI = (param_2->BoundShaderState).VertexShaderRHI;
    local_208.BoundShaderState.PixelShaderRHI = (param_2->BoundShaderState).PixelShaderRHI;
    local_208.BoundShaderState.MeshShaderRHI = (param_2->BoundShaderState).MeshShaderRHI;
    local_208.BoundShaderState.AmplificationShaderRHI =
         (param_2->BoundShaderState).AmplificationShaderRHI;
    local_208.BoundShaderState.GeometryShaderRHI = (param_2->BoundShaderState).GeometryShaderRHI;
    local_208.BoundShaderState.WorkGraphMeshShaderRHI =
         (param_2->BoundShaderState).WorkGraphMeshShaderRHI;
    local_208.BlendState = param_2->BlendState;
    local_208.RasterizerState = param_2->RasterizerState;
    local_208.DepthStencilState = param_2->DepthStencilState;
    local_208.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
         (param_2->ImmutableSamplerState).ImmutableSamplers.Elements[0];
    local_208.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
         (param_2->ImmutableSamplerState).ImmutableSamplers.Elements[1];
    local_208.PrimitiveType = param_2->PrimitiveType;
    local_208.RenderTargetsEnabled = param_2->RenderTargetsEnabled;
    local_208.RenderTargetFormats.Elements = *&(param_2->RenderTargetFormats).Elements;
    local_208.RenderTargetFlags.Elements[0] = (param_2->RenderTargetFlags).Elements[0];
    local_208.RenderTargetFlags.Elements[1] = (param_2->RenderTargetFlags).Elements[1];
    local_208.RenderTargetFlags.Elements[2] = (param_2->RenderTargetFlags).Elements[2];
    local_208.RenderTargetFlags.Elements[3] = (param_2->RenderTargetFlags).Elements[3];
    local_208.RenderTargetFlags.Elements[4] = (param_2->RenderTargetFlags).Elements[4];
    local_208.RenderTargetFlags.Elements[5] = (param_2->RenderTargetFlags).Elements[5];
    local_208.RenderTargetFlags.Elements[6] = (param_2->RenderTargetFlags).Elements[6];
    local_208.RenderTargetFlags.Elements[7] = (param_2->RenderTargetFlags).Elements[7];
    local_208.DepthStencilTargetFormat = param_2->DepthStencilTargetFormat;
    local_208._177_7_ = *(undefined7 *)&param_2->field_0xb1;
    local_208.DepthStencilTargetFlag = param_2->DepthStencilTargetFlag;
    local_208.DepthTargetLoadAction = param_2->DepthTargetLoadAction;
    local_208.DepthTargetStoreAction = param_2->DepthTargetStoreAction;
    local_208.StencilTargetLoadAction = param_2->StencilTargetLoadAction;
    local_208.StencilTargetStoreAction = param_2->StencilTargetStoreAction;
    local_208.DepthStencilAccess.Value = (param_2->DepthStencilAccess).Value;
    local_208.NumSamples = param_2->NumSamples;
    local_208.SubpassHint = param_2->SubpassHint;
    local_208.SubpassIndex = param_2->SubpassIndex;
    local_208.ConservativeRasterization = param_2->ConservativeRasterization;
    local_208.bDepthBounds = param_2->bDepthBounds;
    local_208.MultiViewCount = param_2->MultiViewCount;
    local_208.bHasFragmentDensityAttachment = param_2->bHasFragmentDensityAttachment;
    local_208.bAllowVariableRateShading = param_2->bAllowVariableRateShading;
    local_208.ShadingRate = param_2->ShadingRate;
    local_208.field25_0xd2 = param_2->field25_0xd2;
    local_208._212_4_ = *(undefined4 *)&param_2->field_0xd4;
    local_208.StatePrecachePSOHash = param_2->StatePrecachePSOHash;
    FRHICommandList::ApplyCachedRenderTargets(param_1,&local_208);
    bVar26 = local_208.RenderTargetsEnabled != param_2->RenderTargetsEnabled;
    uVar23 = (uint)bVar26;
    uVar22 = (uint)bVar26;
    if ((!bVar26) && (pFVar11 = pFVar9, 0 < (int)local_208.RenderTargetsEnabled)) {
      do {
        uVar22 = uVar7;
        if (*(uchar *)((longlong)&pFVar11->_padding_ +
                      (longlong)local_208.RenderTargetFormats.Elements) !=
            *(uchar *)((longlong)(param_2->ImmutableSamplerState).ImmutableSamplers.Elements +
                      (longlong)&(pFVar11 + 1)[-1]._padding_)) {
          uVar22 = 2;
        }
        if ((uVar23 | uVar22) != 0) {
          uVar22 = uVar23 | uVar22 | (int)pFVar11 << 0x18;
          goto LAB_145ca7d79;
        }
        uVar22 = (int)pFVar11 + 1;
        uVar23 = 0;
        pFVar11 = (FGraphicsPipelineState *)(ulonglong)uVar22;
      } while ((int)uVar22 < (int)local_208.RenderTargetsEnabled);
      uVar22 = 0;
    }
LAB_145ca7d79:
    uVar23 = uVar7;
    if (local_208.StencilTargetStoreAction != param_2->StencilTargetStoreAction) {
      uVar23 = 0x100;
    }
    if (local_208.StencilTargetLoadAction != param_2->StencilTargetLoadAction) {
      uVar7 = 0x80;
    }
    iVar17 = 0;
    iVar8 = iVar17;
    if (local_208.DepthTargetStoreAction != param_2->DepthTargetStoreAction) {
      iVar8 = 0x40;
    }
    iVar18 = iVar17;
    if (local_208.DepthTargetLoadAction != param_2->DepthTargetLoadAction) {
      iVar18 = 0x20;
    }
    iVar19 = iVar17;
    if (local_208.DepthStencilTargetFlag != param_2->DepthStencilTargetFlag) {
      iVar19 = 0x10;
    }
    if (local_208.DepthStencilTargetFormat != param_2->DepthStencilTargetFormat) {
      iVar17 = 8;
    }
    if ((uVar22 != 0 ||
         (((((uVar23 != 0 || uVar7 != 0) || iVar8 != 0) || iVar18 != 0) || iVar19 != 0) ||
         iVar17 != 0)) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("!AnyFailed",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                            ,0x1086,
                            L"GetAndOrCreateGraphicsPipelineState RenderTarget check failed with: %i !"
                           ), bVar26)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FGraphicsPipelineState *)(*pcVar4)();
      return pFVar9;
    }
  }
  if ((((param_2->field25_0xd2).Flags & 0x800) != 0) &&
     (bVar26 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4687553501859942539>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                          ,0x108b,"!Initializer.bPSOPrecache"), bVar26)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FGraphicsPipelineState *)(*pcVar4)();
    return pFVar9;
  }
  local_270 = (FGraphicsPipelineState *)0x0;
  bVar26 = TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
           Find(&GGraphicsPipelineCache,param_2,&local_270);
  if (bVar26) {
    if ((((param_2->field25_0xd2).Flags & 0x1000) == 0) &&
       (bVar26 = FPipelineStateAsync::IsComplete((FPipelineStateAsync *)local_270),
       pFVar9 = local_270, !bVar26)) {
      bVar26 = IsInParallelRHIThread();
      pFVar11 = local_270;
      if ((bVar26) || (lVar15 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
        lVar15 = 0x20;
      }
      lVar15 = *(longlong *)((longlong)&pFVar9->_padding_ + lVar15);
      if ((lVar15 != 0) && (*(longlong *)(lVar15 + 8) != 0)) {
        bVar26 = IsInParallelRHIThread();
        if ((bVar26) || (GEnablePSOAsyncCacheConsolidation == false)) {
          lVar21 = 0x20;
        }
        lVar21 = *(longlong *)((longlong)&pFVar11->_padding_ + lVar21);
        if (lVar21 == 0) {
          this_01 = (FPSOPrecacheAsyncTask *)0x0;
        }
        else {
          this_01 = *(FPSOPrecacheAsyncTask **)(lVar21 + 8);
        }
        pFVar16 = FPSOPrecacheThreadPool::Get(&GPSOPrecacheThreadPool);
        FPSOPrecacheAsyncTask::Reschedule(this_01,pFVar16,Highest);
      }
      pFVar13 = (FTaskBase *)
                FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)local_270);
      if (pFVar13 != (FTaskBase *)0x0) {
        LOCK();
        pFVar13->RefCount = (atomic<unsigned_int>)((int)pFVar13->RefCount + 1);
        UNLOCK();
        LOCK();
        pFVar13->RefCount = (atomic<unsigned_int>)((int)pFVar13->RefCount + 1);
        UNLOCK();
      }
      if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
         (param_1->field_0x64 == '\0')) {
        puVar14 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar14;
        *(undefined8 **)&param_1->field_0x30 = puVar14 + 1;
        puVar14[1] = 0;
        *puVar14 = &TRHILambdaCommand<FRHICommandListBase,`FRHICommandListBase::AddDispatchPrerequisite'::`2'::<lambda_1>_>
                    ::_vftable_;
        puVar14[3] = L"AddDispatchPrerequisite";
        puVar14[2] = pFVar13;
        if (pFVar13 == (FTaskBase *)0x0) goto LAB_145ca84aa;
      }
      else {
        if ((pFVar13->Subsequents).bIsClosed == (atomic<bool>)0x0) {
          UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport(pFVar13);
        }
        if (pFVar13 == (FTaskBase *)0x0) goto LAB_145ca84aa;
        LOCK();
        paVar1 = &pFVar13->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar13->_padding_)(pFVar13,1);
        }
      }
      LOCK();
      paVar1 = &pFVar13->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar13->_padding_)(pFVar13,1);
      }
    }
    goto LAB_145ca84aa;
  }
  uVar24 = 0;
  local_278[0] = false;
  if ((GPSOPrecaching == 0) || (GRHIGlobals.SupportsPSOPrecaching == false)) {
    bVar26 = IsAsyncCompilationAllowed
                       ((FRHIComputeCommandList *)param_1,
                        (bool)((byte)((param_2->field25_0xd2).Flags >> 0xc) & 1));
LAB_145ca7feb:
    bVar20 = false;
  }
  else {
    local_128.BoundShaderState.VertexDeclarationRHI =
         (param_2->BoundShaderState).VertexDeclarationRHI;
    local_128.BoundShaderState.VertexShaderRHI = (param_2->BoundShaderState).VertexShaderRHI;
    local_128.BoundShaderState.PixelShaderRHI = (param_2->BoundShaderState).PixelShaderRHI;
    local_128.BoundShaderState.MeshShaderRHI = (param_2->BoundShaderState).MeshShaderRHI;
    local_128.BoundShaderState.AmplificationShaderRHI =
         (param_2->BoundShaderState).AmplificationShaderRHI;
    local_128.BoundShaderState.GeometryShaderRHI = (param_2->BoundShaderState).GeometryShaderRHI;
    local_128.BoundShaderState.WorkGraphMeshShaderRHI =
         (param_2->BoundShaderState).WorkGraphMeshShaderRHI;
    local_128.BlendState = param_2->BlendState;
    local_128.RasterizerState = param_2->RasterizerState;
    local_128.DepthStencilState = param_2->DepthStencilState;
    local_128.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
         (param_2->ImmutableSamplerState).ImmutableSamplers.Elements[0];
    local_128.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
         (param_2->ImmutableSamplerState).ImmutableSamplers.Elements[1];
    local_128.PrimitiveType = param_2->PrimitiveType;
    local_128.RenderTargetsEnabled = param_2->RenderTargetsEnabled;
    local_128.RenderTargetFormats.Elements = *&(param_2->RenderTargetFormats).Elements;
    local_128.RenderTargetFlags.Elements[0] = (param_2->RenderTargetFlags).Elements[0];
    local_128.RenderTargetFlags.Elements[1] = (param_2->RenderTargetFlags).Elements[1];
    local_128.RenderTargetFlags.Elements[2] = (param_2->RenderTargetFlags).Elements[2];
    local_128.RenderTargetFlags.Elements[3] = (param_2->RenderTargetFlags).Elements[3];
    local_128.RenderTargetFlags.Elements[4] = (param_2->RenderTargetFlags).Elements[4];
    local_128.RenderTargetFlags.Elements[5] = (param_2->RenderTargetFlags).Elements[5];
    local_128.RenderTargetFlags.Elements[6] = (param_2->RenderTargetFlags).Elements[6];
    local_128.RenderTargetFlags.Elements[7] = (param_2->RenderTargetFlags).Elements[7];
    local_128.DepthStencilTargetFormat = param_2->DepthStencilTargetFormat;
    local_128._177_7_ = *(undefined7 *)&param_2->field_0xb1;
    local_128.DepthStencilTargetFlag = param_2->DepthStencilTargetFlag;
    local_128.DepthTargetLoadAction = param_2->DepthTargetLoadAction;
    local_128.DepthTargetStoreAction = param_2->DepthTargetStoreAction;
    local_128.StencilTargetLoadAction = param_2->StencilTargetLoadAction;
    local_128.StencilTargetStoreAction = param_2->StencilTargetStoreAction;
    local_128.DepthStencilAccess.Value = (param_2->DepthStencilAccess).Value;
    local_128.NumSamples = param_2->NumSamples;
    local_128.SubpassHint = param_2->SubpassHint;
    local_128.SubpassIndex = param_2->SubpassIndex;
    local_128.ConservativeRasterization = param_2->ConservativeRasterization;
    local_128.bDepthBounds = param_2->bDepthBounds;
    local_128.MultiViewCount = param_2->MultiViewCount;
    local_128.bHasFragmentDensityAttachment = param_2->bHasFragmentDensityAttachment;
    local_128.bAllowVariableRateShading = param_2->bAllowVariableRateShading;
    local_128.ShadingRate = param_2->ShadingRate;
    local_128.field25_0xd2 = param_2->field25_0xd2;
    local_128._212_4_ = *(undefined4 *)&param_2->field_0xd4;
    local_128.StatePrecachePSOHash = param_2->StatePrecachePSOHash;
    if (local_128.StatePrecachePSOHash == 0) {
      local_128.StatePrecachePSOHash =
           (**(code **)(GDynamicRHI->_padding_ + 0x2d0))(GDynamicRHI,&local_128);
    }
    bVar26 = ShouldKeepPrecachedPSOsInMemory();
    this = GPrecacheGraphicsPipelineCache;
    if ((bVar26) && (GPSOPrecacheKeepInMemoryUntilUsed == 2)) {
      uVar10 = (**(code **)(GDynamicRHI->_padding_ + 0x2d8))(GDynamicRHI,&local_128);
      EVar6 = TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
              ::GetPrecachingStateInternal
                        ((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                          *)this.Ptr,uVar10,true,local_278);
      uVar24 = local_278[0];
    }
    else {
      EVar6 = TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
              ::GetPrecachingState
                        ((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                          *)GPrecacheGraphicsPipelineCache.Ptr,&local_128);
    }
    bVar26 = IsAsyncCompilationAllowed
                       ((FRHIComputeCommandList *)param_1,
                        (bool)((byte)((param_2->field25_0xd2).Flags >> 0xc) & 1));
    if ((EVar6 != Active) && (EVar6 != Complete)) goto LAB_145ca7feb;
    bVar20 = true;
  }
  local_260 = (FPipelineStateStats *)0x0;
  uVar7 = ::GetTypeHash(param_2);
  FPipelineFileCacheManager::CacheGraphicsPSO(uVar7,param_2,bVar20,&local_260);
  pFVar11 = ::operator_new(0x50);
  if (pFVar11 != (FGraphicsPipelineState *)0x0) {
    pFVar11->_padding_ = 0;
    ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)&pFVar11->_padding_)->Object =
         (FCompletionState *)0x0;
    ((FSharedReferencer<1> *)&pFVar11->_padding_)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    *(bool *)&pFVar11->_padding_ = false;
    *(bool *)((longlong)&pFVar11->_padding_ + 1) = false;
    ((FPSOCSVStatTracker *)&pFVar11->_padding_)->Pri = NotSet;
    pFVar11->_padding_ = (longlong)&___7FGraphicsPipelineState__6B_;
    (pFVar11->RHIPipeline).Reference = (FRHIGraphicsPipelineState *)0x0;
    (pFVar11->InUseCount).Counter = 0;
    pFVar11->SortKey = 0;
    pFVar9 = pFVar11;
  }
  pFVar9->_padding_ = (longlong)local_260;
  local_270 = pFVar9;
  if (bVar26 != false) {
    TVar12 = FBaseGraphTask::CreateGraphEvent();
    FPipelineStateAsync::SetCompletionEvent((FPipelineStateAsync *)local_270,TVar12);
  }
  if (((param_2->field25_0xd2).Flags & 0x1000) == 0) {
    LOCK();
    GraphicsPipelineCacheMisses = (TAtomic<unsigned_int>)((int)GraphicsPipelineCacheMisses + 1);
    UNLOCK();
  }
  if (EVar6 == Active) {
    EVar6 = TooLate;
  }
  local_258._8_8_ = (FGraphicsPipelineState **)0x0;
  local_248 = 0;
  local_240 = (FRHIBreadcrumbNode *)0x0;
  pFStack_238 = (FRHIBreadcrumbNode *)0x0;
  if (((bVar26 != false) &&
      (pFVar3 = *(FRHIBreadcrumbNode **)&param_1->field_0x2f8, pFVar3 != (FRHIBreadcrumbNode *)0x0))
     && (pFVar3 != FRHIBreadcrumbNode::Sentinel)) {
    local_240 = pFVar3;
    for (pFVar5 = pFVar3->Parent;
        (pFVar5 != (FRHIBreadcrumbNode *)0x0 && (pFVar5 != FRHIBreadcrumbNode::Sentinel));
        pFVar5 = pFVar5->Parent) {
      local_240 = pFVar5;
    }
    pFStack_238 = (FRHIBreadcrumbNode *)0x0;
    if (local_240 != (FRHIBreadcrumbNode *)0x0) {
      pFStack_238 = pFVar3;
    }
  }
  pFVar13 = (FTaskBase *)FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)local_270);
  if (pFVar13 != (FTaskBase *)0x0) {
    LOCK();
    pFVar13->RefCount = (atomic<unsigned_int>)((int)pFVar13->RefCount + 1);
    UNLOCK();
  }
  InternalCreateGraphicsPipelineState
            (param_2,EVar6,(bool)uVar24,bVar26,local_270,(FPSOCompilationDebugData *)(local_258 + 8)
             ,(bool)((byte)param_1->field_0x29b >> 5 & 1));
  if ((pFVar13 != (FTaskBase *)0x0) && (((param_2->field25_0xd2).Flags & 0x1000) == 0)) {
    if ((bVar26 == false) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("DoAsyncCompile",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                            ,0x10d2,L""), bVar26)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FGraphicsPipelineState *)(*pcVar4)();
      return pFVar9;
    }
    LOCK();
    pFVar13->RefCount = (atomic<unsigned_int>)((int)pFVar13->RefCount + 1);
    UNLOCK();
    if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      puVar14 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar14;
      *(undefined8 **)&param_1->field_0x30 = puVar14 + 1;
      puVar14[1] = 0;
      *puVar14 = &TRHILambdaCommand<FRHICommandListBase,`FRHICommandListBase::AddDispatchPrerequisite'::`2'::<lambda_1>_>
                  ::_vftable_;
      puVar14[3] = L"AddDispatchPrerequisite";
      puVar14[2] = pFVar13;
    }
    else {
      if ((pFVar13->Subsequents).bIsClosed == (atomic<bool>)0x0) {
        UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport(pFVar13);
      }
      LOCK();
      paVar1 = &pFVar13->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar13->_padding_)(pFVar13,1);
      }
    }
  }
  bVar26 = IsInParallelRHIThread();
  if ((bVar26) ||
     (piVar25 = GGraphicsPipelineCache.VerifyMutex, GEnablePSOAsyncCacheConsolidation == false)) {
    piVar25 = GGraphicsPipelineCache.VerifyMutex + 1;
  }
  LOCK();
  iVar8 = *piVar25;
  *piVar25 = *piVar25 + 1;
  UNLOCK();
  if (*piVar25 == 0 || SCARRY4(iVar8,1) != *piVar25 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyIncrement::FScopeVerifyIncrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  AcquireSRWLockShared((PSRWLOCK)&GGraphicsPipelineCache.InterruptLock);
  this_00 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
             *)TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
               ::GetLocalCache(&GGraphicsPipelineCache);
  uVar7 = ::GetTypeHash(param_2);
  iVar8 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGraphicsPipelineStateInitializer>(this_00,uVar7,param_2);
  if ((iVar8 != -1) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("LocalCache.Contains(InKey) == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                          ,0x680,L""), bVar26)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FGraphicsPipelineState *)(*pcVar4)();
    return pFVar9;
  }
  local_220 = &local_270;
  local_228 = param_2;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>_>
            (this_00,(TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>
                      *)local_258,(bool *)&local_228);
  ReleaseSRWLockShared((PSRWLOCK)&GGraphicsPipelineCache.InterruptLock);
  LOCK();
  iVar8 = *piVar25;
  *piVar25 = *piVar25 + -1;
  UNLOCK();
  if (iVar8 + -1 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyIncrement::~FScopeVerifyIncrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (pFVar13 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar13->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar13->_padding_)(pFVar13,1);
    }
  }
  if ((FGraphicsPipelineState **)local_258._8_8_ != (FGraphicsPipelineState **)0x0) {
    FMemory::Free((void *)local_258._8_8_);
  }
LAB_145ca84aa:
  pFVar9 = local_270;
  FMemScope::~FMemScope(&local_230);
  FLLMScope::~FLLMScope(&local_264);
  return pFVar9;
}

// GetAndOrCreateRayTracingPipelineState @ 145ca8500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FRayTracingPipelineState * __cdecl
PipelineStateCache::GetAndOrCreateRayTracingPipelineState
          (FRHICommandList *param_1,FRayTracingPipelineStateInitializer *param_2,
          ERayTracingPipelineCacheFlags param_3)

{
  longlong *plVar1;
  atomic<unsigned_int> *paVar2;
  TRefCountPtr<FRHIRayTracingPipelineState> *pTVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FBaseGraphTask *pFVar6;
  FRHIRayTracingPipelineState *pFVar7;
  FTaskBase *pFVar8;
  code *pcVar9;
  ulong64 uVar10;
  TConsoleVariableData<int> *pTVar11;
  TRefCountPtr<FRHIRayTracingPipelineState> this;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FRayTracingPipelineState *pFVar15;
  FRayTracingPipelineState **ppFVar16;
  longlong lVar17;
  FTaskBase *this_00;
  FCompileRayTracingPipelineStateTask *pFVar18;
  undefined8 *puVar19;
  Type TVar20;
  TMap<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
  *this_01;
  bool bVar21;
  TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
  *this_02;
  EExtendedTaskPriority local_res18 [8];
  ETaskPriority local_res20 [8];
  FLLMScope local_f8 [2];
  TRefCountPtr<FRHIRayTracingPipelineState> local_f0;
  FRayTracingPipelineState *local_e8;
  FRayTracingPipelineState *local_e0;
  TPairInitializer<FRayTracingPipelineStateSignature_const_&,FRayTracingPipelineState_*_const_&>
  local_d8;
  FRayTracingPipelineStateInitializer *local_c8;
  FRayTracingPipelineState **local_c0;
  FRayTracingPipelineStateInitializer local_b8;
  TRefCountPtr<FBaseGraphTask> local_38 [2];
  
  FLLMScope::FLLMScope(local_f8,PSO,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&local_d8.Value,PSO,true);
  bVar12 = IsInRenderingThread();
  if (!bVar12) {
    bVar12 = IsInParallelRenderingThread();
    if (!bVar12) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread() || IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                          ,0xfb4,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FRayTracingPipelineState *)(*pcVar9)();
        return pFVar15;
      }
    }
  }
  bVar12 = ValidateRayTracingPipelinePayloadMask(param_2);
  if (!bVar12) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ValidateRayTracingPipelinePayloadMask(InInitializer)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                        ,0xfb5,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pFVar15 = (FRayTracingPipelineState *)(*pcVar9)();
      return pFVar15;
    }
  }
  bVar12 = IsAsyncCompilationAllowed((FRHIComputeCommandList *)param_1,false);
  bVar21 = (bool)(param_3 & NonBlocking);
  EnterCriticalSection((LPCRITICAL_SECTION)&GRayTracingPipelineCache);
  this_02 = (TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
             *)&GRayTracingPipelineCache.PartialPipelines;
  this_01 = &GRayTracingPipelineCache.PartialPipelines;
  if (param_2->bPartial == false) {
    this_01 = &GRayTracingPipelineCache.FullPipelines;
  }
  ppFVar16 = TMapBase<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
             ::Find((TMapBase<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
                     *)this_01,(FRayTracingPipelineStateSignature *)param_2);
  if (ppFVar16 == (FRayTracingPipelineState **)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRayTracingPipelineCache);
    FPipelineFileCacheManager::CacheRayTracingPSO(param_2,param_3);
    local_b8._padding_ = param_2->_padding_;
    local_b8._padding_ = param_2->_padding_;
    local_b8.bPartial = param_2->bPartial;
    local_b8.BasePipeline.Reference = (param_2->BasePipeline).Reference;
    local_b8._padding_ = param_2->_padding_;
    local_b8.bBackgroundCompilation = param_2->bBackgroundCompilation;
    local_b8._padding_ = param_2->_padding_;
    local_b8._padding_ = param_2->_padding_;
    if (local_b8.BasePipeline.Reference != (FRHIRayTracingPipelineState *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_b8.BasePipeline.Reference);
    }
    local_b8.RayGenTable.DataPtr = (param_2->RayGenTable).DataPtr;
    local_b8.RayGenTable.ArrayNum = (param_2->RayGenTable).ArrayNum;
    local_b8.RayGenTable._12_4_ = *(undefined4 *)&(param_2->RayGenTable).field_0xc;
    local_b8.ShaderBindingLayout = param_2->ShaderBindingLayout;
    local_b8.MissTable.DataPtr = (param_2->MissTable).DataPtr;
    local_b8.MissTable.ArrayNum = (param_2->MissTable).ArrayNum;
    local_b8.MissTable._12_4_ = *(undefined4 *)&(param_2->MissTable).field_0xc;
    local_b8.HitGroupTable.DataPtr = (param_2->HitGroupTable).DataPtr;
    local_b8.HitGroupTable.ArrayNum = (param_2->HitGroupTable).ArrayNum;
    local_b8.HitGroupTable._12_4_ = *(undefined4 *)&(param_2->HitGroupTable).field_0xc;
    local_b8.CallableTable.DataPtr = (param_2->CallableTable).DataPtr;
    local_b8.CallableTable.ArrayNum = (param_2->CallableTable).ArrayNum;
    local_b8.CallableTable._12_4_ = *(undefined4 *)&(param_2->CallableTable).field_0xc;
    if ((GRHIGlobals.RayTracing.SupportsPSOAdditions != false) &&
       ((param_2->BasePipeline).Reference == (FRHIRayTracingPipelineState *)0x0)) {
      local_e0 = (FRayTracingPipelineState *)0x0;
      bVar13 = FRayTracingPipelineCache::FindBase(&GRayTracingPipelineCache,&local_b8,&local_e0);
      this.Reference = local_b8.BasePipeline.Reference;
      if (bVar13) {
        pFVar7 = (local_e0->RHIPipeline).Reference;
        if (local_b8.BasePipeline.Reference != pFVar7) {
          local_b8.BasePipeline.Reference = pFVar7;
          if (pFVar7 != (FRHIRayTracingPipelineState *)0x0) {
            FRHIResource::AddRef((FRHIResource *)pFVar7);
          }
          if (this.Reference != (FRHIRayTracingPipelineState *)0x0) {
            FRHIResource::Release((FRHIResource *)this.Reference);
          }
        }
      }
    }
    pTVar11 = CVarRTPSOCacheSize.Ref;
    bVar13 = IsInParallelGameThread();
    if (bVar13) {
LAB_145ca878a:
      lVar17 = 0;
    }
    else {
      bVar13 = IsInGameThread();
      if (bVar13) goto LAB_145ca878a;
      lVar17 = 4;
    }
    iVar5 = *(int *)((longlong)pTVar11->ShadowedValue + lVar17);
    if ((0 < iVar5) && (GRayTracingPipelineCache.LastTrimFrame != GFrameCounter)) {
      FRayTracingPipelineCache::Trim(&GRayTracingPipelineCache,iVar5);
    }
    pFVar15 = ::operator_new(0x138);
    if (pFVar15 == (FRayTracingPipelineState *)0x0) {
      pFVar15 = (FRayTracingPipelineState *)0x0;
    }
    else {
      pFVar15 = FRayTracingPipelineState::FRayTracingPipelineState(pFVar15,&local_b8);
    }
    local_e8 = pFVar15;
    uVar14 = FRayTracingPipelineStateInitializer::GetMaxLocalBindingDataSize(&local_b8);
    pFVar15->MaxLocalBindingSize = uVar14;
    EnterCriticalSection((LPCRITICAL_SECTION)&GRayTracingPipelineCache);
    if (local_b8.bPartial == false) {
      this_02 = (TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
                 *)&GRayTracingPipelineCache.FullPipelines;
    }
    local_c8 = &local_b8;
    local_c0 = &local_e8;
    TSet<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FRayTracingPipelineStateSignature_const_&,FRayTracingPipelineState_*_const_&>_>
              (this_02,&local_d8,(bool *)&local_c8);
    pFVar15 = local_e8;
    uVar10 = GFrameCounter;
    if (local_e8->LastFrameHit != GFrameCounter) {
      local_e8->HitsAcrossFrames = local_e8->HitsAcrossFrames + 1;
      local_e8->LastFrameHit = uVar10;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRayTracingPipelineCache);
    if (bVar12) {
      this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x278,8);
      if (this_00 == (FTaskBase *)0x0) {
        this_00 = (FTaskBase *)0x0;
      }
      else {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this_00,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this_00->_padding_ = (longlong)&___7__TGraphTask_VFCompileRayTracingPipelineStateTask____6B_
        ;
      }
      pFVar18 = FCompileRayTracingPipelineStateTask::FCompileRayTracingPipelineStateTask
                          ((FCompileRayTracingPipelineStateTask *)(this_00 + 1),
                           (FPipelineStateSync *)pFVar15,&local_b8,bVar21);
      TVar20 = AnyNormalThreadNormalTask;
      if (pFVar18->bBackgroundTask != false) {
        TVar20 = AnyBackgroundThreadNormalTask;
      }
      UE::Tasks::Private::TranslatePriority(TVar20,local_res20,local_res18);
      UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res20[0],local_res18[0],None);
      if (this_00 != (FTaskBase *)0x0) {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x278);
      plVar1 = &pFVar15->_padding_;
      if ((TRefCountPtr<FBaseGraphTask> *)plVar1 == local_38) {
        if (this_00 != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = &this_00->RefCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<unsigned_int>)0x1) {
            puVar19 = (undefined8 *)this_00->_padding_;
            goto LAB_145ca893b;
          }
        }
      }
      else {
        pFVar8 = (FTaskBase *)*plVar1;
        *plVar1 = (longlong)this_00;
        if (pFVar8 != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = &pFVar8->RefCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<unsigned_int>)0x1) {
            puVar19 = (undefined8 *)pFVar8->_padding_;
            this_00 = pFVar8;
LAB_145ca893b:
            (*(code *)*puVar19)(this_00,1);
          }
        }
      }
      if (bVar21 == false) {
        if (local_b8.bPartial == false) {
          FRHICommandListBase::AddDispatchPrerequisite
                    ((FRHICommandListBase *)param_1,(TRefCountPtr<FBaseGraphTask> *)plVar1);
        }
      }
      else {
        pFVar15 = (FRayTracingPipelineState *)0x0;
      }
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x4a8))(GDynamicRHI,&local_f0,&local_b8);
      pTVar3 = &pFVar15->RHIPipeline;
      if (pTVar3 != &local_f0) {
        pFVar7 = pTVar3->Reference;
        pTVar3->Reference = local_f0.Reference;
        local_f0.Reference = (FRHIRayTracingPipelineState *)0x0;
        if (pFVar7 == (FRHIRayTracingPipelineState *)0x0) goto LAB_145ca89b2;
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
      if (local_f0.Reference != (FRHIRayTracingPipelineState *)0x0) {
        FRHIResource::Release((FRHIResource *)local_f0.Reference);
      }
    }
LAB_145ca89b2:
    if (local_b8.BasePipeline.Reference != (FRHIRayTracingPipelineState *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b8.BasePipeline.Reference);
    }
  }
  else {
    pFVar15 = *ppFVar16;
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRayTracingPipelineCache);
    pFVar6 = ((TRefCountPtr<FBaseGraphTask> *)&pFVar15->_padding_)->Reference;
    if ((pFVar6 == (FBaseGraphTask *)0x0) || (pFVar6->field_0xd0 != '\0')) {
      if ((pFVar15->RHIPipeline).Reference == (FRHIRayTracingPipelineState *)0x0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result->RHIPipeline.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                            ,0xfd6,
                            L"If pipeline is in cache and it doesn\'t have a completion event, then RHI pipeline is expected to be ready"
                           );
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          pFVar15 = (FRayTracingPipelineState *)(*pcVar9)();
          return pFVar15;
        }
      }
    }
    else if (bVar12) {
      if (bVar21 != false) {
        pFVar15 = (FRayTracingPipelineState *)0x0;
        goto LAB_145ca89da;
      }
      FRHICommandListBase::AddDispatchPrerequisite
                ((FRHICommandListBase *)param_1,(TRefCountPtr<FBaseGraphTask> *)&pFVar15->_padding_)
      ;
    }
    else {
      FPipelineStateSync::WaitCompletion((FPipelineStateSync *)pFVar15);
    }
  }
  uVar10 = GFrameCounter;
  if ((pFVar15 != (FRayTracingPipelineState *)0x0) && (pFVar15->LastFrameHit != GFrameCounter)) {
    pFVar15->HitsAcrossFrames = pFVar15->HitsAcrossFrames + 1;
    pFVar15->LastFrameHit = uVar10;
  }
LAB_145ca89da:
  FMemScope::~FMemScope((FMemScope *)&local_d8.Value);
  FLLMScope::~FLLMScope(local_f8);
  return pFVar15;
}

// GetAndOrCreateWorkGraphPipelineState @ 145ca8a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FWorkGraphPipelineState * __cdecl
PipelineStateCache::GetAndOrCreateWorkGraphPipelineState
          (FRHIComputeCommandList *param_1,FWorkGraphPipelineStateInitializer *param_2)

{
  FRHIWorkGraphShader *this;
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FWorkGraphPipelineState *pFVar4;
  FWorkGraphPipelineState *pFVar5;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *this_01;
  TRefCountPtr<FRHIWorkGraphPipelineState> *pTVar6;
  int *piVar7;
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  ELLMTagSet local_res20 [8];
  FWorkGraphPipelineState *local_48;
  TRefCountPtr<FRHIWorkGraphPipelineState> local_40;
  FMemScope local_38;
  FMemScope local_30;
  FWorkGraphPipelineStateInitializer *local_28;
  FWorkGraphPipelineState **local_20;
  
  FLLMScope::FLLMScope(local_res18,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_30,PSO,true);
  if (((param_2->ShaderTable).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Initializer.GetShaderTable().Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0xed5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FWorkGraphPipelineState *)(*pcVar1)();
    return pFVar4;
  }
  pFVar4 = (FWorkGraphPipelineState *)0x0;
  local_48 = (FWorkGraphPipelineState *)0x0;
  bVar2 = TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
          Find(&GWorkGraphPipelineCache,param_2,&local_48);
  if (bVar2) goto LAB_145ca8d1f;
  pFVar5 = ::operator_new(0x50);
  if (pFVar5 != (FWorkGraphPipelineState *)0x0) {
    if (((param_2->ShaderTable).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWorkGraphPipelineState *)(*pcVar1)();
      return pFVar4;
    }
    this = *(param_2->ShaderTable).DataPtr;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    *(undefined2 *)&pFVar5->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar5->_padding_ + 2) = 0;
    pFVar5->_padding_ = (longlong)&___7FWorkGraphPipelineState__6B_;
    (pFVar5->WorkGraphShader).Reference = this;
    if (this != (FRHIWorkGraphShader *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this);
    }
    (pFVar5->RHIPipeline).Reference = (FRHIWorkGraphPipelineState *)0x0;
    (pFVar5->InUseCount).Counter = 0;
    FRHIResource::AddRef((FRHIResource *)(pFVar5->WorkGraphShader).Reference);
    pFVar4 = pFVar5;
  }
  local_48 = pFVar4;
  FLLMScope::FLLMScope(local_res10,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_38,Shaders,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x120))(GDynamicRHI,&local_40,param_2);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res10);
  pTVar6 = &local_48->RHIPipeline;
  if (pTVar6 == &local_40) {
LAB_145ca8bdd:
    if ((FRHIResource *)local_40.Reference != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_40.Reference);
    }
  }
  else {
    this_00 = (FRHIResource *)pTVar6->Reference;
    pTVar6->Reference = local_40.Reference;
    local_40.Reference = (FRHIWorkGraphPipelineState *)0x0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
      goto LAB_145ca8bdd;
    }
  }
  bVar2 = IsInParallelRHIThread();
  if ((bVar2) ||
     (piVar7 = GWorkGraphPipelineCache.VerifyMutex, GEnablePSOAsyncCacheConsolidation == false)) {
    piVar7 = GWorkGraphPipelineCache.VerifyMutex + 1;
  }
  LOCK();
  iVar3 = *piVar7;
  *piVar7 = *piVar7 + 1;
  UNLOCK();
  if (*piVar7 == 0 || SCARRY4(iVar3,1) != *piVar7 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyIncrement::FScopeVerifyIncrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  AcquireSRWLockShared((PSRWLOCK)&GWorkGraphPipelineCache.InterruptLock);
  this_01 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
             *)TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
               ::GetLocalCache(&GWorkGraphPipelineCache);
  iVar3 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FWorkGraphPipelineStateInitializer>
                    (this_01,(int)param_2->_padding_ +
                             (int)((ulonglong)param_2->_padding_ >> 0x20) * 0x17 ^
                             (int)((ulonglong)param_2->_padding_ >> 0x20) * 0x17 +
                             (int)param_2->_padding_ ^
                             (int)((ulonglong)param_2->_padding_ >> 0x20) * 0x17 +
                             (int)param_2->_padding_ ^
                             (int)((ulonglong)param_2->_padding_ >> 0x20) * 0x17 +
                             (int)param_2->_padding_,param_2);
  if ((iVar3 != -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalCache.Contains(InKey) == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x680,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FWorkGraphPipelineState *)(*pcVar1)();
    return pFVar4;
  }
  local_20 = &local_48;
  local_28 = param_2;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>_>
            (this_01,(TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>
                      *)&local_res18[2].TagSet,(bool *)&local_28);
  ReleaseSRWLockShared((PSRWLOCK)&GWorkGraphPipelineCache.InterruptLock);
  LOCK();
  iVar3 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar3 + -1 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyIncrement::~FScopeVerifyIncrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
LAB_145ca8d1f:
  pFVar4 = local_48;
  FMemScope::~FMemScope(&local_30);
  FLLMScope::~FLLMScope(local_res18);
  return pFVar4;
}

// GetCacheIndexForCurrentThread @ 145ca8e10

int __cdecl PipelineStateCache::GetCacheIndexForCurrentThread(void)

{
  bool bVar1;
  
  bVar1 = IsInParallelRHIThread();
  if ((!bVar1) && (GEnablePSOAsyncCacheConsolidation != false)) {
    return 0;
  }
  return 1;
}

// GetComputePipelineState @ 145ca8ee0

FComputePipelineState * __cdecl
GetComputePipelineState(FRHIComputeCommandList *param_1,FRHIComputeShader *param_2,bool param_3)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FComputePipelineState *pFVar5;
  
  pFVar5 = PipelineStateCache::GetAndOrCreateComputePipelineState(param_1,param_2,false);
  if ((pFVar5 != (FComputePipelineState *)0x0) && (param_3)) {
    LOCK();
    pFVar1 = &pFVar5->InUseCount;
    iVar2 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + 1;
    UNLOCK();
    if ((iVar2 + 1 < 1) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Result >= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x47a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FComputePipelineState *)(*pcVar3)();
      return pFVar5;
    }
  }
  return pFVar5;
}

// GetGraphicsPipelineState @ 145ca95e0

/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FGraphicsPipelineState * __cdecl
GetGraphicsPipelineState
          (FRHICommandList *param_1,FGraphicsPipelineStateInitializer *param_2,
          EApplyRendertargetOption param_3,bool param_4)

{
  FGraphicsPipelineState *this;
  
  this = PipelineStateCache::GetAndOrCreateGraphicsPipelineState(param_1,param_2,param_3);
  if (((this != (FGraphicsPipelineState *)0x0) && (param_4)) &&
     (((param_2->field25_0xd2).Flags & 0x1000) == 0)) {
    FGraphicsPipelineState::Verify_IncUse(this);
  }
  return this;
}

// GetGraphicsPipelineState @ 145ca9640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

FGraphicsPipelineState * __cdecl
GetGraphicsPipelineState
          (FRHICommandList *param_1,FGraphicsPipelineStateInitializer *param_2,bool param_3)

{
  FGraphicsPipelineState *this;
  
  this = PipelineStateCache::GetAndOrCreateGraphicsPipelineState(param_1,param_2,CheckApply);
  if (((this != (FGraphicsPipelineState *)0x0) && (param_3)) &&
     (((param_2->field25_0xd2).Flags & 0x1000) == 0)) {
    FGraphicsPipelineState::Verify_IncUse(this);
  }
  return this;
}

// GetNumActivePipelinePrecompileTasks @ 145caa450

int __cdecl PipelineStateCache::GetNumActivePipelinePrecompileTasks(void)

{
  return (int)GPipelinePrecompileTasksInFlight;
}

// GetOrCreateVertexDeclaration @ 145caaff0

FRHIVertexDeclaration * __cdecl
PipelineStateCache::GetOrCreateVertexDeclaration
          (TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  FRHIResource *pFVar4;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FRHIVertexDeclaration_*_&&> local_res10;
  FRHIResource *local_res20;
  uint *local_18;
  FRHIResource **local_10;
  
  local_res8[0] = FCrc::MemCrc_DEPRECATED(param_1,param_1->ArrayNum << 3,0);
  EnterCriticalSection((LPCRITICAL_SECTION)&GVertexDeclarationLock);
  if (GVertexDeclarationCache._8_4_ != GVertexDeclarationCache._52_4_) {
    lVar3 = 0x154be93d8;
    if (GVertexDeclarationCache._64_8_ != 0) {
      lVar3 = GVertexDeclarationCache._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(GVertexDeclarationCache._72_4_ - 1 & local_res8[0]) * 4);
    while (iVar1 != -1) {
      lVar3 = GVertexDeclarationCache._0_8_ + (longlong)iVar1 * 0x18;
      if (*(uint *)(GVertexDeclarationCache._0_8_ + (longlong)iVar1 * 0x18) == local_res8[0]) {
        puVar2 = (undefined8 *)(lVar3 + 8);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 != (undefined8 *)0x0) {
          pFVar4 = (FRHIResource *)*puVar2;
          goto LAB_145cab0e4;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x10);
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x68))(GDynamicRHI,&local_res10.Value,param_1);
  FRHIResource::AddRef((FRHIResource *)local_res10.Value);
  local_res20 = (FRHIResource *)local_res10.Value;
  local_18 = local_res8;
  local_10 = &local_res20;
  TSet<TTuple<unsigned_int,FRHIVertexDeclaration_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRHIVertexDeclaration_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FRHIVertexDeclaration_*_&&>_>
            ((TSet<TTuple<unsigned_int,FRHIVertexDeclaration_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRHIVertexDeclaration_*,0>,FDefaultSetAllocator>
              *)&GVertexDeclarationCache,&local_res10,(bool *)&local_18);
  pFVar4 = (FRHIResource *)local_res10.Value;
  if ((FRHIResource *)local_res10.Value != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_res10.Value);
  }
LAB_145cab0e4:
  LeaveCriticalSection((LPCRITICAL_SECTION)&GVertexDeclarationLock);
  return (FRHIVertexDeclaration *)pFVar4;
}

// GetPSOCompileTypeFromQueuePri @ 145cab120

EPSOPrecacheCompileType __cdecl GetPSOCompileTypeFromQueuePri(EQueuedWorkPriority param_1)

{
  code *pcVar1;
  bool bVar2;
  EPSOPrecacheCompileType EVar3;
  
  switch(param_1) {
  case Blocking:
  case Highest:
    return MaxPri;
  case High:
  case Normal:
    return NormalPri;
  case Low:
  case Lowest:
    goto switchD_145cab13d_caseD_4;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x313,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
switchD_145cab13d_caseD_4:
    return MinPri;
  }
}

// GetPSORuntimeCreationStats @ 145cab1a0

FPSORuntimeCreationStats * __cdecl
PipelineStateCache::GetPSORuntimeCreationStats(FPSORuntimeCreationStats *__return_storage_ptr__)

{
  __return_storage_ptr__->TotalPSOCreations = (uint)RuntimePSOCreationCount;
  __return_storage_ptr__->ComputePSOHitches = (uint)ComputePSOCreationHitchCount;
  __return_storage_ptr__->GraphicsPSOHitches = (uint)GraphicsPSOCreationHitchCount;
  __return_storage_ptr__->PreviouslyPrecachedPSOHitches = (uint)PrecachedPSOCreationHitchCount;
  __return_storage_ptr__->SuspectedUnhealthyDriverCachePSOHitches =
       (uint)UnhealthyDriverCachePSOCreationHitchCount;
  __return_storage_ptr__->bDriverCacheSuspectedUnhealthy = (bool)bDriverCacheSuspectedUnhealthy;
  return __return_storage_ptr__;
}

// GetPipelineStates @ 145cab1e0

void __cdecl
PipelineStateCache::GetPipelineStates
          (TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          FTimeout *param_3)

{
  FTimeout local_18;
  
  local_18.StartCycles = param_3->StartCycles;
  local_18.TimeoutCycles = param_3->TimeoutCycles;
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::GetResources
            (&GComputePipelineCache,param_1,param_2,&local_18);
  local_18.StartCycles = param_3->StartCycles;
  local_18.TimeoutCycles = param_3->TimeoutCycles;
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  GetResources(&GGraphicsPipelineCache,param_1,param_2,&local_18);
  local_18.StartCycles = param_3->StartCycles;
  local_18.TimeoutCycles = param_3->TimeoutCycles;
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  GetResources(&GWorkGraphPipelineCache,param_1,param_2,&local_18);
  FRayTracingPipelineCache::GetResources(&GRayTracingPipelineCache,param_1);
  return;
}

// GetRHIComputePipelineState @ 145cab650

FRHIComputePipelineState * __cdecl GetRHIComputePipelineState(FComputePipelineState *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRHIComputePipelineState *pFVar3;
  
  if ((param_1->RHIPipeline).Reference != (FRHIComputePipelineState *)0x0) {
    return (param_1->RHIPipeline).Reference;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4687553501859939577>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                     ,0x4f9,"PipelineState->RHIPipeline");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRHIComputePipelineState *)(*pcVar1)();
    return pFVar3;
  }
  return (param_1->RHIPipeline).Reference;
}

// GetRHIRayTracingPipelineState @ 145cab6b0

FRHIRayTracingPipelineState * __cdecl
GetRHIRayTracingPipelineState(FRayTracingPipelineState *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  FRHIRayTracingPipelineState *pFVar6;
  
  if (param_1 == (FRayTracingPipelineState *)0x0) {
    return (FRHIRayTracingPipelineState *)0x0;
  }
  if ((param_1->RHIPipeline).Reference == (FRHIRayTracingPipelineState *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4687553501859939675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x55b,"PipelineState->RHIPipeline");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FRHIRayTracingPipelineState *)(*pcVar4)();
      return pFVar6;
    }
  }
  puVar3 = (undefined8 *)param_1->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    param_1->_padding_ = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return (param_1->RHIPipeline).Reference;
}

// GetRHIRayTracingPipelineStateMaxLocalBindingDataSize @ 145cab740

uint __cdecl GetRHIRayTracingPipelineStateMaxLocalBindingDataSize(FRayTracingPipelineState *param_1)

{
  if (param_1 != (FRayTracingPipelineState *)0x0) {
    return param_1->MaxLocalBindingSize;
  }
  return 0;
}

// GetRHIWorkGraphPipelineState @ 145cab760

FRHIWorkGraphPipelineState * __cdecl GetRHIWorkGraphPipelineState(FWorkGraphPipelineState *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRHIWorkGraphPipelineState *pFVar3;
  
  if ((param_1->RHIPipeline).Reference != (FRHIWorkGraphPipelineState *)0x0) {
    return (param_1->RHIPipeline).Reference;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4687553501859939583>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                     ,0x4ff,"PipelineState->RHIPipeline");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRHIWorkGraphPipelineState *)(*pcVar1)();
    return pFVar3;
  }
  return (param_1->RHIPipeline).Reference;
}

// GetRayTracingPipelineState @ 145cab7c0

FRayTracingPipelineState * __cdecl
PipelineStateCache::GetRayTracingPipelineState(FRayTracingPipelineStateSignature *param_1)

{
  FRayTracingPipelineState *pFVar1;
  ulong64 uVar2;
  FRayTracingPipelineState **ppFVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GRayTracingPipelineCache);
  ppFVar3 = TMapBase<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
            ::Find((TMapBase<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*,0>_>
                    *)&GRayTracingPipelineCache.FullPipelines,param_1);
  if (ppFVar3 != (FRayTracingPipelineState **)0x0) {
    pFVar1 = *ppFVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRayTracingPipelineCache);
    uVar2 = GFrameCounter;
    if (pFVar1->LastFrameHit != GFrameCounter) {
      pFVar1->HitsAcrossFrames = pFVar1->HitsAcrossFrames + 1;
      pFVar1->LastFrameHit = uVar2;
    }
    return pFVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GRayTracingPipelineCache);
  return (FRayTracingPipelineState *)0x0;
}

// GetResourceFlagsInternal @ 145cab830

FResourceFlags * __cdecl
RHIInternal::GetResourceFlagsInternal
          (FResourceFlags *__return_storage_ptr__,FResourceEntry *param_1)

{
  ERHIResourceType EVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *pFVar3;
  longlong lVar4;
  byte *pbVar5;
  uint *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  bVar8 = (param_1->ResourceInfo).bValid;
  __return_storage_ptr__->bResident = (param_1->ResourceInfo).bResident;
  __return_storage_ptr__->bStreaming = false;
  __return_storage_ptr__->bRT = false;
  __return_storage_ptr__->bDS = false;
  __return_storage_ptr__->bUAV = false;
  __return_storage_ptr__->bMarkedForDelete = bVar8 == false;
  __return_storage_ptr__->bTransient = (param_1->ResourceInfo).IsTransient;
  EVar1 = (param_1->ResourceInfo).Type;
  __return_storage_ptr__->bRTAS = false;
  __return_storage_ptr__->bHasFlags = false;
  if (EVar1 == RRT_Texture) {
    pFVar3 = param_1->Resource;
    pbVar5 = (byte *)(**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
    lVar4 = pFVar3->_padding_;
    __return_storage_ptr__->bRT = (bool)(*pbVar5 & 1);
    pbVar5 = (byte *)(**(code **)(lVar4 + 0x20))(pFVar3);
    lVar4 = pFVar3->_padding_;
    __return_storage_ptr__->bDS = (bool)(*pbVar5 >> 2 & 1);
    puVar6 = (uint *)(**(code **)(lVar4 + 0x20))(pFVar3);
    lVar4 = pFVar3->_padding_;
    __return_storage_ptr__->bUAV = (bool)((byte)(*puVar6 >> 0x11) & 1);
    puVar7 = (undefined4 *)(**(code **)(lVar4 + 0x20))(pFVar3);
    bVar8 = (bool)((byte)((uint)*puVar7 >> 0x1c) & 1);
    __return_storage_ptr__->bStreaming = bVar8;
  }
  else {
    bVar8 = false;
    if (EVar1 == RRT_Buffer) {
      aVar2 = param_1->Resource[9].AtomicFlags.Packed;
      __return_storage_ptr__->bRTAS = (bool)((byte)((uint)aVar2 >> 0xd) & 1);
      __return_storage_ptr__->bUAV = (bool)((byte)((uint)aVar2 >> 3) & 1);
      bVar8 = false;
    }
  }
  if (((((__return_storage_ptr__->bResident == false) &&
        (__return_storage_ptr__->bMarkedForDelete == false)) &&
       (__return_storage_ptr__->bTransient == false)) &&
      ((bVar8 == false && (__return_storage_ptr__->bRT == false)))) &&
     ((__return_storage_ptr__->bDS == false &&
      ((__return_storage_ptr__->bUAV == false && (__return_storage_ptr__->bRTAS == false)))))) {
    __return_storage_ptr__->bHasFlags = false;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bHasFlags = true;
  return __return_storage_ptr__;
}

// GetTrackedResourcesInternal @ 145cacf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
RHIInternal::GetTrackedResourcesInternal
          (FString *param_1,ERHIResourceType param_2,EBooleanFilter param_3,
          TArray<RHIInternal::FResourceEntry,TSizedDefaultAllocator<32>_> *param_4,int *param_5,
          int *param_6,int *param_7,long64 *param_8,long64 *param_9)

{
  ulonglong uVar1;
  TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  byte bVar5;
  FString *pFVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  size_t sVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  FNameEntryId FVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStackY_9b8 [32];
  FIdentityFunctor local_987;
  undefined1 local_986 [2];
  uint local_984;
  EBooleanFilter local_980;
  FName local_978;
  ERHIResourceType EStack_970;
  undefined7 uStack_96f;
  undefined8 local_968;
  longlong lStack_960;
  char local_958;
  undefined1 uStack_957;
  undefined1 uStack_956;
  undefined5 uStack_955;
  TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> *local_950;
  FName FStack_948;
  undefined8 local_940;
  uint uStack_938;
  uint uStack_934;
  undefined8 local_930;
  undefined8 uStack_928;
  int local_920;
  FString *local_918;
  int *local_910;
  longlong *local_908;
  longlong *local_900;
  int *local_8f8;
  FScriptContainerElement *local_8e8;
  int iStack_8e0;
  undefined4 uStack_8dc;
  TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> *local_8d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8d0;
  undefined8 uStack_8b0;
  wchar_t *local_8a8;
  int iStack_8a0;
  undefined4 uStack_89c;
  TStringView<wchar_t> local_898;
  TStringView<wchar_t> local_888 [2];
  undefined4 local_85c;
  wchar_t local_858 [1040];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_9b8;
  local_8f8 = param_5;
  local_910 = param_6;
  local_900 = param_8;
  local_908 = param_9;
  bVar19 = -1 < CpuChannel->Enabled;
  local_980 = param_3;
  local_918 = param_1;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId720,"RHIInternal_GetTrackedResourcesInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp",0x2d0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId720);
  }
  FVar15.Value = 0;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  *param_7 = GRHITrackedResources.Elements._8_4_ - GRHITrackedResources.Elements._52_4_;
  FStack_948.Number = 1;
  local_978.ComparisonIndex.Value = 0;
  local_978.Number = 0;
  EStack_970 = RRT_None;
  local_968._0_4_ = 0;
  local_968._4_4_ = 0;
  lStack_960 = 0;
  local_958 = '\0';
  uStack_957 = 1;
  uStack_956 = 1;
  uVar9 = GRHITrackedResources.Elements._40_4_;
  uStack_934 = FVar15.Value;
  uVar16 = FVar15.Value;
  if (uVar9 != 0) {
    puVar17 = (uint *)&GRHITrackedResources.Elements.field_0x10;
    if (GRHITrackedResources.Elements._32_8_ != 0) {
      puVar17 = (uint *)GRHITrackedResources.Elements._32_8_;
    }
    uVar18 = *puVar17;
    uVar16 = 0;
    FVar15.Value = 0;
    while (uVar18 == 0) {
      lVar11 = (longlong)(int)FVar15.Value;
      uVar16 = uVar16 + 0x20;
      FVar15.Value = FVar15.Value + 1;
      uStack_934 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)FVar15.Value)
      goto LAB_145cad100;
      uVar18 = puVar17[lVar11 + 1];
    }
    FStack_948.Number = -uVar18 & uVar18;
    uVar1 = (ulonglong)FStack_948.Number * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_920 = (int)lVar11;
    uStack_934 = (uVar16 - 1) + local_920;
    if ((int)uVar9 < (int)uStack_934) {
      uStack_934 = uVar9;
    }
  }
LAB_145cad100:
  uVar18 = uVar9 & 0xffffffe0;
  local_940 = 0x154be9400;
  local_950 = &GRHITrackedResources;
  bVar5 = GRHITrackedResources.Elements._40_1_;
  uStack_928 = CONCAT44(uStack_928._4_4_,
                        GRHITrackedResources.Elements._8_4_ - GRHITrackedResources.Elements._52_4_);
  uStack_938 = 0xffffffff;
  FStack_948.ComparisonIndex.Value = FVar15.Value;
  local_930 = CONCAT44(local_85c,uVar16);
  iVar14 = (int)uVar9 >> 5;
  local_8d8 = &GRHITrackedResources;
  TStack_8d0._padding_._0_4_ = FVar15.Value;
  TStack_8d0._padding_._4_4_ = FStack_948.Number;
  TStack_8d0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&GRHITrackedResources.Elements.field_0x10;
  TStack_8d0.UnvisitedBitMask = 0xffffffff;
  TStack_8d0.CurrentBitIndex = uStack_934;
  TStack_8d0._24_8_ = local_930;
  uStack_8b0 = uStack_928;
  local_984 = uVar9;
  if ((int)uVar9 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar9 = GRHITrackedResources.Elements._40_4_;
  }
  pFVar6 = local_918;
  uVar16 = local_984;
  if (local_984 != uVar9) {
    lVar11 = 0x154be9400;
    if (GRHITrackedResources.Elements._32_8_ != 0) {
      lVar11 = GRHITrackedResources.Elements._32_8_;
    }
    uVar16 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar11 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145cad240;
      uVar16 = *(uint *)(lVar11 + 4 + lVar12 * 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar9 < (int)uVar16) {
      uVar16 = uVar9;
    }
  }
LAB_145cad240:
  do {
    pTVar2 = local_8d8;
    if (*(int *)&(local_8d8->Elements).field_0x8 - *(int *)&(local_8d8->Elements).field_0x34 !=
        (int)uStack_8b0) {
      `TSparseArray<TSparseSetElement<FRHIResource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_986);
    }
    if (((TStack_8d0.CurrentBitIndex == uVar16) &&
        (TStack_8d0.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&GRHITrackedResources.Elements.field_0x10)) &&
       (pTVar2 == &GRHITrackedResources)) {
      if ((*local_8f8 < 0) || (param_4->ArrayNum < *local_8f8)) {
        *local_8f8 = param_4->ArrayNum;
      }
      AlgoImpl::
      IntroSortInternal<RHIInternal::FResourceEntry,int,FIdentityFunctor,TDereferenceWrapper<RHIInternal::FResourceEntry,_RHIInternal::GetTrackedResourcesInternal_::__l2::<lambda_2>_>_>
                ((FResourceEntry *)(param_4->AllocatorInstance).Data,param_4->ArrayNum,local_987,
                 (<lambda_2> *)&local_987);
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pTVar2 = *(TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> **)
              (*(longlong *)&pTVar2->Elements + (longlong)TStack_8d0.CurrentBitIndex * 0x10);
    if ((pTVar2 != (TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> *)
                   0x0) &&
       (cVar8 = (**(code **)(*(longlong *)&pTVar2->Elements + 8))(pTVar2,&local_978), cVar8 != '\0')
       ) {
      uVar9 = *(uint *)&(pTVar2->Elements).field_0x8;
      if (((uVar9 >> 0x1e & 1) == 0) && ((uVar9 & 0x3fffffff) != 0)) {
        uStack_957 = 1;
      }
      else {
        uStack_957 = 0;
      }
      if ((pFVar6->Data).ArrayNum < 2) {
LAB_145cad347:
        if (((param_2 == RRT_None) || ((param_2 != RRT_Texture && (param_2 == EStack_970)))) &&
           ((local_980 == All || ((bool)local_958 == (local_980 == Yes))))) {
          local_940 = CONCAT71(uStack_96f,EStack_970);
          iVar14 = param_4->ArrayNum;
          FStack_948 = local_978;
          uStack_928 = CONCAT53(uStack_955,CONCAT12(uStack_956,CONCAT11(uStack_957,local_958)));
          uStack_938 = (uint)local_968;
          uStack_934 = local_968._4_4_;
          local_930 = lStack_960;
          local_950 = pTVar2;
          if (iVar14 == param_4->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          lVar11 = (longlong)iVar14;
          param_4->ArrayNum = iVar14 + 1;
          pFVar3 = (param_4->AllocatorInstance).Data;
          *(TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> **)
           (pFVar3 + lVar11 * 0x30) = local_950;
          *(FName *)(pFVar3 + lVar11 * 0x30 + 8) = FStack_948;
          *(undefined8 *)(pFVar3 + lVar11 * 0x30 + 0x10) = local_940;
          *(undefined8 *)(pFVar3 + lVar11 * 0x30 + 0x10 + 8) = _uStack_938;
          *(longlong *)(pFVar3 + lVar11 * 0x30 + 0x20) = local_930;
          *(undefined8 *)(pFVar3 + lVar11 * 0x30 + 0x20 + 8) = uStack_928;
        }
      }
      else {
        uVar9 = ::FName::ToStringInternal(&local_978,local_858,0x40b);
        if (uVar9 != 0) {
          if ((pFVar6->Data).ArrayNum == 0) {
            local_8e8 = (FScriptContainerElement *)0x15060d16c;
LAB_145cad2fd:
            sVar10 = wcslen((wchar_t *)local_8e8);
            iVar14 = (int)sVar10;
          }
          else {
            local_8e8 = (pFVar6->Data).AllocatorInstance.Data;
            iVar14 = 0;
            if (local_8e8 != (FScriptContainerElement *)0x0) goto LAB_145cad2fd;
          }
          local_8a8 = local_858;
          iStack_8e0 = iVar14;
          sVar10 = wcslen(local_858);
          local_898._12_4_ = uStack_8dc;
          local_898.Size = iStack_8e0;
          iStack_8a0 = (int)sVar10;
          local_888[0]._12_4_ = uStack_89c;
          local_888[0].Size = iStack_8a0;
          local_888[0].DataPtr = local_8a8;
          local_898.DataPtr = (wchar_t *)local_8e8;
          iVar14 = UE::String::FindFirst(local_888,&local_898,IgnoreCase);
          if (iVar14 != -1) goto LAB_145cad347;
        }
      }
      *local_910 = *local_910 + 1;
      plVar13 = local_908;
      if (local_958 == '\0') {
        plVar13 = local_900;
      }
      *plVar13 = *plVar13 + lStack_960;
    }
    TStack_8d0.UnvisitedBitMask = TStack_8d0.UnvisitedBitMask & ~TStack_8d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8d0);
  } while( true );
}

// GetTypeHash @ 145cad4e0

uint __cdecl GetTypeHash(FBoundShaderStateInput *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((uint)((ulonglong)param_1->VertexDeclarationRHI >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->VertexDeclarationRHI >> 4)) * -0x7a143595;
  uVar2 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = ((uint)((ulonglong)param_1->VertexShaderRHI >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->VertexShaderRHI >> 4)) * -0x7a143595;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + (uVar1 >> 0x10 ^ uVar1) + uVar2 * 0x40 + -0x61c88647 ^ uVar2;
  uVar1 = ((uint)((ulonglong)param_1->PixelShaderRHI >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->PixelShaderRHI >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + (uVar1 >> 0x10 ^ uVar1) + uVar2 * 0x40 + -0x61c88647 ^ uVar2;
  uVar1 = ((uint)((ulonglong)param_1->MeshShaderRHI >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->MeshShaderRHI >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + (uVar1 >> 0x10 ^ uVar1) + uVar2 * 0x40 + -0x61c88647 ^ uVar2;
  uVar1 = ((uint)((ulonglong)param_1->AmplificationShaderRHI >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->AmplificationShaderRHI >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + (uVar1 >> 0x10 ^ uVar1) + uVar2 * 0x40 + -0x61c88647 ^ uVar2;
  uVar1 = ((uint)((ulonglong)param_1->WorkGraphMeshShaderRHI >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->WorkGraphMeshShaderRHI >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + (uVar1 >> 0x10 ^ uVar1) + uVar2 * 0x40 + -0x61c88647 ^ uVar2;
  uVar1 = ((uint)((ulonglong)param_1->GeometryShaderRHI >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->GeometryShaderRHI >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return (uVar2 >> 2) + 0x9e3779b9 + (uVar1 >> 0x10 ^ uVar1) + uVar2 * 0x40 ^ uVar2;
}

// GetTypeHash @ 145cad6b0

uint __cdecl GetTypeHash(FDepthStencilStateInitializerRHI *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)(param_1->DepthTest).Value;
  iVar1 = param_1->bEnableDepthWrite - uVar2;
  uVar3 = 0x9e3779b9 - param_1->bEnableDepthWrite ^ iVar1 * 0x100;
  uVar4 = (uVar2 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar1 = uVar2 - param_1->bEnableFrontFaceStencil;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (param_1->bEnableFrontFaceStencil - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar2 = (uint)(param_1->FrontFaceStencilTest).Value;
  iVar1 = uVar3 - uVar2;
  uVar3 = iVar1 * 0x100 ^ 0x9e3779b9 - uVar3;
  uVar4 = (uVar2 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar2 = (uint)(param_1->FrontFaceStencilFailStencilOp).Value;
  iVar1 = uVar3 - uVar2;
  uVar3 = iVar1 * 0x100 ^ 0x9e3779b9 - uVar3;
  uVar4 = (uVar2 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar4 = (uint)(param_1->FrontFaceDepthFailStencilOp).Value;
  iVar1 = uVar2 - uVar4;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (uVar4 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar2 = (uint)(param_1->FrontFacePassStencilOp).Value;
  iVar1 = uVar3 - uVar2;
  uVar3 = 0x9e3779b9 - uVar3 ^ iVar1 * 0x100;
  uVar4 = (uVar2 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar1 = uVar2 - param_1->bEnableBackFaceStencil;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (param_1->bEnableBackFaceStencil - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar2 = (uint)(param_1->BackFaceStencilTest).Value;
  iVar1 = uVar3 - uVar2;
  uVar3 = 0x9e3779b9 - uVar3 ^ iVar1 * 0x100;
  uVar4 = (uVar2 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar4 = (uint)(param_1->BackFaceStencilFailStencilOp).Value;
  iVar1 = uVar2 - uVar4;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (uVar4 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar2 = (uint)(param_1->BackFaceDepthFailStencilOp).Value;
  iVar1 = uVar3 - uVar2;
  uVar3 = 0x9e3779b9 - uVar3 ^ iVar1 * 0x100;
  uVar4 = (uVar2 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar4 = (uint)(param_1->BackFacePassStencilOp).Value;
  iVar1 = uVar2 - uVar4;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (uVar4 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar1 = uVar2 - param_1->StencilReadMask;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (param_1->StencilReadMask - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar1 = uVar2 - param_1->StencilWriteMask;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (param_1->StencilWriteMask - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 145cadca0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

uint __cdecl GetTypeHash(FRasterizerStateInitializerRHI *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (uint)(param_1->FillMode).Value;
  uVar5 = (uint)(param_1->CullMode).Value;
  iVar2 = uVar3 - uVar5;
  fVar1 = param_1->DepthBias;
  uVar4 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar3;
  uVar5 = (uVar5 - uVar4) - iVar2 ^ uVar4 >> 0xd;
  uVar3 = (iVar2 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar4 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar5 = ((uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf) - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - (int)fVar1 ^ uVar5 << 8;
  uVar4 = ((int)fVar1 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 3;
  fVar1 = param_1->SlopeScaleDepthBias;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  uVar4 = ((uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf) - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - (int)fVar1 ^ uVar4 << 8;
  uVar5 = ((int)fVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar3 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  iVar2 = uVar3 - param_1->DepthClipMode;
  uVar4 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar3;
  uVar5 = (param_1->DepthClipMode - uVar4) - iVar2 ^ uVar4 >> 0xd;
  uVar3 = (iVar2 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar4 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar3 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf;
  iVar2 = uVar3 - param_1->bAllowMSAA;
  uVar4 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar3;
  uVar5 = (param_1->bAllowMSAA - uVar4) - iVar2 ^ uVar4 >> 0xd;
  uVar3 = (iVar2 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar4 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 10;
  return (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 145cadf20

uint __cdecl GetTypeHash(FRenderTarget *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)(param_1->ColorBlendOp).Value;
  uVar4 = (uint)(param_1->ColorDestBlend).Value;
  iVar1 = uVar2 - uVar4;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (uVar4 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar4 = (uint)(param_1->ColorSrcBlend).Value;
  iVar1 = uVar2 - uVar4;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (uVar4 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar2 = (uint)(param_1->AlphaBlendOp).Value;
  iVar1 = uVar3 - uVar2;
  uVar3 = 0x9e3779b9 - uVar3 ^ iVar1 * 0x100;
  uVar4 = (uVar2 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar4 = (uint)(param_1->AlphaDestBlend).Value;
  iVar1 = uVar2 - uVar4;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (uVar4 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar4 = (uint)(param_1->AlphaSrcBlend).Value;
  iVar1 = uVar2 - uVar4;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar4 = (uVar4 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar2 = (uint)(param_1->ColorWriteMask).Value;
  iVar1 = uVar3 - uVar2;
  uVar3 = 0x9e3779b9 - uVar3 ^ iVar1 * 0x100;
  uVar4 = (uVar2 - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 145cae1f0

uint __cdecl GetTypeHash(FSamplerStateInitializerRHI *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = (uint)(param_1->Filter).Value;
  uVar7 = (uint)(param_1->AddressU).Value;
  iVar3 = uVar4 - uVar7;
  uVar6 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar4;
  uVar7 = (uVar7 - uVar6) - iVar3 ^ uVar6 >> 0xd;
  uVar4 = (iVar3 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar6 >> 5;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 << 10;
  uVar4 = (uVar7 - uVar6) - uVar4 ^ uVar6 >> 0xf;
  uVar7 = (uint)(param_1->AddressV).Value;
  iVar3 = uVar4 - uVar7;
  uVar6 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar4;
  uVar7 = (uVar7 - uVar6) - iVar3 ^ uVar6 >> 0xd;
  uVar4 = (iVar3 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar6 >> 5;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 << 10;
  uVar6 = (uVar7 - uVar6) - uVar4 ^ uVar6 >> 0xf;
  uVar4 = (uint)(param_1->AddressW).Value;
  iVar3 = uVar6 - uVar4;
  uVar6 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar6;
  uVar7 = (uVar4 - uVar6) - iVar3 ^ uVar6 >> 0xd;
  uVar4 = (iVar3 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar6 >> 5;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 << 10;
  fVar1 = param_1->MipBias;
  uVar7 = ((uVar7 - uVar6) - uVar4 ^ uVar6 >> 0xf) - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar7) - (int)fVar1 ^ uVar7 << 8;
  uVar6 = ((int)fVar1 - uVar4) - uVar7 ^ uVar4 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 >> 3;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 << 10;
  fVar1 = param_1->MinMipLevel;
  uVar6 = ((uVar6 - uVar4) - uVar7 ^ uVar4 >> 0xf) - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - (int)fVar1 ^ uVar6 << 8;
  uVar7 = ((int)fVar1 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar6) - uVar7 ^ uVar6 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar7 ^ uVar6 << 10;
  fVar1 = param_1->MaxMipLevel;
  uVar4 = ((uVar7 - uVar4) - uVar6 ^ uVar4 >> 0xf) - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar7 = (-0x61c88647 - uVar4) - (int)fVar1 ^ uVar4 << 8;
  uVar2 = ((int)fVar1 - uVar7) - uVar4 ^ uVar7 >> 0xd;
  uVar5 = (uVar4 - uVar2) - uVar7 ^ uVar2 >> 0xc;
  uVar4 = param_1->MaxAnisotropy;
  uVar6 = param_1->BorderColor;
  uVar7 = (uVar7 - uVar5) - uVar2 ^ uVar5 << 0x10;
  uVar2 = (uVar2 - uVar7) - uVar5 ^ uVar7 >> 5;
  uVar5 = (uVar5 - uVar2) - uVar7 ^ uVar2 >> 3;
  uVar7 = (uVar7 - uVar5) - uVar2 ^ uVar5 << 10;
  uVar2 = ((uVar2 - uVar7) - uVar5 ^ uVar7 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar7 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar5 = (uVar4 - uVar7) - uVar2 ^ uVar7 >> 0xd;
  uVar2 = (uVar2 - uVar5) - uVar7 ^ uVar5 >> 0xc;
  uVar4 = (uVar7 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar7 = (uVar2 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar7) - uVar5 ^ uVar7 << 10;
  uVar7 = ((uVar5 - uVar4) - uVar7 ^ uVar4 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar4 = (-0x61c88647 - uVar7) - uVar6 ^ uVar7 << 8;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 >> 3;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 << 10;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 0xf;
  uVar4 = (uint)(param_1->SamplerComparisonFunction).Value;
  iVar3 = uVar6 - uVar4;
  uVar6 = 0x9e3779b9 - uVar6 ^ iVar3 * 0x100;
  uVar7 = (uVar4 - uVar6) - iVar3 ^ uVar6 >> 0xd;
  uVar4 = (iVar3 - uVar7) - uVar6 ^ uVar7 >> 0xc;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar6 >> 5;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar4) - uVar7 ^ uVar4 << 10;
  return (uVar7 - uVar6) - uVar4 ^ uVar6 >> 0xf;
}

// GetTypeHash @ 145cae650

uint __cdecl GetTypeHash(FBlendStateInitializerRHI *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = (uint)param_1->bUseIndependentRenderTargetBlendStates - (uint)param_1->bUseAlphaToCoverage
  ;
  uVar5 = 0x9e3779b9 - param_1->bUseIndependentRenderTargetBlendStates ^ iVar1 * 0x100;
  uVar3 = (param_1->bUseAlphaToCoverage - uVar5) - iVar1 ^ uVar5 >> 0xd;
  uVar2 = (iVar1 - uVar3) - uVar5 ^ uVar3 >> 0xc;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar2 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xf;
  uVar4 = 0;
  do {
    uVar3 = GetTypeHash((param_1->RenderTargets).Elements + uVar4);
    uVar2 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar5 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar5;
    uVar6 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
    uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 0xc;
    uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 0x10;
    uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 3;
    uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 10;
    uVar2 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xf;
  } while ((int)uVar5 < 8);
  return uVar2;
}

// GetTypeHash @ 145cae790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

uint __cdecl GetTypeHash(FGraphicsPipelineStateInitializer *param_1)

{
  FRHISamplerState *pFVar1;
  uint uVar2;
  TStaticArray<unsigned_char,8,4294967295> *pTVar3;
  uint uVar4;
  uint uVar5;
  FImmutableSamplerState *pFVar6;
  uint uVar7;
  
  uVar2 = GetTypeHash(&param_1->BoundShaderState);
  uVar5 = ((uint)((ulonglong)param_1->BlendState >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->BlendState >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar5 >> 0x10 ^ uVar5) + uVar2 * 0x40 ^ uVar2;
  uVar5 = ((uint)((ulonglong)param_1->RasterizerState >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->RasterizerState >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + (uVar5 >> 0x10 ^ uVar5) + uVar2 * 0x40 + -0x61c88647 ^ uVar2;
  uVar5 = ((uint)((ulonglong)param_1->DepthStencilState >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->DepthStencilState >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar2 = (uVar2 >> 2) + 0x9e3779b9 + (uVar5 >> 0x10 ^ uVar5) + uVar2 * 0x40 ^ uVar2;
  uVar7 = 0;
  uVar5 = uVar7;
  for (pFVar6 = &param_1->ImmutableSamplerState;
      pFVar6 != (FImmutableSamplerState *)&param_1->PrimitiveType;
      pFVar6 = (FImmutableSamplerState *)((pFVar6->ImmutableSamplers).Elements + 1)) {
    pFVar1 = (pFVar6->ImmutableSamplers).Elements[0];
    uVar4 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar5 = uVar5 ^ (uVar5 >> 2) + (uVar4 >> 0x10 ^ uVar4) + uVar5 * 0x40 + -0x61c88647;
  }
  uVar2 = uVar2 * 0x40 + uVar5 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = param_1->PrimitiveType + 0x9e3779b9 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2;
  uVar2 = param_1->RenderTargetsEnabled + 0x9e3779b9 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2;
  for (pTVar3 = &param_1->RenderTargetFormats;
      (TStaticArray<ETextureCreateFlags,8,4294967295> *)pTVar3 != &param_1->RenderTargetFlags;
      pTVar3 = (TStaticArray<unsigned_char,8,4294967295> *)(pTVar3->Elements + 1)) {
    uVar7 = uVar7 ^ uVar7 * 0x40 + (uVar7 >> 2) + -0x61c88647 + (uint)pTVar3->Elements[0];
  }
  uVar2 = uVar2 * 0x40 + uVar7 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = (uVar2 >> 2) +
          ((int)(param_1->RenderTargetFlags).Elements[0] & (Shared|SRGB)) + 0x9e3779b9 +
          uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) +
          ((int)(param_1->RenderTargetFlags).Elements[1] & (Shared|SRGB)) + 0x9e3779b9 +
          uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) +
          ((int)(param_1->RenderTargetFlags).Elements[2] & (Shared|SRGB)) + 0x9e3779b9 +
          uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) +
          ((int)(param_1->RenderTargetFlags).Elements[3] & (Shared|SRGB)) + 0x9e3779b9 +
          uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) +
          ((int)(param_1->RenderTargetFlags).Elements[4] & (Shared|SRGB)) + 0x9e3779b9 +
          uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) +
          ((int)(param_1->RenderTargetFlags).Elements[5] & (Shared|SRGB)) + 0x9e3779b9 +
          uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) +
          ((int)(param_1->RenderTargetFlags).Elements[6] & (Shared|SRGB)) + 0x9e3779b9 +
          uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) +
          ((int)(param_1->RenderTargetFlags).Elements[7] & (Shared|SRGB)) + 0x9e3779b9 +
          uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->DepthStencilTargetFormat + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) +
          ((int)param_1->DepthStencilTargetFlag & (Shared|SRGB|DepthStencilTargetable)) + 0x9e3779b9
          + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->DepthTargetLoadAction + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->DepthTargetStoreAction + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->StencilTargetLoadAction + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->StencilTargetStoreAction + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (param_1->DepthStencilAccess).Value + 0x9e3779b9 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->NumSamples + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->SubpassHint + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->SubpassIndex + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->ConservativeRasterization + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->bDepthBounds + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->MultiViewCount + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->bHasFragmentDensityAttachment + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  uVar2 = (uVar2 >> 2) + param_1->bAllowVariableRateShading + 0x9e3779b9 + uVar2 * 0x40 ^ uVar2;
  return (uVar2 >> 2) + 0x9e3779b9 + (uint)param_1->ShadingRate + uVar2 * 0x40 ^ uVar2;
}

// HandlePipelineCreationFailure @ 145cafca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl HandlePipelineCreationFailure(FComputePipelineStateInitializer *param_1)

{
  FString local_18;
  
  if (1 < (byte)LogRHI._0_1_) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    BytesToHex((uchar *)&param_1->ComputeShader->_padding_,0x14,&local_18);
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (1 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  if ((((param_1->field1_0x8).Flags & 0x40) == 0) && (-1 < (char)(param_1->field1_0x8).Flags)) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return;
}

// HandlePipelineCreationFailure @ 145cafda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl HandlePipelineCreationFailure(FGraphicsPipelineStateInitializer *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  void **local_e0;
  void *local_d8;
  undefined8 local_d0;
  uchar local_c8 [32];
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  FSHA1::FSHA1(&local_a8);
  local_e8 = (undefined1  [8])&local_a8;
  local_e0 = &local_d8;
  lVar2 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  `HandlePipelineCreationFailure'::__l2::<lambda_1>::operator()
            (local_e8,(FRHIShader *)(param_1->BoundShaderState).VertexShaderRHI);
  `HandlePipelineCreationFailure'::__l2::<lambda_1>::operator()
            (local_e8,(FRHIShader *)(param_1->BoundShaderState).MeshShaderRHI);
  `HandlePipelineCreationFailure'::__l2::<lambda_1>::operator()
            (local_e8,(FRHIShader *)(param_1->BoundShaderState).AmplificationShaderRHI);
  `HandlePipelineCreationFailure'::__l2::<lambda_1>::operator()
            (local_e8,(FRHIShader *)(param_1->BoundShaderState).PixelShaderRHI);
  `HandlePipelineCreationFailure'::__l2::<lambda_1>::operator()
            (local_e8,(FRHIShader *)(param_1->BoundShaderState).GeometryShaderRHI);
  FSHA1::Final(&local_a8);
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  local_c8[8] = '\0';
  local_c8[9] = '\0';
  local_c8[10] = '\0';
  local_c8[0xb] = '\0';
  local_c8[0xc] = '\0';
  local_c8[0xd] = '\0';
  local_c8[0xe] = '\0';
  local_c8[0xf] = '\0';
  local_c8[0x10] = '\0';
  local_c8[0x11] = '\0';
  local_c8[0x12] = '\0';
  local_c8[0x13] = '\0';
  FSHA1::GetHash(&local_a8,local_c8);
  if (1 < (byte)LogRHI._0_1_) {
    local_e8 = (undefined1  [8])0x0;
    local_e0 = (void **)0x0;
    BytesToHex(local_c8,0x14,(FString *)local_e8);
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    if (local_e8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_e8);
    }
  }
  if (((param_1->BoundShaderState).VertexShaderRHI != (FRHIVertexShader *)0x0) &&
     (1 < (byte)LogRHI._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((param_1->BoundShaderState).MeshShaderRHI != (FRHIMeshShader *)0x0) &&
     (1 < (byte)LogRHI._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((param_1->BoundShaderState).AmplificationShaderRHI != (FRHIAmplificationShader *)0x0) &&
     (1 < (byte)LogRHI._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((param_1->BoundShaderState).GeometryShaderRHI != (FRHIGeometryShader *)0x0) &&
     (1 < (byte)LogRHI._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((param_1->BoundShaderState).PixelShaderRHI != (FRHIPixelShader *)0x0) {
    if ((byte)LogRHI._0_1_ < 2) goto LAB_145cb00a2;
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((byte)LogRHI._0_1_ < 2) goto LAB_145cb00a2;
  UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  do {
    if (1 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
LAB_145cb00a2:
    lVar2 = lVar2 + 1;
  } while (lVar2 < 8);
  if ((1 < (byte)LogRHI._0_1_) &&
     (UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI),
     1 < (byte)LogRHI._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((param_1->field25_0xd2).Flags >> 0xc & 1) == 0) {
    if (((param_1->field25_0xd2).Flags >> 0xb & 1) == 0) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  else {
    uVar1 = GetTypeHash(param_1);
    FPipelineFileCacheManager::RegisterPSOCompileFailure(uVar1,param_1);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  FSHA1::~FSHA1(&local_a8);
  return;
}

// Init @ 145cb0370

void __cdecl PipelineStateCache::Init(void)

{
  TUniquePtr<FPrecacheGraphicsPipelineCache,TDefaultDelete<FPrecacheGraphicsPipelineCache>_> this;
  TUniquePtr<FPrecacheComputePipelineCache,TDefaultDelete<FPrecacheComputePipelineCache>_> this_00;
  TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
  *this_01;
  TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
  *this_02;
  bool bVar1;
  
  this_01 = ::operator_new(0xb0);
  if (this_01 ==
      (TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
       *)0x0) {
    this_01 = (TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
               *)0x0;
  }
  else {
    TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
    ::
    TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
              (this_01,Graphics,GPSOPrecacheKeepInMemoryGraphicsMaxNum);
  }
  this.Ptr = GPrecacheGraphicsPipelineCache.Ptr;
  bVar1 = GPrecacheGraphicsPipelineCache.Ptr != (FPrecacheGraphicsPipelineCache *)0x0;
  GPrecacheGraphicsPipelineCache.Ptr = (FPrecacheGraphicsPipelineCache *)this_01;
  if (bVar1) {
    TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
    ::
    ~TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
              ((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                *)this.Ptr);
    ::operator_delete(this.Ptr,0xb0);
  }
  this_02 = ::operator_new(0xb0);
  if (this_02 ==
      (TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
       *)0x0) {
    this_02 = (TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
               *)0x0;
  }
  else {
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
    ::
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
              (this_02,Compute,GPSOPrecacheKeepInMemoryComputeMaxNum);
  }
  this_00.Ptr = GPrecacheComputePipelineCache.Ptr;
  bVar1 = GPrecacheComputePipelineCache.Ptr != (FPrecacheComputePipelineCache *)0x0;
  GPrecacheComputePipelineCache.Ptr = (FPrecacheComputePipelineCache *)this_02;
  if (bVar1) {
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
    ::
    ~TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
              ((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                *)this_00.Ptr);
    ::operator_delete(this_00.Ptr,0xb0);
  }
  return;
}

// InternalCreateComputePipelineState @ 145cb10e0

void __cdecl
InternalCreateComputePipelineState
          (FComputePipelineStateInitializer *param_1,bool param_2,EPSOPrecacheResult param_3,
          bool param_4,FComputePipelineState *param_5,FPSOCompilationDebugData *param_6,bool param_7
          )

{
  undefined1 *puVar1;
  int iVar2;
  FRHIComputePipelineState *this;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FBaseGraphTask *pFVar6;
  TRefCountPtr<FRHIComputePipelineState> *pTVar7;
  FLLMScope local_res10 [2];
  TRefCountPtr<FRHIComputePipelineState> local_48;
  FMemScope local_40;
  LARGE_INTEGER local_38 [2];
  
  pFVar6 = FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)param_5);
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar6->field_0x30 = *(int *)&pFVar6->field_0x30 + 1;
    UNLOCK();
  }
  if (param_2) {
    if (pFVar6 == (FBaseGraphTask *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0xe60,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
              (param_1,param_3,param_4,(FPipelineStateAsync *)param_5,param_6,param_7);
    goto LAB_145cb12fa;
  }
  iVar2 = (param_6->PSOCompilationEventName).Data.ArrayNum;
  if (((iVar2 == 0) || (iVar2 < 2)) || (CpuChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)(param_6->PSOCompilationEventName).Data.AllocatorInstance.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0xe65);
  }
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("GraphEvent == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0xe67,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  QueryPerformanceCounter(local_38);
  FLLMScope::FLLMScope(local_res10,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_40,Shaders,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x118))(GDynamicRHI,&local_48,param_1);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = &param_5->RHIPipeline;
  if (pTVar7 == &local_48) {
LAB_145cb1289:
    if (local_48.Reference != (FRHIComputePipelineState *)0x0) {
      FRHIResource::Release((FRHIResource *)local_48.Reference);
    }
  }
  else {
    this = pTVar7->Reference;
    pTVar7->Reference = local_48.Reference;
    local_48.Reference = (FRHIComputePipelineState *)0x0;
    if (this != (FRHIComputePipelineState *)0x0) {
      FRHIResource::Release((FRHIResource *)this);
      goto LAB_145cb1289;
    }
  }
  if (((char)(param_1->field1_0x8).Flags < '\0') || (((param_1->field1_0x8).Flags & 0x40) != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  CheckAndUpdateHitchCountStat(Compute,bVar5,param_6,local_38[0].QuadPart,param_3);
  if (((param_1->field1_0x8).Flags & 0x40) != 0) {
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
    ::PrecacheFinished((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                        *)GPrecacheComputePipelineCache.Ptr,param_1,
                       pTVar7->Reference != (FRHIComputePipelineState *)0x0);
  }
  if (pTVar7->Reference == (FRHIComputePipelineState *)0x0) {
    HandlePipelineCreationFailure(param_1);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_145cb12fa:
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar6->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145cb133d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      return;
    }
  }
  return;
}

// InternalCreateGraphicsPipelineState @ 145cb1350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __cdecl
InternalCreateGraphicsPipelineState
          (FGraphicsPipelineStateInitializer *param_1,EPSOPrecacheResult param_2,bool param_3,
          bool param_4,FGraphicsPipelineState *param_5,FPSOCompilationDebugData *param_6,
          bool param_7)

{
  TRefCountPtr<FRHIGraphicsPipelineState> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  FRHIGraphicsPipelineState *this;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FBaseGraphTask *pFVar7;
  FLLMScope local_res20 [2];
  TRefCountPtr<FRHIGraphicsPipelineState> local_48;
  FMemScope local_40;
  LARGE_INTEGER local_38 [2];
  
  pFVar7 = FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)param_5);
  if (pFVar7 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar7->field_0x30 = *(int *)&pFVar7->field_0x30 + 1;
    UNLOCK();
  }
  if (param_4) {
    if (pFVar7 == (FBaseGraphTask *)0x0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x1045,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
              (param_1,param_2,param_3,(FPipelineStateAsync *)param_5,param_6,param_7);
    goto LAB_145cb157c;
  }
  iVar3 = (param_6->PSOCompilationEventName).Data.ArrayNum;
  if (((iVar3 == 0) || (iVar3 < 2)) || (CpuChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)(param_6->PSOCompilationEventName).Data.AllocatorInstance.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x104a);
  }
  if (pFVar7 != (FBaseGraphTask *)0x0) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("GraphEvent == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x104c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  QueryPerformanceCounter(local_38);
  FLLMScope::FLLMScope(local_res20,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_40,Shaders,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x110))(GDynamicRHI,&local_48,param_1);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res20);
  pTVar1 = &param_5->RHIPipeline;
  if (pTVar1 == &local_48) {
LAB_145cb14fa:
    if (local_48.Reference != (FRHIGraphicsPipelineState *)0x0) {
      FRHIResource::Release((FRHIResource *)local_48.Reference);
    }
  }
  else {
    this = pTVar1->Reference;
    pTVar1->Reference = local_48.Reference;
    local_48.Reference = (FRHIGraphicsPipelineState *)0x0;
    if (this != (FRHIGraphicsPipelineState *)0x0) {
      FRHIResource::Release((FRHIResource *)this);
      goto LAB_145cb14fa;
    }
  }
  CheckAndUpdateHitchCountStat
            (Graphics,((param_1->field25_0xd2).Flags & 0x1800) == 0,param_6,local_38[0].QuadPart,
             param_2);
  if (((param_1->field25_0xd2).Flags & 0x800) != 0) {
    TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
    ::PrecacheFinished((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                        *)GPrecacheGraphicsPipelineCache.Ptr,param_1,
                       pTVar1->Reference != (FRHIGraphicsPipelineState *)0x0);
  }
  if (pTVar1->Reference == (FRHIGraphicsPipelineState *)0x0) {
    HandlePipelineCreationFailure(param_1);
  }
  else {
    param_5->SortKey = pTVar1->Reference->SortKey;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_145cb157c:
  if (pFVar7 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &pFVar7->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145cb15bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
      return;
    }
  }
  return;
}

// IsAsyncCompilationAllowed @ 145cb16f0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IsAsyncCompilationAllowed(FRHIComputeCommandList *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  pTVar3 = GCVarAsyncPipelineCompile.Ref;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_145cb1725:
    lVar7 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    if (bVar4) goto LAB_145cb1725;
    lVar7 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar7);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (!param_2) {
LAB_145cb17ee:
        bVar4 = false;
        goto LAB_145cb1742;
      }
    }
    else if ((iVar1 != 3) || (param_2)) goto LAB_145cb17ee;
  }
  bVar4 = true;
LAB_145cb1742:
  if (GRHIGlobals.SupportsAsyncPipelinePrecompile != false) {
    uVar8 = (ulonglong)GMaxRHIShaderPlatform;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].bContainsValidPlatformInfo == 0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2b6,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    if ((((FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].bSupportsAsyncPipelineCompilation != 0
          ) && (bVar4)) &&
        ((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0)))) &&
       (GIsRunningRHIInSeparateThread_InternalUseOnly != false)) {
      bVar4 = IsInRHIThread();
      if ((!bVar4) && ((param_1->field_0x29b & 0x10) == 0)) {
        return true;
      }
    }
  }
  return false;
}

// IsPSOPrecachingEnabled @ 145cb1900

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl PipelineStateCache::IsPSOPrecachingEnabled(void)

{
  if ((GPSOPrecaching != 0) && (GRHIGlobals.SupportsPSOPrecaching)) {
    return true;
  }
  return false;
}

// IsPrecaching @ 145cb1920

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl PipelineStateCache::IsPrecaching(FPSOPrecacheRequestID *param_1)

{
  EPSOPrecacheStateMask EVar1;
  ulong64 uVar2;
  code *pcVar3;
  TUniquePtr<FPrecacheGraphicsPipelineCache,TDefaultDelete<FPrecacheGraphicsPipelineCache>_> TVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FPrecacheTask *pFVar9;
  TUniquePtr<FPrecacheComputePipelineCache,TDefaultDelete<FPrecacheComputePipelineCache>_> TVar10;
  
  TVar10.Ptr = GPrecacheComputePipelineCache.Ptr;
  TVar4.Ptr = GPrecacheGraphicsPipelineCache.Ptr;
  if ((GPSOPrecaching != 0) && (GRHIGlobals.SupportsPSOPrecaching)) {
    uVar7 = param_1->Type;
    if (uVar7 == 1) {
      if (*(int *)GPrecacheGraphicsPipelineCache.Ptr != 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RequestID.GetType() == PSOType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x9c9,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      AcquireSRWLockShared((PSRWLOCK)&(TVar4.Ptr)->field_0x8);
      uVar7 = param_1->RequestID;
      if (*(int *)&(TVar4.Ptr)->field_0x18 <= (int)uVar7) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      uVar2 = *(ulong64 *)(*(longlong *)&(TVar4.Ptr)->field_0x10 + (ulonglong)uVar7 * 8);
      ReleaseSRWLockShared((PSRWLOCK)&(TVar4.Ptr)->field_0x8);
      AcquireSRWLockShared((PSRWLOCK)&(TVar4.Ptr)->field_0x8);
      pFVar9 = (FPrecacheTask *)
               TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
               ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
                       *)&(TVar4.Ptr)->field_0x20,uVar2);
      TVar10.Ptr = (FPrecacheComputePipelineCache *)TVar4;
    }
    else {
      if (uVar7 != *(uint *)GPrecacheComputePipelineCache.Ptr) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RequestID.GetType() == PSOType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x9c9,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      AcquireSRWLockShared((PSRWLOCK)&(TVar10.Ptr)->field_0x8);
      uVar7 = param_1->RequestID;
      if (*(int *)&(TVar10.Ptr)->field_0x18 <= (int)uVar7) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      uVar2 = *(ulong64 *)(*(longlong *)&(TVar10.Ptr)->field_0x10 + (ulonglong)uVar7 * 8);
      ReleaseSRWLockShared((PSRWLOCK)&(TVar10.Ptr)->field_0x8);
      AcquireSRWLockShared((PSRWLOCK)&(TVar10.Ptr)->field_0x8);
      pFVar9 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
               ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
                       *)&(TVar10.Ptr)->field_0x20,uVar2);
    }
    if (pFVar9 == (FPrecacheTask *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)&((FPrecacheGraphicsPipelineCache *)TVar10.Ptr)->field_0x8);
      iVar8 = 3;
    }
    else {
      EVar1 = pFVar9->StateMask;
      ReleaseSRWLockShared((PSRWLOCK)&((FPrecacheGraphicsPipelineCache *)TVar10.Ptr)->field_0x8);
      if ((EVar1 & (Failed|Succeeded)) == None) {
        iVar8 = 1;
      }
      else {
        if ((EVar1 & (Failed|Succeeded)) == (Failed|Succeeded)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumHasAnyFlags(CompilationState, CompletionMask) && !EnumHasAllFlags(CompilationState, CompletionMask)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0xaa0,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        iVar8 = 2;
        if ((EVar1 & Failed) != None) {
          iVar8 = 5;
        }
      }
    }
    return iVar8 == 1;
  }
  return false;
}

// IsPrecaching @ 145cb1b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl PipelineStateCache::IsPrecaching(FGraphicsPipelineStateInitializer *param_1)

{
  EPSOPrecacheResult EVar1;
  
  if ((GPSOPrecaching != 0) && (GRHIGlobals.SupportsPSOPrecaching)) {
    EVar1 = TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
            ::GetPrecachingState
                      ((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                        *)GPrecacheGraphicsPipelineCache.Ptr,param_1);
    return EVar1 == Active;
  }
  return false;
}

// IsPrecaching @ 145cb1b80

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl PipelineStateCache::IsPrecaching(FRHIComputeShader *param_1)

{
  EPSOPrecacheResult EVar1;
  FComputePipelineStateInitializer local_18;
  
  if ((GPSOPrecaching != 0) && (GRHIGlobals.SupportsPSOPrecaching)) {
    local_18.field1_0x8.Flags = '\0';
    local_18.ComputeShader = param_1;
    EVar1 = TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
            ::GetPrecachingState
                      ((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                        *)GPrecacheComputePipelineCache.Ptr,&local_18);
    return EVar1 == Active;
  }
  return false;
}

// IsPrecaching @ 145cb1bd0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl PipelineStateCache::IsPrecaching(void)

{
  undefined1 *puVar1;
  int iVar2;
  TUniquePtr<FPrecacheGraphicsPipelineCache,TDefaultDelete<FPrecacheGraphicsPipelineCache>_> TVar3;
  TUniquePtr<FPrecacheComputePipelineCache,TDefaultDelete<FPrecacheComputePipelineCache>_> TVar4;
  
  TVar3.Ptr = GPrecacheGraphicsPipelineCache.Ptr;
  if ((GPSOPrecaching != 0) && (GRHIGlobals.SupportsPSOPrecaching)) {
    puVar1 = &(GPrecacheGraphicsPipelineCache.Ptr)->field_0x8;
    AcquireSRWLockShared((PSRWLOCK)puVar1);
    iVar2 = *(int *)&(TVar3.Ptr)->field_0x70;
    ReleaseSRWLockShared((PSRWLOCK)puVar1);
    TVar4 = GPrecacheComputePipelineCache;
    if (iVar2 == 0) {
      puVar1 = &(GPrecacheComputePipelineCache.Ptr)->field_0x8;
      AcquireSRWLockShared((PSRWLOCK)puVar1);
      iVar2 = *(int *)&(TVar4.Ptr)->field_0x70;
      ReleaseSRWLockShared((PSRWLOCK)puVar1);
      if (iVar2 == 0) {
        return false;
      }
    }
    return true;
  }
  return false;
}

// IsRHIDeviceAMD @ 145cb1c70

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl IsRHIDeviceAMD(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRHIGlobals.GpuInfo.VendorId == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GRHIGlobals.GpuInfo.VendorId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x53e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return GRHIGlobals.GpuInfo.VendorId == 0x1002;
}

// IsRHIDeviceApple @ 145cb1cc0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl IsRHIDeviceApple(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRHIGlobals.GpuInfo.VendorId == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GRHIGlobals.GpuInfo.VendorId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x558,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return GRHIGlobals.GpuInfo.VendorId == 0x106b;
}

// IsRHIDeviceIntel @ 145cb1d10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl IsRHIDeviceIntel(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRHIGlobals.GpuInfo.VendorId == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GRHIGlobals.GpuInfo.VendorId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x544,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return GRHIGlobals.GpuInfo.VendorId == 0x8086;
}

// IsRHIDeviceNVIDIA @ 145cb1d60

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl IsRHIDeviceNVIDIA(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRHIGlobals.GpuInfo.VendorId == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GRHIGlobals.GpuInfo.VendorId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x54a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return GRHIGlobals.GpuInfo.VendorId == 0x10de;
}

// IsRHIDeviceQualcomm @ 145cb1db0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl IsRHIDeviceQualcomm(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((GRHIGlobals.GpuInfo.VendorId == 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("GRHIGlobals.GpuInfo.VendorId != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x550,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((GRHIGlobals.GpuInfo.VendorId != 0x5143) && (GRHIGlobals.GpuInfo.VendorId != 0x4d4f4351)) {
    return false;
  }
  return true;
}

// LexToString @ 145cb23c0

wchar_t * __cdecl LexToString(EPSOPrecacheResult param_1)

{
  switch(param_1) {
  default:
    return L"Unknown";
  case Active:
    return L"Precaching";
  case Complete:
    return L"Precached";
  case Missed:
    return L"Missed";
  case TooLate:
    return L"Too Late";
  case NotSupported:
    return L"Not Supported";
  case Untracked:
    return L"Untracked";
  }
}

// NumActivePrecacheRequests @ 145cb3f10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl PipelineStateCache::NumActivePrecacheRequests(void)

{
  code *pcVar1;
  TUniquePtr<FPrecacheGraphicsPipelineCache,TDefaultDelete<FPrecacheGraphicsPipelineCache>_> TVar2;
  TUniquePtr<FPrecacheComputePipelineCache,TDefaultDelete<FPrecacheComputePipelineCache>_> TVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  TVar2.Ptr = GPrecacheGraphicsPipelineCache.Ptr;
  if ((GPSOPrecaching == 0) || (!GRHIGlobals.SupportsPSOPrecaching)) {
    return 0;
  }
  if (GPSOWaitForHighPriorityRequestsOnly != 0) {
    if (GPSOWaitForHighPriorityRequestsOnly == 1) {
      iVar6 = *(int *)&(GPrecacheGraphicsPipelineCache.Ptr)->field_0x78 +
              *(int *)&(GPrecacheGraphicsPipelineCache.Ptr)->field_0x74;
      goto code_r0x000145cb3f85;
    }
    if (GPSOWaitForHighPriorityRequestsOnly == 2) {
      iVar6 = *(int *)&(GPrecacheGraphicsPipelineCache.Ptr)->field_0x78;
      goto code_r0x000145cb3f85;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0xa06,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
  }
  iVar6 = *(int *)&(TVar2.Ptr)->field_0x70;
code_r0x000145cb3f85:
  TVar3.Ptr = GPrecacheComputePipelineCache.Ptr;
  if (GPSOWaitForHighPriorityRequestsOnly != 0) {
    if (GPSOWaitForHighPriorityRequestsOnly == 1) {
      return *(int *)&(GPrecacheComputePipelineCache.Ptr)->field_0x78 +
             *(int *)&(GPrecacheComputePipelineCache.Ptr)->field_0x74 + iVar6;
    }
    if (GPSOWaitForHighPriorityRequestsOnly == 2) {
      return *(int *)&(GPrecacheComputePipelineCache.Ptr)->field_0x78 + iVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0xa06,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
  }
  return *(int *)&(TVar3.Ptr)->field_0x70 + iVar6;
}

// PreCompileComplete @ 145cb45c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl PipelineStateCache::PreCompileComplete(void)

{
  atomic<FQueuedThreadPool_*> aVar1;
  
  aVar1 = GPSOPrecacheThreadPool.PSOPrecompileCompileThreadPool;
  if ((GPSOPrecaching == 0) || (!GRHIGlobals.SupportsPSOPrecaching)) {
    LOCK();
    GPSOPrecacheThreadPool.PSOPrecompileCompileThreadPool = (atomic<FQueuedThreadPool_*>)0x0;
    UNLOCK();
    if (aVar1 != (atomic<FQueuedThreadPool_*>)0x0) {
      (**(code **)(*(longlong *)aVar1 + 0x10))(aVar1);
                    /* WARNING: Could not recover jumptable at 0x000145cb4606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)aVar1 + 0x30))(aVar1,1);
      return;
    }
  }
  return;
}

// PrecacheComputePipelineState @ 145cb4730

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPSOPrecacheRequestResult * __cdecl
PipelineStateCache::PrecacheComputePipelineState
          (FPSOPrecacheRequestResult *__return_storage_ptr__,FRHIComputeShader *param_1,
          wchar_t *param_2,bool param_3)

{
  TUniquePtr<FPrecacheComputePipelineCache,TDefaultDelete<FPrecacheComputePipelineCache>_> this;
  bool bVar1;
  FComputePipelineStateInitializer local_28;
  FString local_18;
  
  this.Ptr = GPrecacheComputePipelineCache.Ptr;
  if ((((GPSOPrecaching == 0) || (!GRHIGlobals.SupportsPSOPrecaching)) && (!param_3)) ||
     (param_1 == (FRHIComputeShader *)0x0)) {
    __return_storage_ptr__.Type = 0;
    __return_storage_ptr__.RequestID = 0;
    (__return_storage_ptr__->AsyncCompileEvent).Reference = (FBaseGraphTask *)0x0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        bDoAsyncCompile = FApp::ShouldUseThreadingForPerformance();
        _Init_thread_footer(&::_TSS0);
      }
    }
    bVar1 = bDoAsyncCompile;
    local_28.field1_0x8.Flags = '@';
    local_28.ComputeShader = param_1;
    ::FString::FString(&local_18,param_2);
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
    ::TryAddNewState((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                      *)this.Ptr,__return_storage_ptr__,&local_28,&local_18,bVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// PrecacheGraphicsPipelineState @ 145cb4d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPSOPrecacheRequestResult * __cdecl
PipelineStateCache::PrecacheGraphicsPipelineState
          (FPSOPrecacheRequestResult *__return_storage_ptr__,
          FGraphicsPipelineStateInitializer *param_1)

{
  TUniquePtr<FPrecacheGraphicsPipelineCache,TDefaultDelete<FPrecacheGraphicsPipelineCache>_> this;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  FString local_18;
  
  this.Ptr = GPrecacheGraphicsPipelineCache.Ptr;
  if ((GPSOPrecaching != 0) && (GRHIGlobals.SupportsPSOPrecaching)) {
    FLLMScope::FLLMScope(local_res8,PSO,false,None,Default,true);
    FMemScope::FMemScope(&local_res18,PSO,true);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        bDoAsyncCompile = FApp::ShouldUseThreadingForPerformance();
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
    ::TryAddNewState((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                      *)this.Ptr,__return_storage_ptr__,param_1,&local_18,bDoAsyncCompile);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__.Type = 0;
  __return_storage_ptr__.RequestID = 0;
  (__return_storage_ptr__->AsyncCompileEvent).Reference = (FBaseGraphTask *)0x0;
  return __return_storage_ptr__;
}

// PrecachePSOsBoostToHighestPriority @ 145cb4e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PipelineStateCache::PrecachePSOsBoostToHighestPriority(bool param_1)

{
  bool bVar1;
  
  if ((param_1) && (GPSOPrecachePermitPriorityEscalation)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((4 < (byte)LogRHI._0_1_) && (GForceHighToHighestPri != bVar1)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  GForceHighToHighestPri = bVar1;
  return;
}

// RHIDumpResourceMemory @ 145cb7300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
RHIDumpResourceMemory
          (FString *param_1,ERHIResourceType param_2,EBooleanFilter param_3,int param_4,bool param_5
          ,bool param_6,bool param_7,FBufferedOutputDevice *param_8)

{
  code *pcVar1;
  long64 lVar2;
  bool bVar3;
  uint uVar4;
  FDateTime this;
  IFileManager *pIVar5;
  longlong *plVar6;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar7;
  FResourceFlags *pFVar8;
  int iVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 auStackY_13a8 [32];
  int local_1338 [2];
  FName local_1330;
  FResourceFlags local_1328;
  int local_1318 [2];
  TArray<RHIInternal::FResourceEntry,TSizedDefaultAllocator<32>_> local_1310;
  longlong *local_1300;
  EBooleanFilter local_12f8;
  longlong local_12f0;
  longlong local_12e8;
  wchar_t *local_12e0;
  longlong local_12d8;
  long64 local_12d0;
  long64 local_12c8;
  FString *local_12c0;
  FString local_12b8;
  FName local_12a8;
  wchar_t *local_12a0;
  FString local_1298;
  FString local_1288;
  FString local_1278;
  FString local_1260;
  FString local_1250;
  FResourceFlags local_1240 [2];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_1228;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_1188;
  wchar_t local_10e8 [1040];
  wchar_t local_8c8 [1040];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_13a8;
  plVar14 = (longlong *)0x0;
  local_1318[1] = 0;
  local_1300 = (longlong *)0x0;
  plVar6 = plVar14;
  local_1338[0] = param_4;
  local_12f8 = param_3;
  local_12c0 = param_1;
  if (param_7) {
    this = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this.Ticks,&local_1250);
    FPaths::ProfilingDir(&local_1260);
    FString::PrintfImpl(&local_1298,L"%srhiDumpResourceMemory-%s.csv");
    if (local_1260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1260.Data.AllocatorInstance.Data);
    }
    if (local_1250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1250.Data.AllocatorInstance.Data);
    }
    pIVar5 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_1298.Data.ArrayNum != 0) {
      FVar10.Data = local_1298.Data.AllocatorInstance.Data;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,FVar10.Data,0x10);
    local_1300 = plVar6;
    if (local_1298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1298.Data.AllocatorInstance.Data);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
  local_1310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1310.ArrayNum = 0;
  local_1310.ArrayMax = 0;
  local_1318[0] = 0;
  local_1318[1] = 0;
  local_12d0 = 0;
  local_12c8 = 0;
  RHIInternal::GetTrackedResourcesInternal
            (local_12c0,param_2,param_3,&local_1310,local_1338,local_1318,local_1318 + 1,&local_12d0
             ,&local_12c8);
  iVar9 = local_1310.ArrayNum;
  FName::FName(&local_1330,L"RHIResources");
  iVar15 = local_1318[0];
  if (param_7) {
    pcVar1 = *(code **)(*plVar6 + 0x188);
    pTVar7 = StringCast<char,128,wchar_t>
                       (&local_1228,
                        L"Name,Type,Size,Resident,MarkedForDelete,Transient,Streaming,RenderTarget,UAV,\"Raytracing Acceleration Structure\",Owner\n"
                       );
    (*pcVar1)(plVar6,pTVar7->Ptr,0x77);
    if ((void *)local_1228._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1228._padding_);
    }
  }
  else if (param_5) {
    FOutputDevice::CategorizedLogfImpl
              ((FOutputDevice *)param_8,&local_1330,Log,
               L"Name,Type,Size,Resident,MarkedForDelete,Transient,Streaming,RenderTarget,UAV,\"Raytracing Acceleration Structure\",Owner"
              );
  }
  else {
    if (!param_6) {
      FOutputDevice::CategorizedLogfImpl
                ((FOutputDevice *)param_8,&local_1330,Log,
                 L"Tracked RHIResources (%d total with info, %d total tracked)");
    }
    if (local_1338[0] != iVar9) {
      FOutputDevice::CategorizedLogfImpl
                ((FOutputDevice *)param_8,&local_1330,Log,L"Showing %d of %d matched resources");
    }
  }
  local_12d8 = 0;
  if (0 < local_1310.ArrayNum) {
    local_12e8 = 0;
    local_12a0 = L"Yes";
    plVar6 = plVar14;
    plVar16 = plVar14;
    iVar9 = local_1310.ArrayNum;
    do {
      uVar12 = (uint)plVar6;
      if ((int)uVar12 < local_1338[0]) {
        uVar13 = ~uVar12 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar12 < iVar9) {
          uVar4 = uVar13;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar10.Data = local_1310.AllocatorInstance.Data;
        FName::ToStringInternal
                  ((FName *)(local_1310.AllocatorInstance.Data + 8 + (longlong)plVar16),local_8c8,
                   0x40b);
        local_12e0 = StringFromRHIResourceType
                               ((ERHIResourceType)(FVar10.Data + 0x10)[(longlong)plVar16]);
        lVar11 = *(longlong *)(FVar10.Data + 0x20 + (longlong)plVar16);
        uVar4 = 0;
        if ((int)uVar12 < local_1310.ArrayNum) {
          uVar4 = uVar13;
        }
        local_12f0 = lVar11;
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_12a8 = *(FName *)(*(longlong *)((longlong)plVar16 + local_1310.AllocatorInstance.Data)
                               + 0x10);
        FName::ToStringInternal(&local_12a8,local_10e8,0x40b);
        uVar4 = 0;
        if ((int)uVar12 < local_1310.ArrayNum) {
          uVar4 = uVar13;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = RHIInternal::GetResourceFlagsInternal
                           (local_1240,
                            (FResourceEntry *)
                            (local_1310.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x30));
        local_1328.bResident = pFVar8->bResident;
        local_1328.bMarkedForDelete = pFVar8->bMarkedForDelete;
        local_1328.bTransient = pFVar8->bTransient;
        local_1328.bStreaming = pFVar8->bStreaming;
        local_1328.bRT = pFVar8->bRT;
        local_1328.bDS = pFVar8->bDS;
        local_1328.bUAV = pFVar8->bUAV;
        local_1328.bRTAS = pFVar8->bRTAS;
        local_1328.bHasFlags = pFVar8->bHasFlags;
        if (!param_6) {
          if ((param_7) || (param_5)) {
            FString::PrintfImpl(&local_12b8,L"%s,%s,%.9f,%s,%s,%s,%s,%s,%s,%s,%s\n");
            lVar11 = local_12f0;
            if (param_7) {
              pcVar1 = *(code **)(*local_1300 + 0x188);
              uVar4 = local_12b8.Data.ArrayNum - 1;
              FVar10.Data = local_12b8.Data.AllocatorInstance.Data;
              if (local_12b8.Data.ArrayNum == 0) {
                uVar4 = 0;
                FVar10.Data = (FScriptContainerElement *)L"";
              }
              pTVar7 = StringCast<char,128,wchar_t>(&local_1188,(wchar_t *)FVar10.Data);
              (*pcVar1)(local_1300,pTVar7->Ptr,(longlong)(int)uVar4);
              FVar10.Data = local_12b8.Data.AllocatorInstance.Data;
              lVar11 = local_12f0;
              if ((void *)local_1188._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_1188._padding_);
                FVar10.Data = local_12b8.Data.AllocatorInstance.Data;
                lVar11 = local_12f0;
              }
            }
            else {
              FOutputDevice::CategorizedLogfImpl((FOutputDevice *)param_8,&local_1330,Log,L"%s");
              FVar10.Data = local_12b8.Data.AllocatorInstance.Data;
            }
          }
          else {
            RHIInternal::FResourceFlags::GetString(&local_1328,&local_1288);
            FOutputDevice::CategorizedLogfImpl
                      ((FOutputDevice *)param_8,&local_1330,Log,
                       L"Name: %s - Type: %s - Size: %.9f MB - Flags: %s - Owner: %s");
            FVar10.Data = local_1288.Data.AllocatorInstance.Data;
          }
          if (FVar10.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar10.Data);
          }
        }
        local_12d8 = local_12d8 + lVar11;
        iVar9 = local_1310.ArrayNum;
      }
      local_12e8 = local_12e8 + 1;
      plVar6 = (longlong *)(ulonglong)(uVar12 + 1);
      plVar16 = plVar16 + 6;
      iVar15 = local_1318[0];
    } while ((int)(uVar12 + 1) < iVar9);
  }
  lVar2 = local_12c8;
  if (param_7) {
    if (local_1300 != (longlong *)0x0) {
      (**(code **)*local_1300)(local_1300,1);
    }
  }
  else if (!param_5) {
    if (local_1338[0] != iVar15) {
      if (1 < (local_12c0->Data).ArrayNum) {
        FString::PrintfImpl(&local_1278,L" with name %s");
        plVar14 = (longlong *)&DAT_00000001;
      }
      FOutputDevice::CategorizedLogfImpl
                ((FOutputDevice *)param_8,&local_1330,Log,
                 L"Shown %d entries%s. Size: %.2f/%.2f MB (%.2f%% of total%s)");
      if ((plVar14 != (longlong *)0x0) &&
         (local_1278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1278.Data.AllocatorInstance.Data);
      }
    }
    if ((!param_6) &&
       (FOutputDevice::CategorizedLogfImpl
                  ((FOutputDevice *)param_8,&local_1330,Log,L"Total tracked resource size: %.9f MB")
       , 0 < lVar2)) {
      FOutputDevice::CategorizedLogfImpl
                ((FOutputDevice *)param_8,&local_1330,Log,L"    Non-Transient: %.9f MB");
      FOutputDevice::CategorizedLogfImpl
                ((FOutputDevice *)param_8,&local_1330,Log,L"    Transient: %.9f MB");
    }
  }
  if (local_1310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1310.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
  return;
}

// RHIDumpResourceMemoryToCSV @ 145cb7bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RHIDumpResourceMemoryToCSV(void)

{
  undefined1 auStackY_b8 [32];
  FString local_78;
  FBufferedOutputDevice local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FBufferedOutputDevice::FBufferedOutputDevice(&local_68);
  RHIDumpResourceMemory(&local_78,RRT_None,No,-1,false,false,true,&local_68);
  FBufferedOutputDevice::~FBufferedOutputDevice(&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// RHIGenerateCrossGPUPreTransferFences @ 145cb7ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
RHIGenerateCrossGPUPreTransferFences
          (TArrayView<FTransferResourceParams_const_,int> *param_1,
          TArray<FCrossGPUTransferFence_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FTransferResourceParams *pFVar1;
  FScriptContainerElement *_Dst;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  FTransferResourceParams *pFVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  longlong lVar19;
  undefined1 auVar18 [16];
  int iVar20;
  int iVar21;
  int iVar28;
  int iVar29;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulonglong uVar30;
  undefined1 in_XMM2 [16];
  undefined1 auVar31 [16];
  ulonglong uVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStackY_118 [32];
  uint local_a8 [2];
  ulonglong auStack_a0 [13];
  
  uVar7 = GNumExplicitGPUsForRendering;
  auStack_a0[3] = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (GNumExplicitGPUsForRendering != 0) {
    memset(local_a8,0,(ulonglong)GNumExplicitGPUsForRendering << 2);
  }
  pFVar12 = param_1->DataPtr;
  pFVar1 = pFVar12 + param_1->ArrayNum;
  for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 1) {
    if ((((pFVar12->SrcGPUIndex == pFVar12->DestGPUIndex) || (uVar7 <= pFVar12->SrcGPUIndex)) ||
        (uVar7 <= pFVar12->DestGPUIndex)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Param.SrcGPUIndex != Param.DestGPUIndex && Param.SrcGPUIndex < GNumExplicitGPUsForRendering&& Param.DestGPUIndex < GNumExplicitGPUsForRendering"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIContext.cpp"
                           ,0x14,L""), uVar7 = GNumExplicitGPUsForRendering, bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_a8[pFVar12->SrcGPUIndex] =
         local_a8[pFVar12->SrcGPUIndex] | 1 << (pFVar12->DestGPUIndex & 0x1f);
  }
  puVar16 = (uint *)0x0;
  uVar13 = 0;
  puVar10 = puVar16;
  uVar15 = uVar13;
  if ((3 < uVar7) && (puVar10 = (uint *)0x0, 5 < __isa_available)) {
    iVar20 = 0;
    iVar28 = 0;
    iVar21 = 0;
    iVar29 = 0;
    puVar10 = puVar16;
    do {
      iVar14 = (int)puVar10;
      auVar31 = pmovzxdq(in_XMM2,*(undefined8 *)(local_a8 + (longlong)puVar10));
      uVar15 = iVar14 + 4;
      puVar10 = (uint *)(ulonglong)uVar15;
      auVar22._0_8_ =
           CONCAT44(auVar31._4_4_ >> 1 & _UNK_151114574,
                    (uint)(auVar31._0_8_ >> 1) & ___xmm_55555555555555555555555555555555);
      auVar22._8_4_ = (uint)(auVar31._8_8_ >> 1) & _UNK_151114578;
      auVar22._12_4_ = auVar31._12_4_ >> 1 & _UNK_15111457c;
      uVar30 = auVar31._0_8_ - auVar22._0_8_;
      uVar34 = auVar31._8_8_ - auVar22._8_8_;
      uVar11 = (uint)(uVar30 >> 0x20);
      auVar32._0_8_ =
           CONCAT44(uVar11 & _UNK_151114564,(uint)uVar30 & ___xmm_33333333333333333333333333333333);
      uVar9 = (uint)(uVar34 >> 0x20);
      auVar32._8_4_ = (uint)uVar34 & _UNK_151114568;
      auVar32._12_4_ = uVar9 & _UNK_15111456c;
      auVar23._0_8_ =
           CONCAT44(uVar11 >> 2 & _UNK_151114564,
                    (uint)(uVar30 >> 2) & ___xmm_33333333333333333333333333333333);
      auVar23._8_4_ = (uint)(uVar34 >> 2) & _UNK_151114568;
      auVar23._12_4_ = uVar9 >> 2 & _UNK_15111456c;
      uVar30 = auVar23._8_8_ + auVar32._8_8_;
      lVar17 = ((ulonglong)(auVar23._0_8_ + auVar32._0_8_) >> 4) + auVar23._0_8_ + auVar32._0_8_;
      lVar19 = (uVar30 >> 4) + uVar30;
      auVar31._0_4_ = (uint)lVar17 & ___xmm_0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f;
      auVar31._4_4_ = (uint)((ulonglong)lVar17 >> 0x20) & _UNK_151114554;
      auVar31._8_4_ = (uint)lVar19 & _UNK_151114558;
      auVar31._12_4_ = (uint)((ulonglong)lVar19 >> 0x20) & _UNK_15111455c;
      auVar33 = pmovzxdq(auVar32,*(undefined8 *)(local_a8 + (iVar14 + 2)));
      auVar31 = vpmullq_avx512vl(auVar31,___xmm_01010101010101010101010101010101);
      auVar24._0_8_ = auVar31._0_8_ >> 0x38;
      auVar24._8_8_ = auVar31._8_8_ >> 0x38;
      auVar31 = pshufb(auVar24,___xmm_0b0a0908030201000b0a090803020100);
      iVar20 = auVar31._0_4_ + iVar20;
      iVar28 = auVar31._4_4_ + iVar28;
      auVar25._0_8_ =
           CONCAT44(auVar33._4_4_ >> 1 & _UNK_151114574,
                    (uint)(auVar33._0_8_ >> 1) & ___xmm_55555555555555555555555555555555);
      auVar25._8_4_ = (uint)(auVar33._8_8_ >> 1) & _UNK_151114578;
      auVar25._12_4_ = auVar33._12_4_ >> 1 & _UNK_15111457c;
      in_XMM2._0_8_ = auVar33._0_8_ - auVar25._0_8_;
      in_XMM2._8_8_ = auVar33._8_8_ - auVar25._8_8_;
      uVar11 = (uint)(in_XMM2._0_8_ >> 0x20);
      auVar33._0_8_ =
           CONCAT44(_UNK_151114564 & uVar11,
                    ___xmm_33333333333333333333333333333333 & (uint)in_XMM2._0_8_);
      auVar33._8_4_ = _UNK_151114568 & (uint)in_XMM2._8_8_;
      uVar9 = (uint)(in_XMM2._8_8_ >> 0x20);
      auVar33._12_4_ = _UNK_15111456c & uVar9;
      auVar26._0_8_ =
           CONCAT44(uVar11 >> 2 & _UNK_151114564,
                    (uint)(in_XMM2._0_8_ >> 2) & ___xmm_33333333333333333333333333333333);
      auVar26._8_4_ = (uint)(in_XMM2._8_8_ >> 2) & _UNK_151114568;
      auVar26._12_4_ = uVar9 >> 2 & _UNK_15111456c;
      uVar30 = auVar26._8_8_ + auVar33._8_8_;
      lVar17 = ((ulonglong)(auVar26._0_8_ + auVar33._0_8_) >> 4) + auVar26._0_8_ + auVar33._0_8_;
      lVar19 = (uVar30 >> 4) + uVar30;
      auVar18._0_4_ = (uint)lVar17 & ___xmm_0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f;
      auVar18._4_4_ = (uint)((ulonglong)lVar17 >> 0x20) & _UNK_151114554;
      auVar18._8_4_ = (uint)lVar19 & _UNK_151114558;
      auVar18._12_4_ = (uint)((ulonglong)lVar19 >> 0x20) & _UNK_15111455c;
      auVar31 = vpmullq_avx512vl(auVar18,___xmm_01010101010101010101010101010101);
      auVar27._0_8_ = auVar31._0_8_ >> 0x38;
      auVar27._8_8_ = auVar31._8_8_ >> 0x38;
      auVar31 = pshufb(auVar27,___xmm_0b0a0908030201000b0a090803020100);
      iVar21 = auVar31._0_4_ + iVar21;
      iVar29 = auVar31._4_4_ + iVar29;
    } while (uVar15 < (uVar7 & 0xfffffffc));
    puVar10 = (uint *)(ulonglong)(uint)(iVar21 + iVar20 + iVar29 + iVar28);
  }
  uVar11 = (uint)puVar10;
  if (uVar15 < uVar7) {
    puVar6 = local_a8 + uVar15;
    uVar30 = (ulonglong)(uVar7 - uVar15);
    do {
      uVar15 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar34 = (ulonglong)uVar15 - ((ulonglong)(uVar15 >> 1) & 0x5555555555555555);
      uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
      uVar11 = (int)puVar10 +
               (uint)(byte)(((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           );
      puVar10 = (uint *)(ulonglong)uVar11;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  iVar20 = param_2->ArrayNum;
  piVar2 = &param_2->ArrayNum;
  if (iVar20 < (int)uVar11) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11 - iVar20,&param_2->AllocatorInstance,piVar2,&param_2->ArrayMax);
    uVar7 = GNumExplicitGPUsForRendering;
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 < iVar20) {
      uVar15 = iVar20 - uVar11;
      if (((int)(uVar15 | uVar11) < 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), uVar7 = GNumExplicitGPUsForRendering, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar15 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
        iVar20 = (*piVar2 - uVar15) - uVar11;
        if (iVar20 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar15 * 8,(longlong)iVar20 << 3);
        }
        *piVar2 = *piVar2 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_2->AllocatorInstance,*piVar2,&param_2->ArrayMax);
        uVar7 = GNumExplicitGPUsForRendering;
      }
    }
  }
  puVar10 = puVar16;
  puVar6 = puVar16;
  if (uVar7 != 0) {
    do {
      uVar15 = local_a8[(longlong)puVar6];
      uVar11 = 0;
      bVar4 = uVar15 != 0;
      if (bVar4) {
        for (; (uVar15 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
        }
      }
      while (bVar4) {
        puVar5 = operator_new(0x10);
        puVar8 = puVar16;
        if (puVar5 != (uint *)0x0) {
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar8 = puVar5;
        }
        uVar9 = (uint)puVar10;
        *puVar8 = uVar11;
        puVar8[1] = (uint)puVar6;
        uVar7 = uVar13;
        if ((int)uVar9 < *piVar2) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar15 = uVar15 & ~(1 << (uVar11 & 0x1f));
        puVar10 = (uint *)(ulonglong)(uVar9 + 1);
        *(uint **)((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8) = puVar8;
        uVar11 = 0;
        bVar4 = uVar15 != 0;
        uVar7 = GNumExplicitGPUsForRendering;
        if (bVar4) {
          for (; (uVar15 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
      }
      uVar15 = (uint)puVar6 + 1;
      puVar6 = (uint *)(ulonglong)uVar15;
    } while (uVar15 < uVar7);
  }
  return;
}

// RHIGetForcedBindlessConfiguration @ 145cb83d0

TOptional<ERHIBindlessConfiguration> __cdecl RHIGetForcedBindlessConfiguration(void)

{
  TOptional<ERHIBindlessConfiguration> in_RCX;
  
  *(undefined1 *)((longlong)in_RCX + 4) = 0;
  return in_RCX;
}

// RHIGetMetalShaderLanguageVersion @ 145cb83e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl RHIGetMetalShaderLanguageVersion(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo == 0)
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].Language == LANGUAGE_Metal) {
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo ==
        0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xf4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bIsPC == 0) {
      uVar3 = IOSMetalShaderLanguageVersion;
      if (IOSMetalShaderLanguageVersion == -1) {
        bVar2 = FConfigCacheIni::GetInt
                          (GConfig,L"/Script/IOSRuntimeSettings.IOSRuntimeSettings",
                           L"MetalLanguageVersion",&IOSMetalShaderLanguageVersion,&GEngineIni);
        if (!bVar2) {
          IOSMetalShaderLanguageVersion = 0;
          return 0;
        }
        return IOSMetalShaderLanguageVersion;
      }
    }
    else {
      uVar3 = MacMetalShaderLanguageVersion;
      if (MacMetalShaderLanguageVersion == -1) {
        bVar2 = FConfigCacheIni::GetInt
                          (GConfig,L"/Script/MacTargetPlatform.MacTargetSettings",
                           L"MetalLanguageVersion",&MacMetalShaderLanguageVersion,&GEngineIni);
        if (!bVar2) {
          MacMetalShaderLanguageVersion = 0;
          return 0;
        }
        return MacMetalShaderLanguageVersion;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// RHIGetPanicDelegate @ 145cb8550

TDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> * __cdecl
RHIGetPanicDelegate(void)

{
  return &RHIPanicEvent;
}

// RHIGetPreferredClearUAVRectPSResourceType @ 145cb8560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl RHIGetPreferredClearUAVRectPSResourceType(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo == 0
      ) && (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid(Platform)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                               ,0xbb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].Language == LANGUAGE_Metal) {
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo ==
         0) && (bVar2 = FDebug::CheckVerifyFailedImpl2
                                  ("IsValid(Platform)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                   ,0x208,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bSupportsNanite == 0) {
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo
           == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Platform)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                             ,0xbb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].Language == LANGUAGE_Metal)
      {
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].
             bContainsValidPlatformInfo == 0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid(Platform)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                               ,0xf4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
        if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bIsPC == 0) {
          uVar4 = IOSMetalShaderLanguageVersion;
          if ((IOSMetalShaderLanguageVersion == -1) &&
             (bVar2 = FConfigCacheIni::GetInt
                                (GConfig,L"/Script/IOSRuntimeSettings.IOSRuntimeSettings",
                                 L"MetalLanguageVersion",&IOSMetalShaderLanguageVersion,&GEngineIni)
             , uVar4 = IOSMetalShaderLanguageVersion, !bVar2)) {
            IOSMetalShaderLanguageVersion = 0;
            return 1;
          }
        }
        else {
          uVar4 = MacMetalShaderLanguageVersion;
          if (MacMetalShaderLanguageVersion == -1) {
            bVar2 = FConfigCacheIni::GetInt
                              (GConfig,L"/Script/MacTargetPlatform.MacTargetSettings",
                               L"MetalLanguageVersion",&MacMetalShaderLanguageVersion,&GEngineIni);
            if (bVar2) {
              return (int)((uint)MacMetalShaderLanguageVersion < 4);
            }
            MacMetalShaderLanguageVersion = 0;
            return 1;
          }
        }
        return (int)(uVar4 < 4);
      }
    }
  }
  return 1;
}

// RHIGetPreviewFeatureLevel @ 145cb8770

bool __cdecl RHIGetPreviewFeatureLevel(Type *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (_TSS0 <= *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
     ) goto LAB_145cb879c;
  _Init_thread_header(&_TSS0);
  if (_TSS0 != -1) goto LAB_145cb879c;
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"FeatureLevelES31");
  if (bVar1) {
LAB_145cb8815:
    bForceFeatureLevelES3_1 = true;
  }
  else {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"FeatureLevelES3_1");
    bForceFeatureLevelES3_1 = false;
    if (bVar1) goto LAB_145cb8815;
  }
  _Init_thread_footer(&_TSS0);
LAB_145cb879c:
  if (bForceFeatureLevelES3_1 != false) {
    *param_1 = ES3_1;
    return true;
  }
  if (GRHIMobilePreviewFeatureLevel != Num) {
    *param_1 = GRHIMobilePreviewFeatureLevel;
    return true;
  }
  return false;
}

// RHIGetRuntimeBindlessConfiguration @ 145cb8840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ERHIBindlessConfiguration __cdecl RHIGetRuntimeBindlessConfiguration(EShaderPlatform param_1)

{
  ERHIBindlessConfiguration EVar1;
  
  EVar1 = DetermineRuntimeBindlessConfiguration
                    (param_1,L"BindlessConfiguration",&GRHIBindlessConfiguration);
  return EVar1;
}

// RHIGetShaderPlatformConfigurationInt @ 145cb8860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
RHIGetShaderPlatformConfigurationInt
          (int *param_1,FConfigCacheIni *param_2,EShaderPlatform param_3,wchar_t *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FName local_58 [2];
  undefined4 local_48;
  TStringBuilderBase<wchar_t> local_40;
  
  local_40.End = (wchar_t *)0x0;
  local_40.bIsDynamic = false;
  local_40.bIsExternal = false;
  local_40.Base = (wchar_t *)0x0;
  local_40.CurPos = (wchar_t *)0x0;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_3].bContainsValidPlatformInfo == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x9d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_58[0] = FGenericDataDrivenShaderPlatformInfo::Infos[param_3].Name;
  FName::ToString(local_58,&local_40);
  if ((int)((longlong)local_40.CurPos - (longlong)local_40.Base >> 1) < 1) {
    bVar3 = false;
  }
  else {
    local_48 = 0x15;
    if (local_40.End < local_40.CurPos + 0x15) {
      TStringBuilderBase<wchar_t>::Extend(&local_40,0x15);
    }
    pwVar6 = local_40.CurPos + 0x15;
    uVar2 = u_ShaderPlatformC._8_8_;
    for (pwVar5 = local_40.CurPos + 0x14; u_ShaderPlatformC._8_8_ = uVar2,
        pwVar5 != local_40.Base + 0x14; pwVar5 = pwVar5 + -1) {
      *pwVar5 = pwVar5[-0x15];
      uVar2 = u_ShaderPlatformC._8_8_;
    }
    *(undefined8 *)local_40.Base = u_ShaderPlatformC._0_8_;
    *(undefined8 *)(local_40.Base + 4) = uVar2;
    uVar2 = u_ShaderPlatformC._24_8_;
    *(undefined8 *)(local_40.Base + 8) = u_ShaderPlatformC._16_8_;
    *(undefined8 *)(local_40.Base + 0xc) = uVar2;
    *(undefined8 *)(local_40.Base + 0x10) = u_ShaderPlatformC._32_8_;
    local_40.Base[0x14] = u_ShaderPlatformC[0x14];
    pwVar5 = local_40.CurPos + 0x16;
    local_40.CurPos = pwVar6;
    if (local_40.End < pwVar5) {
      TStringBuilderBase<wchar_t>::Extend(&local_40,1);
    }
    *local_40.CurPos = L'\0';
    bVar3 = FConfigCacheIni::GetInt(param_2,local_40.Base,param_4,param_1,&GEngineIni);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_40);
  return bVar3;
}

// RHIGetShaderPlatformConfigurationString @ 145cb8a20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
RHIGetShaderPlatformConfigurationString
          (FString *param_1,FConfigCacheIni *param_2,EShaderPlatform param_3,wchar_t *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FName local_58 [2];
  undefined4 local_48;
  TStringBuilderBase<wchar_t> local_40;
  
  local_40.End = (wchar_t *)0x0;
  local_40.bIsDynamic = false;
  local_40.bIsExternal = false;
  local_40.Base = (wchar_t *)0x0;
  local_40.CurPos = (wchar_t *)0x0;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_3].bContainsValidPlatformInfo == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x9d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  local_58[0] = FGenericDataDrivenShaderPlatformInfo::Infos[param_3].Name;
  FName::ToString(local_58,&local_40);
  if ((int)((longlong)local_40.CurPos - (longlong)local_40.Base >> 1) < 1) {
    bVar3 = false;
  }
  else {
    local_48 = 0x15;
    if (local_40.End < local_40.CurPos + 0x15) {
      TStringBuilderBase<wchar_t>::Extend(&local_40,0x15);
    }
    pwVar6 = local_40.CurPos + 0x15;
    uVar2 = u_ShaderPlatformC._8_8_;
    for (pwVar5 = local_40.CurPos + 0x14; u_ShaderPlatformC._8_8_ = uVar2,
        pwVar5 != local_40.Base + 0x14; pwVar5 = pwVar5 + -1) {
      *pwVar5 = pwVar5[-0x15];
      uVar2 = u_ShaderPlatformC._8_8_;
    }
    *(undefined8 *)local_40.Base = u_ShaderPlatformC._0_8_;
    *(undefined8 *)(local_40.Base + 4) = uVar2;
    uVar2 = u_ShaderPlatformC._24_8_;
    *(undefined8 *)(local_40.Base + 8) = u_ShaderPlatformC._16_8_;
    *(undefined8 *)(local_40.Base + 0xc) = uVar2;
    *(undefined8 *)(local_40.Base + 0x10) = u_ShaderPlatformC._32_8_;
    local_40.Base[0x14] = u_ShaderPlatformC[0x14];
    pwVar5 = local_40.CurPos + 0x16;
    local_40.CurPos = pwVar6;
    if (local_40.End < pwVar5) {
      TStringBuilderBase<wchar_t>::Extend(&local_40,1);
    }
    *local_40.CurPos = L'\0';
    bVar3 = FConfigCacheIni::GetString(param_2,local_40.Base,param_4,param_1,&GEngineIni);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_40);
  return bVar3;
}

// RHIGetTrackedResourceStats @ 145cb8be0

void __cdecl
RHIGetTrackedResourceStats
          (TArray<TSharedPtr<FRHIResourceStats,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  long64 local_98 [2];
  TArray<RHIInternal::FResourceEntry,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  TArray<RHIInternal::FResourceEntry,TSizedDefaultAllocator<32>_> *local_68;
  TArray<TSharedPtr<FRHIResourceStats,1>,TSizedDefaultAllocator<32>_> *local_60;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  TArray<RHIInternal::FResourceEntry,TSizedDefaultAllocator<32>_> **local_40;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId825,"RHIGetTrackedResourceStats",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp",0x339);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId825);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
  local_res20[0] = -1;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_res18[0] = 0;
  local_res10[0] = 0;
  local_98[1] = 0;
  local_98[0] = 0;
  FString::FString(&local_78,L"");
  RHIInternal::GetTrackedResourcesInternal
            (&local_78,RRT_None,All,&local_88,local_res20,local_res18,local_res10,local_98 + 1,
             local_98);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  iVar5 = param_1->ArrayNum;
  iVar3 = local_88.ArrayNum;
  if (iVar5 < local_88.ArrayNum) {
    iVar5 = local_88.ArrayNum - iVar5;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar5,&param_1->AllocatorInstance,&param_1->ArrayNum,
                       &param_1->ArrayMax);
    memset((param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10,0,(longlong)iVar5 << 4);
  }
  else {
    if (local_88.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_88._8_8_ & 0xffffffff);
    }
    if (local_88.ArrayNum < iVar5) {
      uVar4 = iVar5 - local_88.ArrayNum;
      if (((int)(local_88.ArrayNum | uVar4) < 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar4 != 0) {
        TArray<TSharedPtr<FRHIResourceStats,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_1,iVar3,uVar4);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      }
    }
  }
  local_68 = &local_88;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`RHIGetTrackedResourceStats'::__l2::<lambda_1>,void,int>::Call;
  local_40 = &local_68;
  local_58.DataPtr = (void **)0x0;
  local_58.ArrayNum = 0;
  local_60 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_88.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_48,
             local_res10[0]._0_1_,None,&local_58);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RHIInitDefaultPixelFormatCapabilities @ 145cb8e50

void __cdecl RHIInitDefaultPixelFormatCapabilities(void)

{
  EPixelFormat EVar1;
  EPixelFormatCapabilities EVar2;
  EPixelFormatCapabilities *pEVar3;
  longlong lVar4;
  
  pEVar3 = &GPixelFormats[0].Capabilities;
  lVar4 = 0x5e;
  do {
    if ((pEVar3[2] & 1) != 0) {
      EVar1 = *(EPixelFormat *)(pEVar3 + -6);
      switch(EVar1) {
      case PF_DXT1:
      case PF_DXT3:
      case PF_DXT5:
      case PF_BC5:
      case PF_BC4:
      case PF_BC6H:
      case PF_BC7:
        *pEVar3 = *pEVar3 | (TextureFilterable|TextureGather|TextureSample|TextureLoad|
                             TextureMipmaps|AnyTexture);
        break;
      default:
        EVar2 = *pEVar3;
        *pEVar3 = EVar2 | (UAV|AllBufferFlags|AllTextureFlags);
        if ((((EVar1 != PF_DepthStencil) && (EVar1 != PF_ShadowDepth)) && (EVar1 != PF_R32_FLOAT))
           && ((EVar1 != PF_D24 && (EVar1 != PF_X24_G8)))) {
          *pEVar3 = (EVar2 | (UAV|AllBufferFlags|AllTextureFlags)) & ~DepthStencil;
        }
      }
    }
    pEVar3 = pEVar3 + 0xc;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

// RHIParseBindlessConfiguration @ 145cba1a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ERHIBindlessConfiguration __cdecl
RHIParseBindlessConfiguration(EShaderPlatform param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ERHIBindlessConfiguration EVar4;
  int iVar5;
  ERHIBindlessConfiguration local_res8 [2];
  ERHIBindlessConfiguration local_res20 [2];
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2ec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsBindless != 0) {
    local_38.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    local_res20[0] = Disabled;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    local_38._12_4_ = uStack_4c;
    local_38.Size = iVar5;
    GetBindlessConfigurationFromString(&local_38,local_res20);
    local_28.DataPtr = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    iVar1 = (param_3->Data).ArrayNum;
    local_res8[0] = Disabled;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    local_28._12_4_ = uStack_3c;
    local_28.Size = iVar5;
    GetBindlessConfigurationFromString(&local_28,local_res8);
    if ((local_res20[0] != Disabled) || (local_res8[0] != Disabled)) {
      if (local_res8[0] != Disabled) {
        local_res20[0] = local_res8[0];
      }
      return local_res20[0];
    }
  }
  return Disabled;
}

// RHIPreferredPixelFormatHint @ 145cba2c0

EPixelFormat __cdecl RHIPreferredPixelFormatHint(EPixelFormat param_1)

{
  EPixelFormat EVar1;
  
  if (GDynamicRHI != (FDynamicRHI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145cba2d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(GDynamicRHI->_padding_ + 800))();
    return EVar1;
  }
  return param_1;
}

// RHIResourceLifetimeAddRef @ 145cbab00

void __cdecl RHIResourceLifetimeAddRef(int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GRHIResourceLifetimeRefCount = GRHIResourceLifetimeRefCount + param_1;
  return;
}

// RHIResourceLifetimeReleaseRef @ 145cbab50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl RHIResourceLifetimeReleaseRef(FRHICommandListImmediate *param_1,int param_2)

{
  FRHICommandListBase **ppFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FRHICommandListBase_*_const,int> local_res18;
  uint uStack_1c;
  undefined8 local_18;
  longlong lStack_10;
  
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x5b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  GRHIResourceLifetimeRefCount = GRHIResourceLifetimeRefCount - param_2;
  if (GRHIResourceLifetimeRefCount < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("RefCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x5e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (GRHIResourceLifetimeRefCount == 0) {
    lStack_10 = (ulonglong)uStack_1c << 0x20;
    local_18 = 0;
    FRHICommandListExecutor::Submit(&GRHICommandList,&local_res18,(ERHISubmitFlags)&local_18);
    if (local_res18.DataPtr != (FRHICommandListBase **)0x0) {
      LOCK();
      ppFVar1 = local_res18.DataPtr + 6;
      iVar2 = *(int *)ppFVar1;
      *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145cbac1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((*local_res18.DataPtr)->MemManager).Top)(local_res18.DataPtr,1);
        return;
      }
    }
  }
  return;
}

// RHISetMobilePreviewFeatureLevel @ 145cbac30

void __cdecl RHISetMobilePreviewFeatureLevel(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRHIMobilePreviewFeatureLevel != Num) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GRHIMobilePreviewFeatureLevel == ERHIFeatureLevel::Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x580,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GRHIMobilePreviewFeatureLevel = param_1;
  return;
}

// RHISupportsVolumeTextureRendering @ 145cbac80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl RHISupportsVolumeTextureRendering(FStaticShaderPlatform param_1)

{
  return GRHIGlobals.SupportsVolumeTextureRendering;
}

// ReportFrameHitchToCSV @ 145cbd9f0

void __cdecl PipelineStateCache::ReportFrameHitchToCSV(void)

{
  ReportFrameHitchThisFrame = true;
  return;
}

// ResetPSOHitchTrackingStats @ 145cbe0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PipelineStateCache::ResetPSOHitchTrackingStats(void)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_RuntimeGraphicsPSOHitchCount> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_RuntimeComputePSOHitchCount> FVar6;
  FName local_res8;
  FStatMessage local_28;
  
  FVar3 = StatPtr_STAT_RuntimeGraphicsPSOHitchCount;
  if (StatPtr_STAT_RuntimeGraphicsPSOHitchCount ==
      (FThreadSafeStaticStat<FStat_STAT_RuntimeGraphicsPSOHitchCount>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_RuntimeGraphicsPSOHitchCount");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_RuntimeGraphicsPSOHitchCount>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RuntimeGraphicsPSOHitchCount,
                       *pFVar2,L"Runtime Graphics PSO Hitch Count","STATGROUP_PipelineStateCache",
                       "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_28.StatData.Pad[0] = '\0';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_28);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  GraphicsPSOCreationHitchCount = (atomic<unsigned_int>)0x0;
  FVar6 = StatPtr_STAT_RuntimeComputePSOHitchCount;
  if (StatPtr_STAT_RuntimeComputePSOHitchCount ==
      (FThreadSafeStaticStat<FStat_STAT_RuntimeComputePSOHitchCount>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_RuntimeComputePSOHitchCount");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_RuntimeComputePSOHitchCount>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RuntimeComputePSOHitchCount,
                       *pFVar2,L"Runtime Compute PSO Hitch Count","STATGROUP_PipelineStateCache",
                       "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar1 = *(FName *)FVar6;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar4 == (FThreadStats *)0x0) {
      pFVar5 = FThreadStatsPool::Get();
      pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_28.StatData.Pad[0] = '\0';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar4,&local_28);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar4->ScopeCount == 0) {
      FThreadStats::Flush(pFVar4,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar4,false,false);
    }
  }
  ComputePSOCreationHitchCount = (atomic<unsigned_int>)0x0;
  PrecachedPSOCreationHitchCount = (atomic<unsigned_int>)0x0;
  UnhealthyDriverCachePSOCreationHitchCount = (atomic<unsigned_int>)0x0;
  bDriverCacheSuspectedUnhealthy = (atomic<bool>)0x0;
  return;
}

// RetrieveGraphicsPipelineStateSortKey @ 145cbe920

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl
PipelineStateCache::RetrieveGraphicsPipelineStateSortKey(FGraphicsPipelineState *param_1)

{
  if (param_1 != (FGraphicsPipelineState *)0x0) {
    return param_1->SortKey;
  }
  return 0;
}

// SetComputePipelineState @ 145cbe9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl SetComputePipelineState(FRHIComputeCommandList *param_1,FRHIComputeShader *param_2)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  FComputePipelineState *pFVar4;
  FRHIComputePipelineState *pFVar5;
  IRHIComputeContext *pIVar6;
  undefined8 *puVar7;
  
  pFVar4 = PipelineStateCache::GetAndOrCreateComputePipelineState(param_1,param_2,false);
  if (pFVar4 != (FComputePipelineState *)0x0) {
    LOCK();
    pFVar1 = &pFVar4->InUseCount;
    iVar2 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + 1;
    UNLOCK();
    if (iVar2 + 1 < 1) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Result >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x47a,L"");
      if (bVar3) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  *(FRHIComputeShader **)&param_1->field_0x2e0 = param_2;
  if ((GRHICommandList.bLatchedBypass != false) && ((param_1->field_0x29b & 0x20) != 0)) {
    pFVar5 = ExecuteSetComputePipelineState(pFVar4);
    pIVar6 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar6->_padding_ + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000145cbea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar6,pFVar5,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x18,8);
  *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
  **(undefined8 **)&param_1->field_0x30 = puVar7;
  *(undefined8 **)&param_1->field_0x30 = puVar7 + 1;
  puVar7[1] = 0;
  puVar7[2] = pFVar4;
  *puVar7 = &___7FRHICommandSetComputePipelineState__6B_;
  return;
}

// SetGraphicsPipelineState @ 145cbef80

/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __cdecl
SetGraphicsPipelineState
          (FRHICommandList *param_1,FGraphicsPipelineStateInitializer *param_2,uint param_3,
          EApplyRendertargetOption param_4,bool param_5)

{
  code *pcVar1;
  FGraphicsPipelineState *this;
  bool bVar2;
  
  this = PipelineStateCache::GetAndOrCreateGraphicsPipelineState(param_1,param_2,param_4);
  if (this != (FGraphicsPipelineState *)0x0) {
    bVar2 = false;
    if (((param_2->field25_0xd2).Flags & 0x1000) == 0) {
      FGraphicsPipelineState::Verify_IncUse(this);
      bVar2 = ((param_2->field25_0xd2).Flags & 0x1000) == 0;
    }
    if (bVar2) {
      bVar2 = IsInRenderingThread();
      if (!bVar2) {
        bVar2 = IsInParallelRenderingThread();
        if (!bVar2) {
          bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread() || IsInParallelRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x5ce,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      FRHICommandList::SetGraphicsPipelineState
                (param_1,this,&param_2->BoundShaderState,param_3,param_5);
    }
  }
  return;
}

// SetGraphicsPipelineStateCheckApply @ 145cbf150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __cdecl
SetGraphicsPipelineStateCheckApply
          (FRHICommandList *param_1,FGraphicsPipelineStateInitializer *param_2,uint param_3,
          bool param_4)

{
  code *pcVar1;
  FGraphicsPipelineState *this;
  bool bVar2;
  
  this = PipelineStateCache::GetAndOrCreateGraphicsPipelineState(param_1,param_2,CheckApply);
  if (this != (FGraphicsPipelineState *)0x0) {
    bVar2 = false;
    if (((param_2->field25_0xd2).Flags & 0x1000) == 0) {
      FGraphicsPipelineState::Verify_IncUse(this);
      bVar2 = ((param_2->field25_0xd2).Flags & 0x1000) == 0;
    }
    if (bVar2) {
      bVar2 = IsInRenderingThread();
      if (!bVar2) {
        bVar2 = IsInParallelRenderingThread();
        if (!bVar2) {
          bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread() || IsInParallelRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x5dc,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      FRHICommandList::SetGraphicsPipelineState
                (param_1,this,&param_2->BoundShaderState,param_3,param_4);
    }
  }
  return;
}

// ShouldKeepPrecachedPSOsInMemory @ 145cc0530

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl ShouldKeepPrecachedPSOsInMemory(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (GPSOPrecacheKeepInMemoryUntilUsed == 0) {
    return false;
  }
  if ((GRHIGlobals.GpuInfo.VendorId == 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("GRHIGlobals.GpuInfo.VendorId != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x54a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (GRHIGlobals.GpuInfo.VendorId != 0x10de) {
    if ((GRHIGlobals.GpuInfo.VendorId == 0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("GRHIGlobals.GpuInfo.VendorId != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x550,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((GRHIGlobals.GpuInfo.VendorId != 0x5143) && (GRHIGlobals.GpuInfo.VendorId != 0x4d4f4351)) {
      return false;
    }
  }
  return true;
}

// ShouldTrackUsedPrecachedPSOs @ 145cc06b0

bool __cdecl ShouldTrackUsedPrecachedPSOs(void)

{
  bool bVar1;
  
  bVar1 = ShouldKeepPrecachedPSOsInMemory();
  if ((bVar1) && (GPSOPrecacheKeepInMemoryUntilUsed == 2)) {
    return true;
  }
  return false;
}

// Shutdown @ 145cc0ba0

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PipelineStateCache::Shutdown(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> aVar3;
  code *pcVar4;
  atomic<FQueuedThreadPool_*> aVar5;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *this;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *pTVar6;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *pTVar7;
  TRefCountPtr<FBaseGraphTask> TVar8;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *this_00;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *pTVar9;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *pTVar10;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *this_01;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *pTVar11;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *pTVar12;
  TUniquePtr<FPrecacheGraphicsPipelineCache,TDefaultDelete<FPrecacheGraphicsPipelineCache>_> this_02
  ;
  TUniquePtr<FPrecacheComputePipelineCache,TDefaultDelete<FPrecacheComputePipelineCache>_> this_03;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> aVar18;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar19;
  byte bVar20;
  longlong lVar21;
  longlong lVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::WaitTasksComplete
            (&GComputePipelineCache);
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  WaitTasksComplete(&GWorkGraphPipelineCache);
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  WaitTasksComplete(&GGraphicsPipelineCache);
  if (GPrecacheGraphicsPipelineCache.Ptr != (FPrecacheGraphicsPipelineCache *)0x0) {
    TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
    ::WaitTasksComplete((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                         *)GPrecacheGraphicsPipelineCache.Ptr);
  }
  if (GPrecacheComputePipelineCache.Ptr != (FPrecacheComputePipelineCache *)0x0) {
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
    ::WaitTasksComplete((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                         *)GPrecacheComputePipelineCache.Ptr);
  }
  FRayTracingPipelineCache::Shutdown(&GRayTracingPipelineCache);
  bVar14 = IsInParallelRHIThread();
  if ((bVar14) ||
     (piVar23 = GComputePipelineCache.VerifyMutex, GEnablePSOAsyncCacheConsolidation == false)) {
    piVar23 = GComputePipelineCache.VerifyMutex + 1;
  }
  LOCK();
  iVar25 = *piVar23;
  *piVar23 = *piVar23 + -1;
  UNLOCK();
  if (-1 < iVar25 + -1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar25 = 0;
  if (GComputePipelineCache.RHICompletionEvent.Reference != (FBaseGraphTask *)0x0) {
    UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport
              ((FTaskBase *)GComputePipelineCache.RHICompletionEvent.Reference);
    TVar8 = GComputePipelineCache.RHICompletionEvent;
    if (GComputePipelineCache.RHICompletionEvent.Reference != (FBaseGraphTask *)0x0) {
      GComputePipelineCache.RHICompletionEvent.Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &(TVar8.Reference)->field_0x30;
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (*(code *)**(undefined8 **)TVar8.Reference)(TVar8.Reference,1);
      }
    }
    TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
    FinishAsyncCacheConsolidation(&GComputePipelineCache);
  }
  pTVar7 = GComputePipelineCache.BackfillMap_RenderThread;
  pTVar6 = GComputePipelineCache.CurrentMap_RenderThread;
  this = GComputePipelineCache.CurrentMap;
  if ((*(int *)&(GComputePipelineCache.CurrentMap_RenderThread)->field_0x8 !=
       *(int *)&(GComputePipelineCache.CurrentMap_RenderThread)->field_0x34) ||
     (*(int *)&(GComputePipelineCache.BackfillMap_RenderThread)->field_0x8 !=
      *(int *)&(GComputePipelineCache.BackfillMap_RenderThread)->field_0x34)) {
    GComputePipelineCache.CurrentMap_RenderThread = GComputePipelineCache.CurrentMap;
    GComputePipelineCache.BackfillMap_RenderThread = GComputePipelineCache.BackfillMap;
    GComputePipelineCache.CurrentMap = pTVar6;
    GComputePipelineCache.BackfillMap = pTVar7;
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
             *)this);
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
             *)GComputePipelineCache.BackfillMap_RenderThread);
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
             *)&GComputePipelineCache.NewRenderThreadPipelineStates);
  }
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ConsolidateThreadedCaches
            (&GComputePipelineCache);
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup
            (&GComputePipelineCache);
  GComputePipelineCache.ReleasedEntries =
       TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap
                 (&GComputePipelineCache,&GComputePipelineCache.CurrentMap,
                  &GComputePipelineCache.BackfillMap);
  iVar15 = TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap
                     (&GComputePipelineCache,&GComputePipelineCache.CurrentMap,
                      &GComputePipelineCache.BackfillMap);
  GComputePipelineCache.ReleasedEntries = GComputePipelineCache.ReleasedEntries + iVar15;
  GComputePipelineCache.bDiscardAndSwap = false;
  LOCK();
  *piVar23 = *piVar23 + 1;
  UNLOCK();
  if (*piVar23 != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar14 = IsInParallelRHIThread();
  if ((bVar14) ||
     (piVar23 = GWorkGraphPipelineCache.VerifyMutex, GEnablePSOAsyncCacheConsolidation == false)) {
    piVar23 = GWorkGraphPipelineCache.VerifyMutex + 1;
  }
  LOCK();
  iVar15 = *piVar23;
  *piVar23 = *piVar23 + -1;
  UNLOCK();
  if (-1 < iVar15 + -1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (GWorkGraphPipelineCache.RHICompletionEvent.Reference != (FBaseGraphTask *)0x0) {
    UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport
              ((FTaskBase *)GWorkGraphPipelineCache.RHICompletionEvent.Reference);
    TVar8 = GWorkGraphPipelineCache.RHICompletionEvent;
    if (GWorkGraphPipelineCache.RHICompletionEvent.Reference != (FBaseGraphTask *)0x0) {
      GWorkGraphPipelineCache.RHICompletionEvent.Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &(TVar8.Reference)->field_0x30;
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (*(code *)**(undefined8 **)TVar8.Reference)(TVar8.Reference,1);
      }
    }
    TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
    FinishAsyncCacheConsolidation(&GWorkGraphPipelineCache);
  }
  pTVar10 = GWorkGraphPipelineCache.BackfillMap_RenderThread;
  pTVar9 = GWorkGraphPipelineCache.CurrentMap_RenderThread;
  this_00 = GWorkGraphPipelineCache.CurrentMap;
  if ((*(int *)&(GWorkGraphPipelineCache.CurrentMap_RenderThread)->field_0x8 !=
       *(int *)&(GWorkGraphPipelineCache.CurrentMap_RenderThread)->field_0x34) ||
     (*(int *)&(GWorkGraphPipelineCache.BackfillMap_RenderThread)->field_0x8 !=
      *(int *)&(GWorkGraphPipelineCache.BackfillMap_RenderThread)->field_0x34)) {
    GWorkGraphPipelineCache.CurrentMap_RenderThread = GWorkGraphPipelineCache.CurrentMap;
    GWorkGraphPipelineCache.BackfillMap_RenderThread = GWorkGraphPipelineCache.BackfillMap;
    GWorkGraphPipelineCache.CurrentMap = pTVar9;
    GWorkGraphPipelineCache.BackfillMap = pTVar10;
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
             *)this_00);
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
             *)GWorkGraphPipelineCache.BackfillMap_RenderThread);
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
             *)&GWorkGraphPipelineCache.NewRenderThreadPipelineStates);
  }
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ConsolidateThreadedCaches(&GWorkGraphPipelineCache);
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ProcessDelayedCleanup(&GWorkGraphPipelineCache);
  GWorkGraphPipelineCache.ReleasedEntries =
       TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
       DiscardAndSwap(&GWorkGraphPipelineCache,&GWorkGraphPipelineCache.CurrentMap,
                      &GWorkGraphPipelineCache.BackfillMap);
  iVar15 = TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
           DiscardAndSwap(&GWorkGraphPipelineCache,&GWorkGraphPipelineCache.CurrentMap,
                          &GWorkGraphPipelineCache.BackfillMap);
  GWorkGraphPipelineCache.ReleasedEntries = GWorkGraphPipelineCache.ReleasedEntries + iVar15;
  GWorkGraphPipelineCache.bDiscardAndSwap = false;
  LOCK();
  *piVar23 = *piVar23 + 1;
  UNLOCK();
  if (*piVar23 != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar14 = IsInParallelRHIThread();
  if ((bVar14) ||
     (piVar23 = GGraphicsPipelineCache.VerifyMutex, GEnablePSOAsyncCacheConsolidation == false)) {
    piVar23 = GGraphicsPipelineCache.VerifyMutex + 1;
  }
  LOCK();
  iVar15 = *piVar23;
  *piVar23 = *piVar23 + -1;
  UNLOCK();
  if (-1 < iVar15 + -1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (GGraphicsPipelineCache.RHICompletionEvent.Reference != (FBaseGraphTask *)0x0) {
    UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport
              ((FTaskBase *)GGraphicsPipelineCache.RHICompletionEvent.Reference);
    TVar8 = GGraphicsPipelineCache.RHICompletionEvent;
    if (GGraphicsPipelineCache.RHICompletionEvent.Reference != (FBaseGraphTask *)0x0) {
      GGraphicsPipelineCache.RHICompletionEvent.Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &(TVar8.Reference)->field_0x30;
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (*(code *)**(undefined8 **)TVar8.Reference)(TVar8.Reference,1);
      }
    }
    TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
    FinishAsyncCacheConsolidation(&GGraphicsPipelineCache);
  }
  pTVar12 = GGraphicsPipelineCache.BackfillMap_RenderThread;
  pTVar11 = GGraphicsPipelineCache.CurrentMap_RenderThread;
  this_01 = GGraphicsPipelineCache.CurrentMap;
  if ((*(int *)&(GGraphicsPipelineCache.CurrentMap_RenderThread)->field_0x8 !=
       *(int *)&(GGraphicsPipelineCache.CurrentMap_RenderThread)->field_0x34) ||
     (*(int *)&(GGraphicsPipelineCache.BackfillMap_RenderThread)->field_0x8 !=
      *(int *)&(GGraphicsPipelineCache.BackfillMap_RenderThread)->field_0x34)) {
    GGraphicsPipelineCache.CurrentMap_RenderThread = GGraphicsPipelineCache.CurrentMap;
    GGraphicsPipelineCache.BackfillMap_RenderThread = GGraphicsPipelineCache.BackfillMap;
    GGraphicsPipelineCache.CurrentMap = pTVar11;
    GGraphicsPipelineCache.BackfillMap = pTVar12;
    TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
             *)this_01);
    TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
             *)GGraphicsPipelineCache.BackfillMap_RenderThread);
    TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
             *)&GGraphicsPipelineCache.NewRenderThreadPipelineStates);
  }
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ConsolidateThreadedCaches(&GGraphicsPipelineCache);
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ProcessDelayedCleanup(&GGraphicsPipelineCache);
  GGraphicsPipelineCache.ReleasedEntries =
       TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
       DiscardAndSwap(&GGraphicsPipelineCache,&GGraphicsPipelineCache.CurrentMap,
                      &GGraphicsPipelineCache.BackfillMap);
  iVar15 = TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
           DiscardAndSwap(&GGraphicsPipelineCache,&GGraphicsPipelineCache.CurrentMap,
                          &GGraphicsPipelineCache.BackfillMap);
  GGraphicsPipelineCache.ReleasedEntries = GGraphicsPipelineCache.ReleasedEntries + iVar15;
  GGraphicsPipelineCache.bDiscardAndSwap = false;
  LOCK();
  *piVar23 = *piVar23 + 1;
  UNLOCK();
  if (*piVar23 != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  FPipelineFileCacheManager::Shutdown();
  iVar27 = GVertexDeclarationCache._40_4_;
  iVar15 = 0;
  uVar16 = 1;
  iVar17 = iVar15;
  if (GVertexDeclarationCache._40_4_ != 0) {
    puVar26 = (uint *)&GVertexDeclarationCache.field_0x10;
    if (GVertexDeclarationCache._32_8_ != 0) {
      puVar26 = (uint *)GVertexDeclarationCache._32_8_;
    }
    uVar24 = *puVar26;
    iVar15 = 0;
    while (uVar24 == 0) {
      lVar21 = (longlong)iVar25;
      iVar15 = iVar15 + 0x20;
      iVar25 = iVar25 + 1;
      iVar17 = GVertexDeclarationCache._40_4_;
      if ((int)(GVertexDeclarationCache._40_4_ + -1 +
               (GVertexDeclarationCache._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_145cc10d3;
      uVar24 = puVar26[lVar21 + 1];
    }
    uVar16 = -uVar24 & uVar24;
    uVar2 = (ulonglong)uVar16 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_res10 = (int)lVar21;
    iVar17 = iVar15 + -1 + local_res10;
    if ((int)GVertexDeclarationCache._40_4_ < iVar17) {
      iVar17 = GVertexDeclarationCache._40_4_;
    }
  }
LAB_145cc10d3:
  uVar24 = GVertexDeclarationCache._40_4_ & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar17;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar16,iVar25);
  iVar25 = (int)GVertexDeclarationCache._40_4_ >> 5;
  TStack_60._28_4_ = iVar17;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,GVertexDeclarationCache._8_4_ - GVertexDeclarationCache._52_4_);
  bVar20 = GVertexDeclarationCache._40_1_;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&GVertexDeclarationCache.field_0x10;
  if (((int)GVertexDeclarationCache._40_4_ < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar27 != GVertexDeclarationCache._40_4_) {
    lVar21 = 0x154be93b0;
    if (GVertexDeclarationCache._32_8_ != 0) {
      lVar21 = GVertexDeclarationCache._32_8_;
    }
    uVar16 = -1 << (bVar20 & 0x1f) & *(uint *)(lVar21 + (longlong)iVar25 * 4);
    while (uVar16 == 0) {
      lVar22 = (longlong)iVar25;
      uVar24 = uVar24 + 0x20;
      iVar25 = iVar25 + 1;
      iVar27 = GVertexDeclarationCache._40_4_;
      if ((int)(GVertexDeclarationCache._40_4_ + -1 +
               (GVertexDeclarationCache._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_145cc11e0;
      uVar16 = *(uint *)(lVar21 + 4 + lVar22 * 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_res18 = (int)lVar21;
    iVar27 = local_res18 + -1 + uVar24;
    if ((int)GVertexDeclarationCache._40_4_ < iVar27) {
      iVar27 = GVertexDeclarationCache._40_4_;
    }
  }
LAB_145cc11e0:
  do {
    if (GVertexDeclarationCache._8_4_ - GVertexDeclarationCache._52_4_ != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRHIVertexDeclaration_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == iVar27) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&GVertexDeclarationCache.field_0x10)) {
      bVar14 = 1 < (int)GVertexDeclarationCache._72_4_;
      if (!bVar14) {
        TSet<TTuple<unsigned_int,FRHIVertexDeclaration_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRHIVertexDeclaration_*,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<unsigned_int,FRHIVertexDeclaration_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRHIVertexDeclaration_*,0>,FDefaultSetAllocator>
                          *)&GVertexDeclarationCache);
      }
      GVertexDeclarationCache._8_4_ = 0;
      if (GVertexDeclarationCache._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&GVertexDeclarationCache,0,
                   (int *)&GVertexDeclarationCache.field_0xc);
      }
      GVertexDeclarationCache._48_4_ = 0xffffffff;
      GVertexDeclarationCache._52_4_ = 0;
      GVertexDeclarationCache._40_4_ = 0;
      if (0x80 < (uint)GVertexDeclarationCache._44_4_) {
        GVertexDeclarationCache._44_4_ = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&GVertexDeclarationCache.field_0x10,0);
      }
      if (bVar14) {
        GVertexDeclarationCache._72_4_ = 1;
        TSet<TTuple<unsigned_int,FRHIVertexDeclaration_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRHIVertexDeclaration_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<unsigned_int,FRHIVertexDeclaration_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRHIVertexDeclaration_*,0>,FDefaultSetAllocator>
                  *)&GVertexDeclarationCache);
      }
      aVar5 = GPSOPrecacheThreadPool.PSOPrecompileCompileThreadPool;
      LOCK();
      GPSOPrecacheThreadPool.PSOPrecompileCompileThreadPool = (atomic<FQueuedThreadPool_*>)0x0;
      UNLOCK();
      if (aVar5 != (atomic<FQueuedThreadPool_*>)0x0) {
        (**(code **)(*(longlong *)aVar5 + 0x10))(aVar5);
        (**(code **)(*(longlong *)aVar5 + 0x30))(aVar5,1);
      }
      this_02.Ptr = GPrecacheGraphicsPipelineCache.Ptr;
      if (GPrecacheGraphicsPipelineCache.Ptr != (FPrecacheGraphicsPipelineCache *)0x0) {
        GPrecacheGraphicsPipelineCache.Ptr = (FPrecacheGraphicsPipelineCache *)0x0;
        TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
        ::
        ~TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                  ((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                    *)this_02.Ptr);
        ::operator_delete(this_02.Ptr,0xb0);
      }
      this_03.Ptr = GPrecacheComputePipelineCache.Ptr;
      if (GPrecacheComputePipelineCache.Ptr != (FPrecacheComputePipelineCache *)0x0) {
        GPrecacheComputePipelineCache.Ptr = (FPrecacheComputePipelineCache *)0x0;
        TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
        ::
        ~TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                  ((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                    *)this_03.Ptr);
        ::operator_delete(this_03.Ptr,0xb0);
      }
      return;
    }
    aVar3 = *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)
             (GVertexDeclarationCache._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    LOCK();
    puVar26 = (uint *)((longlong)aVar3 + 8);
    uVar16 = *puVar26;
    *puVar26 = *puVar26 - 1;
    UNLOCK();
    if (((int)uVar16 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(OldPacked & DeletingBit) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                            ,0xa2,L"Resource is being deleted."), bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar16 = uVar16 & 0x3fffffff;
    if (uVar16 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumRefs >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                          ,0xa4,L"Reference count has underflowed.");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewValue >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                          ,0x53,L"");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (uVar16 == 1) {
      uVar16 = *(uint *)((longlong)aVar3 + 8);
      do {
        LOCK();
        uVar24 = *(uint *)((longlong)aVar3 + 8);
        bVar14 = uVar16 == uVar24;
        if (bVar14) {
          *(uint *)((longlong)aVar3 + 8) = uVar16 | 0x40000000;
          uVar24 = uVar16;
        }
        uVar16 = uVar24;
        UNLOCK();
      } while (!bVar14);
      if (((int)uVar16 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(OldPacked & DeletingBit) == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                              ,0xab,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar16 >> 0x1e & 1) == 0) {
        if ((*(byte *)((longlong)aVar3 + 0xd) & 2) == 0) {
          aVar18 = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)
                   FMemory::Malloc(0x10,8);
          *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar18 =
               (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
          *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)
           ((longlong)aVar18 + 8) = aVar3;
          TVar19 = PendingDeletes;
          do {
            *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar18 =
                 TVar19.Head;
            LOCK();
            bVar14 = TVar19.Head != PendingDeletes.Head;
            TVar13.Head = aVar18;
            if (bVar14) {
              TVar19 = PendingDeletes;
              TVar13 = PendingDeletes;
            }
            PendingDeletes.Head = TVar13.Head;
            UNLOCK();
          } while (bVar14);
        }
        else {
          aVar18 = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)
                   FMemory::Malloc(0x10,8);
          *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar18 =
               (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
          *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)
           ((longlong)aVar18 + 8) = aVar3;
          TVar19 = PendingDeletesWithLifetimeExtension;
          do {
            *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar18 =
                 TVar19.Head;
            LOCK();
            bVar14 = TVar19.Head != PendingDeletesWithLifetimeExtension.Head;
            TVar13.Head = aVar18;
            if (bVar14) {
              TVar19 = PendingDeletesWithLifetimeExtension;
              TVar13 = PendingDeletesWithLifetimeExtension;
            }
            PendingDeletesWithLifetimeExtension.Head = TVar13.Head;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// UpdateD3DMemoryStatsAndCSV @ 145cc8840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UpdateD3DMemoryStatsAndCSV(FD3DMemoryStats *param_1,bool param_2)

{
  int *piVar1;
  FName FVar2;
  uchar auVar3 [8];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_D3DUpdateVideoMemoryStats> FVar9;
  FThreadSafeStaticStat<FStat_STAT_D3DTotalVideoMemory> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_D3DUsedVideoMemory> FVar13;
  FThreadSafeStaticStat<FStat_STAT_D3DAvailableVideoMemory> FVar14;
  FThreadSafeStaticStat<FStat_STAT_D3DDemotedVideoMemory> FVar15;
  FThreadSafeStaticStat<FStat_STAT_D3DTotalSystemMemory> FVar16;
  FThreadSafeStaticStat<FStat_STAT_D3DUsedSystemMemory> FVar17;
  FThreadSafeStaticStat<FStat_STAT_D3DAvailableSystemMemory> FVar18;
  FThreadSafeStaticStat<FStat_STAT_D3DDemotedSystemMemory> FVar19;
  FNameEntryId FVar20;
  FName FVar21;
  LARGE_INTEGER local_res8;
  char local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_68 [2];
  
  local_res8.s.LowPart = 0;
  FVar9 = StatPtr_STAT_D3DUpdateVideoMemoryStats;
  local_res10 = param_2;
  if (StatPtr_STAT_D3DUpdateVideoMemoryStats ==
      (FThreadSafeStaticStat<FStat_STAT_D3DUpdateVideoMemoryStats>)0x0) {
    pFVar8 = FName::FName(&local_res20,"STAT_D3DUpdateVideoMemoryStats");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_D3DUpdateVideoMemoryStats>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DUpdateVideoMemoryStats,*pFVar8,
                       L"Video Memory stats update time","STATGROUP_D3DMemory","STATCAT_Advanced",
                       L"D3D Video Memory",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FVar20 = FVar21.ComparisonIndex.Value;
  if ((FVar20.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18 = FVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStats.cpp"
                   ,0x43);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar20.Value;
      local_res8.s.HighPart = FVar21.Number;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar5 = true;
      local_res8.s.LowPart = FVar20.Value;
      goto LAB_145cc898f;
    }
  }
  bVar5 = false;
  FVar21.ComparisonIndex.Value = 0;
  FVar21.Number = 0;
LAB_145cc898f:
  FVar10 = StatPtr_STAT_D3DTotalVideoMemory;
  if (StatPtr_STAT_D3DTotalVideoMemory == (FThreadSafeStaticStat<FStat_STAT_D3DTotalVideoMemory>)0x0
     ) {
    pFVar8 = FName::FName(&local_res18,"STAT_D3DTotalVideoMemory");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3DTotalVideoMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DTotalVideoMemory,*pFVar8,
                        L"Total Video Memory (Budget)","STATGROUP_D3DMemory","STATCAT_Advanced",
                        L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar10;
  auVar3 = (uchar  [8])param_1->BudgetLocal;
  local_res18 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_68[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_res18 = FVar2;
    local_68[0].StatData.Pad = auVar3;
    local_68[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar11,local_68);
    FStatsTrace::Set(&local_res18,(long64)auVar3);
    if (pFVar11->ScopeCount == 0) {
      FThreadStats::Flush(pFVar11,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar11,false,false);
    }
  }
  FVar13 = StatPtr_STAT_D3DUsedVideoMemory;
  if (StatPtr_STAT_D3DUsedVideoMemory == (FThreadSafeStaticStat<FStat_STAT_D3DUsedVideoMemory>)0x0)
  {
    pFVar8 = FName::FName(&local_res18,"STAT_D3DUsedVideoMemory");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_D3DUsedVideoMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DUsedVideoMemory,*pFVar8,
                        L"Used Video Memory","STATGROUP_D3DMemory","STATCAT_Advanced",
                        L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar13;
  auVar3 = (uchar  [8])param_1->UsedLocal;
  local_res18 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_68[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_res18 = FVar2;
    local_68[0].StatData.Pad = auVar3;
    local_68[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar11,local_68);
    FStatsTrace::Set(&local_res18,(long64)auVar3);
    if (pFVar11->ScopeCount == 0) {
      FThreadStats::Flush(pFVar11,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar11,false,false);
    }
  }
  FVar14 = StatPtr_STAT_D3DAvailableVideoMemory;
  if (StatPtr_STAT_D3DAvailableVideoMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3DAvailableVideoMemory>)0x0) {
    pFVar8 = FName::FName(&local_res18,"STAT_D3DAvailableVideoMemory");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_D3DAvailableVideoMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DAvailableVideoMemory,*pFVar8,
                        L"Available Video Memory","STATGROUP_D3DMemory","STATCAT_Advanced",
                        L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar14;
  auVar3 = (uchar  [8])param_1->AvailableLocal;
  local_res18 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_68[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_res18 = FVar2;
    local_68[0].StatData.Pad = auVar3;
    local_68[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar11,local_68);
    FStatsTrace::Set(&local_res18,(long64)auVar3);
    if (pFVar11->ScopeCount == 0) {
      FThreadStats::Flush(pFVar11,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar11,false,false);
    }
  }
  FVar15 = StatPtr_STAT_D3DDemotedVideoMemory;
  if (StatPtr_STAT_D3DDemotedVideoMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3DDemotedVideoMemory>)0x0) {
    pFVar8 = FName::FName(&local_res18,"STAT_D3DDemotedVideoMemory");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_D3DDemotedVideoMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DDemotedVideoMemory,*pFVar8,
                        L"Demoted Video Memory","STATGROUP_D3DMemory","STATCAT_Advanced",
                        L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar15;
  auVar3 = (uchar  [8])param_1->DemotedLocal;
  local_res18 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_68[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_res18 = FVar2;
    local_68[0].StatData.Pad = auVar3;
    local_68[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar11,local_68);
    FStatsTrace::Set(&local_res18,(long64)auVar3);
    if (pFVar11->ScopeCount == 0) {
      FThreadStats::Flush(pFVar11,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar11,false,false);
    }
  }
  if (param_1->BudgetSystem != 0) {
    FVar16 = StatPtr_STAT_D3DTotalSystemMemory;
    if (StatPtr_STAT_D3DTotalSystemMemory ==
        (FThreadSafeStaticStat<FStat_STAT_D3DTotalSystemMemory>)0x0) {
      pFVar8 = FName::FName(&local_res18,"STAT_D3DTotalSystemMemory");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_D3DTotalSystemMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DTotalSystemMemory,*pFVar8,
                          L"Total System Memory (Budget)","STATGROUP_D3DMemory","STATCAT_Advanced",
                          L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar16;
    auVar3 = (uchar  [8])param_1->BudgetSystem;
    local_res18 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_68[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_res18 = FVar2;
      local_68[0].StatData.Pad = auVar3;
      local_68[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,local_68);
      FStatsTrace::Set(&local_res18,(long64)auVar3);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar17 = StatPtr_STAT_D3DUsedSystemMemory;
    if (StatPtr_STAT_D3DUsedSystemMemory ==
        (FThreadSafeStaticStat<FStat_STAT_D3DUsedSystemMemory>)0x0) {
      pFVar8 = FName::FName(&local_res18,"STAT_D3DUsedSystemMemory");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_D3DUsedSystemMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DUsedSystemMemory,*pFVar8,
                          L"Used System Memory","STATGROUP_D3DMemory","STATCAT_Advanced",
                          L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar17;
    auVar3 = (uchar  [8])param_1->UsedSystem;
    local_res18 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_68[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_res18 = FVar2;
      local_68[0].StatData.Pad = auVar3;
      local_68[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,local_68);
      FStatsTrace::Set(&local_res18,(long64)auVar3);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar18 = StatPtr_STAT_D3DAvailableSystemMemory;
    if (StatPtr_STAT_D3DAvailableSystemMemory ==
        (FThreadSafeStaticStat<FStat_STAT_D3DAvailableSystemMemory>)0x0) {
      pFVar8 = FName::FName(&local_res18,"STAT_D3DAvailableSystemMemory");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_D3DAvailableSystemMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DAvailableSystemMemory,
                          *pFVar8,L"Available System Memory","STATGROUP_D3DMemory",
                          "STATCAT_Advanced",L"D3D Video Memory",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar18;
    auVar3 = (uchar  [8])param_1->AvailableSystem;
    local_res18 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_68[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_res18 = FVar2;
      local_68[0].StatData.Pad = auVar3;
      local_68[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,local_68);
      FStatsTrace::Set(&local_res18,(long64)auVar3);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    FVar19 = StatPtr_STAT_D3DDemotedSystemMemory;
    if (StatPtr_STAT_D3DDemotedSystemMemory ==
        (FThreadSafeStaticStat<FStat_STAT_D3DDemotedSystemMemory>)0x0) {
      pFVar8 = FName::FName(&local_res18,"STAT_D3DDemotedSystemMemory");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_D3DDemotedSystemMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3DDemotedSystemMemory,*pFVar8,
                          L"Demoted System Memory","STATGROUP_D3DMemory","STATCAT_Advanced",
                          L"D3D Video Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar19;
    auVar3 = (uchar  [8])param_1->DemotedSystem;
    local_res18 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_68[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_res18 = FVar2;
      local_68[0].StatData.Pad = auVar3;
      local_68[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,local_68);
      FStatsTrace::Set(&local_res18,(long64)auVar3);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  if (local_res10 != '\0') {
    if (__CsvProfilerStat88 == false) {
      FCsvProfilerTrace::OutputInlineStat("LocalBudgetMB",_GCsvCategory_GPUMem.Index);
      __CsvProfilerStat88 = true;
    }
    dVar7 = __real_3eb0000000000000;
    FCsvProfiler::RecordCustomStat
              ("LocalBudgetMB",_GCsvCategory_GPUMem.Index,
               (float)((double)param_1->BudgetLocal * __real_3eb0000000000000),Set);
    if (__CsvProfilerStat89 == false) {
      FCsvProfilerTrace::OutputInlineStat("LocalUsedMB",_GCsvCategory_GPUMem.Index);
      __CsvProfilerStat89 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("LocalUsedMB",_GCsvCategory_GPUMem.Index,(float)((double)param_1->UsedLocal * dVar7),
               Set);
    if (param_1->BudgetSystem != 0) {
      if (__CsvProfilerStat93 == false) {
        FCsvProfilerTrace::OutputInlineStat("SystemBudgetMB",_GCsvCategory_GPUMem.Index);
        __CsvProfilerStat93 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("SystemBudgetMB",_GCsvCategory_GPUMem.Index,
                 (float)((double)param_1->BudgetSystem * dVar7),Set);
      if (__CsvProfilerStat94 == false) {
        FCsvProfilerTrace::OutputInlineStat("SystemUsedMB",_GCsvCategory_GPUMem.Index);
        __CsvProfilerStat94 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("SystemUsedMB",_GCsvCategory_GPUMem.Index,
                 (float)((double)param_1->UsedSystem * dVar7),Set);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
      local_68[0].NameAndInfo.Index.Value = local_res8.s.LowPart;
      local_68[0].NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_68[0].StatData.Pad[4] = '\0';
      local_68[0].StatData.Pad[5] = '\0';
      local_68[0].StatData.Pad[6] = '\0';
      local_68[0].StatData.Pad[7] = '\0';
      local_68[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_68[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_68[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_68[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar11,local_68);
      piVar1 = &pFVar11->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar11,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  return;
}

// ValidateGraphicsPipelineStateInitializer @ 145ccabf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl ValidateGraphicsPipelineStateInitializer(FGraphicsPipelineStateInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->BoundShaderState).VertexShaderRHI == (FRHIVertexShader *)0x0) {
    if (GRHIGlobals.SupportsMeshShadersTier0) {
      if (((param_1->BoundShaderState).MeshShaderRHI == (FRHIMeshShader *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Initializer.BoundShaderState.VertexShaderRHI || Initializer.BoundShaderState.GetMeshShader()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x1034,L"GraphicsPipelineState must include a vertex or mesh shader"),
         bVar2)) {
code_r0x000145ccac5b:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Initializer.BoundShaderState.VertexShaderRHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x1038,L"GraphicsPipelineState must include a vertex shader");
      if (bVar2) goto code_r0x000145ccac5b;
    }
  }
  if ((((param_1->DepthStencilState == (FRHIDepthStencilState *)0x0) ||
       (param_1->BlendState == (FRHIBlendState *)0x0)) ||
      (param_1->RasterizerState == (FRHIRasterizerState *)0x0)) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Initializer.DepthStencilState && Initializer.BlendState && Initializer.RasterizerState"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x103b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ValidateRayTracingPipelinePayloadMask @ 145ccacb0

bool __cdecl ValidateRayTracingPipelinePayloadMask(FRayTracingPipelineStateInitializer *param_1)

{
  uint *puVar1;
  FRHIRayTracingShader **ppFVar2;
  int iVar3;
  FRHIRayTracingShader *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FRHIRayTracingShader **ppFVar8;
  uint uVar9;
  
  iVar3 = (param_1->RayGenTable).ArrayNum;
  if (iVar3 == 0) {
    return true;
  }
  ppFVar8 = (param_1->RayGenTable).DataPtr;
  uVar9 = 0;
  puVar1 = (uint *)((longlong)&param_1->_padding_ + 4);
  ppFVar2 = ppFVar8 + iVar3;
  while( true ) {
    if (ppFVar8 == ppFVar2) {
      ppFVar8 = (param_1->MissTable).DataPtr;
      ppFVar2 = ppFVar8 + (param_1->MissTable).ArrayNum;
      while( true ) {
        if (ppFVar8 == ppFVar2) {
          ppFVar8 = (param_1->HitGroupTable).DataPtr;
          ppFVar2 = ppFVar8 + (param_1->HitGroupTable).ArrayNum;
          while( true ) {
            if (ppFVar8 == ppFVar2) {
              ppFVar8 = (param_1->CallableTable).DataPtr;
              ppFVar2 = ppFVar8 + (param_1->CallableTable).ArrayNum;
              while( true ) {
                if (ppFVar8 == ppFVar2) {
                  return true;
                }
                pFVar4 = *ppFVar8;
                if ((pFVar4 == (FRHIRayTracingShader *)0x0) &&
                   (bVar6 = FDebug::CheckVerifyFailedImpl2
                                      ("Shader != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                       ,0xf9c,
                                       L"Callable shader table should not contain any NULL entries")
                   , bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                if (((pFVar4->RayTracingPayloadType & uVar9) != pFVar4->RayTracingPayloadType) &&
                   (bVar6 = FDebug::CheckVerifyFailedImpl2
                                      ("(Shader->RayTracingPayloadType & BaseRayTracingPayloadType) == Shader->RayTracingPayloadType"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                       ,4000,
                                       L"Mismatched Ray Tracing Payload type among callable shaders! Found payload type %d but expecting %d"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                if ((*(uint *)((longlong)&param_1->_padding_ + 4) < pFVar4->RayTracingPayloadSize)
                   && (bVar6 = FDebug::CheckVerifyFailedImpl2
                                         ("Shader->RayTracingPayloadSize <= InInitializer.MaxPayloadSizeInBytes"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                          ,0xfa4,
                                          L"Raytracing shader has a %u byte payload, but RTPSO has max set to %u"
                                         ), bVar6)) break;
                ppFVar8 = ppFVar8 + 1;
              }
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            pFVar4 = *ppFVar8;
            if ((pFVar4 == (FRHIRayTracingShader *)0x0) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("Shader != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                   ,0xf90,
                                   L"Hit group shader table should not contain any NULL entries"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            if (((pFVar4->RayTracingPayloadType & uVar9) != pFVar4->RayTracingPayloadType) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("(Shader->RayTracingPayloadType & BaseRayTracingPayloadType) == Shader->RayTracingPayloadType"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                   ,0xf94,
                                   L"Mismatched Ray Tracing Payload type among hitgroup shaders! Found payload type %d but expecting %d"
                                  ), bVar6)) break;
            if ((*(uint *)((longlong)&param_1->_padding_ + 4) < pFVar4->RayTracingPayloadSize) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("Shader->RayTracingPayloadSize <= InInitializer.MaxPayloadSizeInBytes"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                   ,0xf98,
                                   L"Raytracing shader has a %u byte payload, but RTPSO has max set to %u"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            ppFVar8 = ppFVar8 + 1;
          }
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar4 = *ppFVar8;
        if ((pFVar4 == (FRHIRayTracingShader *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Shader != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                               ,0xf84,L"Miss shader table should not contain any NULL entries"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (((pFVar4->RayTracingPayloadType & uVar9) != pFVar4->RayTracingPayloadType) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Shader->RayTracingPayloadType & BaseRayTracingPayloadType) == Shader->RayTracingPayloadType"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                               ,0xf88,
                               L"Mismatched Ray Tracing Payload type among miss shaders! Found payload type %d but expecting %d"
                              ), bVar6)) break;
        if ((*puVar1 < pFVar4->RayTracingPayloadSize) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("Shader->RayTracingPayloadSize <= InInitializer.MaxPayloadSizeInBytes"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                               ,0xf8c,
                               L"Raytracing shader has a %u byte payload, but RTPSO has max set to %u"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        ppFVar8 = ppFVar8 + 1;
      }
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar4 = *ppFVar8;
    if ((pFVar4 == (FRHIRayTracingShader *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Shader != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0xf7b,L"RayGen shader table should not contain any NULL entries."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar9 = uVar9 | pFVar4->RayTracingPayloadType;
    if ((*puVar1 < pFVar4->RayTracingPayloadSize) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Shader->RayTracingPayloadSize <= InInitializer.MaxPayloadSizeInBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0xf80,
                           L"Raytracing shader has a %u byte payload, but RTPSO has max set to %u"),
       bVar6)) break;
    ppFVar8 = ppFVar8 + 1;
  }
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return (bool)uVar7;
}

// WaitForAllTasks @ 145ccb900

void __cdecl PipelineStateCache::WaitForAllTasks(void)

{
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::WaitTasksComplete
            (&GComputePipelineCache);
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  WaitTasksComplete(&GWorkGraphPipelineCache);
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  WaitTasksComplete(&GGraphicsPipelineCache);
  if (GPrecacheGraphicsPipelineCache.Ptr != (FPrecacheGraphicsPipelineCache *)0x0) {
    TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
    ::WaitTasksComplete((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                         *)GPrecacheGraphicsPipelineCache.Ptr);
  }
  if (GPrecacheComputePipelineCache.Ptr != (FPrecacheComputePipelineCache *)0x0) {
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
    ::WaitTasksComplete((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                         *)GPrecacheComputePipelineCache.Ptr);
    return;
  }
  return;
}

// IMPLEMENT_MODULE_RHI @ 145ccd7b0

void __cdecl IMPLEMENT_MODULE_RHI(void)

{
  return;
}

// DefaultTexture'' @ 1503cc0e0

void __cdecl `dynamic_atexit_destructor_for_'FRHITextureReference::DefaultTexture__(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  TRefCountPtr<FRHITexture> this;
  bool bVar4;
  uint uVar5;
  
  this.Reference = FRHITextureReference::DefaultTexture.Reference;
  if (FRHITextureReference::DefaultTexture.Reference == (FRHITexture *)0x0) {
    return;
  }
  LOCK();
  plVar1 = &(FRHITextureReference::DefaultTexture.Reference)->_padding_;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)(uint)lVar3 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = (uint)lVar3 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this.Reference);
  }
  return;
}

// MemoryPool'' @ 1503cc100

void __cdecl
`dynamic_atexit_destructor_for_'FRHICommandListExecutor::FTaskPipe::FTask::MemoryPool__(void)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)
                       &FRHICommandListExecutor::FTaskPipe::FTask::MemoryPool);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_FCompilePipelineStateTask'' @ 1503cc160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_FCompilePipelineStateTask__(void)

{
  CPrio_FCompilePipelineStateTask.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CPrio_FCompilePipelineStateTask.Variable);
  if (CPrio_FCompilePipelineStateTask.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_FCompilePipelineStateTask.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_FCompilePipelineStateTask.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_FCompilePipelineStateTask.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_SceneRenderingTask'' @ 1503cc1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_SceneRenderingTask__(void)

{
  CPrio_SceneRenderingTask.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CPrio_SceneRenderingTask.Variable);
  if (CPrio_SceneRenderingTask.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_SceneRenderingTask.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_SceneRenderingTask.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_SceneRenderingTask.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarCreatePSOsOnRHIThread'' @ 1503cc200

void __cdecl _dynamic_atexit_destructor_for__CVarCreatePSOsOnRHIThread__(void)

{
  CVarCreatePSOsOnRHIThread._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCreatePSOsOnRHIThread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableEngineAndAppRegistration'' @ 1503cc220

void __cdecl _dynamic_atexit_destructor_for__CVarDisableEngineAndAppRegistration__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDisableEngineAndAppRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableBindless'' @ 1503cc240

void __cdecl _dynamic_atexit_destructor_for__CVarEnableBindless__(void)

{
  CVarEnableBindless._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableBindless);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnablePSOAsyncCacheConsolidation'' @ 1503cc260

void __cdecl _dynamic_atexit_destructor_for__CVarEnablePSOAsyncCacheConsolidation__(void)

{
  CVarEnablePSOAsyncCacheConsolidation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnablePSOAsyncCacheConsolidation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUCrashDebugging'' @ 1503cc280

void __cdecl UE::RHI::_dynamic_atexit_destructor_for__CVarGPUCrashDebugging__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUCrashDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUCrashDebuggingBreadcrumbs'' @ 1503cc2a0

void __cdecl UE::RHI::_dynamic_atexit_destructor_for__CVarGPUCrashDebuggingBreadcrumbs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUCrashDebuggingBreadcrumbs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUCrashOnOutOfMemory'' @ 1503cc2c0

void __cdecl _dynamic_atexit_destructor_for__CVarGPUCrashOnOutOfMemory__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUCrashOnOutOfMemory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGraphicsAdapter'' @ 1503cc2e0

void __cdecl _dynamic_atexit_destructor_for__CVarGraphicsAdapter__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGraphicsAdapter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOEvictionTime'' @ 1503cc300

void __cdecl _dynamic_atexit_destructor_for__CVarPSOEvictionTime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOEvictionTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecacheEnableCompileStats'' @ 1503cc320

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecacheEnableCompileStats__(void)

{
  CVarPSOPrecacheEnableCompileStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOPrecacheEnableCompileStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecacheKeepInMemoryComputeMaxNum'' @ 1503cc340

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecacheKeepInMemoryComputeMaxNum__(void)

{
  CVarPSOPrecacheKeepInMemoryComputeMaxNum._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOPrecacheKeepInMemoryComputeMaxNum);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecacheKeepInMemoryGraphicsMaxNum'' @ 1503cc360

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecacheKeepInMemoryGraphicsMaxNum__(void)

{
  CVarPSOPrecacheKeepInMemoryGraphicsMaxNum._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOPrecacheKeepInMemoryGraphicsMaxNum);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecacheKeepInMemoryUntilUsed'' @ 1503cc380

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecacheKeepInMemoryUntilUsed__(void)

{
  CVarPSOPrecacheKeepInMemoryUntilUsed._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOPrecacheKeepInMemoryUntilUsed);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecachePermitPriorityEscalation'' @ 1503cc3a0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecachePermitPriorityEscalation__(void)

{
  CVarPSOPrecachePermitPriorityEscalation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOPrecachePermitPriorityEscalation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecacheUnhealthyCacheHitchThresholdMs'' @ 1503cc3c0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecacheUnhealthyCacheHitchThresholdMs__(void)

{
  CVarPSOPrecacheUnhealthyCacheHitchThresholdMs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOPrecacheUnhealthyCacheHitchThresholdMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecacheUnhealthyCacheMaxHitches'' @ 1503cc3e0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecacheUnhealthyCacheMaxHitches__(void)

{
  CVarPSOPrecacheUnhealthyCacheMaxHitches._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOPrecacheUnhealthyCacheMaxHitches);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecaching'' @ 1503cc400

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecaching__(void)

{
  CVarPSOPrecaching._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOPrecaching);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSORuntimeCreationHitchThreshold'' @ 1503cc420

void __cdecl _dynamic_atexit_destructor_for__CVarPSORuntimeCreationHitchThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSORuntimeCreationHitchThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOWaitForHighPriorityRequestsOnly'' @ 1503cc440

void __cdecl _dynamic_atexit_destructor_for__CVarPSOWaitForHighPriorityRequestsOnly__(void)

{
  CVarPSOWaitForHighPriorityRequestsOnly._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOWaitForHighPriorityRequestsOnly);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrecompileThreadPoolThreadPriority'' @ 1503cc460

void __cdecl _dynamic_atexit_destructor_for__CVarPrecompileThreadPoolThreadPriority__(void)

{
  CVarPrecompileThreadPoolThreadPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPrecompileThreadPoolThreadPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHICmdBufferWriteLocks'' @ 1503cc480

void __cdecl _dynamic_atexit_destructor_for__CVarRHICmdBufferWriteLocks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHICmdBufferWriteLocks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHICmdBypass'' @ 1503cc4a0

void __cdecl _dynamic_atexit_destructor_for__CVarRHICmdBypass__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHICmdBypass);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHICmdMaxAccelerationStructureBuildScratchSize'' @ 1503cc4c0

void __cdecl
_dynamic_atexit_destructor_for__CVarRHICmdMaxAccelerationStructureBuildScratchSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHICmdMaxAccelerationStructureBuildScratchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHICmdParallelTranslateCombineSingleAndParallel'' @ 1503cc4e0

void __cdecl
_dynamic_atexit_destructor_for__CVarRHICmdParallelTranslateCombineSingleAndParallel__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHICmdParallelTranslateCombineSingleAndParallel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHICmdParallelTranslateEnable'' @ 1503cc500

void __cdecl _dynamic_atexit_destructor_for__CVarRHICmdParallelTranslateEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHICmdParallelTranslateEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHICmdParallelTranslateMaxCommandsPerTranslate'' @ 1503cc520

void __cdecl
_dynamic_atexit_destructor_for__CVarRHICmdParallelTranslateMaxCommandsPerTranslate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRHICmdParallelTranslateMaxCommandsPerTranslate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHICmdWidth'' @ 1503cc540

void __cdecl _dynamic_atexit_destructor_for__CVarRHICmdWidth__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHICmdWidth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRHISetGPUCaptureOptions'' @ 1503cc560

void __cdecl _dynamic_atexit_destructor_for__CVarRHISetGPUCaptureOptions__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRHISetGPUCaptureOptions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRTPSOCacheSize'' @ 1503cc580

void __cdecl _dynamic_atexit_destructor_for__CVarRTPSOCacheSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRTPSOCacheSize);
  return;
}

// `dynamic_atexit_destructor_for_'ComputePipelineCacheMissesHistory'' @ 1503cc5a0

void __cdecl _dynamic_atexit_destructor_for__ComputePipelineCacheMissesHistory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ComputePipelineCacheMissesHistory.AllocatorInstance.Data;
  if (ComputePipelineCacheMissesHistory.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ComputePipelineCacheMissesHistory.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DumpPipelineCmd'' @ 1503cc5c0

void __cdecl _dynamic_atexit_destructor_for__DumpPipelineCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpPipelineCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarAsyncPipelineCompile'' @ 1503cc5e0

void __cdecl _dynamic_atexit_destructor_for__GCVarAsyncPipelineCompile__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarAsyncPipelineCompile);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarRHIRenderPass'' @ 1503cc600

void __cdecl _dynamic_atexit_destructor_for__GCVarRHIRenderPass__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarRHIRenderPass);
  return;
}

// `dynamic_atexit_destructor_for_'GComputePipelineCache'' @ 1503cc620

void __cdecl _dynamic_atexit_destructor_for__GComputePipelineCache__(void)

{
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
  ~TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>(&GComputePipelineCache);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpRHIMemoryCmd'' @ 1503cc640

void __cdecl _dynamic_atexit_destructor_for__GDumpRHIMemoryCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpRHIMemoryCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpRHIResourceCountsCmd'' @ 1503cc660

void __cdecl _dynamic_atexit_destructor_for__GDumpRHIResourceCountsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpRHIResourceCountsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpRHIResourceMemoryCmd'' @ 1503cc680

void __cdecl _dynamic_atexit_destructor_for__GDumpRHIResourceMemoryCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpRHIResourceMemoryCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GGraphicsPipelineCache'' @ 1503cc6a0

void __cdecl _dynamic_atexit_destructor_for__GGraphicsPipelineCache__(void)

{
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ~TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
            (&GGraphicsPipelineCache);
  return;
}

// `dynamic_atexit_destructor_for_'GLockTracker'' @ 1503cc6c0

void __cdecl _dynamic_atexit_destructor_for__GLockTracker__(void)

{
  if (GLockTracker.OutstandingLocks.AllocatorInstance.SecondaryData !=
      (ForElementType<FLockTracker::FLockParams>)0x0) {
    FMemory::Free((void *)GLockTracker.OutstandingLocks.AllocatorInstance.SecondaryData);
  }
                    /* WARNING: Could not recover jumptable at 0x0001503cc6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GLockTracker);
  return;
}

// `dynamic_atexit_destructor_for_'GPSOPrecacheThreadPool'' @ 1503cc6f0

void __cdecl _dynamic_atexit_destructor_for__GPSOPrecacheThreadPool__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (GPSOPrecacheThreadPool.PSOPrecompileCompileThreadPool != (atomic<FQueuedThreadPool_*>)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("PSOPrecompileCompileThreadPool.load() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x1b4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001503cc732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GPSOPrecacheThreadPool);
  return;
}

// `dynamic_atexit_destructor_for_'GPSOPrecompileThreadPoolPercentOfHardwareThreadsVar'' @ 1503cc740

void __cdecl
_dynamic_atexit_destructor_for__GPSOPrecompileThreadPoolPercentOfHardwareThreadsVar__(void)

{
  GPSOPrecompileThreadPoolPercentOfHardwareThreadsVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GPSOPrecompileThreadPoolPercentOfHardwareThreadsVar);
  return;
}

// `dynamic_atexit_destructor_for_'GPSOPrecompileThreadPoolSizeMaxVar'' @ 1503cc760

void __cdecl _dynamic_atexit_destructor_for__GPSOPrecompileThreadPoolSizeMaxVar__(void)

{
  GPSOPrecompileThreadPoolSizeMaxVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GPSOPrecompileThreadPoolSizeMaxVar)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'GPSOPrecompileThreadPoolSizeMinVar'' @ 1503cc780

void __cdecl _dynamic_atexit_destructor_for__GPSOPrecompileThreadPoolSizeMinVar__(void)

{
  GPSOPrecompileThreadPoolSizeMinVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GPSOPrecompileThreadPoolSizeMinVar)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'GPSOPrecompileThreadPoolSizeVar'' @ 1503cc7a0

void __cdecl _dynamic_atexit_destructor_for__GPSOPrecompileThreadPoolSizeVar__(void)

{
  GPSOPrecompileThreadPoolSizeVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GPSOPrecompileThreadPoolSizeVar);
  return;
}

// `dynamic_atexit_destructor_for_'GPrecacheComputePipelineCache'' @ 1503cc7c0

void __cdecl _dynamic_atexit_destructor_for__GPrecacheComputePipelineCache__(void)

{
  TUniquePtr<FPrecacheComputePipelineCache,TDefaultDelete<FPrecacheComputePipelineCache>_> TVar1;
  
  TVar1.Ptr = GPrecacheComputePipelineCache.Ptr;
  if (GPrecacheComputePipelineCache.Ptr != (FPrecacheComputePipelineCache *)0x0) {
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
    ::
    ~TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
              ((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                *)GPrecacheComputePipelineCache.Ptr);
    operator_delete(TVar1.Ptr,0xb0);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GPrecacheGraphicsPipelineCache'' @ 1503cc800

void __cdecl _dynamic_atexit_destructor_for__GPrecacheGraphicsPipelineCache__(void)

{
  TUniquePtr<FPrecacheGraphicsPipelineCache,TDefaultDelete<FPrecacheGraphicsPipelineCache>_> TVar1;
  
  TVar1.Ptr = GPrecacheGraphicsPipelineCache.Ptr;
  if (GPrecacheGraphicsPipelineCache.Ptr != (FPrecacheGraphicsPipelineCache *)0x0) {
    TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
    ::
    ~TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
              ((TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                *)GPrecacheGraphicsPipelineCache.Ptr);
    operator_delete(TVar1.Ptr,0xb0);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GRHIBindlessConfiguration'' @ 1503cc840

void __cdecl _dynamic_atexit_destructor_for__GRHIBindlessConfiguration__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GRHIBindlessConfiguration.Data.AllocatorInstance.Data;
  if (GRHIBindlessConfiguration.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GRHIBindlessConfiguration.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GRHICommandList'' @ 1503cc860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GRHICommandList__(void)

{
  FRHICommandListExecutor::~FRHICommandListExecutor(&GRHICommandList);
  return;
}

// `dynamic_atexit_destructor_for_'GRHIGlobals'' @ 1503cc880

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GRHIGlobals__(void)

{
  if (GRHIGlobals.GPUTraceFileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GRHIGlobals.GPUTraceFileName.Data.AllocatorInstance.Data);
  }
  if (GRHIGlobals.GpuInfo.AdapterDriverDate.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GRHIGlobals.GpuInfo.AdapterDriverDate.Data.AllocatorInstance.Data);
  }
  if (GRHIGlobals.GpuInfo.AdapterUserDriverVersion.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GRHIGlobals.GpuInfo.AdapterUserDriverVersion.Data.AllocatorInstance.Data);
  }
  if (GRHIGlobals.GpuInfo.AdapterInternalDriverVersion.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GRHIGlobals.GpuInfo.AdapterInternalDriverVersion.Data.AllocatorInstance.Data);
  }
  if (GRHIGlobals.GpuInfo.AdapterName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(GRHIGlobals.GpuInfo.AdapterName.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GRHILockTracker'' @ 1503cc8f0

void __cdecl _dynamic_atexit_destructor_for__GRHILockTracker__(void)

{
  ForElementType<FRHILockTracker::FUnlockFenceParams> FVar1;
  
  FVar1 = (ForElementType<FRHILockTracker::FUnlockFenceParams>)0x154be9aa8;
  if (GRHILockTracker.OutstandingUnlocks.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHILockTracker::FUnlockFenceParams>)0x0) {
    FVar1 = GRHILockTracker.OutstandingUnlocks.AllocatorInstance.SecondaryData;
  }
  DestructItems<FRHILockTracker::FUnlockFenceParams,int>
            ((FUnlockFenceParams *)FVar1,GRHILockTracker.OutstandingUnlocks.ArrayNum);
  if (GRHILockTracker.OutstandingUnlocks.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHILockTracker::FUnlockFenceParams>)0x0) {
    FMemory::Free((void *)GRHILockTracker.OutstandingUnlocks.AllocatorInstance.SecondaryData);
  }
  if (GRHILockTracker.OutstandingLocks.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHILockTracker::FLockParams>)0x0) {
    FMemory::Free((void *)GRHILockTracker.OutstandingLocks.AllocatorInstance.SecondaryData);
  }
  if (GRHILockTracker.OutstandingTextureLocks.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHILockTracker::FTextureLockParams>)0x0) {
    FMemory::Free((void *)GRHILockTracker.OutstandingTextureLocks.AllocatorInstance.SecondaryData);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GRHIResourceTrackingCriticalSection'' @ 1503cc960

void __cdecl _dynamic_atexit_destructor_for__GRHIResourceTrackingCriticalSection__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cc967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
  return;
}

// `dynamic_atexit_destructor_for_'GRHIThreadOnTasksCritical'' @ 1503cc980

void __cdecl _dynamic_atexit_destructor_for__GRHIThreadOnTasksCritical__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cc987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical);
  return;
}

// `dynamic_atexit_destructor_for_'GRHITrackedResources'' @ 1503cc9a0

void __cdecl _dynamic_atexit_destructor_for__GRHITrackedResources__(void)

{
  GRHITrackedResources.HashSize = 0;
  if (GRHITrackedResources.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)GRHITrackedResources.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FRHIResource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FRHIResource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GRHITrackedResources.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'GRayTracingPipelineCache'' @ 1503cc9e0

void __cdecl _dynamic_atexit_destructor_for__GRayTracingPipelineCache__(void)

{
  GRayTracingPipelineCache.PartialPipelines._72_4_ = 0;
  if (GRayTracingPipelineCache.PartialPipelines._64_8_ != 0) {
    FMemory::Free((void *)GRayTracingPipelineCache.PartialPipelines._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GRayTracingPipelineCache.PartialPipelines);
  GRayTracingPipelineCache.FullPipelines._72_4_ = 0;
  if (GRayTracingPipelineCache.FullPipelines._64_8_ != 0) {
    FMemory::Free((void *)GRayTracingPipelineCache.FullPipelines._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRayTracingPipelineStateSignature,FRayTracingPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GRayTracingPipelineCache.FullPipelines);
                    /* WARNING: Could not recover jumptable at 0x0001503cca3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GRayTracingPipelineCache);
  return;
}

// `dynamic_atexit_destructor_for_'GVertexDeclarationCache'' @ 1503cca50

void __cdecl _dynamic_atexit_destructor_for__GVertexDeclarationCache__(void)

{
  GVertexDeclarationCache._72_4_ = 0;
  if (GVertexDeclarationCache._64_8_ != 0) {
    FMemory::Free((void *)GVertexDeclarationCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRHIVertexDeclaration_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRHIVertexDeclaration_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRHIVertexDeclaration_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GVertexDeclarationCache);
  return;
}

// `dynamic_atexit_destructor_for_'GVertexDeclarationLock'' @ 1503cca90

void __cdecl _dynamic_atexit_destructor_for__GVertexDeclarationLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cca97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GVertexDeclarationLock);
  return;
}

// `dynamic_atexit_destructor_for_'GWorkGraphPipelineCache'' @ 1503ccab0

void __cdecl _dynamic_atexit_destructor_for__GWorkGraphPipelineCache__(void)

{
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ~TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
            (&GWorkGraphPipelineCache);
  return;
}

// `dynamic_atexit_destructor_for_'GraphicsPipelineCacheMissesHistory'' @ 1503ccad0

void __cdecl _dynamic_atexit_destructor_for__GraphicsPipelineCacheMissesHistory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GraphicsPipelineCacheMissesHistory.AllocatorInstance.Data;
  if (GraphicsPipelineCacheMissesHistory.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GraphicsPipelineCacheMissesHistory.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogPSOHitching'' @ 1503ccaf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPSOHitching__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPSOHitching);
  return;
}

// `dynamic_atexit_destructor_for_'LogRHI'' @ 1503ccb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRHI);
  return;
}

// `dynamic_atexit_destructor_for_'PendingDeletes'' @ 1503ccb30

void __cdecl _dynamic_atexit_destructor_for__PendingDeletes__(void)

{
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> aVar1;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar2;
  
  TVar2.Head = PendingDeletes.Head;
  if (PendingDeletes.Head != (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0)
  {
    LOCK();
    PendingDeletes.Head = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
    UNLOCK();
    while (TVar2.Head != (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0) {
                    /* WARNING: Load size is inaccurate */
      aVar1 = *TVar2.Head;
      FMemory::Free((void *)TVar2.Head);
      TVar2.Head = aVar1;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'PendingDeletesWithLifetimeExtension'' @ 1503ccb80

void __cdecl _dynamic_atexit_destructor_for__PendingDeletesWithLifetimeExtension__(void)

{
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> aVar1;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar2;
  
  TVar2.Head = PendingDeletesWithLifetimeExtension.Head;
  if (PendingDeletesWithLifetimeExtension.Head !=
      (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0) {
    LOCK();
    PendingDeletesWithLifetimeExtension.Head =
         (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
    UNLOCK();
    while (TVar2.Head != (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0) {
                    /* WARNING: Load size is inaccurate */
      aVar1 = *TVar2.Head;
      FMemory::Free((void *)TVar2.Head);
      TVar2.Head = aVar1;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'RHIPanicEvent'' @ 1503ccbd0

void __cdecl _dynamic_atexit_destructor_for__RHIPanicEvent__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&RHIPanicEvent,
             (FWriteAccessScope *)&local_28);
  if ((RHIPanicEvent._16_4_ != 0) && (RHIPanicEvent._8_8_ != 0)) {
    (*(code *)**(undefined8 **)RHIPanicEvent._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&RHIPanicEvent.field_0x8,0,0,0x10);
    RHIPanicEvent._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (RHIPanicEvent._8_8_ != 0) {
    FMemory::Free((void *)RHIPanicEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&RHIPanicEvent);
  return;
}

// `dynamic_atexit_destructor_for_'StaticData'' @ 1503ccc70

void __cdecl
`FRHIBreadcrumbNode::<lambda_8>::operator()'::__l2::_dynamic_atexit_destructor_for__StaticData__
          (void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ccc77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&StaticData.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_DrawCall'' @ 1503ccc90

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_DrawCall__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_DrawCall.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_DrawCall.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_DrawCall.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_GPUMem'' @ 1503cccb0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_GPUMem__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_GPUMem.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_GPUMem.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_GPUMem.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_PSOPrecacheCompiling'' @ 1503cccd0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_PSOPrecacheCompiling__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_PSOPrecacheCompiling.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_PSOPrecacheCompiling.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_PSOPrecacheCompiling.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_RHI'' @ 1503cccf0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_RHI__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_RHI.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_RHI.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_RHI.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_RHITFlushes'' @ 1503ccd10

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_RHITFlushes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_RHITFlushes.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_RHITFlushes.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (_GCsvCategory_RHITFlushes.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_RHITStalls'' @ 1503ccd30

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_RHITStalls__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_RHITStalls.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_RHITStalls.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_RHITStalls.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

