// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 286

// ExternalExtensions'' @ 14104ff40

void __cdecl `dynamic_initializer_for_'FVulkanDeviceExtension::ExternalExtensions__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVulkanDeviceExtension::ExternalExtensions__);
  return;
}

// ExternalExtensions'' @ 14104ff60

void __cdecl `dynamic_initializer_for_'FVulkanInstanceExtension::ExternalExtensions__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVulkanInstanceExtension::ExternalExtensions__);
  return;
}

// ExternalLayers'' @ 14104ff80

void __cdecl `dynamic_initializer_for_'FVulkanDeviceSetupHelper::ExternalLayers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVulkanDeviceSetupHelper::ExternalLayers__);
  return;
}

// ExternalLayers'' @ 14104ffa0

void __cdecl `dynamic_initializer_for_'FVulkanIntanceSetupHelper::ExternalLayers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVulkanIntanceSetupHelper::ExternalLayers__);
  return;
}

// HMDVulkanExtensions'' @ 14104ffc0

void __cdecl `dynamic_initializer_for_'FVulkanDynamicRHI::HMDVulkanExtensions__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVulkanDynamicRHI::HMDVulkanExtensions__);
  return;
}

// `dynamic_initializer_for_'CVarDelayAcquireBackBuffer'' @ 14104ffe0

void __cdecl _dynamic_initializer_for__CVarDelayAcquireBackBuffer__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDelayAcquireBackBuffer,L"r.Vulkan.DelayAcquireBackBuffer",local_res8,
             L"Whether to delay acquiring the back buffer \n 0: acquire next image on frame start \n 1: acquire next image just before presenting, rendering is done to intermediate image which is then copied to a real backbuffer (default) \n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDelayAcquireBackBuffer__);
  return;
}

// `dynamic_initializer_for_'CVarForceCoherentOperations'' @ 141050030

void __cdecl _dynamic_initializer_for__CVarForceCoherentOperations__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceCoherentOperations,L"r.Vulkan.ForceCoherentOperations",&GForceCoherent,
             L"1 forces memory invalidation and flushing of coherent memory\n",4);
  atexit(_dynamic_atexit_destructor_for__CVarForceCoherentOperations__);
  return;
}

// `dynamic_initializer_for_'CVarGVulkanDefragSizeFraction'' @ 141050080

void __cdecl _dynamic_initializer_for__CVarGVulkanDefragSizeFraction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGVulkanDefragSizeFraction,L"r.Vulkan.DefragSizeFraction",
             &GVulkanDefragSizeFraction,
             L"Fill threshold, dont attempt defrag if free space is less than this fraction\n",0x20)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarGVulkanDefragSizeFraction__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanAllowSparseResidency'' @ 1410500d0

void __cdecl _dynamic_initializer_for__CVarVulkanAllowSparseResidency__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanAllowSparseResidency,L"r.Vulkan.AllowSparseResidency",local_res8,
             L"Toggles the use of sparse residency for buffers and images:\n0 to disable\n1 to allow when supported (default)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanAllowSparseResidency__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanBudgetPercentageScale'' @ 141050120

void __cdecl _dynamic_initializer_for__CVarVulkanBudgetPercentageScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanBudgetPercentageScale,L"r.Vulkan.BudgetScale",&GVulkanBudgetPercentageScale,
             L"Percentage Scaling of MemoryBudget. Valid range is [0-100]. Only has an effect if VK_EXT_memory_budget is available"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanBudgetPercentageScale__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanDebugMarkers'' @ 141050170

void __cdecl _dynamic_initializer_for__CVarVulkanDebugMarkers__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 4;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanDebugMarkers,L"r.Vulkan.DebugMarkers",local_res8,
             L"0 to disable all debug markers\n1 to enable debug names for resources\n2 to enable debug labels for commands\n3 to enable debug resource names command labels\n4 to automatically enable markers depending on tool detection (default)\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanDebugMarkers__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanDefragAgeDelay'' @ 1410501c0

void __cdecl _dynamic_initializer_for__CVarVulkanDefragAgeDelay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanDefragAgeDelay,L"r.Vulkan.DefragAgeDelay",&GVulkanDefragAgeDelay,
             L"Delay in Frames that needs to pass before attempting to defrag a page again\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanDefragAgeDelay__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanDefragAutoPause'' @ 141050210

void __cdecl _dynamic_initializer_for__CVarVulkanDefragAutoPause__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanDefragAutoPause,L"r.Vulkan.DefragAutoPause",&GVulkanDefragAutoPause,
             L"Automatically Pause defragging after a single page has been defragged. Only for debugging the defragmentation code."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanDefragAutoPause__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanDefragOnce'' @ 141050260

void __cdecl _dynamic_initializer_for__CVarVulkanDefragOnce__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanDefragOnce,L"r.Vulkan.DefragOnceDebug",&GVulkanDefragOnce,
             L"Set to 1 to test defrag",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanDefragOnce__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanDefragPaused'' @ 1410502b0

void __cdecl _dynamic_initializer_for__CVarVulkanDefragPaused__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanDefragPaused,L"r.Vulkan.DefragPaused",&GVulkanDefragPaused,
             L"Pause Any defragging. Only for debugging defragmentation code",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanDefragPaused__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanDefragSizeFactor'' @ 141050300

void __cdecl _dynamic_initializer_for__CVarVulkanDefragSizeFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanDefragSizeFactor,L"r.Vulkan.DefragSizeFactor",&GVulkanDefragSizeFactor,
             L"Amount of space required to be free, on other pages, before attempting to do a defrag of a page"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanDefragSizeFactor__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanEnableDedicatedImageMemory'' @ 141050350

void __cdecl _dynamic_initializer_for__CVarVulkanEnableDedicatedImageMemory__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanEnableDedicatedImageMemory,L"r.Vulkan.EnableDedicatedImageMemory",
             &GVulkanEnableDedicatedImageMemory,
             L"Enable to use Dedidcated Image memory on devices that prefer it.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanEnableDedicatedImageMemory__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanEnableDefrag'' @ 1410503a0

void __cdecl _dynamic_initializer_for__CVarVulkanEnableDefrag__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanEnableDefrag,L"r.Vulkan.EnableDefrag",&GVulkanEnableDefrag,
             L"Whether to enable defrag moves & evictions\n0: Off\n1: On\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanEnableDefrag__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanEvictbLilleHestyMusOne'' @ 1410503f0

void __cdecl _dynamic_initializer_for__CVarVulkanEvictbLilleHestyMusOne__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanEvictbLilleHestyMusOne,L"r.Vulkan.EvictOnePageDebug",&GVulkanEvictOnePage,
             L"Set to 1 to test evict one page to host",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanEvictbLilleHestyMusOne__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanEvictionLimitPercentage'' @ 141050440

void __cdecl _dynamic_initializer_for__CVarVulkanEvictionLimitPercentage__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanEvictionLimitPercentage,L"r.Vulkan.EvictionLimitPercentage",
             &GVulkanEvictionLimitPercentage,
             L"When more than x% of local memory is used, evict resources to host memory",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanEvictionLimitPercentage__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanEvictionLimitPercentageReenableLimit'' @ 141050490

void __cdecl _dynamic_initializer_for__CVarVulkanEvictionLimitPercentageReenableLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanEvictionLimitPercentageReenableLimit,
             L"r.Vulkan.EvictionLimitPercentageRenableLimit",
             &GVulkanEvictionLimitPercentageReenableLimit,
             L"After eviction has occurred, only start using local mem for textures after memory usage is less than this(Relative to Eviction percentage)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanEvictionLimitPercentageReenableLimit__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanFakeMemoryLimit'' @ 1410504e0

void __cdecl _dynamic_initializer_for__CVarVulkanFakeMemoryLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanFakeMemoryLimit,L"r.Vulkan.FakeMemoryLimit",&GVulkanFakeMemoryLimit,
             L"set to artificially limit to # MB. 0 is disabled",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanFakeMemoryLimit__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanLogDefrag'' @ 141050530

void __cdecl _dynamic_initializer_for__CVarVulkanLogDefrag__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanLogDefrag,L"r.vulkan.LogDefrag",&GVulkanLogDefrag,
             L"Whether to log all defrag moves & evictions\n0: Off\n1: On\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanLogDefrag__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanMemoryBackTrace'' @ 141050580

void __cdecl _dynamic_initializer_for__CVarVulkanMemoryBackTrace__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanMemoryBackTrace,L"r.Vulkan.MemoryBacktrace",&GVulkanMemoryBackTrace,
             L"0: Disable, store __FILE__ and __LINE__\nN: Enable, n is # of steps to go back\n",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanMemoryBackTrace__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanMemoryMemoryFallbackToHost'' @ 1410505d0

void __cdecl _dynamic_initializer_for__CVarVulkanMemoryMemoryFallbackToHost__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanMemoryMemoryFallbackToHost,L"r.Vulkan.MemoryFallbackToHost",
             &GVulkanMemoryMemoryFallbackToHost,
             L"0: Legacy, will crash when oom for rendertargets\n1: Fallback to Host memory on oom\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanMemoryMemoryFallbackToHost__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanNumFramesToWaitForResourceDelete'' @ 141050620

void __cdecl _dynamic_initializer_for__CVarVulkanNumFramesToWaitForResourceDelete__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanNumFramesToWaitForResourceDelete,
             L"r.Vulkan.NumFramesToWaitForResourceDelete",&GVulkanNumFramesToWaitForResourceDelete,
             L"The number of frames to wait before deleting a resource. Used for debugging. (default:2)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanNumFramesToWaitForResourceDelete__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanSingleAllocationPerResource'' @ 141050670

void __cdecl _dynamic_initializer_for__CVarVulkanSingleAllocationPerResource__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanSingleAllocationPerResource,L"r.Vulkan.SingleAllocationPerResource",
             &GVulkanSingleAllocationPerResource,L"Enable to do a single allocation per resource",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanSingleAllocationPerResource__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanUseBufferBinning'' @ 1410506c0

void __cdecl _dynamic_initializer_for__CVarVulkanUseBufferBinning__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanUseBufferBinning,L"r.Vulkan.UseBufferBinning",&GVulkanUseBufferBinning,
             L"Enable binning sub-allocations within buffers to help reduce fragmentation at the expense of higher high watermark [read-only]\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanUseBufferBinning__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanUseD24'' @ 141050710

void __cdecl _dynamic_initializer_for__CVarVulkanUseD24__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanUseD24,L"r.Vulkan.Depth24Bit",local_res8,
             L"0: Use 32-bit float depth buffer (default)\n1: Use 24-bit fixed point depth buffer\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanUseD24__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanUseProfileCheck'' @ 141050760

void __cdecl _dynamic_initializer_for__CVarVulkanUseProfileCheck__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanUseProfileCheck,L"r.Vulkan.UseProfileCheck",local_res8,
             L"0 to assume all requested feature levels are supported.\n1 to verify feature level support using a profile check (default)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanUseProfileCheck__);
  return;
}

// `dynamic_initializer_for_'ELLMTagNamesVulkan'' @ 1410507b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__ELLMTagNamesVulkan__(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<FStat_STAT_VulkanMiscLLM> FVar2;
  FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM> FVar3;
  FThreadSafeStaticStat<FStat_STAT_VulkanUniformBuffersLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_VulkanBuffersLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_VulkanTexturesLLM> FVar6;
  FThreadSafeStaticStat<FStat_STAT_VulkanRenderTargetsLLM> FVar7;
  FThreadSafeStaticStat<FStat_STAT_VulkanSpareMemoryGPULLM> FVar8;
  FThreadSafeStaticStat<FStat_STAT_VulkanShadersLLM> FVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanFrameTempLLM> FVar10;
  FThreadSafeStaticStat<FStat_STAT_VulkanStagingBuffersLLM> FVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanDriverMemoryCPULLM> FVar12;
  FThreadSafeStaticStat<FStat_STAT_VulkanDriverMemoryGPULLM> FVar13;
  FName local_res8;
  
  ELLMTagNamesVulkan[0].Name = L"VulkanMisc";
  FVar2 = StatPtr_STAT_VulkanMiscLLM;
  if (StatPtr_STAT_VulkanMiscLLM == (FThreadSafeStaticStat<FStat_STAT_VulkanMiscLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanMiscLLM");
    FVar2 = (FThreadSafeStaticStat<FStat_STAT_VulkanMiscLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMiscLLM,*pFVar1,
                       L"VulkanMisc","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true
                       ,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[0].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar2;
  ELLMTagNamesVulkan[0].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar2 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[0].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[0].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  ELLMTagNamesVulkan[1].Name = L"VulkanUniformBuffers";
  FVar4 = StatPtr_STAT_VulkanUniformBuffersLLM;
  if (StatPtr_STAT_VulkanUniformBuffersLLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanUniformBuffersLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanUniformBuffersLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_VulkanUniformBuffersLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanUniformBuffersLLM,*pFVar1,
                       L"VulkanUniformBuffers","STATGROUP_LLMPlatform","STATCAT_Advanced",
                       L"LLM Platform",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[1].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  ELLMTagNamesVulkan[1].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[1].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[1].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  ELLMTagNamesVulkan[2].Name = L"VulkanBuffers";
  FVar5 = StatPtr_STAT_VulkanBuffersLLM;
  if (StatPtr_STAT_VulkanBuffersLLM == (FThreadSafeStaticStat<FStat_STAT_VulkanBuffersLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanBuffersLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_VulkanBuffersLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanBuffersLLM,*pFVar1,
                       L"VulkanBuffers","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",
                       true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[2].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  ELLMTagNamesVulkan[2].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[2].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[2].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  ELLMTagNamesVulkan[3].Name = L"VulkanTextures";
  FVar6 = StatPtr_STAT_VulkanTexturesLLM;
  if (StatPtr_STAT_VulkanTexturesLLM == (FThreadSafeStaticStat<FStat_STAT_VulkanTexturesLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanTexturesLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_VulkanTexturesLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanTexturesLLM,*pFVar1,
                       L"VulkanTextures","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",
                       true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[3].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  ELLMTagNamesVulkan[3].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[3].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[3].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  ELLMTagNamesVulkan[4].Name = L"VulkanRenderTargets";
  FVar7 = StatPtr_STAT_VulkanRenderTargetsLLM;
  if (StatPtr_STAT_VulkanRenderTargetsLLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRenderTargetsLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanRenderTargetsLLM");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_VulkanRenderTargetsLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRenderTargetsLLM,*pFVar1,
                       L"VulkanRenderTargets","STATGROUP_LLMPlatform","STATCAT_Advanced",
                       L"LLM Platform",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[4].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar7;
  ELLMTagNamesVulkan[4].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar7 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[4].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[4].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  ELLMTagNamesVulkan[5].Name = L"VulkanSpareMemoryGPU";
  FVar8 = StatPtr_STAT_VulkanSpareMemoryGPULLM;
  if (StatPtr_STAT_VulkanSpareMemoryGPULLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanSpareMemoryGPULLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanSpareMemoryGPULLM");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_VulkanSpareMemoryGPULLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanSpareMemoryGPULLM,*pFVar1,
                       L"VulkanSpareMemoryGPU","STATGROUP_LLMPlatform","STATCAT_Advanced",
                       L"LLM Platform",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[5].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar8;
  ELLMTagNamesVulkan[5].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar8 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[5].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[5].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  ELLMTagNamesVulkan[6].Name = L"VulkanShaders";
  FVar9 = StatPtr_STAT_VulkanShadersLLM;
  if (StatPtr_STAT_VulkanShadersLLM == (FThreadSafeStaticStat<FStat_STAT_VulkanShadersLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanShadersLLM");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_VulkanShadersLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanShadersLLM,*pFVar1,
                       L"VulkanShaders","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",
                       true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[6].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar9;
  ELLMTagNamesVulkan[6].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[6].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[6].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  ELLMTagNamesVulkan[7].Name = L"VulkanFrameTemp";
  FVar10 = StatPtr_STAT_VulkanFrameTempLLM;
  if (StatPtr_STAT_VulkanFrameTempLLM == (FThreadSafeStaticStat<FStat_STAT_VulkanFrameTempLLM>)0x0)
  {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanFrameTempLLM");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanFrameTempLLM>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanFrameTempLLM,*pFVar1,
                        L"VulkanFrameTemp","STATGROUP_LLMPlatform","STATCAT_Advanced",
                        L"LLM Platform",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[7].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar10;
  ELLMTagNamesVulkan[7].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar10 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[7].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[7].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  ELLMTagNamesVulkan[8].Name = L"VulkanStagingBuffers";
  FVar11 = StatPtr_STAT_VulkanStagingBuffersLLM;
  if (StatPtr_STAT_VulkanStagingBuffersLLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanStagingBuffersLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanStagingBuffersLLM");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_VulkanStagingBuffersLLM>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanStagingBuffersLLM,*pFVar1,
                        L"VulkanStagingBuffers","STATGROUP_LLMPlatform","STATCAT_Advanced",
                        L"LLM Platform",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[8].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar11;
  ELLMTagNamesVulkan[8].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar11 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[8].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[8].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  ELLMTagNamesVulkan[9].Name = L"VulkanDriverMemoryCPU";
  FVar12 = StatPtr_STAT_VulkanDriverMemoryCPULLM;
  if (StatPtr_STAT_VulkanDriverMemoryCPULLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanDriverMemoryCPULLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanDriverMemoryCPULLM");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanDriverMemoryCPULLM>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDriverMemoryCPULLM,*pFVar1,
                        L"VulkanDriverMemoryCPU","STATGROUP_LLMPlatform","STATCAT_Advanced",
                        L"LLM Platform",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[9].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar12;
  ELLMTagNamesVulkan[9].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar12 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[9].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[9].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  ELLMTagNamesVulkan[10].Name = L"VulkanDriverMemoryGPU";
  FVar13 = StatPtr_STAT_VulkanDriverMemoryGPULLM;
  if (StatPtr_STAT_VulkanDriverMemoryGPULLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanDriverMemoryGPULLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_VulkanDriverMemoryGPULLM");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanDriverMemoryGPULLM>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDriverMemoryGPULLM,*pFVar1,
                        L"VulkanDriverMemoryGPU","STATGROUP_LLMPlatform","STATCAT_Advanced",
                        L"LLM Platform",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[10].StatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar13;
  ELLMTagNamesVulkan[10].StatName.Number = (uint)((ulonglong)*(undefined8 *)FVar13 >> 0x20);
  FVar3 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar1 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar1,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  ELLMTagNamesVulkan[10].SummaryStatName.ComparisonIndex.Value = (uint)*(undefined8 *)FVar3;
  ELLMTagNamesVulkan[10].SummaryStatName.Number = (uint)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  return;
}

// `dynamic_initializer_for_'GAllowPresentOnComputeQueue'' @ 141051310

void __cdecl _dynamic_initializer_for__GAllowPresentOnComputeQueue__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GAllowPresentOnComputeQueue,L"r.Vulkan.AllowPresentOnComputeQueue",local_res8,
             L"0 to present on the graphics queue1 to allow presenting on the compute queue if available"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GAllowPresentOnComputeQueue__);
  return;
}

// `dynamic_initializer_for_'GCVarAllowConcurrentBuffer'' @ 141051360

void __cdecl _dynamic_initializer_for__GCVarAllowConcurrentBuffer__(void)

{
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GCVarAllowConcurrentBuffer,L"r.Vulkan.AllowConcurrentBuffer",
             &GVulkanAllowConcurrentBuffer,
             L"When async compute is supported: \n 0 to use queue family ownership transfers with buffers\n 1 to use sharing mode concurrent with buffers"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GCVarAllowConcurrentBuffer__);
  return;
}

// `dynamic_initializer_for_'GCVarRobustBufferAccess'' @ 1410513b0

void __cdecl _dynamic_initializer_for__GCVarRobustBufferAccess__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GCVarRobustBufferAccess,L"r.Vulkan.RobustBufferAccess",local_res8,
             L"0 to disable robust buffer access1 to enable (default)",4);
  atexit(_dynamic_atexit_destructor_for__GCVarRobustBufferAccess__);
  return;
}

// `dynamic_initializer_for_'GCVarVulkanTempBlockSizeKB'' @ 141051400

void __cdecl _dynamic_initializer_for__GCVarVulkanTempBlockSizeKB__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x1000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GCVarVulkanTempBlockSizeKB,L"r.Vulkan.TempBlockSizeKB",local_res8,
             L"Size in KB of the temporary blocks allocate by contexts, used for single use ub allocs and copies (default: 4096KB)."
             ,4);
  atexit(_dynamic_atexit_destructor_for__GCVarVulkanTempBlockSizeKB__);
  return;
}

// `dynamic_initializer_for_'GCVarVulkanUseMinimalSubmits'' @ 141051450

void __cdecl _dynamic_initializer_for__GCVarVulkanUseMinimalSubmits__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GCVarVulkanUseMinimalSubmits,L"r.Vulkan.UseMinimalSubmits",local_res8,
             L"Can be specified in device profiles to keep submit counts low on devices with a single queue and single RHI thread."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__GCVarVulkanUseMinimalSubmits__);
  return;
}

// `dynamic_initializer_for_'GDynamicGlobalUBs'' @ 1410514a0

void __cdecl _dynamic_initializer_for__GDynamicGlobalUBs__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GDynamicGlobalUBs,L"r.Vulkan.DynamicGlobalUBs",local_res8,
             L"2 to treat ALL uniform buffers as dynamic [default]\n1 to treat global/packed uniform buffers as dynamic\n0 to treat them as regular"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GDynamicGlobalUBs__);
  return;
}

// `dynamic_initializer_for_'GGPUValidationCvar'' @ 1410514f0

void __cdecl _dynamic_initializer_for__GGPUValidationCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GGPUValidationCvar,L"r.Vulkan.GPUValidation",local_res8,
             L"2 to use enable GPU assisted validation AND extra binding slot when using validation layers\n1 to use enable GPU assisted validation when using validation layers, or\n0 to not use (default)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GGPUValidationCvar__);
  return;
}

// `dynamic_initializer_for_'GMemMgrCS'' @ 141051540

void __cdecl _dynamic_initializer_for__GMemMgrCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GMemMgrCS,4000);
  atexit(_dynamic_atexit_destructor_for__GMemMgrCS__);
  return;
}

// `dynamic_initializer_for_'GRHIAllow16bitOps'' @ 141051570

void __cdecl _dynamic_initializer_for__GRHIAllow16bitOps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GRHIAllow16bitOps,L"r.Vulkan.Allow16bitOps",local_res8,
             L"Whether to enable 16bit ops to speeds up TSR\n0 to disable\n1 to enable (default)",4)
  ;
  atexit(_dynamic_atexit_destructor_for__GRHIAllow16bitOps__);
  return;
}

// `dynamic_initializer_for_'GRHIAllow64bitShaderAtomicsCvar'' @ 1410515c0

void __cdecl _dynamic_initializer_for__GRHIAllow64bitShaderAtomicsCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GRHIAllow64bitShaderAtomicsCvar,L"r.Vulkan.Allow64bitShaderAtomics",local_res8,
             L"Whether to enable 64bit buffer/image atomics required by Nanite\n0 to disable 64bit atomics\n1 to enable (default)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GRHIAllow64bitShaderAtomicsCvar__);
  return;
}

// `dynamic_initializer_for_'GRHIAllowAsyncComputeCvar'' @ 141051610

void __cdecl _dynamic_initializer_for__GRHIAllowAsyncComputeCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GRHIAllowAsyncComputeCvar,L"r.Vulkan.AllowAsyncCompute",local_res8,
             L"0 to disable async compute queue (if available)\n1 to allow async compute queue",4);
  atexit(_dynamic_atexit_destructor_for__GRHIAllowAsyncComputeCvar__);
  return;
}

// `dynamic_initializer_for_'GRHIAllowTransferQueueCvar'' @ 141051660

void __cdecl _dynamic_initializer_for__GRHIAllowTransferQueueCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GRHIAllowTransferQueueCvar,L"r.Vulkan.AllowTransferQueue",local_res8,
             L"0 to disable transfer queue (if available)\n1 to allow transfer queue",4);
  atexit(_dynamic_atexit_destructor_for__GRHIAllowTransferQueueCvar__);
  return;
}

// `dynamic_initializer_for_'GTypesUsageCS'' @ 1410516b0

void __cdecl _dynamic_initializer_for__GTypesUsageCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GTypesUsageCS,4000);
  atexit(_dynamic_atexit_destructor_for__GTypesUsageCS__);
  return;
}

// `dynamic_initializer_for_'GValidationCvar'' @ 1410516e0

void __cdecl _dynamic_initializer_for__GValidationCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GValidationCvar,L"r.Vulkan.EnableValidation",local_res8,
             L"0 to disable validation layers\n1 to enable errors\n2 to enable errors & warnings\n3 to enable errors, warnings & performance warnings\n4 to enable errors, warnings, performance & information messages\n5 to enable all messages"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GValidationCvar__);
  return;
}

// `dynamic_initializer_for_'GVarVulkanLogEvictStatus'' @ 141051730

void __cdecl _dynamic_initializer_for__GVarVulkanLogEvictStatus__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GVarVulkanLogEvictStatus,L"r.Vulkan.LogEvictStatus",&GVulkanLogEvictStatus,
             L"Log Eviction status every frame",0x20);
  atexit(_dynamic_atexit_destructor_for__GVarVulkanLogEvictStatus__);
  return;
}

// `dynamic_initializer_for_'GVulkanAllowDynamicRenderingCVar'' @ 141051780

void __cdecl _dynamic_initializer_for__GVulkanAllowDynamicRenderingCVar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GVulkanAllowDynamicRenderingCVar,L"r.Vulkan.AllowDynamicRendering",local_res8,
             L"Enables the use of VK_KHR_dynamic_rendering to remove the need for render passes. \n0: Do not enable support for dynamic rendering (default)\n1: Enable dynamic rendering"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GVulkanAllowDynamicRenderingCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanAllowDynamicStatesCVar'' @ 1410517d0

void __cdecl _dynamic_initializer_for__GVulkanAllowDynamicStatesCVar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GVulkanAllowDynamicStatesCVar,L"r.Vulkan.AllowDynamicStates",local_res8,
             L"Enables the use of VK_EXT_extended_dynamic_state1,2,3 to reduce amount of unique pipelines. \n0: Do not enable support for all the dynamic state extensions (default)\n1: Enable all the dynamic state extensions"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GVulkanAllowDynamicStatesCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanAllowGraphicPipelineLibraryCVar'' @ 141051820

void __cdecl _dynamic_initializer_for__GVulkanAllowGraphicPipelineLibraryCVar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GVulkanAllowGraphicPipelineLibraryCVar,L"r.Vulkan.AllowGraphicPipelineLibrary",
             local_res8,
             L"Enables the use of VK_EXT_graphics_pipeline_library to replace graphic pipelines. \n0: Do not enable support for graphic pipeline library (default)\n1: Enable graphic pipeline library"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GVulkanAllowGraphicPipelineLibraryCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanAllowHostImageCopyCVar'' @ 141051870

void __cdecl _dynamic_initializer_for__GVulkanAllowHostImageCopyCVar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GVulkanAllowHostImageCopyCVar,L"r.Vulkan.AllowHostImageCopy",local_res8,
             L"Enables the use of VK_EXT_host_image_copy to avoid an extra copy on unified memory devices. \n0: Do not enable support for Host Image Copy (default)\n1: Enable Host Image Copy"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GVulkanAllowHostImageCopyCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanAllowHostQueryResetCVar'' @ 1410518c0

void __cdecl _dynamic_initializer_for__GVulkanAllowHostQueryResetCVar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GVulkanAllowHostQueryResetCVar,L"r.Vulkan.AllowHostQueryReset",local_res8,
             L"0: Do not enable support for Host Query Reset extension\n1: Enable Host Query Reset (default)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GVulkanAllowHostQueryResetCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanAllowShaderObjectCVar'' @ 141051910

void __cdecl _dynamic_initializer_for__GVulkanAllowShaderObjectCVar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GVulkanAllowShaderObjectCVar,L"r.Vulkan.AllowShaderObject",local_res8,
             L"Enables the use of VK_EXT_shader_object to replace graphic pipelines. \n0: Do not enable support for shader objects (default)\n1: Enable shader objects"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GVulkanAllowShaderObjectCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanAllowSync2BarriersCVar'' @ 141051960

void __cdecl _dynamic_initializer_for__GVulkanAllowSync2BarriersCVar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GVulkanAllowSync2BarriersCVar,L"r.Vulkan.AllowSynchronization2",local_res8,
             L"Enables the use of advanced barriers that combine the use of the VK_KHR_separate_depth_stencil_layouts \nand VK_KHR_synchronization2 to reduce the reliance on layout tracking (except for defragging).\nThis is necessary in order to support parallel command buffer generation.\n0: Do not enable support for sync2 barriers.\n1: Enable sync2 barriers (default)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GVulkanAllowSync2BarriersCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanInstrumentedMemMgr'' @ 1410519b0

void __cdecl _dynamic_initializer_for__GVulkanInstrumentedMemMgr__(void)

{
  VulkanRHI::GAllocationCallbacks.pUserData = (void *)0x0;
  VulkanRHI::GAllocationCallbacks.pfnAllocation = FVulkanCustomMemManager::Alloc;
  VulkanRHI::GAllocationCallbacks.pfnReallocation = FVulkanCustomMemManager::Realloc;
  VulkanRHI::GAllocationCallbacks.pfnFree = FVulkanCustomMemManager::Free;
  VulkanRHI::GAllocationCallbacks.pfnInternalAllocation =
       FVulkanCustomMemManager::InternalAllocationNotification;
  VulkanRHI::GAllocationCallbacks.pfnInternalFree =
       FVulkanCustomMemManager::InternalFreeNotification;
  atexit(_dynamic_atexit_destructor_for__GVulkanInstrumentedMemMgr__);
  return;
}

// `dynamic_initializer_for_'GVulkanRayTracingCVar'' @ 141051a20

void __cdecl _dynamic_initializer_for__GVulkanRayTracingCVar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GVulkanRayTracingCVar,L"r.Vulkan.RayTracing",local_res8,
             L"0: Do not enable Vulkan ray tracing extensions\n1: Enable experimental ray tracing support (default)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__GVulkanRayTracingCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanVariableRateShadingFormatCVar'' @ 141051a70

void __cdecl _dynamic_initializer_for__GVulkanVariableRateShadingFormatCVar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GVulkanVariableRateShadingFormatCVar,L"r.Vulkan.VRSFormat",local_res8,
             L"Allows to choose the preferred Variable Rate Shading option. \n0: Prefer Fragment Shading Rate if both Fragment Shading Rate and Fragment Density Map are available.\n1: Use Fragment Shading Rate if available. A message will be reported if not available. \n2: Require Fragment Shading Rate. Will generate an error if the extension is not available. \n3: Prefer Fragment Density Map if both Fragment Shading Rate and Fragment Density Map are available.\n4: Use Fragment Density Map if available. A message will be reported if not available.\n5: Require Fragment Density Map. Will generate an error if the extension is not available."
             ,4);
  atexit(_dynamic_atexit_destructor_for__GVulkanVariableRateShadingFormatCVar__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_Allocated'' @ 141051ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_Allocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_Allocated ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_Allocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_Allocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_Allocated,*pFVar1,
               L"_Total","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_BufferOther'' @ 141051b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_BufferOther__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_BufferOther ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferOther>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_BufferOther");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_BufferOther,*pFVar1,
               L"BufferOther","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_BufferStaging'' @ 141051be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_BufferStaging__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_BufferStaging ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferStaging>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_BufferStaging");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_BufferStaging,*pFVar1,
               L"BufferStaging","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_BufferUAV'' @ 141051c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_BufferUAV__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_BufferUAV ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferUAV>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_BufferUAV");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_BufferUAV,*pFVar1,
               L"BufferUAV","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_FrameTempBuffer'' @ 141051d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_FrameTempBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_FrameTempBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_FrameTempBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_FrameTempBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_FrameTempBuffer,*pFVar1,
               L"FrameTempBuffer","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_ImageOther'' @ 141051d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_ImageOther__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_ImageOther ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageOther>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_ImageOther");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_ImageOther,*pFVar1,
               L"ImageOther","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,false
               ,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_ImageRenderTarget'' @ 141051e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_ImageRenderTarget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_ImageRenderTarget ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageRenderTarget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_ImageRenderTarget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_ImageRenderTarget,*pFVar1
               ,L"ImageRenderTarget","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_MultiBuffer'' @ 141051eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_MultiBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_MultiBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_MultiBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_MultiBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_MultiBuffer,*pFVar1,
               L"MultiBuffer","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_RingBuffer'' @ 141051f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_RingBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_RingBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_RingBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_RingBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_RingBuffer,*pFVar1,
               L"RingBuffer","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,false
               ,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_TempBlocks'' @ 141051fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_TempBlocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_TempBlocks ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_TempBlocks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_TempBlocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_TempBlocks,*pFVar1,
               L"TempBlocks","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,false
               ,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanAllocation_UniformBuffer'' @ 141052060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanAllocation_UniformBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanAllocation_UniformBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_UniformBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanAllocation_UniformBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_UniformBuffer,*pFVar1,
               L"UniformBuffer","STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBuffersLLM'' @ 1410520f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanBuffersLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBuffersLLM == (FThreadSafeStaticStat<FStat_STAT_VulkanBuffersLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBuffersLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanBuffersLLM,*pFVar1,L"VulkanBuffers",
               "STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanDedicatedMemory'' @ 141052180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanDedicatedMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanDedicatedMemory ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanDedicatedMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanDedicatedMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDedicatedMemory,*pFVar1,
               L"Dedicated Memory","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanDriverMemoryCPULLM'' @ 141052210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanDriverMemoryCPULLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanDriverMemoryCPULLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanDriverMemoryCPULLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanDriverMemoryCPULLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDriverMemoryCPULLM,*pFVar1,
               L"VulkanDriverMemoryCPU","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",
               true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanDriverMemoryGPULLM'' @ 1410522a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanDriverMemoryGPULLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanDriverMemoryGPULLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanDriverMemoryGPULLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanDriverMemoryGPULLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDriverMemoryGPULLM,*pFVar1,
               L"VulkanDriverMemoryGPU","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",
               true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanFrameTempLLM'' @ 141052330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanFrameTempLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanFrameTempLLM == (FThreadSafeStaticStat<FStat_STAT_VulkanFrameTempLLM>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanFrameTempLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanFrameTempLLM,*pFVar1,
               L"VulkanFrameTemp","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,
               false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory0'' @ 1410523c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory0__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory0 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory0");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory0,*pFVar1,L"MemoryPool 0",
               "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,false,
               ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory0Reserved'' @ 141052450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory0Reserved__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory0Reserved ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0Reserved>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory0Reserved");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory0Reserved,*pFVar1,
               L"MemoryPool 0 Reserved","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory1'' @ 1410524e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory1__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory1 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory1");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory1,*pFVar1,L"MemoryPool 1",
               "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,false,
               ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory1Reserved'' @ 141052570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory1Reserved__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory1Reserved ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1Reserved>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory1Reserved");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory1Reserved,*pFVar1,
               L"MemoryPool 1 Reserved","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory2'' @ 141052600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory2__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory2 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory2>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory2");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory2,*pFVar1,L"MemoryPool 2",
               "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,false,
               ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory2Reserved'' @ 141052690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory2Reserved__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory2Reserved ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanMemory2Reserved>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory2Reserved");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory2Reserved,*pFVar1,
               L"MemoryPool 2 Reserved","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory3'' @ 141052720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory3__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory3 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory3>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory3");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory3,*pFVar1,L"MemoryPool 3",
               "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,false,
               ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory3Reserved'' @ 1410527b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory3Reserved__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory3Reserved ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanMemory3Reserved>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory3Reserved");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory3Reserved,*pFVar1,
               L"MemoryPool 3 Reserved","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory4'' @ 141052840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory4__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory4 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory4>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory4");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory4,*pFVar1,L"MemoryPool 4",
               "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,false,
               ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory4Reserved'' @ 1410528d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory4Reserved__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory4Reserved ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanMemory4Reserved>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory4Reserved");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory4Reserved,*pFVar1,
               L"MemoryPool 4 Reserved","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory5'' @ 141052960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory5__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory5 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory5");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory5,*pFVar1,L"MemoryPool 5",
               "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,false,
               ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemory5Reserved'' @ 1410529f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemory5Reserved__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemory5Reserved ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemory5Reserved");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory5Reserved,*pFVar1,
               L"MemoryPool 5 Reserved","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryBudget0'' @ 141052a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryBudget0__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryBudget0 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget0>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryBudget0");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget0,*pFVar1,
               L"Memory Heap 0 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryBudget1'' @ 141052b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryBudget1__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryBudget1 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget1>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryBudget1");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget1,*pFVar1,
               L"Memory Heap 1 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryBudget2'' @ 141052ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryBudget2__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryBudget2 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget2>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryBudget2");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget2,*pFVar1,
               L"Memory Heap 2 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryBudget3'' @ 141052c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryBudget3__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryBudget3 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget3>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryBudget3");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget3,*pFVar1,
               L"Memory Heap 3 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryBudget4'' @ 141052cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryBudget4__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryBudget4 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget4>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryBudget4");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget4,*pFVar1,
               L"Memory Heap 4 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryBudget5'' @ 141052d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryBudget5__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryBudget5 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget5>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryBudget5");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget5,*pFVar1,
               L"Memory Heap 5 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryBudgetX'' @ 141052de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryBudgetX__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryBudgetX == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudgetX>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryBudgetX");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudgetX,*pFVar1,
               L"Memory Heap (remaining) Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryReserved'' @ 141052e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryReserved__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryReserved ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryReserved");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryReserved,*pFVar1,L"_Reserved",
               "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true,false,
               ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryTotal'' @ 141052f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryTotal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryTotal == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryTotal>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryTotal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryTotal,*pFVar1,
               L"_Total Allocated","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryUsage0'' @ 141052f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryUsage0__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryUsage0 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage0>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryUsage0");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage0,*pFVar1,
               L"Memory Heap 0 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryUsage1'' @ 141053020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryUsage1__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryUsage1 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage1>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryUsage1");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage1,*pFVar1,
               L"Memory Heap 1 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryUsage2'' @ 1410530b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryUsage2__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryUsage2 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage2>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryUsage2");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage2,*pFVar1,
               L"Memory Heap 2 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryUsage3'' @ 141053140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryUsage3__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryUsage3 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage3>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryUsage3");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage3,*pFVar1,
               L"Memory Heap 3 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryUsage4'' @ 1410531d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryUsage4__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryUsage4 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage4>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryUsage4");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage4,*pFVar1,
               L"Memory Heap 4 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryUsage5'' @ 141053260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryUsage5__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryUsage5 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage5>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryUsage5");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage5,*pFVar1,
               L"Memory Heap 5 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryX'' @ 1410532f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryX__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryX == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryX");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryX,*pFVar1,
               L"MemoryPool (remaining)","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMemoryXReserved'' @ 141053380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMemoryXReserved__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMemoryXReserved ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMemoryXReserved");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryXReserved,*pFVar1,
               L"MemoryPool (remaining) Reserved","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
               L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanMiscLLM'' @ 141053410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanMiscLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanMiscLLM == (FThreadSafeStaticStat<FStat_STAT_VulkanMiscLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanMiscLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMiscLLM,*pFVar1,L"VulkanMisc",
               "STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanRenderTargetsLLM'' @ 1410534a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanRenderTargetsLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanRenderTargetsLLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRenderTargetsLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanRenderTargetsLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRenderTargetsLLM,*pFVar1,
               L"VulkanRenderTargets","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",
               true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanShadersLLM'' @ 141053530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanShadersLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanShadersLLM == (FThreadSafeStaticStat<FStat_STAT_VulkanShadersLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanShadersLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanShadersLLM,*pFVar1,L"VulkanShaders",
               "STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,false,ST_int64,false,
               false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanSpareMemoryGPULLM'' @ 1410535c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanSpareMemoryGPULLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanSpareMemoryGPULLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanSpareMemoryGPULLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanSpareMemoryGPULLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanSpareMemoryGPULLM,*pFVar1,
               L"VulkanSpareMemoryGPU","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",
               true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanStagingBuffersLLM'' @ 141053650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanStagingBuffersLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanStagingBuffersLLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanStagingBuffersLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanStagingBuffersLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanStagingBuffersLLM,*pFVar1,
               L"VulkanStagingBuffers","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",
               true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanTexturesLLM'' @ 1410536e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanTexturesLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanTexturesLLM == (FThreadSafeStaticStat<FStat_STAT_VulkanTexturesLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanTexturesLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanTexturesLLM,*pFVar1,
               L"VulkanTextures","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",true,
               false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanUniformBuffersLLM'' @ 141053770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanUniformBuffersLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanUniformBuffersLLM ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanUniformBuffersLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanUniformBuffersLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanUniformBuffersLLM,*pFVar1,
               L"VulkanUniformBuffers","STATGROUP_LLMPlatform","STATCAT_Advanced",L"LLM Platform",
               true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// AddRequestedLayer<FVulkanInstanceExtension> @ 145af7540

bool __cdecl
AddRequestedLayer<FVulkanInstanceExtension>
          (char *param_1,TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_3,TArray<char_const_*,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  char *_Str2;
  char *pcVar13;
  char *local_res8;
  undefined1 local_38;
  undefined1 local_37 [3];
  uint local_34;
  
  local_res8 = param_1;
  uVar7 = FindLayerIndexInList(param_1,param_2);
  if (uVar7 == 0xffffffff) {
    return false;
  }
  pFVar2 = (param_4->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_res8) &&
     ((FScriptContainerElement *)&local_res8 < pFVar2 + (longlong)param_4->ArrayMax * 8)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar8 = param_4->ArrayNum;
  if (iVar8 == param_4->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar8 + 1;
  *(char **)((param_4->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_res8;
  uVar9 = 0;
  if ((int)uVar7 < param_2->ArrayNum) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_34 = *(uint *)(pFVar2 + (longlong)(int)uVar7 * 0x218 + 0x210);
  uVar11 = (ulonglong)(int)local_34;
  _Str2 = *(char **)(pFVar2 + (longlong)(int)uVar7 * 0x218 + 0x208);
  pcVar13 = _Str2 + uVar11 * 0x104;
  do {
    if (*(int *)(pFVar2 + (longlong)(int)uVar7 * 0x218 + 0x210) != (int)uVar11) {
      `TCheckedPointerIterator<VkExtensionProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_38);
    }
    if (_Str2 == pcVar13) {
      return true;
    }
    pFVar12 = (param_3->AllocatorInstance).Data;
    iVar8 = param_3->ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar8 * 8;
    while( true ) {
      if (param_3->ArrayNum != iVar8) {
        `TCheckedPointerIterator<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_37);
      }
      if (pFVar12 == pFVar1) goto LAB_145af76f7;
      lVar3 = *(longlong *)pFVar12;
      iVar10 = strcmp(*(char **)(lVar3 + 8),_Str2);
      if (iVar10 == 0) break;
      pFVar12 = pFVar12 + 8;
    }
    *(undefined1 *)(lVar3 + 0x15) = 1;
LAB_145af76f7:
    uVar11 = (ulonglong)local_34;
    _Str2 = _Str2 + 0x104;
  } while( true );
}

// DefaultConstructItems<VulkanRHI::FDeviceMemoryManager::FHeapInfo,int> @ 145af78e0

void __cdecl
DefaultConstructItems<VulkanRHI::FDeviceMemoryManager::FHeapInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLayerWithExtensions,int> @ 145af7910

void __cdecl DefaultConstructItems<FLayerWithExtensions,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x210);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x43;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<VulkanRHI::FResourceHeapStats,int> @ 145af7940

void __cdecl DefaultConstructItems<VulkanRHI::FResourceHeapStats,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int> @ 145af7990

void __cdecl
DefaultConstructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<VulkanRHI::FMemoryManager::FUBPendingFree,int> @ 145af79c0

void __cdecl
DefaultConstructItems<VulkanRHI::FMemoryManager::FUBPendingFree,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined4 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<VkPhysicalDeviceFragmentShadingRateKHR,int> @ 145af7a00

void __cdecl
DefaultConstructItems<VkPhysicalDeviceFragmentShadingRateKHR,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<VulkanRHI::FDeferredDeletionQueue2::FEntry,int> @ 145af7a10

void __cdecl
DestructItems<VulkanRHI::FDeferredDeletionQueue2::FEntry,int>(FEntry *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = &(param_1->Allocation).field_0x1b;
    do {
      if ((((*pbVar3 & 0x3f) != 0 & *pbVar3 >> 6) != 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("!HasAllocation()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                             ,0xebe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pbVar3 = pbVar3 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<VulkanRHI::FDeviceMemoryManager::FHeapInfo,int> @ 145af7a90

void __cdecl
DestructItems<VulkanRHI::FDeviceMemoryManager::FHeapInfo,int>(FHeapInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<VulkanRHI::FDeviceMemoryAllocation_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Allocations;
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

// DestructItems<FLayerWithExtensions,int> @ 145af7ad0

void __cdecl DestructItems<FLayerWithExtensions,int>(FLayerWithExtensions *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ExtensionProperties;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 0x21) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int> @ 145af7b20

void __cdecl
DestructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>(FSetLayout *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->LayoutBindings).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<VulkanRHI::FMemoryManager::FUBPendingFree,int> @ 145af7b60

void __cdecl
DestructItems<VulkanRHI::FMemoryManager::FUBPendingFree,int>(FUBPendingFree *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = &(param_1->Allocation).field_0x1b;
    do {
      if ((((*pbVar3 & 0x3f) != 0 & *pbVar3 >> 6) != 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("!HasAllocation()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                             ,0xebe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pbVar3 = pbVar3 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,int> @ 145af7be0

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
DestructItems<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,int>
          (TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_> *param_1,
          int param_2)

{
  FVulkanDeviceExtension *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FVulkanDeviceExtension *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FlagExtensionSupport<FVulkanDeviceExtension> @ 145af9740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FlagExtensionSupport<FVulkanDeviceExtension>
          (TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_2,uint param_3,wchar_t *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  FScriptContainerElement *_Str2;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  undefined1 local_178 [4];
  uint local_174;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_174 = param_3;
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  iVar1 = param_1->ArrayNum;
  _Str2 = (param_1->AllocatorInstance).Data;
  pFVar9 = _Str2 + (longlong)iVar1 * 0x104;
  do {
    if (param_1->ArrayNum != iVar1) {
      local_178[0] = 0;
      `TCheckedPointerIterator<VkExtensionProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_178);
    }
    if (_Str2 == pFVar9) {
      return;
    }
    iVar5 = param_2->ArrayNum;
    uVar7 = 0;
    lVar8 = 0;
    if (0 < iVar5) {
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_180 = (longlong)iVar5;
          local_188 = (longlong)(int)uVar7;
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar5 = strcmp(*(char **)(*(longlong *)((param_2->AllocatorInstance).Data + lVar8 * 8) + 8),
                       (char *)_Str2);
        if (iVar5 == 0) {
          if (uVar7 != 0xffffffff) {
            uVar4 = 0;
            if ((int)uVar7 < param_2->ArrayNum) {
              uVar4 = ~uVar7 >> 0x1f;
            }
            if (uVar4 == 0) {
              local_188 = (longlong)(int)uVar7;
              local_180 = (longlong)param_2->ArrayNum;
              bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            *(undefined1 *)(*(longlong *)((param_2->AllocatorInstance).Data + lVar8 * 8) + 0x15) = 1
            ;
            uVar4 = 0;
            if ((int)uVar7 < param_2->ArrayNum) {
              uVar4 = ~uVar7 >> 0x1f;
            }
            if (uVar4 == 0) {
              local_188 = (longlong)(int)uVar7;
              local_180 = (longlong)param_2->ArrayNum;
              bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            lVar8 = *(longlong *)((param_2->AllocatorInstance).Data + lVar8 * 8);
            *(bool *)(lVar8 + 0x17) = *(uint *)(lVar8 + 0x10) <= local_174;
          }
          break;
        }
        iVar5 = param_2->ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar7 < iVar5);
    }
    if (3 < (byte)LogVulkanRHI._0_1_) {
      local_168._padding_ = 0;
      if (_Str2 == (FScriptContainerElement *)0x0) {
        local_168.Ptr = (wchar_t *)0x0;
        local_168.StringLength = 0;
      }
      else {
        sVar6 = strlen((char *)_Str2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,(char *)_Str2,(int)sVar6,Yes);
      }
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    _Str2 = _Str2 + 0x104;
  } while( true );
}

// FlagExtensionSupport<FVulkanInstanceExtension> @ 145af9a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FlagExtensionSupport<FVulkanInstanceExtension>
          (TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_2,uint param_3,wchar_t *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  FScriptContainerElement *_Str2;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  undefined1 local_178 [4];
  uint local_174;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_174 = param_3;
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  iVar1 = param_1->ArrayNum;
  _Str2 = (param_1->AllocatorInstance).Data;
  pFVar9 = _Str2 + (longlong)iVar1 * 0x104;
  do {
    if (param_1->ArrayNum != iVar1) {
      local_178[0] = 0;
      `TCheckedPointerIterator<VkExtensionProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_178);
    }
    if (_Str2 == pFVar9) {
      return;
    }
    iVar5 = param_2->ArrayNum;
    uVar7 = 0;
    lVar8 = 0;
    if (0 < iVar5) {
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_180 = (longlong)iVar5;
          local_188 = (longlong)(int)uVar7;
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar5 = strcmp(*(char **)(*(longlong *)((param_2->AllocatorInstance).Data + lVar8 * 8) + 8),
                       (char *)_Str2);
        if (iVar5 == 0) {
          if (uVar7 != 0xffffffff) {
            uVar4 = 0;
            if ((int)uVar7 < param_2->ArrayNum) {
              uVar4 = ~uVar7 >> 0x1f;
            }
            if (uVar4 == 0) {
              local_188 = (longlong)(int)uVar7;
              local_180 = (longlong)param_2->ArrayNum;
              bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            *(undefined1 *)(*(longlong *)((param_2->AllocatorInstance).Data + lVar8 * 8) + 0x15) = 1
            ;
            uVar4 = 0;
            if ((int)uVar7 < param_2->ArrayNum) {
              uVar4 = ~uVar7 >> 0x1f;
            }
            if (uVar4 == 0) {
              local_188 = (longlong)(int)uVar7;
              local_180 = (longlong)param_2->ArrayNum;
              bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            lVar8 = *(longlong *)((param_2->AllocatorInstance).Data + lVar8 * 8);
            *(bool *)(lVar8 + 0x17) = *(uint *)(lVar8 + 0x10) <= local_174;
          }
          break;
        }
        iVar5 = param_2->ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar7 < iVar5);
    }
    if (3 < (byte)LogVulkanRHI._0_1_) {
      local_168._padding_ = 0;
      if (_Str2 == (FScriptContainerElement *)0x0) {
        local_168.Ptr = (wchar_t *)0x0;
        local_168.StringLength = 0;
      }
      else {
        sVar6 = strlen((char *)_Str2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,(char *)_Str2,(int)sVar6,Yes);
      }
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    _Str2 = _Str2 + 0x104;
  } while( true );
}

// HeapSiftDown<FLayerWithExtensions,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,`SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>'::__l2::<lambda_1>_>_>_> @ 145af9cc0

void __cdecl
AlgoImpl::
HeapSiftDown<FLayerWithExtensions,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>_::__l2::<lambda_1>_>_>_>
          (FLayerWithExtensions *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,,TArray<char_const_*,TSizedDefaultAllocator<32>_>___cdecl_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>(FVulkanDeviceSetupHelper_&,TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>_>
          *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  FLayerWithExtensions *pFVar6;
  int iVar7;
  int iVar8;
  FLayerWithExtensions *pFVar9;
  undefined8 *puVar10;
  longlong lVar11;
  FLayerWithExtensions *_Str2;
  int iVar12;
  FLayerWithExtensions *pFVar13;
  FLayerWithExtensions *pFVar14;
  undefined8 local_228 [68];
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar8 = param_2 * 2;
    iVar12 = iVar8 + 1;
    if (iVar8 + 2 < param_3) {
      iVar7 = strcmp((char *)(param_1 + (iVar8 + 2)),(char *)(param_1 + iVar12));
      if (iVar7 < 0) {
        iVar12 = iVar8;
      }
      iVar12 = iVar12 + 1;
    }
    _Str2 = param_1 + iVar12;
    pFVar13 = param_1 + param_2;
    iVar8 = strcmp((char *)pFVar13,(char *)_Str2);
    if (-1 < iVar8) break;
    lVar11 = 4;
    pFVar6 = pFVar13;
    puVar5 = local_228;
    do {
      puVar10 = puVar5;
      pFVar9 = pFVar6;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 8);
      uVar2 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x10);
      uVar3 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x18);
      pFVar6 = (FLayerWithExtensions *)((pFVar9->LayerProperties).layerName + 0x80);
      *puVar10 = *(undefined8 *)(pFVar9->LayerProperties).layerName;
      puVar10[1] = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x20);
      uVar4 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x28);
      puVar10[2] = uVar2;
      puVar10[3] = uVar3;
      uVar2 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x30);
      uVar3 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x38);
      puVar10[4] = uVar1;
      puVar10[5] = uVar4;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x40);
      uVar4 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x48);
      puVar10[6] = uVar2;
      puVar10[7] = uVar3;
      uVar2 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x50);
      uVar3 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x58);
      puVar10[8] = uVar1;
      puVar10[9] = uVar4;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x60);
      uVar4 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x68);
      puVar10[10] = uVar2;
      puVar10[0xb] = uVar3;
      uVar2 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x70);
      uVar3 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x78);
      puVar10[0xc] = uVar1;
      puVar10[0xd] = uVar4;
      puVar10[0xe] = uVar2;
      puVar10[0xf] = uVar3;
      lVar11 = lVar11 + -1;
      puVar5 = puVar10 + 0x10;
    } while (lVar11 != 0);
    uVar2 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x88);
    uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x90);
    puVar10[0x10] = *(undefined8 *)(pFVar6->LayerProperties).layerName;
    puVar10[0x11] = uVar2;
    puVar10[0x12] = uVar1;
    lVar11 = 4;
    pFVar6 = _Str2;
    do {
      pFVar14 = pFVar13;
      pFVar9 = pFVar6;
      pFVar13 = (FLayerWithExtensions *)((pFVar14->LayerProperties).layerName + 0x80);
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 8);
      pFVar6 = (FLayerWithExtensions *)((pFVar9->LayerProperties).layerName + 0x80);
      *(undefined8 *)(pFVar14->LayerProperties).layerName =
           *(undefined8 *)(pFVar9->LayerProperties).layerName;
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 8) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x18);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x10) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x10);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x18) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x28);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x20) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x20);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x28) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x38);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x30) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x30);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x38) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x48);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x40) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x40);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x48) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x58);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x50) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x50);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x58) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x68);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x60) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x60);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x68) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x78);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x70) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x70);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x78) = uVar1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x88);
    lVar11 = 4;
    *(undefined8 *)(pFVar13->LayerProperties).layerName =
         *(undefined8 *)(pFVar6->LayerProperties).layerName;
    *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x88) = uVar1;
    *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x90) =
         *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x90);
    puVar5 = local_228;
    do {
      pFVar13 = _Str2;
      puVar10 = puVar5;
      _Str2 = (FLayerWithExtensions *)((pFVar13->LayerProperties).layerName + 0x80);
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      *(undefined8 *)(pFVar13->LayerProperties).layerName = *puVar10;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 8) = uVar1;
      uVar1 = puVar10[4];
      uVar4 = puVar10[5];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x10) = uVar2;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x18) = uVar3;
      uVar2 = puVar10[6];
      uVar3 = puVar10[7];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x20) = uVar1;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x28) = uVar4;
      uVar1 = puVar10[8];
      uVar4 = puVar10[9];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x30) = uVar2;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x38) = uVar3;
      uVar2 = puVar10[10];
      uVar3 = puVar10[0xb];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x40) = uVar1;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x48) = uVar4;
      uVar1 = puVar10[0xc];
      uVar4 = puVar10[0xd];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x50) = uVar2;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x58) = uVar3;
      uVar2 = puVar10[0xe];
      uVar3 = puVar10[0xf];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x60) = uVar1;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x68) = uVar4;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x70) = uVar2;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x78) = uVar3;
      lVar11 = lVar11 + -1;
      puVar5 = puVar10 + 0x10;
    } while (lVar11 != 0);
    uVar2 = puVar10[0x11];
    uVar1 = puVar10[0x12];
    *(undefined8 *)(_Str2->LayerProperties).layerName = puVar10[0x10];
    *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x88) = uVar2;
    *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x90) = uVar1;
    param_2 = iVar12;
  }
  return;
}

// HeapSiftDown<FLayerWithExtensions,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,`SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>'::__l2::<lambda_1>_>_>_> @ 145af9ef0

void __cdecl
AlgoImpl::
HeapSiftDown<FLayerWithExtensions,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>_::__l2::<lambda_1>_>_>_>
          (FLayerWithExtensions *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,,TArray<char_const_*,TSizedDefaultAllocator<32>_>___cdecl_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>(FVulkanIntanceSetupHelper_&,TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>_>
          *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  FLayerWithExtensions *pFVar6;
  int iVar7;
  int iVar8;
  FLayerWithExtensions *pFVar9;
  undefined8 *puVar10;
  longlong lVar11;
  FLayerWithExtensions *_Str2;
  int iVar12;
  FLayerWithExtensions *pFVar13;
  FLayerWithExtensions *pFVar14;
  undefined8 local_228 [68];
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar8 = param_2 * 2;
    iVar12 = iVar8 + 1;
    if (iVar8 + 2 < param_3) {
      iVar7 = strcmp((char *)(param_1 + (iVar8 + 2)),(char *)(param_1 + iVar12));
      if (iVar7 < 0) {
        iVar12 = iVar8;
      }
      iVar12 = iVar12 + 1;
    }
    _Str2 = param_1 + iVar12;
    pFVar13 = param_1 + param_2;
    iVar8 = strcmp((char *)pFVar13,(char *)_Str2);
    if (-1 < iVar8) break;
    lVar11 = 4;
    pFVar6 = pFVar13;
    puVar5 = local_228;
    do {
      puVar10 = puVar5;
      pFVar9 = pFVar6;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 8);
      uVar2 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x10);
      uVar3 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x18);
      pFVar6 = (FLayerWithExtensions *)((pFVar9->LayerProperties).layerName + 0x80);
      *puVar10 = *(undefined8 *)(pFVar9->LayerProperties).layerName;
      puVar10[1] = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x20);
      uVar4 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x28);
      puVar10[2] = uVar2;
      puVar10[3] = uVar3;
      uVar2 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x30);
      uVar3 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x38);
      puVar10[4] = uVar1;
      puVar10[5] = uVar4;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x40);
      uVar4 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x48);
      puVar10[6] = uVar2;
      puVar10[7] = uVar3;
      uVar2 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x50);
      uVar3 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x58);
      puVar10[8] = uVar1;
      puVar10[9] = uVar4;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x60);
      uVar4 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x68);
      puVar10[10] = uVar2;
      puVar10[0xb] = uVar3;
      uVar2 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x70);
      uVar3 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x78);
      puVar10[0xc] = uVar1;
      puVar10[0xd] = uVar4;
      puVar10[0xe] = uVar2;
      puVar10[0xf] = uVar3;
      lVar11 = lVar11 + -1;
      puVar5 = puVar10 + 0x10;
    } while (lVar11 != 0);
    uVar2 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x88);
    uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x90);
    puVar10[0x10] = *(undefined8 *)(pFVar6->LayerProperties).layerName;
    puVar10[0x11] = uVar2;
    puVar10[0x12] = uVar1;
    lVar11 = 4;
    pFVar6 = _Str2;
    do {
      pFVar14 = pFVar13;
      pFVar9 = pFVar6;
      pFVar13 = (FLayerWithExtensions *)((pFVar14->LayerProperties).layerName + 0x80);
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 8);
      pFVar6 = (FLayerWithExtensions *)((pFVar9->LayerProperties).layerName + 0x80);
      *(undefined8 *)(pFVar14->LayerProperties).layerName =
           *(undefined8 *)(pFVar9->LayerProperties).layerName;
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 8) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x18);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x10) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x10);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x18) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x28);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x20) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x20);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x28) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x38);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x30) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x30);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x38) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x48);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x40) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x40);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x48) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x58);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x50) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x50);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x58) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x68);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x60) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x60);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x68) = uVar1;
      uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x78);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x70) =
           *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x70);
      *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x78) = uVar1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    uVar1 = *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x88);
    lVar11 = 4;
    *(undefined8 *)(pFVar13->LayerProperties).layerName =
         *(undefined8 *)(pFVar6->LayerProperties).layerName;
    *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x88) = uVar1;
    *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x90) =
         *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x90);
    puVar5 = local_228;
    do {
      pFVar13 = _Str2;
      puVar10 = puVar5;
      _Str2 = (FLayerWithExtensions *)((pFVar13->LayerProperties).layerName + 0x80);
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      *(undefined8 *)(pFVar13->LayerProperties).layerName = *puVar10;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 8) = uVar1;
      uVar1 = puVar10[4];
      uVar4 = puVar10[5];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x10) = uVar2;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x18) = uVar3;
      uVar2 = puVar10[6];
      uVar3 = puVar10[7];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x20) = uVar1;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x28) = uVar4;
      uVar1 = puVar10[8];
      uVar4 = puVar10[9];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x30) = uVar2;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x38) = uVar3;
      uVar2 = puVar10[10];
      uVar3 = puVar10[0xb];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x40) = uVar1;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x48) = uVar4;
      uVar1 = puVar10[0xc];
      uVar4 = puVar10[0xd];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x50) = uVar2;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x58) = uVar3;
      uVar2 = puVar10[0xe];
      uVar3 = puVar10[0xf];
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x60) = uVar1;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x68) = uVar4;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x70) = uVar2;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x78) = uVar3;
      lVar11 = lVar11 + -1;
      puVar5 = puVar10 + 0x10;
    } while (lVar11 != 0);
    uVar2 = puVar10[0x11];
    uVar1 = puVar10[0x12];
    *(undefined8 *)(_Str2->LayerProperties).layerName = puVar10[0x10];
    *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x88) = uVar2;
    *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x90) = uVar1;
    param_2 = iVar12;
  }
  return;
}

// HeapSortInternal<char_const_*,int,FIdentityFunctor,TDereferenceWrapper<char_const_*,TLess<void>_>_> @ 145afa120

void __cdecl
AlgoImpl::
HeapSortInternal<char_const_*,int,FIdentityFunctor,TDereferenceWrapper<char_const_*,TLess<void>_>_>
          (char **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<char_const_*,TLess<void>_> param_4)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar9 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_145afa20c:
      if (iVar9 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pcVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pcVar1;
            if (1 < iVar5) {
              do {
                iVar9 = iVar8 * 2;
                iVar4 = iVar9 + 1;
                if (iVar9 + 2 < iVar5) {
                  if (*param_1[(longlong)iVar9 + 2] < *param_1[iVar4]) {
                    iVar4 = iVar9;
                  }
                  iVar4 = iVar4 + 1;
                }
                pcVar1 = param_1[iVar8];
                if (*param_1[iVar4] <= *pcVar1) break;
                param_1[iVar8] = param_1[iVar4];
                param_1[iVar4] = pcVar1;
                iVar8 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar9 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar9 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (*param_1[(longlong)iVar5 + 2] < *param_1[iVar6]) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pcVar1 = param_1[iVar4];
    if (*param_1[iVar6] <= *pcVar1) goto LAB_145afa20c;
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar4] = param_1[iVar6];
    param_1[iVar6] = pcVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<`FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID'::__l2::<lambda_1>_>_>_>_> @ 145afa2d0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<_protected:_void___cdecl_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID(void)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  
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
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_145afa3c0:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
            iVar10 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar12->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            pTVar12->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if ((uint)param_1[(longlong)iVar11 + 2]._s_1.PrevFreeIndex <
                      (uint)param_1[iVar6]._s_1.PrevFreeIndex) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if ((uint)param_1[iVar6]._s_1.PrevFreeIndex <=
                    (uint)param_1[iVar10]._s_1.PrevFreeIndex) break;
                uVar2 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
                TVar3 = param_1[iVar10]._s_1;
                uVar4 = *(undefined8 *)(param_1[iVar10].ElementData.Pad + 8);
                param_1[iVar10]._s_1 = param_1[iVar6]._s_1;
                *(undefined8 *)((longlong)param_1[iVar10].ElementData.Pad + 8) = uVar2;
                param_1[iVar6]._s_1 = TVar3;
                *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if ((uint)param_1[(longlong)iVar7 + 2]._s_1.PrevFreeIndex <
          (uint)param_1[iVar8]._s_1.PrevFreeIndex) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if ((uint)param_1[iVar8]._s_1.PrevFreeIndex <= (uint)param_1[iVar6]._s_1.PrevFreeIndex)
    goto LAB_145afa3c0;
    uVar2 = *(undefined8 *)(param_1[iVar8].ElementData.Pad + 8);
    iVar7 = iVar8 * 2 + 1;
    TVar3 = param_1[iVar6]._s_1;
    uVar4 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
    param_1[iVar6]._s_1 = param_1[iVar8]._s_1;
    *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar2;
    param_1[iVar8]._s_1 = TVar3;
    *(undefined8 *)((longlong)param_1[iVar8].ElementData.Pad + 8) = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,`SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>'::__l2::<lambda_1>_>_> @ 145afa4a0

void __cdecl
AlgoImpl::
HeapSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>_::__l2::<lambda_1>_>_>
          (FLayerWithExtensions *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLayerWithExtensions,,TArray<char_const_*,TSizedDefaultAllocator<32>_>___cdecl_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>(FVulkanDeviceSetupHelper_&,TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FLayerWithExtensions *pFVar12;
  FLayerWithExtensions *pFVar13;
  undefined8 *puVar14;
  longlong lVar15;
  FLayerWithExtensions *pFVar16;
  int iVar17;
  FLayerWithExtensions *pFVar18;
  FLayerWithExtensions *pFVar19;
  longlong lVar20;
  FLayerWithExtensions *pFVar21;
  FIdentityFunctor local_res10 [8];
  TDereferenceWrapper<FLayerWithExtensions,,TArray<char_const_*,TSizedDefaultAllocator<32>_>___cdecl_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>(FVulkanDeviceSetupHelper_&,TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
  local_res20;
  TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,,TArray<char_const_*,TSizedDefaultAllocator<32>_>___cdecl_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>(FVulkanDeviceSetupHelper_&,TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>_>
  local_248;
  undefined8 local_240 [67];
  
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_248.Predicate = &local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                         ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  HeapSiftDown<FLayerWithExtensions,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>_::__l2::<lambda_1>_>_>_>
            (param_1,iVar9,param_2,local_res10,&local_248);
  while (iVar9 != 0) {
    iVar9 = iVar9 + -1;
    HeapSiftDown<FLayerWithExtensions,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>_::__l2::<lambda_1>_>_>_>
              (param_1,iVar9,param_2,local_res10,&local_248);
  }
  iVar9 = param_2 + -1;
  lVar20 = (longlong)iVar9;
  if (0 < iVar9) {
    pFVar21 = param_1 + lVar20;
    do {
      lVar15 = 4;
      pFVar18 = param_1;
      puVar7 = local_240;
      do {
        puVar14 = puVar7;
        pFVar16 = pFVar18;
        uVar1 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 8);
        uVar4 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x10);
        uVar5 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x18);
        pFVar18 = (FLayerWithExtensions *)((pFVar16->LayerProperties).layerName + 0x80);
        *puVar14 = *(undefined8 *)(pFVar16->LayerProperties).layerName;
        puVar14[1] = uVar1;
        uVar1 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x20);
        uVar6 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x28);
        puVar14[2] = uVar4;
        puVar14[3] = uVar5;
        uVar4 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x30);
        uVar5 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x38);
        puVar14[4] = uVar1;
        puVar14[5] = uVar6;
        uVar1 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x40);
        uVar6 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x48);
        puVar14[6] = uVar4;
        puVar14[7] = uVar5;
        uVar4 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x50);
        uVar5 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x58);
        puVar14[8] = uVar1;
        puVar14[9] = uVar6;
        uVar1 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x60);
        uVar6 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x68);
        puVar14[10] = uVar4;
        puVar14[0xb] = uVar5;
        uVar4 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x70);
        uVar5 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x78);
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar6;
        puVar14[0xe] = uVar4;
        puVar14[0xf] = uVar5;
        lVar15 = lVar15 + -1;
        puVar7 = puVar14 + 0x10;
      } while (lVar15 != 0);
      uVar4 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x88);
      uVar1 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x90);
      lVar15 = 4;
      puVar14[0x10] = *(undefined8 *)(pFVar18->LayerProperties).layerName;
      puVar14[0x11] = uVar4;
      puVar14[0x12] = uVar1;
      pFVar16 = pFVar21;
      pFVar18 = param_1;
      do {
        pFVar13 = pFVar18;
        pFVar12 = pFVar16;
        pFVar18 = (FLayerWithExtensions *)((pFVar13->LayerProperties).layerName + 0x80);
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 8);
        pFVar16 = (FLayerWithExtensions *)((pFVar12->LayerProperties).layerName + 0x80);
        *(undefined8 *)(pFVar13->LayerProperties).layerName =
             *(undefined8 *)(pFVar12->LayerProperties).layerName;
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 8) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x18);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x10) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x10);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x18) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x28);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x20) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x20);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x28) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x38);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x30) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x30);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x38) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x48);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x40) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x40);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x48) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x58);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x50) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x50);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x58) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x68);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x60) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x60);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x68) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x78);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x70) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x70);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x78) = uVar1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x88);
      lVar15 = 4;
      *(undefined8 *)(pFVar18->LayerProperties).layerName =
           *(undefined8 *)(pFVar16->LayerProperties).layerName;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x88) = uVar1;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x90) =
           *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x90);
      puVar7 = local_240;
      pFVar18 = pFVar21;
      do {
        pFVar16 = pFVar18;
        puVar14 = puVar7;
        pFVar18 = (FLayerWithExtensions *)((pFVar16->LayerProperties).layerName + 0x80);
        uVar1 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        *(undefined8 *)(pFVar16->LayerProperties).layerName = *puVar14;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 8) = uVar1;
        uVar1 = puVar14[4];
        uVar6 = puVar14[5];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x10) = uVar4;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x18) = uVar5;
        uVar4 = puVar14[6];
        uVar5 = puVar14[7];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x20) = uVar1;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x28) = uVar6;
        uVar1 = puVar14[8];
        uVar6 = puVar14[9];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x30) = uVar4;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x38) = uVar5;
        uVar4 = puVar14[10];
        uVar5 = puVar14[0xb];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x40) = uVar1;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x48) = uVar6;
        uVar1 = puVar14[0xc];
        uVar6 = puVar14[0xd];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x50) = uVar4;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x58) = uVar5;
        uVar4 = puVar14[0xe];
        uVar5 = puVar14[0xf];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x60) = uVar1;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x68) = uVar6;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x70) = uVar4;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x78) = uVar5;
        lVar15 = lVar15 + -1;
        puVar7 = puVar14 + 0x10;
      } while (lVar15 != 0);
      uVar4 = puVar14[0x11];
      uVar1 = puVar14[0x12];
      *(undefined8 *)(pFVar18->LayerProperties).layerName = puVar14[0x10];
      *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x88) = uVar4;
      *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x90) = uVar1;
      iVar11 = 0;
      if (1 < iVar9) {
        do {
          iVar3 = iVar11 * 2;
          iVar17 = iVar3 + 1;
          if (iVar3 + 2 < iVar9) {
            iVar10 = strcmp((char *)(param_1 + (iVar3 + 2)),(char *)(param_1 + iVar17));
            if (iVar10 < 0) {
              iVar17 = iVar3;
            }
            iVar17 = iVar17 + 1;
          }
          pFVar16 = param_1 + iVar17;
          pFVar18 = param_1 + iVar11;
          iVar11 = strcmp((char *)pFVar18,(char *)pFVar16);
          if (-1 < iVar11) break;
          lVar15 = 4;
          pFVar12 = pFVar18;
          puVar7 = local_240;
          do {
            puVar14 = puVar7;
            pFVar13 = pFVar12;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 8);
            uVar4 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x10);
            uVar5 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x18);
            pFVar12 = (FLayerWithExtensions *)((pFVar13->LayerProperties).layerName + 0x80);
            *puVar14 = *(undefined8 *)(pFVar13->LayerProperties).layerName;
            puVar14[1] = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x20);
            uVar6 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x28);
            puVar14[2] = uVar4;
            puVar14[3] = uVar5;
            uVar4 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x30);
            uVar5 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x38);
            puVar14[4] = uVar1;
            puVar14[5] = uVar6;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x40);
            uVar6 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x48);
            puVar14[6] = uVar4;
            puVar14[7] = uVar5;
            uVar4 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x50);
            uVar5 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x58);
            puVar14[8] = uVar1;
            puVar14[9] = uVar6;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x60);
            uVar6 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x68);
            puVar14[10] = uVar4;
            puVar14[0xb] = uVar5;
            uVar4 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x70);
            uVar5 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x78);
            puVar14[0xc] = uVar1;
            puVar14[0xd] = uVar6;
            puVar14[0xe] = uVar4;
            puVar14[0xf] = uVar5;
            lVar15 = lVar15 + -1;
            puVar7 = puVar14 + 0x10;
          } while (lVar15 != 0);
          uVar4 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x88);
          uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x90);
          puVar14[0x10] = *(undefined8 *)(pFVar12->LayerProperties).layerName;
          puVar14[0x11] = uVar4;
          puVar14[0x12] = uVar1;
          lVar15 = 4;
          pFVar12 = pFVar16;
          do {
            pFVar19 = pFVar18;
            pFVar13 = pFVar12;
            pFVar18 = (FLayerWithExtensions *)((pFVar19->LayerProperties).layerName + 0x80);
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 8);
            pFVar12 = (FLayerWithExtensions *)((pFVar13->LayerProperties).layerName + 0x80);
            *(undefined8 *)(pFVar19->LayerProperties).layerName =
                 *(undefined8 *)(pFVar13->LayerProperties).layerName;
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 8) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x18);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x10) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x10);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x18) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x28);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x20) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x20);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x28) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x38);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x30) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x30);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x38) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x48);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x40) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x40);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x48) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x58);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x50) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x50);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x58) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x68);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x60) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x60);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x68) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x78);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x70) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x70);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x78) = uVar1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x88);
          lVar15 = 4;
          *(undefined8 *)(pFVar18->LayerProperties).layerName =
               *(undefined8 *)(pFVar12->LayerProperties).layerName;
          *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x88) = uVar1;
          *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x90) =
               *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x90);
          puVar7 = local_240;
          do {
            pFVar18 = pFVar16;
            puVar14 = puVar7;
            pFVar16 = (FLayerWithExtensions *)((pFVar18->LayerProperties).layerName + 0x80);
            uVar1 = puVar14[1];
            uVar4 = puVar14[2];
            uVar5 = puVar14[3];
            *(undefined8 *)(pFVar18->LayerProperties).layerName = *puVar14;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 8) = uVar1;
            uVar1 = puVar14[4];
            uVar6 = puVar14[5];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x10) = uVar4;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x18) = uVar5;
            uVar4 = puVar14[6];
            uVar5 = puVar14[7];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x20) = uVar1;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x28) = uVar6;
            uVar1 = puVar14[8];
            uVar6 = puVar14[9];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x30) = uVar4;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x38) = uVar5;
            uVar4 = puVar14[10];
            uVar5 = puVar14[0xb];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x40) = uVar1;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x48) = uVar6;
            uVar1 = puVar14[0xc];
            uVar6 = puVar14[0xd];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x50) = uVar4;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x58) = uVar5;
            uVar4 = puVar14[0xe];
            uVar5 = puVar14[0xf];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x60) = uVar1;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x68) = uVar6;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x70) = uVar4;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x78) = uVar5;
            lVar15 = lVar15 + -1;
            puVar7 = puVar14 + 0x10;
          } while (lVar15 != 0);
          uVar4 = puVar14[0x11];
          uVar1 = puVar14[0x12];
          *(undefined8 *)(pFVar16->LayerProperties).layerName = puVar14[0x10];
          *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x88) = uVar4;
          *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x90) = uVar1;
          iVar11 = iVar17;
        } while (iVar17 * 2 + 1 < iVar9);
      }
      iVar9 = iVar9 + -1;
      lVar20 = lVar20 + -1;
      pFVar21 = pFVar21 + -1;
    } while (0 < lVar20);
  }
  return;
}

// HeapSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,`SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>'::__l2::<lambda_1>_>_> @ 145afa940

void __cdecl
AlgoImpl::
HeapSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>_::__l2::<lambda_1>_>_>
          (FLayerWithExtensions *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLayerWithExtensions,,TArray<char_const_*,TSizedDefaultAllocator<32>_>___cdecl_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>(FVulkanIntanceSetupHelper_&,TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FLayerWithExtensions *pFVar12;
  FLayerWithExtensions *pFVar13;
  undefined8 *puVar14;
  longlong lVar15;
  FLayerWithExtensions *pFVar16;
  int iVar17;
  FLayerWithExtensions *pFVar18;
  FLayerWithExtensions *pFVar19;
  longlong lVar20;
  FLayerWithExtensions *pFVar21;
  FIdentityFunctor local_res10 [8];
  TDereferenceWrapper<FLayerWithExtensions,,TArray<char_const_*,TSizedDefaultAllocator<32>_>___cdecl_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>(FVulkanIntanceSetupHelper_&,TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
  local_res20;
  TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,,TArray<char_const_*,TSizedDefaultAllocator<32>_>___cdecl_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>(FVulkanIntanceSetupHelper_&,TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>_>
  local_248;
  undefined8 local_240 [67];
  
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_248.Predicate = &local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                         ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  HeapSiftDown<FLayerWithExtensions,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>_::__l2::<lambda_1>_>_>_>
            (param_1,iVar9,param_2,local_res10,&local_248);
  while (iVar9 != 0) {
    iVar9 = iVar9 + -1;
    HeapSiftDown<FLayerWithExtensions,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>_::__l2::<lambda_1>_>_>_>
              (param_1,iVar9,param_2,local_res10,&local_248);
  }
  iVar9 = param_2 + -1;
  lVar20 = (longlong)iVar9;
  if (0 < iVar9) {
    pFVar21 = param_1 + lVar20;
    do {
      lVar15 = 4;
      pFVar18 = param_1;
      puVar7 = local_240;
      do {
        puVar14 = puVar7;
        pFVar16 = pFVar18;
        uVar1 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 8);
        uVar4 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x10);
        uVar5 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x18);
        pFVar18 = (FLayerWithExtensions *)((pFVar16->LayerProperties).layerName + 0x80);
        *puVar14 = *(undefined8 *)(pFVar16->LayerProperties).layerName;
        puVar14[1] = uVar1;
        uVar1 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x20);
        uVar6 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x28);
        puVar14[2] = uVar4;
        puVar14[3] = uVar5;
        uVar4 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x30);
        uVar5 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x38);
        puVar14[4] = uVar1;
        puVar14[5] = uVar6;
        uVar1 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x40);
        uVar6 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x48);
        puVar14[6] = uVar4;
        puVar14[7] = uVar5;
        uVar4 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x50);
        uVar5 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x58);
        puVar14[8] = uVar1;
        puVar14[9] = uVar6;
        uVar1 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x60);
        uVar6 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x68);
        puVar14[10] = uVar4;
        puVar14[0xb] = uVar5;
        uVar4 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x70);
        uVar5 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x78);
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar6;
        puVar14[0xe] = uVar4;
        puVar14[0xf] = uVar5;
        lVar15 = lVar15 + -1;
        puVar7 = puVar14 + 0x10;
      } while (lVar15 != 0);
      uVar4 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x88);
      uVar1 = *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x90);
      lVar15 = 4;
      puVar14[0x10] = *(undefined8 *)(pFVar18->LayerProperties).layerName;
      puVar14[0x11] = uVar4;
      puVar14[0x12] = uVar1;
      pFVar16 = pFVar21;
      pFVar18 = param_1;
      do {
        pFVar13 = pFVar18;
        pFVar12 = pFVar16;
        pFVar18 = (FLayerWithExtensions *)((pFVar13->LayerProperties).layerName + 0x80);
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 8);
        pFVar16 = (FLayerWithExtensions *)((pFVar12->LayerProperties).layerName + 0x80);
        *(undefined8 *)(pFVar13->LayerProperties).layerName =
             *(undefined8 *)(pFVar12->LayerProperties).layerName;
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 8) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x18);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x10) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x10);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x18) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x28);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x20) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x20);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x28) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x38);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x30) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x30);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x38) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x48);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x40) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x40);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x48) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x58);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x50) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x50);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x58) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x68);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x60) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x60);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x68) = uVar1;
        uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x78);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x70) =
             *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x70);
        *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x78) = uVar1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      uVar1 = *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x88);
      lVar15 = 4;
      *(undefined8 *)(pFVar18->LayerProperties).layerName =
           *(undefined8 *)(pFVar16->LayerProperties).layerName;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x88) = uVar1;
      *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x90) =
           *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x90);
      puVar7 = local_240;
      pFVar18 = pFVar21;
      do {
        pFVar16 = pFVar18;
        puVar14 = puVar7;
        pFVar18 = (FLayerWithExtensions *)((pFVar16->LayerProperties).layerName + 0x80);
        uVar1 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        *(undefined8 *)(pFVar16->LayerProperties).layerName = *puVar14;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 8) = uVar1;
        uVar1 = puVar14[4];
        uVar6 = puVar14[5];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x10) = uVar4;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x18) = uVar5;
        uVar4 = puVar14[6];
        uVar5 = puVar14[7];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x20) = uVar1;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x28) = uVar6;
        uVar1 = puVar14[8];
        uVar6 = puVar14[9];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x30) = uVar4;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x38) = uVar5;
        uVar4 = puVar14[10];
        uVar5 = puVar14[0xb];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x40) = uVar1;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x48) = uVar6;
        uVar1 = puVar14[0xc];
        uVar6 = puVar14[0xd];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x50) = uVar4;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x58) = uVar5;
        uVar4 = puVar14[0xe];
        uVar5 = puVar14[0xf];
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x60) = uVar1;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x68) = uVar6;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x70) = uVar4;
        *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x78) = uVar5;
        lVar15 = lVar15 + -1;
        puVar7 = puVar14 + 0x10;
      } while (lVar15 != 0);
      uVar4 = puVar14[0x11];
      uVar1 = puVar14[0x12];
      *(undefined8 *)(pFVar18->LayerProperties).layerName = puVar14[0x10];
      *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x88) = uVar4;
      *(undefined8 *)((pFVar16->LayerProperties).layerName + 0x90) = uVar1;
      iVar11 = 0;
      if (1 < iVar9) {
        do {
          iVar3 = iVar11 * 2;
          iVar17 = iVar3 + 1;
          if (iVar3 + 2 < iVar9) {
            iVar10 = strcmp((char *)(param_1 + (iVar3 + 2)),(char *)(param_1 + iVar17));
            if (iVar10 < 0) {
              iVar17 = iVar3;
            }
            iVar17 = iVar17 + 1;
          }
          pFVar16 = param_1 + iVar17;
          pFVar18 = param_1 + iVar11;
          iVar11 = strcmp((char *)pFVar18,(char *)pFVar16);
          if (-1 < iVar11) break;
          lVar15 = 4;
          pFVar12 = pFVar18;
          puVar7 = local_240;
          do {
            puVar14 = puVar7;
            pFVar13 = pFVar12;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 8);
            uVar4 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x10);
            uVar5 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x18);
            pFVar12 = (FLayerWithExtensions *)((pFVar13->LayerProperties).layerName + 0x80);
            *puVar14 = *(undefined8 *)(pFVar13->LayerProperties).layerName;
            puVar14[1] = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x20);
            uVar6 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x28);
            puVar14[2] = uVar4;
            puVar14[3] = uVar5;
            uVar4 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x30);
            uVar5 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x38);
            puVar14[4] = uVar1;
            puVar14[5] = uVar6;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x40);
            uVar6 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x48);
            puVar14[6] = uVar4;
            puVar14[7] = uVar5;
            uVar4 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x50);
            uVar5 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x58);
            puVar14[8] = uVar1;
            puVar14[9] = uVar6;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x60);
            uVar6 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x68);
            puVar14[10] = uVar4;
            puVar14[0xb] = uVar5;
            uVar4 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x70);
            uVar5 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x78);
            puVar14[0xc] = uVar1;
            puVar14[0xd] = uVar6;
            puVar14[0xe] = uVar4;
            puVar14[0xf] = uVar5;
            lVar15 = lVar15 + -1;
            puVar7 = puVar14 + 0x10;
          } while (lVar15 != 0);
          uVar4 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x88);
          uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x90);
          puVar14[0x10] = *(undefined8 *)(pFVar12->LayerProperties).layerName;
          puVar14[0x11] = uVar4;
          puVar14[0x12] = uVar1;
          lVar15 = 4;
          pFVar12 = pFVar16;
          do {
            pFVar19 = pFVar18;
            pFVar13 = pFVar12;
            pFVar18 = (FLayerWithExtensions *)((pFVar19->LayerProperties).layerName + 0x80);
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 8);
            pFVar12 = (FLayerWithExtensions *)((pFVar13->LayerProperties).layerName + 0x80);
            *(undefined8 *)(pFVar19->LayerProperties).layerName =
                 *(undefined8 *)(pFVar13->LayerProperties).layerName;
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 8) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x18);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x10) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x10);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x18) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x28);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x20) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x20);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x28) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x38);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x30) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x30);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x38) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x48);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x40) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x40);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x48) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x58);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x50) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x50);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x58) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x68);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x60) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x60);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x68) = uVar1;
            uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x78);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x70) =
                 *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x70);
            *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x78) = uVar1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          uVar1 = *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x88);
          lVar15 = 4;
          *(undefined8 *)(pFVar18->LayerProperties).layerName =
               *(undefined8 *)(pFVar12->LayerProperties).layerName;
          *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x88) = uVar1;
          *(undefined8 *)((pFVar19->LayerProperties).layerName + 0x90) =
               *(undefined8 *)((pFVar13->LayerProperties).layerName + 0x90);
          puVar7 = local_240;
          do {
            pFVar18 = pFVar16;
            puVar14 = puVar7;
            pFVar16 = (FLayerWithExtensions *)((pFVar18->LayerProperties).layerName + 0x80);
            uVar1 = puVar14[1];
            uVar4 = puVar14[2];
            uVar5 = puVar14[3];
            *(undefined8 *)(pFVar18->LayerProperties).layerName = *puVar14;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 8) = uVar1;
            uVar1 = puVar14[4];
            uVar6 = puVar14[5];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x10) = uVar4;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x18) = uVar5;
            uVar4 = puVar14[6];
            uVar5 = puVar14[7];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x20) = uVar1;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x28) = uVar6;
            uVar1 = puVar14[8];
            uVar6 = puVar14[9];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x30) = uVar4;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x38) = uVar5;
            uVar4 = puVar14[10];
            uVar5 = puVar14[0xb];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x40) = uVar1;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x48) = uVar6;
            uVar1 = puVar14[0xc];
            uVar6 = puVar14[0xd];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x50) = uVar4;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x58) = uVar5;
            uVar4 = puVar14[0xe];
            uVar5 = puVar14[0xf];
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x60) = uVar1;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x68) = uVar6;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x70) = uVar4;
            *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x78) = uVar5;
            lVar15 = lVar15 + -1;
            puVar7 = puVar14 + 0x10;
          } while (lVar15 != 0);
          uVar4 = puVar14[0x11];
          uVar1 = puVar14[0x12];
          *(undefined8 *)(pFVar16->LayerProperties).layerName = puVar14[0x10];
          *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x88) = uVar4;
          *(undefined8 *)((pFVar18->LayerProperties).layerName + 0x90) = uVar1;
          iVar11 = iVar17;
        } while (iVar17 * 2 + 1 < iVar9);
      }
      iVar9 = iVar9 + -1;
      lVar20 = lVar20 + -1;
      pFVar21 = pFVar21 + -1;
    } while (0 < lVar20);
  }
  return;
}

// HeapSortInternal<`VulkanRHI::FVulkanResourceHeap::DefragTick'::__l14::FPotentialDefragMove,int,FIdentityFunctor,TDereferenceWrapper<`VulkanRHI::FVulkanResourceHeap::DefragTick'::__l14::FPotentialDefragMove,`VulkanRHI::FVulkanResourceHeap::DefragTick'::__l34::<lambda_1>_>_> @ 145afade0

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
AlgoImpl::
HeapSortInternal<_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l14::FPotentialDefragMove,int,FIdentityFunctor,TDereferenceWrapper<_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l14::FPotentialDefragMove,_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l34::<lambda_1>_>_>
          (FPotentialDefragMove *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_VulkanRHI::FVulkanResourceHeap::DefragTick(FVulkanDevice_&,FVulkanContextArray_const_&,unsigned_int)_::_14_::FPotentialDefragMove,_public:_void___cdecl_VulkanRHI::FVulkanResourceHeap::DefragTick(FVulkanDevice_&,FVulkanContextArray_const_&,unsigned_int)_::_34_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  FVulkanSubresourceAllocator *pFVar2;
  ulong64 uVar3;
  FVulkanSubresourceAllocator *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FPotentialDefragMove *pFVar12;
  
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
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_145afaed3:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar12 = param_1 + lVar9;
          do {
            pFVar2 = pFVar12->Allocator;
            iVar10 = 0;
            uVar3 = param_1->Key;
            pFVar4 = param_1->Allocator;
            param_1->Key = pFVar12->Key;
            param_1->Allocator = pFVar2;
            pFVar12->Key = uVar3;
            pFVar12->Allocator = pFVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if (param_1[(longlong)iVar11 + 2].Key < param_1[iVar6].Key) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (param_1[iVar6].Key <= param_1[iVar10].Key) break;
                pFVar2 = param_1[iVar6].Allocator;
                uVar3 = param_1[iVar10].Key;
                pFVar4 = param_1[iVar10].Allocator;
                param_1[iVar10].Key = param_1[iVar6].Key;
                param_1[iVar10].Allocator = pFVar2;
                param_1[iVar6].Key = uVar3;
                param_1[iVar6].Allocator = pFVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2].Key < param_1[iVar8].Key) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if (param_1[iVar8].Key <= param_1[iVar6].Key) goto LAB_145afaed3;
    pFVar2 = param_1[iVar8].Allocator;
    iVar7 = iVar8 * 2 + 1;
    uVar3 = param_1[iVar6].Key;
    pFVar4 = param_1[iVar6].Allocator;
    param_1[iVar6].Key = param_1[iVar8].Key;
    param_1[iVar6].Allocator = pFVar2;
    param_1[iVar8].Key = uVar3;
    param_1[iVar8].Allocator = pFVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<VulkanRHI::`anonymous_namespace'::SDumpHeapEntry,int,FIdentityFunctor,TDereferenceWrapper<VulkanRHI::`anonymous_namespace'::SDumpHeapEntry,`VulkanRHI::FVulkanSubresourceAllocator::DumpFullHeap'::__l2::<lambda_1>_>_> @ 145afafb0

void __cdecl
AlgoImpl::
HeapSortInternal<VulkanRHI::_anonymous_namespace_::SDumpHeapEntry,int,FIdentityFunctor,TDereferenceWrapper<VulkanRHI::_anonymous_namespace_::SDumpHeapEntry,_VulkanRHI::FVulkanSubresourceAllocator::DumpFullHeap_::__l2::<lambda_1>_>_>
          (SDumpHeapEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<VulkanRHI::_anonymous_namespace_::SDumpHeapEntry,_protected:_void___cdecl_VulkanRHI::FVulkanSubresourceAllocator::DumpFullHeap(void)_::_2_::<lambda_1>_>
          param_4)

{
  SDumpHeapEntry *pSVar1;
  SDumpHeapEntry *pSVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  SDumpHeapEntry *pSVar18;
  
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
  iVar13 = iVar12;
  iVar17 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_145afb0a0:
      if (iVar17 == 0) {
        iVar12 = param_2 + -1;
        lVar15 = (longlong)iVar12;
        if (0 < iVar12) {
          pSVar18 = param_1 + lVar15;
          do {
            uVar4 = pSVar18->Size;
            iVar13 = pSVar18->FreeListIndex;
            iVar11 = pSVar18->InternalIndex;
            iVar16 = 0;
            uVar6 = param_1->Offset;
            uVar7 = param_1->Size;
            iVar17 = param_1->FreeListIndex;
            iVar14 = param_1->InternalIndex;
            param_1->Offset = pSVar18->Offset;
            param_1->Size = uVar4;
            param_1->FreeListIndex = iVar13;
            param_1->InternalIndex = iVar11;
            pSVar18->Offset = uVar6;
            pSVar18->Size = uVar7;
            pSVar18->FreeListIndex = iVar17;
            pSVar18->InternalIndex = iVar14;
            if (1 < iVar12) {
              do {
                iVar11 = iVar16 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (param_1[(longlong)iVar11 + 2].Offset < param_1[iVar13].Offset) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (param_1[iVar13].Offset <= param_1[iVar16].Offset) break;
                pSVar1 = param_1 + iVar13;
                uVar4 = pSVar1->Size;
                iVar11 = pSVar1->FreeListIndex;
                iVar17 = pSVar1->InternalIndex;
                pSVar2 = param_1 + iVar16;
                uVar6 = pSVar2->Offset;
                uVar7 = pSVar2->Size;
                iVar14 = pSVar2->FreeListIndex;
                iVar5 = pSVar2->InternalIndex;
                pSVar2 = param_1 + iVar16;
                pSVar2->Offset = pSVar1->Offset;
                pSVar2->Size = uVar4;
                pSVar2->FreeListIndex = iVar11;
                pSVar2->InternalIndex = iVar17;
                pSVar1 = param_1 + iVar13;
                pSVar1->Offset = uVar6;
                pSVar1->Size = uVar7;
                pSVar1->FreeListIndex = iVar14;
                pSVar1->InternalIndex = iVar5;
                iVar16 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar15 = lVar15 + -1;
            pSVar18 = pSVar18 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar11 = iVar17 + -1;
      iVar12 = iVar13 + -2;
      iVar13 = iVar12;
      iVar17 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar14 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (param_1[(longlong)iVar12 + 2].Offset < param_1[iVar14].Offset) {
        iVar14 = iVar12;
      }
      iVar14 = iVar14 + 1;
    }
    if (param_1[iVar14].Offset <= param_1[iVar11].Offset) goto LAB_145afb0a0;
    pSVar18 = param_1 + iVar14;
    uVar4 = pSVar18->Size;
    iVar16 = pSVar18->FreeListIndex;
    iVar5 = pSVar18->InternalIndex;
    iVar12 = iVar14 * 2 + 1;
    pSVar1 = param_1 + iVar11;
    uVar6 = pSVar1->Offset;
    uVar7 = pSVar1->Size;
    iVar8 = pSVar1->FreeListIndex;
    iVar9 = pSVar1->InternalIndex;
    pSVar1 = param_1 + iVar11;
    pSVar1->Offset = pSVar18->Offset;
    pSVar1->Size = uVar4;
    pSVar1->FreeListIndex = iVar16;
    pSVar1->InternalIndex = iVar5;
    pSVar18 = param_1 + iVar14;
    pSVar18->Offset = uVar6;
    pSVar18->Size = uVar7;
    pSVar18->FreeListIndex = iVar8;
    pSVar18->InternalIndex = iVar9;
    iVar11 = iVar14;
  } while( true );
}

// HeapSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,`FVulkanDeviceExtension::GetDriverSupportedDeviceExtensions'::__l2::<lambda_1>_>_> @ 145afb180

void __cdecl
AlgoImpl::
HeapSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,_FVulkanDeviceExtension::GetDriverSupportedDeviceExtensions_::__l2::<lambda_1>_>_>
          (VkExtensionProperties *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<VkExtensionProperties,_public:_static_class_TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_>___cdecl_FVulkanDeviceExtension::GetDriverSupportedDeviceExtensions(VkPhysicalDevice_T_*,char_const_*)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  VkExtensionProperties *pVVar14;
  VkExtensionProperties *pVVar15;
  VkExtensionProperties *pVVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  VkExtensionProperties *pVVar20;
  int iVar21;
  int iVar22;
  undefined8 local_128 [34];
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar12 = iVar10 * 2 + 1;
  iVar13 = iVar12;
  iVar22 = iVar10;
  do {
    while (param_2 <= iVar12) {
LAB_145afb3d9:
      if (iVar22 == 0) {
        iVar12 = param_2 + -1;
        lVar18 = (longlong)iVar12;
        if (0 < iVar12) {
          pVVar20 = param_1 + lVar18;
          do {
            lVar19 = 2;
            pVVar15 = param_1;
            puVar17 = local_128;
            do {
              puVar1 = puVar17 + 0x10;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 8);
              uVar4 = *(undefined8 *)(pVVar15->extensionName + 0x10);
              uVar5 = *(undefined8 *)(pVVar15->extensionName + 0x18);
              pcVar7 = pVVar15->extensionName;
              *puVar17 = *(undefined8 *)pVVar15->extensionName;
              puVar17[1] = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x20);
              uVar6 = *(undefined8 *)(pVVar15->extensionName + 0x28);
              puVar17[2] = uVar4;
              puVar17[3] = uVar5;
              uVar4 = *(undefined8 *)(pVVar15->extensionName + 0x30);
              uVar5 = *(undefined8 *)(pVVar15->extensionName + 0x38);
              puVar17[4] = uVar3;
              puVar17[5] = uVar6;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x40);
              uVar6 = *(undefined8 *)(pVVar15->extensionName + 0x48);
              puVar17[6] = uVar4;
              puVar17[7] = uVar5;
              uVar4 = *(undefined8 *)(pVVar15->extensionName + 0x50);
              uVar5 = *(undefined8 *)(pVVar15->extensionName + 0x58);
              puVar17[8] = uVar3;
              puVar17[9] = uVar6;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x60);
              uVar6 = *(undefined8 *)(pVVar15->extensionName + 0x68);
              puVar17[10] = uVar4;
              puVar17[0xb] = uVar5;
              uVar4 = *(undefined8 *)(pVVar15->extensionName + 0x70);
              uVar5 = *(undefined8 *)(pVVar15->extensionName + 0x78);
              puVar17[0xc] = uVar3;
              puVar17[0xd] = uVar6;
              puVar17[0xe] = uVar4;
              puVar17[0xf] = uVar5;
              lVar19 = lVar19 + -1;
              pVVar15 = (VkExtensionProperties *)(pcVar7 + 0x80);
              puVar17 = puVar1;
            } while (lVar19 != 0);
            lVar19 = 2;
            *(undefined4 *)puVar1 =
                 *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName;
            pVVar15 = pVVar20;
            pVVar14 = param_1;
            do {
              pcVar7 = pVVar14->extensionName;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 8);
              pcVar8 = pVVar15->extensionName;
              *(undefined8 *)pVVar14->extensionName = *(undefined8 *)pVVar15->extensionName;
              *(undefined8 *)(pVVar14->extensionName + 8) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x18);
              *(undefined8 *)(pVVar14->extensionName + 0x10) =
                   *(undefined8 *)(pVVar15->extensionName + 0x10);
              *(undefined8 *)(pVVar14->extensionName + 0x18) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x28);
              *(undefined8 *)(pVVar14->extensionName + 0x20) =
                   *(undefined8 *)(pVVar15->extensionName + 0x20);
              *(undefined8 *)(pVVar14->extensionName + 0x28) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x38);
              *(undefined8 *)(pVVar14->extensionName + 0x30) =
                   *(undefined8 *)(pVVar15->extensionName + 0x30);
              *(undefined8 *)(pVVar14->extensionName + 0x38) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x48);
              *(undefined8 *)(pVVar14->extensionName + 0x40) =
                   *(undefined8 *)(pVVar15->extensionName + 0x40);
              *(undefined8 *)(pVVar14->extensionName + 0x48) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x58);
              *(undefined8 *)(pVVar14->extensionName + 0x50) =
                   *(undefined8 *)(pVVar15->extensionName + 0x50);
              *(undefined8 *)(pVVar14->extensionName + 0x58) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x68);
              *(undefined8 *)(pVVar14->extensionName + 0x60) =
                   *(undefined8 *)(pVVar15->extensionName + 0x60);
              *(undefined8 *)(pVVar14->extensionName + 0x68) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x78);
              *(undefined8 *)(pVVar14->extensionName + 0x70) =
                   *(undefined8 *)(pVVar15->extensionName + 0x70);
              *(undefined8 *)(pVVar14->extensionName + 0x78) = uVar3;
              lVar19 = lVar19 + -1;
              pVVar15 = (VkExtensionProperties *)(pcVar8 + 0x80);
              pVVar14 = (VkExtensionProperties *)(pcVar7 + 0x80);
            } while (lVar19 != 0);
            lVar19 = 2;
            *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName =
                 *(undefined4 *)((VkExtensionProperties *)(pcVar8 + 0x80))->extensionName;
            puVar17 = local_128;
            pVVar15 = pVVar20;
            do {
              pcVar7 = pVVar15->extensionName;
              uVar3 = puVar17[1];
              uVar4 = puVar17[2];
              uVar5 = puVar17[3];
              puVar1 = puVar17 + 0x10;
              *(undefined8 *)pVVar15->extensionName = *puVar17;
              *(undefined8 *)(pVVar15->extensionName + 8) = uVar3;
              uVar3 = puVar17[4];
              uVar6 = puVar17[5];
              *(undefined8 *)(pVVar15->extensionName + 0x10) = uVar4;
              *(undefined8 *)(pVVar15->extensionName + 0x18) = uVar5;
              uVar4 = puVar17[6];
              uVar5 = puVar17[7];
              *(undefined8 *)(pVVar15->extensionName + 0x20) = uVar3;
              *(undefined8 *)(pVVar15->extensionName + 0x28) = uVar6;
              uVar3 = puVar17[8];
              uVar6 = puVar17[9];
              *(undefined8 *)(pVVar15->extensionName + 0x30) = uVar4;
              *(undefined8 *)(pVVar15->extensionName + 0x38) = uVar5;
              uVar4 = puVar17[10];
              uVar5 = puVar17[0xb];
              *(undefined8 *)(pVVar15->extensionName + 0x40) = uVar3;
              *(undefined8 *)(pVVar15->extensionName + 0x48) = uVar6;
              uVar3 = puVar17[0xc];
              uVar6 = puVar17[0xd];
              *(undefined8 *)(pVVar15->extensionName + 0x50) = uVar4;
              *(undefined8 *)(pVVar15->extensionName + 0x58) = uVar5;
              uVar4 = puVar17[0xe];
              uVar5 = puVar17[0xf];
              *(undefined8 *)(pVVar15->extensionName + 0x60) = uVar3;
              *(undefined8 *)(pVVar15->extensionName + 0x68) = uVar6;
              *(undefined8 *)(pVVar15->extensionName + 0x70) = uVar4;
              *(undefined8 *)(pVVar15->extensionName + 0x78) = uVar5;
              lVar19 = lVar19 + -1;
              puVar17 = puVar1;
              pVVar15 = (VkExtensionProperties *)(pcVar7 + 0x80);
            } while (lVar19 != 0);
            *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName =
                 *(undefined4 *)puVar1;
            iVar13 = 0;
            if (1 < iVar12) {
              do {
                iVar22 = iVar13 * 2;
                iVar10 = iVar22 + 1;
                if (iVar22 + 2 < iVar12) {
                  iVar21 = strcmp(param_1[iVar22 + 2].extensionName,param_1[iVar10].extensionName);
                  if (iVar21 < 0) {
                    iVar10 = iVar22;
                  }
                  iVar10 = iVar10 + 1;
                }
                pVVar15 = param_1 + iVar10;
                pVVar14 = param_1 + iVar13;
                iVar13 = strcmp(pVVar14->extensionName,pVVar15->extensionName);
                if (-1 < iVar13) break;
                lVar19 = 2;
                pVVar16 = pVVar14;
                puVar17 = local_128;
                do {
                  puVar1 = puVar17 + 0x10;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 8);
                  uVar4 = *(undefined8 *)(pVVar16->extensionName + 0x10);
                  uVar5 = *(undefined8 *)(pVVar16->extensionName + 0x18);
                  pcVar7 = pVVar16->extensionName;
                  *puVar17 = *(undefined8 *)pVVar16->extensionName;
                  puVar17[1] = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x20);
                  uVar6 = *(undefined8 *)(pVVar16->extensionName + 0x28);
                  puVar17[2] = uVar4;
                  puVar17[3] = uVar5;
                  uVar4 = *(undefined8 *)(pVVar16->extensionName + 0x30);
                  uVar5 = *(undefined8 *)(pVVar16->extensionName + 0x38);
                  puVar17[4] = uVar3;
                  puVar17[5] = uVar6;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x40);
                  uVar6 = *(undefined8 *)(pVVar16->extensionName + 0x48);
                  puVar17[6] = uVar4;
                  puVar17[7] = uVar5;
                  uVar4 = *(undefined8 *)(pVVar16->extensionName + 0x50);
                  uVar5 = *(undefined8 *)(pVVar16->extensionName + 0x58);
                  puVar17[8] = uVar3;
                  puVar17[9] = uVar6;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x60);
                  uVar6 = *(undefined8 *)(pVVar16->extensionName + 0x68);
                  puVar17[10] = uVar4;
                  puVar17[0xb] = uVar5;
                  uVar4 = *(undefined8 *)(pVVar16->extensionName + 0x70);
                  uVar5 = *(undefined8 *)(pVVar16->extensionName + 0x78);
                  puVar17[0xc] = uVar3;
                  puVar17[0xd] = uVar6;
                  puVar17[0xe] = uVar4;
                  puVar17[0xf] = uVar5;
                  lVar19 = lVar19 + -1;
                  pVVar16 = (VkExtensionProperties *)(pcVar7 + 0x80);
                  puVar17 = puVar1;
                } while (lVar19 != 0);
                *(undefined4 *)puVar1 =
                     *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName;
                lVar19 = 2;
                pVVar16 = pVVar15;
                do {
                  pcVar7 = pVVar14->extensionName;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 8);
                  pcVar8 = pVVar16->extensionName;
                  *(undefined8 *)pVVar14->extensionName = *(undefined8 *)pVVar16->extensionName;
                  *(undefined8 *)(pVVar14->extensionName + 8) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x18);
                  *(undefined8 *)(pVVar14->extensionName + 0x10) =
                       *(undefined8 *)(pVVar16->extensionName + 0x10);
                  *(undefined8 *)(pVVar14->extensionName + 0x18) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x28);
                  *(undefined8 *)(pVVar14->extensionName + 0x20) =
                       *(undefined8 *)(pVVar16->extensionName + 0x20);
                  *(undefined8 *)(pVVar14->extensionName + 0x28) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x38);
                  *(undefined8 *)(pVVar14->extensionName + 0x30) =
                       *(undefined8 *)(pVVar16->extensionName + 0x30);
                  *(undefined8 *)(pVVar14->extensionName + 0x38) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x48);
                  *(undefined8 *)(pVVar14->extensionName + 0x40) =
                       *(undefined8 *)(pVVar16->extensionName + 0x40);
                  *(undefined8 *)(pVVar14->extensionName + 0x48) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x58);
                  *(undefined8 *)(pVVar14->extensionName + 0x50) =
                       *(undefined8 *)(pVVar16->extensionName + 0x50);
                  *(undefined8 *)(pVVar14->extensionName + 0x58) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x68);
                  *(undefined8 *)(pVVar14->extensionName + 0x60) =
                       *(undefined8 *)(pVVar16->extensionName + 0x60);
                  *(undefined8 *)(pVVar14->extensionName + 0x68) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x78);
                  *(undefined8 *)(pVVar14->extensionName + 0x70) =
                       *(undefined8 *)(pVVar16->extensionName + 0x70);
                  *(undefined8 *)(pVVar14->extensionName + 0x78) = uVar3;
                  lVar19 = lVar19 + -1;
                  pVVar16 = (VkExtensionProperties *)(pcVar8 + 0x80);
                  pVVar14 = (VkExtensionProperties *)(pcVar7 + 0x80);
                } while (lVar19 != 0);
                lVar19 = 2;
                *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName =
                     *(undefined4 *)((VkExtensionProperties *)(pcVar8 + 0x80))->extensionName;
                puVar17 = local_128;
                do {
                  pcVar7 = pVVar15->extensionName;
                  uVar3 = puVar17[1];
                  uVar4 = puVar17[2];
                  uVar5 = puVar17[3];
                  puVar1 = puVar17 + 0x10;
                  *(undefined8 *)pVVar15->extensionName = *puVar17;
                  *(undefined8 *)(pVVar15->extensionName + 8) = uVar3;
                  uVar3 = puVar17[4];
                  uVar6 = puVar17[5];
                  *(undefined8 *)(pVVar15->extensionName + 0x10) = uVar4;
                  *(undefined8 *)(pVVar15->extensionName + 0x18) = uVar5;
                  uVar4 = puVar17[6];
                  uVar5 = puVar17[7];
                  *(undefined8 *)(pVVar15->extensionName + 0x20) = uVar3;
                  *(undefined8 *)(pVVar15->extensionName + 0x28) = uVar6;
                  uVar3 = puVar17[8];
                  uVar6 = puVar17[9];
                  *(undefined8 *)(pVVar15->extensionName + 0x30) = uVar4;
                  *(undefined8 *)(pVVar15->extensionName + 0x38) = uVar5;
                  uVar4 = puVar17[10];
                  uVar5 = puVar17[0xb];
                  *(undefined8 *)(pVVar15->extensionName + 0x40) = uVar3;
                  *(undefined8 *)(pVVar15->extensionName + 0x48) = uVar6;
                  uVar3 = puVar17[0xc];
                  uVar6 = puVar17[0xd];
                  *(undefined8 *)(pVVar15->extensionName + 0x50) = uVar4;
                  *(undefined8 *)(pVVar15->extensionName + 0x58) = uVar5;
                  uVar4 = puVar17[0xe];
                  uVar5 = puVar17[0xf];
                  *(undefined8 *)(pVVar15->extensionName + 0x60) = uVar3;
                  *(undefined8 *)(pVVar15->extensionName + 0x68) = uVar6;
                  *(undefined8 *)(pVVar15->extensionName + 0x70) = uVar4;
                  *(undefined8 *)(pVVar15->extensionName + 0x78) = uVar5;
                  lVar19 = lVar19 + -1;
                  puVar17 = puVar1;
                  pVVar15 = (VkExtensionProperties *)(pcVar7 + 0x80);
                } while (lVar19 != 0);
                *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName =
                     *(undefined4 *)puVar1;
                iVar13 = iVar10;
              } while (iVar10 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar18 = lVar18 + -1;
            pVVar20 = pVVar20 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar10 = iVar22 + -1;
      iVar12 = iVar13 + -2;
      iVar13 = iVar12;
      iVar22 = iVar10;
    }
    iVar12 = iVar10 * 2;
    iVar21 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      iVar11 = strcmp(param_1[iVar12 + 2].extensionName,param_1[iVar21].extensionName);
      if (iVar11 < 0) {
        iVar21 = iVar12;
      }
      iVar21 = iVar21 + 1;
    }
    pVVar20 = param_1 + iVar21;
    pVVar15 = param_1 + iVar10;
    iVar12 = strcmp(pVVar15->extensionName,pVVar20->extensionName);
    if (-1 < iVar12) goto LAB_145afb3d9;
    lVar18 = 2;
    pVVar14 = pVVar15;
    puVar17 = local_128;
    do {
      puVar1 = puVar17 + 0x10;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 8);
      uVar4 = *(undefined8 *)(pVVar14->extensionName + 0x10);
      uVar5 = *(undefined8 *)(pVVar14->extensionName + 0x18);
      pcVar7 = pVVar14->extensionName;
      *puVar17 = *(undefined8 *)pVVar14->extensionName;
      puVar17[1] = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x20);
      uVar6 = *(undefined8 *)(pVVar14->extensionName + 0x28);
      puVar17[2] = uVar4;
      puVar17[3] = uVar5;
      uVar4 = *(undefined8 *)(pVVar14->extensionName + 0x30);
      uVar5 = *(undefined8 *)(pVVar14->extensionName + 0x38);
      puVar17[4] = uVar3;
      puVar17[5] = uVar6;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x40);
      uVar6 = *(undefined8 *)(pVVar14->extensionName + 0x48);
      puVar17[6] = uVar4;
      puVar17[7] = uVar5;
      uVar4 = *(undefined8 *)(pVVar14->extensionName + 0x50);
      uVar5 = *(undefined8 *)(pVVar14->extensionName + 0x58);
      puVar17[8] = uVar3;
      puVar17[9] = uVar6;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x60);
      uVar6 = *(undefined8 *)(pVVar14->extensionName + 0x68);
      puVar17[10] = uVar4;
      puVar17[0xb] = uVar5;
      uVar4 = *(undefined8 *)(pVVar14->extensionName + 0x70);
      uVar5 = *(undefined8 *)(pVVar14->extensionName + 0x78);
      puVar17[0xc] = uVar3;
      puVar17[0xd] = uVar6;
      puVar17[0xe] = uVar4;
      puVar17[0xf] = uVar5;
      lVar18 = lVar18 + -1;
      pVVar14 = (VkExtensionProperties *)(pcVar7 + 0x80);
      puVar17 = puVar1;
    } while (lVar18 != 0);
    *(undefined4 *)puVar1 = *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName
    ;
    lVar18 = 2;
    pVVar14 = pVVar20;
    do {
      pcVar7 = pVVar15->extensionName;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 8);
      pcVar8 = pVVar14->extensionName;
      *(undefined8 *)pVVar15->extensionName = *(undefined8 *)pVVar14->extensionName;
      *(undefined8 *)(pVVar15->extensionName + 8) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x18);
      *(undefined8 *)(pVVar15->extensionName + 0x10) =
           *(undefined8 *)(pVVar14->extensionName + 0x10);
      *(undefined8 *)(pVVar15->extensionName + 0x18) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x28);
      *(undefined8 *)(pVVar15->extensionName + 0x20) =
           *(undefined8 *)(pVVar14->extensionName + 0x20);
      *(undefined8 *)(pVVar15->extensionName + 0x28) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x38);
      *(undefined8 *)(pVVar15->extensionName + 0x30) =
           *(undefined8 *)(pVVar14->extensionName + 0x30);
      *(undefined8 *)(pVVar15->extensionName + 0x38) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x48);
      *(undefined8 *)(pVVar15->extensionName + 0x40) =
           *(undefined8 *)(pVVar14->extensionName + 0x40);
      *(undefined8 *)(pVVar15->extensionName + 0x48) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x58);
      *(undefined8 *)(pVVar15->extensionName + 0x50) =
           *(undefined8 *)(pVVar14->extensionName + 0x50);
      *(undefined8 *)(pVVar15->extensionName + 0x58) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x68);
      *(undefined8 *)(pVVar15->extensionName + 0x60) =
           *(undefined8 *)(pVVar14->extensionName + 0x60);
      *(undefined8 *)(pVVar15->extensionName + 0x68) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x78);
      *(undefined8 *)(pVVar15->extensionName + 0x70) =
           *(undefined8 *)(pVVar14->extensionName + 0x70);
      *(undefined8 *)(pVVar15->extensionName + 0x78) = uVar3;
      lVar18 = lVar18 + -1;
      pVVar14 = (VkExtensionProperties *)(pcVar8 + 0x80);
      pVVar15 = (VkExtensionProperties *)(pcVar7 + 0x80);
    } while (lVar18 != 0);
    lVar18 = 2;
    *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName =
         *(undefined4 *)((VkExtensionProperties *)(pcVar8 + 0x80))->extensionName;
    puVar17 = local_128;
    do {
      pcVar7 = pVVar20->extensionName;
      uVar3 = puVar17[1];
      uVar4 = puVar17[2];
      uVar5 = puVar17[3];
      puVar1 = puVar17 + 0x10;
      *(undefined8 *)pVVar20->extensionName = *puVar17;
      *(undefined8 *)(pVVar20->extensionName + 8) = uVar3;
      uVar3 = puVar17[4];
      uVar6 = puVar17[5];
      *(undefined8 *)(pVVar20->extensionName + 0x10) = uVar4;
      *(undefined8 *)(pVVar20->extensionName + 0x18) = uVar5;
      uVar4 = puVar17[6];
      uVar5 = puVar17[7];
      *(undefined8 *)(pVVar20->extensionName + 0x20) = uVar3;
      *(undefined8 *)(pVVar20->extensionName + 0x28) = uVar6;
      uVar3 = puVar17[8];
      uVar6 = puVar17[9];
      *(undefined8 *)(pVVar20->extensionName + 0x30) = uVar4;
      *(undefined8 *)(pVVar20->extensionName + 0x38) = uVar5;
      uVar4 = puVar17[10];
      uVar5 = puVar17[0xb];
      *(undefined8 *)(pVVar20->extensionName + 0x40) = uVar3;
      *(undefined8 *)(pVVar20->extensionName + 0x48) = uVar6;
      uVar3 = puVar17[0xc];
      uVar6 = puVar17[0xd];
      *(undefined8 *)(pVVar20->extensionName + 0x50) = uVar4;
      *(undefined8 *)(pVVar20->extensionName + 0x58) = uVar5;
      uVar4 = puVar17[0xe];
      uVar5 = puVar17[0xf];
      *(undefined8 *)(pVVar20->extensionName + 0x60) = uVar3;
      *(undefined8 *)(pVVar20->extensionName + 0x68) = uVar6;
      *(undefined8 *)(pVVar20->extensionName + 0x70) = uVar4;
      *(undefined8 *)(pVVar20->extensionName + 0x78) = uVar5;
      lVar18 = lVar18 + -1;
      puVar17 = puVar1;
      pVVar20 = (VkExtensionProperties *)(pcVar7 + 0x80);
    } while (lVar18 != 0);
    *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName = *(undefined4 *)puVar1
    ;
    iVar12 = iVar21 * 2 + 1;
    iVar10 = iVar21;
  } while( true );
}

// HeapSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,`FVulkanInstanceExtension::GetDriverSupportedInstanceExtensions'::__l2::<lambda_1>_>_> @ 145afb730

void __cdecl
AlgoImpl::
HeapSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,_FVulkanInstanceExtension::GetDriverSupportedInstanceExtensions_::__l2::<lambda_1>_>_>
          (VkExtensionProperties *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<VkExtensionProperties,_public:_static_class_TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_>___cdecl_FVulkanInstanceExtension::GetDriverSupportedInstanceExtensions(char_const_*)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  VkExtensionProperties *pVVar14;
  VkExtensionProperties *pVVar15;
  VkExtensionProperties *pVVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  VkExtensionProperties *pVVar20;
  int iVar21;
  int iVar22;
  undefined8 local_128 [34];
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar12 = iVar10 * 2 + 1;
  iVar13 = iVar12;
  iVar22 = iVar10;
  do {
    while (param_2 <= iVar12) {
LAB_145afb989:
      if (iVar22 == 0) {
        iVar12 = param_2 + -1;
        lVar18 = (longlong)iVar12;
        if (0 < iVar12) {
          pVVar20 = param_1 + lVar18;
          do {
            lVar19 = 2;
            pVVar15 = param_1;
            puVar17 = local_128;
            do {
              puVar1 = puVar17 + 0x10;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 8);
              uVar4 = *(undefined8 *)(pVVar15->extensionName + 0x10);
              uVar5 = *(undefined8 *)(pVVar15->extensionName + 0x18);
              pcVar7 = pVVar15->extensionName;
              *puVar17 = *(undefined8 *)pVVar15->extensionName;
              puVar17[1] = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x20);
              uVar6 = *(undefined8 *)(pVVar15->extensionName + 0x28);
              puVar17[2] = uVar4;
              puVar17[3] = uVar5;
              uVar4 = *(undefined8 *)(pVVar15->extensionName + 0x30);
              uVar5 = *(undefined8 *)(pVVar15->extensionName + 0x38);
              puVar17[4] = uVar3;
              puVar17[5] = uVar6;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x40);
              uVar6 = *(undefined8 *)(pVVar15->extensionName + 0x48);
              puVar17[6] = uVar4;
              puVar17[7] = uVar5;
              uVar4 = *(undefined8 *)(pVVar15->extensionName + 0x50);
              uVar5 = *(undefined8 *)(pVVar15->extensionName + 0x58);
              puVar17[8] = uVar3;
              puVar17[9] = uVar6;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x60);
              uVar6 = *(undefined8 *)(pVVar15->extensionName + 0x68);
              puVar17[10] = uVar4;
              puVar17[0xb] = uVar5;
              uVar4 = *(undefined8 *)(pVVar15->extensionName + 0x70);
              uVar5 = *(undefined8 *)(pVVar15->extensionName + 0x78);
              puVar17[0xc] = uVar3;
              puVar17[0xd] = uVar6;
              puVar17[0xe] = uVar4;
              puVar17[0xf] = uVar5;
              lVar19 = lVar19 + -1;
              pVVar15 = (VkExtensionProperties *)(pcVar7 + 0x80);
              puVar17 = puVar1;
            } while (lVar19 != 0);
            lVar19 = 2;
            *(undefined4 *)puVar1 =
                 *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName;
            pVVar15 = pVVar20;
            pVVar14 = param_1;
            do {
              pcVar7 = pVVar14->extensionName;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 8);
              pcVar8 = pVVar15->extensionName;
              *(undefined8 *)pVVar14->extensionName = *(undefined8 *)pVVar15->extensionName;
              *(undefined8 *)(pVVar14->extensionName + 8) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x18);
              *(undefined8 *)(pVVar14->extensionName + 0x10) =
                   *(undefined8 *)(pVVar15->extensionName + 0x10);
              *(undefined8 *)(pVVar14->extensionName + 0x18) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x28);
              *(undefined8 *)(pVVar14->extensionName + 0x20) =
                   *(undefined8 *)(pVVar15->extensionName + 0x20);
              *(undefined8 *)(pVVar14->extensionName + 0x28) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x38);
              *(undefined8 *)(pVVar14->extensionName + 0x30) =
                   *(undefined8 *)(pVVar15->extensionName + 0x30);
              *(undefined8 *)(pVVar14->extensionName + 0x38) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x48);
              *(undefined8 *)(pVVar14->extensionName + 0x40) =
                   *(undefined8 *)(pVVar15->extensionName + 0x40);
              *(undefined8 *)(pVVar14->extensionName + 0x48) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x58);
              *(undefined8 *)(pVVar14->extensionName + 0x50) =
                   *(undefined8 *)(pVVar15->extensionName + 0x50);
              *(undefined8 *)(pVVar14->extensionName + 0x58) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x68);
              *(undefined8 *)(pVVar14->extensionName + 0x60) =
                   *(undefined8 *)(pVVar15->extensionName + 0x60);
              *(undefined8 *)(pVVar14->extensionName + 0x68) = uVar3;
              uVar3 = *(undefined8 *)(pVVar15->extensionName + 0x78);
              *(undefined8 *)(pVVar14->extensionName + 0x70) =
                   *(undefined8 *)(pVVar15->extensionName + 0x70);
              *(undefined8 *)(pVVar14->extensionName + 0x78) = uVar3;
              lVar19 = lVar19 + -1;
              pVVar15 = (VkExtensionProperties *)(pcVar8 + 0x80);
              pVVar14 = (VkExtensionProperties *)(pcVar7 + 0x80);
            } while (lVar19 != 0);
            lVar19 = 2;
            *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName =
                 *(undefined4 *)((VkExtensionProperties *)(pcVar8 + 0x80))->extensionName;
            puVar17 = local_128;
            pVVar15 = pVVar20;
            do {
              pcVar7 = pVVar15->extensionName;
              uVar3 = puVar17[1];
              uVar4 = puVar17[2];
              uVar5 = puVar17[3];
              puVar1 = puVar17 + 0x10;
              *(undefined8 *)pVVar15->extensionName = *puVar17;
              *(undefined8 *)(pVVar15->extensionName + 8) = uVar3;
              uVar3 = puVar17[4];
              uVar6 = puVar17[5];
              *(undefined8 *)(pVVar15->extensionName + 0x10) = uVar4;
              *(undefined8 *)(pVVar15->extensionName + 0x18) = uVar5;
              uVar4 = puVar17[6];
              uVar5 = puVar17[7];
              *(undefined8 *)(pVVar15->extensionName + 0x20) = uVar3;
              *(undefined8 *)(pVVar15->extensionName + 0x28) = uVar6;
              uVar3 = puVar17[8];
              uVar6 = puVar17[9];
              *(undefined8 *)(pVVar15->extensionName + 0x30) = uVar4;
              *(undefined8 *)(pVVar15->extensionName + 0x38) = uVar5;
              uVar4 = puVar17[10];
              uVar5 = puVar17[0xb];
              *(undefined8 *)(pVVar15->extensionName + 0x40) = uVar3;
              *(undefined8 *)(pVVar15->extensionName + 0x48) = uVar6;
              uVar3 = puVar17[0xc];
              uVar6 = puVar17[0xd];
              *(undefined8 *)(pVVar15->extensionName + 0x50) = uVar4;
              *(undefined8 *)(pVVar15->extensionName + 0x58) = uVar5;
              uVar4 = puVar17[0xe];
              uVar5 = puVar17[0xf];
              *(undefined8 *)(pVVar15->extensionName + 0x60) = uVar3;
              *(undefined8 *)(pVVar15->extensionName + 0x68) = uVar6;
              *(undefined8 *)(pVVar15->extensionName + 0x70) = uVar4;
              *(undefined8 *)(pVVar15->extensionName + 0x78) = uVar5;
              lVar19 = lVar19 + -1;
              puVar17 = puVar1;
              pVVar15 = (VkExtensionProperties *)(pcVar7 + 0x80);
            } while (lVar19 != 0);
            *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName =
                 *(undefined4 *)puVar1;
            iVar13 = 0;
            if (1 < iVar12) {
              do {
                iVar22 = iVar13 * 2;
                iVar10 = iVar22 + 1;
                if (iVar22 + 2 < iVar12) {
                  iVar21 = strcmp(param_1[iVar22 + 2].extensionName,param_1[iVar10].extensionName);
                  if (iVar21 < 0) {
                    iVar10 = iVar22;
                  }
                  iVar10 = iVar10 + 1;
                }
                pVVar15 = param_1 + iVar10;
                pVVar14 = param_1 + iVar13;
                iVar13 = strcmp(pVVar14->extensionName,pVVar15->extensionName);
                if (-1 < iVar13) break;
                lVar19 = 2;
                pVVar16 = pVVar14;
                puVar17 = local_128;
                do {
                  puVar1 = puVar17 + 0x10;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 8);
                  uVar4 = *(undefined8 *)(pVVar16->extensionName + 0x10);
                  uVar5 = *(undefined8 *)(pVVar16->extensionName + 0x18);
                  pcVar7 = pVVar16->extensionName;
                  *puVar17 = *(undefined8 *)pVVar16->extensionName;
                  puVar17[1] = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x20);
                  uVar6 = *(undefined8 *)(pVVar16->extensionName + 0x28);
                  puVar17[2] = uVar4;
                  puVar17[3] = uVar5;
                  uVar4 = *(undefined8 *)(pVVar16->extensionName + 0x30);
                  uVar5 = *(undefined8 *)(pVVar16->extensionName + 0x38);
                  puVar17[4] = uVar3;
                  puVar17[5] = uVar6;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x40);
                  uVar6 = *(undefined8 *)(pVVar16->extensionName + 0x48);
                  puVar17[6] = uVar4;
                  puVar17[7] = uVar5;
                  uVar4 = *(undefined8 *)(pVVar16->extensionName + 0x50);
                  uVar5 = *(undefined8 *)(pVVar16->extensionName + 0x58);
                  puVar17[8] = uVar3;
                  puVar17[9] = uVar6;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x60);
                  uVar6 = *(undefined8 *)(pVVar16->extensionName + 0x68);
                  puVar17[10] = uVar4;
                  puVar17[0xb] = uVar5;
                  uVar4 = *(undefined8 *)(pVVar16->extensionName + 0x70);
                  uVar5 = *(undefined8 *)(pVVar16->extensionName + 0x78);
                  puVar17[0xc] = uVar3;
                  puVar17[0xd] = uVar6;
                  puVar17[0xe] = uVar4;
                  puVar17[0xf] = uVar5;
                  lVar19 = lVar19 + -1;
                  pVVar16 = (VkExtensionProperties *)(pcVar7 + 0x80);
                  puVar17 = puVar1;
                } while (lVar19 != 0);
                *(undefined4 *)puVar1 =
                     *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName;
                lVar19 = 2;
                pVVar16 = pVVar15;
                do {
                  pcVar7 = pVVar14->extensionName;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 8);
                  pcVar8 = pVVar16->extensionName;
                  *(undefined8 *)pVVar14->extensionName = *(undefined8 *)pVVar16->extensionName;
                  *(undefined8 *)(pVVar14->extensionName + 8) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x18);
                  *(undefined8 *)(pVVar14->extensionName + 0x10) =
                       *(undefined8 *)(pVVar16->extensionName + 0x10);
                  *(undefined8 *)(pVVar14->extensionName + 0x18) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x28);
                  *(undefined8 *)(pVVar14->extensionName + 0x20) =
                       *(undefined8 *)(pVVar16->extensionName + 0x20);
                  *(undefined8 *)(pVVar14->extensionName + 0x28) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x38);
                  *(undefined8 *)(pVVar14->extensionName + 0x30) =
                       *(undefined8 *)(pVVar16->extensionName + 0x30);
                  *(undefined8 *)(pVVar14->extensionName + 0x38) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x48);
                  *(undefined8 *)(pVVar14->extensionName + 0x40) =
                       *(undefined8 *)(pVVar16->extensionName + 0x40);
                  *(undefined8 *)(pVVar14->extensionName + 0x48) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x58);
                  *(undefined8 *)(pVVar14->extensionName + 0x50) =
                       *(undefined8 *)(pVVar16->extensionName + 0x50);
                  *(undefined8 *)(pVVar14->extensionName + 0x58) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x68);
                  *(undefined8 *)(pVVar14->extensionName + 0x60) =
                       *(undefined8 *)(pVVar16->extensionName + 0x60);
                  *(undefined8 *)(pVVar14->extensionName + 0x68) = uVar3;
                  uVar3 = *(undefined8 *)(pVVar16->extensionName + 0x78);
                  *(undefined8 *)(pVVar14->extensionName + 0x70) =
                       *(undefined8 *)(pVVar16->extensionName + 0x70);
                  *(undefined8 *)(pVVar14->extensionName + 0x78) = uVar3;
                  lVar19 = lVar19 + -1;
                  pVVar16 = (VkExtensionProperties *)(pcVar8 + 0x80);
                  pVVar14 = (VkExtensionProperties *)(pcVar7 + 0x80);
                } while (lVar19 != 0);
                lVar19 = 2;
                *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName =
                     *(undefined4 *)((VkExtensionProperties *)(pcVar8 + 0x80))->extensionName;
                puVar17 = local_128;
                do {
                  pcVar7 = pVVar15->extensionName;
                  uVar3 = puVar17[1];
                  uVar4 = puVar17[2];
                  uVar5 = puVar17[3];
                  puVar1 = puVar17 + 0x10;
                  *(undefined8 *)pVVar15->extensionName = *puVar17;
                  *(undefined8 *)(pVVar15->extensionName + 8) = uVar3;
                  uVar3 = puVar17[4];
                  uVar6 = puVar17[5];
                  *(undefined8 *)(pVVar15->extensionName + 0x10) = uVar4;
                  *(undefined8 *)(pVVar15->extensionName + 0x18) = uVar5;
                  uVar4 = puVar17[6];
                  uVar5 = puVar17[7];
                  *(undefined8 *)(pVVar15->extensionName + 0x20) = uVar3;
                  *(undefined8 *)(pVVar15->extensionName + 0x28) = uVar6;
                  uVar3 = puVar17[8];
                  uVar6 = puVar17[9];
                  *(undefined8 *)(pVVar15->extensionName + 0x30) = uVar4;
                  *(undefined8 *)(pVVar15->extensionName + 0x38) = uVar5;
                  uVar4 = puVar17[10];
                  uVar5 = puVar17[0xb];
                  *(undefined8 *)(pVVar15->extensionName + 0x40) = uVar3;
                  *(undefined8 *)(pVVar15->extensionName + 0x48) = uVar6;
                  uVar3 = puVar17[0xc];
                  uVar6 = puVar17[0xd];
                  *(undefined8 *)(pVVar15->extensionName + 0x50) = uVar4;
                  *(undefined8 *)(pVVar15->extensionName + 0x58) = uVar5;
                  uVar4 = puVar17[0xe];
                  uVar5 = puVar17[0xf];
                  *(undefined8 *)(pVVar15->extensionName + 0x60) = uVar3;
                  *(undefined8 *)(pVVar15->extensionName + 0x68) = uVar6;
                  *(undefined8 *)(pVVar15->extensionName + 0x70) = uVar4;
                  *(undefined8 *)(pVVar15->extensionName + 0x78) = uVar5;
                  lVar19 = lVar19 + -1;
                  puVar17 = puVar1;
                  pVVar15 = (VkExtensionProperties *)(pcVar7 + 0x80);
                } while (lVar19 != 0);
                *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName =
                     *(undefined4 *)puVar1;
                iVar13 = iVar10;
              } while (iVar10 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar18 = lVar18 + -1;
            pVVar20 = pVVar20 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar10 = iVar22 + -1;
      iVar12 = iVar13 + -2;
      iVar13 = iVar12;
      iVar22 = iVar10;
    }
    iVar12 = iVar10 * 2;
    iVar21 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      iVar11 = strcmp(param_1[iVar12 + 2].extensionName,param_1[iVar21].extensionName);
      if (iVar11 < 0) {
        iVar21 = iVar12;
      }
      iVar21 = iVar21 + 1;
    }
    pVVar20 = param_1 + iVar21;
    pVVar15 = param_1 + iVar10;
    iVar12 = strcmp(pVVar15->extensionName,pVVar20->extensionName);
    if (-1 < iVar12) goto LAB_145afb989;
    lVar18 = 2;
    pVVar14 = pVVar15;
    puVar17 = local_128;
    do {
      puVar1 = puVar17 + 0x10;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 8);
      uVar4 = *(undefined8 *)(pVVar14->extensionName + 0x10);
      uVar5 = *(undefined8 *)(pVVar14->extensionName + 0x18);
      pcVar7 = pVVar14->extensionName;
      *puVar17 = *(undefined8 *)pVVar14->extensionName;
      puVar17[1] = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x20);
      uVar6 = *(undefined8 *)(pVVar14->extensionName + 0x28);
      puVar17[2] = uVar4;
      puVar17[3] = uVar5;
      uVar4 = *(undefined8 *)(pVVar14->extensionName + 0x30);
      uVar5 = *(undefined8 *)(pVVar14->extensionName + 0x38);
      puVar17[4] = uVar3;
      puVar17[5] = uVar6;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x40);
      uVar6 = *(undefined8 *)(pVVar14->extensionName + 0x48);
      puVar17[6] = uVar4;
      puVar17[7] = uVar5;
      uVar4 = *(undefined8 *)(pVVar14->extensionName + 0x50);
      uVar5 = *(undefined8 *)(pVVar14->extensionName + 0x58);
      puVar17[8] = uVar3;
      puVar17[9] = uVar6;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x60);
      uVar6 = *(undefined8 *)(pVVar14->extensionName + 0x68);
      puVar17[10] = uVar4;
      puVar17[0xb] = uVar5;
      uVar4 = *(undefined8 *)(pVVar14->extensionName + 0x70);
      uVar5 = *(undefined8 *)(pVVar14->extensionName + 0x78);
      puVar17[0xc] = uVar3;
      puVar17[0xd] = uVar6;
      puVar17[0xe] = uVar4;
      puVar17[0xf] = uVar5;
      lVar18 = lVar18 + -1;
      pVVar14 = (VkExtensionProperties *)(pcVar7 + 0x80);
      puVar17 = puVar1;
    } while (lVar18 != 0);
    *(undefined4 *)puVar1 = *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName
    ;
    lVar18 = 2;
    pVVar14 = pVVar20;
    do {
      pcVar7 = pVVar15->extensionName;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 8);
      pcVar8 = pVVar14->extensionName;
      *(undefined8 *)pVVar15->extensionName = *(undefined8 *)pVVar14->extensionName;
      *(undefined8 *)(pVVar15->extensionName + 8) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x18);
      *(undefined8 *)(pVVar15->extensionName + 0x10) =
           *(undefined8 *)(pVVar14->extensionName + 0x10);
      *(undefined8 *)(pVVar15->extensionName + 0x18) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x28);
      *(undefined8 *)(pVVar15->extensionName + 0x20) =
           *(undefined8 *)(pVVar14->extensionName + 0x20);
      *(undefined8 *)(pVVar15->extensionName + 0x28) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x38);
      *(undefined8 *)(pVVar15->extensionName + 0x30) =
           *(undefined8 *)(pVVar14->extensionName + 0x30);
      *(undefined8 *)(pVVar15->extensionName + 0x38) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x48);
      *(undefined8 *)(pVVar15->extensionName + 0x40) =
           *(undefined8 *)(pVVar14->extensionName + 0x40);
      *(undefined8 *)(pVVar15->extensionName + 0x48) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x58);
      *(undefined8 *)(pVVar15->extensionName + 0x50) =
           *(undefined8 *)(pVVar14->extensionName + 0x50);
      *(undefined8 *)(pVVar15->extensionName + 0x58) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x68);
      *(undefined8 *)(pVVar15->extensionName + 0x60) =
           *(undefined8 *)(pVVar14->extensionName + 0x60);
      *(undefined8 *)(pVVar15->extensionName + 0x68) = uVar3;
      uVar3 = *(undefined8 *)(pVVar14->extensionName + 0x78);
      *(undefined8 *)(pVVar15->extensionName + 0x70) =
           *(undefined8 *)(pVVar14->extensionName + 0x70);
      *(undefined8 *)(pVVar15->extensionName + 0x78) = uVar3;
      lVar18 = lVar18 + -1;
      pVVar14 = (VkExtensionProperties *)(pcVar8 + 0x80);
      pVVar15 = (VkExtensionProperties *)(pcVar7 + 0x80);
    } while (lVar18 != 0);
    lVar18 = 2;
    *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName =
         *(undefined4 *)((VkExtensionProperties *)(pcVar8 + 0x80))->extensionName;
    puVar17 = local_128;
    do {
      pcVar7 = pVVar20->extensionName;
      uVar3 = puVar17[1];
      uVar4 = puVar17[2];
      uVar5 = puVar17[3];
      puVar1 = puVar17 + 0x10;
      *(undefined8 *)pVVar20->extensionName = *puVar17;
      *(undefined8 *)(pVVar20->extensionName + 8) = uVar3;
      uVar3 = puVar17[4];
      uVar6 = puVar17[5];
      *(undefined8 *)(pVVar20->extensionName + 0x10) = uVar4;
      *(undefined8 *)(pVVar20->extensionName + 0x18) = uVar5;
      uVar4 = puVar17[6];
      uVar5 = puVar17[7];
      *(undefined8 *)(pVVar20->extensionName + 0x20) = uVar3;
      *(undefined8 *)(pVVar20->extensionName + 0x28) = uVar6;
      uVar3 = puVar17[8];
      uVar6 = puVar17[9];
      *(undefined8 *)(pVVar20->extensionName + 0x30) = uVar4;
      *(undefined8 *)(pVVar20->extensionName + 0x38) = uVar5;
      uVar4 = puVar17[10];
      uVar5 = puVar17[0xb];
      *(undefined8 *)(pVVar20->extensionName + 0x40) = uVar3;
      *(undefined8 *)(pVVar20->extensionName + 0x48) = uVar6;
      uVar3 = puVar17[0xc];
      uVar6 = puVar17[0xd];
      *(undefined8 *)(pVVar20->extensionName + 0x50) = uVar4;
      *(undefined8 *)(pVVar20->extensionName + 0x58) = uVar5;
      uVar4 = puVar17[0xe];
      uVar5 = puVar17[0xf];
      *(undefined8 *)(pVVar20->extensionName + 0x60) = uVar3;
      *(undefined8 *)(pVVar20->extensionName + 0x68) = uVar6;
      *(undefined8 *)(pVVar20->extensionName + 0x70) = uVar4;
      *(undefined8 *)(pVVar20->extensionName + 0x78) = uVar5;
      lVar18 = lVar18 + -1;
      puVar17 = puVar1;
      pVVar20 = (VkExtensionProperties *)(pcVar7 + 0x80);
    } while (lVar18 != 0);
    *(undefined4 *)((VkExtensionProperties *)(pcVar7 + 0x80))->extensionName = *(undefined4 *)puVar1
    ;
    iVar12 = iVar21 * 2 + 1;
    iVar10 = iVar21;
  } while( true );
}

// IncrementChecked<unsigned_short> @ 145afbce0

void __cdecl IncrementChecked<unsigned_short>(ushort *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*param_1 != 0xffff) {
    *param_1 = *param_1 + 1;
    return;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("Value < TNumericLimits<T>::Max()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                     ,0x6d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = *param_1 + 1;
  return;
}

// IntroSortInternal<char_const_*,int,FIdentityFunctor,TDereferenceWrapper<char_const_*,TLess<void>_>_> @ 145afbd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<char_const_*,int,FIdentityFunctor,TDereferenceWrapper<char_const_*,TLess<void>_>_>
          (char **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<char_const_*,TLess<void>_> param_4)

{
  char **ppcVar1;
  char *pcVar2;
  int iVar3;
  char ***pppcVar4;
  char **ppcVar5;
  char **ppcVar6;
  char **ppcVar7;
  char **ppcVar8;
  char **ppcVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  char **local_338;
  char **local_328;
  char **local_320;
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
    pppcVar4 = &local_328;
    do {
      ppcVar9 = pppcVar4[1];
      ppcVar5 = *pppcVar4;
      ppcVar1 = pppcVar4[2];
      iVar3 = (int)((longlong)ppcVar9 - (longlong)ppcVar5 >> 3) + 1;
      local_338._0_4_ = (int)ppcVar1;
      ppcVar8 = ppcVar5;
      if ((int)local_338 != 0) {
LAB_145afbdf0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppcVar6 = ppcVar9 + 1;
          pcVar2 = ppcVar8[iVar3 >> 1];
          ppcVar8[iVar3 >> 1] = *ppcVar8;
          *ppcVar8 = pcVar2;
          ppcVar5 = ppcVar8;
LAB_145afbe20:
          ppcVar5 = ppcVar5 + 1;
          if (ppcVar5 <= ppcVar9) goto code_r0x000145afbe29;
          goto LAB_145afbe36;
        }
        for (; ppcVar5 = ppcVar8, ppcVar1 = ppcVar8, ppcVar8 < ppcVar9; ppcVar9 = ppcVar9 + -1) {
          while (ppcVar1 = ppcVar1 + 1, ppcVar1 <= ppcVar9) {
            if (**ppcVar5 < **ppcVar1) {
              ppcVar5 = ppcVar1;
            }
          }
          pcVar2 = *ppcVar5;
          *ppcVar5 = *ppcVar9;
          *ppcVar9 = pcVar2;
        }
        goto LAB_145afbef1;
      }
LAB_145afbee0:
      local_338 = ppcVar1;
      HeapSortInternal<char_const_*,int,FIdentityFunctor,TDereferenceWrapper<char_const_*,TLess<void>_>_>
                (ppcVar5,iVar3,param_3,param_4);
LAB_145afbef1:
      pppcVar4 = pppcVar4 + -3;
    } while (&local_328 <= pppcVar4);
  }
  return;
code_r0x000145afbe29:
  if (**ppcVar5 <= **ppcVar8) goto LAB_145afbe20;
LAB_145afbe36:
  do {
    ppcVar7 = ppcVar6;
    ppcVar6 = ppcVar7 + -1;
    if (ppcVar6 <= ppcVar8) break;
  } while (**ppcVar8 <= **ppcVar6);
  if (ppcVar5 <= ppcVar6) {
    pcVar2 = *ppcVar5;
    *ppcVar5 = *ppcVar6;
    *ppcVar6 = pcVar2;
    goto LAB_145afbe20;
  }
  pcVar2 = *ppcVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppcVar8 = *ppcVar6;
  *ppcVar6 = pcVar2;
  if ((longlong)((longlong)ppcVar6 + (-8 - (longlong)ppcVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppcVar9 - (longlong)ppcVar5 & 0xfffffffffffffff8U)) {
    if (ppcVar5 < ppcVar9) {
      *pppcVar4 = ppcVar5;
      pppcVar4[1] = ppcVar9;
      *(int *)(pppcVar4 + 2) = (int)local_338;
      pppcVar4 = pppcVar4 + 3;
    }
    if (ppcVar6 <= ppcVar8 + 1) goto LAB_145afbef1;
    ppcVar9 = ppcVar7 + -2;
    ppcVar5 = ppcVar8;
  }
  else {
    if (ppcVar8 + 1 < ppcVar6) {
      *pppcVar4 = ppcVar8;
      pppcVar4[1] = ppcVar7 + -2;
      *(int *)(pppcVar4 + 2) = (int)local_338;
      pppcVar4 = pppcVar4 + 3;
    }
    if (ppcVar9 <= ppcVar5) goto LAB_145afbef1;
  }
  iVar3 = (int)((longlong)ppcVar9 - (longlong)ppcVar5 >> 3) + 1;
  ppcVar8 = ppcVar5;
  if ((int)local_338 == 0) goto LAB_145afbee0;
  goto LAB_145afbdf0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<`FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID'::__l2::<lambda_1>_>_>_>_> @ 145afbf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<_protected:_void___cdecl_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID(void)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  int iVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **ppTVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_320;
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
    ppTVar7 = &local_328;
    do {
      pTVar10 = ppTVar7[1];
      pTVar12 = *ppTVar7;
      pTVar1 = ppTVar7[2];
      iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar11 = pTVar12;
      if ((int)local_338 != 0) {
LAB_145afc040:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
          pTVar8 = pTVar10 + 1;
          TVar3 = pTVar11[iVar5 / 2]._s_1;
          uVar4 = *(undefined8 *)((longlong)pTVar11[iVar5 / 2].ElementData.Pad + 8);
          pTVar11[iVar5 / 2]._s_1 = pTVar11->_s_1;
          *(undefined8 *)((longlong)pTVar11[iVar5 / 2].ElementData.Pad + 8) = uVar2;
          pTVar11->_s_1 = TVar3;
          *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar4;
          pTVar12 = pTVar11;
LAB_145afc070:
          pTVar6 = pTVar12;
          pTVar12 = pTVar6 + 1;
          if (pTVar12 <= pTVar10) goto code_r0x000145afc079;
          goto LAB_145afc080;
        }
        for (; pTVar12 = pTVar11, pTVar1 = pTVar11, pTVar11 < pTVar10; pTVar10 = pTVar10 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar10) {
            if ((uint)(pTVar12->_s_1).PrevFreeIndex < (uint)(pTVar1->_s_1).PrevFreeIndex) {
              pTVar12 = pTVar1;
            }
          }
          TVar3 = pTVar12->_s_1;
          uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar10->ElementData).Pad + 8);
          pTVar12->_s_1 = pTVar10->_s_1;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
          pTVar10->_s_1 = TVar3;
          *(undefined8 *)((pTVar10->ElementData).Pad + 8) = uVar2;
        }
        goto LAB_145afc13f;
      }
LAB_145afc12e:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID_::__l2::<lambda_1>_>_>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_145afc13f:
      ppTVar7 = ppTVar7 + -3;
    } while (&local_328 <= ppTVar7);
  }
  return;
code_r0x000145afc079:
  if ((uint)(pTVar12->_s_1).PrevFreeIndex <= (uint)(pTVar11->_s_1).PrevFreeIndex)
  goto LAB_145afc070;
LAB_145afc080:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar11) break;
  } while ((uint)(pTVar11->_s_1).PrevFreeIndex <= (uint)(pTVar8->_s_1).PrevFreeIndex);
  uVar2 = *(undefined8 *)((longlong)pTVar9 + -8);
  if (pTVar12 <= pTVar8) {
    TVar3 = pTVar12->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar6 + 0x18);
    pTVar12->_s_1 = pTVar8->_s_1;
    *(undefined8 *)((longlong)pTVar6 + 0x18) = uVar2;
    pTVar8->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar9 + -8) = uVar4;
    goto LAB_145afc070;
  }
  TVar3 = pTVar11->_s_1;
  uVar4 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
  local_338._0_4_ = (int)local_338 + -1;
  pTVar11->_s_1 = pTVar8->_s_1;
  *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar2;
  pTVar8->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar9 + -8) = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar10 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar10) {
      *ppTVar7 = pTVar12;
      ppTVar7[1] = pTVar10;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar8 <= pTVar11 + 1) goto LAB_145afc13f;
    pTVar10 = pTVar9 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar8) {
      *ppTVar7 = pTVar11;
      ppTVar7[1] = pTVar9 + -2;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar10 <= pTVar12) goto LAB_145afc13f;
  }
  iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if ((int)local_338 == 0) goto LAB_145afc12e;
  goto LAB_145afc040;
}

// IntroSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,`SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>'::__l2::<lambda_1>_>_> @ 145afc1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>_::__l2::<lambda_1>_>_>
          (FLayerWithExtensions *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLayerWithExtensions,,TArray<char_const_*,TSizedDefaultAllocator<32>_>___cdecl_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>(FVulkanDeviceSetupHelper_&,TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  FLayerWithExtensions *pFVar6;
  undefined8 *puVar7;
  FLayerWithExtensions *pFVar8;
  FLayerWithExtensions *pFVar9;
  FLayerWithExtensions *pFVar10;
  FLayerWithExtensions *pFVar11;
  FLayerWithExtensions *pFVar12;
  int iVar13;
  FLayerWithExtensions *pFVar14;
  longlong lVar15;
  int iVar16;
  FLayerWithExtensions **ppFVar17;
  FLayerWithExtensions *_Str1;
  FLayerWithExtensions *pFVar18;
  float fVar19;
  undefined1 auStack_598 [48];
  FLayerWithExtensions *local_568;
  undefined8 local_560 [67];
  FLayerWithExtensions *local_348;
  FLayerWithExtensions *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_598;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    ppFVar17 = &local_348;
    do {
      pFVar18 = ppFVar17[1];
      pFVar9 = *ppFVar17;
      local_568 = ppFVar17[2];
      iVar13 = (int)(((longlong)pFVar18 - (longlong)pFVar9) / 0x218) + 1;
      _Str1 = pFVar9;
      iVar16 = (int)local_568;
      if ((int)local_568 != 0) {
LAB_145afc2c0:
        if (8 < iVar13) {
          lVar15 = 4;
          pFVar9 = _Str1 + iVar13 / 2;
          puVar7 = local_560;
          do {
            puVar5 = puVar7;
            pFVar10 = pFVar9;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 8);
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x18);
            pFVar9 = (FLayerWithExtensions *)((pFVar10->LayerProperties).layerName + 0x80);
            *puVar5 = *(undefined8 *)(pFVar10->LayerProperties).layerName;
            puVar5[1] = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x20);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x28);
            puVar5[2] = uVar2;
            puVar5[3] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x30);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x38);
            puVar5[4] = uVar1;
            puVar5[5] = uVar4;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x40);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x48);
            puVar5[6] = uVar2;
            puVar5[7] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x50);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x58);
            puVar5[8] = uVar1;
            puVar5[9] = uVar4;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x60);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x68);
            puVar5[10] = uVar2;
            puVar5[0xb] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x70);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x78);
            puVar5[0xc] = uVar1;
            puVar5[0xd] = uVar4;
            puVar5[0xe] = uVar2;
            puVar5[0xf] = uVar3;
            lVar15 = lVar15 + -1;
            puVar7 = puVar5 + 0x10;
          } while (lVar15 != 0);
          uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x88);
          uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x90);
          puVar5[0x10] = *(undefined8 *)(pFVar9->LayerProperties).layerName;
          puVar5[0x11] = uVar2;
          puVar5[0x12] = uVar1;
          lVar15 = 4;
          pFVar10 = _Str1;
          pFVar9 = _Str1 + iVar13 / 2;
          do {
            pFVar11 = pFVar9;
            pFVar14 = pFVar10;
            pFVar9 = (FLayerWithExtensions *)((pFVar11->LayerProperties).layerName + 0x80);
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 8);
            pFVar10 = (FLayerWithExtensions *)((pFVar14->LayerProperties).layerName + 0x80);
            *(undefined8 *)(pFVar11->LayerProperties).layerName =
                 *(undefined8 *)(pFVar14->LayerProperties).layerName;
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 8) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x18);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x10) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x10);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x18) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x28);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x20) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x20);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x28) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x38);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x30) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x30);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x38) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x48);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x40) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x40);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x48) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x58);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x50) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x50);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x58) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x68);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x60) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x60);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x68) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x78);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x70) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x70);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x78) = uVar1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x88);
          *(undefined8 *)(pFVar9->LayerProperties).layerName =
               *(undefined8 *)(pFVar10->LayerProperties).layerName;
          *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x88) = uVar1;
          *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x90) =
               *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x90);
          lVar15 = 4;
          puVar7 = local_560;
          pFVar9 = _Str1;
          do {
            pFVar10 = (FLayerWithExtensions *)((pFVar9->LayerProperties).layerName + 0x80);
            uVar1 = puVar7[1];
            uVar2 = puVar7[2];
            uVar3 = puVar7[3];
            puVar5 = puVar7 + 0x10;
            *(undefined8 *)(pFVar9->LayerProperties).layerName = *puVar7;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 8) = uVar1;
            uVar1 = puVar7[4];
            uVar4 = puVar7[5];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x10) = uVar2;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x18) = uVar3;
            uVar2 = puVar7[6];
            uVar3 = puVar7[7];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x20) = uVar1;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x28) = uVar4;
            uVar1 = puVar7[8];
            uVar4 = puVar7[9];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x30) = uVar2;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x38) = uVar3;
            uVar2 = puVar7[10];
            uVar3 = puVar7[0xb];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x40) = uVar1;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x48) = uVar4;
            uVar1 = puVar7[0xc];
            uVar4 = puVar7[0xd];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x50) = uVar2;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x58) = uVar3;
            uVar2 = puVar7[0xe];
            uVar3 = puVar7[0xf];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x60) = uVar1;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x68) = uVar4;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x70) = uVar2;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x78) = uVar3;
            lVar15 = lVar15 + -1;
            puVar7 = puVar5;
            pFVar9 = pFVar10;
          } while (lVar15 != 0);
          pFVar14 = pFVar18 + 1;
          pFVar9 = _Str1;
          do {
            uVar2 = puVar5[1];
            uVar1 = puVar5[2];
            *(undefined8 *)(pFVar10->LayerProperties).layerName = *puVar5;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 8) = uVar2;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10) = uVar1;
            do {
              pFVar9 = pFVar9 + 1;
              if (pFVar18 < pFVar9) break;
              iVar13 = strcmp((char *)_Str1,(char *)pFVar9);
            } while (-1 < iVar13);
            do {
              pFVar10 = pFVar14;
              pFVar14 = pFVar10 + -1;
              if (pFVar14 <= _Str1) break;
              iVar13 = strcmp((char *)pFVar14,(char *)_Str1);
            } while (-1 < iVar13);
            lVar15 = 4;
            pFVar6 = _Str1;
            pFVar11 = pFVar9;
            puVar7 = local_560;
            if (pFVar14 < pFVar9) goto LAB_145afc5e0;
            do {
              puVar5 = puVar7;
              pFVar10 = pFVar11;
              uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 8);
              uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10);
              uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x18);
              pFVar11 = (FLayerWithExtensions *)((pFVar10->LayerProperties).layerName + 0x80);
              *puVar5 = *(undefined8 *)(pFVar10->LayerProperties).layerName;
              puVar5[1] = uVar1;
              uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x20);
              uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x28);
              puVar5[2] = uVar2;
              puVar5[3] = uVar3;
              uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x30);
              uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x38);
              puVar5[4] = uVar1;
              puVar5[5] = uVar4;
              uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x40);
              uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x48);
              puVar5[6] = uVar2;
              puVar5[7] = uVar3;
              uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x50);
              uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x58);
              puVar5[8] = uVar1;
              puVar5[9] = uVar4;
              uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x60);
              uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x68);
              puVar5[10] = uVar2;
              puVar5[0xb] = uVar3;
              uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x70);
              uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x78);
              puVar5[0xc] = uVar1;
              puVar5[0xd] = uVar4;
              puVar5[0xe] = uVar2;
              puVar5[0xf] = uVar3;
              lVar15 = lVar15 + -1;
              puVar7 = puVar5 + 0x10;
            } while (lVar15 != 0);
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x88);
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x90);
            lVar15 = 4;
            puVar5[0x10] = *(undefined8 *)(pFVar11->LayerProperties).layerName;
            puVar5[0x11] = uVar2;
            puVar5[0x12] = uVar1;
            pFVar11 = pFVar14;
            pFVar10 = pFVar9;
            do {
              pFVar8 = pFVar10;
              pFVar6 = pFVar11;
              pFVar10 = (FLayerWithExtensions *)((pFVar8->LayerProperties).layerName + 0x80);
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 8);
              pFVar11 = (FLayerWithExtensions *)((pFVar6->LayerProperties).layerName + 0x80);
              *(undefined8 *)(pFVar8->LayerProperties).layerName =
                   *(undefined8 *)(pFVar6->LayerProperties).layerName;
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 8) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x18);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x10) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x10);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x18) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x28);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x20) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x20);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x28) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x38);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x30) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x30);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x38) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x48);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x40) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x40);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x48) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x58);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x50) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x50);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x58) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x68);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x60) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x60);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x68) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x78);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x70) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x70);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x78) = uVar1;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x88);
            lVar15 = 4;
            *(undefined8 *)(pFVar10->LayerProperties).layerName =
                 *(undefined8 *)(pFVar11->LayerProperties).layerName;
            *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x88) = uVar1;
            *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x90) =
                 *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x90);
            puVar7 = local_560;
            pFVar11 = pFVar14;
            do {
              pFVar10 = (FLayerWithExtensions *)((pFVar11->LayerProperties).layerName + 0x80);
              uVar1 = puVar7[1];
              uVar2 = puVar7[2];
              uVar3 = puVar7[3];
              puVar5 = puVar7 + 0x10;
              *(undefined8 *)(pFVar11->LayerProperties).layerName = *puVar7;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 8) = uVar1;
              uVar1 = puVar7[4];
              uVar4 = puVar7[5];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x10) = uVar2;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x18) = uVar3;
              uVar2 = puVar7[6];
              uVar3 = puVar7[7];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x20) = uVar1;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x28) = uVar4;
              uVar1 = puVar7[8];
              uVar4 = puVar7[9];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x30) = uVar2;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x38) = uVar3;
              uVar2 = puVar7[10];
              uVar3 = puVar7[0xb];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x40) = uVar1;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x48) = uVar4;
              uVar1 = puVar7[0xc];
              uVar4 = puVar7[0xd];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x50) = uVar2;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x58) = uVar3;
              uVar2 = puVar7[0xe];
              uVar3 = puVar7[0xf];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x60) = uVar1;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x68) = uVar4;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x70) = uVar2;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x78) = uVar3;
              lVar15 = lVar15 + -1;
              puVar7 = puVar5;
              pFVar11 = pFVar10;
            } while (lVar15 != 0);
          } while( true );
        }
        while (pFVar10 = _Str1, pFVar9 = _Str1, _Str1 < pFVar18) {
          while (pFVar14 = pFVar10, pFVar9 = pFVar9 + 1, pFVar9 <= pFVar18) {
            iVar16 = strcmp((char *)pFVar14,(char *)pFVar9);
            pFVar10 = pFVar9;
            if (-1 < iVar16) {
              pFVar10 = pFVar14;
            }
          }
          lVar15 = 4;
          pFVar9 = pFVar14;
          puVar7 = local_560;
          do {
            puVar5 = puVar7;
            pFVar10 = pFVar9;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 8);
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x18);
            pFVar9 = (FLayerWithExtensions *)((pFVar10->LayerProperties).layerName + 0x80);
            *puVar5 = *(undefined8 *)(pFVar10->LayerProperties).layerName;
            puVar5[1] = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x20);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x28);
            puVar5[2] = uVar2;
            puVar5[3] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x30);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x38);
            puVar5[4] = uVar1;
            puVar5[5] = uVar4;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x40);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x48);
            puVar5[6] = uVar2;
            puVar5[7] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x50);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x58);
            puVar5[8] = uVar1;
            puVar5[9] = uVar4;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x60);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x68);
            puVar5[10] = uVar2;
            puVar5[0xb] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x70);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x78);
            puVar5[0xc] = uVar1;
            puVar5[0xd] = uVar4;
            puVar5[0xe] = uVar2;
            puVar5[0xf] = uVar3;
            lVar15 = lVar15 + -1;
            puVar7 = puVar5 + 0x10;
          } while (lVar15 != 0);
          uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x88);
          uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x90);
          puVar5[0x10] = *(undefined8 *)(pFVar9->LayerProperties).layerName;
          puVar5[0x11] = uVar2;
          puVar5[0x12] = uVar1;
          lVar15 = 4;
          pFVar9 = pFVar18;
          do {
            pFVar11 = pFVar14;
            pFVar10 = pFVar9;
            pFVar14 = (FLayerWithExtensions *)((pFVar11->LayerProperties).layerName + 0x80);
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 8);
            pFVar9 = (FLayerWithExtensions *)((pFVar10->LayerProperties).layerName + 0x80);
            *(undefined8 *)(pFVar11->LayerProperties).layerName =
                 *(undefined8 *)(pFVar10->LayerProperties).layerName;
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 8) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x18);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x10) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x18) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x28);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x20) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x20);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x28) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x38);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x30) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x30);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x38) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x48);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x40) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x40);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x48) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x58);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x50) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x50);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x58) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x68);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x60) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x60);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x68) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x78);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x70) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x70);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x78) = uVar1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x88);
          lVar15 = 4;
          *(undefined8 *)(pFVar14->LayerProperties).layerName =
               *(undefined8 *)(pFVar9->LayerProperties).layerName;
          *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x88) = uVar1;
          *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x90) =
               *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x90);
          puVar7 = local_560;
          pFVar9 = pFVar18;
          do {
            pFVar10 = pFVar9;
            puVar5 = puVar7;
            pFVar9 = (FLayerWithExtensions *)((pFVar10->LayerProperties).layerName + 0x80);
            uVar1 = puVar5[1];
            uVar2 = puVar5[2];
            uVar3 = puVar5[3];
            *(undefined8 *)(pFVar10->LayerProperties).layerName = *puVar5;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 8) = uVar1;
            uVar1 = puVar5[4];
            uVar4 = puVar5[5];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10) = uVar2;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x18) = uVar3;
            uVar2 = puVar5[6];
            uVar3 = puVar5[7];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x20) = uVar1;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x28) = uVar4;
            uVar1 = puVar5[8];
            uVar4 = puVar5[9];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x30) = uVar2;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x38) = uVar3;
            uVar2 = puVar5[10];
            uVar3 = puVar5[0xb];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x40) = uVar1;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x48) = uVar4;
            uVar1 = puVar5[0xc];
            uVar4 = puVar5[0xd];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x50) = uVar2;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x58) = uVar3;
            uVar2 = puVar5[0xe];
            uVar3 = puVar5[0xf];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x60) = uVar1;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x68) = uVar4;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x70) = uVar2;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x78) = uVar3;
            lVar15 = lVar15 + -1;
            puVar7 = puVar5 + 0x10;
          } while (lVar15 != 0);
          uVar2 = puVar5[0x11];
          uVar1 = puVar5[0x12];
          *(undefined8 *)(pFVar9->LayerProperties).layerName = puVar5[0x10];
          *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x88) = uVar2;
          *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x90) = uVar1;
          pFVar18 = pFVar18 + -1;
        }
        goto LAB_145afc804;
      }
LAB_145afc7eb:
      HeapSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>_::__l2::<lambda_1>_>_>
                (pFVar9,iVar13,param_3,param_4);
LAB_145afc804:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_348 <= ppFVar17);
  }
  return;
LAB_145afc5e0:
  do {
    puVar5 = puVar7;
    pFVar11 = pFVar6;
    uVar1 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 8);
    uVar2 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x10);
    uVar3 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x18);
    pFVar6 = (FLayerWithExtensions *)((pFVar11->LayerProperties).layerName + 0x80);
    *puVar5 = *(undefined8 *)(pFVar11->LayerProperties).layerName;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x20);
    uVar4 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x28);
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x30);
    uVar3 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x38);
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x40);
    uVar4 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x48);
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x50);
    uVar3 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x58);
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x60);
    uVar4 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x68);
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x70);
    uVar3 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x78);
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar15 = lVar15 + -1;
    puVar7 = puVar5 + 0x10;
  } while (lVar15 != 0);
  uVar2 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x88);
  uVar1 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x90);
  lVar15 = 4;
  puVar5[0x10] = *(undefined8 *)(pFVar6->LayerProperties).layerName;
  puVar5[0x11] = uVar2;
  puVar5[0x12] = uVar1;
  pFVar6 = pFVar14;
  pFVar11 = _Str1;
  do {
    pFVar12 = pFVar11;
    pFVar8 = pFVar6;
    pFVar11 = (FLayerWithExtensions *)((pFVar12->LayerProperties).layerName + 0x80);
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 8);
    pFVar6 = (FLayerWithExtensions *)((pFVar8->LayerProperties).layerName + 0x80);
    *(undefined8 *)(pFVar12->LayerProperties).layerName =
         *(undefined8 *)(pFVar8->LayerProperties).layerName;
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 8) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x18);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x10) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x10);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x18) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x28);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x20) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x20);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x38);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x30) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x30);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x48);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x40) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x40);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x58);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x50) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x50);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x58) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x68);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x60) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x60);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x68) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x78);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x70) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x70);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x78) = uVar1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x88);
  lVar15 = 4;
  *(undefined8 *)(pFVar11->LayerProperties).layerName =
       *(undefined8 *)(pFVar6->LayerProperties).layerName;
  *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x88) = uVar1;
  *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x90) =
       *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x90);
  puVar7 = local_560;
  pFVar11 = pFVar14;
  do {
    pFVar6 = pFVar11;
    puVar5 = puVar7;
    pFVar11 = (FLayerWithExtensions *)((pFVar6->LayerProperties).layerName + 0x80);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined8 *)(pFVar6->LayerProperties).layerName = *puVar5;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 8) = uVar1;
    uVar1 = puVar5[4];
    uVar4 = puVar5[5];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x10) = uVar2;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x18) = uVar3;
    uVar2 = puVar5[6];
    uVar3 = puVar5[7];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x20) = uVar1;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x28) = uVar4;
    uVar1 = puVar5[8];
    uVar4 = puVar5[9];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x30) = uVar2;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x38) = uVar3;
    uVar2 = puVar5[10];
    uVar3 = puVar5[0xb];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x40) = uVar1;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x48) = uVar4;
    uVar1 = puVar5[0xc];
    uVar4 = puVar5[0xd];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x50) = uVar2;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x58) = uVar3;
    uVar2 = puVar5[0xe];
    uVar3 = puVar5[0xf];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x60) = uVar1;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x68) = uVar4;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x70) = uVar2;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x78) = uVar3;
    lVar15 = lVar15 + -1;
    puVar7 = puVar5 + 0x10;
  } while (lVar15 != 0);
  uVar2 = puVar5[0x11];
  uVar1 = puVar5[0x12];
  iVar16 = iVar16 + -1;
  *(undefined8 *)(pFVar11->LayerProperties).layerName = puVar5[0x10];
  *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x88) = uVar2;
  *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x90) = uVar1;
  if (((longlong)pFVar14 + (-0x218 - (longlong)_Str1)) / 0x218 <
      ((longlong)pFVar18 - (longlong)pFVar9) / 0x218) {
    if (pFVar9 < pFVar18) {
      *ppFVar17 = pFVar9;
      ppFVar17[1] = pFVar18;
      *(int *)(ppFVar17 + 2) = iVar16;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar14 <= _Str1 + 1) goto LAB_145afc804;
    pFVar18 = pFVar10 + -2;
    pFVar9 = _Str1;
  }
  else {
    if (_Str1 + 1 < pFVar14) {
      *ppFVar17 = _Str1;
      ppFVar17[1] = pFVar10 + -2;
      *(int *)(ppFVar17 + 2) = iVar16;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar18 <= pFVar9) goto LAB_145afc804;
  }
  iVar13 = (int)(((longlong)pFVar18 - (longlong)pFVar9) / 0x218) + 1;
  _Str1 = pFVar9;
  if (iVar16 == 0) goto LAB_145afc7eb;
  goto LAB_145afc2c0;
}

// IntroSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,`SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>'::__l2::<lambda_1>_>_> @ 145afca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>_::__l2::<lambda_1>_>_>
          (FLayerWithExtensions *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLayerWithExtensions,,TArray<char_const_*,TSizedDefaultAllocator<32>_>___cdecl_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>(FVulkanIntanceSetupHelper_&,TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  FLayerWithExtensions *pFVar6;
  undefined8 *puVar7;
  FLayerWithExtensions *pFVar8;
  FLayerWithExtensions *pFVar9;
  FLayerWithExtensions *pFVar10;
  FLayerWithExtensions *pFVar11;
  FLayerWithExtensions *pFVar12;
  int iVar13;
  FLayerWithExtensions *pFVar14;
  longlong lVar15;
  int iVar16;
  FLayerWithExtensions **ppFVar17;
  FLayerWithExtensions *_Str1;
  FLayerWithExtensions *pFVar18;
  float fVar19;
  undefined1 auStack_598 [48];
  FLayerWithExtensions *local_568;
  undefined8 local_560 [67];
  FLayerWithExtensions *local_348;
  FLayerWithExtensions *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_598;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    ppFVar17 = &local_348;
    do {
      pFVar18 = ppFVar17[1];
      pFVar9 = *ppFVar17;
      local_568 = ppFVar17[2];
      iVar13 = (int)(((longlong)pFVar18 - (longlong)pFVar9) / 0x218) + 1;
      _Str1 = pFVar9;
      iVar16 = (int)local_568;
      if ((int)local_568 != 0) {
LAB_145afcb10:
        if (8 < iVar13) {
          lVar15 = 4;
          pFVar9 = _Str1 + iVar13 / 2;
          puVar7 = local_560;
          do {
            puVar5 = puVar7;
            pFVar10 = pFVar9;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 8);
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x18);
            pFVar9 = (FLayerWithExtensions *)((pFVar10->LayerProperties).layerName + 0x80);
            *puVar5 = *(undefined8 *)(pFVar10->LayerProperties).layerName;
            puVar5[1] = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x20);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x28);
            puVar5[2] = uVar2;
            puVar5[3] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x30);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x38);
            puVar5[4] = uVar1;
            puVar5[5] = uVar4;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x40);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x48);
            puVar5[6] = uVar2;
            puVar5[7] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x50);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x58);
            puVar5[8] = uVar1;
            puVar5[9] = uVar4;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x60);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x68);
            puVar5[10] = uVar2;
            puVar5[0xb] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x70);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x78);
            puVar5[0xc] = uVar1;
            puVar5[0xd] = uVar4;
            puVar5[0xe] = uVar2;
            puVar5[0xf] = uVar3;
            lVar15 = lVar15 + -1;
            puVar7 = puVar5 + 0x10;
          } while (lVar15 != 0);
          uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x88);
          uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x90);
          puVar5[0x10] = *(undefined8 *)(pFVar9->LayerProperties).layerName;
          puVar5[0x11] = uVar2;
          puVar5[0x12] = uVar1;
          lVar15 = 4;
          pFVar10 = _Str1;
          pFVar9 = _Str1 + iVar13 / 2;
          do {
            pFVar11 = pFVar9;
            pFVar14 = pFVar10;
            pFVar9 = (FLayerWithExtensions *)((pFVar11->LayerProperties).layerName + 0x80);
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 8);
            pFVar10 = (FLayerWithExtensions *)((pFVar14->LayerProperties).layerName + 0x80);
            *(undefined8 *)(pFVar11->LayerProperties).layerName =
                 *(undefined8 *)(pFVar14->LayerProperties).layerName;
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 8) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x18);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x10) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x10);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x18) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x28);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x20) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x20);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x28) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x38);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x30) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x30);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x38) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x48);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x40) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x40);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x48) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x58);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x50) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x50);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x58) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x68);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x60) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x60);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x68) = uVar1;
            uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x78);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x70) =
                 *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x70);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x78) = uVar1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          uVar1 = *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x88);
          *(undefined8 *)(pFVar9->LayerProperties).layerName =
               *(undefined8 *)(pFVar10->LayerProperties).layerName;
          *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x88) = uVar1;
          *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x90) =
               *(undefined8 *)((pFVar14->LayerProperties).layerName + 0x90);
          lVar15 = 4;
          puVar7 = local_560;
          pFVar9 = _Str1;
          do {
            pFVar10 = (FLayerWithExtensions *)((pFVar9->LayerProperties).layerName + 0x80);
            uVar1 = puVar7[1];
            uVar2 = puVar7[2];
            uVar3 = puVar7[3];
            puVar5 = puVar7 + 0x10;
            *(undefined8 *)(pFVar9->LayerProperties).layerName = *puVar7;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 8) = uVar1;
            uVar1 = puVar7[4];
            uVar4 = puVar7[5];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x10) = uVar2;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x18) = uVar3;
            uVar2 = puVar7[6];
            uVar3 = puVar7[7];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x20) = uVar1;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x28) = uVar4;
            uVar1 = puVar7[8];
            uVar4 = puVar7[9];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x30) = uVar2;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x38) = uVar3;
            uVar2 = puVar7[10];
            uVar3 = puVar7[0xb];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x40) = uVar1;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x48) = uVar4;
            uVar1 = puVar7[0xc];
            uVar4 = puVar7[0xd];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x50) = uVar2;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x58) = uVar3;
            uVar2 = puVar7[0xe];
            uVar3 = puVar7[0xf];
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x60) = uVar1;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x68) = uVar4;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x70) = uVar2;
            *(undefined8 *)((pFVar9->LayerProperties).layerName + 0x78) = uVar3;
            lVar15 = lVar15 + -1;
            puVar7 = puVar5;
            pFVar9 = pFVar10;
          } while (lVar15 != 0);
          pFVar14 = pFVar18 + 1;
          pFVar9 = _Str1;
          do {
            uVar2 = puVar5[1];
            uVar1 = puVar5[2];
            *(undefined8 *)(pFVar10->LayerProperties).layerName = *puVar5;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 8) = uVar2;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10) = uVar1;
            do {
              pFVar9 = pFVar9 + 1;
              if (pFVar18 < pFVar9) break;
              iVar13 = strcmp((char *)_Str1,(char *)pFVar9);
            } while (-1 < iVar13);
            do {
              pFVar10 = pFVar14;
              pFVar14 = pFVar10 + -1;
              if (pFVar14 <= _Str1) break;
              iVar13 = strcmp((char *)pFVar14,(char *)_Str1);
            } while (-1 < iVar13);
            lVar15 = 4;
            pFVar6 = _Str1;
            pFVar11 = pFVar9;
            puVar7 = local_560;
            if (pFVar14 < pFVar9) goto LAB_145afce30;
            do {
              puVar5 = puVar7;
              pFVar10 = pFVar11;
              uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 8);
              uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10);
              uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x18);
              pFVar11 = (FLayerWithExtensions *)((pFVar10->LayerProperties).layerName + 0x80);
              *puVar5 = *(undefined8 *)(pFVar10->LayerProperties).layerName;
              puVar5[1] = uVar1;
              uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x20);
              uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x28);
              puVar5[2] = uVar2;
              puVar5[3] = uVar3;
              uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x30);
              uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x38);
              puVar5[4] = uVar1;
              puVar5[5] = uVar4;
              uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x40);
              uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x48);
              puVar5[6] = uVar2;
              puVar5[7] = uVar3;
              uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x50);
              uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x58);
              puVar5[8] = uVar1;
              puVar5[9] = uVar4;
              uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x60);
              uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x68);
              puVar5[10] = uVar2;
              puVar5[0xb] = uVar3;
              uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x70);
              uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x78);
              puVar5[0xc] = uVar1;
              puVar5[0xd] = uVar4;
              puVar5[0xe] = uVar2;
              puVar5[0xf] = uVar3;
              lVar15 = lVar15 + -1;
              puVar7 = puVar5 + 0x10;
            } while (lVar15 != 0);
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x88);
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x90);
            lVar15 = 4;
            puVar5[0x10] = *(undefined8 *)(pFVar11->LayerProperties).layerName;
            puVar5[0x11] = uVar2;
            puVar5[0x12] = uVar1;
            pFVar11 = pFVar14;
            pFVar10 = pFVar9;
            do {
              pFVar8 = pFVar10;
              pFVar6 = pFVar11;
              pFVar10 = (FLayerWithExtensions *)((pFVar8->LayerProperties).layerName + 0x80);
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 8);
              pFVar11 = (FLayerWithExtensions *)((pFVar6->LayerProperties).layerName + 0x80);
              *(undefined8 *)(pFVar8->LayerProperties).layerName =
                   *(undefined8 *)(pFVar6->LayerProperties).layerName;
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 8) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x18);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x10) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x10);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x18) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x28);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x20) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x20);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x28) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x38);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x30) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x30);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x38) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x48);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x40) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x40);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x48) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x58);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x50) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x50);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x58) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x68);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x60) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x60);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x68) = uVar1;
              uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x78);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x70) =
                   *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x70);
              *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x78) = uVar1;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            uVar1 = *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x88);
            lVar15 = 4;
            *(undefined8 *)(pFVar10->LayerProperties).layerName =
                 *(undefined8 *)(pFVar11->LayerProperties).layerName;
            *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x88) = uVar1;
            *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x90) =
                 *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x90);
            puVar7 = local_560;
            pFVar11 = pFVar14;
            do {
              pFVar10 = (FLayerWithExtensions *)((pFVar11->LayerProperties).layerName + 0x80);
              uVar1 = puVar7[1];
              uVar2 = puVar7[2];
              uVar3 = puVar7[3];
              puVar5 = puVar7 + 0x10;
              *(undefined8 *)(pFVar11->LayerProperties).layerName = *puVar7;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 8) = uVar1;
              uVar1 = puVar7[4];
              uVar4 = puVar7[5];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x10) = uVar2;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x18) = uVar3;
              uVar2 = puVar7[6];
              uVar3 = puVar7[7];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x20) = uVar1;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x28) = uVar4;
              uVar1 = puVar7[8];
              uVar4 = puVar7[9];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x30) = uVar2;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x38) = uVar3;
              uVar2 = puVar7[10];
              uVar3 = puVar7[0xb];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x40) = uVar1;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x48) = uVar4;
              uVar1 = puVar7[0xc];
              uVar4 = puVar7[0xd];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x50) = uVar2;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x58) = uVar3;
              uVar2 = puVar7[0xe];
              uVar3 = puVar7[0xf];
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x60) = uVar1;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x68) = uVar4;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x70) = uVar2;
              *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x78) = uVar3;
              lVar15 = lVar15 + -1;
              puVar7 = puVar5;
              pFVar11 = pFVar10;
            } while (lVar15 != 0);
          } while( true );
        }
        while (pFVar10 = _Str1, pFVar9 = _Str1, _Str1 < pFVar18) {
          while (pFVar14 = pFVar10, pFVar9 = pFVar9 + 1, pFVar9 <= pFVar18) {
            iVar16 = strcmp((char *)pFVar14,(char *)pFVar9);
            pFVar10 = pFVar9;
            if (-1 < iVar16) {
              pFVar10 = pFVar14;
            }
          }
          lVar15 = 4;
          pFVar9 = pFVar14;
          puVar7 = local_560;
          do {
            puVar5 = puVar7;
            pFVar10 = pFVar9;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 8);
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x18);
            pFVar9 = (FLayerWithExtensions *)((pFVar10->LayerProperties).layerName + 0x80);
            *puVar5 = *(undefined8 *)(pFVar10->LayerProperties).layerName;
            puVar5[1] = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x20);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x28);
            puVar5[2] = uVar2;
            puVar5[3] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x30);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x38);
            puVar5[4] = uVar1;
            puVar5[5] = uVar4;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x40);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x48);
            puVar5[6] = uVar2;
            puVar5[7] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x50);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x58);
            puVar5[8] = uVar1;
            puVar5[9] = uVar4;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x60);
            uVar4 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x68);
            puVar5[10] = uVar2;
            puVar5[0xb] = uVar3;
            uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x70);
            uVar3 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x78);
            puVar5[0xc] = uVar1;
            puVar5[0xd] = uVar4;
            puVar5[0xe] = uVar2;
            puVar5[0xf] = uVar3;
            lVar15 = lVar15 + -1;
            puVar7 = puVar5 + 0x10;
          } while (lVar15 != 0);
          uVar2 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x88);
          uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x90);
          puVar5[0x10] = *(undefined8 *)(pFVar9->LayerProperties).layerName;
          puVar5[0x11] = uVar2;
          puVar5[0x12] = uVar1;
          lVar15 = 4;
          pFVar9 = pFVar18;
          do {
            pFVar11 = pFVar14;
            pFVar10 = pFVar9;
            pFVar14 = (FLayerWithExtensions *)((pFVar11->LayerProperties).layerName + 0x80);
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 8);
            pFVar9 = (FLayerWithExtensions *)((pFVar10->LayerProperties).layerName + 0x80);
            *(undefined8 *)(pFVar11->LayerProperties).layerName =
                 *(undefined8 *)(pFVar10->LayerProperties).layerName;
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 8) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x18);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x10) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x18) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x28);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x20) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x20);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x28) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x38);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x30) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x30);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x38) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x48);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x40) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x40);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x48) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x58);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x50) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x50);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x58) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x68);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x60) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x60);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x68) = uVar1;
            uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x78);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x70) =
                 *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x70);
            *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x78) = uVar1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          uVar1 = *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x88);
          lVar15 = 4;
          *(undefined8 *)(pFVar14->LayerProperties).layerName =
               *(undefined8 *)(pFVar9->LayerProperties).layerName;
          *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x88) = uVar1;
          *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x90) =
               *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x90);
          puVar7 = local_560;
          pFVar9 = pFVar18;
          do {
            pFVar10 = pFVar9;
            puVar5 = puVar7;
            pFVar9 = (FLayerWithExtensions *)((pFVar10->LayerProperties).layerName + 0x80);
            uVar1 = puVar5[1];
            uVar2 = puVar5[2];
            uVar3 = puVar5[3];
            *(undefined8 *)(pFVar10->LayerProperties).layerName = *puVar5;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 8) = uVar1;
            uVar1 = puVar5[4];
            uVar4 = puVar5[5];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x10) = uVar2;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x18) = uVar3;
            uVar2 = puVar5[6];
            uVar3 = puVar5[7];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x20) = uVar1;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x28) = uVar4;
            uVar1 = puVar5[8];
            uVar4 = puVar5[9];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x30) = uVar2;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x38) = uVar3;
            uVar2 = puVar5[10];
            uVar3 = puVar5[0xb];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x40) = uVar1;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x48) = uVar4;
            uVar1 = puVar5[0xc];
            uVar4 = puVar5[0xd];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x50) = uVar2;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x58) = uVar3;
            uVar2 = puVar5[0xe];
            uVar3 = puVar5[0xf];
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x60) = uVar1;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x68) = uVar4;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x70) = uVar2;
            *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x78) = uVar3;
            lVar15 = lVar15 + -1;
            puVar7 = puVar5 + 0x10;
          } while (lVar15 != 0);
          uVar2 = puVar5[0x11];
          uVar1 = puVar5[0x12];
          *(undefined8 *)(pFVar9->LayerProperties).layerName = puVar5[0x10];
          *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x88) = uVar2;
          *(undefined8 *)((pFVar10->LayerProperties).layerName + 0x90) = uVar1;
          pFVar18 = pFVar18 + -1;
        }
        goto LAB_145afd054;
      }
LAB_145afd03b:
      HeapSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>_::__l2::<lambda_1>_>_>
                (pFVar9,iVar13,param_3,param_4);
LAB_145afd054:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_348 <= ppFVar17);
  }
  return;
LAB_145afce30:
  do {
    puVar5 = puVar7;
    pFVar11 = pFVar6;
    uVar1 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 8);
    uVar2 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x10);
    uVar3 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x18);
    pFVar6 = (FLayerWithExtensions *)((pFVar11->LayerProperties).layerName + 0x80);
    *puVar5 = *(undefined8 *)(pFVar11->LayerProperties).layerName;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x20);
    uVar4 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x28);
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x30);
    uVar3 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x38);
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x40);
    uVar4 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x48);
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x50);
    uVar3 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x58);
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x60);
    uVar4 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x68);
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x70);
    uVar3 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x78);
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar15 = lVar15 + -1;
    puVar7 = puVar5 + 0x10;
  } while (lVar15 != 0);
  uVar2 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x88);
  uVar1 = *(undefined8 *)((pFVar11->LayerProperties).layerName + 0x90);
  lVar15 = 4;
  puVar5[0x10] = *(undefined8 *)(pFVar6->LayerProperties).layerName;
  puVar5[0x11] = uVar2;
  puVar5[0x12] = uVar1;
  pFVar6 = pFVar14;
  pFVar11 = _Str1;
  do {
    pFVar12 = pFVar11;
    pFVar8 = pFVar6;
    pFVar11 = (FLayerWithExtensions *)((pFVar12->LayerProperties).layerName + 0x80);
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 8);
    pFVar6 = (FLayerWithExtensions *)((pFVar8->LayerProperties).layerName + 0x80);
    *(undefined8 *)(pFVar12->LayerProperties).layerName =
         *(undefined8 *)(pFVar8->LayerProperties).layerName;
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 8) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x18);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x10) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x10);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x18) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x28);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x20) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x20);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x38);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x30) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x30);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x48);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x40) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x40);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x58);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x50) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x50);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x58) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x68);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x60) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x60);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x68) = uVar1;
    uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x78);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x70) =
         *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x70);
    *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x78) = uVar1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  uVar1 = *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x88);
  lVar15 = 4;
  *(undefined8 *)(pFVar11->LayerProperties).layerName =
       *(undefined8 *)(pFVar6->LayerProperties).layerName;
  *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x88) = uVar1;
  *(undefined8 *)((pFVar12->LayerProperties).layerName + 0x90) =
       *(undefined8 *)((pFVar8->LayerProperties).layerName + 0x90);
  puVar7 = local_560;
  pFVar11 = pFVar14;
  do {
    pFVar6 = pFVar11;
    puVar5 = puVar7;
    pFVar11 = (FLayerWithExtensions *)((pFVar6->LayerProperties).layerName + 0x80);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined8 *)(pFVar6->LayerProperties).layerName = *puVar5;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 8) = uVar1;
    uVar1 = puVar5[4];
    uVar4 = puVar5[5];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x10) = uVar2;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x18) = uVar3;
    uVar2 = puVar5[6];
    uVar3 = puVar5[7];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x20) = uVar1;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x28) = uVar4;
    uVar1 = puVar5[8];
    uVar4 = puVar5[9];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x30) = uVar2;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x38) = uVar3;
    uVar2 = puVar5[10];
    uVar3 = puVar5[0xb];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x40) = uVar1;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x48) = uVar4;
    uVar1 = puVar5[0xc];
    uVar4 = puVar5[0xd];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x50) = uVar2;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x58) = uVar3;
    uVar2 = puVar5[0xe];
    uVar3 = puVar5[0xf];
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x60) = uVar1;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x68) = uVar4;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x70) = uVar2;
    *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x78) = uVar3;
    lVar15 = lVar15 + -1;
    puVar7 = puVar5 + 0x10;
  } while (lVar15 != 0);
  uVar2 = puVar5[0x11];
  uVar1 = puVar5[0x12];
  iVar16 = iVar16 + -1;
  *(undefined8 *)(pFVar11->LayerProperties).layerName = puVar5[0x10];
  *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x88) = uVar2;
  *(undefined8 *)((pFVar6->LayerProperties).layerName + 0x90) = uVar1;
  if (((longlong)pFVar14 + (-0x218 - (longlong)_Str1)) / 0x218 <
      ((longlong)pFVar18 - (longlong)pFVar9) / 0x218) {
    if (pFVar9 < pFVar18) {
      *ppFVar17 = pFVar9;
      ppFVar17[1] = pFVar18;
      *(int *)(ppFVar17 + 2) = iVar16;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar14 <= _Str1 + 1) goto LAB_145afd054;
    pFVar18 = pFVar10 + -2;
    pFVar9 = _Str1;
  }
  else {
    if (_Str1 + 1 < pFVar14) {
      *ppFVar17 = _Str1;
      ppFVar17[1] = pFVar10 + -2;
      *(int *)(ppFVar17 + 2) = iVar16;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar18 <= pFVar9) goto LAB_145afd054;
  }
  iVar13 = (int)(((longlong)pFVar18 - (longlong)pFVar9) / 0x218) + 1;
  _Str1 = pFVar9;
  if (iVar16 == 0) goto LAB_145afd03b;
  goto LAB_145afcb10;
}

// IntroSortInternal<`VulkanRHI::FVulkanResourceHeap::DefragTick'::__l14::FPotentialDefragMove,int,FIdentityFunctor,TDereferenceWrapper<`VulkanRHI::FVulkanResourceHeap::DefragTick'::__l14::FPotentialDefragMove,`VulkanRHI::FVulkanResourceHeap::DefragTick'::__l34::<lambda_1>_>_> @ 145afd270

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
AlgoImpl::
IntroSortInternal<_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l14::FPotentialDefragMove,int,FIdentityFunctor,TDereferenceWrapper<_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l14::FPotentialDefragMove,_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l34::<lambda_1>_>_>
          (FPotentialDefragMove *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_VulkanRHI::FVulkanResourceHeap::DefragTick(FVulkanDevice_&,FVulkanContextArray_const_&,unsigned_int)_::_14_::FPotentialDefragMove,_public:_void___cdecl_VulkanRHI::FVulkanResourceHeap::DefragTick(FVulkanDevice_&,FVulkanContextArray_const_&,unsigned_int)_::_34_::<lambda_1>_>
          param_4)

{
  FPotentialDefragMove *pFVar1;
  FVulkanSubresourceAllocator *pFVar2;
  ulong64 uVar3;
  FVulkanSubresourceAllocator *pFVar4;
  int iVar5;
  FPotentialDefragMove *pFVar6;
  FPotentialDefragMove **ppFVar7;
  FPotentialDefragMove *pFVar8;
  FPotentialDefragMove *pFVar9;
  FPotentialDefragMove *pFVar10;
  FPotentialDefragMove *pFVar11;
  FPotentialDefragMove *pFVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  FPotentialDefragMove *local_338;
  FPotentialDefragMove *local_328;
  FPotentialDefragMove *local_320;
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
    ppFVar7 = &local_328;
    do {
      pFVar10 = ppFVar7[1];
      pFVar12 = *ppFVar7;
      pFVar1 = ppFVar7[2];
      iVar5 = (int)((longlong)pFVar10 - (longlong)pFVar12 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar11 = pFVar12;
      if ((int)local_338 != 0) {
LAB_145afd320:
        if (8 < iVar5) {
          pFVar2 = pFVar11->Allocator;
          pFVar8 = pFVar10 + 1;
          uVar3 = pFVar11[iVar5 / 2].Key;
          pFVar4 = pFVar11[iVar5 / 2].Allocator;
          pFVar11[iVar5 / 2].Key = pFVar11->Key;
          pFVar11[iVar5 / 2].Allocator = pFVar2;
          pFVar11->Key = uVar3;
          pFVar11->Allocator = pFVar4;
          pFVar12 = pFVar11;
LAB_145afd350:
          pFVar6 = pFVar12;
          pFVar12 = pFVar6 + 1;
          if (pFVar12 <= pFVar10) goto code_r0x000145afd359;
          goto LAB_145afd361;
        }
        for (; pFVar12 = pFVar11, pFVar1 = pFVar11, pFVar11 < pFVar10; pFVar10 = pFVar10 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar10) {
            if (pFVar12->Key < pFVar1->Key) {
              pFVar12 = pFVar1;
            }
          }
          uVar3 = pFVar12->Key;
          pFVar2 = pFVar12->Allocator;
          pFVar4 = pFVar10->Allocator;
          pFVar12->Key = pFVar10->Key;
          pFVar12->Allocator = pFVar4;
          pFVar10->Key = uVar3;
          pFVar10->Allocator = pFVar2;
        }
        goto LAB_145afd420;
      }
LAB_145afd40f:
      local_338 = pFVar1;
      HeapSortInternal<_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l14::FPotentialDefragMove,int,FIdentityFunctor,TDereferenceWrapper<_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l14::FPotentialDefragMove,_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l34::<lambda_1>_>_>
                (pFVar12,iVar5,param_3,param_4);
LAB_145afd420:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_328 <= ppFVar7);
  }
  return;
code_r0x000145afd359:
  if (pFVar12->Key <= pFVar11->Key) goto LAB_145afd350;
LAB_145afd361:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar11) break;
  } while (pFVar11->Key <= pFVar8->Key);
  pFVar2 = pFVar9[-1].Allocator;
  if (pFVar12 <= pFVar8) {
    uVar3 = pFVar12->Key;
    pFVar4 = pFVar6[1].Allocator;
    pFVar12->Key = pFVar8->Key;
    pFVar6[1].Allocator = pFVar2;
    pFVar8->Key = uVar3;
    pFVar9[-1].Allocator = pFVar4;
    goto LAB_145afd350;
  }
  uVar3 = pFVar11->Key;
  pFVar4 = pFVar11->Allocator;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar11->Key = pFVar8->Key;
  pFVar11->Allocator = pFVar2;
  pFVar8->Key = uVar3;
  pFVar9[-1].Allocator = pFVar4;
  if ((longlong)((longlong)pFVar8 + (-0x10 - (longlong)pFVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar10 - (longlong)pFVar12 & 0xfffffffffffffff0U)) {
    if (pFVar12 < pFVar10) {
      *ppFVar7 = pFVar12;
      ppFVar7[1] = pFVar10;
      *(int *)(ppFVar7 + 2) = (int)local_338;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar8 <= pFVar11 + 1) goto LAB_145afd420;
    pFVar10 = pFVar9 + -2;
    pFVar12 = pFVar11;
  }
  else {
    if (pFVar11 + 1 < pFVar8) {
      *ppFVar7 = pFVar11;
      ppFVar7[1] = pFVar9 + -2;
      *(int *)(ppFVar7 + 2) = (int)local_338;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar10 <= pFVar12) goto LAB_145afd420;
  }
  iVar5 = (int)((longlong)pFVar10 - (longlong)pFVar12 >> 4) + 1;
  pFVar11 = pFVar12;
  if ((int)local_338 == 0) goto LAB_145afd40f;
  goto LAB_145afd320;
}

// IntroSortInternal<VulkanRHI::`anonymous_namespace'::SDumpHeapEntry,int,FIdentityFunctor,TDereferenceWrapper<VulkanRHI::`anonymous_namespace'::SDumpHeapEntry,`VulkanRHI::FVulkanSubresourceAllocator::DumpFullHeap'::__l2::<lambda_1>_>_> @ 145afd4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<VulkanRHI::_anonymous_namespace_::SDumpHeapEntry,int,FIdentityFunctor,TDereferenceWrapper<VulkanRHI::_anonymous_namespace_::SDumpHeapEntry,_VulkanRHI::FVulkanSubresourceAllocator::DumpFullHeap_::__l2::<lambda_1>_>_>
          (SDumpHeapEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<VulkanRHI::_anonymous_namespace_::SDumpHeapEntry,_protected:_void___cdecl_VulkanRHI::FVulkanSubresourceAllocator::DumpFullHeap(void)_::_2_::<lambda_1>_>
          param_4)

{
  SDumpHeapEntry *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  SDumpHeapEntry *pSVar14;
  SDumpHeapEntry **ppSVar15;
  SDumpHeapEntry *pSVar16;
  SDumpHeapEntry *pSVar17;
  SDumpHeapEntry *pSVar18;
  SDumpHeapEntry *pSVar19;
  SDumpHeapEntry *pSVar20;
  float fVar21;
  undefined1 auStack_368 [48];
  SDumpHeapEntry *local_338;
  SDumpHeapEntry *local_328;
  SDumpHeapEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar21;
    memset(local_310,0,0x2e8);
    ppSVar15 = &local_328;
    do {
      pSVar18 = ppSVar15[1];
      pSVar20 = *ppSVar15;
      pSVar1 = ppSVar15[2];
      iVar13 = (int)((longlong)pSVar18 - (longlong)pSVar20 >> 4) + 1;
      local_338._0_4_ = (int)pSVar1;
      pSVar19 = pSVar20;
      if ((int)local_338 != 0) {
LAB_145afd560:
        if (8 < iVar13) {
          uVar6 = pSVar19->Size;
          iVar7 = pSVar19->FreeListIndex;
          iVar8 = pSVar19->InternalIndex;
          pSVar16 = pSVar18 + 1;
          pSVar20 = pSVar19 + iVar13 / 2;
          uVar9 = pSVar20->Offset;
          uVar10 = pSVar20->Size;
          iVar11 = pSVar20->FreeListIndex;
          iVar12 = pSVar20->InternalIndex;
          pSVar20 = pSVar19 + iVar13 / 2;
          pSVar20->Offset = pSVar19->Offset;
          pSVar20->Size = uVar6;
          pSVar20->FreeListIndex = iVar7;
          pSVar20->InternalIndex = iVar8;
          pSVar19->Offset = uVar9;
          pSVar19->Size = uVar10;
          pSVar19->FreeListIndex = iVar11;
          pSVar19->InternalIndex = iVar12;
          pSVar20 = pSVar19;
LAB_145afd590:
          pSVar14 = pSVar20;
          pSVar20 = pSVar14 + 1;
          if (pSVar20 <= pSVar18) goto code_r0x000145afd599;
          goto LAB_145afd5a0;
        }
        for (; pSVar20 = pSVar19, pSVar1 = pSVar19, pSVar19 < pSVar18; pSVar18 = pSVar18 + -1) {
          while (pSVar1 = pSVar1 + 1, pSVar1 <= pSVar18) {
            if (pSVar20->Offset < pSVar1->Offset) {
              pSVar20 = pSVar1;
            }
          }
          uVar9 = pSVar20->Offset;
          uVar10 = pSVar20->Size;
          iVar8 = pSVar20->FreeListIndex;
          iVar11 = pSVar20->InternalIndex;
          uVar6 = pSVar18->Size;
          iVar13 = pSVar18->FreeListIndex;
          iVar7 = pSVar18->InternalIndex;
          pSVar20->Offset = pSVar18->Offset;
          pSVar20->Size = uVar6;
          pSVar20->FreeListIndex = iVar13;
          pSVar20->InternalIndex = iVar7;
          pSVar18->Offset = uVar9;
          pSVar18->Size = uVar10;
          pSVar18->FreeListIndex = iVar8;
          pSVar18->InternalIndex = iVar11;
        }
        goto LAB_145afd65f;
      }
LAB_145afd64e:
      local_338 = pSVar1;
      HeapSortInternal<VulkanRHI::_anonymous_namespace_::SDumpHeapEntry,int,FIdentityFunctor,TDereferenceWrapper<VulkanRHI::_anonymous_namespace_::SDumpHeapEntry,_VulkanRHI::FVulkanSubresourceAllocator::DumpFullHeap_::__l2::<lambda_1>_>_>
                (pSVar20,iVar13,param_3,param_4);
LAB_145afd65f:
      ppSVar15 = ppSVar15 + -3;
    } while (&local_328 <= ppSVar15);
  }
  return;
code_r0x000145afd599:
  if (pSVar20->Offset <= pSVar19->Offset) goto LAB_145afd590;
LAB_145afd5a0:
  do {
    pSVar17 = pSVar16;
    pSVar16 = pSVar17 + -1;
    if (pSVar16 <= pSVar19) break;
  } while (pSVar19->Offset <= pSVar16->Offset);
  uVar2 = pSVar16->Offset;
  uVar3 = pSVar16->Size;
  uVar4 = pSVar17[-1].FreeListIndex;
  uVar5 = pSVar17[-1].InternalIndex;
  if (pSVar20 <= pSVar16) {
    uVar6 = pSVar20->Offset;
    uVar9 = pSVar20->Size;
    iVar13 = pSVar14[1].FreeListIndex;
    iVar7 = pSVar14[1].InternalIndex;
    pSVar20->Offset = uVar2;
    pSVar20->Size = uVar3;
    pSVar14[1].FreeListIndex = uVar4;
    pSVar14[1].InternalIndex = uVar5;
    pSVar16->Offset = uVar6;
    pSVar16->Size = uVar9;
    pSVar17[-1].FreeListIndex = iVar13;
    pSVar17[-1].InternalIndex = iVar7;
    goto LAB_145afd590;
  }
  uVar6 = pSVar19->Offset;
  uVar9 = pSVar19->Size;
  iVar13 = pSVar19->FreeListIndex;
  iVar7 = pSVar19->InternalIndex;
  local_338._0_4_ = (int)local_338 + -1;
  pSVar19->Offset = uVar2;
  pSVar19->Size = uVar3;
  pSVar19->FreeListIndex = uVar4;
  pSVar19->InternalIndex = uVar5;
  pSVar16->Offset = uVar6;
  pSVar16->Size = uVar9;
  pSVar17[-1].FreeListIndex = iVar13;
  pSVar17[-1].InternalIndex = iVar7;
  if ((longlong)((longlong)pSVar16 + (-0x10 - (longlong)pSVar19) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pSVar18 - (longlong)pSVar20 & 0xfffffffffffffff0U)) {
    if (pSVar20 < pSVar18) {
      *ppSVar15 = pSVar20;
      ppSVar15[1] = pSVar18;
      *(int *)(ppSVar15 + 2) = (int)local_338;
      ppSVar15 = ppSVar15 + 3;
    }
    if (pSVar16 <= pSVar19 + 1) goto LAB_145afd65f;
    pSVar18 = pSVar17 + -2;
    pSVar20 = pSVar19;
  }
  else {
    if (pSVar19 + 1 < pSVar16) {
      *ppSVar15 = pSVar19;
      ppSVar15[1] = pSVar17 + -2;
      *(int *)(ppSVar15 + 2) = (int)local_338;
      ppSVar15 = ppSVar15 + 3;
    }
    if (pSVar18 <= pSVar20) goto LAB_145afd65f;
  }
  iVar13 = (int)((longlong)pSVar18 - (longlong)pSVar20 >> 4) + 1;
  pSVar19 = pSVar20;
  if ((int)local_338 == 0) goto LAB_145afd64e;
  goto LAB_145afd560;
}

// IntroSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,`FVulkanDeviceExtension::GetDriverSupportedDeviceExtensions'::__l2::<lambda_1>_>_> @ 145afd6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,_FVulkanDeviceExtension::GetDriverSupportedDeviceExtensions_::__l2::<lambda_1>_>_>
          (VkExtensionProperties *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<VkExtensionProperties,_public:_static_class_TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_>___cdecl_FVulkanDeviceExtension::GetDriverSupportedDeviceExtensions(VkPhysicalDevice_T_*,char_const_*)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  VkExtensionProperties *pVVar8;
  VkExtensionProperties *pVVar9;
  VkExtensionProperties *pVVar10;
  undefined8 *puVar11;
  VkExtensionProperties *pVVar12;
  int iVar13;
  VkExtensionProperties *pVVar14;
  longlong lVar15;
  int iVar16;
  VkExtensionProperties **ppVVar17;
  VkExtensionProperties *_Str1;
  VkExtensionProperties *pVVar18;
  float fVar19;
  undefined1 auStack_488 [48];
  VkExtensionProperties *local_458;
  undefined8 local_450 [33];
  VkExtensionProperties *local_348;
  VkExtensionProperties *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_488;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    ppVVar17 = &local_348;
    do {
      pVVar18 = ppVVar17[1];
      pVVar12 = *ppVVar17;
      local_458 = ppVVar17[2];
      iVar13 = (int)(((longlong)pVVar18 - (longlong)pVVar12) / 0x104) + 1;
      _Str1 = pVVar12;
      iVar16 = (int)local_458;
      if ((int)local_458 != 0) {
LAB_145afd7e0:
        if (8 < iVar13) {
          lVar15 = 2;
          pVVar12 = _Str1 + iVar13 / 2;
          puVar11 = local_450;
          do {
            puVar7 = puVar11 + 0x10;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 8);
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x10);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x18);
            pcVar5 = pVVar12->extensionName;
            *puVar11 = *(undefined8 *)pVVar12->extensionName;
            puVar11[1] = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x20);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x28);
            puVar11[2] = uVar2;
            puVar11[3] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x30);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x38);
            puVar11[4] = uVar1;
            puVar11[5] = uVar4;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x40);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x48);
            puVar11[6] = uVar2;
            puVar11[7] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x50);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x58);
            puVar11[8] = uVar1;
            puVar11[9] = uVar4;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x60);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x68);
            puVar11[10] = uVar2;
            puVar11[0xb] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x70);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x78);
            puVar11[0xc] = uVar1;
            puVar11[0xd] = uVar4;
            puVar11[0xe] = uVar2;
            puVar11[0xf] = uVar3;
            lVar15 = lVar15 + -1;
            pVVar12 = (VkExtensionProperties *)(pcVar5 + 0x80);
            puVar11 = puVar7;
          } while (lVar15 != 0);
          *(undefined4 *)puVar7 =
               *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName;
          lVar15 = 2;
          pVVar12 = _Str1;
          pVVar9 = _Str1 + iVar13 / 2;
          do {
            pcVar5 = pVVar9->extensionName;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 8);
            pcVar6 = pVVar12->extensionName;
            *(undefined8 *)pVVar9->extensionName = *(undefined8 *)pVVar12->extensionName;
            *(undefined8 *)(pVVar9->extensionName + 8) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x18);
            *(undefined8 *)(pVVar9->extensionName + 0x10) =
                 *(undefined8 *)(pVVar12->extensionName + 0x10);
            *(undefined8 *)(pVVar9->extensionName + 0x18) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x28);
            *(undefined8 *)(pVVar9->extensionName + 0x20) =
                 *(undefined8 *)(pVVar12->extensionName + 0x20);
            *(undefined8 *)(pVVar9->extensionName + 0x28) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x38);
            *(undefined8 *)(pVVar9->extensionName + 0x30) =
                 *(undefined8 *)(pVVar12->extensionName + 0x30);
            *(undefined8 *)(pVVar9->extensionName + 0x38) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x48);
            *(undefined8 *)(pVVar9->extensionName + 0x40) =
                 *(undefined8 *)(pVVar12->extensionName + 0x40);
            *(undefined8 *)(pVVar9->extensionName + 0x48) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x58);
            *(undefined8 *)(pVVar9->extensionName + 0x50) =
                 *(undefined8 *)(pVVar12->extensionName + 0x50);
            *(undefined8 *)(pVVar9->extensionName + 0x58) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x68);
            *(undefined8 *)(pVVar9->extensionName + 0x60) =
                 *(undefined8 *)(pVVar12->extensionName + 0x60);
            *(undefined8 *)(pVVar9->extensionName + 0x68) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x78);
            *(undefined8 *)(pVVar9->extensionName + 0x70) =
                 *(undefined8 *)(pVVar12->extensionName + 0x70);
            *(undefined8 *)(pVVar9->extensionName + 0x78) = uVar1;
            lVar15 = lVar15 + -1;
            pVVar12 = (VkExtensionProperties *)(pcVar6 + 0x80);
            pVVar9 = (VkExtensionProperties *)(pcVar5 + 0x80);
          } while (lVar15 != 0);
          *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName =
               *(undefined4 *)((VkExtensionProperties *)(pcVar6 + 0x80))->extensionName;
          lVar15 = 2;
          puVar11 = local_450;
          pVVar12 = _Str1;
          do {
            pVVar9 = (VkExtensionProperties *)(pVVar12->extensionName + 0x80);
            uVar1 = puVar11[1];
            uVar2 = puVar11[2];
            uVar3 = puVar11[3];
            puVar7 = puVar11 + 0x10;
            *(undefined8 *)pVVar12->extensionName = *puVar11;
            *(undefined8 *)(pVVar12->extensionName + 8) = uVar1;
            uVar1 = puVar11[4];
            uVar4 = puVar11[5];
            *(undefined8 *)(pVVar12->extensionName + 0x10) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x18) = uVar3;
            uVar2 = puVar11[6];
            uVar3 = puVar11[7];
            *(undefined8 *)(pVVar12->extensionName + 0x20) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x28) = uVar4;
            uVar1 = puVar11[8];
            uVar4 = puVar11[9];
            *(undefined8 *)(pVVar12->extensionName + 0x30) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x38) = uVar3;
            uVar2 = puVar11[10];
            uVar3 = puVar11[0xb];
            *(undefined8 *)(pVVar12->extensionName + 0x40) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x48) = uVar4;
            uVar1 = puVar11[0xc];
            uVar4 = puVar11[0xd];
            *(undefined8 *)(pVVar12->extensionName + 0x50) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x58) = uVar3;
            uVar2 = puVar11[0xe];
            uVar3 = puVar11[0xf];
            *(undefined8 *)(pVVar12->extensionName + 0x60) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x68) = uVar4;
            *(undefined8 *)(pVVar12->extensionName + 0x70) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x78) = uVar3;
            lVar15 = lVar15 + -1;
            puVar11 = puVar7;
            pVVar12 = pVVar9;
          } while (lVar15 != 0);
          pVVar14 = pVVar18 + 1;
          pVVar12 = _Str1;
          do {
            *(undefined4 *)pVVar9->extensionName = *(undefined4 *)puVar7;
            do {
              pVVar12 = pVVar12 + 1;
              if (pVVar18 < pVVar12) break;
              iVar13 = strcmp(_Str1->extensionName,pVVar12->extensionName);
            } while (-1 < iVar13);
            do {
              pVVar9 = pVVar14;
              pVVar14 = pVVar9 + -1;
              if (pVVar14 <= _Str1) break;
              iVar13 = strcmp(pVVar14->extensionName,_Str1->extensionName);
            } while (-1 < iVar13);
            puVar11 = local_450;
            lVar15 = 2;
            pVVar10 = _Str1;
            pVVar8 = pVVar12;
            if (pVVar14 < pVVar12) goto LAB_145afdad0;
            do {
              puVar7 = puVar11 + 0x10;
              uVar1 = *(undefined8 *)(pVVar8->extensionName + 8);
              uVar2 = *(undefined8 *)(pVVar8->extensionName + 0x10);
              uVar3 = *(undefined8 *)(pVVar8->extensionName + 0x18);
              pcVar5 = pVVar8->extensionName;
              *puVar11 = *(undefined8 *)pVVar8->extensionName;
              puVar11[1] = uVar1;
              uVar1 = *(undefined8 *)(pVVar8->extensionName + 0x20);
              uVar4 = *(undefined8 *)(pVVar8->extensionName + 0x28);
              puVar11[2] = uVar2;
              puVar11[3] = uVar3;
              uVar2 = *(undefined8 *)(pVVar8->extensionName + 0x30);
              uVar3 = *(undefined8 *)(pVVar8->extensionName + 0x38);
              puVar11[4] = uVar1;
              puVar11[5] = uVar4;
              uVar1 = *(undefined8 *)(pVVar8->extensionName + 0x40);
              uVar4 = *(undefined8 *)(pVVar8->extensionName + 0x48);
              puVar11[6] = uVar2;
              puVar11[7] = uVar3;
              uVar2 = *(undefined8 *)(pVVar8->extensionName + 0x50);
              uVar3 = *(undefined8 *)(pVVar8->extensionName + 0x58);
              puVar11[8] = uVar1;
              puVar11[9] = uVar4;
              uVar1 = *(undefined8 *)(pVVar8->extensionName + 0x60);
              uVar4 = *(undefined8 *)(pVVar8->extensionName + 0x68);
              puVar11[10] = uVar2;
              puVar11[0xb] = uVar3;
              uVar2 = *(undefined8 *)(pVVar8->extensionName + 0x70);
              uVar3 = *(undefined8 *)(pVVar8->extensionName + 0x78);
              puVar11[0xc] = uVar1;
              puVar11[0xd] = uVar4;
              puVar11[0xe] = uVar2;
              puVar11[0xf] = uVar3;
              lVar15 = lVar15 + -1;
              pVVar8 = (VkExtensionProperties *)(pcVar5 + 0x80);
              puVar11 = puVar7;
            } while (lVar15 != 0);
            lVar15 = 2;
            *(undefined4 *)puVar7 =
                 *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName;
            pVVar9 = pVVar14;
            pVVar10 = pVVar12;
            do {
              pcVar5 = pVVar10->extensionName;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 8);
              pcVar6 = pVVar9->extensionName;
              *(undefined8 *)pVVar10->extensionName = *(undefined8 *)pVVar9->extensionName;
              *(undefined8 *)(pVVar10->extensionName + 8) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x18);
              *(undefined8 *)(pVVar10->extensionName + 0x10) =
                   *(undefined8 *)(pVVar9->extensionName + 0x10);
              *(undefined8 *)(pVVar10->extensionName + 0x18) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x28);
              *(undefined8 *)(pVVar10->extensionName + 0x20) =
                   *(undefined8 *)(pVVar9->extensionName + 0x20);
              *(undefined8 *)(pVVar10->extensionName + 0x28) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x38);
              *(undefined8 *)(pVVar10->extensionName + 0x30) =
                   *(undefined8 *)(pVVar9->extensionName + 0x30);
              *(undefined8 *)(pVVar10->extensionName + 0x38) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x48);
              *(undefined8 *)(pVVar10->extensionName + 0x40) =
                   *(undefined8 *)(pVVar9->extensionName + 0x40);
              *(undefined8 *)(pVVar10->extensionName + 0x48) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x58);
              *(undefined8 *)(pVVar10->extensionName + 0x50) =
                   *(undefined8 *)(pVVar9->extensionName + 0x50);
              *(undefined8 *)(pVVar10->extensionName + 0x58) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x68);
              *(undefined8 *)(pVVar10->extensionName + 0x60) =
                   *(undefined8 *)(pVVar9->extensionName + 0x60);
              *(undefined8 *)(pVVar10->extensionName + 0x68) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x78);
              *(undefined8 *)(pVVar10->extensionName + 0x70) =
                   *(undefined8 *)(pVVar9->extensionName + 0x70);
              *(undefined8 *)(pVVar10->extensionName + 0x78) = uVar1;
              lVar15 = lVar15 + -1;
              pVVar9 = (VkExtensionProperties *)(pcVar6 + 0x80);
              pVVar10 = (VkExtensionProperties *)(pcVar5 + 0x80);
            } while (lVar15 != 0);
            lVar15 = 2;
            *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName =
                 *(undefined4 *)((VkExtensionProperties *)(pcVar6 + 0x80))->extensionName;
            puVar11 = local_450;
            pVVar10 = pVVar14;
            do {
              pVVar9 = (VkExtensionProperties *)(pVVar10->extensionName + 0x80);
              uVar1 = puVar11[1];
              uVar2 = puVar11[2];
              uVar3 = puVar11[3];
              puVar7 = puVar11 + 0x10;
              *(undefined8 *)pVVar10->extensionName = *puVar11;
              *(undefined8 *)(pVVar10->extensionName + 8) = uVar1;
              uVar1 = puVar11[4];
              uVar4 = puVar11[5];
              *(undefined8 *)(pVVar10->extensionName + 0x10) = uVar2;
              *(undefined8 *)(pVVar10->extensionName + 0x18) = uVar3;
              uVar2 = puVar11[6];
              uVar3 = puVar11[7];
              *(undefined8 *)(pVVar10->extensionName + 0x20) = uVar1;
              *(undefined8 *)(pVVar10->extensionName + 0x28) = uVar4;
              uVar1 = puVar11[8];
              uVar4 = puVar11[9];
              *(undefined8 *)(pVVar10->extensionName + 0x30) = uVar2;
              *(undefined8 *)(pVVar10->extensionName + 0x38) = uVar3;
              uVar2 = puVar11[10];
              uVar3 = puVar11[0xb];
              *(undefined8 *)(pVVar10->extensionName + 0x40) = uVar1;
              *(undefined8 *)(pVVar10->extensionName + 0x48) = uVar4;
              uVar1 = puVar11[0xc];
              uVar4 = puVar11[0xd];
              *(undefined8 *)(pVVar10->extensionName + 0x50) = uVar2;
              *(undefined8 *)(pVVar10->extensionName + 0x58) = uVar3;
              uVar2 = puVar11[0xe];
              uVar3 = puVar11[0xf];
              *(undefined8 *)(pVVar10->extensionName + 0x60) = uVar1;
              *(undefined8 *)(pVVar10->extensionName + 0x68) = uVar4;
              *(undefined8 *)(pVVar10->extensionName + 0x70) = uVar2;
              *(undefined8 *)(pVVar10->extensionName + 0x78) = uVar3;
              lVar15 = lVar15 + -1;
              puVar11 = puVar7;
              pVVar10 = pVVar9;
            } while (lVar15 != 0);
          } while( true );
        }
        while (pVVar9 = _Str1, pVVar12 = _Str1, _Str1 < pVVar18) {
          while (pVVar14 = pVVar9, pVVar12 = pVVar12 + 1, pVVar12 <= pVVar18) {
            iVar16 = strcmp(pVVar14->extensionName,pVVar12->extensionName);
            pVVar9 = pVVar12;
            if (-1 < iVar16) {
              pVVar9 = pVVar14;
            }
          }
          lVar15 = 2;
          pVVar12 = pVVar14;
          puVar11 = local_450;
          do {
            puVar7 = puVar11 + 0x10;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 8);
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x10);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x18);
            pcVar5 = pVVar12->extensionName;
            *puVar11 = *(undefined8 *)pVVar12->extensionName;
            puVar11[1] = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x20);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x28);
            puVar11[2] = uVar2;
            puVar11[3] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x30);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x38);
            puVar11[4] = uVar1;
            puVar11[5] = uVar4;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x40);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x48);
            puVar11[6] = uVar2;
            puVar11[7] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x50);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x58);
            puVar11[8] = uVar1;
            puVar11[9] = uVar4;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x60);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x68);
            puVar11[10] = uVar2;
            puVar11[0xb] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x70);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x78);
            puVar11[0xc] = uVar1;
            puVar11[0xd] = uVar4;
            puVar11[0xe] = uVar2;
            puVar11[0xf] = uVar3;
            lVar15 = lVar15 + -1;
            pVVar12 = (VkExtensionProperties *)(pcVar5 + 0x80);
            puVar11 = puVar7;
          } while (lVar15 != 0);
          *(undefined4 *)puVar7 =
               *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName;
          lVar15 = 2;
          pVVar12 = pVVar18;
          do {
            pcVar5 = pVVar14->extensionName;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 8);
            pcVar6 = pVVar12->extensionName;
            *(undefined8 *)pVVar14->extensionName = *(undefined8 *)pVVar12->extensionName;
            *(undefined8 *)(pVVar14->extensionName + 8) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x18);
            *(undefined8 *)(pVVar14->extensionName + 0x10) =
                 *(undefined8 *)(pVVar12->extensionName + 0x10);
            *(undefined8 *)(pVVar14->extensionName + 0x18) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x28);
            *(undefined8 *)(pVVar14->extensionName + 0x20) =
                 *(undefined8 *)(pVVar12->extensionName + 0x20);
            *(undefined8 *)(pVVar14->extensionName + 0x28) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x38);
            *(undefined8 *)(pVVar14->extensionName + 0x30) =
                 *(undefined8 *)(pVVar12->extensionName + 0x30);
            *(undefined8 *)(pVVar14->extensionName + 0x38) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x48);
            *(undefined8 *)(pVVar14->extensionName + 0x40) =
                 *(undefined8 *)(pVVar12->extensionName + 0x40);
            *(undefined8 *)(pVVar14->extensionName + 0x48) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x58);
            *(undefined8 *)(pVVar14->extensionName + 0x50) =
                 *(undefined8 *)(pVVar12->extensionName + 0x50);
            *(undefined8 *)(pVVar14->extensionName + 0x58) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x68);
            *(undefined8 *)(pVVar14->extensionName + 0x60) =
                 *(undefined8 *)(pVVar12->extensionName + 0x60);
            *(undefined8 *)(pVVar14->extensionName + 0x68) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x78);
            *(undefined8 *)(pVVar14->extensionName + 0x70) =
                 *(undefined8 *)(pVVar12->extensionName + 0x70);
            *(undefined8 *)(pVVar14->extensionName + 0x78) = uVar1;
            lVar15 = lVar15 + -1;
            pVVar12 = (VkExtensionProperties *)(pcVar6 + 0x80);
            pVVar14 = (VkExtensionProperties *)(pcVar5 + 0x80);
          } while (lVar15 != 0);
          lVar15 = 2;
          *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName =
               *(undefined4 *)((VkExtensionProperties *)(pcVar6 + 0x80))->extensionName;
          puVar11 = local_450;
          pVVar12 = pVVar18;
          do {
            pcVar5 = pVVar12->extensionName;
            uVar1 = puVar11[1];
            uVar2 = puVar11[2];
            uVar3 = puVar11[3];
            puVar7 = puVar11 + 0x10;
            *(undefined8 *)pVVar12->extensionName = *puVar11;
            *(undefined8 *)(pVVar12->extensionName + 8) = uVar1;
            uVar1 = puVar11[4];
            uVar4 = puVar11[5];
            *(undefined8 *)(pVVar12->extensionName + 0x10) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x18) = uVar3;
            uVar2 = puVar11[6];
            uVar3 = puVar11[7];
            *(undefined8 *)(pVVar12->extensionName + 0x20) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x28) = uVar4;
            uVar1 = puVar11[8];
            uVar4 = puVar11[9];
            *(undefined8 *)(pVVar12->extensionName + 0x30) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x38) = uVar3;
            uVar2 = puVar11[10];
            uVar3 = puVar11[0xb];
            *(undefined8 *)(pVVar12->extensionName + 0x40) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x48) = uVar4;
            uVar1 = puVar11[0xc];
            uVar4 = puVar11[0xd];
            *(undefined8 *)(pVVar12->extensionName + 0x50) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x58) = uVar3;
            uVar2 = puVar11[0xe];
            uVar3 = puVar11[0xf];
            *(undefined8 *)(pVVar12->extensionName + 0x60) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x68) = uVar4;
            *(undefined8 *)(pVVar12->extensionName + 0x70) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x78) = uVar3;
            lVar15 = lVar15 + -1;
            puVar11 = puVar7;
            pVVar12 = (VkExtensionProperties *)(pcVar5 + 0x80);
          } while (lVar15 != 0);
          *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName =
               *(undefined4 *)puVar7;
          pVVar18 = pVVar18 + -1;
        }
        goto LAB_145afdcda;
      }
LAB_145afdcc1:
      HeapSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,_FVulkanDeviceExtension::GetDriverSupportedDeviceExtensions_::__l2::<lambda_1>_>_>
                (pVVar12,iVar13,param_3,param_4);
LAB_145afdcda:
      ppVVar17 = ppVVar17 + -3;
    } while (&local_348 <= ppVVar17);
  }
  return;
LAB_145afdad0:
  do {
    puVar7 = puVar11 + 0x10;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 8);
    uVar2 = *(undefined8 *)(pVVar10->extensionName + 0x10);
    uVar3 = *(undefined8 *)(pVVar10->extensionName + 0x18);
    pcVar5 = pVVar10->extensionName;
    *puVar11 = *(undefined8 *)pVVar10->extensionName;
    puVar11[1] = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x20);
    uVar4 = *(undefined8 *)(pVVar10->extensionName + 0x28);
    puVar11[2] = uVar2;
    puVar11[3] = uVar3;
    uVar2 = *(undefined8 *)(pVVar10->extensionName + 0x30);
    uVar3 = *(undefined8 *)(pVVar10->extensionName + 0x38);
    puVar11[4] = uVar1;
    puVar11[5] = uVar4;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x40);
    uVar4 = *(undefined8 *)(pVVar10->extensionName + 0x48);
    puVar11[6] = uVar2;
    puVar11[7] = uVar3;
    uVar2 = *(undefined8 *)(pVVar10->extensionName + 0x50);
    uVar3 = *(undefined8 *)(pVVar10->extensionName + 0x58);
    puVar11[8] = uVar1;
    puVar11[9] = uVar4;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x60);
    uVar4 = *(undefined8 *)(pVVar10->extensionName + 0x68);
    puVar11[10] = uVar2;
    puVar11[0xb] = uVar3;
    uVar2 = *(undefined8 *)(pVVar10->extensionName + 0x70);
    uVar3 = *(undefined8 *)(pVVar10->extensionName + 0x78);
    puVar11[0xc] = uVar1;
    puVar11[0xd] = uVar4;
    puVar11[0xe] = uVar2;
    puVar11[0xf] = uVar3;
    lVar15 = lVar15 + -1;
    pVVar10 = (VkExtensionProperties *)(pcVar5 + 0x80);
    puVar11 = puVar7;
  } while (lVar15 != 0);
  lVar15 = 2;
  *(undefined4 *)puVar7 = *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName;
  pVVar10 = pVVar14;
  pVVar8 = _Str1;
  do {
    pcVar5 = pVVar8->extensionName;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 8);
    pcVar6 = pVVar10->extensionName;
    *(undefined8 *)pVVar8->extensionName = *(undefined8 *)pVVar10->extensionName;
    *(undefined8 *)(pVVar8->extensionName + 8) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x18);
    *(undefined8 *)(pVVar8->extensionName + 0x10) = *(undefined8 *)(pVVar10->extensionName + 0x10);
    *(undefined8 *)(pVVar8->extensionName + 0x18) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x28);
    *(undefined8 *)(pVVar8->extensionName + 0x20) = *(undefined8 *)(pVVar10->extensionName + 0x20);
    *(undefined8 *)(pVVar8->extensionName + 0x28) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x38);
    *(undefined8 *)(pVVar8->extensionName + 0x30) = *(undefined8 *)(pVVar10->extensionName + 0x30);
    *(undefined8 *)(pVVar8->extensionName + 0x38) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x48);
    *(undefined8 *)(pVVar8->extensionName + 0x40) = *(undefined8 *)(pVVar10->extensionName + 0x40);
    *(undefined8 *)(pVVar8->extensionName + 0x48) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x58);
    *(undefined8 *)(pVVar8->extensionName + 0x50) = *(undefined8 *)(pVVar10->extensionName + 0x50);
    *(undefined8 *)(pVVar8->extensionName + 0x58) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x68);
    *(undefined8 *)(pVVar8->extensionName + 0x60) = *(undefined8 *)(pVVar10->extensionName + 0x60);
    *(undefined8 *)(pVVar8->extensionName + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x78);
    *(undefined8 *)(pVVar8->extensionName + 0x70) = *(undefined8 *)(pVVar10->extensionName + 0x70);
    *(undefined8 *)(pVVar8->extensionName + 0x78) = uVar1;
    lVar15 = lVar15 + -1;
    pVVar10 = (VkExtensionProperties *)(pcVar6 + 0x80);
    pVVar8 = (VkExtensionProperties *)(pcVar5 + 0x80);
  } while (lVar15 != 0);
  lVar15 = 2;
  *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName =
       *(undefined4 *)((VkExtensionProperties *)(pcVar6 + 0x80))->extensionName;
  puVar11 = local_450;
  pVVar10 = pVVar14;
  do {
    pcVar5 = pVVar10->extensionName;
    uVar1 = puVar11[1];
    uVar2 = puVar11[2];
    uVar3 = puVar11[3];
    puVar7 = puVar11 + 0x10;
    *(undefined8 *)pVVar10->extensionName = *puVar11;
    *(undefined8 *)(pVVar10->extensionName + 8) = uVar1;
    uVar1 = puVar11[4];
    uVar4 = puVar11[5];
    *(undefined8 *)(pVVar10->extensionName + 0x10) = uVar2;
    *(undefined8 *)(pVVar10->extensionName + 0x18) = uVar3;
    uVar2 = puVar11[6];
    uVar3 = puVar11[7];
    *(undefined8 *)(pVVar10->extensionName + 0x20) = uVar1;
    *(undefined8 *)(pVVar10->extensionName + 0x28) = uVar4;
    uVar1 = puVar11[8];
    uVar4 = puVar11[9];
    *(undefined8 *)(pVVar10->extensionName + 0x30) = uVar2;
    *(undefined8 *)(pVVar10->extensionName + 0x38) = uVar3;
    uVar2 = puVar11[10];
    uVar3 = puVar11[0xb];
    *(undefined8 *)(pVVar10->extensionName + 0x40) = uVar1;
    *(undefined8 *)(pVVar10->extensionName + 0x48) = uVar4;
    uVar1 = puVar11[0xc];
    uVar4 = puVar11[0xd];
    *(undefined8 *)(pVVar10->extensionName + 0x50) = uVar2;
    *(undefined8 *)(pVVar10->extensionName + 0x58) = uVar3;
    uVar2 = puVar11[0xe];
    uVar3 = puVar11[0xf];
    *(undefined8 *)(pVVar10->extensionName + 0x60) = uVar1;
    *(undefined8 *)(pVVar10->extensionName + 0x68) = uVar4;
    *(undefined8 *)(pVVar10->extensionName + 0x70) = uVar2;
    *(undefined8 *)(pVVar10->extensionName + 0x78) = uVar3;
    lVar15 = lVar15 + -1;
    puVar11 = puVar7;
    pVVar10 = (VkExtensionProperties *)(pcVar5 + 0x80);
  } while (lVar15 != 0);
  *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName = *(undefined4 *)puVar7;
  iVar16 = iVar16 + -1;
  if (((longlong)pVVar14 + (-0x104 - (longlong)_Str1)) / 0x104 <
      ((longlong)pVVar18 - (longlong)pVVar12) / 0x104) {
    if (pVVar12 < pVVar18) {
      *ppVVar17 = pVVar12;
      ppVVar17[1] = pVVar18;
      *(int *)(ppVVar17 + 2) = iVar16;
      ppVVar17 = ppVVar17 + 3;
    }
    if (pVVar14 <= _Str1 + 1) goto LAB_145afdcda;
    pVVar18 = pVVar9 + -2;
    pVVar12 = _Str1;
  }
  else {
    if (_Str1 + 1 < pVVar14) {
      *ppVVar17 = _Str1;
      ppVVar17[1] = pVVar9 + -2;
      *(int *)(ppVVar17 + 2) = iVar16;
      ppVVar17 = ppVVar17 + 3;
    }
    if (pVVar18 <= pVVar12) goto LAB_145afdcda;
  }
  iVar13 = (int)(((longlong)pVVar18 - (longlong)pVVar12) / 0x104) + 1;
  _Str1 = pVVar12;
  if (iVar16 == 0) goto LAB_145afdcc1;
  goto LAB_145afd7e0;
}

// IntroSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,`FVulkanInstanceExtension::GetDriverSupportedInstanceExtensions'::__l2::<lambda_1>_>_> @ 145afdec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,_FVulkanInstanceExtension::GetDriverSupportedInstanceExtensions_::__l2::<lambda_1>_>_>
          (VkExtensionProperties *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<VkExtensionProperties,_public:_static_class_TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_>___cdecl_FVulkanInstanceExtension::GetDriverSupportedInstanceExtensions(char_const_*)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  VkExtensionProperties *pVVar8;
  VkExtensionProperties *pVVar9;
  VkExtensionProperties *pVVar10;
  undefined8 *puVar11;
  VkExtensionProperties *pVVar12;
  int iVar13;
  VkExtensionProperties *pVVar14;
  longlong lVar15;
  int iVar16;
  VkExtensionProperties **ppVVar17;
  VkExtensionProperties *_Str1;
  VkExtensionProperties *pVVar18;
  float fVar19;
  undefined1 auStack_488 [48];
  VkExtensionProperties *local_458;
  undefined8 local_450 [33];
  VkExtensionProperties *local_348;
  VkExtensionProperties *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_488;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    ppVVar17 = &local_348;
    do {
      pVVar18 = ppVVar17[1];
      pVVar12 = *ppVVar17;
      local_458 = ppVVar17[2];
      iVar13 = (int)(((longlong)pVVar18 - (longlong)pVVar12) / 0x104) + 1;
      _Str1 = pVVar12;
      iVar16 = (int)local_458;
      if ((int)local_458 != 0) {
LAB_145afdfb0:
        if (8 < iVar13) {
          lVar15 = 2;
          pVVar12 = _Str1 + iVar13 / 2;
          puVar11 = local_450;
          do {
            puVar7 = puVar11 + 0x10;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 8);
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x10);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x18);
            pcVar5 = pVVar12->extensionName;
            *puVar11 = *(undefined8 *)pVVar12->extensionName;
            puVar11[1] = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x20);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x28);
            puVar11[2] = uVar2;
            puVar11[3] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x30);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x38);
            puVar11[4] = uVar1;
            puVar11[5] = uVar4;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x40);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x48);
            puVar11[6] = uVar2;
            puVar11[7] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x50);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x58);
            puVar11[8] = uVar1;
            puVar11[9] = uVar4;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x60);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x68);
            puVar11[10] = uVar2;
            puVar11[0xb] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x70);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x78);
            puVar11[0xc] = uVar1;
            puVar11[0xd] = uVar4;
            puVar11[0xe] = uVar2;
            puVar11[0xf] = uVar3;
            lVar15 = lVar15 + -1;
            pVVar12 = (VkExtensionProperties *)(pcVar5 + 0x80);
            puVar11 = puVar7;
          } while (lVar15 != 0);
          *(undefined4 *)puVar7 =
               *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName;
          lVar15 = 2;
          pVVar12 = _Str1;
          pVVar9 = _Str1 + iVar13 / 2;
          do {
            pcVar5 = pVVar9->extensionName;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 8);
            pcVar6 = pVVar12->extensionName;
            *(undefined8 *)pVVar9->extensionName = *(undefined8 *)pVVar12->extensionName;
            *(undefined8 *)(pVVar9->extensionName + 8) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x18);
            *(undefined8 *)(pVVar9->extensionName + 0x10) =
                 *(undefined8 *)(pVVar12->extensionName + 0x10);
            *(undefined8 *)(pVVar9->extensionName + 0x18) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x28);
            *(undefined8 *)(pVVar9->extensionName + 0x20) =
                 *(undefined8 *)(pVVar12->extensionName + 0x20);
            *(undefined8 *)(pVVar9->extensionName + 0x28) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x38);
            *(undefined8 *)(pVVar9->extensionName + 0x30) =
                 *(undefined8 *)(pVVar12->extensionName + 0x30);
            *(undefined8 *)(pVVar9->extensionName + 0x38) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x48);
            *(undefined8 *)(pVVar9->extensionName + 0x40) =
                 *(undefined8 *)(pVVar12->extensionName + 0x40);
            *(undefined8 *)(pVVar9->extensionName + 0x48) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x58);
            *(undefined8 *)(pVVar9->extensionName + 0x50) =
                 *(undefined8 *)(pVVar12->extensionName + 0x50);
            *(undefined8 *)(pVVar9->extensionName + 0x58) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x68);
            *(undefined8 *)(pVVar9->extensionName + 0x60) =
                 *(undefined8 *)(pVVar12->extensionName + 0x60);
            *(undefined8 *)(pVVar9->extensionName + 0x68) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x78);
            *(undefined8 *)(pVVar9->extensionName + 0x70) =
                 *(undefined8 *)(pVVar12->extensionName + 0x70);
            *(undefined8 *)(pVVar9->extensionName + 0x78) = uVar1;
            lVar15 = lVar15 + -1;
            pVVar12 = (VkExtensionProperties *)(pcVar6 + 0x80);
            pVVar9 = (VkExtensionProperties *)(pcVar5 + 0x80);
          } while (lVar15 != 0);
          *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName =
               *(undefined4 *)((VkExtensionProperties *)(pcVar6 + 0x80))->extensionName;
          lVar15 = 2;
          puVar11 = local_450;
          pVVar12 = _Str1;
          do {
            pVVar9 = (VkExtensionProperties *)(pVVar12->extensionName + 0x80);
            uVar1 = puVar11[1];
            uVar2 = puVar11[2];
            uVar3 = puVar11[3];
            puVar7 = puVar11 + 0x10;
            *(undefined8 *)pVVar12->extensionName = *puVar11;
            *(undefined8 *)(pVVar12->extensionName + 8) = uVar1;
            uVar1 = puVar11[4];
            uVar4 = puVar11[5];
            *(undefined8 *)(pVVar12->extensionName + 0x10) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x18) = uVar3;
            uVar2 = puVar11[6];
            uVar3 = puVar11[7];
            *(undefined8 *)(pVVar12->extensionName + 0x20) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x28) = uVar4;
            uVar1 = puVar11[8];
            uVar4 = puVar11[9];
            *(undefined8 *)(pVVar12->extensionName + 0x30) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x38) = uVar3;
            uVar2 = puVar11[10];
            uVar3 = puVar11[0xb];
            *(undefined8 *)(pVVar12->extensionName + 0x40) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x48) = uVar4;
            uVar1 = puVar11[0xc];
            uVar4 = puVar11[0xd];
            *(undefined8 *)(pVVar12->extensionName + 0x50) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x58) = uVar3;
            uVar2 = puVar11[0xe];
            uVar3 = puVar11[0xf];
            *(undefined8 *)(pVVar12->extensionName + 0x60) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x68) = uVar4;
            *(undefined8 *)(pVVar12->extensionName + 0x70) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x78) = uVar3;
            lVar15 = lVar15 + -1;
            puVar11 = puVar7;
            pVVar12 = pVVar9;
          } while (lVar15 != 0);
          pVVar14 = pVVar18 + 1;
          pVVar12 = _Str1;
          do {
            *(undefined4 *)pVVar9->extensionName = *(undefined4 *)puVar7;
            do {
              pVVar12 = pVVar12 + 1;
              if (pVVar18 < pVVar12) break;
              iVar13 = strcmp(_Str1->extensionName,pVVar12->extensionName);
            } while (-1 < iVar13);
            do {
              pVVar9 = pVVar14;
              pVVar14 = pVVar9 + -1;
              if (pVVar14 <= _Str1) break;
              iVar13 = strcmp(pVVar14->extensionName,_Str1->extensionName);
            } while (-1 < iVar13);
            puVar11 = local_450;
            lVar15 = 2;
            pVVar10 = _Str1;
            pVVar8 = pVVar12;
            if (pVVar14 < pVVar12) goto LAB_145afe2a0;
            do {
              puVar7 = puVar11 + 0x10;
              uVar1 = *(undefined8 *)(pVVar8->extensionName + 8);
              uVar2 = *(undefined8 *)(pVVar8->extensionName + 0x10);
              uVar3 = *(undefined8 *)(pVVar8->extensionName + 0x18);
              pcVar5 = pVVar8->extensionName;
              *puVar11 = *(undefined8 *)pVVar8->extensionName;
              puVar11[1] = uVar1;
              uVar1 = *(undefined8 *)(pVVar8->extensionName + 0x20);
              uVar4 = *(undefined8 *)(pVVar8->extensionName + 0x28);
              puVar11[2] = uVar2;
              puVar11[3] = uVar3;
              uVar2 = *(undefined8 *)(pVVar8->extensionName + 0x30);
              uVar3 = *(undefined8 *)(pVVar8->extensionName + 0x38);
              puVar11[4] = uVar1;
              puVar11[5] = uVar4;
              uVar1 = *(undefined8 *)(pVVar8->extensionName + 0x40);
              uVar4 = *(undefined8 *)(pVVar8->extensionName + 0x48);
              puVar11[6] = uVar2;
              puVar11[7] = uVar3;
              uVar2 = *(undefined8 *)(pVVar8->extensionName + 0x50);
              uVar3 = *(undefined8 *)(pVVar8->extensionName + 0x58);
              puVar11[8] = uVar1;
              puVar11[9] = uVar4;
              uVar1 = *(undefined8 *)(pVVar8->extensionName + 0x60);
              uVar4 = *(undefined8 *)(pVVar8->extensionName + 0x68);
              puVar11[10] = uVar2;
              puVar11[0xb] = uVar3;
              uVar2 = *(undefined8 *)(pVVar8->extensionName + 0x70);
              uVar3 = *(undefined8 *)(pVVar8->extensionName + 0x78);
              puVar11[0xc] = uVar1;
              puVar11[0xd] = uVar4;
              puVar11[0xe] = uVar2;
              puVar11[0xf] = uVar3;
              lVar15 = lVar15 + -1;
              pVVar8 = (VkExtensionProperties *)(pcVar5 + 0x80);
              puVar11 = puVar7;
            } while (lVar15 != 0);
            lVar15 = 2;
            *(undefined4 *)puVar7 =
                 *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName;
            pVVar9 = pVVar14;
            pVVar10 = pVVar12;
            do {
              pcVar5 = pVVar10->extensionName;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 8);
              pcVar6 = pVVar9->extensionName;
              *(undefined8 *)pVVar10->extensionName = *(undefined8 *)pVVar9->extensionName;
              *(undefined8 *)(pVVar10->extensionName + 8) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x18);
              *(undefined8 *)(pVVar10->extensionName + 0x10) =
                   *(undefined8 *)(pVVar9->extensionName + 0x10);
              *(undefined8 *)(pVVar10->extensionName + 0x18) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x28);
              *(undefined8 *)(pVVar10->extensionName + 0x20) =
                   *(undefined8 *)(pVVar9->extensionName + 0x20);
              *(undefined8 *)(pVVar10->extensionName + 0x28) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x38);
              *(undefined8 *)(pVVar10->extensionName + 0x30) =
                   *(undefined8 *)(pVVar9->extensionName + 0x30);
              *(undefined8 *)(pVVar10->extensionName + 0x38) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x48);
              *(undefined8 *)(pVVar10->extensionName + 0x40) =
                   *(undefined8 *)(pVVar9->extensionName + 0x40);
              *(undefined8 *)(pVVar10->extensionName + 0x48) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x58);
              *(undefined8 *)(pVVar10->extensionName + 0x50) =
                   *(undefined8 *)(pVVar9->extensionName + 0x50);
              *(undefined8 *)(pVVar10->extensionName + 0x58) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x68);
              *(undefined8 *)(pVVar10->extensionName + 0x60) =
                   *(undefined8 *)(pVVar9->extensionName + 0x60);
              *(undefined8 *)(pVVar10->extensionName + 0x68) = uVar1;
              uVar1 = *(undefined8 *)(pVVar9->extensionName + 0x78);
              *(undefined8 *)(pVVar10->extensionName + 0x70) =
                   *(undefined8 *)(pVVar9->extensionName + 0x70);
              *(undefined8 *)(pVVar10->extensionName + 0x78) = uVar1;
              lVar15 = lVar15 + -1;
              pVVar9 = (VkExtensionProperties *)(pcVar6 + 0x80);
              pVVar10 = (VkExtensionProperties *)(pcVar5 + 0x80);
            } while (lVar15 != 0);
            lVar15 = 2;
            *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName =
                 *(undefined4 *)((VkExtensionProperties *)(pcVar6 + 0x80))->extensionName;
            puVar11 = local_450;
            pVVar10 = pVVar14;
            do {
              pVVar9 = (VkExtensionProperties *)(pVVar10->extensionName + 0x80);
              uVar1 = puVar11[1];
              uVar2 = puVar11[2];
              uVar3 = puVar11[3];
              puVar7 = puVar11 + 0x10;
              *(undefined8 *)pVVar10->extensionName = *puVar11;
              *(undefined8 *)(pVVar10->extensionName + 8) = uVar1;
              uVar1 = puVar11[4];
              uVar4 = puVar11[5];
              *(undefined8 *)(pVVar10->extensionName + 0x10) = uVar2;
              *(undefined8 *)(pVVar10->extensionName + 0x18) = uVar3;
              uVar2 = puVar11[6];
              uVar3 = puVar11[7];
              *(undefined8 *)(pVVar10->extensionName + 0x20) = uVar1;
              *(undefined8 *)(pVVar10->extensionName + 0x28) = uVar4;
              uVar1 = puVar11[8];
              uVar4 = puVar11[9];
              *(undefined8 *)(pVVar10->extensionName + 0x30) = uVar2;
              *(undefined8 *)(pVVar10->extensionName + 0x38) = uVar3;
              uVar2 = puVar11[10];
              uVar3 = puVar11[0xb];
              *(undefined8 *)(pVVar10->extensionName + 0x40) = uVar1;
              *(undefined8 *)(pVVar10->extensionName + 0x48) = uVar4;
              uVar1 = puVar11[0xc];
              uVar4 = puVar11[0xd];
              *(undefined8 *)(pVVar10->extensionName + 0x50) = uVar2;
              *(undefined8 *)(pVVar10->extensionName + 0x58) = uVar3;
              uVar2 = puVar11[0xe];
              uVar3 = puVar11[0xf];
              *(undefined8 *)(pVVar10->extensionName + 0x60) = uVar1;
              *(undefined8 *)(pVVar10->extensionName + 0x68) = uVar4;
              *(undefined8 *)(pVVar10->extensionName + 0x70) = uVar2;
              *(undefined8 *)(pVVar10->extensionName + 0x78) = uVar3;
              lVar15 = lVar15 + -1;
              puVar11 = puVar7;
              pVVar10 = pVVar9;
            } while (lVar15 != 0);
          } while( true );
        }
        while (pVVar9 = _Str1, pVVar12 = _Str1, _Str1 < pVVar18) {
          while (pVVar14 = pVVar9, pVVar12 = pVVar12 + 1, pVVar12 <= pVVar18) {
            iVar16 = strcmp(pVVar14->extensionName,pVVar12->extensionName);
            pVVar9 = pVVar12;
            if (-1 < iVar16) {
              pVVar9 = pVVar14;
            }
          }
          lVar15 = 2;
          pVVar12 = pVVar14;
          puVar11 = local_450;
          do {
            puVar7 = puVar11 + 0x10;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 8);
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x10);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x18);
            pcVar5 = pVVar12->extensionName;
            *puVar11 = *(undefined8 *)pVVar12->extensionName;
            puVar11[1] = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x20);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x28);
            puVar11[2] = uVar2;
            puVar11[3] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x30);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x38);
            puVar11[4] = uVar1;
            puVar11[5] = uVar4;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x40);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x48);
            puVar11[6] = uVar2;
            puVar11[7] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x50);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x58);
            puVar11[8] = uVar1;
            puVar11[9] = uVar4;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x60);
            uVar4 = *(undefined8 *)(pVVar12->extensionName + 0x68);
            puVar11[10] = uVar2;
            puVar11[0xb] = uVar3;
            uVar2 = *(undefined8 *)(pVVar12->extensionName + 0x70);
            uVar3 = *(undefined8 *)(pVVar12->extensionName + 0x78);
            puVar11[0xc] = uVar1;
            puVar11[0xd] = uVar4;
            puVar11[0xe] = uVar2;
            puVar11[0xf] = uVar3;
            lVar15 = lVar15 + -1;
            pVVar12 = (VkExtensionProperties *)(pcVar5 + 0x80);
            puVar11 = puVar7;
          } while (lVar15 != 0);
          *(undefined4 *)puVar7 =
               *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName;
          lVar15 = 2;
          pVVar12 = pVVar18;
          do {
            pcVar5 = pVVar14->extensionName;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 8);
            pcVar6 = pVVar12->extensionName;
            *(undefined8 *)pVVar14->extensionName = *(undefined8 *)pVVar12->extensionName;
            *(undefined8 *)(pVVar14->extensionName + 8) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x18);
            *(undefined8 *)(pVVar14->extensionName + 0x10) =
                 *(undefined8 *)(pVVar12->extensionName + 0x10);
            *(undefined8 *)(pVVar14->extensionName + 0x18) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x28);
            *(undefined8 *)(pVVar14->extensionName + 0x20) =
                 *(undefined8 *)(pVVar12->extensionName + 0x20);
            *(undefined8 *)(pVVar14->extensionName + 0x28) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x38);
            *(undefined8 *)(pVVar14->extensionName + 0x30) =
                 *(undefined8 *)(pVVar12->extensionName + 0x30);
            *(undefined8 *)(pVVar14->extensionName + 0x38) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x48);
            *(undefined8 *)(pVVar14->extensionName + 0x40) =
                 *(undefined8 *)(pVVar12->extensionName + 0x40);
            *(undefined8 *)(pVVar14->extensionName + 0x48) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x58);
            *(undefined8 *)(pVVar14->extensionName + 0x50) =
                 *(undefined8 *)(pVVar12->extensionName + 0x50);
            *(undefined8 *)(pVVar14->extensionName + 0x58) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x68);
            *(undefined8 *)(pVVar14->extensionName + 0x60) =
                 *(undefined8 *)(pVVar12->extensionName + 0x60);
            *(undefined8 *)(pVVar14->extensionName + 0x68) = uVar1;
            uVar1 = *(undefined8 *)(pVVar12->extensionName + 0x78);
            *(undefined8 *)(pVVar14->extensionName + 0x70) =
                 *(undefined8 *)(pVVar12->extensionName + 0x70);
            *(undefined8 *)(pVVar14->extensionName + 0x78) = uVar1;
            lVar15 = lVar15 + -1;
            pVVar12 = (VkExtensionProperties *)(pcVar6 + 0x80);
            pVVar14 = (VkExtensionProperties *)(pcVar5 + 0x80);
          } while (lVar15 != 0);
          lVar15 = 2;
          *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName =
               *(undefined4 *)((VkExtensionProperties *)(pcVar6 + 0x80))->extensionName;
          puVar11 = local_450;
          pVVar12 = pVVar18;
          do {
            pcVar5 = pVVar12->extensionName;
            uVar1 = puVar11[1];
            uVar2 = puVar11[2];
            uVar3 = puVar11[3];
            puVar7 = puVar11 + 0x10;
            *(undefined8 *)pVVar12->extensionName = *puVar11;
            *(undefined8 *)(pVVar12->extensionName + 8) = uVar1;
            uVar1 = puVar11[4];
            uVar4 = puVar11[5];
            *(undefined8 *)(pVVar12->extensionName + 0x10) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x18) = uVar3;
            uVar2 = puVar11[6];
            uVar3 = puVar11[7];
            *(undefined8 *)(pVVar12->extensionName + 0x20) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x28) = uVar4;
            uVar1 = puVar11[8];
            uVar4 = puVar11[9];
            *(undefined8 *)(pVVar12->extensionName + 0x30) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x38) = uVar3;
            uVar2 = puVar11[10];
            uVar3 = puVar11[0xb];
            *(undefined8 *)(pVVar12->extensionName + 0x40) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x48) = uVar4;
            uVar1 = puVar11[0xc];
            uVar4 = puVar11[0xd];
            *(undefined8 *)(pVVar12->extensionName + 0x50) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x58) = uVar3;
            uVar2 = puVar11[0xe];
            uVar3 = puVar11[0xf];
            *(undefined8 *)(pVVar12->extensionName + 0x60) = uVar1;
            *(undefined8 *)(pVVar12->extensionName + 0x68) = uVar4;
            *(undefined8 *)(pVVar12->extensionName + 0x70) = uVar2;
            *(undefined8 *)(pVVar12->extensionName + 0x78) = uVar3;
            lVar15 = lVar15 + -1;
            puVar11 = puVar7;
            pVVar12 = (VkExtensionProperties *)(pcVar5 + 0x80);
          } while (lVar15 != 0);
          *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName =
               *(undefined4 *)puVar7;
          pVVar18 = pVVar18 + -1;
        }
        goto LAB_145afe4aa;
      }
LAB_145afe491:
      HeapSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,_FVulkanInstanceExtension::GetDriverSupportedInstanceExtensions_::__l2::<lambda_1>_>_>
                (pVVar12,iVar13,param_3,param_4);
LAB_145afe4aa:
      ppVVar17 = ppVVar17 + -3;
    } while (&local_348 <= ppVVar17);
  }
  return;
LAB_145afe2a0:
  do {
    puVar7 = puVar11 + 0x10;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 8);
    uVar2 = *(undefined8 *)(pVVar10->extensionName + 0x10);
    uVar3 = *(undefined8 *)(pVVar10->extensionName + 0x18);
    pcVar5 = pVVar10->extensionName;
    *puVar11 = *(undefined8 *)pVVar10->extensionName;
    puVar11[1] = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x20);
    uVar4 = *(undefined8 *)(pVVar10->extensionName + 0x28);
    puVar11[2] = uVar2;
    puVar11[3] = uVar3;
    uVar2 = *(undefined8 *)(pVVar10->extensionName + 0x30);
    uVar3 = *(undefined8 *)(pVVar10->extensionName + 0x38);
    puVar11[4] = uVar1;
    puVar11[5] = uVar4;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x40);
    uVar4 = *(undefined8 *)(pVVar10->extensionName + 0x48);
    puVar11[6] = uVar2;
    puVar11[7] = uVar3;
    uVar2 = *(undefined8 *)(pVVar10->extensionName + 0x50);
    uVar3 = *(undefined8 *)(pVVar10->extensionName + 0x58);
    puVar11[8] = uVar1;
    puVar11[9] = uVar4;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x60);
    uVar4 = *(undefined8 *)(pVVar10->extensionName + 0x68);
    puVar11[10] = uVar2;
    puVar11[0xb] = uVar3;
    uVar2 = *(undefined8 *)(pVVar10->extensionName + 0x70);
    uVar3 = *(undefined8 *)(pVVar10->extensionName + 0x78);
    puVar11[0xc] = uVar1;
    puVar11[0xd] = uVar4;
    puVar11[0xe] = uVar2;
    puVar11[0xf] = uVar3;
    lVar15 = lVar15 + -1;
    pVVar10 = (VkExtensionProperties *)(pcVar5 + 0x80);
    puVar11 = puVar7;
  } while (lVar15 != 0);
  lVar15 = 2;
  *(undefined4 *)puVar7 = *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName;
  pVVar10 = pVVar14;
  pVVar8 = _Str1;
  do {
    pcVar5 = pVVar8->extensionName;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 8);
    pcVar6 = pVVar10->extensionName;
    *(undefined8 *)pVVar8->extensionName = *(undefined8 *)pVVar10->extensionName;
    *(undefined8 *)(pVVar8->extensionName + 8) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x18);
    *(undefined8 *)(pVVar8->extensionName + 0x10) = *(undefined8 *)(pVVar10->extensionName + 0x10);
    *(undefined8 *)(pVVar8->extensionName + 0x18) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x28);
    *(undefined8 *)(pVVar8->extensionName + 0x20) = *(undefined8 *)(pVVar10->extensionName + 0x20);
    *(undefined8 *)(pVVar8->extensionName + 0x28) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x38);
    *(undefined8 *)(pVVar8->extensionName + 0x30) = *(undefined8 *)(pVVar10->extensionName + 0x30);
    *(undefined8 *)(pVVar8->extensionName + 0x38) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x48);
    *(undefined8 *)(pVVar8->extensionName + 0x40) = *(undefined8 *)(pVVar10->extensionName + 0x40);
    *(undefined8 *)(pVVar8->extensionName + 0x48) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x58);
    *(undefined8 *)(pVVar8->extensionName + 0x50) = *(undefined8 *)(pVVar10->extensionName + 0x50);
    *(undefined8 *)(pVVar8->extensionName + 0x58) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x68);
    *(undefined8 *)(pVVar8->extensionName + 0x60) = *(undefined8 *)(pVVar10->extensionName + 0x60);
    *(undefined8 *)(pVVar8->extensionName + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(pVVar10->extensionName + 0x78);
    *(undefined8 *)(pVVar8->extensionName + 0x70) = *(undefined8 *)(pVVar10->extensionName + 0x70);
    *(undefined8 *)(pVVar8->extensionName + 0x78) = uVar1;
    lVar15 = lVar15 + -1;
    pVVar10 = (VkExtensionProperties *)(pcVar6 + 0x80);
    pVVar8 = (VkExtensionProperties *)(pcVar5 + 0x80);
  } while (lVar15 != 0);
  lVar15 = 2;
  *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName =
       *(undefined4 *)((VkExtensionProperties *)(pcVar6 + 0x80))->extensionName;
  puVar11 = local_450;
  pVVar10 = pVVar14;
  do {
    pcVar5 = pVVar10->extensionName;
    uVar1 = puVar11[1];
    uVar2 = puVar11[2];
    uVar3 = puVar11[3];
    puVar7 = puVar11 + 0x10;
    *(undefined8 *)pVVar10->extensionName = *puVar11;
    *(undefined8 *)(pVVar10->extensionName + 8) = uVar1;
    uVar1 = puVar11[4];
    uVar4 = puVar11[5];
    *(undefined8 *)(pVVar10->extensionName + 0x10) = uVar2;
    *(undefined8 *)(pVVar10->extensionName + 0x18) = uVar3;
    uVar2 = puVar11[6];
    uVar3 = puVar11[7];
    *(undefined8 *)(pVVar10->extensionName + 0x20) = uVar1;
    *(undefined8 *)(pVVar10->extensionName + 0x28) = uVar4;
    uVar1 = puVar11[8];
    uVar4 = puVar11[9];
    *(undefined8 *)(pVVar10->extensionName + 0x30) = uVar2;
    *(undefined8 *)(pVVar10->extensionName + 0x38) = uVar3;
    uVar2 = puVar11[10];
    uVar3 = puVar11[0xb];
    *(undefined8 *)(pVVar10->extensionName + 0x40) = uVar1;
    *(undefined8 *)(pVVar10->extensionName + 0x48) = uVar4;
    uVar1 = puVar11[0xc];
    uVar4 = puVar11[0xd];
    *(undefined8 *)(pVVar10->extensionName + 0x50) = uVar2;
    *(undefined8 *)(pVVar10->extensionName + 0x58) = uVar3;
    uVar2 = puVar11[0xe];
    uVar3 = puVar11[0xf];
    *(undefined8 *)(pVVar10->extensionName + 0x60) = uVar1;
    *(undefined8 *)(pVVar10->extensionName + 0x68) = uVar4;
    *(undefined8 *)(pVVar10->extensionName + 0x70) = uVar2;
    *(undefined8 *)(pVVar10->extensionName + 0x78) = uVar3;
    lVar15 = lVar15 + -1;
    puVar11 = puVar7;
    pVVar10 = (VkExtensionProperties *)(pcVar5 + 0x80);
  } while (lVar15 != 0);
  *(undefined4 *)((VkExtensionProperties *)(pcVar5 + 0x80))->extensionName = *(undefined4 *)puVar7;
  iVar16 = iVar16 + -1;
  if (((longlong)pVVar14 + (-0x104 - (longlong)_Str1)) / 0x104 <
      ((longlong)pVVar18 - (longlong)pVVar12) / 0x104) {
    if (pVVar12 < pVVar18) {
      *ppVVar17 = pVVar12;
      ppVVar17[1] = pVVar18;
      *(int *)(ppVVar17 + 2) = iVar16;
      ppVVar17 = ppVVar17 + 3;
    }
    if (pVVar14 <= _Str1 + 1) goto LAB_145afe4aa;
    pVVar18 = pVVar9 + -2;
    pVVar12 = _Str1;
  }
  else {
    if (_Str1 + 1 < pVVar14) {
      *ppVVar17 = _Str1;
      ppVVar17[1] = pVVar9 + -2;
      *(int *)(ppVVar17 + 2) = iVar16;
      ppVVar17 = ppVVar17 + 3;
    }
    if (pVVar18 <= pVVar12) goto LAB_145afe4aa;
  }
  iVar13 = (int)(((longlong)pVVar18 - (longlong)pVVar12) / 0x104) + 1;
  _Str1 = pVVar12;
  if (iVar16 == 0) goto LAB_145afe491;
  goto LAB_145afdfb0;
}

// SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension> @ 145afeeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<char_const_*,TSizedDefaultAllocator<32>_> * __cdecl
SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>
          (TArray<char_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FVulkanDeviceSetupHelper *param_1,
          TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  FVulkanDeviceSetupHelper *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  size_t sVar13;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  FLayerWithExtensions *pFVar18;
  char **ppcVar19;
  char *pcVar20;
  int *piVar21;
  char *pcVar22;
  undefined1 auStack_468 [32];
  char **local_448;
  FScriptContainerElement *local_440;
  longlong local_438;
  longlong local_430;
  undefined8 local_428;
  undefined1 local_418;
  undefined1 local_417;
  undefined1 local_416;
  undefined1 local_415;
  undefined1 local_414;
  undefined1 local_413;
  FIdentityFunctor local_412;
  FIdentityFunctor local_411;
  TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> local_410;
  undefined1 local_400 [4];
  uint local_3fc;
  TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>
  *local_3f8;
  FScriptContainerElement *local_3f0;
  char *local_3e8;
  char *local_3e0;
  uint local_3d8;
  FVulkanDeviceSetupHelper *local_3d0;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> *local_3c8;
  int *local_3c0;
  FScriptContainerElement *local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_468;
  piVar21 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar21 = 0;
  local_3f8 = param_2;
  local_3d0 = param_1;
  local_3c8 = __return_storage_ptr__;
  local_3c0 = piVar21;
  FVulkanDeviceSetupHelper::EnumerateLayerProperties(param_1,&local_410);
  AlgoImpl::
  IntroSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>_::__l2::<lambda_1>_>_>
            ((FLayerWithExtensions *)local_410.AllocatorInstance.Data,local_410.ArrayNum,local_412,
             (<lambda_1> *)&local_412);
  if (3 < (byte)LogVulkanRHI._0_1_) {
    local_448 = (char **)0x1506488c0;
    if (local_410.ArrayNum != 0) {
      local_448 = (char **)0x150698f60;
    }
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  iVar9 = local_410.ArrayNum;
  pFVar18 = (FLayerWithExtensions *)
            (local_410.AllocatorInstance.Data + (longlong)local_410.ArrayNum * 0x218);
  FVar17.Data = local_410.AllocatorInstance.Data;
  while( true ) {
    if (local_410.ArrayNum != iVar9) {
      local_418 = 0;
      `TCheckedPointerIterator<FLayerWithExtensions,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_418);
    }
    if ((FLayerWithExtensions *)FVar17.Data == pFVar18) break;
    if (3 < (byte)LogVulkanRHI._0_1_) {
      local_3a8._padding_ = 0;
      if ((FLayerWithExtensions *)FVar17.Data == (FLayerWithExtensions *)0x0) {
        local_3a8.Ptr = (wchar_t *)0x0;
        local_3a8.StringLength = 0;
      }
      else {
        sVar13 = strlen((char *)FVar17.Data);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3a8,(char *)FVar17.Data,(int)sVar13,Yes);
      }
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    FVar17.Data = FVar17.Data + 0x218;
  }
  local_3fc = FVulkanDeviceSetupHelper::ExternalLayers.ArrayNum;
  uVar15 = FVulkanDeviceSetupHelper::ExternalLayers._8_8_ & 0xffffffff;
  local_3b8 = FVulkanDeviceSetupHelper::ExternalLayers.AllocatorInstance.Data +
              (longlong)(int)local_3fc * 8;
  FVar17.Data = FVulkanDeviceSetupHelper::ExternalLayers.AllocatorInstance.Data;
  while( true ) {
    pFVar1 = local_3b8;
    pFVar16 = (FScriptContainerElement *)0x0;
    local_3f0 = FVar17.Data;
    if (FVulkanDeviceSetupHelper::ExternalLayers.ArrayNum != (int)uVar15) {
      local_417 = 0;
      `TCheckedPointerIterator<char_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_417);
    }
    if (FVar17.Data == pFVar1) break;
    pcVar22 = *(char **)FVar17.Data;
    local_3e8 = pcVar22;
    uVar8 = FindLayerIndexInList(pcVar22,&local_410);
    ppcVar19 = (char **)(longlong)(int)uVar8;
    if (uVar8 == 0xffffffff) {
      if (2 < (byte)LogVulkanRHI._0_1_) {
        local_288._padding_ = 0;
        if (pcVar22 == (char *)0x0) {
          local_288.Ptr = (wchar_t *)0x0;
          local_288.StringLength = 0;
        }
        else {
          sVar13 = strlen(pcVar22);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,pcVar22,(int)sVar13,Yes);
        }
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)&local_3e8) &&
         ((FScriptContainerElement *)&local_3e8 < pFVar1 + (longlong)*piVar21 * 8)) {
        local_430 = (longlong)__return_storage_ptr__->ArrayNum;
        local_428 = 8;
        local_448 = &local_3e8;
        local_440 = pFVar1;
        local_438 = (longlong)*piVar21;
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar14;
        }
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == *piVar21) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar21);
      }
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(char **)(pFVar1 + (longlong)iVar9 * 8) = local_3e8;
      uVar10 = 0;
      if ((int)uVar8 < local_410.ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_440 = (FScriptContainerElement *)(longlong)local_410.ArrayNum;
        local_448 = ppcVar19;
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar14;
        }
      }
      FVar4.Data = local_410.AllocatorInstance.Data;
      local_3d8 = *(uint *)(local_410.AllocatorInstance.Data + (longlong)ppcVar19 * 0x218 + 0x210);
      uVar15 = (ulonglong)(int)local_3d8;
      pcVar22 = *(char **)&local_410.AllocatorInstance.Data[(longlong)ppcVar19 * 0x218 + 0x208].
                           field_0x0;
      pcVar20 = pcVar22 + uVar15 * 0x104;
      while( true ) {
        if (*(int *)(FVar4.Data + (longlong)ppcVar19 * 0x218 + 0x210) != (int)uVar15) {
          local_416 = 0;
          `TCheckedPointerIterator<VkExtensionProperties_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_416);
        }
        FVar17.Data = local_3f0;
        __return_storage_ptr__ = local_3c8;
        piVar21 = local_3c0;
        if (pcVar22 == pcVar20) break;
        pFVar16 = (local_3f8->AllocatorInstance).Data;
        iVar9 = local_3f8->ArrayNum;
        pFVar1 = pFVar16 + (longlong)iVar9 * 8;
        while( true ) {
          if (local_3f8->ArrayNum != iVar9) {
            local_415 = 0;
            `TCheckedPointerIterator<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_415);
          }
          if (pFVar16 == pFVar1) goto LAB_145aff27b;
          lVar2 = *(longlong *)pFVar16;
          iVar11 = strcmp(*(char **)(lVar2 + 8),pcVar22);
          if (iVar11 == 0) break;
          pFVar16 = pFVar16 + 8;
        }
        *(undefined1 *)(lVar2 + 0x15) = 1;
LAB_145aff27b:
        uVar15 = (ulonglong)local_3d8;
        pcVar22 = pcVar22 + 0x104;
      }
    }
    FVar17.Data = FVar17.Data + 8;
    uVar15 = (ulonglong)local_3fc;
  }
  while( true ) {
    uVar8 = 0;
    if (pFVar16 == (FScriptContainerElement *)0x0) break;
    pcVar22 = *(char **)pFVar16;
    local_3f0 = pFVar16;
    local_3e0 = pcVar22;
    uVar8 = FindLayerIndexInList(pcVar22,&local_410);
    ppcVar19 = (char **)(longlong)(int)uVar8;
    if (uVar8 == 0xffffffff) {
      if ((byte)LogVulkanRHI._0_1_ < 3) goto LAB_145aff509;
      local_168._padding_ = 0;
      if (pcVar22 == (char *)0x0) {
        local_168.Ptr = (wchar_t *)0x0;
        local_168.StringLength = 0;
      }
      else {
        sVar13 = strlen(pcVar22);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,pcVar22,(int)sVar13,Yes);
      }
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_168._padding_ == (void *)0x0) goto LAB_145aff509;
      FMemory::Free((void *)local_168._padding_);
      pFVar16 = (FScriptContainerElement *)((longlong)pFVar16 + 8);
    }
    else {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)&local_3e0) &&
         ((FScriptContainerElement *)&local_3e0 < pFVar1 + (longlong)*piVar21 * 8)) {
        local_430 = (longlong)__return_storage_ptr__->ArrayNum;
        local_428 = 8;
        local_448 = &local_3e0;
        local_440 = pFVar1;
        local_438 = (longlong)*piVar21;
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar14;
        }
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == *piVar21) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar21);
      }
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(char **)(pFVar1 + (longlong)iVar9 * 8) = local_3e0;
      uVar10 = 0;
      if ((int)uVar8 < local_410.ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_440 = (FScriptContainerElement *)(longlong)local_410.ArrayNum;
        local_448 = ppcVar19;
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar14;
        }
      }
      FVar17.Data = local_410.AllocatorInstance.Data;
      local_3fc = *(uint *)(local_410.AllocatorInstance.Data + (longlong)ppcVar19 * 0x218 + 0x210);
      uVar15 = (ulonglong)(int)local_3fc;
      pcVar22 = *(char **)&local_410.AllocatorInstance.Data[(longlong)ppcVar19 * 0x218 + 0x208].
                           field_0x0;
      pcVar20 = pcVar22 + uVar15 * 0x104;
      while( true ) {
        if (*(int *)(FVar17.Data + (longlong)ppcVar19 * 0x218 + 0x210) != (int)uVar15) {
          local_414 = 0;
          `TCheckedPointerIterator<VkExtensionProperties_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_414);
        }
        __return_storage_ptr__ = local_3c8;
        piVar21 = local_3c0;
        pFVar16 = local_3f0;
        if (pcVar22 == pcVar20) break;
        pFVar16 = (local_3f8->AllocatorInstance).Data;
        iVar9 = local_3f8->ArrayNum;
        pFVar1 = pFVar16 + (longlong)iVar9 * 8;
        while( true ) {
          if (local_3f8->ArrayNum != iVar9) {
            local_413 = 0;
            `TCheckedPointerIterator<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_413);
          }
          if (pFVar16 == pFVar1) goto LAB_145aff4ec;
          lVar2 = *(longlong *)pFVar16;
          iVar11 = strcmp(*(char **)(lVar2 + 8),pcVar22);
          if (iVar11 == 0) break;
          pFVar16 = pFVar16 + 8;
        }
        *(undefined1 *)(lVar2 + 0x15) = 1;
LAB_145aff4ec:
        uVar15 = (ulonglong)local_3fc;
        pcVar22 = pcVar22 + 0x104;
      }
LAB_145aff509:
      pFVar16 = (FScriptContainerElement *)((longlong)pFVar16 + 8);
    }
  }
  uVar10 = 0;
  local_3f0 = (FScriptContainerElement *)0x0;
  if (0 < local_410.ArrayNum) {
    do {
      uVar12 = uVar10;
      if ((int)uVar8 < local_410.ArrayNum) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_440 = (FScriptContainerElement *)(longlong)local_410.ArrayNum;
        local_448 = (char **)(longlong)(int)uVar8;
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar14;
        }
      }
      iVar9 = strcmp((char *)(local_410.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x218),
                     "VK_LAYER_RENDERDOC_Capture");
      if (iVar9 == 0) goto LAB_145aff59a;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_410.ArrayNum);
  }
  uVar8 = 0xffffffff;
LAB_145aff59a:
  pFVar6 = local_3d0;
  pTVar5 = local_3f8;
  GRenderDocFound = uVar8 != 0xffffffff;
  if (local_3d0->bSupportsDebugUtilsExt == false) {
    uVar8 = FVulkanExtensionBase::FindExtension<FVulkanDeviceExtension>
                      (local_3f8,"VK_EXT_debug_marker");
    ppcVar19 = (char **)(longlong)(int)uVar8;
    if ((uVar8 == 0xffffffff) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ExtensionIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                           ,0x1e6,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar14;
    }
    uVar12 = uVar10;
    if ((int)uVar8 < pTVar5->ArrayNum) {
      uVar12 = ~uVar8 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_440 = (FScriptContainerElement *)(longlong)pTVar5->ArrayNum;
      local_448 = ppcVar19;
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar14;
      }
    }
    if (*(char *)(*(longlong *)((pTVar5->AllocatorInstance).Data + (longlong)ppcVar19 * 8) + 0x15)
        != '\0') {
      if ((int)uVar8 < pTVar5->ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (local_448 = ppcVar19, local_440 = (FScriptContainerElement *)(longlong)pTVar5->ArrayNum,
         bVar7 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar14;
      }
      *(undefined1 *)
       (*(longlong *)((pTVar5->AllocatorInstance).Data + (longlong)ppcVar19 * 8) + 0x16) = 1;
      pFVar6->bSupportsDebugMarkerExt = true;
    }
  }
  if (0 < __return_storage_ptr__->ArrayNum) {
    `SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>'::__l59::<lambda_2>::operator()
              (local_400,__return_storage_ptr__);
  }
  AlgoImpl::
  IntroSortInternal<char_const_*,int,FIdentityFunctor,TDereferenceWrapper<char_const_*,TLess<void>_>_>
            ((char **)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum,local_411,(TLess<void> *)&local_411);
  DestructItems<FLayerWithExtensions,int>
            ((FLayerWithExtensions *)local_410.AllocatorInstance.Data,local_410.ArrayNum);
  if ((FLayerWithExtensions *)local_410.AllocatorInstance.Data != (FLayerWithExtensions *)0x0) {
    FMemory::Free(local_410.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension> @ 145aff730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<char_const_*,TSizedDefaultAllocator<32>_> * __cdecl
SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>
          (TArray<char_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FVulkanIntanceSetupHelper *param_1,
          TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  size_t sVar10;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FLayerWithExtensions *pFVar15;
  char **ppcVar16;
  int *piVar17;
  char *pcVar18;
  char *pcVar19;
  undefined1 auStack_468 [32];
  char **local_448;
  FScriptContainerElement *local_440;
  longlong local_438;
  longlong local_430;
  undefined8 local_428;
  undefined1 local_418;
  undefined1 local_417;
  undefined1 local_416;
  undefined1 local_415;
  undefined1 local_414;
  undefined1 local_413;
  FIdentityFunctor local_412;
  FIdentityFunctor local_411;
  TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> local_410;
  undefined1 local_400 [4];
  uint local_3fc;
  TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
  *local_3f8;
  FScriptContainerElement *local_3f0;
  char *local_3e8;
  char *local_3e0;
  uint local_3d8;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> *local_3d0;
  int *local_3c8;
  FVulkanIntanceSetupHelper *local_3c0;
  FScriptContainerElement *local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_468;
  piVar17 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar17 = 0;
  local_3f8 = param_2;
  local_3d0 = __return_storage_ptr__;
  local_3c8 = piVar17;
  local_3c0 = param_1;
  FVulkanIntanceSetupHelper::EnumerateLayerProperties(param_1,&local_410);
  AlgoImpl::
  IntroSortInternal<FLayerWithExtensions,int,FIdentityFunctor,TDereferenceWrapper<FLayerWithExtensions,_SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>_::__l2::<lambda_1>_>_>
            ((FLayerWithExtensions *)local_410.AllocatorInstance.Data,local_410.ArrayNum,local_412,
             (<lambda_1> *)&local_412);
  if (3 < (byte)LogVulkanRHI._0_1_) {
    local_448 = (char **)0x1506488c0;
    if (local_410.ArrayNum != 0) {
      local_448 = (char **)0x150698f60;
    }
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  iVar7 = local_410.ArrayNum;
  pFVar15 = (FLayerWithExtensions *)
            (local_410.AllocatorInstance.Data + (longlong)local_410.ArrayNum * 0x218);
  FVar14.Data = local_410.AllocatorInstance.Data;
  while( true ) {
    if (local_410.ArrayNum != iVar7) {
      local_418 = 0;
      `TCheckedPointerIterator<FLayerWithExtensions,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_418);
    }
    if ((FLayerWithExtensions *)FVar14.Data == pFVar15) break;
    if (3 < (byte)LogVulkanRHI._0_1_) {
      local_3a8._padding_ = 0;
      if ((FLayerWithExtensions *)FVar14.Data == (FLayerWithExtensions *)0x0) {
        local_3a8.Ptr = (wchar_t *)0x0;
        local_3a8.StringLength = 0;
      }
      else {
        sVar10 = strlen((char *)FVar14.Data);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3a8,(char *)FVar14.Data,(int)sVar10,Yes);
      }
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    FVar14.Data = FVar14.Data + 0x218;
  }
  local_3fc = FVulkanIntanceSetupHelper::ExternalLayers.ArrayNum;
  uVar12 = FVulkanIntanceSetupHelper::ExternalLayers._8_8_ & 0xffffffff;
  local_3b8 = FVulkanIntanceSetupHelper::ExternalLayers.AllocatorInstance.Data +
              (longlong)(int)local_3fc * 8;
  FVar14.Data = FVulkanIntanceSetupHelper::ExternalLayers.AllocatorInstance.Data;
  while( true ) {
    pFVar1 = local_3b8;
    pFVar13 = (FScriptContainerElement *)0x0;
    local_3f0 = FVar14.Data;
    if (FVulkanIntanceSetupHelper::ExternalLayers.ArrayNum != (int)uVar12) {
      local_417 = 0;
      `TCheckedPointerIterator<char_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_417);
    }
    if (FVar14.Data == pFVar1) break;
    pcVar19 = *(char **)FVar14.Data;
    local_3e8 = pcVar19;
    uVar6 = FindLayerIndexInList(pcVar19,&local_410);
    ppcVar16 = (char **)(longlong)(int)uVar6;
    if (uVar6 == 0xffffffff) {
      if (2 < (byte)LogVulkanRHI._0_1_) {
        local_288._padding_ = 0;
        if (pcVar19 == (char *)0x0) {
          local_288.Ptr = (wchar_t *)0x0;
          local_288.StringLength = 0;
        }
        else {
          sVar10 = strlen(pcVar19);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,pcVar19,(int)sVar10,Yes);
        }
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)&local_3e8) &&
         ((FScriptContainerElement *)&local_3e8 < pFVar1 + (longlong)*piVar17 * 8)) {
        local_430 = (longlong)__return_storage_ptr__->ArrayNum;
        local_428 = 8;
        local_448 = &local_3e8;
        local_440 = pFVar1;
        local_438 = (longlong)*piVar17;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar17) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar17);
      }
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(char **)(pFVar1 + (longlong)iVar7 * 8) = local_3e8;
      uVar8 = 0;
      if ((int)uVar6 < local_410.ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_440 = (FScriptContainerElement *)(longlong)local_410.ArrayNum;
        local_448 = ppcVar16;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar11;
        }
      }
      FVar4.Data = local_410.AllocatorInstance.Data;
      local_3d8 = *(uint *)(local_410.AllocatorInstance.Data + (longlong)ppcVar16 * 0x218 + 0x210);
      uVar12 = (ulonglong)(int)local_3d8;
      pcVar19 = *(char **)&local_410.AllocatorInstance.Data[(longlong)ppcVar16 * 0x218 + 0x208].
                           field_0x0;
      pcVar18 = pcVar19 + uVar12 * 0x104;
      while( true ) {
        if (*(int *)(FVar4.Data + (longlong)ppcVar16 * 0x218 + 0x210) != (int)uVar12) {
          local_416 = 0;
          `TCheckedPointerIterator<VkExtensionProperties_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_416);
        }
        FVar14.Data = local_3f0;
        piVar17 = local_3c8;
        param_1 = local_3c0;
        __return_storage_ptr__ = local_3d0;
        if (pcVar19 == pcVar18) break;
        pFVar13 = (local_3f8->AllocatorInstance).Data;
        iVar7 = local_3f8->ArrayNum;
        pFVar1 = pFVar13 + (longlong)iVar7 * 8;
        while( true ) {
          if (local_3f8->ArrayNum != iVar7) {
            local_415 = 0;
            `TCheckedPointerIterator<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_415);
          }
          if (pFVar13 == pFVar1) goto LAB_145affafb;
          lVar2 = *(longlong *)pFVar13;
          iVar9 = strcmp(*(char **)(lVar2 + 8),pcVar19);
          if (iVar9 == 0) break;
          pFVar13 = pFVar13 + 8;
        }
        *(undefined1 *)(lVar2 + 0x15) = 1;
LAB_145affafb:
        uVar12 = (ulonglong)local_3d8;
        pcVar19 = pcVar19 + 0x104;
      }
    }
    FVar14.Data = FVar14.Data + 8;
    uVar12 = (ulonglong)local_3fc;
  }
  do {
    while( true ) {
      local_3f0 = pFVar13;
      if (pFVar13 == (FScriptContainerElement *)0x0) {
        FVulkanIntanceSetupHelper::AddDebugLayers
                  (param_1,&local_410,local_3f8,__return_storage_ptr__);
        if (0 < __return_storage_ptr__->ArrayNum) {
          `SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>'::__l59::<lambda_2>::
          operator()(local_400,__return_storage_ptr__);
        }
        AlgoImpl::
        IntroSortInternal<char_const_*,int,FIdentityFunctor,TDereferenceWrapper<char_const_*,TLess<void>_>_>
                  ((char **)(__return_storage_ptr__->AllocatorInstance).Data,
                   __return_storage_ptr__->ArrayNum,local_411,(TLess<void> *)&local_411);
        DestructItems<FLayerWithExtensions,int>
                  ((FLayerWithExtensions *)local_410.AllocatorInstance.Data,local_410.ArrayNum);
        if ((FLayerWithExtensions *)local_410.AllocatorInstance.Data != (FLayerWithExtensions *)0x0)
        {
          FMemory::Free(local_410.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pcVar19 = *(char **)pFVar13;
      local_3e0 = pcVar19;
      uVar6 = FindLayerIndexInList(pcVar19,&local_410);
      ppcVar16 = (char **)(longlong)(int)uVar6;
      if (uVar6 != 0xffffffff) break;
      if ((byte)LogVulkanRHI._0_1_ < 3) goto LAB_145affd8a;
      local_168._padding_ = 0;
      if (pcVar19 == (char *)0x0) {
        local_168.Ptr = (wchar_t *)0x0;
        local_168.StringLength = 0;
      }
      else {
        sVar10 = strlen(pcVar19);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,pcVar19,(int)sVar10,Yes);
      }
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_168._padding_ == (void *)0x0) goto LAB_145affd8a;
      FMemory::Free((void *)local_168._padding_);
      pFVar13 = (FScriptContainerElement *)((longlong)pFVar13 + 8);
    }
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_3e0) &&
       ((FScriptContainerElement *)&local_3e0 < pFVar1 + (longlong)*piVar17 * 8)) {
      local_430 = (longlong)__return_storage_ptr__->ArrayNum;
      local_428 = 8;
      local_448 = &local_3e0;
      local_440 = pFVar1;
      local_438 = (longlong)*piVar17;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar11;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar17) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar17);
    }
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(char **)(pFVar1 + (longlong)iVar7 * 8) = local_3e0;
    uVar8 = 0;
    if ((int)uVar6 < local_410.ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_440 = (FScriptContainerElement *)(longlong)local_410.ArrayNum;
      local_448 = ppcVar16;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TArray<char_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar11;
      }
    }
    FVar14.Data = local_410.AllocatorInstance.Data;
    local_3fc = *(uint *)(local_410.AllocatorInstance.Data + (longlong)ppcVar16 * 0x218 + 0x210);
    uVar12 = (ulonglong)(int)local_3fc;
    pcVar19 = *(char **)&local_410.AllocatorInstance.Data[(longlong)ppcVar16 * 0x218 + 0x208].
                         field_0x0;
    pcVar18 = pcVar19 + uVar12 * 0x104;
    while( true ) {
      if (*(int *)(FVar14.Data + (longlong)ppcVar16 * 0x218 + 0x210) != (int)uVar12) {
        local_414 = 0;
        `TCheckedPointerIterator<VkExtensionProperties_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_414);
      }
      piVar17 = local_3c8;
      param_1 = local_3c0;
      pFVar13 = local_3f0;
      __return_storage_ptr__ = local_3d0;
      if (pcVar19 == pcVar18) break;
      pFVar13 = (local_3f8->AllocatorInstance).Data;
      iVar7 = local_3f8->ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar7 * 8;
      while( true ) {
        if (local_3f8->ArrayNum != iVar7) {
          local_413 = 0;
          `TCheckedPointerIterator<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_413);
        }
        if (pFVar13 == pFVar1) goto LAB_145affd6c;
        lVar2 = *(longlong *)pFVar13;
        iVar9 = strcmp(*(char **)(lVar2 + 8),pcVar19);
        if (iVar9 == 0) break;
        pFVar13 = pFVar13 + 8;
      }
      *(undefined1 *)(lVar2 + 0x15) = 1;
LAB_145affd6c:
      uVar12 = (ulonglong)local_3fc;
      pcVar19 = pcVar19 + 0x104;
    }
LAB_145affd8a:
    pFVar13 = (FScriptContainerElement *)((longlong)pFVar13 + 8);
  } while( true );
}

// Sort<TSortableMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<`FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID'::__l2::<lambda_1>_>_> @ 145affe20

void __thiscall
TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID_::__l2::<lambda_1>_>_>
          (void *this,
          FKeyComparisonClass<_protected:_void___cdecl_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID(void)_::_2_::<lambda_1>_>
          *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FKeyComparisonClass<_protected:_void___cdecl_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID(void)_::_2_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34)) {
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact(this);
    iVar4 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **)this;
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
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID_::__l2::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<_protected:_void___cdecl_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID(void)_::_2_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// _Reallocate_grow_by<`std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append'::__l2::<lambda_1>,char_const_*,unsigned___int64> @ 145affeb0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
_Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,ulong64 param_1,
          <lambda_1> param_2,char *param_3,ulong64 param_4)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  char *_Src;
  char *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  
  _Size = (this->_Mypair)._Myval2._Mysize;
  if (0x7fffffffffffffff - _Size < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar3 = _Size + param_1 | 0xf;
  uVar2 = (this->_Mypair)._Myval2._Myres;
  uVar4 = 0x7fffffffffffffff;
  if (((uVar3 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
     (uVar1 = uVar2 + (uVar2 >> 1), uVar4 = uVar3, uVar3 < uVar1)) {
    uVar4 = uVar1;
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 + 1);
  (this->_Mypair)._Myval2._Mysize = _Size + param_1;
  (this->_Mypair)._Myval2._Myres = uVar4;
  pcVar5 = _Dst + _Size;
  if (uVar2 < 0x10) {
    memcpy(_Dst,this,_Size);
    memcpy(pcVar5,param_3,param_4);
    pcVar5[param_4] = '\0';
  }
  else {
    _Src = (this->_Mypair)._Myval2._Bx._Ptr;
    memcpy(_Dst,_Src,_Size);
    memcpy(pcVar5,param_3,param_4);
    uVar4 = uVar2 + 1;
    pcVar5[param_4] = '\0';
    pcVar5 = _Src;
    if (0xfff < uVar4) {
      pcVar5 = *(char **)(_Src + -8);
      uVar4 = uVar2 + 0x28;
      if ((char *)0x1f < _Src + (-8 - (longlong)pcVar5)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pcVar5,uVar4);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return this;
}

// ~TFunction_OwnedObject<`VulkanRHI::FDeferredDeletionQueue2::ReleaseResources'::__l21::<lambda_1>,1,1> @ 145b04780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`VulkanRHI::FDeferredDeletionQueue2::ReleaseResources'::__l21::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_VulkanRHI::FDeferredDeletionQueue2::ReleaseResources_::__l21::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`VulkanRHI::FDeferredDeletionQueue2::ReleaseResources'::`21'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<VulkanRHI::FDeferredDeletionQueue2::FEntry,int>
            (*(FEntry **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~basic_string<char,std::char_traits<char>,std::allocator<char>_> @ 145b04d30

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
~basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong64 uVar4;
  
  uVar1 = (this->_Mypair)._Myval2._Myres;
  if (0xf < uVar1) {
    pcVar2 = (this->_Mypair)._Myval2._Bx._Ptr;
    uVar4 = uVar1 + 1;
    pcVar3 = pcVar2;
    if (0xfff < uVar4) {
      pcVar3 = *(char **)(pcVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if ((char *)0x1f < pcVar2 + (-8 - (longlong)pcVar3)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pcVar3,uVar4);
  }
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0xf;
  (this->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  return;
}

// operator() @ 145b07580

void __thiscall
`SetupLayers<FVulkanDeviceSetupHelper,FVulkanDeviceExtension>'::__l59::<lambda_2>::operator()
          (void *this,TArray<char_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  char *_Str2;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar8 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar12 = (longlong)(int)uVar8;
    lVar11 = lVar12 * 8;
    do {
      uVar1 = uVar8 - 1;
      if (uVar8 != 0) {
        uVar10 = ~uVar8 >> 0x1f;
        uVar7 = uVar1;
        lVar9 = lVar11;
        do {
          lVar9 = lVar9 + -8;
          uVar5 = 0;
          if ((int)uVar7 < param_1->ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Str2 = *(char **)((param_1->AllocatorInstance).Data + lVar9);
          uVar5 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = strcmp(*(char **)((param_1->AllocatorInstance).Data + lVar11),_Str2);
          if (iVar6 == 0) {
            uVar7 = 0;
            if ((int)uVar8 < param_1->ArrayNum) {
              uVar7 = uVar10;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar6 = ~uVar8 + param_1->ArrayNum;
            pFVar2 = (param_1->AllocatorInstance).Data;
            if (1 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              memmove(pFVar2 + lVar12 * 8,pFVar2 + (longlong)(param_1->ArrayNum - iVar6) * 8,
                      (longlong)iVar6 << 3);
            }
            param_1->ArrayNum = param_1->ArrayNum + -1;
            break;
          }
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      lVar12 = lVar12 + -1;
      lVar11 = lVar11 + -8;
      uVar8 = uVar1;
    } while (-1 < (int)uVar1);
  }
  return;
}

// operator() @ 145b07760

void __thiscall
`SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>'::__l59::<lambda_2>::operator()
          (void *this,TArray<char_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  char *_Str2;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar8 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar12 = (longlong)(int)uVar8;
    lVar11 = lVar12 * 8;
    do {
      uVar1 = uVar8 - 1;
      if (uVar8 != 0) {
        uVar10 = ~uVar8 >> 0x1f;
        uVar7 = uVar1;
        lVar9 = lVar11;
        do {
          lVar9 = lVar9 + -8;
          uVar5 = 0;
          if ((int)uVar7 < param_1->ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Str2 = *(char **)((param_1->AllocatorInstance).Data + lVar9);
          uVar5 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = strcmp(*(char **)((param_1->AllocatorInstance).Data + lVar11),_Str2);
          if (iVar6 == 0) {
            uVar7 = 0;
            if ((int)uVar8 < param_1->ArrayNum) {
              uVar7 = uVar10;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar6 = ~uVar8 + param_1->ArrayNum;
            pFVar2 = (param_1->AllocatorInstance).Data;
            if (1 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              memmove(pFVar2 + lVar12 * 8,pFVar2 + (longlong)(param_1->ArrayNum - iVar6) * 8,
                      (longlong)iVar6 << 3);
            }
            param_1->ArrayNum = param_1->ArrayNum + -1;
            break;
          }
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      lVar12 = lVar12 + -1;
      lVar11 = lVar11 + -8;
      uVar8 = uVar1;
    } while (-1 < (int)uVar1);
  }
  return;
}

// `scalar_deleting_destructor' @ 145b07e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FOptionalVulkanDeviceExtensions_&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FOptionalVulkanDeviceExtensions_&),1,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAUFOptionalVulkanDeviceExtensions___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b07ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`VulkanRHI::FDeferredDeletionQueue2::ReleaseResources'::__l21::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`VulkanRHI::FDeferredDeletionQueue2::ReleaseResources'::`21'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<VulkanRHI::FDeferredDeletionQueue2::FEntry,int>
            (*(FEntry **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b07f30

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
VulkanRHI::FStagingBuffer::_scalar_deleting_destructor_(FStagingBuffer *this,uint param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FStagingBuffer_VulkanRHI__6B_;
  FMemoryManager::FreeVulkanAllocation
            (&this->Device->MemoryManager,&this->Allocation,EVulkanFreeFlag_None);
  uVar1 = (this->Allocation).field_0x1b;
  if (((this->Allocation).Type != 0 & (byte)uVar1 >> 6) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAllocation()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xebe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08000

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
VulkanRHI::FTempBlockAllocator::_scalar_deleting_destructor_(FTempBlockAllocator *this,uint param_1)

{
  ~FTempBlockAllocator(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08040

void * __thiscall
FVulkanAMDBufferMarkerExtension::_scalar_deleting_destructor_
          (FVulkanAMDBufferMarkerExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b080a0

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
FVulkanDeviceExtension::_scalar_deleting_destructor_(FVulkanDeviceExtension *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->FlagSetter != 0) {
    plVar1 = *(longlong **)&(this->FlagSetter).field_0x28;
    plVar2 = (longlong *)&(this->FlagSetter).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08100

void * __thiscall
FVulkanEXTCalibratedTimestampsExtension::_scalar_deleting_destructor_
          (FVulkanEXTCalibratedTimestampsExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08160

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTDescriptorBuffer::_scalar_deleting_destructor_
          (FVulkanEXTDescriptorBuffer *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b081c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTDescriptorIndexingExtension::_scalar_deleting_destructor_
          (FVulkanEXTDescriptorIndexingExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08220

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTDeviceFaultExtension::_scalar_deleting_destructor_
          (FVulkanEXTDeviceFaultExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08280

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTExtendedDynamicState2Extension::_scalar_deleting_destructor_
          (FVulkanEXTExtendedDynamicState2Extension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b082e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTExtendedDynamicState3Extension::_scalar_deleting_destructor_
          (FVulkanEXTExtendedDynamicState3Extension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08340

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTExtendedDynamicStateExtension::_scalar_deleting_destructor_
          (FVulkanEXTExtendedDynamicStateExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b083a0

void * __thiscall
FVulkanEXTFragmentDensityMap2Extension::_scalar_deleting_destructor_
          (FVulkanEXTFragmentDensityMap2Extension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08400

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTFragmentDensityMapExtension::_scalar_deleting_destructor_
          (FVulkanEXTFragmentDensityMapExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08460

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTGraphicsPipelineLibraryExtension::_scalar_deleting_destructor_
          (FVulkanEXTGraphicsPipelineLibraryExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b084c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void * __thiscall
FVulkanEXTHostImageCopyExtension::_scalar_deleting_destructor_
          (FVulkanEXTHostImageCopyExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08520

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTHostQueryResetExtension::_scalar_deleting_destructor_
          (FVulkanEXTHostQueryResetExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08580

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTImageCompressionControlExtension::_scalar_deleting_destructor_
          (FVulkanEXTImageCompressionControlExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b085e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTMeshShaderExtension::_scalar_deleting_destructor_
          (FVulkanEXTMeshShaderExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08640

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTMutableDescriptorTypeExtension::_scalar_deleting_destructor_
          (FVulkanEXTMutableDescriptorTypeExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b086a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTPipelineCreationCacheControlExtension::_scalar_deleting_destructor_
          (FVulkanEXTPipelineCreationCacheControlExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08700

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTScalarBlockLayoutExtension::_scalar_deleting_destructor_
          (FVulkanEXTScalarBlockLayoutExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08760

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTShaderDemoteToHelperInvocationExtension::_scalar_deleting_destructor_
          (FVulkanEXTShaderDemoteToHelperInvocationExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b087c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTShaderObjectExtension::_scalar_deleting_destructor_
          (FVulkanEXTShaderObjectExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08820

void * __thiscall
FVulkanEXTShaderViewportIndexLayerExtension::_scalar_deleting_destructor_
          (FVulkanEXTShaderViewportIndexLayerExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08880

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTSubgroupSizeControlExtension::_scalar_deleting_destructor_
          (FVulkanEXTSubgroupSizeControlExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b088e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTValidationFeaturesExtension::_scalar_deleting_destructor_
          (FVulkanEXTValidationFeaturesExtension *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  
  pFVar1 = (this->ValidationFeaturesEnabled).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08950

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanEXTVertexInputDynamicStateExtension::_scalar_deleting_destructor_
          (FVulkanEXTVertexInputDynamicStateExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b089b0

void * __thiscall
FVulkanExtensionBase::_scalar_deleting_destructor_(FVulkanExtensionBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b089f0

void * __thiscall
FVulkanInstanceExtension::_scalar_deleting_destructor_(FVulkanInstanceExtension *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->FlagSetter != 0) {
    plVar1 = *(longlong **)&(this->FlagSetter).field_0x28;
    plVar2 = (longlong *)&(this->FlagSetter).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08a50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHR16BitStorageExtension::_scalar_deleting_destructor_
          (FVulkanKHR16BitStorageExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08ab0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRAccelerationStructureExtension::_scalar_deleting_destructor_
          (FVulkanKHRAccelerationStructureExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08b10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRBufferDeviceAddressExtension::_scalar_deleting_destructor_
          (FVulkanKHRBufferDeviceAddressExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08b70

void * __thiscall
FVulkanKHRComputeShaderDerivatives::_scalar_deleting_destructor_
          (FVulkanKHRComputeShaderDerivatives *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08bd0

void * __thiscall
FVulkanKHRDepthStencilResolveExtension::_scalar_deleting_destructor_
          (FVulkanKHRDepthStencilResolveExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08c30

void * __thiscall
FVulkanKHRDriverPropertiesExtension::_scalar_deleting_destructor_
          (FVulkanKHRDriverPropertiesExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08c90

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRDynamicRenderingExtension::_scalar_deleting_destructor_
          (FVulkanKHRDynamicRenderingExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08cf0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRDynamicRenderingLocalReadExtension::_scalar_deleting_destructor_
          (FVulkanKHRDynamicRenderingLocalReadExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08d50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRDynamicRenderingUnusedAttachmentsExtension::_scalar_deleting_destructor_
          (FVulkanKHRDynamicRenderingUnusedAttachmentsExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08db0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRFragmentShaderBarycentricExtension::_scalar_deleting_destructor_
          (FVulkanKHRFragmentShaderBarycentricExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08e10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRFragmentShadingRateExtension::_scalar_deleting_destructor_
          (FVulkanKHRFragmentShadingRateExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08e70

void * __thiscall
FVulkanKHRGetMemoryRequirements2Extension::_scalar_deleting_destructor_
          (FVulkanKHRGetMemoryRequirements2Extension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08ed0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRMaintenance4Extension::_scalar_deleting_destructor_
          (FVulkanKHRMaintenance4Extension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08f30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRMaintenance5Extension::_scalar_deleting_destructor_
          (FVulkanKHRMaintenance5Extension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08f90

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRMaintenance7Extension::_scalar_deleting_destructor_
          (FVulkanKHRMaintenance7Extension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b08ff0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRMultiviewExtension::_scalar_deleting_destructor_
          (FVulkanKHRMultiviewExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b09050

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRRayQueryExtension::_scalar_deleting_destructor_
          (FVulkanKHRRayQueryExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b090b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRRayTracingPipelineExtension::_scalar_deleting_destructor_
          (FVulkanKHRRayTracingPipelineExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b09110

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRRayTracingPositionFetchExtension::_scalar_deleting_destructor_
          (FVulkanKHRRayTracingPositionFetchExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b09170

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRSamplerYcbcrConversionExtension::_scalar_deleting_destructor_
          (FVulkanKHRSamplerYcbcrConversionExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b091d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRSeparateDepthStencilLayoutsExtension::_scalar_deleting_destructor_
          (FVulkanKHRSeparateDepthStencilLayoutsExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b09230

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRShaderFloat16Int8Extension::_scalar_deleting_destructor_
          (FVulkanKHRShaderFloat16Int8Extension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b09290

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRSynchronization2::_scalar_deleting_destructor_
          (FVulkanKHRSynchronization2 *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b092f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanKHRTimelineSemaphoreExtension::_scalar_deleting_destructor_
          (FVulkanKHRTimelineSemaphoreExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b09350

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

void * __thiscall FVulkanLayout::_scalar_deleting_destructor_(FVulkanLayout *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FVulkanLayout__6B_;
  if ((this->bUsesBindless == false) && (this->PipelineLayout != (VkPipelineLayout_T *)0x0)) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&this->Device->DeferredDeletionQueue,PipelineLayout,(ulong64)this->PipelineLayout);
    this->PipelineLayout = (VkPipelineLayout_T *)0x0;
  }
  FVulkanDescriptorSetsLayout::~FVulkanDescriptorSetsLayout(&this->DescriptorSetLayout);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b093d0

void * __thiscall
FVulkanNVDeviceDiagnosticCheckpointsExtension::_scalar_deleting_destructor_
          (FVulkanNVDeviceDiagnosticCheckpointsExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b09430

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanNVDeviceDiagnosticConfigExtension::_scalar_deleting_destructor_
          (FVulkanNVDeviceDiagnosticConfigExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b09490

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanNVRayTracingValidationExtension::_scalar_deleting_destructor_
          (FVulkanNVRayTracingValidationExtension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b094f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanShaderAtomicInt64Extension::_scalar_deleting_destructor_
          (FVulkanShaderAtomicInt64Extension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b09550

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void * __thiscall
FVulkanShaderImageAtomicInt64Extension::_scalar_deleting_destructor_
          (FVulkanShaderImageAtomicInt64Extension *this,uint param_1)

{
  longlong *plVar1;
  
  if (this->_padding_ != 0) {
    plVar1 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar1 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FVulkanExtensionBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145b095b0

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
FVulkanTransientHeapCache::_scalar_deleting_destructor_
          (FVulkanTransientHeapCache *this,uint param_1)

{
  FRHITransientHeapCache::~FRHITransientHeapCache((FRHITransientHeapCache *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// AdjustToNonCoherentAtomSize @ 145b0ab20

ulong64 __cdecl
VulkanRHI::AdjustToNonCoherentAtomSize
          (ulong64 param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  if (param_2 == 0xffffffffffffffff) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if ((param_3 < param_1 + param_2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RequestedOffset + RequestedSize <= WholeAllocationSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0xf9b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar4 = (param_4 - 1) + param_2;
    uVar3 = uVar4 - uVar4 % param_4;
    if (param_3 - param_1 < uVar3) {
      uVar3 = param_3 - param_1;
    }
  }
  return uVar3;
}

// CalculateBufferAlignmentFromVKUsageFlags @ 145b0f7c0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl
VulkanRHI::CalculateBufferAlignmentFromVKUsageFlags(FVulkanDevice *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Str;
  size_t sVar5;
  undefined1 auStack_188 [32];
  uint local_168;
  wchar_t *local_160;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((param_2 & 0x2c) != 0) {
    uVar4 = (uint)(param_1->GpuProps).limits.minTexelBufferOffsetAlignment;
    uVar1 = (uint)(param_1->GpuProps).limits.minStorageBufferOffsetAlignment;
    if (uVar4 < 0x10) {
      uVar4 = 0x10;
    }
    if (uVar4 <= uVar1) {
      return uVar1;
    }
    return uVar4;
  }
  if ((param_2 & 0xc0) == 0) {
    if ((param_2 & 0x100000) != 0) {
      if (0xf < GRHIGlobals.RayTracing.AccelerationStructureAlignment) {
        return GRHIGlobals.RayTracing.AccelerationStructureAlignment;
      }
      return 0x10;
    }
    if ((param_2 & 0x10) != 0) {
      uVar4 = (uint)(param_1->GpuProps).limits.minUniformBufferOffsetAlignment;
      if (0xf < uVar4) {
        return uVar4;
      }
      return 0x10;
    }
    _Str = string_VkBufferUsageFlags(&local_158,param_2);
    if (0xf < (_Str->_Mypair)._Myval2._Myres) {
      _Str = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (_Str->_Mypair)._Myval2._Bx._Ptr;
    }
    local_138._padding_ = 0;
    if (_Str == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar5 = strlen((char *)_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,(char *)_Str,(int)sVar5,Yes);
    }
    local_168 = param_2;
    local_160 = local_138.Ptr;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xa51,
                       L"Unknown buffer alignment for VkBufferUsageFlags combination: 0x%x (%s)");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_158);
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return 0x10;
}

// DecMetaStats @ 145b12770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl VulkanRHI::DecMetaStats(EVulkanAllocationMetaType param_1,uint param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_Allocated> FVar5;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_UniformBuffer> FVar6;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_MultiBuffer> FVar7;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_RingBuffer> FVar8;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_FrameTempBuffer> FVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageRenderTarget> FVar10;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageOther> FVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferUAV> FVar12;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferStaging> FVar13;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferOther> FVar14;
  ulonglong uVar15;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  
  uVar15 = (ulonglong)param_2;
  if (param_2 != 0) {
    FVar5 = StatPtr_STAT_VulkanAllocation_Allocated;
    if (StatPtr_STAT_VulkanAllocation_Allocated ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_Allocated>)0x0) {
      pFVar4 = ::FName::FName(&local_res20,"STAT_VulkanAllocation_Allocated");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_Allocated>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_Allocated,
                         *pFVar4,L"_Total","STATGROUP_VulkanMemory","STATCAT_Advanced",
                         L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_res18.Number = FVar1.Number;
    FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar15,false);
  }
  switch(param_1) {
  case EVulkanAllocationMetaUniformBuffer:
    if (uVar15 != 0) {
      FVar6 = StatPtr_STAT_VulkanAllocation_UniformBuffer;
      if (StatPtr_STAT_VulkanAllocation_UniformBuffer ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_UniformBuffer>)0x0) {
        pFVar4 = ::FName::FName(&local_res18,"STAT_VulkanAllocation_UniformBuffer");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_UniformBuffer>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_UniformBuffer
                           ,*pFVar4,L"UniformBuffer","STATGROUP_VulkanMemory","STATCAT_Advanced",
                           L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar6;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaMultiBuffer:
    if (uVar15 != 0) {
      FVar7 = StatPtr_STAT_VulkanAllocation_MultiBuffer;
      if (StatPtr_STAT_VulkanAllocation_MultiBuffer ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_MultiBuffer>)0x0) {
        pFVar4 = ::FName::FName(&local_58,"STAT_VulkanAllocation_MultiBuffer");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_MultiBuffer>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_MultiBuffer,
                           *pFVar4,L"MultiBuffer","STATGROUP_VulkanMemory","STATCAT_Advanced",
                           L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar7;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaRingBuffer:
    if (uVar15 != 0) {
      FVar8 = StatPtr_STAT_VulkanAllocation_RingBuffer;
      if (StatPtr_STAT_VulkanAllocation_RingBuffer ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_RingBuffer>)0x0) {
        pFVar4 = ::FName::FName(&local_50,"STAT_VulkanAllocation_RingBuffer");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_RingBuffer>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_RingBuffer,
                           *pFVar4,L"RingBuffer","STATGROUP_VulkanMemory","STATCAT_Advanced",
                           L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar8;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaFrameTempBuffer:
    if (uVar15 != 0) {
      FVar9 = StatPtr_STAT_VulkanAllocation_FrameTempBuffer;
      if (StatPtr_STAT_VulkanAllocation_FrameTempBuffer ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_FrameTempBuffer>)0x0) {
        pFVar4 = ::FName::FName(&local_48,"STAT_VulkanAllocation_FrameTempBuffer");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_FrameTempBuffer>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_VulkanAllocation_FrameTempBuffer,*pFVar4,L"FrameTempBuffer"
                           ,"STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,false,
                           ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar9;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaImageRenderTarget:
    if (uVar15 != 0) {
      FVar10 = StatPtr_STAT_VulkanAllocation_ImageRenderTarget;
      if (StatPtr_STAT_VulkanAllocation_ImageRenderTarget ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageRenderTarget>)0x0) {
        pFVar4 = ::FName::FName(&local_40,"STAT_VulkanAllocation_ImageRenderTarget");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageRenderTarget>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_VulkanAllocation_ImageRenderTarget,*pFVar4,
                            L"ImageRenderTarget","STATGROUP_VulkanMemory","STATCAT_Advanced",
                            L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar10;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaImageOther:
    if (uVar15 != 0) {
      FVar11 = StatPtr_STAT_VulkanAllocation_ImageOther;
      if (StatPtr_STAT_VulkanAllocation_ImageOther ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageOther>)0x0) {
        pFVar4 = ::FName::FName(&local_38,"STAT_VulkanAllocation_ImageOther");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageOther>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_ImageOther,
                            *pFVar4,L"ImageOther","STATGROUP_VulkanMemory","STATCAT_Advanced",
                            L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar11;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaBufferUAV:
    if (uVar15 != 0) {
      FVar12 = StatPtr_STAT_VulkanAllocation_BufferUAV;
      if (StatPtr_STAT_VulkanAllocation_BufferUAV ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferUAV>)0x0) {
        pFVar4 = ::FName::FName(&local_30,"STAT_VulkanAllocation_BufferUAV");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferUAV>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_BufferUAV,
                            *pFVar4,L"BufferUAV","STATGROUP_VulkanMemory","STATCAT_Advanced",
                            L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar12;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaBufferStaging:
    if (uVar15 != 0) {
      FVar13 = StatPtr_STAT_VulkanAllocation_BufferStaging;
      if (StatPtr_STAT_VulkanAllocation_BufferStaging ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferStaging>)0x0) {
        pFVar4 = ::FName::FName(&local_28,"STAT_VulkanAllocation_BufferStaging");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferStaging>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_VulkanAllocation_BufferStaging,*pFVar4,L"BufferStaging",
                            "STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,false,
                            ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar13;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaBufferOther:
    if (uVar15 != 0) {
      FVar14 = StatPtr_STAT_VulkanAllocation_BufferOther;
      if (StatPtr_STAT_VulkanAllocation_BufferOther ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferOther>)0x0) {
        pFVar4 = ::FName::FName(&local_20,"STAT_VulkanAllocation_BufferOther");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferOther>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_BufferOther,
                            *pFVar4,L"BufferOther","STATGROUP_VulkanMemory","STATCAT_Advanced",
                            L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar14;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar15,false);
    }
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x1f2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// FindLayerIndexInList @ 145b1a100

int __cdecl
FindLayerIndexInList
          (char *param_1,TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = param_2->ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      iVar4 = strcmp((char *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x218),
                     param_1);
      if (iVar4 == 0) {
        return uVar5;
      }
      iVar4 = param_2->ArrayNum;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
  }
  return -1;
}

// IncMetaStats @ 145b23fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl VulkanRHI::IncMetaStats(EVulkanAllocationMetaType param_1,uint param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_Allocated> FVar5;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_UniformBuffer> FVar6;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_MultiBuffer> FVar7;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_RingBuffer> FVar8;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_FrameTempBuffer> FVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageRenderTarget> FVar10;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageOther> FVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferUAV> FVar12;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferStaging> FVar13;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferOther> FVar14;
  ulonglong uVar15;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  
  uVar15 = (ulonglong)param_2;
  if (param_2 != 0) {
    FVar5 = StatPtr_STAT_VulkanAllocation_Allocated;
    if (StatPtr_STAT_VulkanAllocation_Allocated ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_Allocated>)0x0) {
      pFVar4 = ::FName::FName(&local_res20,"STAT_VulkanAllocation_Allocated");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_Allocated>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_Allocated,
                         *pFVar4,L"_Total","STATGROUP_VulkanMemory","STATCAT_Advanced",
                         L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_res18.Number = FVar1.Number;
    FThreadStats::AddMessage<__int64>(FVar1,Add,uVar15,false);
  }
  switch(param_1) {
  case EVulkanAllocationMetaUniformBuffer:
    if (uVar15 != 0) {
      FVar6 = StatPtr_STAT_VulkanAllocation_UniformBuffer;
      if (StatPtr_STAT_VulkanAllocation_UniformBuffer ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_UniformBuffer>)0x0) {
        pFVar4 = ::FName::FName(&local_res18,"STAT_VulkanAllocation_UniformBuffer");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_UniformBuffer>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_UniformBuffer
                           ,*pFVar4,L"UniformBuffer","STATGROUP_VulkanMemory","STATCAT_Advanced",
                           L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar6;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Add,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaMultiBuffer:
    if (uVar15 != 0) {
      FVar7 = StatPtr_STAT_VulkanAllocation_MultiBuffer;
      if (StatPtr_STAT_VulkanAllocation_MultiBuffer ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_MultiBuffer>)0x0) {
        pFVar4 = ::FName::FName(&local_58,"STAT_VulkanAllocation_MultiBuffer");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_MultiBuffer>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_MultiBuffer,
                           *pFVar4,L"MultiBuffer","STATGROUP_VulkanMemory","STATCAT_Advanced",
                           L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar7;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Add,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaRingBuffer:
    if (uVar15 != 0) {
      FVar8 = StatPtr_STAT_VulkanAllocation_RingBuffer;
      if (StatPtr_STAT_VulkanAllocation_RingBuffer ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_RingBuffer>)0x0) {
        pFVar4 = ::FName::FName(&local_50,"STAT_VulkanAllocation_RingBuffer");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_RingBuffer>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_RingBuffer,
                           *pFVar4,L"RingBuffer","STATGROUP_VulkanMemory","STATCAT_Advanced",
                           L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar8;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Add,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaFrameTempBuffer:
    if (uVar15 != 0) {
      FVar9 = StatPtr_STAT_VulkanAllocation_FrameTempBuffer;
      if (StatPtr_STAT_VulkanAllocation_FrameTempBuffer ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_FrameTempBuffer>)0x0) {
        pFVar4 = ::FName::FName(&local_48,"STAT_VulkanAllocation_FrameTempBuffer");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_FrameTempBuffer>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_VulkanAllocation_FrameTempBuffer,*pFVar4,L"FrameTempBuffer"
                           ,"STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,false,
                           ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar9;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Add,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaImageRenderTarget:
    if (uVar15 != 0) {
      FVar10 = StatPtr_STAT_VulkanAllocation_ImageRenderTarget;
      if (StatPtr_STAT_VulkanAllocation_ImageRenderTarget ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageRenderTarget>)0x0) {
        pFVar4 = ::FName::FName(&local_40,"STAT_VulkanAllocation_ImageRenderTarget");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageRenderTarget>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_VulkanAllocation_ImageRenderTarget,*pFVar4,
                            L"ImageRenderTarget","STATGROUP_VulkanMemory","STATCAT_Advanced",
                            L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar10;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Add,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaImageOther:
    if (uVar15 != 0) {
      FVar11 = StatPtr_STAT_VulkanAllocation_ImageOther;
      if (StatPtr_STAT_VulkanAllocation_ImageOther ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageOther>)0x0) {
        pFVar4 = ::FName::FName(&local_38,"STAT_VulkanAllocation_ImageOther");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_ImageOther>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_ImageOther,
                            *pFVar4,L"ImageOther","STATGROUP_VulkanMemory","STATCAT_Advanced",
                            L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar11;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Add,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaBufferUAV:
    if (uVar15 != 0) {
      FVar12 = StatPtr_STAT_VulkanAllocation_BufferUAV;
      if (StatPtr_STAT_VulkanAllocation_BufferUAV ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferUAV>)0x0) {
        pFVar4 = ::FName::FName(&local_30,"STAT_VulkanAllocation_BufferUAV");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferUAV>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_BufferUAV,
                            *pFVar4,L"BufferUAV","STATGROUP_VulkanMemory","STATCAT_Advanced",
                            L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar12;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Add,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaBufferStaging:
    if (uVar15 != 0) {
      FVar13 = StatPtr_STAT_VulkanAllocation_BufferStaging;
      if (StatPtr_STAT_VulkanAllocation_BufferStaging ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferStaging>)0x0) {
        pFVar4 = ::FName::FName(&local_28,"STAT_VulkanAllocation_BufferStaging");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferStaging>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_VulkanAllocation_BufferStaging,*pFVar4,L"BufferStaging",
                            "STATGROUP_VulkanMemory","STATCAT_Advanced",L"Vulkan Memory",true,false,
                            ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar13;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Add,uVar15,false);
    }
    break;
  case EVulkanAllocationMetaBufferOther:
    if (uVar15 != 0) {
      FVar14 = StatPtr_STAT_VulkanAllocation_BufferOther;
      if (StatPtr_STAT_VulkanAllocation_BufferOther ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferOther>)0x0) {
        pFVar4 = ::FName::FName(&local_20,"STAT_VulkanAllocation_BufferOther");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferOther>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_BufferOther,
                            *pFVar4,L"BufferOther","STATGROUP_VulkanMemory","STATCAT_Advanced",
                            L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar14;
      local_res18.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res18.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Add,uVar15,false);
    }
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x217,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Initialize @ 145b26470

void __cdecl VulkanLLM::Initialize(void)

{
  FLowLevelMemTracker *this;
  FName *pFVar1;
  int iVar2;
  
  iVar2 = 0x6f;
  pFVar1 = &ELLMTagNamesVulkan[0].StatName;
  do {
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::RegisterPlatformTag(this,iVar2,(wchar_t *)pFVar1[-1],*pFVar1,pFVar1[1],-1);
    iVar2 = iVar2 + 1;
    pFVar1 = pFVar1 + 3;
  } while ((longlong)pFVar1 < 0x155169a70);
  return;
}

// IsWindows8OrGreater @ 145b270f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl IsWindows8OrGreater(void)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined1 auStack_158 [32];
  _OSVERSIONINFOEXW local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.dwOSVersionInfoSize = 0x11c;
  local_138.dwBuildNumber = 0;
  local_138.dwPlatformId = 0;
  memset(local_138.szCSDVersion,0,0x100);
  local_138.wServicePackMinor = 0;
  local_138.wSuiteMask = 0;
  local_138.wProductType = '\0';
  local_138.wReserved = '\0';
  uVar2 = VerSetConditionMask(0,2,3);
  uVar2 = VerSetConditionMask(uVar2,1,3);
  dwlConditionMask = VerSetConditionMask(uVar2,0x20,3);
  local_138.dwMajorVersion = 6;
  local_138.dwMinorVersion = 2;
  local_138.wServicePackMajor = 0;
  BVar1 = VerifyVersionInfoW(&local_138,0x23,dwlConditionMask);
  return BVar1 != 0;
}

// LoadValidationCache @ 145b273e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LoadValidationCache(VkDevice_T *param_1,VkValidationCacheEXT_T **param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  _func___cdecl_void *p_Var5;
  ForAnyElementType FVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_38 = 0x3b9d3b00;
  local_34 = 0;
  uStack_2c = 0;
  uStack_14 = 0;
  local_24 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  uStack_18 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pFVar4 = FPaths::ProjectSavedDir();
  operator/(&local_48,pFVar4,L"VulkanValidation.cache");
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  bVar2 = FFileHelper::LoadFileToArray(&local_58,(wchar_t *)FVar6.Data,2);
  iVar3 = local_58.ArrayNum;
  if ((bVar2) && (0 < local_58.ArrayNum)) {
    if (*(int *)local_58.AllocatorInstance.Data < 1) {
      if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar1 = local_58.ArrayMax;
    }
    else {
      if (*(int *)(local_58.AllocatorInstance.Data + 4) == 1) goto LAB_145b27553;
      if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar1 = local_58.ArrayMax;
    }
    if ((longlong)local_58._8_8_ < 0) {
      local_58._8_8_ = (ulonglong)uVar1 << 0x20;
      iVar3 = 0;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
        iVar3 = local_58.ArrayNum;
      }
    }
    else {
      iVar3 = 0;
      local_58._8_8_ = (ulonglong)uVar1 << 0x20;
    }
  }
LAB_145b27553:
  iStack_1c = iVar3 >> 0x1f;
  FVar6.Data = (FScriptContainerElement *)0x0;
  if (0 < iVar3) {
    FVar6.Data = local_58.AllocatorInstance.Data;
  }
  uStack_18 = SUB84(FVar6.Data,0);
  uStack_14 = (undefined4)((ulonglong)FVar6.Data >> 0x20);
  iStack_20 = iVar3;
  p_Var5 = (*VulkanDynamicAPI::vkGetDeviceProcAddr)(param_1,"vkCreateValidationCacheEXT");
  if (((p_Var5 != (_func___cdecl_void *)0x0) &&
      (iVar3 = (*p_Var5)(param_1,&local_38,&VulkanRHI::GAllocationCallbacks,param_2), iVar3 != 0))
     && (2 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// MetaTypeCanEvict @ 145b2b580

bool __cdecl VulkanRHI::MetaTypeCanEvict(EVulkanAllocationMetaType param_1)

{
  return param_1 == EVulkanAllocationMetaImageOther;
}

// VulkanAllocationMetaTypeToString @ 145b38930

wchar_t * __cdecl VulkanRHI::VulkanAllocationMetaTypeToString(EVulkanAllocationMetaType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case EVulkanAllocationMetaUnknown:
    return L"Unknown";
  case EVulkanAllocationMetaUniformBuffer:
    return L"UBO";
  case EVulkanAllocationMetaMultiBuffer:
    return L"MultiBuf";
  case EVulkanAllocationMetaRingBuffer:
    return L"RingBuf";
  case EVulkanAllocationMetaFrameTempBuffer:
    return L"FrameTemp";
  case EVulkanAllocationMetaImageRenderTarget:
    return L"ImageRT";
  case EVulkanAllocationMetaImageOther:
    return L"Image";
  case EVulkanAllocationMetaBufferUAV:
    return L"BufferUAV";
  case EVulkanAllocationMetaBufferStaging:
    return L"BufferStg";
  case EVulkanAllocationMetaBufferOther:
    return L"BufOthr";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                     ,0x1cc,L"");
  if (!bVar2) {
    return L"";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// VulkanAllocationTypeToString @ 145b38a30

wchar_t * __cdecl VulkanRHI::VulkanAllocationTypeToString(EVulkanAllocationType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == EVulkanAllocationEmpty) {
    return L"Empty";
  }
  if (param_1 == EVulkanAllocationPooledBuffer) {
    return L"PooledBuffer";
  }
  if (param_1 == EVulkanAllocationBuffer) {
    return L"Buffer";
  }
  if (param_1 != EVulkanAllocationImage) {
    if (param_1 == EVulkanAllocationImageDedicated) {
      return L"ImageDedicated";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x1b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"";
  }
  return L"Image";
}

// VulkanTrackFillInfo @ 145b38c40

void __cdecl VulkanTrackFillInfo(FVulkanTrackInfo *param_1,char *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong64 uVar3;
  ulong64 *puVar4;
  
  if (0 < GVulkanMemoryBackTrace) {
    puVar4 = param_1->Data;
    if ((puVar4 == (ulong64 *)0x0) || (-1 < param_1->SizeOrLine)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)GVulkanMemoryBackTrace;
      uVar3 = SUB168(ZEXT816(8) * auVar1,0);
      if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      puVar4 = operator_new__(uVar3);
    }
    uVar2 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                      (puVar4,GVulkanMemoryBackTrace,(void *)0x0);
    param_1->Data = puVar4;
    param_1->SizeOrLine = -uVar2;
    return;
  }
  param_1->Data = param_2;
  param_1->SizeOrLine = param_3;
  return;
}

// VulkanTrackFreeInfo @ 145b38cc0

void __cdecl VulkanTrackFreeInfo(FVulkanTrackInfo *param_1)

{
  if (param_1->SizeOrLine < 0) {
    operator_delete__(param_1->Data);
    param_1->Data = (void *)0x0;
    param_1->SizeOrLine = 0;
    return;
  }
  param_1->Data = (void *)0x0;
  param_1->SizeOrLine = 0;
  return;
}

// VulkanTrackGetString @ 145b38d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl VulkanTrackGetString(FString *__return_storage_ptr__,FVulkanTrackInfo *param_1)

{
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  ulong64 *puVar6;
  int iVar7;
  undefined1 auStackY_4078 [32];
  FString local_4048;
  char local_4038 [16384];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4078;
  iVar3 = param_1->SizeOrLine;
  puVar6 = param_1->Data;
  if (iVar3 < 0) {
    memset(local_4038,0,0x4000);
    iVar7 = 0;
    if (0 < -iVar3) {
      do {
        FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                  (iVar7,*puVar6,local_4038,0x4000,(FGenericCrashContext *)0x0);
        pcVar5 = "\r\n";
        sVar1 = strlen(local_4038);
        iVar3 = (int)sVar1 + 1;
        if (iVar3 < 0x4000) {
          cVar4 = '\r';
          pcVar2 = local_4038 + (int)sVar1;
          do {
            *pcVar2 = cVar4;
            pcVar5 = pcVar5 + 1;
            cVar4 = *pcVar5;
            pcVar2 = pcVar2 + 1;
            iVar3 = iVar3 + 1;
            if (cVar4 == '\0') break;
          } while (iVar3 < 0x4000);
          *pcVar2 = '\0';
        }
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar7 < -param_1->SizeOrLine);
    }
    FString::PrintfImpl(&local_4048,L"\n%S\n");
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_4048.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_4048.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_4048.Data.ArrayMax;
  }
  else {
    FString::PrintfImpl(__return_storage_ptr__,L"\n%S:%d\n");
  }
  return __return_storage_ptr__;
}

// string_VkBufferUsageFlagBits @ 145b38ec0

/* WARNING: Enum "VkBufferUsageFlagBits": Some values do not have unique names */

char * __cdecl string_VkBufferUsageFlagBits(VkBufferUsageFlagBits param_1)

{
  char *pcVar1;
  
  if ((int)param_1 < 0x2001) {
    if (param_1 == VK_BUFFER_USAGE_VIDEO_DECODE_SRC_BIT_KHR) {
      return "VK_BUFFER_USAGE_VIDEO_DECODE_SRC_BIT_KHR";
    }
    if ((int)param_1 < 0x41) {
      if (param_1 != VK_BUFFER_USAGE_INDEX_BUFFER_BIT) {
        switch(param_1) {
        case VK_BUFFER_USAGE_TRANSFER_SRC_BIT:
          return "VK_BUFFER_USAGE_TRANSFER_SRC_BIT";
        case VK_BUFFER_USAGE_TRANSFER_DST_BIT:
          return "VK_BUFFER_USAGE_TRANSFER_DST_BIT";
        default:
          return "Unhandled VkBufferUsageFlagBits";
        case VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT:
          return "VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT";
        case VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT:
          return "VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT";
        case VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT:
          return "VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT";
        case VK_BUFFER_USAGE_STORAGE_BUFFER_BIT:
          return "VK_BUFFER_USAGE_STORAGE_BUFFER_BIT";
        }
      }
      return "VK_BUFFER_USAGE_INDEX_BUFFER_BIT";
    }
    if (0x400 < (int)param_1) {
      if (param_1 != VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT) {
        pcVar1 = "Unhandled VkBufferUsageFlagBits";
        if (param_1 == VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT) {
          pcVar1 = "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT";
        }
        return pcVar1;
      }
      return "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT";
    }
    if (param_1 != VK_BUFFER_USAGE_RAY_TRACING_BIT_NV) {
      if (param_1 == VK_BUFFER_USAGE_VERTEX_BUFFER_BIT) {
        return "VK_BUFFER_USAGE_VERTEX_BUFFER_BIT";
      }
      if (param_1 != VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT) {
        pcVar1 = "Unhandled VkBufferUsageFlagBits";
        if (param_1 == VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT) {
          pcVar1 = "VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT";
        }
        return pcVar1;
      }
      return "VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT";
    }
    return "VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR";
  }
  if ((int)param_1 < 0x200001) {
    if (param_1 == VK_BUFFER_USAGE_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT) {
      return "VK_BUFFER_USAGE_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT";
    }
    if (0x20000 < (int)param_1) {
      if (param_1 != VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR) {
        pcVar1 = "Unhandled VkBufferUsageFlagBits";
        if (param_1 == VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR) {
          pcVar1 = "VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR";
        }
        return pcVar1;
      }
      return "VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR";
    }
    if (param_1 == VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT) {
      return "VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT";
    }
    if (param_1 != VK_BUFFER_USAGE_VIDEO_DECODE_DST_BIT_KHR) {
      if (param_1 != VK_BUFFER_USAGE_VIDEO_ENCODE_DST_BIT_KHR) {
        pcVar1 = "Unhandled VkBufferUsageFlagBits";
        if (param_1 == VK_BUFFER_USAGE_VIDEO_ENCODE_SRC_BIT_KHR) {
          pcVar1 = "VK_BUFFER_USAGE_VIDEO_ENCODE_SRC_BIT_KHR";
        }
        return pcVar1;
      }
      return "VK_BUFFER_USAGE_VIDEO_ENCODE_DST_BIT_KHR";
    }
    return "VK_BUFFER_USAGE_VIDEO_DECODE_DST_BIT_KHR";
  }
  if (param_1 == VK_BUFFER_USAGE_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT) {
    return "VK_BUFFER_USAGE_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT";
  }
  if (param_1 == VK_BUFFER_USAGE_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT) {
    return "VK_BUFFER_USAGE_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT";
  }
  if (param_1 == VK_BUFFER_USAGE_MICROMAP_STORAGE_BIT_EXT) {
    return "VK_BUFFER_USAGE_MICROMAP_STORAGE_BIT_EXT";
  }
  if (param_1 != VK_BUFFER_USAGE_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT) {
    pcVar1 = "VK_BUFFER_USAGE_TILE_MEMORY_BIT_QCOM";
    if (param_1 != VK_BUFFER_USAGE_TILE_MEMORY_BIT_QCOM) {
      pcVar1 = "Unhandled VkBufferUsageFlagBits";
    }
    return pcVar1;
  }
  return "VK_BUFFER_USAGE_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT";
}

// string_VkBufferUsageFlags @ 145b390f0

/* WARNING: Enum "VkBufferUsageFlagBits": Some values do not have unique names */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
string_VkBufferUsageFlags
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          uint param_1)

{
  char *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  char *pcVar4;
  size_t _Size;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  VkBufferUsageFlagBits VVar6;
  <lambda_1> local_res10;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if (param_1 != 0) {
    VVar6 = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    do {
      if ((param_1 & 1) != 0) {
        uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
        if (uVar1 != 0) {
          uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
          if (uVar2 == uVar1) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                      (__return_storage_ptr__,1,local_res10,"|",1);
          }
          else {
            (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1 + 1;
            pbVar5 = __return_storage_ptr__;
            if (0xf < uVar2) {
              pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
            }
            *(undefined2 *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + uVar1) = 0x7c;
          }
        }
        pcVar4 = string_VkBufferUsageFlagBits(VVar6);
        _Size = strlen(pcVar4);
        uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
        uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
        if (uVar1 - uVar3 < _Size) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                    (__return_storage_ptr__,_Size,local_res10,pcVar4,_Size);
        }
        else {
          (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar3 + _Size;
          pbVar5 = __return_storage_ptr__;
          if (0xf < uVar1) {
            pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
          }
          _Dst = (pbVar5->_Mypair)._Myval2._Bx._Buf + uVar3;
          memmove(_Dst,pcVar4,_Size);
          _Dst[_Size] = '\0';
        }
      }
      VVar6 = VVar6 << 1 | (uint)((int)VVar6 < 0);
      param_1 = param_1 >> 1;
    } while (param_1 != 0);
  }
  if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize == 0) {
    if (0x14 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0x15;
      pcVar4 = (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      memmove(pcVar4,"VkBufferUsageFlags(0)",0x15);
      pcVar4[0x15] = '\0';
      return __return_storage_ptr__;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
              (__return_storage_ptr__,0x15,local_res10,"VkBufferUsageFlags(0)",0x15);
  }
  return __return_storage_ptr__;
}

// string_VkFormat @ 145b392c0

/* WARNING: Enum "VkFormat": Some values do not have unique names */

char * __cdecl string_VkFormat(VkFormat param_1)

{
  if ((int)param_1 < 0x3b9b9cf1) {
    if (param_1 == VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG) {
      return "VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG";
    }
    switch(param_1) {
    case VK_FORMAT_UNDEFINED:
      return "VK_FORMAT_UNDEFINED";
    case VK_FORMAT_R4G4_UNORM_PACK8:
      return "VK_FORMAT_R4G4_UNORM_PACK8";
    case VK_FORMAT_R4G4B4A4_UNORM_PACK16:
      return "VK_FORMAT_R4G4B4A4_UNORM_PACK16";
    case VK_FORMAT_B4G4R4A4_UNORM_PACK16:
      return "VK_FORMAT_B4G4R4A4_UNORM_PACK16";
    case VK_FORMAT_R5G6B5_UNORM_PACK16:
      return "VK_FORMAT_R5G6B5_UNORM_PACK16";
    case VK_FORMAT_B5G6R5_UNORM_PACK16:
      return "VK_FORMAT_B5G6R5_UNORM_PACK16";
    case VK_FORMAT_R5G5B5A1_UNORM_PACK16:
      return "VK_FORMAT_R5G5B5A1_UNORM_PACK16";
    case VK_FORMAT_B5G5R5A1_UNORM_PACK16:
      return "VK_FORMAT_B5G5R5A1_UNORM_PACK16";
    case VK_FORMAT_A1R5G5B5_UNORM_PACK16:
      return "VK_FORMAT_A1R5G5B5_UNORM_PACK16";
    case VK_FORMAT_R8_UNORM:
      return "VK_FORMAT_R8_UNORM";
    case VK_FORMAT_R8_SNORM:
      return "VK_FORMAT_R8_SNORM";
    case VK_FORMAT_R8_USCALED:
      return "VK_FORMAT_R8_USCALED";
    case VK_FORMAT_R8_SSCALED:
      return "VK_FORMAT_R8_SSCALED";
    case VK_FORMAT_R8_UINT:
      return "VK_FORMAT_R8_UINT";
    case VK_FORMAT_R8_SINT:
      return "VK_FORMAT_R8_SINT";
    case VK_FORMAT_R8_SRGB:
      return "VK_FORMAT_R8_SRGB";
    case VK_FORMAT_R8G8_UNORM:
      return "VK_FORMAT_R8G8_UNORM";
    case VK_FORMAT_R8G8_SNORM:
      return "VK_FORMAT_R8G8_SNORM";
    case VK_FORMAT_R8G8_USCALED:
      return "VK_FORMAT_R8G8_USCALED";
    case VK_FORMAT_R8G8_SSCALED:
      return "VK_FORMAT_R8G8_SSCALED";
    case VK_FORMAT_R8G8_UINT:
      return "VK_FORMAT_R8G8_UINT";
    case VK_FORMAT_R8G8_SINT:
      return "VK_FORMAT_R8G8_SINT";
    case VK_FORMAT_R8G8_SRGB:
      return "VK_FORMAT_R8G8_SRGB";
    case VK_FORMAT_R8G8B8_UNORM:
      return "VK_FORMAT_R8G8B8_UNORM";
    case VK_FORMAT_R8G8B8_SNORM:
      return "VK_FORMAT_R8G8B8_SNORM";
    case VK_FORMAT_R8G8B8_USCALED:
      return "VK_FORMAT_R8G8B8_USCALED";
    case VK_FORMAT_R8G8B8_SSCALED:
      return "VK_FORMAT_R8G8B8_SSCALED";
    case VK_FORMAT_R8G8B8_UINT:
      return "VK_FORMAT_R8G8B8_UINT";
    case VK_FORMAT_R8G8B8_SINT:
      return "VK_FORMAT_R8G8B8_SINT";
    case VK_FORMAT_R8G8B8_SRGB:
      return "VK_FORMAT_R8G8B8_SRGB";
    case VK_FORMAT_B8G8R8_UNORM:
      return "VK_FORMAT_B8G8R8_UNORM";
    case VK_FORMAT_B8G8R8_SNORM:
      return "VK_FORMAT_B8G8R8_SNORM";
    case VK_FORMAT_B8G8R8_USCALED:
      return "VK_FORMAT_B8G8R8_USCALED";
    case VK_FORMAT_B8G8R8_SSCALED:
      return "VK_FORMAT_B8G8R8_SSCALED";
    case VK_FORMAT_B8G8R8_UINT:
      return "VK_FORMAT_B8G8R8_UINT";
    case VK_FORMAT_B8G8R8_SINT:
      return "VK_FORMAT_B8G8R8_SINT";
    case VK_FORMAT_B8G8R8_SRGB:
      return "VK_FORMAT_B8G8R8_SRGB";
    case VK_FORMAT_R8G8B8A8_UNORM:
      return "VK_FORMAT_R8G8B8A8_UNORM";
    case VK_FORMAT_R8G8B8A8_SNORM:
      return "VK_FORMAT_R8G8B8A8_SNORM";
    case VK_FORMAT_R8G8B8A8_USCALED:
      return "VK_FORMAT_R8G8B8A8_USCALED";
    case VK_FORMAT_R8G8B8A8_SSCALED:
      return "VK_FORMAT_R8G8B8A8_SSCALED";
    case VK_FORMAT_R8G8B8A8_UINT:
      return "VK_FORMAT_R8G8B8A8_UINT";
    case VK_FORMAT_R8G8B8A8_SINT:
      return "VK_FORMAT_R8G8B8A8_SINT";
    case VK_FORMAT_R8G8B8A8_SRGB:
      return "VK_FORMAT_R8G8B8A8_SRGB";
    case VK_FORMAT_B8G8R8A8_UNORM:
      return "VK_FORMAT_B8G8R8A8_UNORM";
    case VK_FORMAT_B8G8R8A8_SNORM:
      return "VK_FORMAT_B8G8R8A8_SNORM";
    case VK_FORMAT_B8G8R8A8_USCALED:
      return "VK_FORMAT_B8G8R8A8_USCALED";
    case VK_FORMAT_B8G8R8A8_SSCALED:
      return "VK_FORMAT_B8G8R8A8_SSCALED";
    case VK_FORMAT_B8G8R8A8_UINT:
      return "VK_FORMAT_B8G8R8A8_UINT";
    case VK_FORMAT_B8G8R8A8_SINT:
      return "VK_FORMAT_B8G8R8A8_SINT";
    case VK_FORMAT_B8G8R8A8_SRGB:
      return "VK_FORMAT_B8G8R8A8_SRGB";
    case VK_FORMAT_A8B8G8R8_UNORM_PACK32:
      return "VK_FORMAT_A8B8G8R8_UNORM_PACK32";
    case VK_FORMAT_A8B8G8R8_SNORM_PACK32:
      return "VK_FORMAT_A8B8G8R8_SNORM_PACK32";
    case VK_FORMAT_A8B8G8R8_USCALED_PACK32:
      return "VK_FORMAT_A8B8G8R8_USCALED_PACK32";
    case VK_FORMAT_A8B8G8R8_SSCALED_PACK32:
      return "VK_FORMAT_A8B8G8R8_SSCALED_PACK32";
    case VK_FORMAT_A8B8G8R8_UINT_PACK32:
      return "VK_FORMAT_A8B8G8R8_UINT_PACK32";
    case VK_FORMAT_A8B8G8R8_SINT_PACK32:
      return "VK_FORMAT_A8B8G8R8_SINT_PACK32";
    case VK_FORMAT_A8B8G8R8_SRGB_PACK32:
      return "VK_FORMAT_A8B8G8R8_SRGB_PACK32";
    case VK_FORMAT_A2R10G10B10_UNORM_PACK32:
      return "VK_FORMAT_A2R10G10B10_UNORM_PACK32";
    case VK_FORMAT_A2R10G10B10_SNORM_PACK32:
      return "VK_FORMAT_A2R10G10B10_SNORM_PACK32";
    case VK_FORMAT_A2R10G10B10_USCALED_PACK32:
      return "VK_FORMAT_A2R10G10B10_USCALED_PACK32";
    case VK_FORMAT_A2R10G10B10_SSCALED_PACK32:
      return "VK_FORMAT_A2R10G10B10_SSCALED_PACK32";
    case VK_FORMAT_A2R10G10B10_UINT_PACK32:
      return "VK_FORMAT_A2R10G10B10_UINT_PACK32";
    case VK_FORMAT_A2R10G10B10_SINT_PACK32:
      return "VK_FORMAT_A2R10G10B10_SINT_PACK32";
    case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
      return "VK_FORMAT_A2B10G10R10_UNORM_PACK32";
    case VK_FORMAT_A2B10G10R10_SNORM_PACK32:
      return "VK_FORMAT_A2B10G10R10_SNORM_PACK32";
    case VK_FORMAT_A2B10G10R10_USCALED_PACK32:
      return "VK_FORMAT_A2B10G10R10_USCALED_PACK32";
    case VK_FORMAT_A2B10G10R10_SSCALED_PACK32:
      return "VK_FORMAT_A2B10G10R10_SSCALED_PACK32";
    case VK_FORMAT_A2B10G10R10_UINT_PACK32:
      return "VK_FORMAT_A2B10G10R10_UINT_PACK32";
    case VK_FORMAT_A2B10G10R10_SINT_PACK32:
      return "VK_FORMAT_A2B10G10R10_SINT_PACK32";
    case VK_FORMAT_R16_UNORM:
      return "VK_FORMAT_R16_UNORM";
    case VK_FORMAT_R16_SNORM:
      return "VK_FORMAT_R16_SNORM";
    case VK_FORMAT_R16_USCALED:
      return "VK_FORMAT_R16_USCALED";
    case VK_FORMAT_R16_SSCALED:
      return "VK_FORMAT_R16_SSCALED";
    case VK_FORMAT_R16_UINT:
      return "VK_FORMAT_R16_UINT";
    case VK_FORMAT_R16_SINT:
      return "VK_FORMAT_R16_SINT";
    case VK_FORMAT_R16_SFLOAT:
      return "VK_FORMAT_R16_SFLOAT";
    case VK_FORMAT_R16G16_UNORM:
      return "VK_FORMAT_R16G16_UNORM";
    case VK_FORMAT_R16G16_SNORM:
      return "VK_FORMAT_R16G16_SNORM";
    case VK_FORMAT_R16G16_USCALED:
      return "VK_FORMAT_R16G16_USCALED";
    case VK_FORMAT_R16G16_SSCALED:
      return "VK_FORMAT_R16G16_SSCALED";
    case VK_FORMAT_R16G16_UINT:
      return "VK_FORMAT_R16G16_UINT";
    case VK_FORMAT_R16G16_SINT:
      return "VK_FORMAT_R16G16_SINT";
    case VK_FORMAT_R16G16_SFLOAT:
      return "VK_FORMAT_R16G16_SFLOAT";
    case VK_FORMAT_R16G16B16_UNORM:
      return "VK_FORMAT_R16G16B16_UNORM";
    case VK_FORMAT_R16G16B16_SNORM:
      return "VK_FORMAT_R16G16B16_SNORM";
    case VK_FORMAT_R16G16B16_USCALED:
      return "VK_FORMAT_R16G16B16_USCALED";
    case VK_FORMAT_R16G16B16_SSCALED:
      return "VK_FORMAT_R16G16B16_SSCALED";
    case VK_FORMAT_R16G16B16_UINT:
      return "VK_FORMAT_R16G16B16_UINT";
    case VK_FORMAT_R16G16B16_SINT:
      return "VK_FORMAT_R16G16B16_SINT";
    case VK_FORMAT_R16G16B16_SFLOAT:
      return "VK_FORMAT_R16G16B16_SFLOAT";
    case VK_FORMAT_R16G16B16A16_UNORM:
      return "VK_FORMAT_R16G16B16A16_UNORM";
    case VK_FORMAT_R16G16B16A16_SNORM:
      return "VK_FORMAT_R16G16B16A16_SNORM";
    case VK_FORMAT_R16G16B16A16_USCALED:
      return "VK_FORMAT_R16G16B16A16_USCALED";
    case VK_FORMAT_R16G16B16A16_SSCALED:
      return "VK_FORMAT_R16G16B16A16_SSCALED";
    case VK_FORMAT_R16G16B16A16_UINT:
      return "VK_FORMAT_R16G16B16A16_UINT";
    case VK_FORMAT_R16G16B16A16_SINT:
      return "VK_FORMAT_R16G16B16A16_SINT";
    case VK_FORMAT_R16G16B16A16_SFLOAT:
      return "VK_FORMAT_R16G16B16A16_SFLOAT";
    case VK_FORMAT_R32_UINT:
      return "VK_FORMAT_R32_UINT";
    case VK_FORMAT_R32_SINT:
      return "VK_FORMAT_R32_SINT";
    case VK_FORMAT_R32_SFLOAT:
      return "VK_FORMAT_R32_SFLOAT";
    case VK_FORMAT_R32G32_UINT:
      return "VK_FORMAT_R32G32_UINT";
    case VK_FORMAT_R32G32_SINT:
      return "VK_FORMAT_R32G32_SINT";
    case VK_FORMAT_R32G32_SFLOAT:
      return "VK_FORMAT_R32G32_SFLOAT";
    case VK_FORMAT_R32G32B32_UINT:
      return "VK_FORMAT_R32G32B32_UINT";
    case VK_FORMAT_R32G32B32_SINT:
      return "VK_FORMAT_R32G32B32_SINT";
    case VK_FORMAT_R32G32B32_SFLOAT:
      return "VK_FORMAT_R32G32B32_SFLOAT";
    case VK_FORMAT_R32G32B32A32_UINT:
      return "VK_FORMAT_R32G32B32A32_UINT";
    case VK_FORMAT_R32G32B32A32_SINT:
      return "VK_FORMAT_R32G32B32A32_SINT";
    case VK_FORMAT_R32G32B32A32_SFLOAT:
      return "VK_FORMAT_R32G32B32A32_SFLOAT";
    case VK_FORMAT_R64_UINT:
      return "VK_FORMAT_R64_UINT";
    case VK_FORMAT_R64_SINT:
      return "VK_FORMAT_R64_SINT";
    case VK_FORMAT_R64_SFLOAT:
      return "VK_FORMAT_R64_SFLOAT";
    case VK_FORMAT_R64G64_UINT:
      return "VK_FORMAT_R64G64_UINT";
    case VK_FORMAT_R64G64_SINT:
      return "VK_FORMAT_R64G64_SINT";
    case VK_FORMAT_R64G64_SFLOAT:
      return "VK_FORMAT_R64G64_SFLOAT";
    case VK_FORMAT_R64G64B64_UINT:
      return "VK_FORMAT_R64G64B64_UINT";
    case VK_FORMAT_R64G64B64_SINT:
      return "VK_FORMAT_R64G64B64_SINT";
    case VK_FORMAT_R64G64B64_SFLOAT:
      return "VK_FORMAT_R64G64B64_SFLOAT";
    case VK_FORMAT_R64G64B64A64_UINT:
      return "VK_FORMAT_R64G64B64A64_UINT";
    case VK_FORMAT_R64G64B64A64_SINT:
      return "VK_FORMAT_R64G64B64A64_SINT";
    case VK_FORMAT_R64G64B64A64_SFLOAT:
      return "VK_FORMAT_R64G64B64A64_SFLOAT";
    case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
      return "VK_FORMAT_B10G11R11_UFLOAT_PACK32";
    case VK_FORMAT_E5B9G9R9_UFLOAT_PACK32:
      return "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32";
    case VK_FORMAT_D16_UNORM:
      return "VK_FORMAT_D16_UNORM";
    case VK_FORMAT_X8_D24_UNORM_PACK32:
      return "VK_FORMAT_X8_D24_UNORM_PACK32";
    case VK_FORMAT_D32_SFLOAT:
      return "VK_FORMAT_D32_SFLOAT";
    case VK_FORMAT_S8_UINT:
      return "VK_FORMAT_S8_UINT";
    case VK_FORMAT_D16_UNORM_S8_UINT:
      return "VK_FORMAT_D16_UNORM_S8_UINT";
    case VK_FORMAT_D24_UNORM_S8_UINT:
      return "VK_FORMAT_D24_UNORM_S8_UINT";
    case VK_FORMAT_D32_SFLOAT_S8_UINT:
      return "VK_FORMAT_D32_SFLOAT_S8_UINT";
    case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
      return "VK_FORMAT_BC1_RGB_UNORM_BLOCK";
    case VK_FORMAT_BC1_RGB_SRGB_BLOCK:
      return "VK_FORMAT_BC1_RGB_SRGB_BLOCK";
    case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
      return "VK_FORMAT_BC1_RGBA_UNORM_BLOCK";
    case VK_FORMAT_BC1_RGBA_SRGB_BLOCK:
      return "VK_FORMAT_BC1_RGBA_SRGB_BLOCK";
    case VK_FORMAT_BC2_UNORM_BLOCK:
      return "VK_FORMAT_BC2_UNORM_BLOCK";
    case VK_FORMAT_BC2_SRGB_BLOCK:
      return "VK_FORMAT_BC2_SRGB_BLOCK";
    case VK_FORMAT_BC3_UNORM_BLOCK:
      return "VK_FORMAT_BC3_UNORM_BLOCK";
    case VK_FORMAT_BC3_SRGB_BLOCK:
      return "VK_FORMAT_BC3_SRGB_BLOCK";
    case VK_FORMAT_BC4_UNORM_BLOCK:
      return "VK_FORMAT_BC4_UNORM_BLOCK";
    case VK_FORMAT_BC4_SNORM_BLOCK:
      return "VK_FORMAT_BC4_SNORM_BLOCK";
    case VK_FORMAT_BC5_UNORM_BLOCK:
      return "VK_FORMAT_BC5_UNORM_BLOCK";
    case VK_FORMAT_BC5_SNORM_BLOCK:
      return "VK_FORMAT_BC5_SNORM_BLOCK";
    case VK_FORMAT_BC6H_UFLOAT_BLOCK:
      return "VK_FORMAT_BC6H_UFLOAT_BLOCK";
    case VK_FORMAT_BC6H_SFLOAT_BLOCK:
      return "VK_FORMAT_BC6H_SFLOAT_BLOCK";
    case VK_FORMAT_BC7_UNORM_BLOCK:
      return "VK_FORMAT_BC7_UNORM_BLOCK";
    case VK_FORMAT_BC7_SRGB_BLOCK:
      return "VK_FORMAT_BC7_SRGB_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK";
    case VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK:
      return "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK";
    case VK_FORMAT_EAC_R11_UNORM_BLOCK:
      return "VK_FORMAT_EAC_R11_UNORM_BLOCK";
    case VK_FORMAT_EAC_R11_SNORM_BLOCK:
      return "VK_FORMAT_EAC_R11_SNORM_BLOCK";
    case VK_FORMAT_EAC_R11G11_UNORM_BLOCK:
      return "VK_FORMAT_EAC_R11G11_UNORM_BLOCK";
    case VK_FORMAT_EAC_R11G11_SNORM_BLOCK:
      return "VK_FORMAT_EAC_R11G11_SNORM_BLOCK";
    case VK_FORMAT_ASTC_4x4_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_4x4_UNORM_BLOCK";
    case VK_FORMAT_ASTC_4x4_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_4x4_SRGB_BLOCK";
    case VK_FORMAT_ASTC_5x4_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_5x4_UNORM_BLOCK";
    case VK_FORMAT_ASTC_5x4_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_5x4_SRGB_BLOCK";
    case VK_FORMAT_ASTC_5x5_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_5x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_5x5_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_5x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_6x5_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_6x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_6x5_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_6x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_6x6_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_6x6_UNORM_BLOCK";
    case VK_FORMAT_ASTC_6x6_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_6x6_SRGB_BLOCK";
    case VK_FORMAT_ASTC_8x5_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_8x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_8x5_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_8x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_8x6_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_8x6_UNORM_BLOCK";
    case VK_FORMAT_ASTC_8x6_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_8x6_SRGB_BLOCK";
    case VK_FORMAT_ASTC_8x8_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_8x8_UNORM_BLOCK";
    case VK_FORMAT_ASTC_8x8_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_8x8_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x5_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_10x5_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x5_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_10x5_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x6_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_10x6_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x6_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_10x6_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x8_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_10x8_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x8_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_10x8_SRGB_BLOCK";
    case VK_FORMAT_ASTC_10x10_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_10x10_UNORM_BLOCK";
    case VK_FORMAT_ASTC_10x10_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_10x10_SRGB_BLOCK";
    case VK_FORMAT_ASTC_12x10_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_12x10_UNORM_BLOCK";
    case VK_FORMAT_ASTC_12x10_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_12x10_SRGB_BLOCK";
    case VK_FORMAT_ASTC_12x12_UNORM_BLOCK:
      return "VK_FORMAT_ASTC_12x12_UNORM_BLOCK";
    case VK_FORMAT_ASTC_12x12_SRGB_BLOCK:
      return "VK_FORMAT_ASTC_12x12_SRGB_BLOCK";
    }
  }
  else if ((int)param_1 < 0x3b9bcbd1) {
    if (param_1 == VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK) {
      return "VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK";
    }
    switch(param_1) {
    case VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG:
      return "VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG:
      return "VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG:
      return "VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG";
    case VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG:
      return "VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG";
    case VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG:
      return "VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG:
      return "VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG";
    case VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG:
      return "VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG";
    }
  }
  else if ((int)param_1 < 0x3b9d2b61) {
    if (param_1 == VK_FORMAT_G8B8G8R8_422_UNORM) {
      return "VK_FORMAT_G8B8G8R8_422_UNORM";
    }
    switch(param_1) {
    case VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK";
    case VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK:
      return "VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK";
    }
  }
  else if ((int)param_1 < 0x3b9fd311) {
    if (param_1 == VK_FORMAT_G8_B8R8_2PLANE_444_UNORM) {
      return "VK_FORMAT_G8_B8R8_2PLANE_444_UNORM";
    }
    switch(param_1) {
    case VK_FORMAT_B8G8R8G8_422_UNORM:
      return "VK_FORMAT_B8G8R8G8_422_UNORM";
    case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM:
      return "VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM";
    case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM:
      return "VK_FORMAT_G8_B8R8_2PLANE_420_UNORM";
    case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM:
      return "VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM";
    case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM:
      return "VK_FORMAT_G8_B8R8_2PLANE_422_UNORM";
    case VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM:
      return "VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM";
    case VK_FORMAT_R10X6_UNORM_PACK16:
      return "VK_FORMAT_R10X6_UNORM_PACK16";
    case VK_FORMAT_R10X6G10X6_UNORM_2PACK16:
      return "VK_FORMAT_R10X6G10X6_UNORM_2PACK16";
    case VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16:
      return "VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16";
    case VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16:
      return "VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16";
    case VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16:
      return "VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16";
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16:
      return "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16:
      return "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16:
      return "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16:
      return "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16:
      return "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16";
    case VK_FORMAT_R12X4_UNORM_PACK16:
      return "VK_FORMAT_R12X4_UNORM_PACK16";
    case VK_FORMAT_R12X4G12X4_UNORM_2PACK16:
      return "VK_FORMAT_R12X4G12X4_UNORM_2PACK16";
    case VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16:
      return "VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16";
    case VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16:
      return "VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16";
    case VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16:
      return "VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16";
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16:
      return "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16:
      return "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16:
      return "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16:
      return "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16";
    case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16:
      return "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16";
    case VK_FORMAT_G16B16G16R16_422_UNORM:
      return "VK_FORMAT_G16B16G16R16_422_UNORM";
    case VK_FORMAT_B16G16R16G16_422_UNORM:
      return "VK_FORMAT_B16G16R16G16_422_UNORM";
    case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM:
      return "VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM";
    case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM:
      return "VK_FORMAT_G16_B16R16_2PLANE_420_UNORM";
    case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM:
      return "VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM";
    case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM:
      return "VK_FORMAT_G16_B16R16_2PLANE_422_UNORM";
    case VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM:
      return "VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM";
    }
  }
  else if ((int)param_1 < 0x3ba414e9) {
    if (param_1 == VK_FORMAT_R10X6_UINT_PACK16_ARM) {
      return "VK_FORMAT_R10X6_UINT_PACK16_ARM";
    }
    if ((int)param_1 < 0x3b9ffa22) {
      if (param_1 == VK_FORMAT_A4B4G4R4_UNORM_PACK16) {
        return "VK_FORMAT_A4B4G4R4_UNORM_PACK16";
      }
      if (param_1 == VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16) {
        return "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16";
      }
      if (param_1 == VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16) {
        return "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16";
      }
      if (param_1 == VK_FORMAT_G16_B16R16_2PLANE_444_UNORM) {
        return "VK_FORMAT_G16_B16R16_2PLANE_444_UNORM";
      }
      if (param_1 == VK_FORMAT_A4R4G4B4_UNORM_PACK16) {
        return "VK_FORMAT_A4R4G4B4_UNORM_PACK16";
      }
    }
    else {
      if (param_1 == VK_FORMAT_R8_BOOL_ARM) {
        return "VK_FORMAT_R8_BOOL_ARM";
      }
      if (param_1 == VK_FORMAT_R16G16_S10_5_NV) {
        return "VK_FORMAT_R16G16_SFIXED5_NV";
      }
      if (param_1 == VK_FORMAT_A1B5G5R5_UNORM_PACK16) {
        return "VK_FORMAT_A1B5G5R5_UNORM_PACK16";
      }
      if (param_1 == VK_FORMAT_A8_UNORM) {
        return "VK_FORMAT_A8_UNORM";
      }
    }
  }
  else {
    switch(param_1) {
    case VK_FORMAT_R10X6G10X6_UINT_2PACK16_ARM:
      return "VK_FORMAT_R10X6G10X6_UINT_2PACK16_ARM";
    case VK_FORMAT_R10X6G10X6B10X6A10X6_UINT_4PACK16_ARM:
      return "VK_FORMAT_R10X6G10X6B10X6A10X6_UINT_4PACK16_ARM";
    case VK_FORMAT_R12X4_UINT_PACK16_ARM:
      return "VK_FORMAT_R12X4_UINT_PACK16_ARM";
    case VK_FORMAT_R12X4G12X4_UINT_2PACK16_ARM:
      return "VK_FORMAT_R12X4G12X4_UINT_2PACK16_ARM";
    case VK_FORMAT_R12X4G12X4B12X4A12X4_UINT_4PACK16_ARM:
      return "VK_FORMAT_R12X4G12X4B12X4A12X4_UINT_4PACK16_ARM";
    case VK_FORMAT_R14X2_UINT_PACK16_ARM:
      return "VK_FORMAT_R14X2_UINT_PACK16_ARM";
    case VK_FORMAT_R14X2G14X2_UINT_2PACK16_ARM:
      return "VK_FORMAT_R14X2G14X2_UINT_2PACK16_ARM";
    case VK_FORMAT_R14X2G14X2B14X2A14X2_UINT_4PACK16_ARM:
      return "VK_FORMAT_R14X2G14X2B14X2A14X2_UINT_4PACK16_ARM";
    case VK_FORMAT_R14X2_UNORM_PACK16_ARM:
      return "VK_FORMAT_R14X2_UNORM_PACK16_ARM";
    case VK_FORMAT_R14X2G14X2_UNORM_2PACK16_ARM:
      return "VK_FORMAT_R14X2G14X2_UNORM_2PACK16_ARM";
    case VK_FORMAT_R14X2G14X2B14X2A14X2_UNORM_4PACK16_ARM:
      return "VK_FORMAT_R14X2G14X2B14X2A14X2_UNORM_4PACK16_ARM";
    case VK_FORMAT_G14X2_B14X2R14X2_2PLANE_420_UNORM_3PACK16_ARM:
      return "VK_FORMAT_G14X2_B14X2R14X2_2PLANE_420_UNORM_3PACK16_ARM";
    case VK_FORMAT_G14X2_B14X2R14X2_2PLANE_422_UNORM_3PACK16_ARM:
      return "VK_FORMAT_G14X2_B14X2R14X2_2PLANE_422_UNORM_3PACK16_ARM";
    }
  }
  return "Unhandled VkFormat";
}

// string_VkMemoryPropertyFlags @ 145b3a060

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
string_VkMemoryPropertyFlags
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          uint param_1)

{
  char *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  size_t _Size;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  uint uVar5;
  char *pcVar6;
  <lambda_1> local_res10;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if (param_1 != 0) {
    uVar5 = 1;
    do {
      if ((param_1 & 1) != 0) {
        uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
        if (uVar1 != 0) {
          uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
          if (uVar2 == uVar1) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                      (__return_storage_ptr__,1,local_res10,"|",1);
          }
          else {
            (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar1 + 1;
            pbVar4 = __return_storage_ptr__;
            if (0xf < uVar2) {
              pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
            }
            *(undefined2 *)((longlong)&(pbVar4->_Mypair)._Myval2._Bx + uVar1) = 0x7c;
          }
        }
        if ((int)uVar5 < 0x11) {
          if (uVar5 == 0x10) {
            pcVar6 = "VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT";
          }
          else if (uVar5 == 1) {
            pcVar6 = "VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT";
          }
          else if (uVar5 == 2) {
            pcVar6 = "VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT";
          }
          else if (uVar5 == 4) {
            pcVar6 = "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT";
          }
          else {
            if (uVar5 != 8) goto LAB_145b3a183;
            pcVar6 = "VK_MEMORY_PROPERTY_HOST_CACHED_BIT";
          }
        }
        else if (uVar5 == 0x20) {
          pcVar6 = "VK_MEMORY_PROPERTY_PROTECTED_BIT";
        }
        else if (uVar5 == 0x40) {
          pcVar6 = "VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD";
        }
        else if (uVar5 == 0x80) {
          pcVar6 = "VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD";
        }
        else if (uVar5 == 0x100) {
          pcVar6 = "VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV";
        }
        else {
LAB_145b3a183:
          pcVar6 = "Unhandled VkMemoryPropertyFlagBits";
        }
        _Size = strlen(pcVar6);
        uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
        uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
        if (uVar1 - uVar3 < _Size) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                    (__return_storage_ptr__,_Size,local_res10,pcVar6,_Size);
        }
        else {
          (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar3 + _Size;
          pbVar4 = __return_storage_ptr__;
          if (0xf < uVar1) {
            pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
          }
          _Dst = (pbVar4->_Mypair)._Myval2._Bx._Buf + uVar3;
          memmove(_Dst,pcVar6,_Size);
          _Dst[_Size] = '\0';
        }
      }
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      param_1 = param_1 >> 1;
    } while (param_1 != 0);
  }
  if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize == 0) {
    if (0x17 < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0x18;
      pcVar6 = (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      memmove(pcVar6,"VkMemoryPropertyFlags(0)",0x18);
      pcVar6[0x18] = '\0';
      return __return_storage_ptr__;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
              (__return_storage_ptr__,0x18,local_res10,"VkMemoryPropertyFlags(0)",0x18);
  }
  return __return_storage_ptr__;
}

// ExternalExtensions'' @ 1503c9670

void __cdecl `dynamic_atexit_destructor_for_'FVulkanDeviceExtension::ExternalExtensions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FVulkanDeviceExtension::ExternalExtensions.AllocatorInstance.Data;
  if (FVulkanDeviceExtension::ExternalExtensions.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FVulkanDeviceExtension::ExternalExtensions.AllocatorInstance.Data !=
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

// ExternalExtensions'' @ 1503c9690

void __cdecl `dynamic_atexit_destructor_for_'FVulkanInstanceExtension::ExternalExtensions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FVulkanInstanceExtension::ExternalExtensions.AllocatorInstance.Data;
  if (FVulkanInstanceExtension::ExternalExtensions.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FVulkanInstanceExtension::ExternalExtensions.AllocatorInstance.Data !=
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

// ExternalLayers'' @ 1503c96b0

void __cdecl `dynamic_atexit_destructor_for_'FVulkanDeviceSetupHelper::ExternalLayers__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FVulkanDeviceSetupHelper::ExternalLayers.AllocatorInstance.Data;
  if (FVulkanDeviceSetupHelper::ExternalLayers.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FVulkanDeviceSetupHelper::ExternalLayers.AllocatorInstance.Data !=
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

// ExternalLayers'' @ 1503c96d0

void __cdecl `dynamic_atexit_destructor_for_'FVulkanIntanceSetupHelper::ExternalLayers__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FVulkanIntanceSetupHelper::ExternalLayers.AllocatorInstance.Data;
  if (FVulkanIntanceSetupHelper::ExternalLayers.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FVulkanIntanceSetupHelper::ExternalLayers.AllocatorInstance.Data !=
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

// HMDVulkanExtensions'' @ 1503c96f0

void __cdecl `dynamic_atexit_destructor_for_'FVulkanDynamicRHI::HMDVulkanExtensions__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVulkanDynamicRHI::HMDVulkanExtensions.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayAcquireBackBuffer'' @ 1503c9710

void __cdecl _dynamic_atexit_destructor_for__CVarDelayAcquireBackBuffer__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayAcquireBackBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceCoherentOperations'' @ 1503c9730

void __cdecl _dynamic_atexit_destructor_for__CVarForceCoherentOperations__(void)

{
  CVarForceCoherentOperations._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceCoherentOperations);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGVulkanDefragSizeFraction'' @ 1503c9750

void __cdecl _dynamic_atexit_destructor_for__CVarGVulkanDefragSizeFraction__(void)

{
  CVarGVulkanDefragSizeFraction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGVulkanDefragSizeFraction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanAllowSparseResidency'' @ 1503c9770

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanAllowSparseResidency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanAllowSparseResidency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanBudgetPercentageScale'' @ 1503c9790

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanBudgetPercentageScale__(void)

{
  CVarVulkanBudgetPercentageScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanBudgetPercentageScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanDebugMarkers'' @ 1503c97b0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanDebugMarkers__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanDebugMarkers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanDefragAgeDelay'' @ 1503c97d0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanDefragAgeDelay__(void)

{
  CVarVulkanDefragAgeDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanDefragAgeDelay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanDefragAutoPause'' @ 1503c97f0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanDefragAutoPause__(void)

{
  CVarVulkanDefragAutoPause._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanDefragAutoPause);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanDefragOnce'' @ 1503c9810

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanDefragOnce__(void)

{
  CVarVulkanDefragOnce._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanDefragOnce);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanDefragPaused'' @ 1503c9830

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanDefragPaused__(void)

{
  CVarVulkanDefragPaused._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanDefragPaused);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanDefragSizeFactor'' @ 1503c9850

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanDefragSizeFactor__(void)

{
  CVarVulkanDefragSizeFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanDefragSizeFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanEnableDedicatedImageMemory'' @ 1503c9870

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanEnableDedicatedImageMemory__(void)

{
  CVarVulkanEnableDedicatedImageMemory._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanEnableDedicatedImageMemory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanEnableDefrag'' @ 1503c9890

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanEnableDefrag__(void)

{
  CVarVulkanEnableDefrag._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanEnableDefrag);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanEvictbLilleHestyMusOne'' @ 1503c98b0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanEvictbLilleHestyMusOne__(void)

{
  CVarVulkanEvictbLilleHestyMusOne._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanEvictbLilleHestyMusOne);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanEvictionLimitPercentage'' @ 1503c98d0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanEvictionLimitPercentage__(void)

{
  CVarVulkanEvictionLimitPercentage._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanEvictionLimitPercentage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanEvictionLimitPercentageReenableLimit'' @ 1503c98f0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanEvictionLimitPercentageReenableLimit__(void)

{
  CVarVulkanEvictionLimitPercentageReenableLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanEvictionLimitPercentageReenableLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanFakeMemoryLimit'' @ 1503c9910

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanFakeMemoryLimit__(void)

{
  CVarVulkanFakeMemoryLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanFakeMemoryLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanLogDefrag'' @ 1503c9930

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanLogDefrag__(void)

{
  CVarVulkanLogDefrag._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanLogDefrag);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanMemoryBackTrace'' @ 1503c9950

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanMemoryBackTrace__(void)

{
  CVarVulkanMemoryBackTrace._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanMemoryBackTrace);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanMemoryMemoryFallbackToHost'' @ 1503c9970

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanMemoryMemoryFallbackToHost__(void)

{
  CVarVulkanMemoryMemoryFallbackToHost._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanMemoryMemoryFallbackToHost);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanNumFramesToWaitForResourceDelete'' @ 1503c9990

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanNumFramesToWaitForResourceDelete__(void)

{
  CVarVulkanNumFramesToWaitForResourceDelete._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanNumFramesToWaitForResourceDelete);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanSingleAllocationPerResource'' @ 1503c99b0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanSingleAllocationPerResource__(void)

{
  CVarVulkanSingleAllocationPerResource._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanSingleAllocationPerResource);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanUseBufferBinning'' @ 1503c99d0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanUseBufferBinning__(void)

{
  CVarVulkanUseBufferBinning._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanUseBufferBinning);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanUseD24'' @ 1503c99f0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanUseD24__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanUseD24);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanUseProfileCheck'' @ 1503c9a10

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanUseProfileCheck__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanUseProfileCheck);
  return;
}

// `dynamic_atexit_destructor_for_'GAllowPresentOnComputeQueue'' @ 1503c9a30

void __cdecl _dynamic_atexit_destructor_for__GAllowPresentOnComputeQueue__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GAllowPresentOnComputeQueue);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarAllowConcurrentBuffer'' @ 1503c9a50

void __cdecl _dynamic_atexit_destructor_for__GCVarAllowConcurrentBuffer__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarAllowConcurrentBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarRobustBufferAccess'' @ 1503c9a70

void __cdecl _dynamic_atexit_destructor_for__GCVarRobustBufferAccess__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarRobustBufferAccess);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarVulkanTempBlockSizeKB'' @ 1503c9a90

void __cdecl _dynamic_atexit_destructor_for__GCVarVulkanTempBlockSizeKB__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarVulkanTempBlockSizeKB);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarVulkanUseMinimalSubmits'' @ 1503c9ab0

void __cdecl _dynamic_atexit_destructor_for__GCVarVulkanUseMinimalSubmits__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarVulkanUseMinimalSubmits);
  return;
}

// `dynamic_atexit_destructor_for_'GDynamicGlobalUBs'' @ 1503c9ad0

void __cdecl _dynamic_atexit_destructor_for__GDynamicGlobalUBs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDynamicGlobalUBs);
  return;
}

// `dynamic_atexit_destructor_for_'GGPUValidationCvar'' @ 1503c9af0

void __cdecl _dynamic_atexit_destructor_for__GGPUValidationCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GGPUValidationCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GMemMgrCS'' @ 1503c9b10

void __cdecl _dynamic_atexit_destructor_for__GMemMgrCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c9b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GMemMgrCS);
  return;
}

// `dynamic_atexit_destructor_for_'GRHIAllow16bitOps'' @ 1503c9b30

void __cdecl _dynamic_atexit_destructor_for__GRHIAllow16bitOps__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GRHIAllow16bitOps);
  return;
}

// `dynamic_atexit_destructor_for_'GRHIAllow64bitShaderAtomicsCvar'' @ 1503c9b50

void __cdecl _dynamic_atexit_destructor_for__GRHIAllow64bitShaderAtomicsCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GRHIAllow64bitShaderAtomicsCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GRHIAllowAsyncComputeCvar'' @ 1503c9b70

void __cdecl _dynamic_atexit_destructor_for__GRHIAllowAsyncComputeCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GRHIAllowAsyncComputeCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GRHIAllowTransferQueueCvar'' @ 1503c9b90

void __cdecl _dynamic_atexit_destructor_for__GRHIAllowTransferQueueCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GRHIAllowTransferQueueCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GTypesUsageCS'' @ 1503c9bb0

void __cdecl _dynamic_atexit_destructor_for__GTypesUsageCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c9bb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GTypesUsageCS);
  return;
}

// `dynamic_atexit_destructor_for_'GTypesUsageHashMap'' @ 1503c9bd0

void __cdecl
`FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID'::__l2::
_dynamic_atexit_destructor_for__GTypesUsageHashMap__(void)

{
  GTypesUsageHashMap._72_4_ = 0;
  if (GTypesUsageHashMap._64_8_ != 0) {
    FMemory::Free((void *)GTypesUsageHashMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GTypesUsageHashMap);
  return;
}

// `dynamic_atexit_destructor_for_'GValidationCvar'' @ 1503c9c10

void __cdecl _dynamic_atexit_destructor_for__GValidationCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GValidationCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GVarVulkanLogEvictStatus'' @ 1503c9c30

void __cdecl _dynamic_atexit_destructor_for__GVarVulkanLogEvictStatus__(void)

{
  GVarVulkanLogEvictStatus._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVarVulkanLogEvictStatus);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanAllowDynamicRenderingCVar'' @ 1503c9c50

void __cdecl _dynamic_atexit_destructor_for__GVulkanAllowDynamicRenderingCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVulkanAllowDynamicRenderingCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanAllowDynamicStatesCVar'' @ 1503c9c70

void __cdecl _dynamic_atexit_destructor_for__GVulkanAllowDynamicStatesCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVulkanAllowDynamicStatesCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanAllowGraphicPipelineLibraryCVar'' @ 1503c9c90

void __cdecl _dynamic_atexit_destructor_for__GVulkanAllowGraphicPipelineLibraryCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GVulkanAllowGraphicPipelineLibraryCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanAllowHostImageCopyCVar'' @ 1503c9cb0

void __cdecl _dynamic_atexit_destructor_for__GVulkanAllowHostImageCopyCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVulkanAllowHostImageCopyCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanAllowHostQueryResetCVar'' @ 1503c9cd0

void __cdecl _dynamic_atexit_destructor_for__GVulkanAllowHostQueryResetCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVulkanAllowHostQueryResetCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanAllowShaderObjectCVar'' @ 1503c9cf0

void __cdecl _dynamic_atexit_destructor_for__GVulkanAllowShaderObjectCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVulkanAllowShaderObjectCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanAllowSync2BarriersCVar'' @ 1503c9d10

void __cdecl _dynamic_atexit_destructor_for__GVulkanAllowSync2BarriersCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVulkanAllowSync2BarriersCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanInstrumentedMemMgr'' @ 1503c9d30

void __cdecl _dynamic_atexit_destructor_for__GVulkanInstrumentedMemMgr__(void)

{
  TStaticArray<FVulkanCustomMemManager::FType,5,4294967295>::
  ~TStaticArray<FVulkanCustomMemManager::FType,5,4294967295>(&GVulkanInstrumentedMemMgr.Types);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanRayTracingCVar'' @ 1503c9d50

void __cdecl _dynamic_atexit_destructor_for__GVulkanRayTracingCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVulkanRayTracingCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanVariableRateShadingFormatCVar'' @ 1503c9d70

void __cdecl _dynamic_atexit_destructor_for__GVulkanVariableRateShadingFormatCVar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GVulkanVariableRateShadingFormatCVar);
  return;
}

