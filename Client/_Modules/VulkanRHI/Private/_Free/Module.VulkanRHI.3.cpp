// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 210

// `dynamic_initializer_for_'CVarDSetCacheMaxPoolLookups'' @ 141053800

void __cdecl _dynamic_initializer_for__CVarDSetCacheMaxPoolLookups__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDSetCacheMaxPoolLookups,L"r.Vulkan.DSetCacheMaxPoolLookups",
             &GDSetCacheMaxPoolLookups,
             L"Maximum count of pool\'s caches to lookup before allocating new descriptor.\n",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarDSetCacheMaxPoolLookups__);
  return;
}

// `dynamic_initializer_for_'CVarDSetCacheTargetSetsPerPool'' @ 141053850

void __cdecl _dynamic_initializer_for__CVarDSetCacheTargetSetsPerPool__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDSetCacheTargetSetsPerPool,L"r.Vulkan.DSetCacheTargetSetsPerPool",
             &GDSetCacheTargetSetsPerPool,
             L"Target number of descriptor set allocations per single pool.\n",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarDSetCacheTargetSetsPerPool__);
  return;
}

// `dynamic_initializer_for_'CVarEnableLRU'' @ 1410538a0

void __cdecl _dynamic_initializer_for__CVarEnableLRU__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableLRU,L"r.Vulkan.EnablePipelineLRUCache",local_res8,
             L"Pipeline LRU cache.\n0: disable LRU\n1: Enable LRU",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarEnableLRU__);
  return;
}

// `dynamic_initializer_for_'CVarGVulkanFlushOnMapStaging'' @ 1410538f0

void __cdecl _dynamic_initializer_for__CVarGVulkanFlushOnMapStaging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGVulkanFlushOnMapStaging,L"r.Vulkan.FlushOnMapStaging",&GVulkanFlushOnMapStaging,
             L"Flush GPU on MapStagingSurface calls without any fence.\n 0: Do not Flush (default)\n 1: Flush"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGVulkanFlushOnMapStaging__);
  return;
}

// `dynamic_initializer_for_'CVarLRUMaxPipelineSize'' @ 141053940

void __cdecl _dynamic_initializer_for__CVarLRUMaxPipelineSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x20000000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLRUMaxPipelineSize,L"r.Vulkan.PipelineLRUSize",local_res8,
             L"Maximum size of shader memory .",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLRUMaxPipelineSize__);
  return;
}

// `dynamic_initializer_for_'CVarLRUPipelineCapacity'' @ 141053990

void __cdecl _dynamic_initializer_for__CVarLRUPipelineCapacity__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x2000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLRUPipelineCapacity,L"r.Vulkan.PipelineLRUCapactiy",local_res8,
             L"Maximum no. of PSOs in LRU.",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarLRUPipelineCapacity__);
  return;
}

// `dynamic_initializer_for_'CVarPipelineDebugForceEvictImmediately'' @ 1410539e0

void __cdecl _dynamic_initializer_for__CVarPipelineDebugForceEvictImmediately__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPipelineDebugForceEvictImmediately,L"r.Vulkan.PipelineDebugForceEvictImmediately",
             local_res8,L"1: Force all created PSOs to be evicted immediately. Only for debugging",
             0x24);
  atexit(_dynamic_atexit_destructor_for__CVarPipelineDebugForceEvictImmediately__);
  return;
}

// `dynamic_initializer_for_'CVarPipelineLRUCacheEvictBinary'' @ 141053a30

void __cdecl _dynamic_initializer_for__CVarPipelineLRUCacheEvictBinary__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPipelineLRUCacheEvictBinary,L"r.Vulkan.PipelineLRUCacheEvictBinary",local_res8,
             L"0: create pipelines in from the binary PSO cache and binary shader cache and evict them only as it fills up.\n1: don\'t create pipelines....just immediately evict them"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarPipelineLRUCacheEvictBinary__);
  return;
}

// `dynamic_initializer_for_'CVarPipelineLRUCacheEvictBinaryPreloadScreen'' @ 141053a80

void __cdecl _dynamic_initializer_for__CVarPipelineLRUCacheEvictBinaryPreloadScreen__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPipelineLRUCacheEvictBinaryPreloadScreen,
             L"r.Vulkan.PipelineLRUCacheEvictBinaryPreloadScreen",local_res8,
             L"1: Use a preload screen while loading preevicted PSOs ala r.Vulkan.PipelineLRUCacheEvictBinary"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPipelineLRUCacheEvictBinaryPreloadScreen__);
  return;
}

// `dynamic_initializer_for_'CVarQueryPoolDeletionDelay'' @ 141053ad0

void __cdecl _dynamic_initializer_for__CVarQueryPoolDeletionDelay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarQueryPoolDeletionDelay,L"r.Vulkan.QueryPoolDeletionDelay",&GQueryPoolDeletionDelay
             ,L"Amount of frames to wait before deleting an unused query pools. (Default: 10)\n",4);
  atexit(_dynamic_atexit_destructor_for__CVarQueryPoolDeletionDelay__);
  return;
}

// `dynamic_initializer_for_'CVarTimestampQueryStage'' @ 141053b20

void __cdecl _dynamic_initializer_for__CVarTimestampQueryStage__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTimestampQueryStage,L"r.Vulkan.TimestampQueryStage",&GTimestampQueryStage,
             L"Defines which pipeline stage is used for timestamp queries.\n 0: Use VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, less precise measures but less likely to alter performance (default)\n 1: Use VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, more precise measures but may alter performance on some platforms"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarTimestampQueryStage__);
  return;
}

// `dynamic_initializer_for_'CVarTimingQueryPoolSize'' @ 141053b70

void __cdecl _dynamic_initializer_for__CVarTimingQueryPoolSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTimingQueryPoolSize,L"r.Vulkan.TimingQueryPoolSize",&GTimingQueryPoolSize,
             L"Amount of timing queries per pool in reusable query pools. (Default: 128)\n",4);
  atexit(_dynamic_atexit_destructor_for__CVarTimingQueryPoolSize__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanDebugBarrier'' @ 141053bc0

void __cdecl _dynamic_initializer_for__CVarVulkanDebugBarrier__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanDebugBarrier,L"r.Vulkan.DebugBarrier",local_res8,
             L"Forces a full barrier for debugging. This is a mask/bitfield (so add up the values)!\n 0: Don\'t (default)\n 1: Enable heavy barriers after EndRenderPass()\n 2: Enable heavy barriers after every dispatch\n 4: Enable heavy barriers after upload cmd buffers\n 8: Enable heavy barriers after active cmd buffers\n 16: Enable heavy buffer barrier after uploads\n 32: Enable heavy buffer barrier between acquiring back buffer and blitting into swapchain\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanDebugBarrier__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanDiagnosticBuffer'' @ 141053c10

void __cdecl _dynamic_initializer_for__CVarVulkanDiagnosticBuffer__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanDiagnosticBuffer,L"r.Vulkan.DiagnosticBuffer",local_res8,
             L"0: Disable the diagnostic buffer\n1: Enable the diagnostic buffer with less perf impact (default)2: Enable the diagnostic buffer with more precision"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanDiagnosticBuffer__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanExtendedLifetimeFrames'' @ 141053c60

void __cdecl _dynamic_initializer_for__CVarVulkanExtendedLifetimeFrames__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanExtendedLifetimeFrames,L"r.Vulkan.Aftermath.ExtendedLifetimeFrames",
             local_res8,L"Number of frames to keep breadcrumbs alive for Aftermath checkpoints.",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanExtendedLifetimeFrames__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanIgnoreCPUReads'' @ 141053cb0

void __cdecl _dynamic_initializer_for__CVarVulkanIgnoreCPUReads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanIgnoreCPUReads,L"r.Vulkan.IgnoreCPUReads",&GIgnoreCPUReads,
             L"Debugging utility for GPU->CPU reads.\n 0 will read from the GPU (default).\n 1 will NOT read from the GPU and fill with zeros.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanIgnoreCPUReads__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanRayTracingAllowCompaction'' @ 141053d00

void __cdecl _dynamic_initializer_for__CVarVulkanRayTracingAllowCompaction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanRayTracingAllowCompaction,L"r.Vulkan.RayTracing.AllowCompaction",
             &GVulkanRayTracingAllowCompaction,
             L"Whether to automatically perform compaction for static acceleration structures to save GPU memory. (default = 1)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanRayTracingAllowCompaction__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanRayTracingCompactionMinPrimitiveCount'' @ 141053d50

void __cdecl _dynamic_initializer_for__CVarVulkanRayTracingCompactionMinPrimitiveCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanRayTracingCompactionMinPrimitiveCount,
             L"r.Vulkan.RayTracing.Compaction.MinPrimitiveCount",
             &GVulkanRayTracingCompactionMinPrimitiveCount,
             L"Sets the minimum primitive count threshold below which geometry skips the compaction. (default = 128)\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanRayTracingCompactionMinPrimitiveCount__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanRayTracingMaxBatchedCompaction'' @ 141053da0

void __cdecl _dynamic_initializer_for__CVarVulkanRayTracingMaxBatchedCompaction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanRayTracingMaxBatchedCompaction,L"r.Vulkan.RayTracing.MaxBatchedCompaction",
             &GVulkanRayTracingMaxBatchedCompaction,
             L"Maximum of amount of compaction requests and rebuilds per frame. (default = 64)\n",4)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarVulkanRayTracingMaxBatchedCompaction__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanSubmissionAllowTimelineSemaphores'' @ 141053df0

void __cdecl _dynamic_initializer_for__CVarVulkanSubmissionAllowTimelineSemaphores__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanSubmissionAllowTimelineSemaphores,
             L"r.Vulkan.Submission.AllowTimelineSemaphores",&GAllowTimelineSemaphores,
             L"If supported, use timeline semaphores for queue submission to reduce API calls.\n 0: Use normal fences\n 1: Use timeline semaphores if available (default)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanSubmissionAllowTimelineSemaphores__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanWaitForIdleOnSubmit'' @ 141053e40

void __cdecl _dynamic_initializer_for__CVarVulkanWaitForIdleOnSubmit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanWaitForIdleOnSubmit,L"r.Vulkan.WaitForIdleOnSubmit",&GWaitForIdleOnSubmit,
             L"Waits for the GPU to be idle after submitting a command buffer. Useful for tracking GPU hangs.\n 0: Do not wait (default)\n 1: Wait on every submit\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanWaitForIdleOnSubmit__);
  return;
}

// `dynamic_initializer_for_'CreateGraphicsPSOMutex'' @ 141053e90

void __cdecl _dynamic_initializer_for__CreateGraphicsPSOMutex__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&CreateGraphicsPSOMutex,4000);
  atexit(_dynamic_atexit_destructor_for__CreateGraphicsPSOMutex__);
  return;
}

// `dynamic_initializer_for_'DummyUBLock'' @ 141053ec0

void __cdecl _dynamic_initializer_for__DummyUBLock__(void)

{
  atexit(_dynamic_atexit_destructor_for__DummyUBLock__);
  return;
}

// `dynamic_initializer_for_'DummyUBs'' @ 141053ee0

void __cdecl _dynamic_initializer_for__DummyUBs__(void)

{
  atexit(_dynamic_atexit_destructor_for__DummyUBs__);
  return;
}

// `dynamic_initializer_for_'FragmentCombinerOpMap'' @ 141053f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl _dynamic_initializer_for__FragmentCombinerOpMap__(void)

{
  undefined1 auStack_b8 [32];
  uchar local_98 [8];
  VkFragmentShadingRateCombinerOpKHR local_90 [6];
  initializer_list<TPairInitializer<unsigned_char_const_&,VkFragmentShadingRateCombinerOpKHR_const_&>_>
  local_78;
  TPairInitializer<unsigned_char_const_&,VkFragmentShadingRateCombinerOpKHR_const_&> local_68;
  uchar *local_58;
  VkFragmentShadingRateCombinerOpKHR *local_50;
  uchar *local_48;
  VkFragmentShadingRateCombinerOpKHR *local_40;
  uchar *local_38;
  VkFragmentShadingRateCombinerOpKHR *local_30;
  uchar *local_28;
  VkFragmentShadingRateCombinerOpKHR *local_20;
  TPairInitializer<unsigned_char_const_&,VkFragmentShadingRateCombinerOpKHR_const_&> local_18;
  
  local_18.Key = (uchar *)(__security_cookie.value ^ (ulonglong)auStack_b8);
  local_68.Key = local_98;
  local_98[0] = '\0';
  local_68.Value = local_90;
  local_90[0] = VK_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_KHR;
  local_58 = local_98 + 1;
  local_98[1] = 1;
  local_50 = local_90 + 1;
  local_48 = local_98 + 2;
  local_40 = local_90 + 2;
  local_38 = local_98 + 3;
  local_30 = local_90 + 3;
  local_28 = local_98 + 4;
  local_20 = local_90 + 4;
  local_78._First = &local_68;
  local_78._Last = &local_18;
  local_90[1] = 1;
  local_98[2] = 2;
  local_90[2] = 2;
  local_98[3] = 3;
  local_90[3] = 3;
  local_98[4] = 4;
  local_90[4] = 3;
  TMap<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,0>_>
  ::
  TMap<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR,0>_>
            (&FragmentCombinerOpMap,&local_78);
  atexit(_dynamic_atexit_destructor_for__FragmentCombinerOpMap__);
  return;
}

// `dynamic_initializer_for_'GAlwaysWriteDS'' @ 141053ff0

void __cdecl _dynamic_initializer_for__GAlwaysWriteDS__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GAlwaysWriteDS,L"r.Vulkan.AlwaysWriteDS",local_res8,L"",0x20);
  atexit(_dynamic_atexit_destructor_for__GAlwaysWriteDS__);
  return;
}

// `dynamic_initializer_for_'GCVarVulkanRayTracingMaxShaderGroupStride'' @ 141054040

void __cdecl _dynamic_initializer_for__GCVarVulkanRayTracingMaxShaderGroupStride__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GCVarVulkanRayTracingMaxShaderGroupStride,L"r.Vulkan.RayTracing.MaxShaderGroupStride",
             &GVulkanRayTracingMaxShaderGroupStride,
             L"The default size to allocate for each record (default: 4096).",4);
  atexit(_dynamic_atexit_destructor_for__GCVarVulkanRayTracingMaxShaderGroupStride__);
  return;
}

// `dynamic_initializer_for_'GEnablePipelineCacheCompressionCvar'' @ 141054090

void __cdecl _dynamic_initializer_for__GEnablePipelineCacheCompressionCvar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GEnablePipelineCacheCompressionCvar,L"r.Vulkan.PipelineCacheCompression",
             &GEnablePipelineCacheCompression,
             L"Enable/disable compression on the Vulkan pipeline cache disk file\n",0x20);
  atexit(_dynamic_atexit_destructor_for__GEnablePipelineCacheCompressionCvar__);
  return;
}

// `dynamic_initializer_for_'GEnablePipelineCacheLoadCvar'' @ 1410540e0

void __cdecl _dynamic_initializer_for__GEnablePipelineCacheLoadCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GEnablePipelineCacheLoadCvar,L"r.Vulkan.PipelineCacheLoad",local_res8,
             L"0 to disable loading the pipeline cache.\n1 to enable using pipeline cache.\n",0);
  atexit(_dynamic_atexit_destructor_for__GEnablePipelineCacheLoadCvar__);
  return;
}

// `dynamic_initializer_for_'GPendingLockedStagingBuffers'' @ 141054130

void __cdecl _dynamic_initializer_for__GPendingLockedStagingBuffers__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPendingLockedStagingBuffers__);
  return;
}

// `dynamic_initializer_for_'GPipelineCacheFromShaderPipelineCacheCvar'' @ 141054150

void __cdecl _dynamic_initializer_for__GPipelineCacheFromShaderPipelineCacheCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GPipelineCacheFromShaderPipelineCacheCvar,
             L"r.Vulkan.PipelineCacheFromShaderPipelineCache",local_res8,
             L"0 look for a pipeline cache in the normal locations with the normal names.\n1 tie the vulkan pipeline cache to the shader pipeline cache, use the PSOFC guid as part of the filename, etc.\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GPipelineCacheFromShaderPipelineCacheCvar__);
  return;
}

// `dynamic_initializer_for_'GStagingMapLock'' @ 1410541a0

void __cdecl _dynamic_initializer_for__GStagingMapLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GStagingMapLock,4000);
  atexit(_dynamic_atexit_destructor_for__GStagingMapLock__);
  return;
}

// `dynamic_initializer_for_'GVulkanGraphicPipelineLibraryLinkingModeCvar'' @ 1410541d0

void __cdecl _dynamic_initializer_for__GVulkanGraphicPipelineLibraryLinkingModeCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GVulkanGraphicPipelineLibraryLinkingModeCvar,
             L"r.Vulkan.GraphicPipelineLibraryLinkingMode",local_res8,
             L"0 to disable link time optimization (faster on CPU, slower on GPU).\n1 to enable link time optimization (slower on CPU, faster on GPU).\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GVulkanGraphicPipelineLibraryLinkingModeCvar__);
  return;
}

// `dynamic_initializer_for_'GVulkanPSOForceSingleThreadedCVar'' @ 141054220

void __cdecl _dynamic_initializer_for__GVulkanPSOForceSingleThreadedCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GVulkanPSOForceSingleThreadedCVar,L"r.Vulkan.ForcePSOSingleThreaded",
             &GVulkanPSOForceSingleThreaded,
             L"Enable to force singlethreaded creation of PSOs. Only intended as a workaround for buggy drivers\n0: (default) Allow Async precompile PSO creation.\n1: force singlethreaded creation of all PSOs.\n2: force singlethreaded creation of precompile PSOs only.\n3: force singlethreaded creation of non-precompile PSOs only."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GVulkanPSOForceSingleThreadedCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanPSOLRUEvictAfterUnusedFramesCVar'' @ 141054270

void __cdecl _dynamic_initializer_for__GVulkanPSOLRUEvictAfterUnusedFramesCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GVulkanPSOLRUEvictAfterUnusedFramesCVar,L"r.Vulkan.PSOLRUEvictAfterUnusedFrames",
             &GVulkanPSOLRUEvictAfterUnusedFrames,
             L"0: unused PSOs are not removed from the PSO LRU cache. (default)\n>0: The number of frames an unused PSO can remain in the PSO LRU cache. When this is exceeded the PSO is destroyed and memory returned to the system. This can save memory with the risk of increased hitching."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__GVulkanPSOLRUEvictAfterUnusedFramesCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanReleaseShaderModuleWhenEvictingPSOCVar'' @ 1410542c0

void __cdecl _dynamic_initializer_for__GVulkanReleaseShaderModuleWhenEvictingPSOCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GVulkanReleaseShaderModuleWhenEvictingPSOCVar,
             L"r.Vulkan.ReleaseShaderModuleWhenEvictingPSO",
             &GVulkanReleaseShaderModuleWhenEvictingPSO,
             L"0: shader modules remain when a PSO is removed from the PSO LRU cache. (default)\n1: shader modules are destroyed when a PSO is removed from the PSO LRU cache. This can save memory at the risk of increased hitching and cpu cost."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__GVulkanReleaseShaderModuleWhenEvictingPSOCVar__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RTPSO_CompileShader'' @ 141054310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RTPSO_CompileShader__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RTPSO_CompileShader == (FThreadSafeStaticStat<FStat_STAT_RTPSO_CompileShader>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_RTPSO_CompileShader");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RTPSO_CompileShader,*pFVar1,
               L"RTPSO Compile Shader","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RTPSO_CreatePipeline'' @ 1410543a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RTPSO_CreatePipeline__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RTPSO_CreatePipeline ==
      (FThreadSafeStaticStat<FStat_STAT_RTPSO_CreatePipeline>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RTPSO_CreatePipeline");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RTPSO_CreatePipeline,*pFVar1,
               L"RTPSO Create Pipeline","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingAllocatedBLAS'' @ 141054430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingAllocatedBLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingAllocatedBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedBLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingAllocatedBLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingAllocatedBLAS,*pFVar1,
               L"Allocated bottom level acceleration structures","STATGROUP_VulkanRayTracing",
               "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingAllocatedTLAS'' @ 1410544c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingAllocatedTLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingAllocatedTLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedTLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingAllocatedTLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingAllocatedTLAS,*pFVar1,
               L"Allocated top level acceleration structures","STATGROUP_VulkanRayTracing",
               "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingBLASMemory'' @ 141054550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingBLASMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingBLASMemory ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingBLASMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingBLASMemory,*pFVar1,
               L"Total BL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingBuiltBLAS'' @ 1410545e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingBuiltBLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingBuiltBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBuiltBLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingBuiltBLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingBuiltBLAS,*pFVar1,
               L"Built BL AS (per frame)","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingBuiltTLAS'' @ 141054670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingBuiltTLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingBuiltTLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBuiltTLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingBuiltTLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingBuiltTLAS,*pFVar1,
               L"Built TL AS (per frame)","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingCompiledShaders'' @ 141054700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingCompiledShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingCompiledShaders ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingCompiledShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingCompiledShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingCompiledShaders,*pFVar1,
               L"Compiled shaders (total)","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingCreatedPipelines'' @ 141054790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingCreatedPipelines__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingCreatedPipelines ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingCreatedPipelines>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingCreatedPipelines");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingCreatedPipelines,*pFVar1,
               L"Created pipelines (total)","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingDynamicBLASMemory'' @ 141054820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingDynamicBLASMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingDynamicBLASMemory ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingDynamicBLASMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingDynamicBLASMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingDynamicBLASMemory,*pFVar1,
               L"Dynamic BL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingStaticBLASMemory'' @ 1410548b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingStaticBLASMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingStaticBLASMemory ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingStaticBLASMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingStaticBLASMemory,*pFVar1,
               L"Static BL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingTLASMemory'' @ 141054940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingTLASMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingTLASMemory ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTLASMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingTLASMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingTLASMemory,*pFVar1,
               L"TL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingTrianglesBLAS'' @ 1410549d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingTrianglesBLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingTrianglesBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTrianglesBLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingTrianglesBLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingTrianglesBLAS,*pFVar1,
               L"Triangles in all BL acceleration structures","STATGROUP_VulkanRayTracing",
               "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingUpdatedBLAS'' @ 141054a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingUpdatedBLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingUpdatedBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUpdatedBLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingUpdatedBLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingUpdatedBLAS,*pFVar1,
               L"Updated BL AS (per frame)","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingUpdatedTLAS'' @ 141054af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingUpdatedTLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingUpdatedTLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUpdatedTLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingUpdatedTLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingUpdatedTLAS,*pFVar1,
               L"Updated TL AS (per frame)","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRayTracingUsedVideoMemory'' @ 141054b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRayTracingUsedVideoMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRayTracingUsedVideoMemory ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRayTracingUsedVideoMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingUsedVideoMemory,*pFVar1,
               L"Total Used Video Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
               L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// FAttachmentDesc,TSizedDefaultAllocator<32>_> @ 145b3a2b0

FArchive * __cdecl
operator<<<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar7 = 0;
            if ((int)uVar11 < (int)uVar9) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) break;
            ::operator<<(param_1,(FAttachmentDesc *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x20))
            ;
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          ::operator<<(param_1,(FAttachmentDesc *)(pFVar3 + (longlong)iVar6 * 0x20));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FAttachmentRef,TSizedDefaultAllocator<32>_> @ 145b3a2c0

FArchive * __cdecl
operator<<<FGfxPipelineDesc::FRenderTargets::FAttachmentRef_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar7 = 0;
            if ((int)uVar11 < (int)uVar9) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) break;
            ::operator<<(param_1,(FAttachmentRef *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10))
            ;
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          ::operator<<(param_1,(FAttachmentRef *)(pFVar3 + (longlong)iVar6 * 0x10));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FBlendAttachment,TSizedDefaultAllocator<32>_> @ 145b3a2d0

FArchive * __cdecl
operator<<<FGfxPipelineDesc::FBlendAttachment_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FBlendAttachment *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x108,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FBlendAttachment *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> @ 145b3a2e0

FArchive * __cdecl
operator<<<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            operator<<(param_1,(FDescriptorSetLayoutBinding *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          operator<<(param_1,(FDescriptorSetLayoutBinding *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FVertexAttribute,TSizedDefaultAllocator<32>_> @ 145b3a2f0

FArchive * __cdecl
operator<<<FGfxPipelineDesc::FVertexAttribute_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar7 = 0;
            if ((int)uVar11 < (int)uVar9) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) break;
            ::operator<<(param_1,(FVertexAttribute *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10))
            ;
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          ::operator<<(param_1,(FVertexAttribute *)(pFVar3 + (longlong)iVar6 * 0x10));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FVertexBinding,TSizedDefaultAllocator<32>_> @ 145b3a300

FArchive * __cdecl
operator<<<FGfxPipelineDesc::FVertexBinding_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FVertexBinding *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FVertexBinding *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 145b3a310

FArchive * __cdecl
operator<<<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
                 (param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar11 < (int)uVar8) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            TArrayPrivateFriend::Serialize<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>
                      (param_1,(TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
            uVar11 = uVar11 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          pTVar9 = (TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>
                    (param_1,pTVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// CompareItems<FGfxPipelineDesc::FBlendAttachment,int> @ 145b3b520

bool __cdecl
CompareItems<FGfxPipelineDesc::FBlendAttachment,int>
          (FBlendAttachment *param_1,FBlendAttachment *param_2,int param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (param_3 != 0) {
    puVar2 = &param_2->SrcColorBlendFactor;
    puVar1 = &param_1->SrcColorBlendFactor;
    do {
      if (((((((FBlendAttachment *)(puVar1 + -2))->bBlend !=
              (bool)puVar1[(longlong)param_2 + (-2 - (longlong)param_1)]) ||
            (puVar1[-1] != puVar2[-1])) || (*puVar1 != *puVar2)) ||
          ((puVar1[1] != puVar2[1] || (puVar1[2] != puVar2[2])))) ||
         ((puVar1[3] != puVar2[3] || ((puVar1[4] != puVar2[4] || (puVar1[5] != puVar2[5])))))) {
        return false;
      }
      puVar2 = puVar2 + 8;
      puVar1 = puVar1 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FGfxPipelineDesc::FVertexAttribute,int> @ 145b3b5a0

bool __cdecl
CompareItems<FGfxPipelineDesc::FVertexAttribute,int>
          (FVertexAttribute *param_1,FVertexAttribute *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (param_3 != 0) {
    puVar2 = &param_2->Format;
    puVar1 = &param_1->Format;
    do {
      if ((((((FVertexAttribute *)(puVar1 + -2))->Location !=
             *(uint *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)puVar1)) ||
           (puVar1[-1] != puVar2[-1])) || (*puVar1 != *puVar2)) || (puVar1[1] != puVar2[1])) {
        return false;
      }
      puVar2 = puVar2 + 4;
      puVar1 = puVar1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FGfxPipelineDesc::FVertexBinding,int> @ 145b3b5f0

bool __cdecl
CompareItems<FGfxPipelineDesc::FVertexBinding,int>
          (FVertexBinding *param_1,FVertexBinding *param_2,int param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  
  if (param_3 != 0) {
    puVar2 = &param_2->InputRate;
    puVar1 = &param_1->InputRate;
    do {
      if (((((FVertexBinding *)(puVar1 + -3))->Stride !=
            *(uint *)((longlong)param_2 + (-6 - (longlong)param_1) + (longlong)puVar1)) ||
          (puVar1[-1] != puVar2[-1])) || (*puVar1 != *puVar2)) {
        return false;
      }
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetsLayoutInfo::FSetLayout,int> @ 145b3b640

void __cdecl
ConstructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
          (void *param_1,FSetLayout *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    puVar4 = &param_2->Hash;
    do {
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar1 = puVar4[-2];
      _Src = (((FSetLayout *)(puVar4 + -4))->LayoutBindings).AllocatorInstance.Data;
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar1,0,(ForAnyElementType *)(piVar3 + -3),iVar1,piVar3);
        memcpy(((ForAnyElementType *)(piVar3 + -3))->Data,_Src,(longlong)iVar1 * 0x18);
      }
      uVar2 = *puVar4;
      puVar4 = puVar4 + 6;
      piVar3[1] = uVar2;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int> @ 145b3b710

void __cdecl
ConstructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 3);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,int> @ 145b3b7c0

void __cdecl
DefaultConstructItems<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,int> @ 145b3b7d0

void __cdecl
DefaultConstructItems<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FGfxPipelineDesc::FBlendAttachment,int> @ 145b3b7e0

void __cdecl
DefaultConstructItems<FGfxPipelineDesc::FBlendAttachment,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FDescriptorSetLayoutBinding,int> @ 145b3b7f0

void __cdecl DefaultConstructItems<FDescriptorSetLayoutBinding,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'::__l2::FTracedTask,int> @ 145b3b800

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      puVar1[1] = 0;
      puVar1[2] = 0xe800000000000020;
      puVar1[3] = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGfxPipelineDesc::FVertexAttribute,int> @ 145b3b850

void __cdecl
DefaultConstructItems<FGfxPipelineDesc::FVertexAttribute,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FGfxPipelineDesc::FVertexBinding,int> @ 145b3b860

void __cdecl DefaultConstructItems<FGfxPipelineDesc::FVertexBinding,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FVkRtBLASBuildData,int> @ 145b3b870

void __cdecl DefaultConstructItems<FVkRtBLASBuildData,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x68);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 1;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[8] = 0;
      puVar1[9] = 1;
      puVar1[10] = 0x3b9d13f0;
      *(undefined8 *)(puVar1 + 0xb) = 0;
      *(undefined8 *)(puVar1 + 0xd) = 0;
      *(undefined8 *)(puVar1 + 0xf) = 0;
      *(undefined8 *)(puVar1 + 0x11) = 0;
      *(undefined8 *)(puVar1 + 0x13) = 0;
      *(undefined8 *)(puVar1 + 0x15) = 0;
      *(undefined8 *)(puVar1 + 0x17) = 0;
      *(undefined8 *)(puVar1 + 0x19) = 0;
      *(undefined8 *)(puVar1 + 0x1b) = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1e] = 0x3b9d1404;
      *(undefined8 *)(puVar1 + 0x1f) = 0;
      *(undefined8 *)(puVar1 + 0x21) = 0;
      *(undefined8 *)(puVar1 + 0x23) = 0;
      *(undefined8 *)(puVar1 + 0x25) = 0;
      puVar1[0x27] = 0;
      puVar1 = puVar1 + 0x42;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FVulkanPipelineSize,int> @ 145b3b8f0

void __cdecl DefaultConstructItems<FVulkanPipelineSize,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<VkDescriptorPoolSize,int> @ 145b3b920

void __cdecl DefaultConstructItems<VkDescriptorPoolSize,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<VkVertexInputAttributeDescription,int> @ 145b3b930

void __cdecl DefaultConstructItems<VkVertexInputAttributeDescription,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<VkVertexInputBindingDescription,int> @ 145b3b940

void __cdecl DefaultConstructItems<VkVertexInputBindingDescription,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<TRefCountPtr<FVulkanRenderQuery>,int> @ 145b3b950

void __cdecl DefaultConstructItems<TRefCountPtr<FVulkanRenderQuery>,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<FVulkanDescriptorSetWriter,int> @ 145b3b970

void __cdecl DefaultConstructItems<FVulkanDescriptorSetWriter,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined2 *)(puVar1 + 6) = 1;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x4c) = 2;
      puVar1[0xb] = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar1 + 100) = 2;
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'::__l2::FTracedTask,int> @ 145b3b9f0

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask,int>
          (FTracedTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&(param_1->Task).field_0x38;
    do {
      if (((*puVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(puVar3[-2] + 0x18))(puVar3 + -2,puVar3 + -7);
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVkRtBLASBuildData,int> @ 145b3ba70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkGeometryTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */

void __cdecl DestructItems<FVkRtBLASBuildData,int>(FVkRtBLASBuildData *param_1,int param_2)

{
  ForElementType<VkAccelerationStructureGeometryKHR> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Segments).AllocatorInstance.SecondaryData;
    do {
      if (pFVar1[4] != (ForElementType<VkAccelerationStructureGeometryKHR>)0x0) {
        FMemory::Free((void *)pFVar1[4]);
      }
      if (*pFVar1 != (ForElementType<VkAccelerationStructureGeometryKHR>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x21;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>,int> @ 145b3bac0

void __cdecl
DestructItems<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>,int>
          (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *param_1,int param_2)

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

// DestructItems<TRefCountPtr<FVulkanRayTracingGeometry>,int> @ 145b3bb00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
DestructItems<TRefCountPtr<FVulkanRayTracingGeometry>,int>
          (TRefCountPtr<FVulkanRayTracingGeometry> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FVulkanRayTracingGeometry *)0x0) {
      FRHIResource::Release((FRHIResource *)param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FVulkanRayTracingShader>,int> @ 145b3bb40

void __cdecl
DestructItems<TRefCountPtr<FVulkanRayTracingShader>,int>
          (TRefCountPtr<FVulkanRayTracingShader> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FVulkanRayTracingShader *)0x0) {
      FRHIResource::Release((FRHIResource *)param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FVulkanRenderQuery>,int> @ 145b3bb80

void __cdecl
DestructItems<TRefCountPtr<FVulkanRenderQuery>,int>
          (TRefCountPtr<FVulkanRenderQuery> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FVulkanRenderQuery *)0x0) {
      FRHIResource::Release((FRHIResource *)param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FVulkanDescriptorSetCache::FCachedPool,TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>_>,int> @ 145b3bbc0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
DestructItems<TUniquePtr<FVulkanDescriptorSetCache::FCachedPool,TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>_>,int>
          (TUniquePtr<FVulkanDescriptorSetCache::FCachedPool,TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>_>
           *param_1,int param_2)

{
  FCachedPool *pFVar1;
  void *pvVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FCachedPool *)0x0) {
      *(undefined4 *)&(pFVar1->SetCache).field_0x48 = 0;
      pvVar2 = *(void **)&(pFVar1->SetCache).field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar1->SetCache);
      *(undefined4 *)&(pFVar1->SetsCache).field_0x48 = 0;
      pvVar2 = *(void **)&(pFVar1->SetsCache).field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar1->SetsCache);
      FVulkanGenericDescriptorPool::~FVulkanGenericDescriptorPool(&pFVar1->Pool);
      operator_delete(pFVar1,0x120);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRHIBreadcrumbAllocatorArray,int> @ 145b3bc80

void __cdecl
DestructItems<FRHIBreadcrumbAllocatorArray,int>(FRHIBreadcrumbAllocatorArray *param_1,int param_2)

{
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x20;
    do {
      pTVar1 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)*plVar2;
      if ((TSharedRef<FRHIBreadcrumbAllocator,1> *)*plVar2 ==
          (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
        pTVar1 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)(plVar2 + -4);
      }
      DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>(pTVar1,(int)plVar2[1]);
      if ((void *)*plVar2 != (void *)0x0) {
        FMemory::Free((void *)*plVar2);
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVulkanDescriptorSetWriter,int> @ 145b3bce0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __cdecl
DestructItems<FVulkanDescriptorSetWriter,int>(FVulkanDescriptorSetWriter *param_1,int param_2)

{
  ForElementType<unsigned_int> FVar1;
  ForElementType<unsigned_int> *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->WrittenMask).AllocatorInstance.SecondaryData;
    do {
      if (pFVar2[3] != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)pFVar2[3]);
      }
      if (*pFVar2 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar2);
      }
      FVar1 = pFVar2[-3];
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        if (*(void **)FVar1 != (void *)0x0) {
          FMemory::Free(*(void **)FVar1);
        }
        operator_delete((void *)FVar1,0x10);
      }
      pFVar2 = pFVar2 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext> @ 145b3f0d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_1> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>
          *param_7)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  ERayTracingBindingType EVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  atomic<unsigned_int> aVar14;
  ETaskTag EVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar18;
  FParallelForData *pFVar19;
  FTaskGraphInterface *pFVar20;
  bool *pbVar21;
  int iVar22;
  atomic<int> aVar23;
  atomic<unsigned_int> aVar24;
  longlong lVar25;
  ulonglong uVar26;
  FName FVar27;
  int iVar28;
  ERayTracingLocalShaderBindingType *pEVar29;
  longlong lVar30;
  atomic<unsigned_int> aVar31;
  bool bVar32;
  EShaderFrequency EVar33;
  ETaskPriority local_88;
  FColor_u_0 local_84;
  FEventRef local_80;
  FName local_78;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
  local_70;
  int local_68;
  char local_64;
  FName local_60;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
  local_58;
  FName local_50;
  FName local_40;
  
  if (param_2 == 0) {
    return;
  }
  aVar14 = (atomic<unsigned_int>)0x0;
  lVar30 = (longlong)param_2;
  FVar18 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar17 = ::FName::FName(&local_40,"STAT_ParallelFor");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar17,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar18;
  bVar8 = false;
  bVar9 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  bVar10 = false;
  bVar32 = false;
  if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_145b3f238:
    bVar9 = bVar32;
    bVar8 = bVar10;
    bVar10 = false;
    local_78 = local_50;
    FVar27 = local_50;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar32 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_60.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_60,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar32 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145b3f238;
    local_78 = FVar27;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar10 = true;
  }
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                          ,0x80,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar11 = FApp::ShouldUseThreadingForPerformance();
  if (bVar11) {
LAB_145b3f2c1:
    bVar11 = true;
  }
  else {
    bVar12 = FForkProcessHelper::IsForkedMultithreadInstance();
    bVar11 = false;
    if (bVar12) goto LAB_145b3f2c1;
  }
  if ((((1 < param_2) && ((param_6 & ForceSingleThread) == None)) && (bVar11)) &&
     (aVar14 = (atomic<unsigned_int>)((param_3 / 2 + param_2) / param_3),
     (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar14)) {
    aVar14 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
  }
  bVar11 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                     ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
  aVar24 = (atomic<unsigned_int>)((int)aVar14 + 1);
  if (bVar11) {
    aVar24 = aVar14;
  }
  aVar14 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  if ((int)aVar24 < (int)aVar14) {
    aVar14 = aVar24;
  }
  aVar24 = (atomic<unsigned_int>)0x1;
  if (1 < (int)aVar14) {
    aVar24 = aVar14;
  }
  aVar14 = (atomic<unsigned_int>)param_7->ArrayNum;
  aVar31 = aVar24;
  if ((aVar14 != (atomic<unsigned_int>)0x0) && (aVar31 = aVar14, (int)aVar24 < (int)aVar14)) {
    aVar31 = aVar24;
  }
  if ((int)aVar31 < 2) {
    if (0 < param_2) {
      lVar25 = 0;
      do {
        if ((param_7->ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        EVar5 = param_4->BindingType;
        pEVar29 = &param_4->Bindings->BindingType + lVar25;
        if (EVar5 == HitGroup) {
          if (*pEVar29 == Clear) {
            if (((char)param_4->ShaderTable->_padding_ != '\0') &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ShaderTable->GetInitializer().Lifetime == ERayTracingShaderBindingTableLifetime::Transient"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                                    ,0x891,L""), bVar11)) {
code_r0x000145b3f4c4:
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          else {
            SetRayTracingHitGroup
                      (param_4->ShaderTable,*(uint *)(pEVar29 + 0x14),param_4->Pipeline,
                       *(uint *)(pEVar29 + 0x18),*(FVulkanRayTracingGeometry **)(pEVar29 + 8),
                       *(uint *)(pEVar29 + 0x10),(uint)*(ushort *)(pEVar29 + 0x20),
                       *(FRHIUniformBuffer ***)(pEVar29 + 0x28),(uint)*(ushort *)(pEVar29 + 0x22),
                       *(uchar **)(pEVar29 + 0x30),*(uint *)(pEVar29 + 0x1c),
                       param_7->DataPtr->WorkerIndex);
          }
        }
        else {
          if (EVar5 == CallableShader) {
            EVar33 = SF_RayCallable;
          }
          else {
            if (EVar5 != MissShader) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                                  ,0x8aa,L"");
              if (bVar11) goto code_r0x000145b3f4c4;
              goto LAB_145b3f4c5;
            }
            EVar33 = SF_RayMiss;
          }
          SetGenericSystemParameters
                    (param_4->ShaderTable,*(uint *)(pEVar29 + 0x14),
                     (FRHIRayTracingPipelineState *)param_4->Pipeline,*(uint *)(pEVar29 + 0x18),
                     (uint)*(ushort *)(pEVar29 + 0x20),*(FRHIUniformBuffer ***)(pEVar29 + 0x28),
                     (uint)*(ushort *)(pEVar29 + 0x22),*(uchar **)(pEVar29 + 0x30),
                     *(uint *)(pEVar29 + 0x1c),EVar33);
        }
LAB_145b3f4c5:
        lVar25 = lVar25 + 0x38;
        lVar30 = lVar30 + -1;
        FVar27 = local_78;
      } while (lVar30 != 0);
    }
    goto LAB_145b3f7e6;
  }
  uVar26 = 1;
  iVar16 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar28 = 6;
    iVar22 = (int)aVar31 * 6;
    do {
      if (iVar22 <= param_2) {
        uVar6 = (longlong)(param_2 + -1 + iVar22) / (longlong)iVar22;
        uVar26 = uVar6 & 0xffffffff;
        iVar16 = (int)uVar6;
        local_84.Bits = (param_2 + -1 + iVar16) / iVar16;
        if ((int)aVar31 <= (int)local_84.Bits) break;
      }
      iVar16 = (int)uVar26;
      iVar22 = iVar22 - (int)aVar31;
      iVar28 = iVar28 + -1;
    } while (iVar28 != 0);
  }
  iVar22 = (int)aVar31 + -1;
  EVar15 = FTaskTagScope::GetCurrentTag();
  local_88 = Inherit;
  if ((EVar15 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_145b3f54c;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = High;
  }
  else {
LAB_145b3f54c:
    local_88 = BackgroundNormal;
  }
  FEventRef::FEventRef(&local_80,ManualReset);
  pFVar19 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (pFVar19 == (FParallelForData *)0x0) {
    pFVar19 = (FParallelForData *)0x0;
  }
  else {
    piVar3 = &(pFVar19->Tasks).ArrayNum;
    pFVar19->NumBatches = (int)local_84;
    *(undefined4 *)&pFVar19->field_0x8 = 0;
    *piVar3 = 0;
    *(undefined ***)pFVar19 =
         &`ParallelForImpl::
          ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext>'
          ::`2'::FParallelForData::_vftable_;
    pFVar19->DebugName = param_1;
    pFVar19->Contexts = (TArrayView<FRenderCommandList_*,int> *)param_7;
    pFVar19->FinishedSignal = &local_80;
    pFVar19->Priority = local_88;
    piVar4 = &(pFVar19->Tasks).ArrayMax;
    *piVar4 = 0;
    pFVar19->BatchItem = (atomic<int>)0x0;
    pFVar19->IncompleteBatches = (atomic<int>)0x0;
    pFVar19->LaunchedWorkers = (atomic<int>)0x0;
    (pFVar19->Tasks).AllocatorInstance.Data = (FTracedTask *)0x0;
    pFVar19->Num = param_2;
    pFVar19->BatchSize = iVar16;
    pFVar19->Body = (<lambda_3> *)param_4;
    pFVar19->IncompleteBatches = (atomic<int>)local_84;
    iVar16 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask>_>
                       (0x48,8,iVar22,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>_const_&)_::_2_::FTracedTask>
                         *)&pFVar19->Tasks,piVar3,piVar4);
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask,int>
              ((pFVar19->Tasks).AllocatorInstance.Data + iVar16,iVar22);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&pFVar19->field_0x10);
    LOCK();
    *(int *)&pFVar19->field_0x8 = *(int *)&pFVar19->field_0x8 + 1;
    UNLOCK();
  }
  LOCK();
  paVar1 = &pFVar19->LaunchedWorkers;
  aVar23 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((pFVar19->Tasks).ArrayNum <= (int)aVar23) {
    aVar23 = (atomic<int>)0xffffffff;
  }
  if (aVar23 != (atomic<int>)0xffffffff) {
    LOCK();
    *(int *)&pFVar19->field_0x8 = *(int *)&pFVar19->field_0x8 + 1;
    UNLOCK();
    local_58.Reference = pFVar19;
    `ParallelForImpl::
    ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::LaunchTask(&local_58,(int)aVar23,true);
    if (local_58.Reference != (FParallelForData *)0x0) {
      puVar2 = &(local_58.Reference)->field_0x8;
      LOCK();
      iVar16 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (((iVar16 == 1) && (puVar2 != (undefined1 *)0x0)) &&
         (local_58.Reference != (FParallelForData *)0x0)) {
        (*(code *)**(undefined8 **)local_58.Reference)(local_58.Reference,1);
      }
    }
  }
  local_64 = '\0';
  local_70.Reference = pFVar19;
  local_68 = iVar22;
  bVar11 = `ParallelForImpl::
           ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
           ::__l2::FParallelExecutor::operator()(&local_70,true);
  if (!bVar11) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar11 = IsInActualRenderingThread(), !bVar11)
       ) {
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
      }
      else {
        pbVar21 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar12 = *pbVar21;
        *pbVar21 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar21 = bVar12;
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar13 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      while (cVar13 == '\0') {
        pFVar20 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar20 + 0x48))
                  (pFVar20,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar13 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      }
    }
  }
  if (local_70.Reference != (FParallelForData *)0x0) {
    if (local_64 != '\0') {
      `ParallelForImpl::
      ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
      ::__l2::FParallelExecutor::LaunchTask(&local_70,local_68,true);
    }
    if (local_70.Reference != (FParallelForData *)0x0) {
      puVar2 = &(local_70.Reference)->field_0x8;
      LOCK();
      iVar16 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar16 == 1) && (puVar2 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_145b3f7e6:
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return;
}

// ReadSurfaceData<FColor> @ 145b3f860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __cdecl
ReadSurfaceData<FColor>
          (FVulkanDevice *param_1,FRHITexture *param_2,TIntRect<int> *param_3,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_4,FReadSurfaceDataFlags *param_5)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  byte bVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FVulkanTexture *this;
  longlong lVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  uchar *puVar15;
  void *pvVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStackY_158 [32];
  FStagingBuffer *local_110;
  uint local_108;
  FReadSurfaceDataFlags *local_100;
  FVulkanDevice *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  TIntPoint<int>_u_0 local_88;
  longlong lStack_80;
  undefined8 local_78;
  FStagingBuffer *pFStack_70;
  FVulkanTexture *local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_100 = param_5;
  local_f8 = param_1;
  lVar11 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((*(char *)(lVar11 + 0x32) == '\x03') || (*(char *)(lVar11 + 0x32) == '\x04')) &&
      (param_5->CubeFace != CubeFace_MAX)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(!TextureRHI->GetDesc().IsTextureCube()) || (InFlags.GetCubeFace() == CubeFace_MAX)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                         ,0xaf,L"Cube faces not supported yet."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = *(int *)((longlong)&param_3->field0_0x0 + 8);
  if ((((iVar7 < 1) || (*(int *)&param_3->field0_0x0 < 0)) || (iVar7 < *(int *)&param_3->field0_0x0)
      ) && (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("((Rect.Max.X > 0) && (Rect.Min.X >=0) && (Rect.Max.X >= Rect.Min.X))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                               ,0xb0,L"Width must be positive."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = *(int *)((longlong)&param_3->field0_0x0 + 0xc);
  if ((((iVar7 < 1) || (iVar10 = *(int *)((longlong)&param_3->field0_0x0 + 4), iVar10 < 0)) ||
      (iVar7 < iVar10)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("((Rect.Max.Y > 0) && (Rect.Min.Y >= 0) && (Rect.Max.Y >= Rect.Min.Y))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                         ,0xb1,L"Height must be positive."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar1 = &param_4->ArrayNum;
  uVar17 = *(int *)((longlong)&param_3->field0_0x0 + 0xc) -
           *(int *)((longlong)&param_3->field0_0x0 + 4);
  uVar6 = *(int *)((longlong)&param_3->field0_0x0 + 8) - *(int *)&param_3->field0_0x0;
  uVar18 = uVar17 * uVar6;
  iVar7 = *piVar1;
  if (iVar7 < (int)uVar18) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18 - iVar7,&param_4->AllocatorInstance,piVar1,&param_4->ArrayMax);
  }
  else {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if ((int)uVar18 < iVar7) {
      uVar8 = iVar7 - uVar18;
      if (((int)(uVar8 | uVar18) < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (param_4->AllocatorInstance).Data + (longlong)(int)uVar18 * 4;
        iVar7 = (*piVar1 - uVar8) - uVar18;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar7 << 2);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_4->AllocatorInstance,*piVar1,&param_4->ArrayMax);
      }
    }
  }
  if (GIgnoreCPUReads == 0) {
    lVar11 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    local_b8 = lVar11;
    if ((*(char *)(lVar11 + 0x32) == '\0') || (*(char *)(lVar11 + 0x32) == '\x01')) {
      this = (FVulkanTexture *)(**(code **)(param_2->_padding_ + 0x48))(param_2);
      uVar8 = VulkanRHI::GetNumBitsPerPixel(this->StorageFormat);
      uVar19 = uVar8 >> 3;
      lVar12 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
      if (((GPixelFormats[*(byte *)(lVar12 + 0x33)].Supported == 0) || (uVar8 >> 3 == 0)) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("GPixelFormats[TextureRHI->GetFormat()].Supported && (PixelByteSize > 0)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                             ,0xd3,L"Trying to read from unsupported format."), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar2 = local_100->MipLevel;
      uVar9 = *(int *)(lVar11 + 0x24) >> (bVar2 & 0x1f);
      local_108 = (uint)bVar2;
      uVar8 = 1;
      if (1 < (int)uVar9) {
        uVar8 = uVar9;
      }
      iVar10 = *(int *)(local_b8 + 0x28) >> (bVar2 & 0x1f);
      iVar7 = 1;
      if (1 < iVar10) {
        iVar7 = iVar10;
      }
      if ((((int)uVar8 < *(int *)((longlong)&param_3->field0_0x0 + 8)) ||
          (iVar7 < *(int *)((longlong)&param_3->field0_0x0 + 0xc))) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Rect.Max.X <= (int32)MipSizeX) && (Rect.Max.Y <= (int32)MipSizeY)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                             ,0xda,L"The specified Rect [%dx%d] extends beyond this Mip [%dx%d]."),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = IsInRenderingThread();
      if ((!bVar5) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1594,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_110 = (FStagingBuffer *)0x0;
      puVar13 = (ulonglong *)(**(code **)(this->_padding_ + 0x20))(this);
      uVar3 = *puVar13;
      if ((uVar3 & 0x80000) == 0) {
        local_110 = VulkanRHI::FStagingManager::AcquireBuffer
                              (&local_f8->StagingManager,uVar18 * uVar19,2,
                               VK_MEMORY_PROPERTY_HOST_CACHED_BIT);
        uVar8 = VulkanRHI::FStagingBuffer::GetSize(local_110);
        if ((uVar8 < uVar18 * uVar19) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6901631674346373347>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                               ,0xe3,"StagingBuffer->GetSize() >= BufferSize"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_f0 = 0;
        uStack_e8 = 0;
        uStack_c8 = 0;
        local_e0 = this->FullAspectMask;
        uStack_dc = local_108;
        uStack_d4 = 1;
        local_a8 = 0;
        uStack_a0 = 0;
        iStack_d8 = local_100->ArrayIndex;
        local_d0 = *(undefined4 *)&param_3->field0_0x0;
        local_98 = CONCAT44(local_108,local_e0);
        uStack_90 = CONCAT44(1,iStack_d8);
        uStack_cc = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
        local_88 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
        lStack_80 = (ulonglong)uVar6 << 0x20;
        uStack_bc = 1;
        local_78 = CONCAT44(1,uVar17);
        pFStack_70 = local_110;
        uStack_c4 = uVar6;
        local_c0 = uVar17;
        local_68 = this;
        if (((GRHICommandList.bLatchedBypass == false) ||
            ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
           (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
          puVar14 = FMemStackBase::Alloc
                              ((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x60,8);
          GRHICommandList.CommandListImmediate._96_4_ =
               GRHICommandList.CommandListImmediate._96_4_ + 1;
          *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar14;
          GRHICommandList.CommandListImmediate._48_8_ = puVar14 + 1;
          *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
          *puVar14 = &TRHILambdaCommand<FRHICommandListImmediate,`ReadSurfaceData<FColor>'::`55'::<lambda_1>_>
                      ::_vftable_;
          puVar14[2] = local_a8;
          puVar14[3] = uStack_a0;
          puVar14[4] = local_98;
          puVar14[5] = uStack_90;
          *(TIntPoint<int>_u_0 *)(puVar14 + 6) = local_88;
          puVar14[7] = lStack_80;
          puVar14[8] = local_78;
          puVar14[9] = pFStack_70;
          puVar14[10] = local_68;
          puVar14[0xb] = L"TRHILambdaCommand";
        }
        else {
          `ReadSurfaceData<FColor>'::__l55::<lambda_1>::operator()
                    (&local_a8,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
        }
        FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(&GRHICommandList.CommandListImmediate);
        VulkanRHI::FStagingBuffer::InvalidateMappedMemory(local_110);
        puVar15 = VulkanRHI::FStagingBuffer::GetMappedPointer(local_110);
        uVar8 = uVar6;
      }
      else {
        FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(&GRHICommandList.CommandListImmediate);
        iVar7 = *(int *)((longlong)&param_3->field0_0x0 + 4);
        iVar10 = *(int *)&param_3->field0_0x0;
        pvVar16 = FVulkanTexture::GetMappedPointer(this);
        puVar15 = (uchar *)((ulonglong)((uVar8 * iVar7 + iVar10) * uVar19) + (longlong)pvVar16);
      }
      ConvertRawDataToFColor
                (this->StorageFormat,uVar6,uVar17,puVar15,uVar19 * uVar8,
                 (FColor *)(param_4->AllocatorInstance).Data,local_100);
      if ((uVar3 & 0x80000) != 0) {
        return;
      }
      VulkanRHI::FStagingManager::ReleaseBuffer
                (&local_f8->StagingManager,(FVulkanContextCommon *)0x0,&local_110);
      return;
    }
  }
  memset((param_4->AllocatorInstance).Data,0,(ulonglong)uVar18 << 2);
  return;
}

// ReadSurfaceData<FLinearColor> @ 145b3fe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __cdecl
ReadSurfaceData<FLinearColor>
          (FVulkanDevice *param_1,FRHITexture *param_2,TIntRect<int> *param_3,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_4,FReadSurfaceDataFlags *param_5)

{
  int *piVar1;
  byte bVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FVulkanTexture *this;
  longlong lVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  uchar *puVar15;
  void *pvVar16;
  uint uVar17;
  FScriptContainerElement *_Dst;
  uint uVar18;
  uint uVar19;
  undefined1 auStackY_158 [32];
  FStagingBuffer *local_110;
  uint local_108;
  FReadSurfaceDataFlags *local_100;
  FVulkanDevice *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  TIntPoint<int>_u_0 local_88;
  longlong lStack_80;
  undefined8 local_78;
  FStagingBuffer *pFStack_70;
  FVulkanTexture *local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_100 = param_5;
  local_f8 = param_1;
  lVar11 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((*(char *)(lVar11 + 0x32) == '\x03') || (*(char *)(lVar11 + 0x32) == '\x04')) &&
      (param_5->CubeFace != CubeFace_MAX)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(!TextureRHI->GetDesc().IsTextureCube()) || (InFlags.GetCubeFace() == CubeFace_MAX)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                         ,0xaf,L"Cube faces not supported yet."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = *(int *)((longlong)&param_3->field0_0x0 + 8);
  if ((((iVar7 < 1) || (*(int *)&param_3->field0_0x0 < 0)) || (iVar7 < *(int *)&param_3->field0_0x0)
      ) && (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("((Rect.Max.X > 0) && (Rect.Min.X >=0) && (Rect.Max.X >= Rect.Min.X))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                               ,0xb0,L"Width must be positive."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = *(int *)((longlong)&param_3->field0_0x0 + 0xc);
  if ((((iVar7 < 1) || (iVar10 = *(int *)((longlong)&param_3->field0_0x0 + 4), iVar10 < 0)) ||
      (iVar7 < iVar10)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("((Rect.Max.Y > 0) && (Rect.Min.Y >= 0) && (Rect.Max.Y >= Rect.Min.Y))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                         ,0xb1,L"Height must be positive."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar1 = &param_4->ArrayNum;
  uVar17 = *(int *)((longlong)&param_3->field0_0x0 + 0xc) -
           *(int *)((longlong)&param_3->field0_0x0 + 4);
  uVar6 = *(int *)((longlong)&param_3->field0_0x0 + 8) - *(int *)&param_3->field0_0x0;
  uVar18 = uVar17 * uVar6;
  iVar7 = *piVar1;
  if (iVar7 < (int)uVar18) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar18 - iVar7,&param_4->AllocatorInstance,piVar1,&param_4->ArrayMax);
  }
  else {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if ((int)uVar18 < iVar7) {
      uVar8 = iVar7 - uVar18;
      if (((int)(uVar8 | uVar18) < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (param_4->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x10;
        iVar7 = (*piVar1 - uVar8) - uVar18;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0x10,(longlong)iVar7 << 4);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,&param_4->AllocatorInstance,*piVar1,&param_4->ArrayMax);
      }
    }
  }
  if (GIgnoreCPUReads == 0) {
    lVar11 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    local_b8 = lVar11;
    if ((*(char *)(lVar11 + 0x32) == '\0') || (*(char *)(lVar11 + 0x32) == '\x01')) {
      this = (FVulkanTexture *)(**(code **)(param_2->_padding_ + 0x48))(param_2);
      uVar8 = VulkanRHI::GetNumBitsPerPixel(this->StorageFormat);
      uVar19 = uVar8 >> 3;
      lVar12 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
      if (((GPixelFormats[*(byte *)(lVar12 + 0x33)].Supported == 0) || (uVar8 >> 3 == 0)) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("GPixelFormats[TextureRHI->GetFormat()].Supported && (PixelByteSize > 0)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                             ,0xd3,L"Trying to read from unsupported format."), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar2 = local_100->MipLevel;
      uVar9 = *(int *)(lVar11 + 0x24) >> (bVar2 & 0x1f);
      local_108 = (uint)bVar2;
      uVar8 = 1;
      if (1 < (int)uVar9) {
        uVar8 = uVar9;
      }
      iVar10 = *(int *)(local_b8 + 0x28) >> (bVar2 & 0x1f);
      iVar7 = 1;
      if (1 < iVar10) {
        iVar7 = iVar10;
      }
      if ((((int)uVar8 < *(int *)((longlong)&param_3->field0_0x0 + 8)) ||
          (iVar7 < *(int *)((longlong)&param_3->field0_0x0 + 0xc))) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Rect.Max.X <= (int32)MipSizeX) && (Rect.Max.Y <= (int32)MipSizeY)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                             ,0xda,L"The specified Rect [%dx%d] extends beyond this Mip [%dx%d]."),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = IsInRenderingThread();
      if ((!bVar5) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1594,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_110 = (FStagingBuffer *)0x0;
      puVar13 = (ulonglong *)(**(code **)(this->_padding_ + 0x20))(this);
      uVar3 = *puVar13;
      if ((uVar3 & 0x80000) == 0) {
        local_110 = VulkanRHI::FStagingManager::AcquireBuffer
                              (&local_f8->StagingManager,uVar18 * uVar19,2,
                               VK_MEMORY_PROPERTY_HOST_CACHED_BIT);
        uVar8 = VulkanRHI::FStagingBuffer::GetSize(local_110);
        if ((uVar8 < uVar18 * uVar19) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6901631674346373347>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                               ,0xe3,"StagingBuffer->GetSize() >= BufferSize"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_f0 = 0;
        uStack_e8 = 0;
        uStack_c8 = 0;
        local_e0 = this->FullAspectMask;
        uStack_dc = local_108;
        uStack_d4 = 1;
        local_a8 = 0;
        uStack_a0 = 0;
        iStack_d8 = local_100->ArrayIndex;
        local_d0 = *(undefined4 *)&param_3->field0_0x0;
        local_98 = CONCAT44(local_108,local_e0);
        uStack_90 = CONCAT44(1,iStack_d8);
        uStack_cc = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
        local_88 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
        lStack_80 = (ulonglong)uVar6 << 0x20;
        uStack_bc = 1;
        local_78 = CONCAT44(1,uVar17);
        pFStack_70 = local_110;
        uStack_c4 = uVar6;
        local_c0 = uVar17;
        local_68 = this;
        if (((GRHICommandList.bLatchedBypass == false) ||
            ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
           (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
          puVar14 = FMemStackBase::Alloc
                              ((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x60,8);
          GRHICommandList.CommandListImmediate._96_4_ =
               GRHICommandList.CommandListImmediate._96_4_ + 1;
          *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar14;
          GRHICommandList.CommandListImmediate._48_8_ = puVar14 + 1;
          *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
          *puVar14 = &TRHILambdaCommand<FRHICommandListImmediate,`ReadSurfaceData<FLinearColor>'::`55'::<lambda_1>_>
                      ::_vftable_;
          puVar14[2] = local_a8;
          puVar14[3] = uStack_a0;
          puVar14[4] = local_98;
          puVar14[5] = uStack_90;
          *(TIntPoint<int>_u_0 *)(puVar14 + 6) = local_88;
          puVar14[7] = lStack_80;
          puVar14[8] = local_78;
          puVar14[9] = pFStack_70;
          puVar14[10] = local_68;
          puVar14[0xb] = L"TRHILambdaCommand";
        }
        else {
          `ReadSurfaceData<FLinearColor>'::__l55::<lambda_1>::operator()
                    (&local_a8,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
        }
        FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(&GRHICommandList.CommandListImmediate);
        VulkanRHI::FStagingBuffer::InvalidateMappedMemory(local_110);
        puVar15 = VulkanRHI::FStagingBuffer::GetMappedPointer(local_110);
        uVar8 = uVar6;
      }
      else {
        FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(&GRHICommandList.CommandListImmediate);
        iVar7 = *(int *)((longlong)&param_3->field0_0x0 + 4);
        iVar10 = *(int *)&param_3->field0_0x0;
        pvVar16 = FVulkanTexture::GetMappedPointer(this);
        puVar15 = (uchar *)((ulonglong)((uVar8 * iVar7 + iVar10) * uVar19) + (longlong)pvVar16);
      }
      ConvertRawDataToFLinearColor
                (this->StorageFormat,uVar6,uVar17,puVar15,uVar19 * uVar8,
                 (FLinearColor *)(param_4->AllocatorInstance).Data,local_100);
      if ((uVar3 & 0x80000) != 0) {
        return;
      }
      VulkanRHI::FStagingManager::ReleaseBuffer
                (&local_f8->StagingManager,(FVulkanContextCommon *)0x0,&local_110);
      return;
    }
  }
  memset((param_4->AllocatorInstance).Data,0,(ulonglong)uVar18 << 4);
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>_> @ 145b406f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_>
          (ushort param_1,
          ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
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
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<`ParallelForImpl::ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'::__l2::FTracedTask>_> @ 145b41050

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FTracedTask *_Src;
  FTracedTask *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_145b41166;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_145b41166:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FTracedTask *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = param_4->Data;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FTracedTask *)0x0) &&
         (uVar3 = ((ulonglong)&_Src[0x38e].Task.field_0xf & 0xffffffffffff0000) - (longlong)_Src,
         uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// SerializeArray<FVulkanPipelineSize> @ 145b424e0

bool __cdecl
SerializeArray<FVulkanPipelineSize>
          (FArchive *param_1,TArray<FVulkanPipelineSize,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint local_res8 [2];
  
  local_res8[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar8 = local_res8[0];
  if ((param_1->field_0x28 & 1) == 0) {
    uVar8 = 0;
    if (0 < (int)local_res8[0]) {
      do {
        uVar10 = 0;
        if ((int)uVar8 < *piVar1) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        operator<<(param_1,(FVulkanPipelineSize *)
                           ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10));
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  else {
    if ((int)local_res8[0] < 0) {
      return false;
    }
    lVar9 = (longlong)(int)local_res8[0];
    iVar7 = *piVar1;
    if (iVar7 < (int)local_res8[0]) {
      iVar7 = local_res8[0] - iVar7;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      DefaultConstructItems<FVulkanPipelineSize,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10,iVar7);
    }
    else if ((int)local_res8[0] < iVar7) {
      uVar10 = iVar7 - local_res8[0];
      if (((int)(uVar10 | local_res8[0]) < 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (uVar10 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + lVar9 * 0x10;
        iVar7 = (*piVar1 - uVar10) - uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 0x10,(longlong)iVar7 << 4);
        }
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
    uVar8 = 0;
    if (0 < (int)local_res8[0]) {
      while( true ) {
        uVar10 = 0;
        if ((int)uVar8 < *piVar1) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) break;
        operator<<(param_1,(FVulkanPipelineSize *)
                           ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10));
        uVar8 = uVar8 + 1;
        if ((int)local_res8[0] <= (int)uVar8) {
          return true;
        }
      }
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return true;
}

// SubmitPackedUniformBuffers<1> @ 145b42760

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __cdecl
SubmitPackedUniformBuffers<1>(FVulkanDescriptorSetWriter *param_1,FVulkanAllocation *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  VkBuffer_T *pVVar5;
  
  uVar1 = param_2->Offset;
  uVar2 = param_2->Size;
  uVar3 = param_2->HandleId;
  pVVar5 = VulkanRHI::FVulkanAllocation::GetBufferHandle(param_2);
  bVar4 = FVulkanDescriptorSetWriter::WriteBuffer<8>
                    (param_1,0,pVVar5,uVar3,0,(ulonglong)uVar2,uVar1);
  return bVar4;
}

// SubmitPackedUniformBuffers<0> @ 145b427d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __cdecl
SubmitPackedUniformBuffers<0>(FVulkanDescriptorSetWriter *param_1,FVulkanAllocation *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  VkBuffer_T *pVVar5;
  
  uVar1 = param_2->Size;
  uVar2 = param_2->Offset;
  uVar3 = param_2->HandleId;
  pVVar5 = VulkanRHI::FVulkanAllocation::GetBufferHandle(param_2);
  bVar4 = FVulkanDescriptorSetWriter::WriteBuffer<6>
                    (param_1,0,pVVar5,uVar3,(ulonglong)uVar2,(ulonglong)uVar1,0);
  return bVar4;
}

// FThreadSafeStaticStat<`FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId'::__l2::FStat_FVulkanAsyncPoolSetDeletionWorker> @ 145b43170

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId(void)const_::_2_::FStat_FVulkanAsyncPoolSetDeletionWorker>
* __thiscall
FThreadSafeStaticStat<`FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId'::__l2::FStat_FVulkanAsyncPoolSetDeletionWorker>
::
FThreadSafeStaticStat<_FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId_::__l2::FStat_FVulkanAsyncPoolSetDeletionWorker>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FVulkanAsyncPoolSetDeletionWorker");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FVulkanAsyncPoolSetDeletionWorker","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary'::__l2::<lambda_1>,1,1> @ 145b4c1e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GetOrAddLibrary_FVulkanRayTracingPipelineLibraryCache__QEAAPEAUFPipelineLibrary_3_PEAVFVulkanRayTracingShader__AEBVFRayTracingPipelineStateInitializer___Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FVulkanPipelineStateCacheManager::CreateVKPipeline'::__l5::<lambda_1>,1,0> @ 145b4c200

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanPipelineStateCacheManager::CreateVKPipeline'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FVulkanPipelineStateCacheManager::CreateVKPipeline_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanPipelineStateCacheManager::CreateVKPipeline'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// operator<< @ 145b51470

FArchive * __cdecl operator<<(FArchive *param_1,FAttachmentDesc *param_2)

{
  ulong64 *puVar1;
  uint *puVar2;
  uchar *puVar3;
  ulong64 *puVar4;
  
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Format);
    }
  }
  else {
    param_2->Format = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Flags,1);
  }
  else {
    param_2->Flags = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Samples,1);
  }
  else {
    param_2->Samples = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->LoadOp,1);
  }
  else {
    param_2->LoadOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->StoreOp,1);
  }
  else {
    param_2->StoreOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->StencilLoadOp,1);
  }
  else {
    param_2->StencilLoadOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->StencilStoreOp,1);
  }
  else {
    param_2->StencilStoreOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = &param_2->InitialLayout;
  puVar4 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->FinalLayout;
  puVar4 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar4 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 145b516d0

FArchive * __cdecl operator<<(FArchive *param_1,FAttachmentRef *param_2)

{
  ulong64 *puVar1;
  uint *puVar2;
  ulong64 *puVar3;
  
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Attachment);
    }
  }
  else {
    param_2->Attachment = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->Layout;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar3 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 145b517a0

FArchive * __cdecl operator<<(FArchive *param_1,FBlendAttachment *param_2)

{
  uchar *puVar1;
  
  operator<<(param_1,&param_2->bBlend);
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->ColorBlendOp,1);
  }
  else {
    param_2->ColorBlendOp = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->SrcColorBlendFactor,1);
  }
  else {
    param_2->SrcColorBlendFactor = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->DstColorBlendFactor,1);
  }
  else {
    param_2->DstColorBlendFactor = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->AlphaBlendOp,1);
  }
  else {
    param_2->AlphaBlendOp = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->SrcAlphaBlendFactor,1);
  }
  else {
    param_2->SrcAlphaBlendFactor = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->DstAlphaBlendFactor,1);
  }
  else {
    param_2->DstAlphaBlendFactor = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->ColorWriteMask = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->ColorWriteMask,1);
  return param_1;
}

// operator<< @ 145b51950

FArchive * __cdecl operator<<(FArchive *param_1,FDepthStencil *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  uchar *puVar3;
  uint *puVar4;
  
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    param_2->DepthCompareOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  operator<<(param_1,&param_2->bDepthTestEnable);
  operator<<(param_1,&param_2->bDepthWriteEnable);
  operator<<(param_1,&param_2->bDepthBoundsTestEnable);
  operator<<(param_1,&param_2->bStencilTestEnable);
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FrontFailOp,1);
  }
  else {
    param_2->FrontFailOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FrontPassOp,1);
  }
  else {
    param_2->FrontPassOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FrontDepthFailOp,1);
  }
  else {
    param_2->FrontDepthFailOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FrontCompareOp,1);
  }
  else {
    param_2->FrontCompareOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = &param_2->FrontCompareMask;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->FrontWriteMask;
  puVar2 = &param_1->field_0x2a;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->FrontReference;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->BackFailOp,1);
  }
  else {
    param_2->BackFailOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->BackPassOp,1);
  }
  else {
    param_2->BackPassOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->BackDepthFailOp,1);
  }
  else {
    param_2->BackDepthFailOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->BackCompareOp,1);
  }
  else {
    param_2->BackCompareOp = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = &param_2->BackCompareMask;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->BackWriteMask;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->BackReference;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar4 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar2 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 145b51d50

FArchive * __cdecl operator<<(FArchive *param_1,FDescriptorSetLayoutBinding *param_2)

{
  uint *puVar1;
  uchar *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Binding);
    }
  }
  else {
    param_2->Binding = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->DescriptorType,1);
  }
  else {
    param_2->DescriptorType = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->StageFlags = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->StageFlags,1);
  return param_1;
}

// operator<< @ 145b51e30

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FGfxPipelineDesc *param_2)

{
  ushort *puVar1;
  float *pfVar2;
  undefined1 *puVar3;
  uint *puVar4;
  ushort *puVar5;
  uint *puVar6;
  uchar *puVar7;
  float *pfVar8;
  ulong64 *puVar9;
  longlong *plVar10;
  ulong64 *puVar11;
  EVRSShadingRate local_res8 [8];
  EVRSRateCombiner local_res10 [8];
  
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->VertexInputKey);
    }
  }
  else {
    param_2->VertexInputKey = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->RasterizationSamples;
  puVar3 = &param_1->field_0x2a;
  puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar4 = &param_2->Topology;
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ColorAttachmentStates);
  TArrayPrivateFriend::
  Serialize<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->DescriptorSetLayoutBindings);
  TArrayPrivateFriend::Serialize<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->VertexBindings);
  TArrayPrivateFriend::Serialize<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->VertexAttributes);
  puVar7 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Rasterizer,1);
  }
  else {
    (param_2->Rasterizer).PolygonMode = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar7 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&(param_2->Rasterizer).CullMode,1);
  }
  else {
    (param_2->Rasterizer).CullMode = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pfVar2 = &(param_2->Rasterizer).DepthBiasSlopeScale;
  pfVar8 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar8 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &(param_2->Rasterizer).DepthBiasConstantFactor;
  pfVar8 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar8 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->DepthStencil);
  for (puVar11 = param_2->ShaderKeys; puVar11 != &param_2->ShaderKeyShared; puVar11 = puVar11 + 1) {
    puVar9 = (ulong64 *)**(longlong **)&param_1->field_0x8;
    if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar9 + 1) {
      if ((*puVar3 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar11,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar11);
      }
    }
    else {
      *puVar11 = *puVar9;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
  }
  operator<<(param_1,&param_2->RenderTargets);
  local_res8[0] = param_2->ShadingRate;
  plVar10 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = param_2->Combiner;
  if ((EVRSShadingRate *)plVar10[1] < (EVRSShadingRate *)*plVar10 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EVRSShadingRate *)*plVar10;
    *plVar10 = *plVar10 + 1;
  }
  plVar10 = *(longlong **)&param_1->field_0x8;
  if ((EVRSRateCombiner *)plVar10[1] < (EVRSRateCombiner *)*plVar10 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
  }
  else {
    local_res10[0] = *(EVRSRateCombiner *)*plVar10;
    *plVar10 = *plVar10 + 1;
  }
  puVar7 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->UseAlphaToCoverage,1);
  }
  else {
    param_2->UseAlphaToCoverage = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  return param_1;
}

// operator<< @ 145b52190

FArchive * __cdecl operator<<(FArchive *param_1,FRasterizer *param_2)

{
  float *pfVar1;
  uchar *puVar2;
  float *pfVar3;
  
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    param_2->PolygonMode = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->CullMode,1);
  }
  else {
    param_2->CullMode = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pfVar1 = &param_2->DepthBiasSlopeScale;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->DepthBiasConstantFactor;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator<< @ 145b522d0

FArchive * __cdecl operator<<(FArchive *param_1,FRenderTargets *param_2)

{
  FStencilAttachmentRef *pFVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uchar *puVar4;
  ulong64 *puVar5;
  ulong64 *puVar6;
  uint *puVar7;
  
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->NumAttachments,1);
  }
  else {
    param_2->NumAttachments = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->NumColorAttachments,1);
  }
  else {
    param_2->NumColorAttachments = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->NumUsedClearValues,1);
  }
  else {
    param_2->NumUsedClearValues = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  TArrayPrivateFriend::
  Serialize<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ColorAttachments);
  TArrayPrivateFriend::
  Serialize<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ResolveAttachments);
  operator<<(param_1,&param_2->Depth);
  pFVar1 = &param_2->Stencil;
  puVar5 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Layout);
    }
  }
  else {
    pFVar1->Layout = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar3 = &param_1->field_0x2a;
  operator<<(param_1,&param_2->FragmentDensity);
  TArrayPrivateFriend::
  Serialize<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Descriptions);
  puVar5 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->StencilDescription,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&(param_2->StencilDescription).InitialLayout);
    }
  }
  else {
    (param_2->StencilDescription).InitialLayout = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar5 = &(param_2->StencilDescription).FinalLayout;
  puVar6 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar5);
    }
  }
  else {
    *puVar5 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->bHasDepthStencil,1);
  }
  else {
    param_2->bHasDepthStencil = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->bHasResolveAttachments,1);
  }
  else {
    param_2->bHasResolveAttachments = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->bHasDepthStencilResolve,1);
  }
  else {
    param_2->bHasDepthStencilResolve = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = &param_2->RenderPassCompatibleHash;
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&param_2->Extent3D);
  return param_1;
}

// operator<< @ 145b525b0

FArchive * __cdecl operator<<(FArchive *param_1,FStencilAttachmentDesc *param_2)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->InitialLayout);
    }
  }
  else {
    param_2->InitialLayout = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->FinalLayout;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar2 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 145b52680

FArchive * __cdecl operator<<(FArchive *param_1,FStencilAttachmentRef *param_2)

{
  ulong64 *puVar1;
  
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar1 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    param_2->Layout = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&param_2->Layout);
  return param_1;
}

// operator<< @ 145b526f0

FArchive * __cdecl operator<<(FArchive *param_1,FVertexAttribute *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Location);
    }
  }
  else {
    param_2->Location = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->Binding;
  puVar1 = &param_1->field_0x2a;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->Format;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->Offset;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar1 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return param_1;
}

// operator<< @ 145b52850

FArchive * __cdecl operator<<(FArchive *param_1,FVertexBinding *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  ushort *puVar3;
  
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Stride);
    }
  }
  else {
    param_2->Stride = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->Binding;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->InputRate;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 145b52980

FArchive * __cdecl operator<<(FArchive *param_1,FVulkanPipelineSize *param_2)

{
  uint *puVar1;
  ulong64 *puVar2;
  uint *puVar3;
  
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->ShaderHash);
    }
  }
  else {
    param_2->ShaderHash = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->PipelineSize;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 145b52a50

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FGfxPipelineDesc *param_2)

{
  ushort *puVar1;
  float *pfVar2;
  undefined1 *puVar3;
  uint *puVar4;
  ushort *puVar5;
  uint *puVar6;
  uchar *puVar7;
  float *pfVar8;
  ulong64 *puVar9;
  longlong *plVar10;
  ulong64 *puVar11;
  EVRSShadingRate aEStackX_8 [8];
  EVRSRateCombiner aEStackX_10 [8];
  
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->VertexInputKey);
    }
  }
  else {
    param_2->VertexInputKey = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->RasterizationSamples;
  puVar3 = &param_1->field_0x2a;
  puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar4 = &param_2->Topology;
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ColorAttachmentStates);
  TArrayPrivateFriend::
  Serialize<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->DescriptorSetLayoutBindings);
  TArrayPrivateFriend::Serialize<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->VertexBindings);
  TArrayPrivateFriend::Serialize<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->VertexAttributes);
  puVar7 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Rasterizer,1);
  }
  else {
    (param_2->Rasterizer).PolygonMode = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar7 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&(param_2->Rasterizer).CullMode,1);
  }
  else {
    (param_2->Rasterizer).CullMode = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pfVar2 = &(param_2->Rasterizer).DepthBiasSlopeScale;
  pfVar8 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar8 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &(param_2->Rasterizer).DepthBiasConstantFactor;
  pfVar8 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar8 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->DepthStencil);
  for (puVar11 = param_2->ShaderKeys; puVar11 != &param_2->ShaderKeyShared; puVar11 = puVar11 + 1) {
    puVar9 = (ulong64 *)**(longlong **)&param_1->field_0x8;
    if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar9 + 1) {
      if ((*puVar3 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar11,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar11);
      }
    }
    else {
      *puVar11 = *puVar9;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
  }
  operator<<(param_1,&param_2->RenderTargets);
  aEStackX_8[0] = param_2->ShadingRate;
  plVar10 = *(longlong **)&param_1->field_0x8;
  aEStackX_10[0] = param_2->Combiner;
  if ((EVRSShadingRate *)plVar10[1] < (EVRSShadingRate *)*plVar10 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,aEStackX_8,1);
  }
  else {
    aEStackX_8[0] = *(EVRSShadingRate *)*plVar10;
    *plVar10 = *plVar10 + 1;
  }
  plVar10 = *(longlong **)&param_1->field_0x8;
  if ((EVRSRateCombiner *)plVar10[1] < (EVRSRateCombiner *)*plVar10 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,aEStackX_10,1);
  }
  else {
    aEStackX_10[0] = *(EVRSRateCombiner *)*plVar10;
    *plVar10 = *plVar10 + 1;
  }
  puVar7 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->UseAlphaToCoverage,1);
  }
  else {
    param_2->UseAlphaToCoverage = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  return param_1;
}

// ??@365dc370b473eccf69fc454c7d892bf0@ @ 145b52f00

void __thiscall ___365dc370b473eccf69fc454c7d892bf0_(void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
                 ::_vftable_;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = 0;
    *puVar4 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  else {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
                 ::_vftable_;
    *puVar2 = 0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// operator() @ 145b532e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
``FVulkanDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this,FRHICommandListBase *param_1)

{
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkBuffer_T_ptr_uint_VkBufferImageCopy_ptr
  *p_Var1;
  FVulkanCommandListContext *this_00;
  FVulkanCommandBuffer *pFVar2;
  VkBuffer_T *pVVar3;
  undefined1 auStackY_168 [32];
  FVulkanPipelineBarrier local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = FVulkanCommandListContext::Get(param_1);
  pFVar2 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  p_Var1 = VulkanDynamicAPI::vkCmdCopyImageToBuffer;
  pVVar3 = VulkanRHI::FStagingBuffer::GetHandle(*(FStagingBuffer **)((longlong)this + 0x38));
  (*p_Var1)(pFVar2->CommandBufferHandle,
            *(VkImage_T **)(*(longlong *)((longlong)this + 0x40) + 0x170),
            VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,pVVar3,1,this);
  local_138.MemoryBarriers.ArrayMax = 1;
  local_138.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_138.MemoryBarriers.ArrayNum = 0;
  local_138.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_138.ImageBarriers.ArrayNum = 0;
  local_138.ImageBarriers.ArrayMax = 2;
  local_138.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.BufferBarriers.ArrayNum = 0;
  local_138.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddMemoryBarrier(&local_138,0x1000,0x2000,0x1000,0x4000);
  FVulkanPipelineBarrier::Execute(&local_138,pFVar2);
  if (local_138.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_138.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_138.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_138.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_138.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator() @ 145b54eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`ReadSurfaceData<FColor>'::__l55::<lambda_1>::operator()(void *this,FRHICommandListBase *param_1)

{
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkBuffer_T_ptr_uint_VkBufferImageCopy_ptr
  *p_Var1;
  FVulkanCommandListContext *this_00;
  FVulkanCommandBuffer *pFVar2;
  VkBuffer_T *pVVar3;
  undefined1 auStackY_168 [32];
  FVulkanPipelineBarrier local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = FVulkanCommandListContext::Get(param_1);
  pFVar2 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  p_Var1 = VulkanDynamicAPI::vkCmdCopyImageToBuffer;
  pVVar3 = VulkanRHI::FStagingBuffer::GetHandle(*(FStagingBuffer **)((longlong)this + 0x38));
  (*p_Var1)(pFVar2->CommandBufferHandle,
            *(VkImage_T **)(*(longlong *)((longlong)this + 0x40) + 0x170),
            VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,pVVar3,1,this);
  local_138.MemoryBarriers.ArrayMax = 1;
  local_138.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_138.MemoryBarriers.ArrayNum = 0;
  local_138.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_138.ImageBarriers.ArrayNum = 0;
  local_138.ImageBarriers.ArrayMax = 2;
  local_138.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.BufferBarriers.ArrayNum = 0;
  local_138.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddMemoryBarrier(&local_138,0x1000,0x2000,0x1000,0x4000);
  FVulkanPipelineBarrier::Execute(&local_138,pFVar2);
  if (local_138.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_138.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_138.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_138.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_138.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator() @ 145b54ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`ReadSurfaceData<FLinearColor>'::__l55::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkBuffer_T_ptr_uint_VkBufferImageCopy_ptr
  *p_Var1;
  FVulkanCommandListContext *this_00;
  FVulkanCommandBuffer *pFVar2;
  VkBuffer_T *pVVar3;
  undefined1 auStackY_168 [32];
  FVulkanPipelineBarrier local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = FVulkanCommandListContext::Get(param_1);
  pFVar2 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  p_Var1 = VulkanDynamicAPI::vkCmdCopyImageToBuffer;
  pVVar3 = VulkanRHI::FStagingBuffer::GetHandle(*(FStagingBuffer **)((longlong)this + 0x38));
  (*p_Var1)(pFVar2->CommandBufferHandle,
            *(VkImage_T **)(*(longlong *)((longlong)this + 0x40) + 0x170),
            VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,pVVar3,1,this);
  local_138.MemoryBarriers.ArrayMax = 1;
  local_138.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_138.MemoryBarriers.ArrayNum = 0;
  local_138.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_138.ImageBarriers.ArrayNum = 0;
  local_138.ImageBarriers.ArrayMax = 2;
  local_138.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.BufferBarriers.ArrayNum = 0;
  local_138.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddMemoryBarrier(&local_138,0x1000,0x2000,0x1000,0x4000);
  FVulkanPipelineBarrier::Execute(&local_138,pFVar2);
  if (local_138.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_138.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_138.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_138.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_138.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145b558a4

/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanComputePipeline::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanComputePipeline::_vector_deleting_destructor__adjustor_40__
          (FVulkanComputePipeline *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FVulkanComputePipeline *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145b558c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker>::
_scalar_deleting_destructor_
          (FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> *this,
          uint param_1)

{
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55900

void * __thiscall
IBaseDelegateInstance<void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55930

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55960

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVulkanPipelineStateCacheManager,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55990

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVulkanPipelineStateCacheManager,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FVulkanPipelineStateCacheManager,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b559c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b559f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55a20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
TDoubleLinkedList<FVulkanGraphicsPipelineState_*>::_scalar_deleting_destructor_
          (TDoubleLinkedList<FVulkanGraphicsPipelineState_*> *this,uint param_1)

{
  ~TDoubleLinkedList<FVulkanGraphicsPipelineState_*>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GetOrAddLibrary_FVulkanRayTracingPipelineLibraryCache__QEAAPEAUFPipelineLibrary_3_PEAVFVulkanRayTracingShader__AEBVFRayTracingPipelineStateInitializer___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanPipelineStateCacheManager::CreateVKPipeline'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanPipelineStateCacheManager::CreateVKPipeline'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55ae0

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
::__l2::FParallelForData::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  *(undefined ***)this =
       &ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask,int>
            (*(FTracedTask **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(*(void **)((longlong)this + 0x78));
  }
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)((longlong)this + 8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
    }
    else {
      __empty_global_delete(this,0xc0,0x40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55bf0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanCommonPipelineDescriptorState::_scalar_deleting_destructor_
          (FVulkanCommonPipelineDescriptorState *this,uint param_1)

{
  ~FVulkanCommonPipelineDescriptorState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55c30

void * __thiscall
FVulkanComputePipeline::_scalar_deleting_destructor_(FVulkanComputePipeline *this,uint param_1)

{
  ~FVulkanComputePipeline(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55c70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanComputePipelineDescriptorState::_scalar_deleting_destructor_
          (FVulkanComputePipelineDescriptorState *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FVulkanComputePipelineDescriptorState__6B_;
  FRHIResource::Release((FRHIResource *)&this->ComputePipeline->_padding_);
  pFVar1 = (this->PackedUniformBuffers).PackedUniformBuffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVulkanCommonPipelineDescriptorState::~FVulkanCommonPipelineDescriptorState
            ((FVulkanCommonPipelineDescriptorState *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55ce0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanGraphicsPipelineDescriptorState::_scalar_deleting_destructor_
          (FVulkanGraphicsPipelineDescriptorState *this,uint param_1)

{
  int *piVar1;
  longlong lVar2;
  TStaticArray<unsigned_int,5,4294967295> *pTVar3;
  
  this->_padding_ = (longlong)&___7FVulkanGraphicsPipelineDescriptorState__6B_;
  FRHIResource::Release((FRHIResource *)this->GfxPipeline);
  pTVar3 = &this->PackedUniformBuffersMask;
  lVar2 = 5;
  do {
    piVar1 = (int *)(pTVar3 + -1);
    pTVar3 = (TStaticArray<unsigned_int,5,4294967295> *)((longlong)(pTVar3 + -1) + 4);
    lVar2 = lVar2 + -1;
    if (*(void **)(piVar1 + 1) != (void *)0x0) {
      FMemory::Free(*(void **)(piVar1 + 1));
    }
  } while (lVar2 != 0);
  FVulkanCommonPipelineDescriptorState::~FVulkanCommonPipelineDescriptorState
            ((FVulkanCommonPipelineDescriptorState *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55d80

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanGraphicsPipelineState::_scalar_deleting_destructor_
          (FVulkanGraphicsPipelineState *this,uint param_1)

{
  ~FVulkanGraphicsPipelineState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55dc0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall FVulkanPipeline::_scalar_deleting_destructor_(FVulkanPipeline *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FVulkanPipeline__6B_;
  LOCK();
  SPipelineCount = (TAtomic<unsigned___int64>)((longlong)SPipelineCount + -1);
  UNLOCK();
  if (this->Pipeline != (VkPipeline_T *)0x0) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&this->Device->DeferredDeletionQueue,Pipeline,(ulong64)this->Pipeline);
    this->Pipeline = (VkPipeline_T *)0x0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55e30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanQueryPool::_scalar_deleting_destructor_(FVulkanQueryPool *this,uint param_1)

{
  ~FVulkanQueryPool(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55e70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanRayTracingCompactedSizeQueryPool::_scalar_deleting_destructor_
          (FVulkanRayTracingCompactedSizeQueryPool *this,uint param_1)

{
  longlong *plVar1;
  FVulkanSyncPoint *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  
  pFVar2 = (this->SyncPoint).Reference;
  if (pFVar2 != (FVulkanSyncPoint *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->QueryOutput).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FVulkanQueryPool::~FVulkanQueryPool((FVulkanQueryPool *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55ef0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanRayTracingGeometry::_scalar_deleting_destructor_
          (FVulkanRayTracingGeometry *this,uint param_1)

{
  ~FVulkanRayTracingGeometry(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55f30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanRayTracingPipelineState::_scalar_deleting_destructor_
          (FVulkanRayTracingPipelineState *this,uint param_1)

{
  ~FVulkanRayTracingPipelineState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55f70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void * __thiscall
FVulkanRayTracingScene::_scalar_deleting_destructor_(FVulkanRayTracingScene *this,uint param_1)

{
  ~FVulkanRayTracingScene(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b55fb0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanRayTracingShaderTable::_scalar_deleting_destructor_
          (FVulkanRayTracingShaderTable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FVulkanRayTracingShaderTable__6B_;
  ReleaseLocalBuffer(this->Device,&this->Miss);
  ReleaseLocalBuffer(this->Device,&this->HitGroup);
  ReleaseLocalBuffer(this->Device,&this->Callable);
  DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
            ((TRefCountPtr<FRHIUniformBuffer> *)
             (this->ReferencedUniformBuffers).AllocatorInstance.Data,
             (this->ReferencedUniformBuffers).ArrayNum);
  pFVar1 = (this->ReferencedUniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InlineGeometryParameterData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&(this->Callable).LocalAllocation);
  pFVar1 = (this->Callable).HostBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&(this->HitGroup).LocalAllocation);
  pFVar1 = (this->HitGroup).HostBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&(this->Miss).LocalAllocation);
  pFVar1 = (this->Miss).HostBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  RHIValidation::FShaderBindingTable::~FShaderBindingTable((FShaderBindingTable *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b560d0

void * __thiscall
FVulkanRenderQuery::_scalar_deleting_destructor_(FVulkanRenderQuery *this,uint param_1)

{
  ~FVulkanRenderQuery(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// AddAccelerationStructureBuildBarrier @ 145b56890

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __cdecl AddAccelerationStructureBuildBarrier(VkCommandBuffer_T *param_1)

{
  VkMemoryBarrier local_28;
  
  local_28.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  local_28._4_8_ = 0;
  local_28.pNext._4_4_ = 0;
  local_28.srcAccessMask = 0x400000;
  local_28.dstAccessMask = 0x600000;
  (*VulkanDynamicAPI::vkCmdPipelineBarrier)
            (param_1,0x2000800,0x2000800,0,1,&local_28,0,(VkBufferMemoryBarrier *)0x0,0,
             (VkImageMemoryBarrier *)0x0);
  return;
}

// BuildAccelerationStructure @ 145b58700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkGeometryTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */

void __cdecl
BuildAccelerationStructure
          (FVulkanCommandListContext *param_1,FVulkanRayTracingScene *param_2,FVulkanBuffer *param_3
          ,uint param_4,FVulkanBuffer *param_5,uint param_6,uint param_7,
          EAccelerationStructureBuildMode param_8)

{
  FVulkanView *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUpdatedTLAS> FVar9;
  FThreadStats *this;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBuiltTLAS> FVar11;
  FVulkanCommandBuffer *pFVar12;
  FVulkanBuffer *this_00;
  FVulkanBuffer *pFVar13;
  ulonglong uVar14;
  FNameEntryId FVar15;
  undefined1 auStackY_1e28 [32];
  undefined1 local_1dc8 [40];
  FName FStack_1da0;
  FNameEntryId local_1d98;
  uint uStack_1d94;
  undefined4 uStack_1d90;
  undefined4 uStack_1d8c;
  undefined4 uStack_1d88;
  undefined4 uStack_1d84;
  FName local_1d80;
  FName local_1d78;
  VkAccelerationStructureBuildRangeInfoKHR *local_1d70;
  FStatMessage local_1d68;
  FStatMessage local_1d58;
  undefined1 local_1d48 [36];
  undefined8 local_1d24;
  undefined8 uStack_1d1c;
  undefined8 local_1d14;
  undefined8 uStack_1d0c;
  undefined8 local_1d04;
  undefined8 uStack_1cfc;
  undefined8 local_1cf4;
  undefined8 uStack_1cec;
  undefined8 local_1ce4;
  undefined8 uStack_1cdc;
  undefined8 local_1cd4;
  undefined4 local_1ccc;
  VkAccelerationStructureBuildGeometryInfoKHR local_1cc8;
  undefined4 local_1c78;
  undefined8 local_1c74;
  undefined8 uStack_1c6c;
  undefined8 local_1c64;
  undefined8 uStack_1c5c;
  undefined4 local_1c54;
  ulonglong local_1c48;
  undefined8 uStack_1c40;
  wchar_t *local_1c38;
  undefined8 uStack_1c30;
  undefined8 local_1c28;
  undefined8 uStack_1c20;
  undefined8 local_1c18;
  VkAccelerationStructureBuildRangeInfoKHR local_1c10;
  FRHICommandListBase local_1c00;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x145b5871f;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1e28;
  uVar14 = (ulonglong)param_4;
  local_1dc8._8_8_ = param_1;
  if ((param_5 == (FVulkanBuffer *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InInstanceBuffer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x2fd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_2->Initializer).MaxNumInstances < param_7) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("NumInstances <= Scene.Initializer.MaxNumInstances",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x2fe,L"NumInstances must be less or equal to MaxNumInstances"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_2->AccelerationStructureBuffer).Reference == (FVulkanBuffer *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Scene.AccelerationStructureBuffer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x300,
                         L"A buffer must be bound to the ray tracing scene before it can be built.")
     , bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_2->View).Ptr == (FVulkanView *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Scene.View.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x301,
                         L"A buffer must be bound to the ray tracing scene before it can be built.")
     , bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_8 == Update) {
    if ((param_7 != param_2->NumInstances) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("NumInstances == Scene.NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                           ,0x307,
                           L"Number of instances used to update TLAS must match the number used to build."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    param_2->NumInstances = param_7;
  }
  this_00 = (FVulkanBuffer *)0x0;
  pFVar13 = (FVulkanBuffer *)(local_1dc8._8_8_ + 0x50);
  if ((FVulkanCommandListContext *)local_1dc8._8_8_ == (FVulkanCommandListContext *)0x0) {
    pFVar13 = this_00;
  }
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
            ((FRHICommandList_RecursiveHazardous *)&local_1c00,(IRHICommandContext *)pFVar13);
  if (param_3 == (FVulkanBuffer *)0x0) {
    lVar6 = 0xd8;
    if (param_8 != Update) {
      lVar6 = 0xd0;
    }
    uVar14 = 0;
    local_1dc8._16_4_ = *(uint *)((longlong)&param_2->_padding_ + lVar6);
    local_1dc8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_1d8c = 0;
    uStack_1d88 = 0;
    local_1dc8._32_8_ = L"BuildScratchTLAS";
    local_1dc8._20_4_ = 0;
    local_1dc8._24_4_ = 0x90008;
    local_1c48 = (ulonglong)(uint)local_1dc8._16_4_;
    uStack_1c40 = CONCAT44(local_1dc8._28_4_,0x90008);
    FStack_1da0.ComparisonIndex.Value = 0;
    FStack_1da0.Number = 0;
    uStack_1d94 = 0;
    uStack_1d90 = 0;
    local_1d98.Value = 0x400;
    local_1c28 = 0x400;
    uStack_1c20 = 0;
    uStack_1d84 = 0;
    local_1c38 = L"BuildScratchTLAS";
    uStack_1c30 = 0;
    local_1c18 = 0;
    TVar7 = FRHICommandListBase::CreateBuffer(&local_1c00,(FRHIBufferCreateDesc *)local_1dc8);
    if ((FRHIBuffer *)local_1d48 != TVar7.Reference) {
      this_00 = (FVulkanBuffer *)(TVar7.Reference)->_padding_;
      (TVar7.Reference)->_padding_ = 0;
    }
    param_3 = this_00;
    if ((FRHIResource *)CONCAT44(local_1dc8._4_4_,local_1dc8._0_4_) != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)CONCAT44(local_1dc8._4_4_,local_1dc8._0_4_));
    }
  }
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous
            ((FRHICommandList_RecursiveHazardous *)&local_1c00);
  if (param_3 == (FVulkanBuffer *)0x0) {
    if (param_8 == Update) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InScratchBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x323,L"TLAS update requires scratch buffer of at least %lld bytes.");
      if (bVar4) {
code_r0x000145b589a8:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InScratchBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x327,L"TLAS build requires scratch buffer of at least %lld bytes.");
      if (bVar4) goto code_r0x000145b589a8;
    }
  }
  local_1cd4 = 0;
  local_1ccc = 0;
  local_1cc8.ppGeometries._4_4_ = 0;
  local_1cc8.scratchData.deviceAddress._0_4_ = 0;
  local_1cc8.scratchData.deviceAddress._4_4_ = 0;
  local_1c54 = 0;
  local_1d48._32_4_ = 0x3b9d13f6;
  local_1d24 = 0;
  uStack_1d1c = 0;
  local_1cc8.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR;
  local_1d14 = 0;
  uStack_1d0c = 0;
  local_1c78 = 0x3b9d1404;
  local_1d04 = 0;
  uStack_1cfc = 0;
  local_1cf4 = 0;
  uStack_1cec = 0;
  local_1ce4 = 0;
  uStack_1cdc = 0;
  local_1cc8._4_8_ = 0;
  local_1cc8._12_8_ = 0;
  local_1cc8.flags = 0;
  local_1cc8.mode = VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR;
  local_1cc8._28_4_ = 0;
  local_1cc8.srcAccelerationStructure._0_4_ = 0;
  local_1cc8.srcAccelerationStructure._4_4_ = 0;
  local_1cc8.dstAccelerationStructure._0_4_ = 0;
  local_1cc8.dstAccelerationStructure._4_4_ = 0;
  local_1cc8.geometryCount = 0;
  local_1cc8._52_8_ = 0;
  local_1cc8._60_8_ = 0;
  local_1c74 = 0;
  uStack_1c6c._0_4_ = 0;
  uStack_1c6c._4_4_ = None;
  local_1c64 = 0;
  uStack_1c5c = 0;
  GetTLASBuildData(param_2->Device->Device,param_7,
                   (ulonglong)param_6 + (param_5->CurrentBufferAlloc).DeviceAddress,
                   (param_2->Initializer).BuildFlags,param_8,
                   (FVkRtTLASBuildData *)(local_1d48 + 0x20));
  pFVar1 = (param_2->View).Ptr;
  if (((pFVar1->Storage).TypeIndex != '\x04') &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar6 = (pFVar1->Storage)._padding_;
  local_1cc8.dstAccelerationStructure._0_4_ = (undefined4)lVar6;
  local_1cc8.dstAccelerationStructure._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  if (param_8 == Update) {
    pFVar1 = (param_2->View).Ptr;
    if (((pFVar1->Storage).TypeIndex != '\x04') &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar6 = (pFVar1->Storage)._padding_;
    local_1cc8.srcAccelerationStructure._0_4_ = (undefined4)lVar6;
    local_1cc8.srcAccelerationStructure._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  }
  else {
    local_1cc8.srcAccelerationStructure._0_4_ = 0;
    local_1cc8.srcAccelerationStructure._4_4_ = 0;
  }
  local_1cc8.scratchData.hostAddress =
       (void *)(uVar14 + (param_3->CurrentBufferAlloc).DeviceAddress);
  local_1d70 = &local_1c10;
  local_1c10.primitiveCount = param_7;
  local_1c10.primitiveOffset = 0;
  local_1c10.firstVertex = 0;
  local_1c10.transformOffset = 0;
  if (param_8 == Update) {
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145b58d6e;
    FVar9 = StatPtr_STAT_VulkanRayTracingUpdatedTLAS;
    if (StatPtr_STAT_VulkanRayTracingUpdatedTLAS ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUpdatedTLAS>)0x0) {
      pFVar8 = FName::FName((FName *)(local_1d48 + 8),"STAT_VulkanRayTracingUpdatedTLAS");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUpdatedTLAS>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingUpdatedTLAS,
                         *pFVar8,L"Updated TL AS (per frame)","STATGROUP_VulkanRayTracing",
                         "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,true,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar2 = *(FName *)FVar9;
    FVar15 = FVar2.ComparisonIndex.Value;
    uVar5 = FVar2.Number;
    local_1dc8._0_4_ = FVar15.Value;
    local_1dc8._4_4_ = uVar5;
    if (((FVar2 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145b58d6e;
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(pFVar10);
    }
    local_1d68.NameAndInfo.Number = uVar5 & 0xffffafff | 0xa000;
    local_1d68.StatData.Pad[0] = '\x01';
    local_1d68.StatData.Pad[1] = '\0';
    local_1d68.StatData.Pad[2] = '\0';
    local_1d68.StatData.Pad[3] = '\0';
    local_1d68.StatData.Pad[4] = '\0';
    local_1d68.StatData.Pad[5] = '\0';
    local_1d68.StatData.Pad[6] = '\0';
    local_1d68.StatData.Pad[7] = '\0';
    local_1d80 = FVar2;
    local_1d68.NameAndInfo.Index.Value = FVar15.Value;
    FThreadStats::AddStatMessage(this,&local_1d68);
    pFVar8 = &local_1d80;
  }
  else {
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145b58d6e;
    FVar11 = StatPtr_STAT_VulkanRayTracingBuiltTLAS;
    if (StatPtr_STAT_VulkanRayTracingBuiltTLAS ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBuiltTLAS>)0x0) {
      pFVar8 = FName::FName((FName *)(local_1d48 + 0x10),"STAT_VulkanRayTracingBuiltTLAS");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBuiltTLAS>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingBuiltTLAS,
                          *pFVar8,L"Built TL AS (per frame)","STATGROUP_VulkanRayTracing",
                          "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar2 = *(FName *)FVar11;
    FVar15 = FVar2.ComparisonIndex.Value;
    uVar5 = FVar2.Number;
    local_1dc8._0_4_ = FVar15.Value;
    local_1dc8._4_4_ = uVar5;
    if (((FVar2 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145b58d6e;
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(pFVar10);
    }
    local_1d58.NameAndInfo.Number = uVar5 & 0xffffafff | 0xa000;
    local_1d58.StatData.Pad[0] = '\x01';
    local_1d58.StatData.Pad[1] = '\0';
    local_1d58.StatData.Pad[2] = '\0';
    local_1d58.StatData.Pad[3] = '\0';
    local_1d58.StatData.Pad[4] = '\0';
    local_1d58.StatData.Pad[5] = '\0';
    local_1d58.StatData.Pad[6] = '\0';
    local_1d58.StatData.Pad[7] = '\0';
    local_1d78 = FVar2;
    local_1d58.NameAndInfo.Index.Value = FVar15.Value;
    FThreadStats::AddStatMessage(this,&local_1d58);
    pFVar8 = &local_1d78;
  }
  FStatsTrace::Add(pFVar8,1);
  if (this->ScopeCount == 0) {
    FThreadStats::Flush(this,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this,false,false);
  }
LAB_145b58d6e:
  pFVar12 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)local_1dc8._8_8_);
  AddAccelerationStructureBuildBarrier(pFVar12->CommandBufferHandle);
  (*VulkanDynamicAPI::vkCmdBuildAccelerationStructuresKHR)
            (pFVar12->CommandBufferHandle,1,&local_1cc8,&local_1d70);
  AddAccelerationStructureBuildBarrier(pFVar12->CommandBufferHandle);
  param_2->bBuilt = true;
  if (this_00 != (FVulkanBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// ConvertRawA2B10G10R10DataToFLinearColor @ 145b5c470

void __cdecl
`anonymous_namespace'::ConvertRawA2B10G10R10DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  FLinearColor *pFVar5;
  float *pfVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  
  fVar3 = __real_3a802008;
  fVar2 = __real_3eaaaaab;
  if (param_2 != 0) {
    uVar9 = 0;
    do {
      uVar4 = 0;
      pFVar5 = param_5 + uVar9 * param_1;
      puVar8 = (uint *)(param_3 + uVar9 * param_4);
      if (3 < param_1) {
        uVar4 = (param_1 - 4 >> 2) + 1;
        uVar7 = (ulonglong)uVar4;
        uVar4 = uVar4 * 4;
        pfVar6 = &pFVar5[1].field0_0x0._s_0.B;
        do {
          uVar1 = *puVar8;
          (pFVar5->field0_0x0)._s_0.R = (float)(uVar1 & 0x3ff) * fVar3;
          pfVar6[-5] = (float)(uVar1 >> 10 & 0x3ff) * fVar3;
          pfVar6[-4] = (float)(uVar1 >> 0x14 & 0x3ff) * fVar3;
          pfVar6[-3] = (float)(uVar1 >> 0x1e) * fVar2;
          uVar1 = puVar8[1];
          ((FLinearColor_u_0_s_0 *)(pfVar6 + -2))->R = (float)(uVar1 & 0x3ff) * fVar3;
          pfVar6[-1] = (float)(uVar1 >> 10 & 0x3ff) * fVar3;
          *pfVar6 = (float)(uVar1 >> 0x14 & 0x3ff) * fVar3;
          pfVar6[1] = (float)(uVar1 >> 0x1e) * fVar2;
          uVar1 = puVar8[2];
          pfVar6[2] = (float)(uVar1 & 0x3ff) * fVar3;
          pfVar6[3] = (float)(uVar1 >> 10 & 0x3ff) * fVar3;
          pfVar6[4] = (float)(uVar1 >> 0x14 & 0x3ff) * fVar3;
          pfVar6[5] = (float)(uVar1 >> 0x1e) * fVar2;
          uVar1 = puVar8[3];
          pFVar5 = pFVar5 + 4;
          puVar8 = puVar8 + 4;
          pfVar6[6] = (float)(uVar1 & 0x3ff) * fVar3;
          pfVar6[7] = (float)(uVar1 >> 10 & 0x3ff) * fVar3;
          pfVar6[8] = (float)(uVar1 >> 0x14 & 0x3ff) * fVar3;
          pfVar6[9] = (float)(uVar1 >> 0x1e) * fVar2;
          uVar7 = uVar7 - 1;
          pfVar6 = pfVar6 + 0x10;
        } while (uVar7 != 0);
      }
      if (uVar4 < param_1) {
        uVar7 = (ulonglong)(param_1 - uVar4);
        pfVar6 = &(pFVar5->field0_0x0)._s_0.B;
        do {
          uVar4 = *puVar8;
          puVar8 = puVar8 + 1;
          ((FLinearColor_u_0_s_0 *)(pfVar6 + -2))->R = (float)(uVar4 & 0x3ff) * fVar3;
          pfVar6[-1] = (float)(uVar4 >> 10 & 0x3ff) * fVar3;
          *pfVar6 = (float)(uVar4 >> 0x14 & 0x3ff) * fVar3;
          pfVar6[1] = (float)(uVar4 >> 0x1e) * fVar2;
          uVar7 = uVar7 - 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar7 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_2);
  }
  return;
}

// ConvertRawB8G8R8A8DataToFLinearColor @ 145b5c780

void __cdecl
`anonymous_namespace'::ConvertRawB8G8R8A8DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  uint uVar6;
  FLinearColor *pFVar7;
  float *pfVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint uVar11;
  
  fVar5 = __real_3b808081;
  if (param_2 != 0) {
    uVar11 = 0;
    do {
      uVar6 = 0;
      pFVar7 = param_5 + uVar11 * param_1;
      pbVar9 = param_3 + uVar11 * param_4;
      if (3 < param_1) {
        uVar6 = (param_1 - 4 >> 2) + 1;
        uVar10 = (ulonglong)uVar6;
        uVar6 = uVar6 * 4;
        pfVar8 = &pFVar7[1].field0_0x0._s_0.B;
        do {
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[1]];
          fVar3 = FLinearColor::sRGBToLinearTable[*pbVar9];
          bVar4 = pbVar9[3];
          (pFVar7->field0_0x0)._s_0.R = FLinearColor::sRGBToLinearTable[pbVar9[2]];
          pFVar7 = pFVar7 + 4;
          pfVar8[-5] = fVar2;
          pfVar8[-4] = fVar3;
          pfVar8[-3] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[5]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[4]];
          bVar4 = pbVar9[7];
          ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R = FLinearColor::sRGBToLinearTable[pbVar9[6]];
          pfVar8[-1] = fVar2;
          *pfVar8 = fVar3;
          pfVar8[1] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[9]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[8]];
          bVar4 = pbVar9[0xb];
          pfVar8[2] = FLinearColor::sRGBToLinearTable[pbVar9[10]];
          pfVar8[3] = fVar2;
          pfVar8[4] = fVar3;
          pfVar8[5] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[0xd]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[0xc]];
          bVar4 = pbVar9[0xf];
          pbVar1 = pbVar9 + 0xe;
          pbVar9 = pbVar9 + 0x10;
          pfVar8[6] = FLinearColor::sRGBToLinearTable[*pbVar1];
          pfVar8[7] = fVar2;
          pfVar8[8] = fVar3;
          pfVar8[9] = (float)bVar4 * fVar5;
          uVar10 = uVar10 - 1;
          pfVar8 = pfVar8 + 0x10;
        } while (uVar10 != 0);
      }
      if (uVar6 < param_1) {
        uVar10 = (ulonglong)(param_1 - uVar6);
        pfVar8 = &(pFVar7->field0_0x0)._s_0.B;
        pbVar9 = pbVar9 + 1;
        do {
          fVar2 = FLinearColor::sRGBToLinearTable[*pbVar9];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[-1]];
          bVar4 = pbVar9[2];
          ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R = FLinearColor::sRGBToLinearTable[pbVar9[1]];
          pfVar8[-1] = fVar2;
          *pfVar8 = fVar3;
          pfVar8[1] = (float)bVar4 * fVar5;
          uVar10 = uVar10 - 1;
          pfVar8 = pfVar8 + 4;
          pbVar9 = pbVar9 + 4;
        } while (uVar10 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  return;
}

// ConvertRawDataToFColor @ 145b5c9b0

/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
ConvertRawDataToFColor
          (VkFormat param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,FColor *param_6,
          FReadSurfaceDataFlags *param_7)

{
  uchar *puVar1;
  uchar uVar2;
  ushort uVar3;
  code *pcVar4;
  FColor FVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FColor_u_0 FVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uchar *puVar14;
  char cVar15;
  int iVar16;
  FColor_u_0 *pFVar17;
  uint uVar18;
  uint uVar19;
  FFloat3Packed *this;
  ushort *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  bool local_res8 [8];
  FColor_u_0 local_b8;
  undefined4 local_b4;
  FColor local_b0;
  FColor_u_0 local_ac;
  FColor_u_0 local_a8;
  FColor_u_0 local_a4;
  FLinearColor_u_0 local_a0;
  FLinearColor_u_0 local_90 [6];
  
  fVar9 = __real_37800080;
  fVar8 = __real_437f0000;
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  uVar21 = (ulonglong)param_2;
  cVar15 = param_7->bLinearToGamma;
  local_res8[0] = (bool)cVar15;
  switch(param_1) {
  case VK_FORMAT_R8_UNORM:
    uVar18 = 0;
    if (param_3 != 0) {
      do {
        puVar14 = param_4 + uVar18 * param_5;
        pFVar17 = &param_6[uVar18 * param_2].field0_0x0;
        uVar22 = uVar21;
        if (param_2 != 0) {
          do {
            local_b0.field0_0x0._s_0.G = *puVar14;
            puVar14 = puVar14 + 1;
            local_b0.field0_0x0._s_0.B = local_b0.field0_0x0._s_0.G;
            local_b0.field0_0x0._s_0.R = local_b0.field0_0x0._s_0.G;
            local_b0.field0_0x0._s_0.A = local_b0.field0_0x0._s_0.G;
            *pFVar17 = local_b0.field0_0x0;
            uVar22 = uVar22 - 1;
            pFVar17 = pFVar17 + 1;
          } while (uVar22 != 0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < param_3);
    }
    break;
  default:
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                        ,0x78,L"Unsupported format [%d] for conversion to FColor!");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    break;
  case VK_FORMAT_R8G8_UNORM:
    uVar18 = 0;
    if (param_3 != 0) {
      do {
        puVar14 = param_4 + uVar18 * param_5;
        if (param_2 != 0) {
          local_ac.Bits = 0xff000000;
          pFVar17 = &param_6[uVar18 * param_2].field0_0x0;
          uVar22 = uVar21;
          do {
            puVar1 = puVar14 + 1;
            uVar2 = *puVar14;
            puVar14 = puVar14 + 2;
            local_ac.Bits = (uint)CONCAT12(local_ac._3_1_,CONCAT11(uVar2,*puVar1)) << 8;
            *pFVar17 = local_ac;
            uVar22 = uVar22 - 1;
            pFVar17 = pFVar17 + 1;
          } while (uVar22 != 0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < param_3);
    }
    break;
  case VK_FORMAT_R8G8B8A8_UNORM:
    uVar18 = 0;
    if (param_3 != 0) {
      do {
        if (param_2 != 0) {
          puVar14 = param_4 + uVar18 * param_5;
          uVar22 = uVar21;
          do {
            local_b4 = CONCAT13(puVar14[3],CONCAT12(*puVar14,CONCAT11(puVar14[1],puVar14[2])));
            *(undefined4 *)
             (puVar14 +
             (((ulonglong)(uVar18 * param_2) * 4 - (ulonglong)(uVar18 * param_5)) -
             (longlong)param_4) + (longlong)param_6) = local_b4;
            uVar22 = uVar22 - 1;
            puVar14 = puVar14 + 4;
          } while (uVar22 != 0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < param_3);
    }
    break;
  case VK_FORMAT_B8G8R8A8_UNORM:
    uVar18 = param_2 * 4;
    if (uVar18 == param_5) {
      memcpy(param_6,param_4,(ulonglong)(param_2 * param_3) << 2);
    }
    else {
      if ((param_5 <= uVar18) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("SrcPitch > DstPitch",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHISurfaceDataConversion.h"
                              ,0x5b,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar19 = 0;
      if (param_3 != 0) {
        do {
          memcpy(param_6 + uVar19 * param_2,param_4 + uVar19 * param_5,(ulonglong)uVar18);
          uVar19 = uVar19 + 1;
        } while (uVar19 < param_3);
      }
    }
    break;
  case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
    uVar18 = 0;
    if (param_3 != 0) {
      do {
        if (param_2 != 0) {
          local_res8[0] = false;
          local_res8[1] = true;
          local_res8[2] = true;
          local_res8[3] = true;
          uVar22 = uVar21;
          pFVar17 = &param_6[uVar18 * param_2].field0_0x0;
          do {
            uVar19 = *(uint *)(param_4 + ((ulonglong)(uVar18 * param_5) -
                                         (longlong)&param_6[uVar18 * param_2].field0_0x0) +
                              (longlong)pFVar17);
            iVar12 = (uVar19 >> 0x14 & 0x3ff) * 0xff;
            iVar16 = (uVar19 >> 10 & 0x3ff) * 0xff;
            iVar13 = (uVar19 & 0x3ff) * 0xff;
            FVar5.field0_0x0._s_0.G = (char)(iVar16 + 0x200 + (iVar16 + 0x200U >> 10) >> 10);
            FVar5.field0_0x0._s_0.B = (char)(iVar12 + (iVar12 + 0x200U >> 10) + 0x200 >> 10);
            FVar5.field0_0x0._s_0.R = (char)(iVar13 + 0x200 + (iVar13 + 0x200U >> 10) >> 10);
            FVar5.field0_0x0._s_0.A = local_res8[uVar19 >> 0x1e];
            *pFVar17 = FVar5.field0_0x0;
            uVar22 = uVar22 - 1;
            pFVar17 = pFVar17 + 1;
          } while (uVar22 != 0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < param_3);
    }
    break;
  case VK_FORMAT_R16_UNORM:
    uVar18 = 0;
    if (param_3 != 0) {
      do {
        puVar20 = (ushort *)(param_4 + uVar18 * param_5);
        if (param_2 != 0) {
          local_a8.Bits = 0xff000000;
          pFVar17 = &param_6[uVar18 * param_2].field0_0x0;
          uVar22 = uVar21;
          do {
            FVar10 = local_a8;
            uVar3 = *puVar20;
            puVar20 = puVar20 + 1;
            local_a8._s_0.G = (uchar)((uVar3 + 0x81) * 0xff >> 0x10);
            local_a8._s_0.B = local_a8._s_0.G;
            local_a8._3_1_ = FVar10._s_0.A;
            local_a8._s_0.R = local_a8._s_0.G;
            *pFVar17 = local_a8;
            uVar22 = uVar22 - 1;
            pFVar17 = pFVar17 + 1;
          } while (uVar22 != 0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < param_3);
    }
    break;
  case VK_FORMAT_R16G16_UNORM:
    uVar18 = 0;
    if (param_3 != 0) {
      do {
        if (param_2 != 0) {
          local_a4.Bits = 0xff000000;
          pFVar17 = &param_6[uVar18 * param_2].field0_0x0;
          puVar20 = (ushort *)(param_4 + uVar18 * param_5);
          uVar22 = uVar21;
          do {
            local_a4.Bits =
                 (uint)CONCAT12(local_a4._3_1_,
                                CONCAT11((char)((*puVar20 + 0x81) * 0xff >> 0x10),
                                         (char)((*(ushort *)
                                                  ((undefined1 *)((longlong)pFVar17 + 2) +
                                                  (longlong)
                                                  (param_4 +
                                                  (((ulonglong)(uVar18 * param_5) +
                                                   (ulonglong)(uVar18 * param_2) * -4) -
                                                  (longlong)param_6))) + 0x81) * 0xff >> 0x10))) <<
                 8;
            *pFVar17 = local_a4;
            uVar22 = uVar22 - 1;
            pFVar17 = pFVar17 + 1;
            puVar20 = puVar20 + 2;
          } while (uVar22 != 0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < param_3);
    }
    break;
  case VK_FORMAT_R16G16B16A16_UNORM:
    uVar18 = 0;
    if (param_3 != 0) {
      do {
        puVar20 = (ushort *)(param_4 + uVar18 * param_5);
        pFVar17 = &param_6[uVar18 * param_2].field0_0x0;
        uVar22 = uVar21;
        if (param_2 != 0) {
          do {
            local_90[0]._0_4_ = (float)*puVar20 * fVar9;
            local_90[0]._4_4_ = (float)puVar20[1] * fVar9;
            local_90[0]._12_4_ = (float)puVar20[3] * fVar9;
            local_90[0]._8_4_ = (float)puVar20[2] * fVar9;
            if (cVar15 == '\0') {
              if ((float)local_90[0]._8_4_ <= 0.0) {
                local_90[0]._8_4_ = 0.0;
              }
              if ((float)local_90[0]._4_4_ <= 0.0) {
                local_90[0]._4_4_ = 0.0;
              }
              if ((float)local_90[0]._0_4_ <= 0.0) {
                local_90[0]._0_4_ = 0.0;
              }
              if ((float)local_90[0]._12_4_ <= 0.0) {
                local_90[0]._12_4_ = 0.0;
              }
              if (fVar6 <= (float)local_90[0]._8_4_) {
                local_90[0]._8_4_ = fVar6;
              }
              if (fVar6 <= (float)local_90[0]._4_4_) {
                local_90[0]._4_4_ = fVar6;
              }
              if (fVar6 <= (float)local_90[0]._0_4_) {
                local_90[0]._0_4_ = fVar6;
              }
              if (fVar6 <= (float)local_90[0]._12_4_) {
                local_90[0]._12_4_ = fVar6;
              }
              local_b8._s_0.G = (char)(int)((float)local_90[0]._4_4_ * fVar8 + fVar7);
              local_b8._s_0.B = (char)(int)((float)local_90[0]._8_4_ * fVar8 + fVar7);
              local_b8._s_0.R = (char)(int)((float)local_90[0]._0_4_ * fVar8 + fVar7);
              local_b8._s_0.A = (char)(int)((float)local_90[0]._12_4_ * fVar8 + fVar7);
            }
            else {
              FLinearColor::ToFColorSRGB((FLinearColor *)&local_90[0]._s_0);
              cVar15 = local_res8[0];
            }
            puVar20 = puVar20 + 4;
            *pFVar17 = local_b8;
            pFVar17 = pFVar17 + 1;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < param_3);
    }
    break;
  case VK_FORMAT_R16G16B16A16_SFLOAT:
    `anonymous_namespace'::ConvertRawR16G16B16A16FDataToFColor
              (param_2,param_3,param_4,param_5,param_6,(bool)cVar15);
    break;
  case VK_FORMAT_R32G32B32A32_SFLOAT:
    `anonymous_namespace'::ConvertRawR32G32B32A32DataToFColor
              (param_2,param_3,param_4,param_5,param_6,(bool)cVar15);
    break;
  case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
    uVar18 = 0;
    if (param_3 != 0) {
      do {
        this = (FFloat3Packed *)(param_4 + uVar18 * param_5);
        if (param_2 != 0) {
          lVar23 = ((ulonglong)(uVar18 * param_2) * 4 - (longlong)this) + (longlong)param_6;
          uVar22 = uVar21;
          if (cVar15 == '\0') {
            do {
              FFloat3Packed::ToLinearColor(this,(FLinearColor *)&local_a0._s_0);
              uVar24 = local_a0._s_0.B;
              if (local_a0._s_0.B <= 0.0) {
                uVar24 = 0.0;
              }
              uVar25 = local_a0._s_0.G;
              if (local_a0._s_0.G <= 0.0) {
                uVar25 = 0.0;
              }
              if (fVar6 <= (float)uVar24) {
                uVar24 = fVar6;
              }
              if (fVar6 <= (float)uVar25) {
                uVar25 = fVar6;
              }
              param_7._0_1_ = (undefined1)(int)((float)uVar24 * fVar8 + fVar7);
              uVar24 = local_a0._s_0.R;
              if (local_a0._s_0.R <= 0.0) {
                uVar24 = 0.0;
              }
              if (fVar6 <= (float)uVar24) {
                uVar24 = fVar6;
              }
              uVar26 = local_a0._s_0.A;
              if (local_a0._s_0.A <= 0.0) {
                uVar26 = 0.0;
              }
              param_7._1_1_ = (undefined1)(int)((float)uVar25 * fVar8 + fVar7);
              if (fVar6 <= (float)uVar26) {
                uVar26 = fVar6;
              }
              param_7._2_1_ = (undefined1)(int)((float)uVar24 * fVar8 + fVar7);
              param_7._3_1_ = (undefined1)(int)((float)uVar26 * fVar8 + fVar7);
              *(uint *)(lVar23 + (longlong)this) =
                   CONCAT13(param_7._3_1_,
                            CONCAT12(param_7._2_1_,CONCAT11(param_7._1_1_,param_7._0_1_)));
              this = this + 1;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
          else {
            do {
              FFloat3Packed::ToLinearColor(this,(FLinearColor *)&local_a0._s_0);
              FLinearColor::ToFColorSRGB((FLinearColor *)&local_a0._s_0);
              *(uint *)(lVar23 + (longlong)this) =
                   CONCAT13(param_7._3_1_,
                            CONCAT12(param_7._2_1_,CONCAT11(param_7._1_1_,param_7._0_1_)));
              this = this + 1;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
          cVar15 = local_res8[0];
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < param_3);
    }
  }
  return;
}

// ConvertRawDataToFLinearColor @ 145b5d220

/* WARNING: Enum "VkFormat": Some values do not have unique names */

void __cdecl
ConvertRawDataToFLinearColor
          (VkFormat param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,
          FLinearColor *param_6,FReadSurfaceDataFlags *param_7)

{
  ushort *puVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  FLinearColor *pFVar8;
  ushort *puVar9;
  float *pfVar10;
  FLinearColor *pFVar11;
  uint uVar12;
  FFloat3Packed *this;
  ulonglong uVar13;
  float fVar14;
  FLinearColor local_78;
  FReadSurfaceDataFlags local_68;
  FReadSurfaceDataFlags local_48;
  
  fVar5 = __real_37800080;
  switch(param_1) {
  case VK_FORMAT_R8G8B8A8_UNORM:
    `anonymous_namespace'::ConvertRawR8G8B8A8DataToFLinearColor
              (param_2,param_3,param_4,param_5,param_6);
    break;
  default:
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                       ,0xa7,L"Unsupported format [%d] for conversion to FLinearColor!");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    break;
  case VK_FORMAT_B8G8R8A8_UNORM:
    `anonymous_namespace'::ConvertRawB8G8R8A8DataToFLinearColor
              (param_2,param_3,param_4,param_5,param_6);
    break;
  case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
    `anonymous_namespace'::ConvertRawA2B10G10R10DataToFLinearColor
              (param_2,param_3,param_4,param_5,param_6);
    break;
  case VK_FORMAT_R16_UNORM:
    uVar12 = 0;
    if (param_3 != 0) {
      do {
        uVar7 = 0;
        pFVar11 = param_6 + uVar12 * param_2;
        puVar9 = (ushort *)(param_4 + uVar12 * param_5);
        if (3 < param_2) {
          uVar7 = (param_2 - 4 >> 2) + 1;
          uVar13 = (ulonglong)uVar7;
          uVar7 = uVar7 * 4;
          pfVar10 = &pFVar11[1].field0_0x0._s_0.B;
          do {
            fVar14 = (float)*puVar9 * fVar5;
            (pFVar11->field0_0x0)._s_0.R = fVar14;
            pFVar11 = pFVar11 + 4;
            pfVar10[-5] = fVar14;
            pfVar10[-4] = fVar14;
            pfVar10[-3] = 1.0;
            fVar14 = (float)puVar9[1] * fVar5;
            ((FLinearColor_u_0_s_0 *)(pfVar10 + -2))->R = fVar14;
            pfVar10[-1] = fVar14;
            *pfVar10 = fVar14;
            pfVar10[1] = 1.0;
            fVar14 = (float)puVar9[2] * fVar5;
            pfVar10[2] = fVar14;
            pfVar10[3] = fVar14;
            pfVar10[4] = fVar14;
            pfVar10[5] = 1.0;
            puVar1 = puVar9 + 3;
            puVar9 = puVar9 + 4;
            fVar14 = (float)*puVar1 * fVar5;
            pfVar10[6] = fVar14;
            pfVar10[7] = fVar14;
            pfVar10[8] = fVar14;
            pfVar10[9] = 1.0;
            uVar13 = uVar13 - 1;
            pfVar10 = pfVar10 + 0x10;
          } while (uVar13 != 0);
        }
        if (uVar7 < param_2) {
          uVar13 = (ulonglong)(param_2 - uVar7);
          pfVar10 = &(pFVar11->field0_0x0)._s_0.B;
          do {
            uVar2 = *puVar9;
            puVar9 = puVar9 + 1;
            fVar14 = (float)uVar2 * fVar5;
            ((FLinearColor_u_0_s_0 *)(pfVar10 + -2))->R = fVar14;
            pfVar10[-1] = fVar14;
            *pfVar10 = fVar14;
            pfVar10[1] = 1.0;
            uVar13 = uVar13 - 1;
            pfVar10 = pfVar10 + 4;
          } while (uVar13 != 0);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_3);
    }
    break;
  case VK_FORMAT_R16G16_UNORM:
    uVar12 = 0;
    if (param_3 != 0) {
      do {
        uVar7 = 0;
        pFVar11 = param_6 + uVar12 * param_2;
        puVar9 = (ushort *)(param_4 + uVar12 * param_5);
        if (3 < param_2) {
          uVar7 = (param_2 - 4 >> 2) + 1;
          uVar13 = (ulonglong)uVar7;
          uVar7 = uVar7 * 4;
          pfVar10 = &pFVar11[1].field0_0x0._s_0.B;
          do {
            uVar2 = puVar9[1];
            (pFVar11->field0_0x0)._s_0.R = (float)*puVar9 * fVar5;
            pFVar11 = pFVar11 + 4;
            pfVar10[-5] = (float)uVar2 * fVar5;
            pfVar10[-4] = 0.0;
            pfVar10[-3] = 1.0;
            uVar2 = puVar9[3];
            ((FLinearColor_u_0_s_0 *)(pfVar10 + -2))->R = (float)puVar9[2] * fVar5;
            pfVar10[-1] = (float)uVar2 * fVar5;
            *pfVar10 = 0.0;
            pfVar10[1] = 1.0;
            uVar2 = puVar9[5];
            pfVar10[2] = (float)puVar9[4] * fVar5;
            pfVar10[3] = (float)uVar2 * fVar5;
            pfVar10[4] = 0.0;
            pfVar10[5] = 1.0;
            uVar2 = puVar9[7];
            puVar1 = puVar9 + 6;
            puVar9 = puVar9 + 8;
            pfVar10[6] = (float)*puVar1 * fVar5;
            pfVar10[7] = (float)uVar2 * fVar5;
            pfVar10[8] = 0.0;
            pfVar10[9] = 1.0;
            uVar13 = uVar13 - 1;
            pfVar10 = pfVar10 + 0x10;
          } while (uVar13 != 0);
        }
        if (uVar7 < param_2) {
          uVar13 = (ulonglong)(param_2 - uVar7);
          pfVar10 = &(pFVar11->field0_0x0)._s_0.B;
          do {
            uVar2 = puVar9[1];
            ((FLinearColor_u_0_s_0 *)(pfVar10 + -2))->R = (float)*puVar9 * fVar5;
            pfVar10[-1] = (float)uVar2 * fVar5;
            *pfVar10 = 0.0;
            pfVar10[1] = 1.0;
            uVar13 = uVar13 - 1;
            puVar9 = puVar9 + 2;
            pfVar10 = pfVar10 + 4;
          } while (uVar13 != 0);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_3);
    }
    break;
  case VK_FORMAT_R16G16B16A16_UNORM:
    `anonymous_namespace'::ConvertRawR16G16B16A16DataToFLinearColor
              (param_2,param_3,param_4,param_5,param_6);
    break;
  case VK_FORMAT_R16G16B16A16_SFLOAT:
    local_48.CubeFace = param_7->CubeFace;
    local_48.CompressionMode = param_7->CompressionMode;
    local_48.bLinearToGamma = param_7->bLinearToGamma;
    local_48._9_3_ = *(undefined3 *)&param_7->field_0x9;
    local_48.MaxDepthRange = param_7->MaxDepthRange;
    local_48.bOutputStencil = param_7->bOutputStencil;
    local_48.MipLevel = param_7->MipLevel;
    local_48._18_2_ = *(undefined2 *)&param_7->field_0x12;
    local_48.ArrayIndex = param_7->ArrayIndex;
    local_48.GPUIndex = param_7->GPUIndex;
    `anonymous_namespace'::ConvertRawR16G16B16A16FDataToFLinearColor
              (param_2,param_3,param_4,param_5,param_6,&local_48);
    break;
  case VK_FORMAT_R32G32B32A32_SFLOAT:
    local_68.CubeFace = param_7->CubeFace;
    local_68.CompressionMode = param_7->CompressionMode;
    local_68.bLinearToGamma = param_7->bLinearToGamma;
    local_68._9_3_ = *(undefined3 *)&param_7->field_0x9;
    local_68.MaxDepthRange = param_7->MaxDepthRange;
    local_68.bOutputStencil = param_7->bOutputStencil;
    local_68.MipLevel = param_7->MipLevel;
    local_68._18_2_ = *(undefined2 *)&param_7->field_0x12;
    local_68.ArrayIndex = param_7->ArrayIndex;
    local_68.GPUIndex = param_7->GPUIndex;
    `anonymous_namespace'::ConvertRawR32G32B32A32DataToFLinearColor
              (param_2,param_3,param_4,param_5,param_6,&local_68);
    break;
  case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
    uVar12 = 0;
    if (param_3 != 0) {
      do {
        this = (FFloat3Packed *)(param_4 + uVar12 * param_5);
        pFVar11 = param_6 + uVar12 * param_2;
        uVar13 = (ulonglong)param_2;
        if (param_2 != 0) {
          do {
            pFVar8 = FFloat3Packed::ToLinearColor(this,&local_78);
            this = this + 1;
            uVar4 = *(undefined8 *)((longlong)&pFVar8->field0_0x0 + 8);
            *(undefined8 *)&pFVar11->field0_0x0 = *(undefined8 *)&pFVar8->field0_0x0;
            *(undefined8 *)((longlong)&pFVar11->field0_0x0 + 8) = uVar4;
            uVar13 = uVar13 - 1;
            pFVar11 = pFVar11 + 1;
          } while (uVar13 != 0);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_3);
    }
  }
  return;
}

// ConvertRawR16G16B16A16DataToFLinearColor @ 145b5d800

void __cdecl
`anonymous_namespace'::ConvertRawR16G16B16A16DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  uint uVar6;
  ushort *puVar7;
  FLinearColor *pFVar8;
  ulonglong uVar9;
  FLinearColor *pFVar10;
  uint uVar11;
  
  fVar5 = __real_37800080;
  if (param_2 != 0) {
    uVar11 = 0;
    do {
      uVar6 = 0;
      pFVar8 = param_5 + uVar11 * param_1;
      puVar7 = (ushort *)(param_3 + uVar11 * param_4);
      if (3 < param_1) {
        uVar6 = (param_1 - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar6;
        uVar6 = uVar6 * 4;
        pFVar10 = pFVar8 + 2;
        do {
          uVar2 = puVar7[1];
          uVar3 = puVar7[2];
          uVar4 = puVar7[3];
          (pFVar8->field0_0x0)._s_0.R = (float)*puVar7 * fVar5;
          (pFVar8->field0_0x0)._s_0.G = (float)uVar2 * fVar5;
          (pFVar8->field0_0x0)._s_0.B = (float)uVar3 * fVar5;
          (pFVar8->field0_0x0)._s_0.A = (float)uVar4 * fVar5;
          uVar2 = puVar7[5];
          uVar3 = puVar7[6];
          uVar4 = puVar7[7];
          pFVar10[-1].field0_0x0._s_0.R = (float)puVar7[4] * fVar5;
          pFVar10[-1].field0_0x0._s_0.G = (float)uVar2 * fVar5;
          pFVar10[-1].field0_0x0._s_0.B = (float)uVar3 * fVar5;
          pFVar10[-1].field0_0x0._s_0.A = (float)uVar4 * fVar5;
          uVar2 = puVar7[9];
          uVar3 = puVar7[10];
          uVar4 = puVar7[0xb];
          (pFVar10->field0_0x0)._s_0.R = (float)puVar7[8] * fVar5;
          (pFVar10->field0_0x0)._s_0.G = (float)uVar2 * fVar5;
          (pFVar10->field0_0x0)._s_0.B = (float)uVar3 * fVar5;
          (pFVar10->field0_0x0)._s_0.A = (float)uVar4 * fVar5;
          puVar1 = puVar7 + 0xc;
          uVar2 = puVar7[0xd];
          uVar3 = puVar7[0xe];
          uVar4 = puVar7[0xf];
          pFVar8 = pFVar8 + 4;
          puVar7 = puVar7 + 0x10;
          pFVar10[1].field0_0x0._s_0.R = (float)*puVar1 * fVar5;
          pFVar10[1].field0_0x0._s_0.G = (float)uVar2 * fVar5;
          pFVar10[1].field0_0x0._s_0.B = (float)uVar3 * fVar5;
          pFVar10[1].field0_0x0._s_0.A = (float)uVar4 * fVar5;
          uVar9 = uVar9 - 1;
          pFVar10 = pFVar10 + 4;
        } while (uVar9 != 0);
      }
      if (uVar6 < param_1) {
        uVar9 = (ulonglong)(param_1 - uVar6);
        puVar7 = puVar7 + 2;
        do {
          uVar2 = puVar7[-1];
          uVar3 = *puVar7;
          uVar4 = puVar7[1];
          (pFVar8->field0_0x0)._s_0.R = (float)puVar7[-2] * fVar5;
          (pFVar8->field0_0x0)._s_0.G = (float)uVar2 * fVar5;
          (pFVar8->field0_0x0)._s_0.B = (float)uVar3 * fVar5;
          (pFVar8->field0_0x0)._s_0.A = (float)uVar4 * fVar5;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + 4;
          pFVar8 = pFVar8 + 1;
        } while (uVar9 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  return;
}

// ConvertRawR16G16B16A16FDataToFColor @ 145b5dab0

void __cdecl
`anonymous_namespace'::ConvertRawR16G16B16A16FDataToFColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FColor *param_5,bool param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ushort *puVar5;
  ushort *puVar6;
  FColor_u_0 *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  FColor_u_0 local_res10;
  double local_118;
  FLinearColor_u_0 local_f0 [11];
  
  uVar8 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = (undefined4)__real_3ff0000000000000;
  uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  local_118 = 0.0;
  uVar11 = 0;
  uVar9 = (ulonglong)param_1;
  uVar15 = uVar26;
  uVar20 = uVar28;
  uVar18 = uVar26;
  uVar23 = uVar28;
  uVar16 = uVar26;
  uVar21 = uVar28;
  uVar17 = uVar26;
  uVar22 = uVar28;
  if (param_2 != 0) {
    do {
      puVar6 = (ushort *)(param_3 + uVar11 * param_4);
      if (param_1 != 0) {
        puVar5 = puVar6 + 2;
        uVar10 = uVar9;
        do {
          fVar12 = FGenericPlatformMath::LoadHalf(puVar6);
          dVar19 = (double)fVar12;
          if ((double)CONCAT44(uVar31,uVar30) <= dVar19) {
            dVar19 = (double)CONCAT44(uVar31,uVar30);
          }
          uVar30 = SUB84(dVar19,0);
          uVar31 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5 + -1);
          dVar19 = (double)fVar12;
          if ((double)CONCAT44(uVar35,uVar34) <= dVar19) {
            dVar19 = (double)CONCAT44(uVar35,uVar34);
          }
          uVar34 = SUB84(dVar19,0);
          uVar35 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5);
          local_118 = (double)fVar12;
          if ((double)CONCAT44(uVar25,uVar24) <= local_118) {
            local_118 = (double)CONCAT44(uVar25,uVar24);
          }
          uVar24 = SUB84(local_118,0);
          uVar25 = (undefined4)((ulonglong)local_118 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5 + 1);
          dVar19 = (double)fVar12;
          if ((double)CONCAT44(uVar33,uVar32) <= dVar19) {
            dVar19 = (double)CONCAT44(uVar33,uVar32);
          }
          uVar32 = SUB84(dVar19,0);
          uVar33 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar6);
          dVar19 = (double)fVar12;
          if (dVar19 <= (double)CONCAT44(uVar20,uVar15)) {
            dVar19 = (double)CONCAT44(uVar20,uVar15);
          }
          uVar15 = SUB84(dVar19,0);
          uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5 + -1);
          dVar19 = (double)fVar12;
          if (dVar19 <= (double)CONCAT44(uVar21,uVar16)) {
            dVar19 = (double)CONCAT44(uVar21,uVar16);
          }
          uVar16 = SUB84(dVar19,0);
          uVar21 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5);
          dVar19 = (double)fVar12;
          if (dVar19 <= (double)CONCAT44(uVar22,uVar17)) {
            dVar19 = (double)CONCAT44(uVar22,uVar17);
          }
          uVar17 = SUB84(dVar19,0);
          uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar12 = FGenericPlatformMath::LoadHalf(puVar5 + 1);
          puVar6 = puVar6 + 4;
          dVar19 = (double)fVar12;
          puVar5 = puVar5 + 4;
          if (dVar19 <= (double)CONCAT44(uVar23,uVar18)) {
            dVar19 = (double)CONCAT44(uVar23,uVar18);
          }
          uVar18 = SUB84(dVar19,0);
          uVar23 = (undefined4)((ulonglong)dVar19 >> 0x20);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
    dVar19 = (double)CONCAT44(uVar25,uVar24);
    local_res10.Bits = param_2;
    do {
      puVar6 = (ushort *)(param_3 + uVar8 * param_4);
      pFVar7 = &param_5[uVar8 * param_1].field0_0x0;
      if (param_1 != 0) {
        dVar2 = (double)CONCAT44(uVar28,uVar26) /
                ((double)CONCAT44(uVar21,uVar16) - (double)CONCAT44(uVar35,uVar34));
        dVar3 = (double)CONCAT44(uVar28,uVar26) / ((double)CONCAT44(uVar22,uVar17) - dVar19);
        dVar4 = (double)CONCAT44(uVar28,uVar26) /
                ((double)CONCAT44(uVar23,uVar18) - (double)CONCAT44(uVar33,uVar32));
        dVar1 = (double)CONCAT44(uVar28,uVar26) /
                ((double)CONCAT44(uVar20,uVar15) - (double)CONCAT44(uVar31,uVar30));
        uVar10 = uVar9;
        if (param_6) {
          do {
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6);
            local_f0[0]._0_4_ =
                 (undefined4)(((double)fVar12 - (double)CONCAT44(uVar31,uVar30)) * dVar1);
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6 + 1);
            local_f0[0]._4_4_ =
                 (undefined4)(((double)fVar12 - (double)CONCAT44(uVar35,uVar34)) * dVar2);
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6 + 2);
            local_f0[0]._8_4_ =
                 (undefined4)(((double)fVar12 - (double)CONCAT44(uVar25,uVar24)) * dVar3);
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6 + 3);
            local_f0[0]._12_4_ =
                 (undefined4)(((double)fVar12 - (double)CONCAT44(uVar33,uVar32)) * dVar4);
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_f0[0]._s_0);
            puVar6 = puVar6 + 4;
            *pFVar7 = local_res10;
            pFVar7 = pFVar7 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        else {
          do {
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6);
            fVar29 = (float)(((double)fVar12 - (double)CONCAT44(uVar31,uVar30)) * dVar1);
            local_f0[0]._0_4_ = fVar29;
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6 + 1);
            fVar27 = (float)(((double)fVar12 - (double)CONCAT44(uVar35,uVar34)) * dVar2);
            local_f0[0]._4_4_ = fVar27;
            fVar12 = FGenericPlatformMath::LoadHalf(puVar6 + 2);
            fVar12 = (float)(((double)fVar12 - (double)CONCAT44(uVar25,uVar24)) * dVar3);
            local_f0[0]._8_4_ = fVar12;
            fVar13 = FGenericPlatformMath::LoadHalf(puVar6 + 3);
            puVar6 = puVar6 + 4;
            local_f0[0]._12_4_ =
                 (undefined4)(((double)fVar13 - (double)CONCAT44(uVar33,uVar32)) * dVar4);
            fVar13 = 0.0;
            if (fVar12 <= 0.0) {
              fVar12 = fVar13;
            }
            if (fVar27 <= 0.0) {
              fVar27 = fVar13;
            }
            if (fVar29 <= 0.0) {
              fVar29 = fVar13;
            }
            fVar14 = (float)local_f0[0]._12_4_;
            if ((float)local_f0[0]._12_4_ <= 0.0) {
              fVar14 = fVar13;
            }
            if (__real_3f800000 <= fVar12) {
              fVar12 = __real_3f800000;
            }
            if (__real_3f800000 <= fVar27) {
              fVar27 = __real_3f800000;
            }
            if (__real_3f800000 <= fVar29) {
              fVar29 = __real_3f800000;
            }
            if (__real_3f800000 <= fVar14) {
              fVar14 = __real_3f800000;
            }
            uVar24 = SUB84(local_118,0);
            uVar25 = (undefined4)((ulonglong)local_118 >> 0x20);
            local_res10._s_0.G = (char)(int)(fVar27 * __real_437f0000 + __real_3f000000);
            local_res10._s_0.B = (char)(int)(fVar12 * __real_437f0000 + __real_3f000000);
            local_res10._s_0.R = (char)(int)(fVar29 * __real_437f0000 + __real_3f000000);
            local_res10._s_0.A = (char)(int)(fVar14 * __real_437f0000 + __real_3f000000);
            *pFVar7 = local_res10;
            pFVar7 = pFVar7 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          uVar26 = (undefined4)__real_3ff0000000000000;
          uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
  }
  return;
}

// ConvertRawR16G16B16A16FDataToFLinearColor @ 145b5dfd0

void __cdecl
`anonymous_namespace'::ConvertRawR16G16B16A16FDataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5,
          FReadSurfaceDataFlags *param_6)

{
  double dVar1;
  FLinearColor *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
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
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  
  dVar1 = __real_3ff0000000000000;
  uVar4 = 0;
  uVar7 = (ulonglong)param_1;
  if (param_6->CompressionMode == RCM_MinMax) {
    if (param_2 != 0) {
      do {
        pFVar2 = param_5 + uVar4 * param_1;
        puVar5 = (ushort *)(param_3 + uVar4 * param_4);
        uVar3 = uVar7;
        if (param_1 != 0) {
          do {
            fVar8 = FGenericPlatformMath::LoadHalf(puVar5 + 1);
            fVar9 = FGenericPlatformMath::LoadHalf(puVar5 + 2);
            fVar10 = FGenericPlatformMath::LoadHalf(puVar5 + 3);
            fVar11 = FGenericPlatformMath::LoadHalf(puVar5);
            (pFVar2->field0_0x0)._s_0.R = fVar11;
            puVar5 = puVar5 + 4;
            (pFVar2->field0_0x0)._s_0.G = fVar8;
            (pFVar2->field0_0x0)._s_0.B = fVar9;
            (pFVar2->field0_0x0)._s_0.A = fVar10;
            pFVar2 = pFVar2 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_2);
    }
  }
  else {
    uVar26 = 0;
    uVar28 = 0;
    uVar21 = 0;
    uVar23 = 0;
    uVar4 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar15 = SUB84(__real_3ff0000000000000,0);
    uVar20 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_e0 = __real_3ff0000000000000;
    local_e8 = __real_3ff0000000000000;
    local_f0 = __real_3ff0000000000000;
    local_f8 = __real_3ff0000000000000;
    uVar33 = 0;
    uVar34 = 0;
    local_100 = 0.0;
    local_108 = 0.0;
    param_6._0_4_ = 0;
    uVar12 = uVar15;
    uVar17 = uVar20;
    uVar13 = uVar15;
    uVar18 = uVar20;
    uVar14 = uVar15;
    uVar19 = uVar20;
    if (param_2 != 0) {
      do {
        puVar5 = (ushort *)(param_3 + uVar4 * param_4);
        if (param_1 != 0) {
          puVar6 = puVar5 + 2;
          uVar3 = uVar7;
          do {
            fVar8 = FGenericPlatformMath::LoadHalf(puVar5);
            dVar16 = (double)fVar8;
            if ((double)CONCAT44(uVar32,uVar31) <= dVar16) {
              dVar16 = (double)CONCAT44(uVar32,uVar31);
            }
            uVar31 = SUB84(dVar16,0);
            uVar32 = (undefined4)((ulonglong)dVar16 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6 + -1);
            local_100 = (double)fVar8;
            if ((double)CONCAT44(uVar28,uVar26) <= local_100) {
              local_100 = (double)CONCAT44(uVar28,uVar26);
            }
            uVar26 = SUB84(local_100,0);
            uVar28 = (undefined4)((ulonglong)local_100 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6);
            local_108 = (double)fVar8;
            if ((double)CONCAT44(uVar23,uVar21) <= local_108) {
              local_108 = (double)CONCAT44(uVar23,uVar21);
            }
            uVar21 = SUB84(local_108,0);
            uVar23 = (undefined4)((ulonglong)local_108 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6 + 1);
            dVar16 = (double)fVar8;
            if ((double)CONCAT44(uVar34,uVar33) <= dVar16) {
              dVar16 = (double)CONCAT44(uVar34,uVar33);
            }
            uVar33 = SUB84(dVar16,0);
            uVar34 = (undefined4)((ulonglong)dVar16 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar5);
            local_e0 = (double)fVar8;
            if (local_e0 <= (double)CONCAT44(uVar17,uVar12)) {
              local_e0 = (double)CONCAT44(uVar17,uVar12);
            }
            uVar12 = SUB84(local_e0,0);
            uVar17 = (undefined4)((ulonglong)local_e0 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6 + -1);
            local_e8 = (double)fVar8;
            if (local_e8 <= (double)CONCAT44(uVar18,uVar13)) {
              local_e8 = (double)CONCAT44(uVar18,uVar13);
            }
            uVar13 = SUB84(local_e8,0);
            uVar18 = (undefined4)((ulonglong)local_e8 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6);
            local_f0 = (double)fVar8;
            if (local_f0 <= (double)CONCAT44(uVar19,uVar14)) {
              local_f0 = (double)CONCAT44(uVar19,uVar14);
            }
            uVar14 = SUB84(local_f0,0);
            uVar19 = (undefined4)((ulonglong)local_f0 >> 0x20);
            fVar8 = FGenericPlatformMath::LoadHalf(puVar6 + 1);
            puVar5 = puVar5 + 4;
            local_f8 = (double)fVar8;
            puVar6 = puVar6 + 4;
            if (local_f8 <= (double)CONCAT44(uVar20,uVar15)) {
              local_f8 = (double)CONCAT44(uVar20,uVar15);
            }
            uVar15 = SUB84(local_f8,0);
            uVar20 = (undefined4)((ulonglong)local_f8 >> 0x20);
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_2);
      do {
        pFVar2 = param_5 + (uint)param_6 * param_1;
        puVar5 = (ushort *)(param_3 + (uint)param_6 * param_4);
        uVar29 = (undefined4)((ulonglong)local_100 >> 0x20);
        uVar24 = (undefined4)((ulonglong)local_108 >> 0x20);
        if (param_1 != 0) {
          uVar3 = uVar7;
          uVar22 = uVar21;
          uVar25 = uVar23;
          uVar27 = uVar26;
          uVar30 = uVar28;
          do {
            fVar8 = FGenericPlatformMath::LoadHalf(puVar5 + 1);
            fVar9 = FGenericPlatformMath::LoadHalf(puVar5 + 2);
            fVar10 = FGenericPlatformMath::LoadHalf(puVar5 + 3);
            fVar11 = FGenericPlatformMath::LoadHalf(puVar5);
            puVar5 = puVar5 + 4;
            (pFVar2->field0_0x0)._s_0.R =
                 (float)(((double)fVar11 - (double)CONCAT44(uVar32,uVar31)) *
                        (dVar1 / ((double)CONCAT44(uVar17,uVar12) - (double)CONCAT44(uVar32,uVar31))
                        ));
            (pFVar2->field0_0x0)._s_0.G =
                 (float)(((double)fVar8 - (double)CONCAT44(uVar30,uVar27)) *
                        (dVar1 / ((double)CONCAT44(uVar18,uVar13) - (double)CONCAT44(uVar28,uVar26))
                        ));
            (pFVar2->field0_0x0)._s_0.B =
                 (float)(((double)fVar9 - (double)CONCAT44(uVar25,uVar22)) *
                        (dVar1 / ((double)CONCAT44(uVar19,uVar14) - (double)CONCAT44(uVar23,uVar21))
                        ));
            (pFVar2->field0_0x0)._s_0.A =
                 (float)(((double)fVar10 - (double)CONCAT44(uVar34,uVar33)) *
                        (dVar1 / ((double)CONCAT44(uVar20,uVar15) - (double)CONCAT44(uVar34,uVar33))
                        ));
            pFVar2 = pFVar2 + 1;
            uVar3 = uVar3 - 1;
            uVar22 = SUB84(local_108,0);
            uVar25 = uVar24;
            uVar27 = SUB84(local_100,0);
            uVar30 = uVar29;
          } while (uVar3 != 0);
        }
        param_6._0_4_ = (uint)param_6 + 1;
        uVar15 = SUB84(local_f8,0);
        uVar20 = (undefined4)((ulonglong)local_f8 >> 0x20);
        uVar14 = SUB84(local_f0,0);
        uVar19 = (undefined4)((ulonglong)local_f0 >> 0x20);
        uVar13 = SUB84(local_e8,0);
        uVar18 = (undefined4)((ulonglong)local_e8 >> 0x20);
        uVar12 = SUB84(local_e0,0);
        uVar17 = (undefined4)((ulonglong)local_e0 >> 0x20);
        uVar21 = SUB84(local_108,0);
        uVar23 = uVar24;
        uVar26 = SUB84(local_100,0);
        uVar28 = uVar29;
      } while ((uint)param_6 < param_2);
    }
  }
  return;
}

// ConvertRawR32G32B32A32DataToFColor @ 145b5e470

void __cdecl
`anonymous_namespace'::ConvertRawR32G32B32A32DataToFColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FColor *param_5,bool param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float *pfVar23;
  FColor_u_0 *pFVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  FColor_u_0 local_res10;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  float local_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  
  fVar21 = __real_437f0000;
  fVar20 = __real_3f800000;
  uVar27 = 0;
  uVar42 = 0;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  local_110 = __real_3ff0000000000000;
  local_120 = 0.0;
  local_128 = 0.0;
  uVar25 = 0;
  _local_100 = 0.0;
  local_108 = 0.0;
  local_118 = __real_3ff0000000000000;
  local_f0 = __real_3ff0000000000000;
  local_e8 = __real_3ff0000000000000;
  dVar38 = __real_3ff0000000000000;
  dVar34 = __real_3ff0000000000000;
  dVar36 = __real_3ff0000000000000;
  dVar30 = __real_3ff0000000000000;
  if (param_2 != 0) {
    do {
      uVar22 = 0;
      pfVar23 = (float *)(param_3 + uVar25 * param_4);
      if (3 < param_1) {
        uVar22 = (param_1 - 4 >> 2) + 1;
        uVar26 = (ulonglong)uVar22;
        uVar22 = uVar22 * 4;
        do {
          pfVar1 = pfVar23 + 3;
          fVar40 = *pfVar23;
          pfVar2 = pfVar23 + 4;
          pfVar3 = pfVar23 + 8;
          pfVar4 = pfVar23 + 0xc;
          pfVar5 = pfVar23 + 1;
          pfVar6 = pfVar23 + 5;
          pfVar7 = pfVar23 + 9;
          pfVar8 = pfVar23 + 0xd;
          pfVar9 = pfVar23 + 2;
          pfVar10 = pfVar23 + 6;
          pfVar11 = pfVar23 + 10;
          pfVar12 = pfVar23 + 0xe;
          pfVar13 = pfVar23 + 7;
          pfVar14 = pfVar23 + 0xb;
          pfVar15 = pfVar23 + 0xf;
          pfVar23 = pfVar23 + 0x10;
          dVar28 = (double)*pfVar1;
          dVar37 = (double)*pfVar4;
          dVar34 = (double)*pfVar11;
          dVar36 = (double)*pfVar9;
          dVar30 = (double)fVar40;
          dVar38 = (double)*pfVar5;
          dVar31 = dVar30;
          if (local_120 <= dVar30) {
            dVar31 = local_120;
          }
          if (dVar30 <= local_118) {
            dVar30 = local_118;
          }
          dVar39 = (double)*pfVar2;
          dVar41 = (double)*pfVar3;
          if (dVar39 <= dVar31) {
            dVar31 = dVar39;
          }
          dVar17 = (double)*pfVar6;
          if (dVar41 <= dVar31) {
            dVar31 = dVar41;
          }
          dVar16 = (double)*pfVar7;
          local_120 = dVar31;
          if (dVar37 <= dVar31) {
            local_120 = dVar37;
          }
          dVar35 = (double)*pfVar8;
          dVar31 = dVar38;
          if (local_128 <= dVar38) {
            dVar31 = local_128;
          }
          if (dVar38 <= local_110) {
            dVar38 = local_110;
          }
          dVar18 = (double)*pfVar10;
          if (dVar17 <= dVar31) {
            dVar31 = dVar17;
          }
          dVar33 = (double)*pfVar12;
          if (dVar16 <= dVar31) {
            dVar31 = dVar16;
          }
          dVar19 = (double)*pfVar13;
          local_128 = dVar31;
          if (dVar35 <= dVar31) {
            local_128 = dVar35;
          }
          dVar31 = (double)*pfVar14;
          uVar29 = dVar36;
          if ((double)_local_100 <= dVar36) {
            uVar29 = _local_100;
          }
          if (dVar36 <= local_f0) {
            dVar36 = local_f0;
          }
          dVar32 = (double)*pfVar15;
          if (dVar18 <= (double)uVar29) {
            uVar29 = dVar18;
          }
          if (dVar36 <= dVar18) {
            dVar36 = dVar18;
          }
          if (dVar34 <= (double)uVar29) {
            uVar29 = dVar34;
          }
          if (dVar36 <= dVar34) {
            dVar36 = dVar34;
          }
          dVar34 = dVar28;
          if (dVar28 <= local_e8) {
            dVar34 = local_e8;
          }
          _local_100 = uVar29;
          if (dVar33 <= (double)uVar29) {
            _local_100 = dVar33;
          }
          if (dVar36 <= dVar33) {
            dVar36 = dVar33;
          }
          if (dVar34 <= dVar19) {
            dVar34 = dVar19;
          }
          if (local_108 <= dVar28) {
            dVar28 = local_108;
          }
          if (dVar34 <= dVar31) {
            dVar34 = dVar31;
          }
          if (dVar19 <= dVar28) {
            dVar28 = dVar19;
          }
          if (dVar34 <= dVar32) {
            dVar34 = dVar32;
          }
          if (dVar31 <= dVar28) {
            dVar28 = dVar31;
          }
          local_108 = dVar28;
          if (dVar32 <= dVar28) {
            local_108 = dVar32;
          }
          if (dVar30 <= dVar39) {
            dVar30 = dVar39;
          }
          if (dVar30 <= dVar41) {
            dVar30 = dVar41;
          }
          if (dVar30 <= dVar37) {
            dVar30 = dVar37;
          }
          if (dVar38 <= dVar17) {
            dVar38 = dVar17;
          }
          if (dVar38 <= dVar16) {
            dVar38 = dVar16;
          }
          if (dVar38 <= dVar35) {
            dVar38 = dVar35;
          }
          uVar26 = uVar26 - 1;
          local_118 = dVar30;
          local_110 = dVar38;
          local_f0 = dVar36;
          local_e8 = dVar34;
        } while (uVar26 != 0);
        uVar42 = SUB84(local_120,0);
        uVar43 = (undefined4)((ulonglong)local_120 >> 0x20);
        uVar44 = SUB84(local_128,0);
        uVar45 = (undefined4)((ulonglong)local_128 >> 0x20);
        uVar46 = (undefined4)_local_100;
        uVar47 = (undefined4)((ulonglong)_local_100 >> 0x20);
        uVar48 = SUB84(local_108,0);
        uVar49 = (undefined4)((ulonglong)local_108 >> 0x20);
      }
      if (uVar22 < param_1) {
        pfVar23 = pfVar23 + 2;
        uVar26 = (ulonglong)(param_1 - uVar22);
        dVar28 = dVar36;
        dVar31 = dVar34;
        dVar37 = dVar30;
        do {
          pfVar1 = pfVar23 + -2;
          pfVar2 = pfVar23 + -1;
          fVar40 = *pfVar23;
          pfVar3 = pfVar23 + 1;
          pfVar23 = pfVar23 + 4;
          local_120 = (double)*pfVar1;
          _local_100 = (undefined8)fVar40;
          dVar30 = local_120;
          if (local_120 <= dVar37) {
            dVar30 = dVar37;
          }
          if ((double)CONCAT44(uVar43,uVar42) <= local_120) {
            local_120 = (double)CONCAT44(uVar43,uVar42);
          }
          dVar34 = (double)*pfVar3;
          uVar42 = SUB84(local_120,0);
          uVar43 = (undefined4)((ulonglong)local_120 >> 0x20);
          dVar36 = (double)_local_100;
          if ((double)_local_100 <= dVar28) {
            dVar36 = dVar28;
          }
          if ((double)CONCAT44(uVar47,uVar46) <= (double)_local_100) {
            _local_100 = CONCAT44(uVar47,uVar46);
          }
          dVar38 = (double)*pfVar2;
          uVar46 = (undefined4)_local_100;
          uVar47 = (undefined4)((ulonglong)_local_100 >> 0x20);
          local_128 = dVar38;
          if ((double)CONCAT44(uVar45,uVar44) <= dVar38) {
            local_128 = (double)CONCAT44(uVar45,uVar44);
          }
          if (dVar38 <= local_110) {
            dVar38 = local_110;
          }
          uVar44 = SUB84(local_128,0);
          uVar45 = (undefined4)((ulonglong)local_128 >> 0x20);
          local_108 = dVar34;
          if ((double)CONCAT44(uVar49,uVar48) <= dVar34) {
            local_108 = (double)CONCAT44(uVar49,uVar48);
          }
          if (dVar34 <= dVar31) {
            dVar34 = dVar31;
          }
          uVar48 = SUB84(local_108,0);
          uVar49 = (undefined4)((ulonglong)local_108 >> 0x20);
          uVar26 = uVar26 - 1;
          dVar28 = dVar36;
          dVar31 = dVar34;
          dVar37 = dVar30;
          local_118 = dVar30;
          local_110 = dVar38;
          local_f0 = dVar36;
          local_e8 = dVar34;
        } while (uVar26 != 0);
      }
      uVar25 = uVar25 + 1;
      fVar40 = __real_3f000000;
    } while (uVar25 < param_2);
    do {
      pfVar23 = (float *)(param_3 + uVar27 * param_4);
      pFVar24 = &param_5[uVar27 * param_1].field0_0x0;
      if (param_1 != 0) {
        dVar28 = __real_3ff0000000000000 / (dVar30 - (double)CONCAT44(uVar43,uVar42));
        dVar31 = __real_3ff0000000000000 / (dVar38 - (double)CONCAT44(uVar45,uVar44));
        dVar37 = __real_3ff0000000000000 / (dVar36 - (double)CONCAT44(uVar47,uVar46));
        dVar39 = __real_3ff0000000000000 / (dVar34 - (double)CONCAT44(uVar49,uVar48));
        uVar26 = (ulonglong)param_1;
        local_e0 = dVar31;
        do {
          local_100 = (float)(((double)*pfVar23 - (double)CONCAT44(uVar43,uVar42)) * dVar28);
          fStack_fc = (float)(((double)pfVar23[1] - (double)CONCAT44(uVar45,uVar44)) * dVar31);
          local_f8 = (undefined4)(((double)pfVar23[2] - (double)CONCAT44(uVar47,uVar46)) * dVar37);
          local_f4 = (undefined4)(((double)pfVar23[3] - (double)CONCAT44(uVar49,uVar48)) * dVar39);
          if (param_6) {
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_100);
            fVar40 = __real_3f000000;
          }
          else {
            if ((float)local_f8 <= 0.0) {
              local_f8 = 0.0;
            }
            if (fStack_fc <= 0.0) {
              fStack_fc = 0.0;
            }
            if (local_100 <= 0.0) {
              local_100 = 0.0;
            }
            if ((float)local_f4 <= 0.0) {
              local_f4 = 0.0;
            }
            if (fVar20 <= (float)local_f8) {
              local_f8 = fVar20;
            }
            if (fVar20 <= fStack_fc) {
              fStack_fc = fVar20;
            }
            if (fVar20 <= local_100) {
              local_100 = fVar20;
            }
            if (fVar20 <= (float)local_f4) {
              local_f4 = fVar20;
            }
            local_res10._s_0.G = (char)(int)(fStack_fc * fVar21 + fVar40);
            local_res10._s_0.B = (char)(int)((float)local_f8 * fVar21 + fVar40);
            local_res10._s_0.R = (char)(int)(local_100 * fVar21 + fVar40);
            local_res10._s_0.A = (char)(int)((float)local_f4 * fVar21 + fVar40);
          }
          pfVar23 = pfVar23 + 4;
          *pFVar24 = local_res10;
          pFVar24 = pFVar24 + 1;
          uVar26 = uVar26 - 1;
          dVar38 = local_110;
          dVar30 = local_118;
          dVar34 = local_e8;
          dVar36 = local_f0;
        } while (uVar26 != 0);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 < param_2);
  }
  return;
}

// ConvertRawR32G32B32A32DataToFLinearColor @ 145b5eaa0

void __cdecl
`anonymous_namespace'::ConvertRawR32G32B32A32DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5,
          FReadSurfaceDataFlags *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  FReadSurfaceDataFlags *pFVar20;
  FReadSurfaceDataFlags *pFVar21;
  FReadSurfaceDataFlags *pFVar22;
  FReadSurfaceDataFlags *pFVar23;
  FReadSurfaceDataFlags *pFVar24;
  FReadSurfaceDataFlags *pFVar25;
  double dVar26;
  double dVar27;
  FReadSurfaceDataFlags *pFVar28;
  double dVar29;
  uint uVar30;
  float *pfVar31;
  FLinearColor *pFVar32;
  ulonglong uVar33;
  uint uVar34;
  uint uVar35;
  FReadSurfaceDataFlags *pFVar36;
  FReadSurfaceDataFlags *pFVar37;
  FReadSurfaceDataFlags *pFVar38;
  FReadSurfaceDataFlags *pFVar39;
  FReadSurfaceDataFlags *pFVar40;
  FReadSurfaceDataFlags *pFVar41;
  FReadSurfaceDataFlags *pFVar42;
  FReadSurfaceDataFlags *pFVar43;
  FReadSurfaceDataFlags *pFVar44;
  FReadSurfaceDataFlags *pFVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  FReadSurfaceDataFlags *local_f8;
  FReadSurfaceDataFlags *local_f0;
  FReadSurfaceDataFlags *local_e8;
  FReadSurfaceDataFlags *local_e0;
  FReadSurfaceDataFlags *local_d8;
  FReadSurfaceDataFlags *local_d0;
  FReadSurfaceDataFlags *local_c8;
  
  if (param_6->CompressionMode != RCM_MinMax) {
    uVar34 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
    param_6 = __real_3ff0000000000000;
    local_d8 = (FReadSurfaceDataFlags *)0x0;
    local_e0 = (FReadSurfaceDataFlags *)0x0;
    local_e8 = (FReadSurfaceDataFlags *)0x0;
    local_f0 = (FReadSurfaceDataFlags *)0x0;
    local_f8 = __real_3ff0000000000000;
    local_c8 = __real_3ff0000000000000;
    local_d0 = __real_3ff0000000000000;
    uVar35 = uVar34;
    pFVar24 = __real_3ff0000000000000;
    pFVar42 = __real_3ff0000000000000;
    pFVar44 = __real_3ff0000000000000;
    pFVar39 = __real_3ff0000000000000;
    if (param_2 != 0) {
      do {
        pfVar31 = (float *)(param_3 + uVar35 * param_4);
        uVar30 = uVar34;
        if (3 < param_1) {
          uVar30 = (param_1 - 4 >> 2) + 1;
          uVar33 = (ulonglong)uVar30;
          uVar30 = uVar30 * 4;
          do {
            pfVar1 = pfVar31 + 3;
            fVar16 = *pfVar31;
            pfVar2 = pfVar31 + 4;
            pfVar3 = pfVar31 + 8;
            pfVar4 = pfVar31 + 0xc;
            pfVar5 = pfVar31 + 1;
            pfVar6 = pfVar31 + 5;
            pfVar7 = pfVar31 + 9;
            pfVar8 = pfVar31 + 0xd;
            pfVar9 = pfVar31 + 2;
            pfVar10 = pfVar31 + 6;
            pfVar11 = pfVar31 + 10;
            pfVar12 = pfVar31 + 0xe;
            pfVar13 = pfVar31 + 7;
            pfVar14 = pfVar31 + 0xb;
            pfVar15 = pfVar31 + 0xf;
            pfVar31 = pfVar31 + 0x10;
            pFVar36 = (FReadSurfaceDataFlags *)(double)*pfVar1;
            pFVar20 = (FReadSurfaceDataFlags *)(double)*pfVar4;
            pFVar42 = (FReadSurfaceDataFlags *)(double)*pfVar11;
            pFVar44 = (FReadSurfaceDataFlags *)(double)*pfVar9;
            pFVar39 = (FReadSurfaceDataFlags *)(double)fVar16;
            pFVar24 = (FReadSurfaceDataFlags *)(double)*pfVar5;
            pFVar37 = pFVar39;
            if ((double)local_d8 <= (double)pFVar39) {
              pFVar37 = local_d8;
            }
            if ((double)pFVar39 <= (double)local_f8) {
              pFVar39 = local_f8;
            }
            pFVar21 = (FReadSurfaceDataFlags *)(double)*pfVar2;
            pFVar45 = (FReadSurfaceDataFlags *)(double)*pfVar3;
            if ((double)pFVar21 <= (double)pFVar37) {
              pFVar37 = pFVar21;
            }
            pFVar23 = (FReadSurfaceDataFlags *)(double)*pfVar6;
            if ((double)pFVar45 <= (double)pFVar37) {
              pFVar37 = pFVar45;
            }
            pFVar22 = (FReadSurfaceDataFlags *)(double)*pfVar7;
            local_d8 = pFVar37;
            if ((double)pFVar20 <= (double)pFVar37) {
              local_d8 = pFVar20;
            }
            pFVar43 = (FReadSurfaceDataFlags *)(double)*pfVar8;
            pFVar37 = pFVar24;
            if ((double)local_e0 <= (double)pFVar24) {
              pFVar37 = local_e0;
            }
            if ((double)pFVar24 <= (double)param_6) {
              pFVar24 = param_6;
            }
            pFVar25 = (FReadSurfaceDataFlags *)(double)*pfVar10;
            if ((double)pFVar23 <= (double)pFVar37) {
              pFVar37 = pFVar23;
            }
            pFVar41 = (FReadSurfaceDataFlags *)(double)*pfVar12;
            if ((double)pFVar22 <= (double)pFVar37) {
              pFVar37 = pFVar22;
            }
            pFVar28 = (FReadSurfaceDataFlags *)(double)*pfVar13;
            local_e0 = pFVar37;
            if ((double)pFVar43 <= (double)pFVar37) {
              local_e0 = pFVar43;
            }
            pFVar37 = (FReadSurfaceDataFlags *)(double)*pfVar14;
            pFVar38 = pFVar44;
            if ((double)local_e8 <= (double)pFVar44) {
              pFVar38 = local_e8;
            }
            if ((double)pFVar44 <= (double)local_c8) {
              pFVar44 = local_c8;
            }
            pFVar40 = (FReadSurfaceDataFlags *)(double)*pfVar15;
            if ((double)pFVar25 <= (double)pFVar38) {
              pFVar38 = pFVar25;
            }
            if ((double)pFVar44 <= (double)pFVar25) {
              pFVar44 = pFVar25;
            }
            if ((double)pFVar42 <= (double)pFVar38) {
              pFVar38 = pFVar42;
            }
            if ((double)pFVar44 <= (double)pFVar42) {
              pFVar44 = pFVar42;
            }
            pFVar42 = pFVar36;
            if ((double)pFVar36 <= (double)local_d0) {
              pFVar42 = local_d0;
            }
            local_e8 = pFVar38;
            if ((double)pFVar41 <= (double)pFVar38) {
              local_e8 = pFVar41;
            }
            if ((double)pFVar44 <= (double)pFVar41) {
              pFVar44 = pFVar41;
            }
            if ((double)pFVar42 <= (double)pFVar28) {
              pFVar42 = pFVar28;
            }
            if ((double)local_f0 <= (double)pFVar36) {
              pFVar36 = local_f0;
            }
            if ((double)pFVar42 <= (double)pFVar37) {
              pFVar42 = pFVar37;
            }
            if ((double)pFVar28 <= (double)pFVar36) {
              pFVar36 = pFVar28;
            }
            if ((double)pFVar42 <= (double)pFVar40) {
              pFVar42 = pFVar40;
            }
            if ((double)pFVar37 <= (double)pFVar36) {
              pFVar36 = pFVar37;
            }
            local_f0 = pFVar36;
            if ((double)pFVar40 <= (double)pFVar36) {
              local_f0 = pFVar40;
            }
            if ((double)pFVar39 <= (double)pFVar21) {
              pFVar39 = pFVar21;
            }
            if ((double)pFVar39 <= (double)pFVar45) {
              pFVar39 = pFVar45;
            }
            if ((double)pFVar39 <= (double)pFVar20) {
              pFVar39 = pFVar20;
            }
            if ((double)pFVar24 <= (double)pFVar23) {
              pFVar24 = pFVar23;
            }
            if ((double)pFVar24 <= (double)pFVar22) {
              pFVar24 = pFVar22;
            }
            if ((double)pFVar24 <= (double)pFVar43) {
              pFVar24 = pFVar43;
            }
            uVar33 = uVar33 - 1;
            param_6 = pFVar24;
            local_f8 = pFVar39;
            local_d0 = pFVar42;
            local_c8 = pFVar44;
          } while (uVar33 != 0);
          uVar47 = SUB84(local_d8,0);
          uVar48 = (undefined4)((ulonglong)local_d8 >> 0x20);
          uVar49 = SUB84(local_e0,0);
          uVar50 = (undefined4)((ulonglong)local_e0 >> 0x20);
          uVar51 = SUB84(local_e8,0);
          uVar52 = (undefined4)((ulonglong)local_e8 >> 0x20);
          uVar53 = SUB84(local_f0,0);
          uVar54 = (undefined4)((ulonglong)local_f0 >> 0x20);
        }
        if (uVar30 < param_1) {
          pfVar31 = pfVar31 + 2;
          uVar33 = (ulonglong)(param_1 - uVar30);
          pFVar20 = pFVar44;
          pFVar36 = pFVar42;
          pFVar37 = pFVar39;
          do {
            pfVar1 = pfVar31 + -2;
            pfVar2 = pfVar31 + -1;
            fVar16 = *pfVar31;
            pfVar3 = pfVar31 + 1;
            pfVar31 = pfVar31 + 4;
            local_d8 = (FReadSurfaceDataFlags *)(double)*pfVar1;
            local_e8 = (FReadSurfaceDataFlags *)(double)fVar16;
            pFVar39 = local_d8;
            if ((double)local_d8 <= (double)pFVar37) {
              pFVar39 = pFVar37;
            }
            if ((double)CONCAT44(uVar48,uVar47) <= (double)local_d8) {
              local_d8 = (FReadSurfaceDataFlags *)CONCAT44(uVar48,uVar47);
            }
            pFVar42 = (FReadSurfaceDataFlags *)(double)*pfVar3;
            uVar47 = SUB84(local_d8,0);
            uVar48 = (undefined4)((ulonglong)local_d8 >> 0x20);
            pFVar44 = local_e8;
            if ((double)local_e8 <= (double)pFVar20) {
              pFVar44 = pFVar20;
            }
            if ((double)CONCAT44(uVar52,uVar51) <= (double)local_e8) {
              local_e8 = (FReadSurfaceDataFlags *)CONCAT44(uVar52,uVar51);
            }
            pFVar24 = (FReadSurfaceDataFlags *)(double)*pfVar2;
            uVar51 = SUB84(local_e8,0);
            uVar52 = (undefined4)((ulonglong)local_e8 >> 0x20);
            local_e0 = pFVar24;
            if ((double)CONCAT44(uVar50,uVar49) <= (double)pFVar24) {
              local_e0 = (FReadSurfaceDataFlags *)CONCAT44(uVar50,uVar49);
            }
            if ((double)pFVar24 <= (double)param_6) {
              pFVar24 = param_6;
            }
            uVar49 = SUB84(local_e0,0);
            uVar50 = (undefined4)((ulonglong)local_e0 >> 0x20);
            local_f0 = pFVar42;
            if ((double)CONCAT44(uVar54,uVar53) <= (double)pFVar42) {
              local_f0 = (FReadSurfaceDataFlags *)CONCAT44(uVar54,uVar53);
            }
            if ((double)pFVar42 <= (double)pFVar36) {
              pFVar42 = pFVar36;
            }
            uVar53 = SUB84(local_f0,0);
            uVar54 = (undefined4)((ulonglong)local_f0 >> 0x20);
            uVar33 = uVar33 - 1;
            pFVar20 = pFVar44;
            pFVar36 = pFVar42;
            pFVar37 = pFVar39;
            param_6 = pFVar24;
            local_f8 = pFVar39;
            local_d0 = pFVar42;
            local_c8 = pFVar44;
          } while (uVar33 != 0);
        }
        uVar35 = uVar35 + 1;
      } while (uVar35 < param_2);
      do {
        if (param_1 != 0) {
          dVar46 = (double)__real_3ff0000000000000 /
                   ((double)pFVar39 - (double)CONCAT44(uVar48,uVar47));
          pFVar32 = param_5 + uVar34 * param_1;
          dVar26 = (double)__real_3ff0000000000000 /
                   ((double)pFVar24 - (double)CONCAT44(uVar50,uVar49));
          dVar27 = (double)__real_3ff0000000000000 /
                   ((double)pFVar44 - (double)CONCAT44(uVar52,uVar51));
          dVar29 = (double)__real_3ff0000000000000 /
                   ((double)pFVar42 - (double)CONCAT44(uVar54,uVar53));
          uVar33 = (ulonglong)param_1;
          do {
            fVar16 = *(float *)param_3;
            fVar17 = *(float *)((longlong)param_3 + 4);
            fVar18 = *(float *)((longlong)param_3 + 8);
            fVar19 = *(float *)((longlong)param_3 + 0xc);
            param_3 = (uchar *)((longlong)param_3 + 0x10);
            (pFVar32->field0_0x0)._s_0.R =
                 (float)(((double)fVar16 - (double)CONCAT44(uVar48,uVar47)) * dVar46);
            (pFVar32->field0_0x0)._s_0.G =
                 (float)(((double)fVar17 - (double)CONCAT44(uVar50,uVar49)) * dVar26);
            (pFVar32->field0_0x0)._s_0.B =
                 (float)(((double)fVar18 - (double)CONCAT44(uVar52,uVar51)) * dVar27);
            (pFVar32->field0_0x0)._s_0.A =
                 (float)(((double)fVar19 - (double)CONCAT44(uVar54,uVar53)) * dVar29);
            pFVar32 = pFVar32 + 1;
            uVar33 = uVar33 - 1;
            pFVar24 = param_6;
          } while (uVar33 != 0);
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < param_2);
    }
    return;
  }
  memcpy(param_5,param_3,(longlong)(int)(param_1 * param_2 * 0x10));
  return;
}

// ConvertRawR8G8B8A8DataToFLinearColor @ 145b5f010

void __cdecl
`anonymous_namespace'::ConvertRawR8G8B8A8DataToFLinearColor
          (uint param_1,uint param_2,uchar *param_3,uint param_4,FLinearColor *param_5)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  uint uVar6;
  FLinearColor *pFVar7;
  float *pfVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint uVar11;
  
  fVar5 = __real_3b808081;
  if (param_2 != 0) {
    uVar11 = 0;
    do {
      uVar6 = 0;
      pFVar7 = param_5 + uVar11 * param_1;
      pbVar9 = param_3 + uVar11 * param_4;
      if (3 < param_1) {
        uVar6 = (param_1 - 4 >> 2) + 1;
        uVar10 = (ulonglong)uVar6;
        uVar6 = uVar6 * 4;
        pfVar8 = &pFVar7[1].field0_0x0._s_0.B;
        do {
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[1]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[2]];
          bVar4 = pbVar9[3];
          (pFVar7->field0_0x0)._s_0.R = FLinearColor::sRGBToLinearTable[*pbVar9];
          pFVar7 = pFVar7 + 4;
          pfVar8[-5] = fVar2;
          pfVar8[-4] = fVar3;
          pfVar8[-3] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[5]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[6]];
          bVar4 = pbVar9[7];
          ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R = FLinearColor::sRGBToLinearTable[pbVar9[4]];
          pfVar8[-1] = fVar2;
          *pfVar8 = fVar3;
          pfVar8[1] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[9]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[10]];
          bVar4 = pbVar9[0xb];
          pfVar8[2] = FLinearColor::sRGBToLinearTable[pbVar9[8]];
          pfVar8[3] = fVar2;
          pfVar8[4] = fVar3;
          pfVar8[5] = (float)bVar4 * fVar5;
          fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[0xd]];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[0xe]];
          bVar4 = pbVar9[0xf];
          pbVar1 = pbVar9 + 0xc;
          pbVar9 = pbVar9 + 0x10;
          pfVar8[6] = FLinearColor::sRGBToLinearTable[*pbVar1];
          pfVar8[7] = fVar2;
          pfVar8[8] = fVar3;
          pfVar8[9] = (float)bVar4 * fVar5;
          uVar10 = uVar10 - 1;
          pfVar8 = pfVar8 + 0x10;
        } while (uVar10 != 0);
      }
      if (uVar6 < param_1) {
        uVar10 = (ulonglong)(param_1 - uVar6);
        pfVar8 = &(pFVar7->field0_0x0)._s_0.B;
        pbVar9 = pbVar9 + 1;
        do {
          fVar2 = FLinearColor::sRGBToLinearTable[*pbVar9];
          fVar3 = FLinearColor::sRGBToLinearTable[pbVar9[1]];
          bVar4 = pbVar9[2];
          ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R = FLinearColor::sRGBToLinearTable[pbVar9[-1]];
          pfVar8[-1] = fVar2;
          *pfVar8 = fVar3;
          pfVar8[1] = (float)bVar4 * fVar5;
          uVar10 = uVar10 - 1;
          pfVar8 = pfVar8 + 4;
          pbVar9 = pbVar9 + 4;
        } while (uVar10 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  return;
}

// CreateVulkanRenderPass @ 145b64850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

VkRenderPass_T * __cdecl
CreateVulkanRenderPass(FVulkanDevice *param_1,FVulkanRenderTargetLayout *param_2)

{
  VkResult VVar1;
  VkRenderPass_T *pVVar2;
  undefined1 auStack_9b8 [32];
  VkRenderPass_T *local_998 [2];
  undefined1 local_988 [816];
  ForAnyElementType local_658;
  ForAnyElementType local_5e8;
  ForAnyElementType local_548;
  ForAnyElementType local_538;
  VkRenderPassCreateInfo local_470;
  FVulkanDevice *local_430;
  ForAnyElementType local_3a8;
  VkRenderPassCreateInfo2 local_80;
  FVulkanDevice *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_9b8;
  if (((param_1->OptionalDeviceExtensions).field0_0x0.Packed & 0x100000000) == 0) {
    FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
    ::
    FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
              ((FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
                *)local_988,param_1);
    FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
    ::BuildCreateInfo((FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription>,FVulkanSubpassDependency<VkSubpassDependency>,FVulkanAttachmentReference<VkAttachmentReference>,FVulkanAttachmentDescription<VkAttachmentDescription>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo>_>
                       *)local_988,param_2);
    local_998[0] = (VkRenderPass_T *)0x0;
    VVar1 = (*VulkanDynamicAPI::vkCreateRenderPass)
                      (local_430->Device,&local_470,&VulkanRHI::GAllocationCallbacks,local_998);
    if ((int)VVar1 < 0) {
      VulkanRHI::VerifyVulkanResult
                (VVar1,
                 "VulkanRHI::vkCreateRenderPass(Device.GetHandle(), this, VULKAN_CPU_ALLOCATOR, &Handle)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                 ,0x171);
    }
    pVVar2 = local_998[0];
    if (local_5e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data);
    }
    if (local_658.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data);
    }
  }
  else {
    FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
    ::
    FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
              ((FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
                *)local_988,param_1);
    FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
    ::BuildCreateInfo((FVulkanRenderPassBuilder<FVulkanSubpassDescription<VkSubpassDescription2>,FVulkanSubpassDependency<VkSubpassDependency2>,FVulkanAttachmentReference<VkAttachmentReference2>,FVulkanAttachmentDescription<VkAttachmentDescription2>,FVulkanRenderPassCreateInfo<VkRenderPassCreateInfo2>_>
                       *)local_988,param_2);
    local_998[0] = (VkRenderPass_T *)0x0;
    VVar1 = (*VulkanDynamicAPI::vkCreateRenderPass2KHR)
                      (local_30->Device,&local_80,&VulkanRHI::GAllocationCallbacks,local_998);
    if ((int)VVar1 < 0) {
      VulkanRHI::VerifyVulkanResult
                (VVar1,
                 "VulkanRHI::vkCreateRenderPass2KHR(Device.GetHandle(), this, VULKAN_CPU_ALLOCATOR, &Handle)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderpass.h"
                 ,0x19a);
    }
    pVVar2 = local_998[0];
    if (local_3a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data);
    }
    local_988._800_8_ = local_548.Data;
    if (local_538.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data);
      local_988._800_8_ = local_548.Data;
    }
  }
  if ((FScriptContainerElement *)local_988._800_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_988._800_8_);
  }
  return pVVar2;
}

// FillDynamicRenderingCreateInfo @ 145b66370

/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __cdecl
FillDynamicRenderingCreateInfo
          (FRenderTargets *param_1,VkPipelineRenderingCreateInfo *param_2,
          TStaticArray<VkFormat,8,4294967295> *param_3)

{
  uint uVar1;
  VkFormat VVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  
  if (param_1->NumColorAttachments != '\0') {
    uVar7 = 0;
    do {
      if ((param_1->ColorAttachments).ArrayNum <= (int)uVar7) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar1 = *(uint *)((param_1->ColorAttachments).AllocatorInstance.Data + uVar7 * 0x10);
      uVar5 = 0;
      if ((int)uVar1 < (param_1->Descriptions).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar6 = (char)uVar7 + 1;
      param_3->Elements[uVar7] =
           *(VkFormat *)
            ((param_1->Descriptions).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20);
      uVar7 = (ulonglong)bVar6;
    } while (bVar6 < param_1->NumColorAttachments);
    param_2->pColorAttachmentFormats = param_3->Elements;
    param_2->colorAttachmentCount = (uint)param_1->NumColorAttachments;
  }
  if (param_1->bHasDepthStencil != '\0') {
    uVar1 = (param_1->Depth).Attachment;
    uVar5 = 0;
    if ((int)uVar1 < (param_1->Descriptions).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    VVar2 = *(VkFormat *)
             ((param_1->Descriptions).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20);
    param_2->depthAttachmentFormat = VVar2;
    if ((((VVar2 == VK_FORMAT_S8_UINT) || (VVar2 == VK_FORMAT_D16_UNORM_S8_UINT)) ||
        (VVar2 == VK_FORMAT_D24_UNORM_S8_UINT)) || (VVar2 == VK_FORMAT_D32_SFLOAT_S8_UINT)) {
      param_2->stencilAttachmentFormat = VVar2;
    }
  }
  return;
}

// FillDynamicStates @ 145b66510

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

TArray<VkDynamicState,TSizedDefaultAllocator<32>_> * __cdecl
FillDynamicStates(TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
                 FVulkanDevice *param_1,FGfxPipelineDesc *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34 [3];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (param_1->OptionalDeviceExtensions).field0_0x0.Packed;
  uVar3 = param_2->ShaderKeys[3];
  iVar7 = 4;
  if ((uVar2 >> 0x37 & 1) != 0) {
    iVar7 = 10;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar7 + (uint)((byte)(uVar2 >> 0x35) & 1) * 8 + (uint)((byte)(uVar2 >> 0x38) & 1) +
                 (uint)((byte)(uVar2 >> 0x36) & 1),&__return_storage_ptr__->AllocatorInstance,0,
             piVar1);
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_88 = 8;
  if (((pFVar4 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < pFVar4 + (longlong)*piVar1 * 4)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = __return_storage_ptr__->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar7 + 1;
  local_84 = 5;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_88
  ;
  pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_84) &&
      ((FScriptContainerElement *)&local_84 < pFVar4 + (longlong)*piVar1 * 4)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = __return_storage_ptr__->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar7 + 1;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_84
  ;
  if ((uVar2 >> 0x35 & 1) == 0) {
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_58 = 0;
    if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_54 = 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_58;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_54) &&
        ((FScriptContainerElement *)&local_54 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    uVar8 = local_54;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      uVar8 = local_54;
    }
  }
  else {
    if (uVar3 == 0) {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_80 = 0x3b9edcfa;
      if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           local_80;
    }
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_7c = 0x3b9edcf8;
    if (((pFVar4 <= (FScriptContainerElement *)&local_7c) &&
        ((FScriptContainerElement *)&local_7c < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_78 = 0x3b9edd02;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_7c;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_74 = 0x3b9edd03;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_78;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_74) &&
        ((FScriptContainerElement *)&local_74 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_70 = 0x3b9edd00;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_74;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_70) &&
        ((FScriptContainerElement *)&local_70 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_6c = 0x3b9edcfe;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_70;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_6c) &&
        ((FScriptContainerElement *)&local_6c < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_68 = 0x3b9edd01;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_6c;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_64 = 0x3b9edcff;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_68;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_64) &&
        ((FScriptContainerElement *)&local_64 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_60 = 0x3b9edcfb;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_64;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_5c = 0x3b9edcfc;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_60;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_5c) &&
        ((FScriptContainerElement *)&local_5c < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    uVar8 = local_5c;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      uVar8 = local_5c;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar7 + 1;
  *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) = uVar8;
  if ((uVar2 >> 0x36 & 1) != 0) {
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_50 = 0x3ba08aaa;
    if (((pFVar4 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_50;
  }
  if ((uVar2 >> 0x37 & 1) != 0) {
    if (0 < (param_2->ColorAttachmentStates).ArrayNum) {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_4c = 0x3ba1bb62;
      if (((pFVar4 <= (FScriptContainerElement *)&local_4c) &&
          ((FScriptContainerElement *)&local_4c < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      local_48 = 0x3ba1bb64;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           local_4c;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      local_44 = 0x3ba1bb63;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           local_48;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_44) &&
          ((FScriptContainerElement *)&local_44 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           local_44;
    }
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_40 = 0x3ba1bb5c;
    if (((pFVar4 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_3c = 0x3ba1bb5d;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_40;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_3c) &&
        ((FScriptContainerElement *)&local_3c < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_38 = 0x3ba1bb5f;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_3c;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_38;
  }
  if (((uVar2 & 0x100000000000000) != 0) && (uVar3 == 0)) {
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_34[0] = 0x3ba02900;
    if ((pFVar4 <= (FScriptContainerElement *)local_34) &&
       (((FScriptContainerElement *)local_34 < pFVar4 + (longlong)*piVar1 * 4 &&
        (bVar6 = FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<VkDynamicState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
         local_34[0];
  }
  return __return_storage_ptr__;
}

// GetBLASBuildData @ 145b68620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkGeometryTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __cdecl
GetBLASBuildData(VkDevice_T *param_1,TArrayView<FRayTracingGeometrySegment_const_,int> *param_2,
                ERayTracingGeometryType param_3,TRefCountPtr<FRHIBuffer> param_4,uint param_5,
                ERayTracingAccelerationStructureFlags param_6,
                EAccelerationStructureBuildMode param_7,EBLASBuildDataUsage param_8,
                FVkRtBLASBuildData *param_9)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ForElementType<VkAccelerationStructureGeometryKHR> FVar4;
  ForElementType<VkAccelerationStructureBuildRangeInfoKHR> FVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TArrayView<FRayTracingGeometrySegment_const_,int> *pTVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ForElementType<VkAccelerationStructureGeometryKHR> FVar14;
  ForElementType<VkAccelerationStructureBuildRangeInfoKHR> FVar15;
  ForElementType<unsigned_int> FVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ForElementType<unsigned_int> FVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStackY_148 [32];
  int local_f8;
  uint local_f0;
  longlong local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 local_7c;
  TArrayView<FRayTracingGeometrySegment_const_,int> *local_78;
  VkDevice_T *local_70;
  ForElementType<unsigned_int> local_68;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar23 = 0;
  lVar17 = (param_4.Reference)->_padding_;
  local_f8 = 0;
  uVar21 = uVar23;
  if (lVar17 != 0) {
    if (param_8 == Rendering) {
      local_f8 = *(int *)(lVar17 + 0xdc);
      uVar21 = (ulonglong)param_5 + *(longlong *)(lVar17 + 0x130);
    }
    else {
      uVar21 = 0;
      if (*(int *)(lVar17 + 0xd8) == 0) {
        local_f8 = 4;
      }
      else {
        local_f8 = *(int *)(lVar17 + 0xdc);
      }
    }
  }
  iVar13 = param_2->ArrayNum;
  local_68.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_54 = 1;
  local_58 = 0;
  local_f0 = 0;
  local_78 = param_2;
  local_70 = param_1;
  if (0 < iVar13) {
    local_e8 = 0;
    uVar18 = uVar23;
    do {
      pTVar9 = local_78;
      uVar22 = 0;
      if ((int)(uint)uVar18 < iVar13) {
        uVar22 = ~(uint)uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar19 = (longlong *)((longlong)&(pTVar9->DataPtr->VertexBuffer).Reference + local_e8);
      uVar18 = uVar23;
      if (param_8 == Rendering) {
        uVar18 = (ulonglong)*(uint *)((longlong)plVar19 + 0xc) + *(longlong *)(*plVar19 + 0x130);
      }
      local_d8 = 0x3b9d13f6;
      uStack_84 = 0;
      local_7c = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      local_b4 = 0;
      uStack_b0 = 0;
      uVar3 = uStack_b0;
      uStack_ac = 0;
      uVar10 = uStack_ac;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      local_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_80 = (uint)((char)plVar19[4] != '\0');
      if (*(char *)((longlong)plVar19 + 0x21) == '\0') {
        uStack_80 = ((char)plVar19[4] != '\0') + 2;
      }
      uStack_b0 = (undefined4)uVar18;
      uVar7 = uStack_b0;
      uStack_ac = (undefined4)(uVar18 >> 0x20);
      uVar8 = uStack_ac;
      if (param_3 == RTGT_Triangles) {
        uStack_c8 = 0;
        uStack_c0 = 0x3b9d13f5;
        uStack_b0 = 0x6a;
        uStack_98 = *(undefined4 *)((longlong)plVar19 + 0x14);
        uStack_a0 = (undefined4)plVar19[2];
        uStack_9c = 0;
        uStack_90 = (undefined4)uVar21;
        uStack_8c = (undefined4)(uVar21 >> 0x20);
        uStack_a8 = uVar7;
        uStack_a4 = uStack_ac;
        if ((((int)plVar19[1] != 3) && ((int)plVar19[1] != 4)) &&
           (uStack_ac = uVar10,
           bVar11 = FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                               ,0x10b,L""), uVar10 = uStack_ac, bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_ac = uVar10;
        uStack_88 = 0;
        uStack_84 = 0;
        if ((param_4.Reference)->_padding_ == 0) {
          local_94 = 0x3b9d4e88;
          iVar13 = (int)plVar19[3] * (int)plVar19[2];
        }
        else {
          local_94 = (uint)(local_f8 != 2);
          iVar13 = local_f8 * (int)plVar19[3];
        }
        iVar13 = iVar13 * 3;
      }
      else {
        iVar13 = 0;
        uStack_b0 = uVar3;
        if (param_3 == RTGT_Procedural) {
          uStack_ac = uVar10;
          if ((*(uint *)(plVar19 + 2) < 0x18) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("Segment.VertexBufferStride >= (2 * sizeof(FVector3f))",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                                  ,0x122,
                                  L"Procedural geometry vertex buffer must contain at least 2xFloat3 that defines 3D bounding boxes of primitives."
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((*(byte *)(plVar19 + 2) & 7) != 0) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("Segment.VertexBufferStride % 8 == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                                  ,0x123,
                                  L"Procedural geometry vertex buffer stride must be a multiple of 8."
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uStack_c8 = 1;
          uStack_c0 = 0x3b9d13f3;
          uStack_a8 = (undefined4)plVar19[2];
          uStack_a4 = 0;
          uStack_b0 = uVar7;
          uStack_ac = uVar8;
        }
        else {
          uStack_ac = uVar10;
          bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                              ,0x12d,L"Unexpected ray tracing geometry type");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      FVar4 = (param_9->Segments).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<VkAccelerationStructureGeometryKHR>)param_9;
      if (FVar4 != (ForElementType<VkAccelerationStructureGeometryKHR>)0x0) {
        FVar14 = FVar4;
      }
      if ((ulonglong)FVar14 <= &local_d8) {
        FVar14 = (ForElementType<VkAccelerationStructureGeometryKHR>)param_9;
        if (FVar4 != (ForElementType<VkAccelerationStructureGeometryKHR>)0x0) {
          FVar14 = FVar4;
        }
        if ((&local_d8 <
             (undefined4 *)((longlong)(param_9->Segments).ArrayMax * 0x60 + (longlong)FVar14)) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar12 = (param_9->Segments).ArrayNum;
      if (iVar12 == (param_9->Segments).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureGeometryKHR>_>
                           (0x860,(ForElementType<VkAccelerationStructureGeometryKHR> *)param_9,
                            &(param_9->Segments).ArrayMax);
      }
      (param_9->Segments).ArrayNum = iVar12 + 1;
      FVar4 = (param_9->Segments).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<VkAccelerationStructureGeometryKHR>)param_9;
      if (FVar4 != (ForElementType<VkAccelerationStructureGeometryKHR>)0x0) {
        FVar14 = FVar4;
      }
      lVar17 = (longlong)iVar12 * 0x60;
      *(undefined8 *)(lVar17 + (longlong)FVar14) = CONCAT44(uStack_d4,local_d8);
      ((undefined8 *)(lVar17 + (longlong)FVar14))[1] = CONCAT44(uStack_cc,uStack_d0);
      puVar2 = (undefined8 *)(lVar17 + 0x10 + (longlong)FVar14);
      *puVar2 = CONCAT44(uStack_c4,uStack_c8);
      puVar2[1] = CONCAT44(uStack_bc,uStack_c0);
      puVar2 = (undefined8 *)(lVar17 + 0x20 + (longlong)FVar14);
      *puVar2 = CONCAT44(local_b4,uStack_b8);
      puVar2[1] = CONCAT44(uStack_ac,uStack_b0);
      puVar2 = (undefined8 *)(lVar17 + 0x30 + (longlong)FVar14);
      *puVar2 = CONCAT44(uStack_a4,uStack_a8);
      puVar2[1] = CONCAT44(uStack_9c,uStack_a0);
      puVar2 = (undefined8 *)(lVar17 + 0x40 + (longlong)FVar14);
      *puVar2 = CONCAT44(local_94,uStack_98);
      puVar2[1] = CONCAT44(uStack_8c,uStack_90);
      puVar2 = (undefined8 *)(lVar17 + 0x50 + (longlong)FVar14);
      *puVar2 = CONCAT44(uStack_84,uStack_88);
      puVar2[1] = CONCAT44(local_7c,uStack_80);
      uVar3 = 0;
      if (*(char *)((longlong)plVar19 + 0x22) != '\0') {
        uVar3 = *(undefined4 *)((longlong)plVar19 + 0x1c);
      }
      FVar5 = (param_9->Ranges).AllocatorInstance.SecondaryData;
      local_50 = CONCAT44(iVar13,uVar3);
      uStack_48 = 0;
      FVar15 = (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)&param_9->Ranges;
      if (FVar5 != (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)0x0) {
        FVar15 = FVar5;
      }
      piVar1 = &(param_9->Ranges).ArrayMax;
      if ((ulonglong)FVar15 <= &local_50) {
        FVar15 = (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)&param_9->Ranges;
        if (FVar5 != (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)0x0) {
          FVar15 = FVar5;
        }
        if ((&local_50 < (undefined8 *)((longlong)*piVar1 * 0x10 + (longlong)FVar15)) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar13 = (param_9->Ranges).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildRangeInfoKHR>_>
                           (0x410,&(param_9->Ranges).AllocatorInstance,piVar1);
      }
      (param_9->Ranges).ArrayNum = iVar13 + 1;
      FVar5 = (param_9->Ranges).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)&param_9->Ranges;
      if (FVar5 != (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)0x0) {
        FVar15 = FVar5;
      }
      FVar20 = (ForElementType<unsigned_int>)((longlong)plVar19 + 0x1c);
      puVar2 = (undefined8 *)((longlong)FVar15 + (longlong)iVar13 * 0x10);
      *puVar2 = local_50;
      puVar2[1] = uStack_48;
      FVar16 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_68.SecondaryData;
      }
      if ((ulonglong)FVar16 <= (ulonglong)FVar20) {
        FVar16 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_68.SecondaryData;
        }
        if (((ulonglong)FVar20 < (ulonglong)((longlong)FVar16 + (longlong)local_54 * 4)) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (local_58 == local_54) {
        local_58 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                             (0x404,&local_68,&local_54);
      }
      FVar16 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_68.SecondaryData;
      }
      lVar17 = (longlong)local_58;
      local_f0 = local_f0 + 1;
      uVar18 = (ulonglong)local_f0;
      local_e8 = local_e8 + 0x28;
      local_58 = local_58 + 1;
      *(undefined4 *)((longlong)FVar16 + lVar17 * 4) = *(undefined4 *)FVar20;
      iVar13 = local_78->ArrayNum;
    } while ((int)local_f0 < iVar13);
  }
  (param_9->GeometryInfo).type = VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR;
  uVar22 = 4;
  if ((param_6 & FastBuild) != None) {
    uVar22 = 8;
  }
  if ((param_6 & AllowUpdate) != None) {
    uVar22 = uVar22 | 1;
  }
  if ((param_6 & AllowCompaction) != None) {
    uVar22 = uVar22 | 2;
  }
  (param_9->GeometryInfo).geometryCount = (param_9->Segments).ArrayNum;
  (param_9->GeometryInfo).flags = uVar22 | 0x800;
  (param_9->GeometryInfo).mode = (uint)(param_7 != Build);
  FVar4 = (param_9->Segments).AllocatorInstance.SecondaryData;
  FVar14 = (ForElementType<VkAccelerationStructureGeometryKHR>)param_9;
  if (FVar4 != (ForElementType<VkAccelerationStructureGeometryKHR>)0x0) {
    FVar14 = FVar4;
  }
  (param_9->GeometryInfo).pGeometries = (VkAccelerationStructureGeometryKHR *)FVar14;
  FVar16 = (ForElementType<unsigned_int>)&local_68;
  if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar16 = local_68.SecondaryData;
  }
  (*VulkanDynamicAPI::vkGetAccelerationStructureBuildSizesKHR)
            (local_70,VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR,&param_9->GeometryInfo,
             (uint *)FVar16,&param_9->SizesInfo);
  if (local_68.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.SecondaryData);
  }
  if ((FRHIResource *)(param_4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_4.Reference)->_padding_);
  }
  return;
}

// GetDummyUB @ 145b69610

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FVulkanUniformBuffer * __cdecl GetDummyUB(FVulkanDevice *param_1,uint param_2)

{
  uint uVar1;
  FRHIUniformBufferLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FShaderParametersMetadata *pFVar6;
  FVulkanUniformBuffer *pFVar7;
  FVulkanUniformBuffer *pFVar8;
  longlong lVar9;
  uint local_res10 [2];
  TPairInitializer<unsigned_int_const_&,TRefCountPtr<FRHIUniformBuffer>_&&> local_res18;
  ForAnyElementType local_38;
  int local_30 [2];
  uint *local_28;
  TRefCountPtr<FRHIUniformBuffer> **local_20;
  
  local_res10[0] = param_2;
  AcquireSRWLockShared((PSRWLOCK)&DummyUBLock);
  pFVar7 = (FVulkanUniformBuffer *)0x0;
  if (DummyUBs._8_4_ != DummyUBs._52_4_) {
    lVar9 = 0x154bdc698;
    if (DummyUBs._64_8_ != 0) {
      lVar9 = DummyUBs._64_8_;
    }
    iVar5 = *(int *)(lVar9 + (ulonglong)(DummyUBs._72_4_ - 1 & local_res10[0]) * 4);
    while (iVar5 != -1) {
      lVar9 = DummyUBs._0_8_ + (longlong)iVar5 * 0x18;
      if (*(uint *)(DummyUBs._0_8_ + (longlong)iVar5 * 0x18) == local_res10[0]) {
        pFVar8 = (FVulkanUniformBuffer *)(lVar9 + 8);
        if (lVar9 == 0) {
          pFVar8 = pFVar7;
        }
        if (pFVar8 != (FVulkanUniformBuffer *)0x0) {
          pFVar7 = (FVulkanUniformBuffer *)pFVar8->_padding_;
          ReleaseSRWLockShared((PSRWLOCK)&DummyUBLock);
          return pFVar7;
        }
        break;
      }
      iVar5 = *(int *)(lVar9 + 0x10);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&DummyUBLock);
  AcquireSRWLockExclusive((PSRWLOCK)&DummyUBLock);
  pFVar6 = FindUniformBufferStructByLayoutHash(local_res10[0]);
  if (pFVar6 != (FShaderParametersMetadata *)0x0) {
    if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FVulkanUniformBuffer *)(*pcVar3)();
      return pFVar7;
    }
    pFVar2 = (pFVar6->Layout).Reference;
    if (pFVar2 != (FRHIUniformBufferLayout *)0x0) {
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30[0] = 0;
      local_30[1] = 0;
      uVar1 = pFVar2->ConstantBufferSize;
      if ((int)uVar1 < 1) {
        if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
        }
      }
      else {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,uVar1,&local_38,local_30,local_30 + 1);
        memset(local_38.Data + iVar5,0,(longlong)(int)uVar1);
      }
      pFVar8 = operator_new(0x98);
      if (pFVar8 == (FVulkanUniformBuffer *)0x0) {
        local_res18.Value = (TRefCountPtr<FRHIUniformBuffer> *)0x0;
      }
      else {
        pFVar7 = FVulkanUniformBuffer::FVulkanUniformBuffer
                           (pFVar8,param_1,pFVar2,local_38.Data,UniformBuffer_MultiFrame,None);
        local_res18.Value = (TRefCountPtr<FRHIUniformBuffer> *)pFVar7;
        if (pFVar7 != (FVulkanUniformBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar7);
        }
      }
      local_28 = local_res10;
      local_20 = &local_res18.Value;
      TSet<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FRHIUniformBuffer>_&&>_>
                ((TSet<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
                  *)&DummyUBs,&local_res18,(bool *)&local_28);
      if ((FVulkanUniformBuffer *)local_res18.Value != (FVulkanUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_res18.Value);
      }
      if (2 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DummyUBLock);
  return pFVar7;
}

// GetNumBitsPerPixel @ 145b69960

/* WARNING: Enum "VkFormat": Some values do not have unique names */

uint __cdecl VulkanRHI::GetNumBitsPerPixel(VkFormat param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  switch(param_1) {
  case VK_FORMAT_R5G6B5_UNORM_PACK16:
  case VK_FORMAT_R8G8_UNORM:
  case VK_FORMAT_R16_UNORM:
  case VK_FORMAT_R16_UINT:
  case VK_FORMAT_R16_SINT:
  case VK_FORMAT_R16_SFLOAT:
  case VK_FORMAT_D16_UNORM:
    return 0x10;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                       ,0x135,L"Unhandled bits per pixel for VkFormat %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
switchD_145b6998b_caseD_9:
    return 8;
  case VK_FORMAT_R8_UNORM:
  case VK_FORMAT_R8_UINT:
  case VK_FORMAT_D32_SFLOAT_S8_UINT:
  case VK_FORMAT_BC2_UNORM_BLOCK:
  case VK_FORMAT_BC2_SRGB_BLOCK:
  case VK_FORMAT_BC3_UNORM_BLOCK:
  case VK_FORMAT_BC3_SRGB_BLOCK:
  case VK_FORMAT_BC4_UNORM_BLOCK:
  case VK_FORMAT_BC4_SNORM_BLOCK:
  case VK_FORMAT_BC5_UNORM_BLOCK:
  case VK_FORMAT_BC5_SNORM_BLOCK:
  case VK_FORMAT_BC6H_UFLOAT_BLOCK:
  case VK_FORMAT_BC6H_SFLOAT_BLOCK:
  case VK_FORMAT_BC7_UNORM_BLOCK:
  case VK_FORMAT_BC7_SRGB_BLOCK:
    goto switchD_145b6998b_caseD_9;
  case VK_FORMAT_R8G8B8A8_UNORM:
  case VK_FORMAT_R8G8B8A8_SNORM:
  case VK_FORMAT_R8G8B8A8_UINT:
  case VK_FORMAT_B8G8R8A8_UNORM:
  case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
  case VK_FORMAT_R16G16_UNORM:
  case VK_FORMAT_R16G16_UINT:
  case VK_FORMAT_R16G16_SFLOAT:
  case VK_FORMAT_R32_UINT:
  case VK_FORMAT_R32_SINT:
  case VK_FORMAT_R32_SFLOAT:
  case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
  case VK_FORMAT_X8_D24_UNORM_PACK32:
  case VK_FORMAT_D32_SFLOAT:
  case VK_FORMAT_D24_UNORM_S8_UINT:
    return 0x20;
  case VK_FORMAT_R16G16B16A16_UNORM:
  case VK_FORMAT_R16G16B16A16_SNORM:
  case VK_FORMAT_R16G16B16A16_UINT:
  case VK_FORMAT_R16G16B16A16_SINT:
  case VK_FORMAT_R16G16B16A16_SFLOAT:
  case VK_FORMAT_R32G32_UINT:
  case VK_FORMAT_R32G32_SINT:
  case VK_FORMAT_R32G32_SFLOAT:
  case VK_FORMAT_R64_UINT:
  case VK_FORMAT_R64_SINT:
    return 0x40;
  case VK_FORMAT_R32G32B32A32_UINT:
  case VK_FORMAT_R32G32B32A32_SFLOAT:
    return 0x80;
  case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
  case VK_FORMAT_BC1_RGB_SRGB_BLOCK:
  case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
  case VK_FORMAT_BC1_RGBA_SRGB_BLOCK:
    return 4;
  }
}

// GetTLASBuildData @ 145b6b110

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkGeometryTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */

void __cdecl
GetTLASBuildData(VkDevice_T *param_1,uint param_2,ulong64 param_3,
                ERayTracingAccelerationStructureFlags param_4,
                EAccelerationStructureBuildMode param_5,FVkRtTLASBuildData *param_6)

{
  code *pcVar1;
  uint uVar2;
  ERayTracingAccelerationStructureFlags EVar3;
  bool bVar4;
  ERayTracingAccelerationStructureFlags EVar5;
  uint uVar6;
  uint local_res10 [2];
  
  (param_6->Geometry).geometry.triangles.vertexFormat = VK_FORMAT_UNDEFINED;
  (param_6->GeometryInfo).type = VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR;
  (param_6->Geometry).geometry.aabbs.stride = param_3;
  (param_6->GeometryInfo).mode = (uint)(param_5 != Build);
  (param_6->Geometry).geometryType = VK_GEOMETRY_TYPE_INSTANCES_KHR;
  uVar6 = (uint)((byte)param_4 & 1);
  (param_6->Geometry).geometry.triangles.sType =
       VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR;
  EVar5 = param_4 & ~AllowUpdate;
  if ((param_4 & AllowUpdate) == None) {
    EVar5 = param_4;
  }
  uVar2 = uVar6 | 2;
  if ((EVar5 >> 1 & 1) == 0) {
    uVar2 = uVar6;
  }
  EVar3 = EVar5 & ~AllowCompaction;
  if ((EVar5 >> 1 & 1) == 0) {
    EVar3 = EVar5;
  }
  uVar6 = uVar2 | 4;
  if ((EVar3 >> 2 & 1) == 0) {
    uVar6 = uVar2;
  }
  EVar5 = EVar3 & ~FastTrace;
  if ((EVar3 >> 2 & 1) == 0) {
    EVar5 = EVar3;
  }
  uVar2 = uVar6 | 8;
  if ((EVar5 >> 3 & 1) == 0) {
    uVar2 = uVar6;
  }
  EVar3 = EVar5 & ~FastBuild;
  if ((EVar5 >> 3 & 1) == 0) {
    EVar3 = EVar5;
  }
  uVar6 = uVar2 | 0x10;
  if ((EVar3 >> 4 & 1) == 0) {
    uVar6 = uVar2;
  }
  EVar5 = EVar3 & ~MinimizeMemory;
  if ((EVar3 >> 4 & 1) == 0) {
    EVar5 = EVar3;
  }
  local_res10[0] = param_2;
  if (EVar5 != None) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(Flags, Flags)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x9e,L"Some ERayTracingAccelerationStructureFlags entries were not handled")
    ;
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (param_6->GeometryInfo).geometryCount = 1;
  (param_6->GeometryInfo).flags = uVar6 | 0x800;
  (param_6->GeometryInfo).pGeometries = &param_6->Geometry;
  (*VulkanDynamicAPI::vkGetAccelerationStructureBuildSizesKHR)
            (param_1,VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR,&param_6->GeometryInfo,
             local_res10,&param_6->SizesInfo);
  return;
}

// GetVulkanGfxShaders @ 145b6b350

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl GetVulkanGfxShaders(FBoundShaderStateInput *param_1,FVulkanShader **param_2)

{
  FVulkanShader *pFVar1;
  
  *param_2 = (FVulkanShader *)0x0;
  param_2[1] = (FVulkanShader *)0x0;
  param_2[2] = (FVulkanShader *)0x0;
  param_2[3] = (FVulkanShader *)0x0;
  param_2[4] = (FVulkanShader *)0x0;
  pFVar1 = (FVulkanShader *)(param_1->VertexShaderRHI + 1);
  if (param_1->VertexShaderRHI == (FRHIVertexShader *)0x0) {
    pFVar1 = (FVulkanShader *)0x0;
  }
  *param_2 = pFVar1;
  if (param_1->PixelShaderRHI != (FRHIPixelShader *)0x0) {
    param_2[1] = (FVulkanShader *)(param_1->PixelShaderRHI + 1);
  }
  if (param_1->MeshShaderRHI != (FRHIMeshShader *)0x0) {
    param_2[3] = (FVulkanShader *)(param_1->MeshShaderRHI + 1);
  }
  if (param_1->AmplificationShaderRHI != (FRHIAmplificationShader *)0x0) {
    param_2[4] = (FVulkanShader *)(param_1->AmplificationShaderRHI + 1);
  }
  if (param_1->GeometryShaderRHI != (FRHIGeometryShader *)0x0) {
    param_2[2] = (FVulkanShader *)(param_1->GeometryShaderRHI + 1);
  }
  return;
}

// GetVulkanGfxShaders @ 145b6b3d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
GetVulkanGfxShaders(FVulkanDevice *param_1,FVulkanGraphicsPipelineState *param_2,
                   FVulkanShader **param_3)

{
  *param_3 = (FVulkanShader *)0x0;
  param_3[1] = (FVulkanShader *)0x0;
  param_3[2] = (FVulkanShader *)0x0;
  param_3[3] = (FVulkanShader *)0x0;
  param_3[4] = (FVulkanShader *)0x0;
  FVulkanShaderFactory::LookupGfxShaders(&param_1->ShaderFactory,param_2->ShaderKeys,param_3);
  return;
}

// GfxShaderHashesToString @ 145b6b4a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FString * __cdecl GfxShaderHashesToString(FString *__return_storage_ptr__,FVulkanShader **param_1)

{
  int iVar1;
  int iVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FString::FString(__return_storage_ptr__,"");
  iVar1 = 0;
  if (*param_1 != (FVulkanShader *)0x0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    BytesToHex((uchar *)&(*param_1)[-1].SpirvContainer.SpirvCode.ArrayNum,0x14,&local_38);
    FString::ConcatCF(&local_18,L"VS: ",&local_38);
    FString::ConcatFC(&local_28,&local_18,L"\n");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (param_1[1] != (FVulkanShader *)0x0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    BytesToHex((uchar *)&param_1[1][-1].SpirvContainer.SpirvCode.ArrayNum,0x14,&local_38);
    FString::ConcatCF(&local_18,L"PS: ",&local_38);
    FString::ConcatFC(&local_28,&local_18,L"\n");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (param_1[3] != (FVulkanShader *)0x0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    BytesToHex((uchar *)&param_1[3][-1].SpirvContainer.SpirvCode.ArrayNum,0x14,&local_38);
    FString::ConcatCF(&local_18,L"MS: ",&local_38);
    FString::ConcatFC(&local_28,&local_18,L"\n");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (param_1[4] != (FVulkanShader *)0x0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    BytesToHex((uchar *)&param_1[4][-1].SpirvContainer.SpirvCode.ArrayNum,0x14,&local_38);
    FString::ConcatCF(&local_18,L"AS: ",&local_38);
    FString::ConcatFC(&local_28,&local_18,L"\n");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (param_1[2] != (FVulkanShader *)0x0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    BytesToHex((uchar *)&param_1[2][-1].SpirvContainer.SpirvCode.ArrayNum,0x14,&local_38);
    FString::ConcatCF(&local_18,L"GS: ",&local_38);
    FString::ConcatFC(&local_28,&local_18,L"\n");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = iVar1;
    }
    FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// ManuallyWriteMarker @ 145b6e0d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __cdecl
ManuallyWriteMarker(VkCommandBuffer_T *param_1,VkBuffer_T *param_2,ulong64 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(longlong *)CVarVulkanDiagnosticBuffer._padding_ + 200))();
  uVar2 = 0x1000;
  if (1 < iVar1) {
    uVar2 = 1;
  }
  (*VulkanDynamicAPI::vkCmdPipelineBarrier)
            (param_1,0x2000,uVar2,0,0,(VkMemoryBarrier *)0x0,0,(VkBufferMemoryBarrier *)0x0,0,
             (VkImageMemoryBarrier *)0x0);
  (*VulkanDynamicAPI::vkCmdFillBuffer)(param_1,param_2,param_3,4,param_4);
  if (1 < iVar1) {
    (*VulkanDynamicAPI::vkCmdPipelineBarrier)
              (param_1,0x2000,uVar2,0,0,(VkMemoryBarrier *)0x0,0,(VkBufferMemoryBarrier *)0x0,0,
               (VkImageMemoryBarrier *)0x0);
  }
  return;
}

// RenderTargetLoadActionToVulkan @ 145b79240

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */

VkAttachmentLoadOp __cdecl RenderTargetLoadActionToVulkan(ERenderTargetLoadAction param_1)

{
  code *pcVar1;
  bool bVar2;
  VkAttachmentLoadOp VVar3;
  
  if (param_1 == ENoAction) {
    return VK_ATTACHMENT_LOAD_OP_DONT_CARE;
  }
  if (param_1 == ELoad) {
    return VK_ATTACHMENT_LOAD_OP_LOAD;
  }
  if (param_1 == EClear) {
    return VK_ATTACHMENT_LOAD_OP_CLEAR;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("OutLoadAction != VK_ATTACHMENT_LOAD_OP_MAX_ENUM",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                     ,0x169,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    VVar3 = (*pcVar1)();
    return VVar3;
  }
  return VK_ATTACHMENT_LOAD_OP_MAX_ENUM;
}

// SetGenericSystemParameters @ 145b7b270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
SetGenericSystemParameters
          (FVulkanRayTracingShaderTable *param_1,uint param_2,FRHIRayTracingPipelineState *param_3,
          uint param_4,uint param_5,FRHIUniformBuffer **param_6,uint param_7,void *param_8,
          uint param_9,EShaderFrequency param_10)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanRayTracingShader *pFVar4;
  ShaderData *pSVar5;
  undefined1 auStackY_138 [32];
  undefined4 uStack_fc;
  TArrayView<unsigned_char_const_,int> local_f8;
  FVulkanHitGroupSystemParameters local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar4 = FVulkanRayTracingPipelineState::GetVulkanShader
                     ((FVulkanRayTracingPipelineState *)param_3,param_10,param_4);
  local_e8.BindlessUniformBuffers[0x1e] = 0;
  local_e8.BindlessUniformBuffers[0x1f] = 0;
  local_e8.RootConstants.Config = 0;
  local_e8.RootConstants.IndexBufferOffsetInBytes = 0;
  local_e8.RootConstants._8_8_ = (ulonglong)param_9 << 0x20;
  local_e8.BindlessHitGroupSystemIndexBuffer = 0;
  local_e8.BindlessHitGroupSystemVertexBuffer = 0;
  local_e8.BindlessUniformBuffers[0] = 0;
  local_e8.BindlessUniformBuffers[1] = 0;
  local_e8.BindlessUniformBuffers[2] = 0;
  local_e8.BindlessUniformBuffers[3] = 0;
  local_e8.BindlessUniformBuffers[4] = 0;
  local_e8.BindlessUniformBuffers[5] = 0;
  local_e8.BindlessUniformBuffers[6] = 0;
  local_e8.BindlessUniformBuffers[7] = 0;
  local_e8.BindlessUniformBuffers[8] = 0;
  local_e8.BindlessUniformBuffers[9] = 0;
  local_e8.BindlessUniformBuffers[10] = 0;
  local_e8.BindlessUniformBuffers[0xb] = 0;
  local_e8.BindlessUniformBuffers[0xc] = 0;
  local_e8.BindlessUniformBuffers[0xd] = 0;
  local_e8.BindlessUniformBuffers[0xe] = 0;
  local_e8.BindlessUniformBuffers[0xf] = 0;
  local_e8.BindlessUniformBuffers[0x10] = 0;
  local_e8.BindlessUniformBuffers[0x11] = 0;
  local_e8.BindlessUniformBuffers[0x12] = 0;
  local_e8.BindlessUniformBuffers[0x13] = 0;
  local_e8.BindlessUniformBuffers[0x14] = 0;
  local_e8.BindlessUniformBuffers[0x15] = 0;
  local_e8.BindlessUniformBuffers[0x16] = 0;
  local_e8.BindlessUniformBuffers[0x17] = 0;
  local_e8.BindlessUniformBuffers[0x18] = 0;
  local_e8.BindlessUniformBuffers[0x19] = 0;
  local_e8.BindlessUniformBuffers[0x1a] = 0;
  local_e8.BindlessUniformBuffers[0x1b] = 0;
  local_e8.BindlessUniformBuffers[0x1c] = 0;
  local_e8.BindlessUniformBuffers[0x1d] = 0;
  SetSystemParametersUB(&local_e8,param_1,param_5,param_6,pFVar4);
  FVulkanRayTracingShaderTable::SetLocalShaderParameters(param_1,param_10,param_2,0,&local_e8,0x98);
  if ((param_8 != (void *)0x0) && (param_7 != 0)) {
    FVulkanRayTracingShaderTable::SetLocalShaderParameters
              (param_1,param_10,param_2,0x98,param_8,param_7);
  }
  pSVar5 = FVulkanRayTracingPipelineState::GetShaderData
                     ((FVulkanRayTracingPipelineState *)param_3,param_10);
  local_f8.DataPtr = (uchar *)(pSVar5->ShaderHandles).AllocatorInstance.Data;
  iVar1 = (pSVar5->ShaderHandles).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_f8._12_4_ = uStack_fc;
  local_f8.ArrayNum = iVar1;
  FVulkanRayTracingShaderTable::SetSlot(param_1,param_10,param_2,param_4,&local_f8);
  return;
}

// SetRayGenResources @ 145b7bd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __cdecl
SetRayGenResources(FVulkanDevice *param_1,FVulkanCommandListContext *param_2,
                  FRayTracingShaderBindings *param_3,FVulkanRayTracingShaderTable *param_4)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  FVulkanUniformBuffer *pFVar5;
  bool bVar6;
  ulong64 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  FRHIUniformBuffer **ppFVar13;
  longlong lVar14;
  undefined1 auStackY_108 [32];
  FVulkanUniformBuffer *local_d8;
  TArray<FVulkanUniformBuffer_const_*,TSizedDefaultAllocator<32>_> local_d0;
  FVulkanDevice *local_c0;
  FVulkanUniformBuffer *local_b8 [2];
  TStaticArray<TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_>,6,4294967295> local_a8
  ;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  lVar14 = 0x10;
  local_c0 = param_1;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x10,&local_d0.AllocatorInstance,0,&local_d0.ArrayMax);
  ppFVar13 = param_3->UniformBuffers;
  local_a8.Elements[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[0].ArrayNum = 0;
  local_a8.Elements[0].ArrayMax = 0;
  local_a8.Elements[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[1].ArrayNum = 0;
  local_a8.Elements[1].ArrayMax = 0;
  local_a8.Elements[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[2].ArrayNum = 0;
  local_a8.Elements[2].ArrayMax = 0;
  local_a8.Elements[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[3].ArrayNum = 0;
  local_a8.Elements[3].ArrayMax = 0;
  local_a8.Elements[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[4].ArrayNum = 0;
  local_a8.Elements[4].ArrayMax = 0;
  local_a8.Elements[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Elements[5].ArrayNum = 0;
  local_a8.Elements[5].ArrayMax = 0;
  uVar9 = 0;
  do {
    local_d8 = (FVulkanUniformBuffer *)*ppFVar13;
    if (local_d8 == (FVulkanUniformBuffer *)0x0) {
      uVar11 = (ulonglong)((int)uVar9 + 1);
    }
    else {
      uVar11 = uVar9;
      if ((int)uVar9 != 0) {
        if (2 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        do {
          if (local_a8.Elements[0].ArrayNum == local_a8.Elements[0].ArrayMax) {
            local_a8.Elements[0].ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,(ForAnyElementType *)&local_a8,&local_a8.Elements[0].ArrayMax);
          }
          iVar3 = local_a8.Elements[0].ArrayNum + 1;
          lVar8 = (longlong)local_a8.Elements[0].ArrayNum;
          *(undefined8 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28) = 0;
          *(undefined8 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28 + 8) = 0;
          *(undefined8 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28 + 0x10) = 0;
          *(undefined8 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28 + 0x10 + 8) = 0
          ;
          *(undefined8 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28 + 0x20) = 0;
          *(undefined4 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28) = 0x3b9f9c63;
          uVar9 = uVar9 - 1;
          uVar11 = 0;
          local_a8.Elements[0].ArrayNum = iVar3;
        } while (uVar9 != 0);
      }
      if (local_a8.Elements[0].ArrayNum == local_a8.Elements[0].ArrayMax) {
        local_a8.Elements[0].ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,(ForAnyElementType *)&local_a8,&local_a8.Elements[0].ArrayMax);
      }
      lVar8 = (longlong)local_a8.Elements[0].ArrayNum;
      *(undefined8 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28) = 0;
      *(undefined8 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28 + 8) = 0;
      pFVar10 = local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28;
      *(undefined8 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28 + 0x10) = 0;
      *(undefined8 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28 + 0x10 + 8) = 0;
      *(undefined8 *)(local_a8.Elements[0].AllocatorInstance.Data + lVar8 * 0x28 + 0x20) = 0;
      *(undefined4 *)pFVar10 = 0x3b9f9c63;
      local_a8.Elements[0].ArrayNum = local_a8.Elements[0].ArrayNum + 1;
      uVar7 = FVulkanUniformBuffer::GetDeviceAddress(local_d8);
      pFVar5 = local_d8;
      *(ulong64 *)(pFVar10 + 0x10) = uVar7;
      if ((*(uint *)&local_d8->_padding_ !=
           ((TRefCountPtr<FRHIUniformBufferLayout_const_> *)&local_d8->_padding_)->Reference->
           ConstantBufferSize) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("LayoutConstantBufferSize == Layout->ConstantBufferSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x4de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(ulonglong *)(pFVar10 + 0x18) = (ulonglong)*(uint *)&pFVar5->_padding_;
      TArray<FVulkanUniformBuffer_const_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FVulkanUniformBuffer_const_*_const_&>(&local_d0,&local_d8);
    }
    ppFVar13 = ppFVar13 + 1;
    lVar14 = lVar14 + -1;
    uVar9 = uVar11;
    if (lVar14 == 0) {
      FVulkanBindlessDescriptorManager::RegisterUniformBuffers
                (local_c0->BindlessDescriptorManager,param_2,VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR,
                 &local_a8);
      puVar12 = local_48;
      lVar14 = 6;
      do {
        puVar1 = puVar12 + -2;
        puVar12 = puVar12 + -2;
        lVar14 = lVar14 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar14 != 0);
      FVulkanCommandListContext::ApplyShaderBindingLayout(param_2,0x100);
      iVar3 = (param_4->ReferencedUniformBuffers).ArrayNum;
      pFVar10 = (param_4->ReferencedUniformBuffers).AllocatorInstance.Data;
      if ((iVar3 < 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = pFVar10 + (longlong)iVar3 * 8;
      for (; pFVar10 != pFVar2; pFVar10 = pFVar10 + 8) {
        local_b8[0] = *(FVulkanUniformBuffer **)pFVar10;
        TArray<FVulkanUniformBuffer_const_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FVulkanUniformBuffer_const_*_const_&>(&local_d0,local_b8);
      }
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      return;
    }
  } while( true );
}

// SetRayTracingHitGroup @ 145b7bfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
SetRayTracingHitGroup
          (FVulkanRayTracingShaderTable *param_1,uint param_2,
          FVulkanRayTracingPipelineState *param_3,uint param_4,FVulkanRayTracingGeometry *param_5,
          uint param_6,uint param_7,FRHIUniformBuffer **param_8,uint param_9,void *param_10,
          uint param_11,uint param_12)

{
  ERayTracingShaderBindingMode EVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ushort uVar5;
  longlong lVar6;
  bool bVar7;
  FVulkanRayTracingShader *pFVar8;
  ShaderData *pSVar9;
  TArrayView<unsigned_char_const_,int> *pTVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStackY_1a8 [32];
  undefined8 local_150;
  undefined8 uStack_148;
  FString local_128;
  TArrayView<unsigned_char_const_,int> local_118;
  TArrayView<unsigned_char_const_,int> local_108;
  FVulkanHitGroupSystemParameters local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uStack_148 = 0;
  lVar15 = (longlong)(int)param_6;
  uVar14 = 0;
  if ((param_5 != (FVulkanRayTracingGeometry *)0x0) && ((uint)param_5->_padding_ <= param_6)) {
    if (((param_5->DebugName).Name == (FName)0x0) && ((param_5->DebugName).Number == 0)) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("GeometrySegmentIndex < NumGeometrySegments",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x81f,
                         L"Segment %d is out of range for ray tracing geometry \'%s\' that contains %d segments"
                        );
    }
    else {
      FDebugName::ToString(&param_5->DebugName,&local_128);
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("GeometrySegmentIndex < NumGeometrySegments",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x81f,
                         L"Segment %d is out of range for ray tracing geometry \'%s\' that contains %d segments"
                        );
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    if (bVar7 != false) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar1 = param_1->ShaderBindingMode;
  if ((param_1->HitGroupIndexingMode == Allow) && (param_5 != (FVulkanRayTracingGeometry *)0x0)) {
    if ((EVar1 & RTPSO) != Disabled) {
      pFVar8 = FVulkanRayTracingPipelineState::GetVulkanShader(param_3,SF_RayHitGroup,param_4);
      uVar11 = uVar14;
      if ((int)param_6 < (param_5->HitGroupSystemParameters).ArrayNum) {
        uVar11 = ~param_6 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_5->HitGroupSystemParameters).AllocatorInstance.Data;
      lVar12 = lVar15 * 0x98;
      local_f8.RootConstants._0_8_ = *(undefined8 *)(pFVar2 + lVar12);
      local_f8._16_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x10);
      local_f8.BindlessUniformBuffers._0_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x10 + 8);
      local_f8.BindlessUniformBuffers._8_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x20);
      local_f8.BindlessUniformBuffers._16_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x20 + 8);
      local_f8.BindlessUniformBuffers._24_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x30);
      local_f8.BindlessUniformBuffers._32_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x30 + 8);
      local_f8.BindlessUniformBuffers._40_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x40);
      local_f8.BindlessUniformBuffers._48_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x40 + 8);
      local_f8.BindlessUniformBuffers._56_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x50);
      local_f8.BindlessUniformBuffers._64_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x50 + 8);
      local_f8.BindlessUniformBuffers._72_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x60);
      local_f8.BindlessUniformBuffers._80_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x60 + 8);
      local_f8.BindlessUniformBuffers._88_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x70);
      local_f8.BindlessUniformBuffers._96_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x70 + 8);
      local_f8.BindlessUniformBuffers._104_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x80);
      local_f8.BindlessUniformBuffers._112_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x80 + 8);
      local_f8.BindlessUniformBuffers._120_8_ = *(undefined8 *)(pFVar2 + lVar12 + 0x90);
      local_f8.RootConstants.FirstPrimitive = (uint)*(undefined8 *)(pFVar2 + lVar12 + 8);
      local_f8.RootConstants.UserData = param_11;
      SetSystemParametersUB(&local_f8,param_1,param_7,param_8,pFVar8);
      FVulkanRayTracingShaderTable::SetLocalShaderParameters
                (param_1,SF_RayHitGroup,param_2,0,&local_f8,0x98);
      if ((param_10 != (void *)0x0) && (param_9 != 0)) {
        FVulkanRayTracingShaderTable::SetLocalShaderParameters
                  (param_1,SF_RayHitGroup,param_2,0x98,param_10,param_9);
      }
    }
    if (((EVar1 & Inline) != Disabled) && (uVar11 = (uint)param_1->_padding_, param_2 % uVar11 == 0)
       ) {
      lVar12 = param_5->_padding_;
      lVar6 = param_5->_padding_;
      if (lVar12 != 0) {
        uVar14 = *(uint *)(lVar12 + 0xdc);
        uStack_148 = *(undefined8 *)(lVar12 + 0x130);
      }
      uVar13 = 0;
      if ((int)param_6 < (int)param_5->_padding_) {
        uVar13 = ~param_6 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar12 = *(longlong *)(param_5->_padding_ + lVar15 * 0x28);
      lVar15 = param_5->_padding_ + lVar15 * 0x28;
      if ((lVar12 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("VertexBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                             ,0x26d,
                             L"All ray tracing geometry segments must have a valid vertex buffer"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar5 = CONCAT11(*(undefined1 *)(lVar15 + 0x10),(char)uVar14);
      local_150 = (ulonglong)uVar5;
      if (uVar14 == 0) {
        uStack_148 = 0;
      }
      else {
        local_150 = CONCAT44(uVar14 * *(int *)(lVar15 + 0x18) * 3 + (int)lVar6,(uint)uVar5);
      }
      uVar14 = *(uint *)(lVar15 + 0xc);
      lVar15 = *(longlong *)(lVar12 + 0x130);
      uVar13 = (param_2 / uVar11) * 0x18;
      uVar11 = 0;
      if ((int)uVar13 < (param_1->InlineGeometryParameterData).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->InlineGeometryParameterData).AllocatorInstance.Data;
      pFVar2 = pFVar3 + (int)uVar13;
      *(ulonglong *)pFVar2 = local_150;
      *(undefined8 *)(pFVar2 + 8) = uStack_148;
      *(ulonglong *)(pFVar3 + (longlong)(int)uVar13 + 0x10) = (ulonglong)uVar14 + lVar15;
    }
  }
  if ((EVar1 & RTPSO) != Disabled) {
    pSVar9 = FVulkanRayTracingPipelineState::GetShaderData(param_3,SF_RayHitGroup);
    pTVar10 = TArrayView<unsigned_char_const_,int>::
              TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                        (&local_108,&pSVar9->ShaderHandles);
    local_118.DataPtr = pTVar10->DataPtr;
    local_118.ArrayNum = pTVar10->ArrayNum;
    local_118._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
    FVulkanRayTracingShaderTable::SetSlot(param_1,SF_RayHitGroup,param_2,param_4,&local_118);
  }
  return;
}

// SetSystemParametersUB @ 145b7ca50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
SetSystemParametersUB
          (FVulkanHitGroupSystemParameters *param_1,FVulkanRayTracingShaderTable *param_2,
          uint param_3,FRHIUniformBuffer **param_4,FVulkanRayTracingShader *param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVulkanUniformBuffer *this;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  TRefCountPtr<FRHIUniformBuffer> local_38 [2];
  
  if (((int)param_3 < (int)param_5->_padding_) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InShader->GetCodeHeader().UniformBufferInfos.Num() <= (int32)InNumUniformBuffers"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x7f7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = (int)param_5->_padding_;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      this = *(FVulkanUniformBuffer **)(lVar7 + (longlong)param_4);
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
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
      puVar6 = (uint *)(param_5->_padding_ + lVar7);
      if (((this == (FVulkanUniformBuffer *)0x0) &&
          (this = GetDummyUB(param_2->Device,*puVar6), this == (FVulkanUniformBuffer *)0x0)) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("UniformBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                             ,0x804,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*puVar6 != 0) && (*puVar6 != *(uint *)(this->_padding_ + 0x88))) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(UniformBufferInfo.LayoutHash == 0) || (UniformBufferInfo.LayoutHash == UniformBuffer->GetLayout().GetHash())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                             ,0x805,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVulkanUniformBuffer::GetBindlessHandle(this);
      if ((((uint)param_5 == 0xffffffff) || (param_5._4_1_ == '\t')) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("BindlessHandle.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                             ,0x808,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((0x1f < *(byte *)((longlong)puVar6 + 5)) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("UniformBufferInfo.BindlessCBIndex < (sizeof(UEArrayCountHelper(OutSystemParameters.BindlessUniformBuffers)) - 1)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                             ,0x809,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      param_1->BindlessUniformBuffers[*(byte *)((longlong)puVar6 + 5)] = (uint)param_5;
      local_38[0].Reference = (FRHIUniformBuffer *)this;
      if (this != (FVulkanUniformBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this);
      }
      TArray<TRefCountPtr<FRHIUniformBuffer>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TRefCountPtr<FRHIUniformBuffer>_>(&param_2->ReferencedUniformBuffers,local_38);
      if ((FVulkanUniformBuffer *)local_38[0].Reference != (FVulkanUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_38[0].Reference);
      }
      iVar4 = (int)param_5->_padding_;
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar5 < iVar4);
  }
  return;
}

// UEFrequencyToVKStageBit @ 145b802a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */

VkShaderStageFlagBits __cdecl UEFrequencyToVKStageBit(EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  VkShaderStageFlagBits VVar3;
  
  switch(param_1) {
  case SF_Vertex:
    return VK_SHADER_STAGE_VERTEX_BIT;
  case SF_Mesh:
    return VK_SHADER_STAGE_MESH_BIT_EXT;
  case SF_Amplification:
    return VK_SHADER_STAGE_TASK_BIT_EXT;
  case SF_Pixel:
    return VK_SHADER_STAGE_FRAGMENT_BIT;
  case SF_Geometry:
    return VK_SHADER_STAGE_GEOMETRY_BIT;
  case SF_Compute:
    return VK_SHADER_STAGE_COMPUTE_BIT;
  case SF_NumStandardFrequencies:
    return VK_SHADER_STAGE_RAYGEN_BIT_KHR;
  case SF_RayMiss:
    return VK_SHADER_STAGE_MISS_BIT_KHR;
  case SF_RayHitGroup:
    return VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR;
  case SF_RayCallable:
    return VK_SHADER_STAGE_CALLABLE_BIT_KHR;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                     ,0x45,L"Undefined shader stage %d");
  if (!bVar2) {
    return VK_SHADER_STAGE_ALL;
  }
  pcVar1 = (code *)swi(3);
  VVar3 = (*pcVar1)();
  return VVar3;
}

// string_VkDescriptorType @ 145b84d10

/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

char * __cdecl string_VkDescriptorType(VkDescriptorType param_1)

{
  char *pcVar1;
  
  if ((int)param_1 < 0x3b9ce511) {
    if (param_1 != VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK) {
      switch(param_1) {
      case VK_DESCRIPTOR_TYPE_SAMPLER:
        return "VK_DESCRIPTOR_TYPE_SAMPLER";
      case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        return "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER";
      case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        return "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE";
      case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        return "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE";
      case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        return "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER";
      case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        return "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER";
      case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        return "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER";
      case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        return "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER";
      case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        return "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC";
      case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        return "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC";
      case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        return "VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT";
      default:
        return "Unhandled VkDescriptorType";
      }
    }
    return "VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK";
  }
  if (0x3ba180c0 < (int)param_1) {
    if (param_1 == VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM) {
      return "VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM";
    }
    if (param_1 == VK_DESCRIPTOR_TYPE_TENSOR_ARM) {
      return "VK_DESCRIPTOR_TYPE_TENSOR_ARM";
    }
    pcVar1 = "VK_DESCRIPTOR_TYPE_PARTITIONED_ACCELERATION_STRUCTURE_NV";
    if (param_1 != VK_DESCRIPTOR_TYPE_PARTITIONED_ACCELERATION_STRUCTURE_NV) {
      pcVar1 = "Unhandled VkDescriptorType";
    }
    return pcVar1;
  }
  if (param_1 == VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM) {
    return "VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM";
  }
  if (param_1 == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR) {
    return "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR";
  }
  if (param_1 == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV) {
    return "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV";
  }
  pcVar1 = "Unhandled VkDescriptorType";
  if (param_1 == VK_DESCRIPTOR_TYPE_MUTABLE_EXT) {
    pcVar1 = "VK_DESCRIPTOR_TYPE_MUTABLE_EXT";
  }
  return pcVar1;
}

// string_VkImageLayout @ 145b84e60

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

char * __cdecl string_VkImageLayout(VkImageLayout param_1)

{
  char *pcVar1;
  
  if ((int)param_1 < 0x3b9acdeb) {
    if (param_1 == VK_IMAGE_LAYOUT_PRESENT_SRC_KHR) {
      return "VK_IMAGE_LAYOUT_PRESENT_SRC_KHR";
    }
    switch(param_1) {
    case VK_IMAGE_LAYOUT_UNDEFINED:
      return "VK_IMAGE_LAYOUT_UNDEFINED";
    case VK_IMAGE_LAYOUT_GENERAL:
      return "VK_IMAGE_LAYOUT_GENERAL";
    case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
      return "VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL";
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
      return "VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL";
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
      return "VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL";
    case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
      return "VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL";
    case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
      return "VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL";
    case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
      return "VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL";
    case VK_IMAGE_LAYOUT_PREINITIALIZED:
      return "VK_IMAGE_LAYOUT_PREINITIALIZED";
    }
  }
  else if ((int)param_1 < 0x3b9e776b) {
    if (param_1 == VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL) {
      return "VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL";
    }
    if ((int)param_1 < 0x3b9c930a) {
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL) {
        return "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL";
      }
      if (param_1 == VK_IMAGE_LAYOUT_VIDEO_DECODE_DST_KHR) {
        return "VK_IMAGE_LAYOUT_VIDEO_DECODE_DST_KHR";
      }
      if (param_1 == VK_IMAGE_LAYOUT_VIDEO_DECODE_SRC_KHR) {
        return "VK_IMAGE_LAYOUT_VIDEO_DECODE_SRC_KHR";
      }
      if (param_1 == VK_IMAGE_LAYOUT_VIDEO_DECODE_DPB_KHR) {
        return "VK_IMAGE_LAYOUT_VIDEO_DECODE_DPB_KHR";
      }
      if (param_1 == VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR) {
        return "VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR";
      }
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL) {
        return "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL";
      }
    }
    else {
      if (param_1 == VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR) {
        return "VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR";
      }
      if (param_1 == VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT) {
        return "VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT";
      }
      if (param_1 == VK_IMAGE_LAYOUT_RENDERING_LOCAL_READ) {
        return "VK_IMAGE_LAYOUT_RENDERING_LOCAL_READ";
      }
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL) {
        return "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL";
      }
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL) {
        return "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL";
      }
    }
  }
  else {
    if (0x3b9f9491 < (int)param_1) {
      if (param_1 == VK_IMAGE_LAYOUT_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT) {
        return "VK_IMAGE_LAYOUT_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT";
      }
      if (param_1 == VK_IMAGE_LAYOUT_TENSOR_ALIASING_ARM) {
        return "VK_IMAGE_LAYOUT_TENSOR_ALIASING_ARM";
      }
      if (param_1 == VK_IMAGE_LAYOUT_VIDEO_ENCODE_QUANTIZATION_MAP_KHR) {
        return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_QUANTIZATION_MAP_KHR";
      }
      pcVar1 = "VK_IMAGE_LAYOUT_ZERO_INITIALIZED_EXT";
      if (param_1 != VK_IMAGE_LAYOUT_ZERO_INITIALIZED_EXT) {
        pcVar1 = "Unhandled VkImageLayout";
      }
      return pcVar1;
    }
    if (param_1 == VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL) {
      return "VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL";
    }
    if (param_1 == VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL) {
      return "VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL";
    }
    if (param_1 == VK_IMAGE_LAYOUT_VIDEO_ENCODE_DST_KHR) {
      return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_DST_KHR";
    }
    if (param_1 == VK_IMAGE_LAYOUT_VIDEO_ENCODE_SRC_KHR) {
      return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_SRC_KHR";
    }
    if (param_1 == VK_IMAGE_LAYOUT_VIDEO_ENCODE_DPB_KHR) {
      return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_DPB_KHR";
    }
    if (param_1 == VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) {
      return "VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL";
    }
  }
  return "Unhandled VkImageLayout";
}

// `dynamic_atexit_destructor_for_'CVarDSetCacheMaxPoolLookups'' @ 1503c9d90

void __cdecl _dynamic_atexit_destructor_for__CVarDSetCacheMaxPoolLookups__(void)

{
  CVarDSetCacheMaxPoolLookups._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDSetCacheMaxPoolLookups);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDSetCacheTargetSetsPerPool'' @ 1503c9db0

void __cdecl _dynamic_atexit_destructor_for__CVarDSetCacheTargetSetsPerPool__(void)

{
  CVarDSetCacheTargetSetsPerPool._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDSetCacheTargetSetsPerPool);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableLRU'' @ 1503c9dd0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableLRU__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableLRU);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGVulkanFlushOnMapStaging'' @ 1503c9df0

void __cdecl _dynamic_atexit_destructor_for__CVarGVulkanFlushOnMapStaging__(void)

{
  CVarGVulkanFlushOnMapStaging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGVulkanFlushOnMapStaging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLRUMaxPipelineSize'' @ 1503c9e10

void __cdecl _dynamic_atexit_destructor_for__CVarLRUMaxPipelineSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLRUMaxPipelineSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLRUPipelineCapacity'' @ 1503c9e30

void __cdecl _dynamic_atexit_destructor_for__CVarLRUPipelineCapacity__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLRUPipelineCapacity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPipelineDebugForceEvictImmediately'' @ 1503c9e50

void __cdecl _dynamic_atexit_destructor_for__CVarPipelineDebugForceEvictImmediately__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPipelineDebugForceEvictImmediately);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPipelineLRUCacheEvictBinary'' @ 1503c9e70

void __cdecl _dynamic_atexit_destructor_for__CVarPipelineLRUCacheEvictBinary__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPipelineLRUCacheEvictBinary);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPipelineLRUCacheEvictBinaryPreloadScreen'' @ 1503c9e90

void __cdecl _dynamic_atexit_destructor_for__CVarPipelineLRUCacheEvictBinaryPreloadScreen__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPipelineLRUCacheEvictBinaryPreloadScreen);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQueryPoolDeletionDelay'' @ 1503c9eb0

void __cdecl _dynamic_atexit_destructor_for__CVarQueryPoolDeletionDelay__(void)

{
  CVarQueryPoolDeletionDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarQueryPoolDeletionDelay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTimestampQueryStage'' @ 1503c9ed0

void __cdecl _dynamic_atexit_destructor_for__CVarTimestampQueryStage__(void)

{
  CVarTimestampQueryStage._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTimestampQueryStage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTimingQueryPoolSize'' @ 1503c9ef0

void __cdecl _dynamic_atexit_destructor_for__CVarTimingQueryPoolSize__(void)

{
  CVarTimingQueryPoolSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTimingQueryPoolSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanDebugBarrier'' @ 1503c9f10

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanDebugBarrier__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanDebugBarrier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanDiagnosticBuffer'' @ 1503c9f30

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanDiagnosticBuffer__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanDiagnosticBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanExtendedLifetimeFrames'' @ 1503c9f50

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanExtendedLifetimeFrames__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanExtendedLifetimeFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanIgnoreCPUReads'' @ 1503c9f70

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanIgnoreCPUReads__(void)

{
  CVarVulkanIgnoreCPUReads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanIgnoreCPUReads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanRayTracingAllowCompaction'' @ 1503c9f90

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanRayTracingAllowCompaction__(void)

{
  CVarVulkanRayTracingAllowCompaction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanRayTracingAllowCompaction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanRayTracingCompactionMinPrimitiveCount'' @ 1503c9fb0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanRayTracingCompactionMinPrimitiveCount__(void)

{
  CVarVulkanRayTracingCompactionMinPrimitiveCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanRayTracingCompactionMinPrimitiveCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanRayTracingMaxBatchedCompaction'' @ 1503c9fd0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanRayTracingMaxBatchedCompaction__(void)

{
  CVarVulkanRayTracingMaxBatchedCompaction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanRayTracingMaxBatchedCompaction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanSubmissionAllowTimelineSemaphores'' @ 1503c9ff0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanSubmissionAllowTimelineSemaphores__(void)

{
  CVarVulkanSubmissionAllowTimelineSemaphores._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanSubmissionAllowTimelineSemaphores);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanWaitForIdleOnSubmit'' @ 1503ca010

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanWaitForIdleOnSubmit__(void)

{
  CVarVulkanWaitForIdleOnSubmit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanWaitForIdleOnSubmit);
  return;
}

// `dynamic_atexit_destructor_for_'CreateGraphicsPSOMutex'' @ 1503ca030

void __cdecl _dynamic_atexit_destructor_for__CreateGraphicsPSOMutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ca037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&CreateGraphicsPSOMutex);
  return;
}

// `dynamic_atexit_destructor_for_'DummyUBLock'' @ 1503ca050

void __cdecl _dynamic_atexit_destructor_for__DummyUBLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DummyUBLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001503ca070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DummyUBLock);
    return;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
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

// `dynamic_atexit_destructor_for_'DummyUBs'' @ 1503ca0b0

void __cdecl _dynamic_atexit_destructor_for__DummyUBs__(void)

{
  DummyUBs._72_4_ = 0;
  if (DummyUBs._64_8_ != 0) {
    FMemory::Free((void *)DummyUBs._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&DummyUBs);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyAlloc'' @ 1503ca0f0

void __cdecl
`FVulkanRayTracingShaderTable::GetAlloc'::__l2::_dynamic_atexit_destructor_for__EmptyAlloc__(void)

{
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&EmptyAlloc.LocalAllocation);
  if (EmptyAlloc.HostBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyAlloc.HostBuffer.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyShaderData'' @ 1503ca120

void __cdecl
`FVulkanRayTracingPipelineState::GetShaderData'::__l2::
_dynamic_atexit_destructor_for__EmptyShaderData__(void)

{
  if (EmptyShaderData.ShaderHandles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyShaderData.ShaderHandles.AllocatorInstance.Data);
  }
  DestructItems<TRefCountPtr<FVulkanRayTracingShader>,int>
            ((TRefCountPtr<FVulkanRayTracingShader> *)EmptyShaderData.Shaders.AllocatorInstance.Data
             ,EmptyShaderData.Shaders.ArrayNum);
  if (EmptyShaderData.Shaders.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyShaderData.Shaders.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FragmentCombinerOpMap'' @ 1503ca170

void __cdecl _dynamic_atexit_destructor_for__FragmentCombinerOpMap__(void)

{
  FragmentCombinerOpMap._72_4_ = 0;
  if (FragmentCombinerOpMap._64_8_ != 0) {
    FMemory::Free((void *)FragmentCombinerOpMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_char,enum_VkFragmentShadingRateCombinerOpKHR>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FragmentCombinerOpMap);
  return;
}

// `dynamic_atexit_destructor_for_'GAlwaysWriteDS'' @ 1503ca1b0

void __cdecl _dynamic_atexit_destructor_for__GAlwaysWriteDS__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GAlwaysWriteDS);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarVulkanRayTracingMaxShaderGroupStride'' @ 1503ca1d0

void __cdecl _dynamic_atexit_destructor_for__GCVarVulkanRayTracingMaxShaderGroupStride__(void)

{
  GCVarVulkanRayTracingMaxShaderGroupStride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GCVarVulkanRayTracingMaxShaderGroupStride);
  return;
}

// `dynamic_atexit_destructor_for_'GEnablePipelineCacheCompressionCvar'' @ 1503ca1f0

void __cdecl _dynamic_atexit_destructor_for__GEnablePipelineCacheCompressionCvar__(void)

{
  GEnablePipelineCacheCompressionCvar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GEnablePipelineCacheCompressionCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GEnablePipelineCacheLoadCvar'' @ 1503ca210

void __cdecl _dynamic_atexit_destructor_for__GEnablePipelineCacheLoadCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GEnablePipelineCacheLoadCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GPendingLockedStagingBuffers'' @ 1503ca230

void __cdecl _dynamic_atexit_destructor_for__GPendingLockedStagingBuffers__(void)

{
  GPendingLockedStagingBuffers._72_4_ = 0;
  if (GPendingLockedStagingBuffers._64_8_ != 0) {
    FMemory::Free((void *)GPendingLockedStagingBuffers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanTexture_*,VulkanRHI::FStagingBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVulkanTexture_*,VulkanRHI::FStagingBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVulkanTexture_*,VulkanRHI::FStagingBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPendingLockedStagingBuffers);
  return;
}

// `dynamic_atexit_destructor_for_'GPipelineCacheFromShaderPipelineCacheCvar'' @ 1503ca270

void __cdecl _dynamic_atexit_destructor_for__GPipelineCacheFromShaderPipelineCacheCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GPipelineCacheFromShaderPipelineCacheCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GStagingMapLock'' @ 1503ca290

void __cdecl _dynamic_atexit_destructor_for__GStagingMapLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503ca297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GStagingMapLock);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanGraphicPipelineLibraryLinkingModeCvar'' @ 1503ca2b0

void __cdecl _dynamic_atexit_destructor_for__GVulkanGraphicPipelineLibraryLinkingModeCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GVulkanGraphicPipelineLibraryLinkingModeCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanPSOForceSingleThreadedCVar'' @ 1503ca2d0

void __cdecl _dynamic_atexit_destructor_for__GVulkanPSOForceSingleThreadedCVar__(void)

{
  GVulkanPSOForceSingleThreadedCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVulkanPSOForceSingleThreadedCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanPSOLRUEvictAfterUnusedFramesCVar'' @ 1503ca2f0

void __cdecl _dynamic_atexit_destructor_for__GVulkanPSOLRUEvictAfterUnusedFramesCVar__(void)

{
  GVulkanPSOLRUEvictAfterUnusedFramesCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GVulkanPSOLRUEvictAfterUnusedFramesCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanReleaseShaderModuleWhenEvictingPSOCVar'' @ 1503ca310

void __cdecl _dynamic_atexit_destructor_for__GVulkanReleaseShaderModuleWhenEvictingPSOCVar__(void)

{
  GVulkanReleaseShaderModuleWhenEvictingPSOCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GVulkanReleaseShaderModuleWhenEvictingPSOCVar);
  return;
}

