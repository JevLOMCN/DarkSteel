// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 263

// Categories'' @ 141059de0

void __cdecl
`dynamic_initializer_for_'UE::RHI::GPUProfiler::FGPUStat::FStatCategory::Categories__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::RHI::GPUProfiler::FGPUStat::FStatCategory::Categories__
        );
  return;
}

// FileCacheLock'' @ 141059e00

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::FileCacheLock__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::FileCacheLock__);
  return;
}

// FileCacheMap'' @ 141059e20

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::FileCacheMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::FileCacheMap__);
  return;
}

// GameGuidToCacheKey'' @ 141059e40

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::GameGuidToCacheKey__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::GameGuidToCacheKey__);
  return;
}

// Infos'' @ 141059e60

void __cdecl `dynamic_initializer_for_'FGenericDataDrivenShaderPlatformInfo::Infos__(void)

{
  uint uVar1;
  FName *pFVar2;
  longlong lVar3;
  
  lVar3 = 0x9b;
  pFVar2 = &FGenericDataDrivenShaderPlatformInfo::Infos[0].PlatformName;
  do {
    pFVar2[-1].ComparisonIndex = 0;
    pFVar2[-1].Number = 0;
    pFVar2->ComparisonIndex = 0;
    pFVar2->Number = 0;
    pFVar2[1].ComparisonIndex = 0;
    pFVar2[1].Number = 0;
    pFVar2[2].ComparisonIndex = 0;
    pFVar2[2].Number = 0;
    pFVar2[3].ComparisonIndex = 0;
    pFVar2[3].Number = 0;
    pFVar2[4].ComparisonIndex = 0;
    pFVar2[4].Number = 0;
    pFVar2[5].ComparisonIndex = 0;
    pFVar2[5].Number = 0;
    pFVar2[6].ComparisonIndex = 0;
    pFVar2[6].Number = 0;
    uVar1 = pFVar2[5].Number;
    pFVar2[4].ComparisonIndex.Value = pFVar2[4].ComparisonIndex.Value | 0x40010000;
    pFVar2[2].ComparisonIndex.Value = 5;
    pFVar2[5].Number = uVar1 & 0xfff3ffff | 0x33d000;
    pFVar2[6].ComparisonIndex.Value = pFVar2[6].ComparisonIndex.Value & 0xff887fff | 0x81401;
    lVar3 = lVar3 + -1;
    pFVar2 = pFVar2 + 8;
  } while (lVar3 != 0);
  return;
}

// MemoryPool'' @ 141059ed0

void __cdecl
`dynamic_initializer_for_'UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool__);
  return;
}

// NewPSOHashes'' @ 141059ef0

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::NewPSOHashes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::NewPSOHashes__);
  return;
}

// NewPSOUsage'' @ 141059f10

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::NewPSOUsage__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::NewPSOUsage__);
  return;
}

// NewPSOs'' @ 141059f30

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::NewPSOs__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::NewPSOs__);
  return;
}

// NewPSOsToReport'' @ 141059f50

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::NewPSOsToReport__(void)

{
  FPipelineFileCacheManager::NewPSOsToReport.Head =
       (atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>)FMemory::Malloc(0x2d0,8);
  *(undefined8 *)FPipelineFileCacheManager::NewPSOsToReport.Head = 0;
  FPipelineFileCacheManager::NewPSOsToReport.Tail =
       (FNode *)FPipelineFileCacheManager::NewPSOsToReport.Head;
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::NewPSOsToReport__);
  return;
}

// PSOLoggedEvent'' @ 141059f90

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::PSOLoggedEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::PSOLoggedEvent__);
  return;
}

// RunTimeToPSOUsage'' @ 141059fb0

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::RunTimeToPSOUsage__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::RunTimeToPSOUsage__);
  return;
}

// Stats'' @ 141059fd0

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::Stats__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::Stats__);
  return;
}

// UserCacheKey'' @ 141059ff0

void __cdecl `dynamic_initializer_for_'FPipelineFileCacheManager::UserCacheKey__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPipelineFileCacheManager::UserCacheKey__);
  return;
}

// `dynamic_initializer_for_'BoundShaderStateCacheLock'' @ 14105a010

void __cdecl _dynamic_initializer_for__BoundShaderStateCacheLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&BoundShaderStateCacheLock,4000);
  atexit(_dynamic_atexit_destructor_for__BoundShaderStateCacheLock__);
  return;
}

// `dynamic_initializer_for_'CVarAlwaysGeneratePOSSOFileCache'' @ 14105a040

void __cdecl _dynamic_initializer_for__CVarAlwaysGeneratePOSSOFileCache__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAlwaysGeneratePOSSOFileCache,L"r.ShaderPipelineCache.AlwaysGenerateOSCache",
             local_res8,L"1 generates the cache every run, 0 generates it only when it is missing.",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarAlwaysGeneratePOSSOFileCache__);
  return;
}

// `dynamic_initializer_for_'CVarBadDriverWarningIsFatal'' @ 14105a090

void __cdecl _dynamic_initializer_for__CVarBadDriverWarningIsFatal__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBadDriverWarningIsFatal,L"r.BadDriverWarningIsFatal",&GBadDriverWarningIsFatal,
             L"If non-zero, trigger a fatal error if a denylisted driver is detected.\nFor the fatal error to occur, r.WarnOfBadDrivers must be non-zero.\n 0: off (default)\n 1: a fatal error occurs after the out-of-date driver message is dismissed (non-Shipping only)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarBadDriverWarningIsFatal__);
  return;
}

// `dynamic_initializer_for_'CVarClearOSPSOFileCache'' @ 14105a0e0

void __cdecl _dynamic_initializer_for__CVarClearOSPSOFileCache__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarClearOSPSOFileCache,L"r.ShaderPipelineCache.ClearOSCache",local_res8,
             L"1 Enables the OS level clear after install, 0 disables it.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarClearOSPSOFileCache__);
  return;
}

// `dynamic_initializer_for_'CVarGPUCsvStatsEnabled'' @ 14105a130

void __cdecl _dynamic_initializer_for__CVarGPUCsvStatsEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGPUCsvStatsEnabled,L"r.GPUCsvStatsEnabled",local_res8,
             L"Enables or disables GPU stat recording to CSVs",0);
  atexit(_dynamic_atexit_destructor_for__CVarGPUCsvStatsEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarGPUDefragAllowOverlappedMoves'' @ 14105a180

void __cdecl _dynamic_initializer_for__CVarGPUDefragAllowOverlappedMoves__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGPUDefragAllowOverlappedMoves,L"r.GPUDefrag.AllowOverlappedMoves",
             &GGPUDefragAllowOverlappedMoves,
             L"Allows defrag relocations that partially overlap themselves.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarGPUDefragAllowOverlappedMoves__);
  return;
}

// `dynamic_initializer_for_'CVarGPUDefragEnableTimeLimits'' @ 14105a1d0

void __cdecl _dynamic_initializer_for__CVarGPUDefragEnableTimeLimits__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGPUDefragEnableTimeLimits,L"r.GPUDefrag.EnableTimeLimits",
             &GGPUDefragEnableTimeLimits,L"Limits CPU time spent doing GPU defragmentation.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarGPUDefragEnableTimeLimits__);
  return;
}

// `dynamic_initializer_for_'CVarGPUDefragMaxRelocations'' @ 14105a220

void __cdecl _dynamic_initializer_for__CVarGPUDefragMaxRelocations__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGPUDefragMaxRelocations,L"r.GPUDefrag.MaxRelocations",&GGPUDefragMaxRelocations,
             L"Limits the number of total relocations in a frame regardless of number of bytes moved..\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGPUDefragMaxRelocations__);
  return;
}

// `dynamic_initializer_for_'CVarLazyLoadShadersWhenPSOCacheIsPresent'' @ 14105a270

void __cdecl _dynamic_initializer_for__CVarLazyLoadShadersWhenPSOCacheIsPresent__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLazyLoadShadersWhenPSOCacheIsPresent,
             L"r.ShaderPipelineCache.LazyLoadShadersWhenPSOCacheIsPresent",local_res8,
             L"Non-Zero: If we load a PSO cache, then lazy load from the shader code library. This assumes the PSO cache is more or less complete. This will only work on RHIs that support the library+Hash CreateShader API (GRHISupportsLazyShaderCodeLoading == true)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLazyLoadShadersWhenPSOCacheIsPresent__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheEnabled'' @ 14105a2c0

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheEnabled,L"r.ShaderPipelineCache.Enabled",local_res8,
             L"1 Enables the PipelineFileCache, 0 disables it.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheExcludePrecachePSO'' @ 14105a310

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheExcludePrecachePSO__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOFileCacheExcludePrecachePSO,L"r.ShaderPipelineCache.ExcludePrecachePSO",
             &GPSOExcludePrecachePSOsInFileCache,
             L"1 excludes saving runtime-precached graphics PSOs in the file cache, 0 (default) includes them. Excluding precached PSOs requires PSO precaching to be enabled."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheExcludePrecachePSO__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheLogPSO'' @ 14105a360

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheLogPSO__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheLogPSO,L"r.ShaderPipelineCache.LogPSO",local_res8,
             L"1 Logs new PSO entries into the file cache and allows saving.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheLogPSO__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCachePrintNewPSODescriptors'' @ 14105a3b0

void __cdecl _dynamic_initializer_for__CVarPSOFileCachePrintNewPSODescriptors__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOFileCachePrintNewPSODescriptors,L"r.ShaderPipelineCache.PrintNewPSODescriptors"
             ,&GPSOFileCachePrintNewPSODescriptors,
             L"1 prints descriptions for all new PSO entries to the log/console while 0 does not. 2 prints additional details about graphics PSO. Defaults to 0."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCachePrintNewPSODescriptors__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheReportPSO'' @ 14105a400

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheReportPSO__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheReportPSO,L"r.ShaderPipelineCache.ReportPSO",local_res8,
             L"1 reports new PSO entries via a delegate, but does not record or modify any cache file. New PSOs are reported in bulk once per frame."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheReportPSO__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheSaveUserCache'' @ 14105a450

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheSaveUserCache__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheSaveUserCache,L"r.ShaderPipelineCache.SaveUserCache",local_res8,
             L"If > 0 then any missed PSOs will be saved to a writable user cache file for subsequent runs to load and avoid in-game hitches. Enabled by default on macOS only."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheSaveUserCache__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheUserCacheUnusedElementCheckPeriod'' @ 14105a4a0

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheUserCacheUnusedElementCheckPeriod__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheUserCacheUnusedElementCheckPeriod,
             L"r.ShaderPipelineCache.UserCacheUnusedElementCheckPeriod",local_res8,
             L"The amount of time in days between running the garbage collection on unused PSOs in the user cache. Use a negative value to disable."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheUserCacheUnusedElementCheckPeriod__);
  return;
}

// `dynamic_initializer_for_'CVarPSOFileCacheUserCacheUnusedElementRetainDays'' @ 14105a4f0

void __cdecl _dynamic_initializer_for__CVarPSOFileCacheUserCacheUnusedElementRetainDays__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x1e;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarPSOFileCacheUserCacheUnusedElementRetainDays,
             L"r.ShaderPipelineCache.UserCacheUnusedElementRetainDays",local_res8,
             L"The amount of time in days to keep unused PSO entries in the cache.",0);
  atexit(_dynamic_atexit_destructor_for__CVarPSOFileCacheUserCacheUnusedElementRetainDays__);
  return;
}

// `dynamic_initializer_for_'CVarWarnOfBadDrivers'' @ 14105a540

void __cdecl _dynamic_initializer_for__CVarWarnOfBadDrivers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarWarnOfBadDrivers,L"r.WarnOfBadDrivers",&GWarnOfBadDrivers,
             L"Check the current GPU driver on engine startup, warn the user about issues and suggest a specific version.\nThe driver denylist is used to check for bad drivers according to their release date and/or driver versions.\n 0: off\n 1: check the driver and display a pop-up message if the driver is denylisted (default)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarWarnOfBadDrivers__);
  return;
}

// `dynamic_initializer_for_'GBoundShaderStateCache'' @ 14105a590

void __cdecl _dynamic_initializer_for__GBoundShaderStateCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GBoundShaderStateCache__);
  return;
}

// `dynamic_initializer_for_'GBoundShaderStateCache_ThreadSafe'' @ 14105a5b0

void __cdecl _dynamic_initializer_for__GBoundShaderStateCache_ThreadSafe__(void)

{
  atexit(_dynamic_atexit_destructor_for__GBoundShaderStateCache_ThreadSafe__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_Root'' @ 14105a5d0

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_Root__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"*");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&GCVarProfileGPU_Root,L"r.ProfileGPU.Root",&local_18,
             L"Allows to filter the tree when using ProfileGPU, the pattern match is case sensitive."
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_Root__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_ShowEmptyQueues'' @ 14105a640

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_ShowEmptyQueues__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GCVarProfileGPU_ShowEmptyQueues,L"r.ProfileGPU.ShowEmptyQueues",local_res8,
             L"When true, GPU queues without any registered work are still displayed in the report tables."
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_ShowEmptyQueues__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_ShowExclusive'' @ 14105a690

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_ShowExclusive__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GCVarProfileGPU_ShowExclusive,L"r.ProfileGPU.ShowExclusive",local_res8,
             L"When true, exclusive GPU times are shown.",0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_ShowExclusive__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_ShowHeader'' @ 14105a6e0

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_ShowHeader__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GCVarProfileGPU_ShowHeader,L"r.ProfileGPU.ShowHeader",local_res8,
             L"When true, prints a summary of the profileGPU settings before the report table in the log."
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_ShowHeader__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_ShowInclusive'' @ 14105a730

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_ShowInclusive__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GCVarProfileGPU_ShowInclusive,L"r.ProfileGPU.ShowInclusive",local_res8,
             L"When true, inclusive GPU times are shown.",0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_ShowInclusive__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_ShowLeafEvents'' @ 14105a780

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_ShowLeafEvents__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GCVarProfileGPU_ShowLeafEvents,L"r.ProfileGPU.ShowLeafEvents",local_res8,
             L"Allows profileGPU to display event-only leaf nodes with no draws associated.",0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_ShowLeafEvents__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_ShowPercentColumn'' @ 14105a7d0

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_ShowPercentColumn__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GCVarProfileGPU_ShowPercentColumn,L"r.ProfileGPU.ShowPercentColumn",local_res8,
             L"When true, a column showing the relative portion of time each stat takes as a percentage is displayed, including a visual unicode bar when unicode output is enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_ShowPercentColumn__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_ShowStats'' @ 14105a820

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_ShowStats__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GCVarProfileGPU_ShowStats,L"r.ProfileGPU.ShowStats",local_res8,
             L"When true, additional stat columns are shown in the report (numbers of draws, dispatches, vertices and primitives)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_ShowStats__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_ShowUI'' @ 14105a870

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_ShowUI__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GCVarProfileGPU_ShowUI,L"r.ProfileGPU.ShowUI",local_res8,
             L"Whether the user interface profiler should be displayed after profiling the GPU.\nThe results will always go to the log/console."
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_ShowUI__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_Sort'' @ 14105a8c0

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_Sort__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GCVarProfileGPU_Sort,L"r.ProfileGPU.Sort",local_res8,
             L"Sorts the TTY Dump independently at each level of the tree in various modes.\n0 : Chronological\n1 : By time elapsed\n2 : By number of prims\n3 : By number of verts\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_Sort__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_ThresholdPercent'' @ 14105a910

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_ThresholdPercent__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&GCVarProfileGPU_ThresholdPercent,L"r.ProfileGPU.ThresholdPercent",local_res8,
             L"Percent of the total execution duration the event needs to be larger than to be printed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_ThresholdPercent__);
  return;
}

// `dynamic_initializer_for_'GCVarProfileGPU_UnicodeOutput'' @ 14105a960

void __cdecl _dynamic_initializer_for__GCVarProfileGPU_UnicodeOutput__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&GCVarProfileGPU_UnicodeOutput,L"r.ProfileGPU.UnicodeOutput",local_res8,
             L"When enabled, the output results will be formatted in a unicode table.",0);
  atexit(_dynamic_atexit_destructor_for__GCVarProfileGPU_UnicodeOutput__);
  return;
}

// `dynamic_initializer_for_'GCommand_ProfileGPU'' @ 14105a9b0

void __cdecl UE::RHI::GPUProfiler::_dynamic_initializer_for__GCommand_ProfileGPU__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::RHI::GPUProfiler::<lambda_3>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GCommand_ProfileGPU,L"ProfileGPU",
             L"Captures statistics about a frame of GPU work and prints the results to the log.",
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
  atexit(_dynamic_atexit_destructor_for__GCommand_ProfileGPU__);
  return;
}

// `dynamic_initializer_for_'GGPUProfilerSink_StatSystem'' @ 14105aae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::RHI::GPUProfiler::_dynamic_initializer_for__GGPUProfilerSink_StatSystem__(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::RHI::GPUProfiler::FEventSink_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FGPUProfilerSink_StatSystem *local_18 [2];
  
  pTVar5 = GetSinks();
  local_18[0] = &GGPUProfilerSink_StatSystem;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  GGPUProfilerSink_StatSystem.Frames._48_8_ = _UNK_150631d98;
  GGPUProfilerSink_StatSystem.Frames._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  pTVar5->ArrayNum = iVar4 + 1;
  *(FGPUProfilerSink_StatSystem **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  GGPUProfilerSink_StatSystem._padding_ =
       (longlong)&___7FGPUProfilerSink_StatSystem_GPUProfiler_RHI_UE__6B_;
  GGPUProfilerSink_StatSystem.bTriggerProfile = (atomic<bool>)0x0;
  GGPUProfilerSink_StatSystem.bIsProfiling = (atomic<bool>)0x0;
  GGPUProfilerSink_StatSystem.ProfileFrameNumber = 0;
  GGPUProfilerSink_StatSystem.MaxFrameNumber = 0;
  GGPUProfilerSink_StatSystem.Frames._0_8_ = 0;
  GGPUProfilerSink_StatSystem.Frames._8_8_ = 0;
  GGPUProfilerSink_StatSystem.Frames._32_8_ = 0;
  GGPUProfilerSink_StatSystem.Frames._64_8_ = 0;
  GGPUProfilerSink_StatSystem.Frames._72_4_ = 0;
  GGPUProfilerSink_StatSystem.QueueStates._0_8_ = 0;
  GGPUProfilerSink_StatSystem.QueueStates._8_8_ = 0;
  GGPUProfilerSink_StatSystem.QueueStates._32_8_ = 0;
  GGPUProfilerSink_StatSystem.QueueStates._64_8_ = 0;
  GGPUProfilerSink_StatSystem.QueueStates._72_4_ = 0;
  GGPUProfilerSink_StatSystem.QueueStates._40_8_ = GGPUProfilerSink_StatSystem.Frames._40_8_;
  GGPUProfilerSink_StatSystem.QueueStates._48_8_ = GGPUProfilerSink_StatSystem.Frames._48_8_;
  atexit(_dynamic_atexit_destructor_for__GGPUProfilerSink_StatSystem__);
  return;
}

// `dynamic_initializer_for_'GPUStat_Total'' @ 14105ac30

void __cdecl UE::RHI::GPUProfiler::_dynamic_initializer_for__GPUStat_Total__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_Total__);
  return;
}

// `dynamic_initializer_for_'GRHIGPUFrameTimeHistory'' @ 14105ac50

void __cdecl _dynamic_initializer_for__GRHIGPUFrameTimeHistory__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GRHIGPUFrameTimeHistory.CS,4000);
  atexit(_dynamic_atexit_destructor_for__GRHIGPUFrameTimeHistory__);
  return;
}

// `dynamic_initializer_for_'GpuChannelReg'' @ 14105ac80

void __cdecl _dynamic_initializer_for__GpuChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&GpuChannelObject,"GpuChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'JOURNAL_FILE_EXTENSION'' @ 14105acb0

void __cdecl _dynamic_initializer_for__JOURNAL_FILE_EXTENSION__(void)

{
  FString::FString(&JOURNAL_FILE_EXTENSION,L".jnl");
  atexit(_dynamic_atexit_destructor_for__JOURNAL_FILE_EXTENSION__);
  return;
}

// `dynamic_initializer_for_'LANGUAGE_D3D'' @ 14105ace0

void __cdecl _dynamic_initializer_for__LANGUAGE_D3D__(void)

{
  FName::FName(&LANGUAGE_D3D,"D3D");
  return;
}

// `dynamic_initializer_for_'LANGUAGE_Metal'' @ 14105ad00

void __cdecl _dynamic_initializer_for__LANGUAGE_Metal__(void)

{
  FName::FName(&LANGUAGE_Metal,"Metal");
  return;
}

// `dynamic_initializer_for_'LANGUAGE_Nintendo'' @ 14105ad20

void __cdecl _dynamic_initializer_for__LANGUAGE_Nintendo__(void)

{
  FName::FName(&LANGUAGE_Nintendo,"Nintendo");
  return;
}

// `dynamic_initializer_for_'LANGUAGE_OpenGL'' @ 14105ad40

void __cdecl _dynamic_initializer_for__LANGUAGE_OpenGL__(void)

{
  FName::FName(&LANGUAGE_OpenGL,"OpenGL");
  return;
}

// `dynamic_initializer_for_'LANGUAGE_Sony'' @ 14105ad60

void __cdecl _dynamic_initializer_for__LANGUAGE_Sony__(void)

{
  FName::FName(&LANGUAGE_Sony,"Sony");
  return;
}

// `dynamic_initializer_for_'LANGUAGE_Vulkan'' @ 14105ad80

void __cdecl _dynamic_initializer_for__LANGUAGE_Vulkan__(void)

{
  FName::FName(&LANGUAGE_Vulkan,"Vulkan");
  return;
}

// `dynamic_initializer_for_'PlatformNameToShaderPlatformMap'' @ 14105ada0

void __cdecl _dynamic_initializer_for__PlatformNameToShaderPlatformMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__PlatformNameToShaderPlatformMap__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FileCacheMemory'' @ 14105adc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FileCacheMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FileCacheMemory == (FThreadSafeStaticStat<FStat_STAT_FileCacheMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FileCacheMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FileCacheMemory,*pFVar1,L"File Cache",
               "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NewCachedPSOMemory'' @ 14105ae50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NewCachedPSOMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NewCachedPSOMemory == (FThreadSafeStaticStat<FStat_STAT_NewCachedPSOMemory>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NewCachedPSOMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewCachedPSOMemory,*pFVar1,
               L"New Cached PSO","STATGROUP_PipelineStateCache","STATCAT_Advanced",
               L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NewComputePipelineStateCount'' @ 14105aee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NewComputePipelineStateCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NewComputePipelineStateCount ==
      (FThreadSafeStaticStat<FStat_STAT_NewComputePipelineStateCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NewComputePipelineStateCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewComputePipelineStateCount,*pFVar1,
               L"New Compute Pipeline State Count","STATGROUP_PipelineStateCache","STATCAT_Advanced"
               ,L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NewGraphicsPipelineStateCount'' @ 14105af70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NewGraphicsPipelineStateCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NewGraphicsPipelineStateCount ==
      (FThreadSafeStaticStat<FStat_STAT_NewGraphicsPipelineStateCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NewGraphicsPipelineStateCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewGraphicsPipelineStateCount,*pFVar1,
               L"New Graphics Pipeline State Count","STATGROUP_PipelineStateCache",
               "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NewRayTracingPipelineStateCount'' @ 14105b000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NewRayTracingPipelineStateCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NewRayTracingPipelineStateCount ==
      (FThreadSafeStaticStat<FStat_STAT_NewRayTracingPipelineStateCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NewRayTracingPipelineStateCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NewRayTracingPipelineStateCount,*pFVar1,
               L"New RayTracing Pipeline State Count","STATGROUP_PipelineStateCache",
               "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOStatMemory'' @ 14105b090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOStatMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOStatMemory == (FThreadSafeStaticStat<FStat_STAT_PSOStatMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOStatMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOStatMemory,*pFVar1,L"PSO Stat",
               "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SerializedComputePipelineStateCount'' @ 14105b120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SerializedComputePipelineStateCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SerializedComputePipelineStateCount ==
      (FThreadSafeStaticStat<FStat_STAT_SerializedComputePipelineStateCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SerializedComputePipelineStateCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SerializedComputePipelineStateCount,
               *pFVar1,L"Serialized Compute Pipeline State Count","STATGROUP_PipelineStateCache",
               "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SerializedGraphicsPipelineStateCount'' @ 14105b1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SerializedGraphicsPipelineStateCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SerializedGraphicsPipelineStateCount ==
      (FThreadSafeStaticStat<FStat_STAT_SerializedGraphicsPipelineStateCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SerializedGraphicsPipelineStateCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SerializedGraphicsPipelineStateCount,
               *pFVar1,L"Serialized Graphics Pipeline State Count","STATGROUP_PipelineStateCache",
               "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SerializedRayTracingPipelineStateCount'' @ 14105b240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SerializedRayTracingPipelineStateCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SerializedRayTracingPipelineStateCount ==
      (FThreadSafeStaticStat<FStat_STAT_SerializedRayTracingPipelineStateCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SerializedRayTracingPipelineStateCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SerializedRayTracingPipelineStateCount,
               *pFVar1,L"Serialized RayTracing Pipeline State Count","STATGROUP_PipelineStateCache",
               "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_Allocated'' @ 14105b2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_Allocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_Allocated ==
      (FThreadSafeStaticStat<FStat_STAT_TexturePool_Allocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_Allocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_Allocated,*pFVar1,L"Allocated"
               ,"STATGROUP_TexturePool","STATCAT_ADVANCED",L"TexturePool",true,false,ST_int64,false,
               false,MCR_GPUDefragPool);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_Blocked'' @ 14105b360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_Blocked__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_Blocked == (FThreadSafeStaticStat<FStat_STAT_TexturePool_Blocked>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_Blocked");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_Blocked,*pFVar1,
               L"Blocked By GPU Relocation","STATGROUP_TexturePool","STATCAT_ADVANCED",
               L"TexturePool",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_DefragTime'' @ 14105b3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_DefragTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_DefragTime ==
      (FThreadSafeStaticStat<FStat_STAT_TexturePool_DefragTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_DefragTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_DefragTime,*pFVar1,
               L"Defragmentation","STATGROUP_TexturePool","STATCAT_ADVANCED",L"TexturePool",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_Free'' @ 14105b480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_Free__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_Free == (FThreadSafeStaticStat<FStat_STAT_TexturePool_Free>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_Free");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_Free,*pFVar1,L"Free",
               "STATGROUP_TexturePool","STATCAT_ADVANCED",L"TexturePool",true,false,ST_int64,false,
               false,MCR_GPUDefragPool);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_LargestHole'' @ 14105b510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_LargestHole__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_LargestHole ==
      (FThreadSafeStaticStat<FStat_STAT_TexturePool_LargestHole>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_LargestHole");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_LargestHole,*pFVar1,
               L"Largest Hole","STATGROUP_TexturePool","STATCAT_ADVANCED",L"TexturePool",true,false,
               ST_int64,false,false,MCR_GPUDefragPool);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_NumHoles'' @ 14105b5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_NumHoles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_NumHoles ==
      (FThreadSafeStaticStat<FStat_STAT_TexturePool_NumHoles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_NumHoles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_NumHoles,*pFVar1,L"Num Holes",
               "STATGROUP_TexturePool","STATCAT_ADVANCED",L"TexturePool",true,false,ST_int64,false,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_NumRelocations'' @ 14105b630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_NumRelocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_NumRelocations ==
      (FThreadSafeStaticStat<FStat_STAT_TexturePool_NumRelocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_NumRelocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_NumRelocations,*pFVar1,
               L"Num Relocations","STATGROUP_TexturePool","STATCAT_ADVANCED",L"TexturePool",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_RelocatedSize'' @ 14105b6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_RelocatedSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_RelocatedSize ==
      (FThreadSafeStaticStat<FStat_STAT_TexturePool_RelocatedSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_RelocatedSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_RelocatedSize,*pFVar1,
               L"Relocating Memory","STATGROUP_TexturePool","STATCAT_ADVANCED",L"TexturePool",true,
               false,ST_int64,false,false,MCR_GPUDefragPool);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_TotalAsyncAllocations'' @ 14105b750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_TotalAsyncAllocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_TotalAsyncAllocations ==
      (FThreadSafeStaticStat<FStat_STAT_TexturePool_TotalAsyncAllocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_TotalAsyncAllocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_TotalAsyncAllocations,*pFVar1,
               L"Total Async Allocs","STATGROUP_TexturePool","STATCAT_ADVANCED",L"TexturePool",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_TotalAsyncCancellations'' @ 14105b7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_TotalAsyncCancellations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_TotalAsyncCancellations ==
      (FThreadSafeStaticStat<FStat_STAT_TexturePool_TotalAsyncCancellations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_TotalAsyncCancellations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_TotalAsyncCancellations,
               *pFVar1,L"Total Async Cancels","STATGROUP_TexturePool","STATCAT_ADVANCED",
               L"TexturePool",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TexturePool_TotalAsyncReallocations'' @ 14105b870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TexturePool_TotalAsyncReallocations__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TexturePool_TotalAsyncReallocations ==
      (FThreadSafeStaticStat<FStat_STAT_TexturePool_TotalAsyncReallocations>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TexturePool_TotalAsyncReallocations");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TexturePool_TotalAsyncReallocations,
               *pFVar1,L"Total Async Reallocs","STATGROUP_TexturePool","STATCAT_ADVANCED",
               L"TexturePool",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalComputePipelineStateCount'' @ 14105b900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalComputePipelineStateCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalComputePipelineStateCount ==
      (FThreadSafeStaticStat<FStat_STAT_TotalComputePipelineStateCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalComputePipelineStateCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalComputePipelineStateCount,*pFVar1,
               L"Total Compute Pipeline State Count","STATGROUP_PipelineStateCache",
               "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalGraphicsPipelineStateCount'' @ 14105b990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalGraphicsPipelineStateCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalGraphicsPipelineStateCount ==
      (FThreadSafeStaticStat<FStat_STAT_TotalGraphicsPipelineStateCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalGraphicsPipelineStateCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalGraphicsPipelineStateCount,*pFVar1,
               L"Total Graphics Pipeline State Count","STATGROUP_PipelineStateCache",
               "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalRayTracingPipelineStateCount'' @ 14105ba20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalRayTracingPipelineStateCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalRayTracingPipelineStateCount ==
      (FThreadSafeStaticStat<FStat_STAT_TotalRayTracingPipelineStateCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalRayTracingPipelineStateCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalRayTracingPipelineStateCount,*pFVar1,
               L"Total RayTracing Pipeline State Count","STATGROUP_PipelineStateCache",
               "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_PSO'' @ 14105bab0

void __cdecl _dynamic_initializer_for___GCsvCategory_PSO__(void)

{
  FString::operator=(&_GCsvCategory_PSO.Name,L"PSO");
  _GCsvCategory_PSO.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_PSO.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_PSO__);
  return;
}

// `scalar_deleting_destructor' @ 145c38d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_4>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_4>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c38db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_5>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_5>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c38e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_6>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_6>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c38f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_7>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_7>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c38fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_8>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_8>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c39050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l22::<lambda_9>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_9>__BG___ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c39110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l19::<lambda_10>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_10>__BD___ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c391b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_11>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_11>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c39270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::__l41::<lambda_5>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::`41'::<lambda_5>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c39850

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FVisualizerEvent,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FVisualizerEvent,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c39a90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::RHI::GPUProfiler::<lambda_3>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::RHI::GPUProfiler::<lambda_3>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// DefaultPSOMaskComparisonFunction @ 145c39ac0

bool __cdecl DefaultPSOMaskComparisonFunction(ulong64 param_1,ulong64 param_2)

{
  return (param_1 & param_2) == param_1;
}

// operator<<<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> @ 145c39ae0

FArchive * __cdecl
operator<<<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145c43f2e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_145c43f2e:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar6 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_145c4400b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_145c4400b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        uVar7 = *piVar1 - 1U & *(uint *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0xc);
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0xc;
        *(uint *)(lVar3 + 8) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar6 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<unsigned_int,FPipelineCacheFileFormatPSOMetaData> @ 145c39af0

FArchive * __cdecl
operator<<<unsigned_int,FPipelineCacheFileFormatPSOMetaData>
          (FArchive *param_1,TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,(FPipelineCacheFileFormatPSOMetaData *)&param_2->field_0x8);
  return param_1;
}

// operator<<<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator> @ 145c39b60

FArchive * __cdecl
operator<<<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145c441ce;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_145c441ce:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_145c442ab;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_145c442ab:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0xc0 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[0x2f] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[0x2e] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FRHIUniformBufferShaderBindingLayout,8,4294967295> @ 145c39b70

FArchive * __cdecl
operator<<<FRHIUniformBufferShaderBindingLayout,8,4294967295>
          (FArchive *param_1,
          TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *param_2)

{
  FRHIUniformBufferShaderBindingLayout_u_16 *pFVar1;
  FRHIUniformBufferShaderBindingLayout_u_16 *pFVar2;
  
  operator<<(param_1,(FString *)param_2);
  pFVar1 = &param_2->Elements[0].field1_0x10;
  pFVar2 = (FRHIUniformBufferShaderBindingLayout_u_16 *)**(undefined8 **)&param_1->field_0x8;
  if ((FRHIUniformBufferShaderBindingLayout_u_16 *)(*(undefined8 **)&param_1->field_0x8)[1] <
      pFVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Flags);
    }
  }
  else {
    *pFVar1 = *pFVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Elements[1].LayoutName);
  pFVar1 = &param_2->Elements[1].field1_0x10;
  pFVar2 = (FRHIUniformBufferShaderBindingLayout_u_16 *)**(undefined8 **)&param_1->field_0x8;
  if ((FRHIUniformBufferShaderBindingLayout_u_16 *)(*(undefined8 **)&param_1->field_0x8)[1] <
      pFVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Flags);
    }
  }
  else {
    *pFVar1 = *pFVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Elements[2].LayoutName);
  pFVar1 = &param_2->Elements[2].field1_0x10;
  pFVar2 = (FRHIUniformBufferShaderBindingLayout_u_16 *)**(undefined8 **)&param_1->field_0x8;
  if ((FRHIUniformBufferShaderBindingLayout_u_16 *)(*(undefined8 **)&param_1->field_0x8)[1] <
      pFVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Flags);
    }
  }
  else {
    *pFVar1 = *pFVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Elements[3].LayoutName);
  pFVar1 = &param_2->Elements[3].field1_0x10;
  pFVar2 = (FRHIUniformBufferShaderBindingLayout_u_16 *)**(undefined8 **)&param_1->field_0x8;
  if ((FRHIUniformBufferShaderBindingLayout_u_16 *)(*(undefined8 **)&param_1->field_0x8)[1] <
      pFVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Flags);
    }
  }
  else {
    *pFVar1 = *pFVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Elements[4].LayoutName);
  pFVar1 = &param_2->Elements[4].field1_0x10;
  pFVar2 = (FRHIUniformBufferShaderBindingLayout_u_16 *)**(undefined8 **)&param_1->field_0x8;
  if ((FRHIUniformBufferShaderBindingLayout_u_16 *)(*(undefined8 **)&param_1->field_0x8)[1] <
      pFVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Flags);
    }
  }
  else {
    *pFVar1 = *pFVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Elements[5].LayoutName);
  pFVar1 = &param_2->Elements[5].field1_0x10;
  pFVar2 = (FRHIUniformBufferShaderBindingLayout_u_16 *)**(undefined8 **)&param_1->field_0x8;
  if ((FRHIUniformBufferShaderBindingLayout_u_16 *)(*(undefined8 **)&param_1->field_0x8)[1] <
      pFVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Flags);
    }
  }
  else {
    *pFVar1 = *pFVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Elements[6].LayoutName);
  pFVar1 = &param_2->Elements[6].field1_0x10;
  pFVar2 = (FRHIUniformBufferShaderBindingLayout_u_16 *)**(undefined8 **)&param_1->field_0x8;
  if ((FRHIUniformBufferShaderBindingLayout_u_16 *)(*(undefined8 **)&param_1->field_0x8)[1] <
      pFVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Flags);
    }
  }
  else {
    *pFVar1 = *pFVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Elements[7].LayoutName);
  pFVar1 = &param_2->Elements[7].field1_0x10;
  pFVar2 = (FRHIUniformBufferShaderBindingLayout_u_16 *)**(undefined8 **)&param_1->field_0x8;
  if (pFVar2 + 1 <=
      (FRHIUniformBufferShaderBindingLayout_u_16 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pFVar1 = *pFVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Flags);
  return param_1;
}

// FRenderTarget,8,4294967295> @ 145c39e60

FArchive * __cdecl
operator<<<FBlendStateInitializerRHI::FRenderTarget_8_4294967295>
          (FArchive *param_1,
          TStaticArray<FBlendStateInitializerRHI::FRenderTarget,8,4294967295> *param_2)

{
  uchar *puVar1;
  longlong lVar2;
  TEnumAsByte<EBlendFactor> *pTVar3;
  
  pTVar3 = &param_2->Elements[0].ColorDestBlend;
  lVar2 = 8;
  do {
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(FRenderTarget *)(pTVar3 + -2),1);
    }
    else {
      (((FRenderTarget *)(pTVar3 + -2))->ColorBlendOp).Value = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar3 + -1,1);
    }
    else {
      pTVar3[-1].Value = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar3,1);
    }
    else {
      pTVar3->Value = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(TEnumAsByte<EBlendOperation> *)(pTVar3 + 1),1);
    }
    else {
      ((TEnumAsByte<EBlendOperation> *)(pTVar3 + 1))->Value = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar3 + 2,1);
    }
    else {
      pTVar3[2].Value = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar3 + 3,1);
    }
    else {
      pTVar3[3].Value = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(TEnumAsByte<EColorWriteMask> *)(pTVar3 + 4),1);
    }
    else {
      ((TEnumAsByte<EColorWriteMask> *)(pTVar3 + 4))->Value = *puVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    pTVar3 = pTVar3 + 7;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}

// operator<<<FVertexElement,TFixedAllocator<17>_> @ 145c3a020

FArchive * __cdecl
operator<<<FVertexElement,TFixedAllocator<17>_>
          (FArchive *param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

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
      UE::Core::Private::ReallocTo<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                (8,2,0,&param_2->AllocatorInstance,0,piVar1);
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
            operator<<(param_1,(FVertexElement *)
                               ((param_2->AllocatorInstance).InlineData + (int)uVar10));
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
        TArray<FVertexElement,TFixedAllocator<17>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                              (0x208,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          operator<<(param_1,(FVertexElement *)((param_2->AllocatorInstance).InlineData + iVar5));
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

// operator<<<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145c3a030

FArchive * __cdecl
operator<<<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0xc,(longlong)*(int *)&param_2->field_0xc * 0xc);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar7 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar7 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar12 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar12 == 0) {
        lVar10 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_145c3a35c;
        uVar12 = puVar11[lVar10 + 1];
      }
      local_78._4_4_ = -uVar12 & uVar12;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar10;
      if (iVar7 < iStack_64) {
LAB_145c3a35c:
        iStack_64 = iVar7;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar7) {
      do {
        puVar11 = (uint *)(*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0xc);
        puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar11,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar11);
          }
        }
        else {
          *puVar11 = *puVar9;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar12 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar12 = uVar12 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar12) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar12) {
        uVar8 = uVar12;
      }
      *(uint *)&param_2->field_0x2c = uVar8;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar11 = (uint *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar7 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar7 * 0xc);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0xc) = 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar7);
        puVar9 = (uint *)0x0;
        if (local_78.Pointer != (uint *)0x0) {
          *(uint *)((longlong)local_78.Pointer + 4) = 0xffffffff;
          puVar9 = local_78.Pointer;
        }
        puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar9,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar9);
          }
        }
        else {
          *puVar9 = *puVar6;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        uVar12 = (int)puVar11 + 1;
        puVar11 = (uint *)(ulonglong)uVar12;
      } while ((int)uVar12 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145c3a410

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0xc0,(longlong)*(int *)&param_2->field_0xc * 0xc0);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_145c3a78c;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_145c3a78c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<unsigned_int,FPipelineCacheFileFormatPSOMetaData>
                  (param_1,(TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *)
                           ((longlong)local_50.CurrentBitIndex * 0xc0 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc0,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0xc0 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0xc0 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *)0x0;
        if (local_78.Pointer != (TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *)0x0) {
          *(undefined4 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)local_78.Pointer + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x48) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x50) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x58) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x70) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x78) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x7c) = 0x80;
          *(undefined4 *)((longlong)local_78.Pointer + 0x80) = 0xffffffff;
          *(undefined4 *)((longlong)local_78.Pointer + 0x84) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x90) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x98) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0xa0) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0xa8) = 0;
          *(undefined2 *)((longlong)local_78.Pointer + 0xb0) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0xb8) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<unsigned_int,FPipelineCacheFileFormatPSOMetaData>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData> *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145c3a800

FArchive * __cdecl
operator<<<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x1c,(longlong)*(int *)&param_2->field_0xc * 0x1c);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_145c3aafc;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_145c3aafc:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(longlong)local_50.CurrentBitIndex * 0x1c + *(longlong *)local_58,0x14);
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1c,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)((longlong)iVar6 * 0x1c + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar4 * 0x1c + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar8 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x14) = 0xffffffff;
          puVar8 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,0x14);
        uVar11 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> @ 145c3ab80

FArchive * __cdecl
operator<<<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<FSHAHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145c4467e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_145c4467e:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_145c4475b;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_145c4475b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x1c + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[6] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[5] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator()<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::FrameBoundary'::__l19::<lambda_1>_> @ 145c3ae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::FrameBoundary'::__l19::<lambda_1>::
operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::FrameBoundary_::__l19::<lambda_1>_>
          (void *this,<lambda_1> *param_1,FRHIBreadcrumbNode *param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined1 auStack_148 [32];
  FString local_128;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  if (param_2 != (FRHIBreadcrumbNode *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
    operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::FrameBoundary_::__l19::<lambda_1>_>
              (param_1,param_1,param_2->Parent);
    lVar1 = *(longlong *)this;
    pwVar2 = (wchar_t *)(**(code **)(param_2->_padding_ + 0x10))(param_2,local_118);
    ::FString::FString(&local_128,pwVar2);
    UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::PushNode
              ((<unnamed_type_Profile> *)(lVar1 + 0x180),&local_128);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator()<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::__l2::<lambda_2>_> @ 145c3aeb0

bool __thiscall
`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::
__l2::<lambda_2>::
operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l2::<lambda_2>_>
          (void *this,<lambda_2> *param_1,FNode *param_2,FNode *param_3,bool param_4,int param_5)

{
  double dVar1;
  uint uVar2;
  FTable *this_00;
  ForAnyElementType FVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FNode *pFVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  double dVar16;
  uint local_res18;
  FString local_a8;
  FStats local_98;
  FStats local_70;
  
  dVar16 = __real_4059000000000000;
  if (param_2 != (FNode *)0x0) {
    uVar13 = (param_3->Inclusive).BusyCycles;
    dVar16 = __real_4059000000000000 /
             ((double)(param_2->Inclusive).BusyCycles * FGenericPlatformTime::SecondsPerCycle64);
    if ((longlong)uVar13 < 0) {
      dVar16 = dVar16 * (double)uVar13 * FGenericPlatformTime::SecondsPerCycle64;
    }
    else {
      dVar16 = dVar16 * (double)(longlong)uVar13 * FGenericPlatformTime::SecondsPerCycle64;
    }
  }
  dVar1 = **(double **)this;
  if (!param_4) {
    pwVar8 = L"";
    if ((param_3->Name).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_3->Name).Data.AllocatorInstance.Data;
    }
    if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) != 0) {
      pwVar8 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
    }
    bVar4 = FWildcardString::IsMatch(pwVar8,pwVar11);
    if (!bVar4) {
      bVar4 = false;
      goto LAB_145c3afa6;
    }
  }
  bVar4 = true;
LAB_145c3afa6:
  if (((**(char **)((longlong)this + 0x10) == '\0') && ((param_3->Inclusive).NumDraws == 0)) &&
     ((param_3->Inclusive).NumDispatches == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((!bVar4) || (!bVar5)) || (dVar16 < dVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    pFVar7 = param_3;
    if (param_2 != (FNode *)0x0) {
      pFVar7 = param_2;
    }
    UE::RHI::GPUProfiler::FTable::AddRow
              (*(FTable **)((longlong)this + 0x18),pFVar7,&param_3->Inclusive,&param_3->Exclusive,
               &param_3->Name,param_5);
    param_2 = pFVar7;
  }
  uVar2 = (param_3->Children).ArrayNum;
  uVar9 = (ulonglong)(int)uVar2;
  uVar12 = 0;
  pFVar14 = (param_3->Children).AllocatorInstance.Data;
  local_70.NumDraws = 0;
  local_70.NumDispatches = 0;
  local_70.NumPrimitives = 0;
  local_70.NumVertices = 0;
  local_70.BusyCycles = 0;
  local_a8.Data.AllocatorInstance.Data = pFVar14 + uVar9 * 8;
  local_70.IdleCycles = 0;
  local_70.WaitCycles = 0;
  local_98.NumDraws = 0;
  local_98.NumDispatches = 0;
  local_98.NumPrimitives = 0;
  local_98.NumVertices = 0;
  local_98.BusyCycles = 0;
  local_98.IdleCycles = 0;
  local_98.WaitCycles = 0;
  local_res18 = 0;
  uVar13 = uVar12;
  uVar15 = uVar12;
  while( true ) {
    FVar3.Data = local_a8.Data.AllocatorInstance.Data;
    uVar10 = (uint)uVar12;
    if ((param_3->Children).ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<UE::RHI::GPUProfiler::FNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_4);
      uVar10 = local_res18;
    }
    if (pFVar14 == FVar3.Data) break;
    pFVar7 = *(FNode **)pFVar14;
    iVar6 = param_5 + 1;
    if (bVar4 == false) {
      iVar6 = param_5;
    }
    bVar5 = operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l2::<lambda_2>_>
                      (param_1,param_1,param_2,pFVar7,bVar4,iVar6);
    if (bVar5) {
      uVar12 = (ulonglong)local_res18;
      pFVar14 = pFVar14 + 8;
      uVar9 = (ulonglong)uVar2;
    }
    else {
      local_70.NumDraws = (int)uVar15 + (pFVar7->Inclusive).NumDraws;
      uVar15 = (ulonglong)local_70.NumDraws;
      uVar13 = uVar13 + (pFVar7->Inclusive).BusyCycles;
      local_res18 = local_res18 + 1;
      uVar12 = (ulonglong)local_res18;
      local_70.NumVertices = local_70.NumVertices + (pFVar7->Inclusive).NumVertices;
      local_70.NumPrimitives = local_70.NumPrimitives + (pFVar7->Inclusive).NumPrimitives;
      local_70.IdleCycles = local_70.IdleCycles + (pFVar7->Inclusive).IdleCycles;
      local_70.WaitCycles = local_70.WaitCycles + (pFVar7->Inclusive).WaitCycles;
      local_98.NumDispatches = local_98.NumDispatches + (pFVar7->Exclusive).NumDispatches;
      local_98.NumDraws = local_98.NumDraws + (pFVar7->Exclusive).NumDraws;
      local_98.NumVertices = local_98.NumVertices + (pFVar7->Exclusive).NumVertices;
      local_98.NumPrimitives = local_98.NumPrimitives + (pFVar7->Exclusive).NumPrimitives;
      local_98.BusyCycles = local_98.BusyCycles + (pFVar7->Exclusive).BusyCycles;
      local_98.IdleCycles = local_98.IdleCycles + (pFVar7->Exclusive).IdleCycles;
      local_98.WaitCycles = local_98.WaitCycles + (pFVar7->Exclusive).WaitCycles;
      pFVar14 = pFVar14 + 8;
      uVar9 = (ulonglong)uVar2;
      local_70.NumDispatches = local_70.NumDispatches + (pFVar7->Inclusive).NumDispatches;
      local_70.BusyCycles = uVar13;
    }
  }
  if (((bVar4 != false) && (uVar10 != 0)) &&
     (**(double **)this <= (double)uVar13 / (double)(param_2->Inclusive).BusyCycles)) {
    this_00 = *(FTable **)((longlong)this + 0x18);
    ::FString::PrintfImpl(&local_a8,L"%d Other %s");
    UE::RHI::GPUProfiler::FTable::AddRow(this_00,param_2,&local_70,&local_98,&local_a8,param_5 + 1);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return bVar4;
}

// operator()<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::__l42::<lambda_3>_> @ 145c3b240

void __thiscall
`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::
__l42::<lambda_3>::
operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l42::<lambda_3>_>
          (void *this,<lambda_3> *param_1,FNode *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  **(longlong **)this = **(longlong **)this + (param_2->Exclusive).BusyCycles;
  pFVar3 = (param_2->Children).AllocatorInstance.Data;
  iVar2 = (param_2->Children).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_2->Children).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::RHI::GPUProfiler::FNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l42::<lambda_3>_>
              (param_1,param_1,*(FNode **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// operator()<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::__l41::<lambda_4>_> @ 145c3b2c0

TSharedPtr<FVisualizerEvent,1> * __thiscall
`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::
__l41::<lambda_4>::
operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l41::<lambda_4>_>
          (void *this,TSharedPtr<FVisualizerEvent,1> *__return_storage_ptr__,<lambda_4> *param_1,
          FNode *param_2,TSharedPtr<FVisualizerEvent,1> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  ulonglong uVar4;
  FVisualizerEvent *pFVar5;
  FVisualizerEvent *pFVar6;
  FNode *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  TSharedPtr<FVisualizerEvent,1> *pTVar17;
  TSharedPtr<FVisualizerEvent,1> *pTVar18;
  wchar_t *pwVar19;
  TReferenceControllerBase<1> *pTVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res8 [8];
  TSharedPtr<FVisualizerEvent,1> local_88 [5];
  
  dVar12 = (double)(param_2->Inclusive).BusyCycles;
  dVar10 = dVar12 * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  dVar11 = __real_3ff0000000000000 / (double)**(ulonglong **)((longlong)this + 8);
  uVar4 = **(ulonglong **)this;
  pTVar16 = ::operator_new(0x68);
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FVisualizerEvent *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar16->SharedReferenceCount = (atomic<int>)0x1;
    pTVar16->WeakReferenceCount = (atomic<int>)0x1;
    pTVar16[1]._padding_ = (longlong)((double)uVar4 * dVar11);
    pTVar16[2]._padding_ = (longlong)dVar10;
    *(double *)&pTVar16[1].SharedReferenceCount = dVar11 * dVar12;
    pTVar16->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFVisualizerEvent___00_SharedPointerInternals__6B_;
    iVar15 = 0;
    pTVar16[2].SharedReferenceCount = (atomic<int>)0x0;
    ::FString::FString((FString *)(pTVar16 + 3),&param_2->Name);
    *(undefined4 *)((longlong)&pTVar16[4]._padding_ + 4) = 0;
    pTVar16[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16[5]._padding_ = 0;
    pTVar16[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar16[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar16[6]._padding_ = 0;
    *(undefined1 *)&pTVar16[4]._padding_ = 0;
    iVar3 = (param_2->Name).Data.ArrayNum;
    if (iVar3 == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(param_2->Name).Data.AllocatorInstance.Data;
      iVar15 = iVar3 + -1;
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar19);
    *(uint *)((longlong)&pTVar16[4]._padding_ + 4) = uVar14;
    if (((FVisualizerEvent *)(pTVar16 + 1) == (FVisualizerEvent *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar9)();
      return pTVar17;
    }
    __return_storage_ptr__->Object = (FVisualizerEvent *)(pTVar16 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar16;
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    pTVar20 = pTVar16;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  if ((__return_storage_ptr__->Object == (FVisualizerEvent *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar9)();
    return pTVar17;
  }
  pFVar5 = __return_storage_ptr__->Object;
  pTVar20 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar6 = param_3->Object;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar16 = (pFVar5->ParentEvent).SharedReferenceCount.ReferenceController;
  (pFVar5->ParentEvent).Object = pFVar6;
  (pFVar5->ParentEvent).SharedReferenceCount.ReferenceController = pTVar20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  **(longlong **)this = **(longlong **)this + (param_2->Exclusive).BusyCycles;
  pFVar21 = (param_2->Children).AllocatorInstance.Data;
  iVar3 = (param_2->Children).ArrayNum;
  pFVar2 = pFVar21 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_2->Children).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::RHI::GPUProfiler::FNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar21 == pFVar2) {
      return __return_storage_ptr__;
    }
    pFVar7 = *(FNode **)pFVar21;
    if ((__return_storage_ptr__->Object == (FVisualizerEvent *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar9)();
      return pTVar17;
    }
    pFVar5 = __return_storage_ptr__->Object;
    pTVar18 = operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l41::<lambda_4>_>
                        (param_1,local_88,param_1,pFVar7,__return_storage_ptr__);
    pTVar17 = (TSharedPtr<FVisualizerEvent,1> *)(pFVar5->Children).AllocatorInstance.Data;
    if (((pTVar17 <= pTVar18) && (pTVar18 < pTVar17 + (pFVar5->Children).ArrayMax)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) break;
    iVar15 = (pFVar5->Children).ArrayNum;
    piVar1 = &(pFVar5->Children).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(pFVar5->Children).AllocatorInstance,piVar1);
    }
    (pFVar5->Children).ArrayNum = iVar15 + 1;
    pFVar8 = (pFVar5->Children).AllocatorInstance.Data;
    *(FVisualizerEvent **)(pFVar8 + (longlong)iVar15 * 0x10) = pTVar18->Object;
    *(TReferenceControllerBase<1> **)(pFVar8 + (longlong)iVar15 * 0x10 + 8) =
         (pTVar18->SharedReferenceCount).ReferenceController;
    (pTVar18->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar18->Object = (FVisualizerEvent *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88[0].SharedReferenceCount.ReferenceController);
    pFVar21 = pFVar21 + 8;
  }
  pcVar9 = (code *)swi(3);
  pTVar17 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar9)();
  return pTVar17;
}

// CompareWithOp<FDateTime> @ 145c3b980

bool __cdecl CompareWithOp<FDateTime>(FDateTime *param_1,EComparisonOp param_2,FDateTime *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(param_2) {
  case ECO_Equal:
    return param_1->Ticks == param_3->Ticks;
  case ECO_NotEqual:
    return param_1->Ticks != param_3->Ticks;
  case ECO_Greater:
    return param_3->Ticks < param_1->Ticks;
  case ECO_GreaterOrEqual:
    return param_3->Ticks <= param_1->Ticks;
  case ECO_Less:
    return param_1->Ticks < param_3->Ticks;
  case ECO_LessOrEqual:
    return param_1->Ticks <= param_3->Ticks;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\GenericPlatformDriver.h"
                     ,0x97,L"");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// CompareWithOp<FDriverVersion> @ 145c3ba50

bool __cdecl
CompareWithOp<FDriverVersion>(FDriverVersion *param_1,EComparisonOp param_2,FDriverVersion *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(param_2) {
  case ECO_Equal:
    bVar2 = FDriverVersion::operator==(param_1,param_3);
    return bVar2;
  case ECO_NotEqual:
    bVar2 = FDriverVersion::operator>(param_1,param_3);
    if (bVar2) {
      return true;
    }
    break;
  case ECO_Greater:
    bVar2 = FDriverVersion::operator>(param_1,param_3);
    return bVar2;
  case ECO_GreaterOrEqual:
    bVar2 = FDriverVersion::operator>(param_1,param_3);
    if ((!bVar2) && (bVar2 = FDriverVersion::operator>(param_3,param_1), !bVar2)) {
      return true;
    }
    bVar2 = FDriverVersion::operator>(param_1,param_3);
    if (bVar2) {
      return true;
    }
    return false;
  case ECO_Less:
    bVar2 = FDriverVersion::operator>(param_3,param_1);
    return bVar2;
  case ECO_LessOrEqual:
    bVar2 = FDriverVersion::operator>(param_1,param_3);
    if ((!bVar2) && (bVar2 = FDriverVersion::operator>(param_3,param_1), !bVar2)) {
      return true;
    }
    break;
  default:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\GenericPlatformDriver.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  bVar2 = FDriverVersion::operator>(param_3,param_1);
  if (bVar2) {
    return true;
  }
  return false;
}

// DefaultConstructItems<FRHIUniformBufferShaderBindingLayout,int> @ 145c3be00

void __cdecl
DefaultConstructItems<FRHIUniformBufferShaderBindingLayout,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FVertexElement,int> @ 145c3be30

void __cdecl DefaultConstructItems<FVertexElement,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<FPipelineCacheFileFormatPSO,int> @ 145c3be40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
DestructItems<FPipelineCacheFileFormatPSO,int>(FPipelineCacheFileFormatPSO *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FPipelineCacheFileFormatPSO *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1 = param_1 + 1;
    lVar2 = 8;
    pFVar3 = param_1;
    do {
      pFVar1 = pFVar3[-1].RayTracingDesc.ShaderBindingLayout.UniformBufferEntries.Elements[7].
               LayoutName.Data.AllocatorInstance.Data;
      pFVar3 = (FPipelineCacheFileFormatPSO *)
               (pFVar3[-1].RayTracingDesc.ShaderBindingLayout.UniformBufferEntries.Elements + 7);
      lVar2 = lVar2 + -1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    } while (lVar2 != 0);
  }
  return;
}

// DestructItems<FRHIUniformBufferShaderBindingLayout,int> @ 145c3bed0

void __cdecl
DestructItems<FRHIUniformBufferShaderBindingLayout,int>
          (FRHIUniformBufferShaderBindingLayout *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->LayoutName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FVisualizerEvent,1>,int> @ 145c3bf10

void __cdecl
DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<UE::RHI::GPUProfiler::FEventStream,1>,int> @ 145c3bf50

void __cdecl
DestructItems<TSharedRef<UE::RHI::GPUProfiler::FEventStream,1>,int>
          (TSharedRef<UE::RHI::GPUProfiler::FEventStream,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<FCsvCategory,TDefaultDelete<FCsvCategory>_>,int> @ 145c3bf90

void __cdecl
DestructItems<TUniquePtr<FCsvCategory,TDefaultDelete<FCsvCategory>_>,int>
          (TUniquePtr<FCsvCategory,TDefaultDelete<FCsvCategory>_> *param_1,int param_2)

{
  FCsvCategory *pFVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FCsvCategory *)0x0) {
      pFVar2 = (pFVar1->Name).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0x18);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>,int> @ 145c3bff0

void __cdecl
DestructItems<TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>,int>
          (TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>
           *param_1,int param_2)

{
  FNode *pFVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FNode *)0x0) {
      pFVar2 = (pFVar1->Children).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->Name).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0x80);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// ForEach<TMap<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>_>_&,`FPipelineCacheFile::SavePipelineFileCache'::__l205::<lambda_2>_> @ 145c3f5b0

void __cdecl
Algo::
ForEach<TMap<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>_>_&,_FPipelineCacheFile::SavePipelineFileCache_::__l205::<lambda_2>_>
          (TMap<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>,0>_>
           *param_1,<lambda_2> param_2)

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
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  FString *local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145c3f64d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145c3f64d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res10 = param_2.GameGuids;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145c3f750;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_145c3f750:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    `FPipelineCacheFile::SavePipelineFileCache'::__l205::<lambda_2>::
    operator()<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_>
              (&local_res10,
               (TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>
                *)((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)param_1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetTypeHash<FRHIUniformBufferShaderBindingLayout,8,4294967295> @ 145c40130

uint __cdecl
GetTypeHash<FRHIUniformBufferShaderBindingLayout,8,4294967295>
          (TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *param_1)

{
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *pTVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  pTVar1 = param_1 + 1;
  uVar6 = 0;
  for (; param_1 != pTVar1;
      param_1 = (TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *)
                ((longlong)param_1 + 0x18)) {
    iVar2 = (((FRHIUniformBufferShaderBindingLayout *)&param_1->Elements[0].LayoutName)->LayoutName)
            .Data.ArrayNum;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)
               (((FRHIUniformBufferShaderBindingLayout *)&param_1->Elements[0].LayoutName)->
               LayoutName).Data.AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    uVar6 = uVar6 ^ (uVar6 >> 2) +
                    ((uVar3 >> 2) +
                     param_1->Elements[0].field1_0x10.Flags + 0x9e3779b9 + uVar3 * 0x40 ^ uVar3) +
                    uVar6 * 0x40 + -0x61c88647;
  }
  return uVar6;
}

// HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<`FPipelineCacheFile::SortMetaData'::__l5::<lambda_1>_>_>_>_>_> @ 145c401e0

void __cdecl
AlgoImpl::
HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *param_1,int param_2,int param_3
          ,FIdentityFunctor *param_4,
          TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>_>_>_>
          *param_5)

{
  int iVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int iVar27;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar28;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar29;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar1 = param_2 * 2;
    iVar27 = iVar1 + 1;
    if (iVar1 + 2 < param_3) {
      if (*(longlong *)((longlong)iVar27 * 0xc0 + 0x28 + (longlong)param_1) <
          *(longlong *)((longlong)iVar1 * 0xc0 + 0x1a8 + (longlong)param_1)) {
        iVar27 = iVar1;
      }
      iVar27 = iVar27 + 1;
    }
    pTVar28 = param_1 + iVar27;
    pTVar29 = param_1 + param_2;
    if (*(longlong *)((longlong)(pTVar29->ElementData).Pad + 0x28) <=
        *(longlong *)((pTVar28->ElementData).Pad + 0x28)) break;
    TVar2 = pTVar29->_s_1;
    uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 8);
    uVar4 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x10);
    uVar5 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x18);
    uVar6 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x20);
    uVar7 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x28);
    uVar8 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x30);
    uVar9 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x38);
    uVar10 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x40);
    uVar11 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x48);
    uVar12 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x50);
    uVar13 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x58);
    uVar14 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x60);
    uVar15 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x68);
    uVar16 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x70);
    uVar17 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x78);
    uVar18 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x80);
    uVar19 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x88);
    uVar20 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x90);
    uVar21 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x98);
    uVar22 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa0);
    uVar23 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa8);
    uVar24 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb0);
    uVar25 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb8);
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 8);
    pTVar29->_s_1 = pTVar28->_s_1;
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 8) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x18);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x10);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x18) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x28);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x20) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x20);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x28) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x38);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x30) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x30);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x38) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x48);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x40) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x40);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x48) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x58);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x50) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x50);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x58) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x68);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x60) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x60);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x68) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x78);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x70) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x70);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x78) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x88);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x80) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x80);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x88) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x98);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x90) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x90);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x98) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0xa8);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa0) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0xa0);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa8) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0xb8);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb0) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0xb0);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb8) = uVar26;
    pTVar28->_s_1 = TVar2;
    *(undefined8 *)((pTVar28->ElementData).Pad + 8) = uVar3;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x10) = uVar4;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x18) = uVar5;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x20) = uVar6;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x28) = uVar7;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x30) = uVar8;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x38) = uVar9;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x40) = uVar10;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x48) = uVar11;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x50) = uVar12;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x58) = uVar13;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x60) = uVar14;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x68) = uVar15;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x70) = uVar16;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x78) = uVar17;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x80) = uVar18;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x88) = uVar19;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x90) = uVar20;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x98) = uVar21;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0xa0) = uVar22;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0xa8) = uVar23;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0xb0) = uVar24;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0xb8) = uVar25;
    param_2 = iVar27;
  }
  return;
}

// HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<`FPipelineCacheFile::SortMetaData'::__l6::<lambda_2>_>_>_>_>_> @ 145c40430

void __cdecl
AlgoImpl::
HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *param_1,int param_2,int param_3
          ,FIdentityFunctor *param_4,
          TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>_>_>_>
          *param_5)

{
  int iVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int iVar27;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar28;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar29;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar1 = param_2 * 2;
    iVar27 = iVar1 + 1;
    if (iVar1 + 2 < param_3) {
      if (*(longlong *)((longlong)iVar27 * 0xc0 + 0x40 + (longlong)param_1) <
          *(longlong *)((longlong)iVar1 * 0xc0 + 0x1c0 + (longlong)param_1)) {
        iVar27 = iVar1;
      }
      iVar27 = iVar27 + 1;
    }
    pTVar28 = param_1 + iVar27;
    pTVar29 = param_1 + param_2;
    if (*(longlong *)((longlong)(pTVar29->ElementData).Pad + 0x40) <=
        *(longlong *)((pTVar28->ElementData).Pad + 0x40)) break;
    TVar2 = pTVar29->_s_1;
    uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 8);
    uVar4 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x10);
    uVar5 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x18);
    uVar6 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x20);
    uVar7 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x28);
    uVar8 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x30);
    uVar9 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x38);
    uVar10 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x40);
    uVar11 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x48);
    uVar12 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x50);
    uVar13 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x58);
    uVar14 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x60);
    uVar15 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x68);
    uVar16 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x70);
    uVar17 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x78);
    uVar18 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x80);
    uVar19 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x88);
    uVar20 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x90);
    uVar21 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x98);
    uVar22 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa0);
    uVar23 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa8);
    uVar24 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb0);
    uVar25 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb8);
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 8);
    pTVar29->_s_1 = pTVar28->_s_1;
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 8) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x18);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x10);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x18) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x28);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x20) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x20);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x28) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x38);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x30) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x30);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x38) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x48);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x40) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x40);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x48) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x58);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x50) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x50);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x58) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x68);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x60) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x60);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x68) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x78);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x70) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x70);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x78) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x88);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x80) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x80);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x88) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0x98);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x90) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0x90);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x98) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0xa8);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa0) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0xa0);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa8) = uVar26;
    uVar26 = *(undefined8 *)((pTVar28->ElementData).Pad + 0xb8);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb0) =
         *(undefined8 *)((pTVar28->ElementData).Pad + 0xb0);
    *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb8) = uVar26;
    pTVar28->_s_1 = TVar2;
    *(undefined8 *)((pTVar28->ElementData).Pad + 8) = uVar3;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x10) = uVar4;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x18) = uVar5;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x20) = uVar6;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x28) = uVar7;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x30) = uVar8;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x38) = uVar9;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x40) = uVar10;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x48) = uVar11;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x50) = uVar12;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x58) = uVar13;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x60) = uVar14;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x68) = uVar15;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x70) = uVar16;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x78) = uVar17;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x80) = uVar18;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x88) = uVar19;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x90) = uVar20;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0x98) = uVar21;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0xa0) = uVar22;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0xa8) = uVar23;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0xb0) = uVar24;
    *(undefined8 *)((pTVar28->ElementData).Pad + 0xb8) = uVar25;
    param_2 = iVar27;
  }
  return;
}

// HeapSortInternal<UE::RHI::GPUProfiler::FNode_*,int,FIdentityFunctor,TDereferenceWrapper<UE::RHI::GPUProfiler::FNode_*,`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::__l7::<lambda_1>_>_> @ 145c40680

void __cdecl
AlgoImpl::
HeapSortInternal<UE::RHI::GPUProfiler::FNode_*,int,FIdentityFunctor,TDereferenceWrapper<UE::RHI::GPUProfiler::FNode_*,_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l7::<lambda_1>_>_>
          (FNode **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::RHI::GPUProfiler::FNode_*,_public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree(UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState_const_&,unsigned_int)const_::_7_::<lambda_1>_>
          param_4)

{
  EGPUProfileSortMode EVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  iVar12 = iVar6 * 2;
  iVar10 = iVar12;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar12 + 1) {
LAB_145c407f6:
      if (iVar11 == 0) {
        iVar12 = param_2 + -1;
        lVar7 = (longlong)iVar12;
        if (0 < iVar12) {
          do {
            iVar10 = 0;
            pFVar2 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar2;
            if (1 < iVar12) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  EVar1 = (param_4.Predicate)->SortMode;
                  pFVar2 = param_1[iVar6];
                  pFVar3 = param_1[(longlong)iVar11 + 2];
                  if (EVar1 == TimeElapsed) {
LAB_145c40887:
                    bVar5 = (pFVar2->Inclusive).BusyCycles < (pFVar3->Inclusive).BusyCycles;
                  }
                  else if (EVar1 == NumPrims) {
                    bVar5 = (pFVar2->Inclusive).NumPrimitives < (pFVar3->Inclusive).NumPrimitives;
                  }
                  else {
                    if (EVar1 != NumVerts) goto LAB_145c40887;
                    bVar5 = (pFVar2->Inclusive).NumVertices < (pFVar3->Inclusive).NumVertices;
                  }
                  if (bVar5) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                EVar1 = (param_4.Predicate)->SortMode;
                pFVar2 = param_1[iVar6];
                pFVar3 = param_1[iVar10];
                if (EVar1 == TimeElapsed) {
LAB_145c408d7:
                  bVar5 = (pFVar2->Inclusive).BusyCycles < (pFVar3->Inclusive).BusyCycles;
                }
                else if (EVar1 == NumPrims) {
                  bVar5 = (pFVar2->Inclusive).NumPrimitives < (pFVar3->Inclusive).NumPrimitives;
                }
                else {
                  if (EVar1 != NumVerts) goto LAB_145c408d7;
                  bVar5 = (pFVar2->Inclusive).NumVertices < (pFVar3->Inclusive).NumVertices;
                }
                if (!bVar5) break;
                param_1[iVar10] = pFVar2;
                param_1[iVar6] = pFVar3;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar12 = iVar10 + -2;
      iVar10 = iVar12;
      iVar11 = iVar6;
    }
    iVar8 = iVar12 + 1;
    iVar9 = iVar12;
    if (iVar12 + 2 < param_2) {
      EVar1 = (param_4.Predicate)->SortMode;
      pFVar2 = param_1[(longlong)iVar12 + 1];
      pFVar3 = param_1[(longlong)iVar12 + 2];
      iVar9 = iVar8;
      if (EVar1 == TimeElapsed) {
LAB_145c40779:
        if ((pFVar2->Inclusive).BusyCycles < (pFVar3->Inclusive).BusyCycles) {
          iVar9 = iVar12;
        }
      }
      else if (EVar1 == NumPrims) {
        if ((pFVar2->Inclusive).NumPrimitives < (pFVar3->Inclusive).NumPrimitives) {
          iVar9 = iVar12;
        }
      }
      else {
        if (EVar1 != NumVerts) goto LAB_145c40779;
        if ((pFVar2->Inclusive).NumVertices < (pFVar3->Inclusive).NumVertices) {
          iVar9 = iVar12;
        }
      }
    }
    EVar1 = (param_4.Predicate)->SortMode;
    pFVar2 = param_1[(longlong)iVar9 + 1];
    pFVar3 = param_1[iVar6];
    if (EVar1 == TimeElapsed) {
LAB_145c407cf:
      bVar5 = (pFVar2->Inclusive).BusyCycles < (pFVar3->Inclusive).BusyCycles;
    }
    else if (EVar1 == NumPrims) {
      bVar5 = (pFVar2->Inclusive).NumPrimitives < (pFVar3->Inclusive).NumPrimitives;
    }
    else {
      if (EVar1 != NumVerts) goto LAB_145c407cf;
      bVar5 = (pFVar2->Inclusive).NumVertices < (pFVar3->Inclusive).NumVertices;
    }
    if (!bVar5) goto LAB_145c407f6;
    param_1[iVar6] = pFVar2;
    iVar12 = (iVar9 + 1) * 2;
    param_1[(longlong)iVar9 + 1] = pFVar3;
    iVar6 = iVar9 + 1;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<`FPipelineCacheFile::SortMetaData'::__l5::<lambda_1>_>_>_>_> @ 145c40920

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>_>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar31;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar32;
  int iVar33;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar34;
  longlong lVar35;
  FIdentityFunctor local_res10 [8];
  FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>_>_>
  local_res20;
  TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>_>_>_>
  local_d8 [26];
  
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar28) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_d8[0].Predicate = &local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar28)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar29 = (param_2 + -2) / 2;
  HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>_>_>_>
            (param_1,iVar29,param_2,local_res10,local_d8);
  while (iVar29 != 0) {
    iVar29 = iVar29 + -1;
    HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>_>_>_>
              (param_1,iVar29,param_2,local_res10,local_d8);
  }
  iVar29 = param_2 + -1;
  lVar35 = (longlong)iVar29;
  if (0 < iVar29) {
    pTVar31 = param_1 + lVar35;
    do {
      TVar3 = param_1->_s_1;
      uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
      uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
      uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
      uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
      uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
      uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
      uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
      uVar11 = *(undefined8 *)((param_1->ElementData).Pad + 0x40);
      uVar12 = *(undefined8 *)((param_1->ElementData).Pad + 0x48);
      uVar13 = *(undefined8 *)((param_1->ElementData).Pad + 0x50);
      uVar14 = *(undefined8 *)((param_1->ElementData).Pad + 0x58);
      uVar15 = *(undefined8 *)((param_1->ElementData).Pad + 0x60);
      uVar16 = *(undefined8 *)((param_1->ElementData).Pad + 0x68);
      uVar17 = *(undefined8 *)((param_1->ElementData).Pad + 0x70);
      uVar18 = *(undefined8 *)((param_1->ElementData).Pad + 0x78);
      uVar19 = *(undefined8 *)((param_1->ElementData).Pad + 0x80);
      uVar20 = *(undefined8 *)((param_1->ElementData).Pad + 0x88);
      uVar21 = *(undefined8 *)((param_1->ElementData).Pad + 0x90);
      uVar22 = *(undefined8 *)((param_1->ElementData).Pad + 0x98);
      uVar23 = *(undefined8 *)((param_1->ElementData).Pad + 0xa0);
      uVar24 = *(undefined8 *)((param_1->ElementData).Pad + 0xa8);
      uVar25 = *(undefined8 *)((param_1->ElementData).Pad + 0xb0);
      uVar26 = *(undefined8 *)((param_1->ElementData).Pad + 0xb8);
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 8);
      param_1->_s_1 = pTVar31->_s_1;
      *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x18);
      *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x10);
      *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x28);
      *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x20);
      *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x38);
      *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x30);
      *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x48);
      *(undefined8 *)((param_1->ElementData).Pad + 0x40) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x40);
      *(undefined8 *)((param_1->ElementData).Pad + 0x48) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x58);
      *(undefined8 *)((param_1->ElementData).Pad + 0x50) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x50);
      *(undefined8 *)((param_1->ElementData).Pad + 0x58) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x68);
      *(undefined8 *)((param_1->ElementData).Pad + 0x60) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x60);
      *(undefined8 *)((param_1->ElementData).Pad + 0x68) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x78);
      *(undefined8 *)((param_1->ElementData).Pad + 0x70) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x70);
      *(undefined8 *)((param_1->ElementData).Pad + 0x78) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x88);
      *(undefined8 *)((param_1->ElementData).Pad + 0x80) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x80);
      *(undefined8 *)((param_1->ElementData).Pad + 0x88) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x98);
      *(undefined8 *)((param_1->ElementData).Pad + 0x90) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x90);
      *(undefined8 *)((param_1->ElementData).Pad + 0x98) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xa8);
      *(undefined8 *)((param_1->ElementData).Pad + 0xa0) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xa0);
      *(undefined8 *)((param_1->ElementData).Pad + 0xa8) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xb8);
      *(undefined8 *)((param_1->ElementData).Pad + 0xb0) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xb0);
      *(undefined8 *)((param_1->ElementData).Pad + 0xb8) = uVar27;
      pTVar31->_s_1 = TVar3;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 8) = uVar4;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x10) = uVar5;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x18) = uVar6;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x20) = uVar7;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x28) = uVar8;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x30) = uVar9;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x38) = uVar10;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x40) = uVar11;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x48) = uVar12;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x50) = uVar13;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x58) = uVar14;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x60) = uVar15;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x68) = uVar16;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x70) = uVar17;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x78) = uVar18;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x80) = uVar19;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x88) = uVar20;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x90) = uVar21;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x98) = uVar22;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xa0) = uVar23;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xa8) = uVar24;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xb0) = uVar25;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xb8) = uVar26;
      iVar33 = 0;
      if (1 < iVar29) {
        do {
          iVar2 = iVar33 * 2;
          iVar30 = iVar2 + 1;
          if (iVar2 + 2 < iVar29) {
            if (*(longlong *)((longlong)iVar30 * 0xc0 + 0x28 + (longlong)param_1) <
                *(longlong *)((longlong)iVar2 * 0xc0 + 0x1a8 + (longlong)param_1)) {
              iVar30 = iVar2;
            }
            iVar30 = iVar30 + 1;
          }
          pTVar32 = param_1 + iVar30;
          pTVar34 = param_1 + iVar33;
          if (*(longlong *)((longlong)(pTVar34->ElementData).Pad + 0x28) <=
              *(longlong *)((pTVar32->ElementData).Pad + 0x28)) break;
          TVar3 = pTVar34->_s_1;
          uVar4 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8);
          uVar5 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18);
          uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20);
          uVar8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28);
          uVar9 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30);
          uVar10 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38);
          uVar11 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40);
          uVar12 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48);
          uVar13 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50);
          uVar14 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58);
          uVar15 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60);
          uVar16 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68);
          uVar17 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70);
          uVar18 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78);
          uVar19 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80);
          uVar20 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88);
          uVar21 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90);
          uVar22 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98);
          uVar23 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0);
          uVar24 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8);
          uVar25 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0);
          uVar26 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8);
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 8);
          pTVar34->_s_1 = pTVar32->_s_1;
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x78);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x70);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x88);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x80);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x98);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x90);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0xa8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0xa0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0xb8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0xb0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8) = uVar27;
          pTVar32->_s_1 = TVar3;
          *(undefined8 *)((pTVar32->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x18) = uVar6;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x20) = uVar7;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x28) = uVar8;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x30) = uVar9;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x38) = uVar10;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x40) = uVar11;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x48) = uVar12;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x50) = uVar13;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x58) = uVar14;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x60) = uVar15;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x68) = uVar16;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x70) = uVar17;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x78) = uVar18;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x80) = uVar19;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x88) = uVar20;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x90) = uVar21;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x98) = uVar22;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0xa0) = uVar23;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0xa8) = uVar24;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0xb0) = uVar25;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0xb8) = uVar26;
          iVar33 = iVar30;
        } while (iVar30 * 2 + 1 < iVar29);
      }
      iVar29 = iVar29 + -1;
      lVar35 = lVar35 + -1;
      pTVar31 = pTVar31 + -1;
    } while (0 < lVar35);
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<`FPipelineCacheFile::SortMetaData'::__l6::<lambda_2>_>_>_>_> @ 145c40e10

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>_>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar31;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar32;
  int iVar33;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar34;
  longlong lVar35;
  FIdentityFunctor local_res10 [8];
  FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>_>_>
  local_res20;
  TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>_>_>_>
  local_d8 [26];
  
  local_res20.Predicate = param_4.Predicate;
  if (param_2 < 0) {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar28) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_d8[0].Predicate = &local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar28)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar29 = (param_2 + -2) / 2;
  HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>_>_>_>
            (param_1,iVar29,param_2,local_res10,local_d8);
  while (iVar29 != 0) {
    iVar29 = iVar29 + -1;
    HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>_>_>_>
              (param_1,iVar29,param_2,local_res10,local_d8);
  }
  iVar29 = param_2 + -1;
  lVar35 = (longlong)iVar29;
  if (0 < iVar29) {
    pTVar31 = param_1 + lVar35;
    do {
      TVar3 = param_1->_s_1;
      uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
      uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
      uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
      uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
      uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
      uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
      uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
      uVar11 = *(undefined8 *)((param_1->ElementData).Pad + 0x40);
      uVar12 = *(undefined8 *)((param_1->ElementData).Pad + 0x48);
      uVar13 = *(undefined8 *)((param_1->ElementData).Pad + 0x50);
      uVar14 = *(undefined8 *)((param_1->ElementData).Pad + 0x58);
      uVar15 = *(undefined8 *)((param_1->ElementData).Pad + 0x60);
      uVar16 = *(undefined8 *)((param_1->ElementData).Pad + 0x68);
      uVar17 = *(undefined8 *)((param_1->ElementData).Pad + 0x70);
      uVar18 = *(undefined8 *)((param_1->ElementData).Pad + 0x78);
      uVar19 = *(undefined8 *)((param_1->ElementData).Pad + 0x80);
      uVar20 = *(undefined8 *)((param_1->ElementData).Pad + 0x88);
      uVar21 = *(undefined8 *)((param_1->ElementData).Pad + 0x90);
      uVar22 = *(undefined8 *)((param_1->ElementData).Pad + 0x98);
      uVar23 = *(undefined8 *)((param_1->ElementData).Pad + 0xa0);
      uVar24 = *(undefined8 *)((param_1->ElementData).Pad + 0xa8);
      uVar25 = *(undefined8 *)((param_1->ElementData).Pad + 0xb0);
      uVar26 = *(undefined8 *)((param_1->ElementData).Pad + 0xb8);
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 8);
      param_1->_s_1 = pTVar31->_s_1;
      *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x18);
      *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x10);
      *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x28);
      *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x20);
      *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x38);
      *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x30);
      *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x48);
      *(undefined8 *)((param_1->ElementData).Pad + 0x40) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x40);
      *(undefined8 *)((param_1->ElementData).Pad + 0x48) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x58);
      *(undefined8 *)((param_1->ElementData).Pad + 0x50) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x50);
      *(undefined8 *)((param_1->ElementData).Pad + 0x58) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x68);
      *(undefined8 *)((param_1->ElementData).Pad + 0x60) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x60);
      *(undefined8 *)((param_1->ElementData).Pad + 0x68) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x78);
      *(undefined8 *)((param_1->ElementData).Pad + 0x70) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x70);
      *(undefined8 *)((param_1->ElementData).Pad + 0x78) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x88);
      *(undefined8 *)((param_1->ElementData).Pad + 0x80) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x80);
      *(undefined8 *)((param_1->ElementData).Pad + 0x88) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x98);
      *(undefined8 *)((param_1->ElementData).Pad + 0x90) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x90);
      *(undefined8 *)((param_1->ElementData).Pad + 0x98) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xa8);
      *(undefined8 *)((param_1->ElementData).Pad + 0xa0) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xa0);
      *(undefined8 *)((param_1->ElementData).Pad + 0xa8) = uVar27;
      uVar27 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xb8);
      *(undefined8 *)((param_1->ElementData).Pad + 0xb0) =
           *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xb0);
      *(undefined8 *)((param_1->ElementData).Pad + 0xb8) = uVar27;
      pTVar31->_s_1 = TVar3;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 8) = uVar4;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x10) = uVar5;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x18) = uVar6;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x20) = uVar7;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x28) = uVar8;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x30) = uVar9;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x38) = uVar10;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x40) = uVar11;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x48) = uVar12;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x50) = uVar13;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x58) = uVar14;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x60) = uVar15;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x68) = uVar16;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x70) = uVar17;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x78) = uVar18;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x80) = uVar19;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x88) = uVar20;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x90) = uVar21;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x98) = uVar22;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xa0) = uVar23;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xa8) = uVar24;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xb0) = uVar25;
      *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0xb8) = uVar26;
      iVar33 = 0;
      if (1 < iVar29) {
        do {
          iVar2 = iVar33 * 2;
          iVar30 = iVar2 + 1;
          if (iVar2 + 2 < iVar29) {
            if (*(longlong *)((longlong)iVar30 * 0xc0 + 0x40 + (longlong)param_1) <
                *(longlong *)((longlong)iVar2 * 0xc0 + 0x1c0 + (longlong)param_1)) {
              iVar30 = iVar2;
            }
            iVar30 = iVar30 + 1;
          }
          pTVar32 = param_1 + iVar30;
          pTVar34 = param_1 + iVar33;
          if (*(longlong *)((longlong)(pTVar34->ElementData).Pad + 0x40) <=
              *(longlong *)((pTVar32->ElementData).Pad + 0x40)) break;
          TVar3 = pTVar34->_s_1;
          uVar4 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8);
          uVar5 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18);
          uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20);
          uVar8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28);
          uVar9 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30);
          uVar10 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38);
          uVar11 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40);
          uVar12 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48);
          uVar13 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50);
          uVar14 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58);
          uVar15 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60);
          uVar16 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68);
          uVar17 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70);
          uVar18 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78);
          uVar19 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80);
          uVar20 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88);
          uVar21 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90);
          uVar22 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98);
          uVar23 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0);
          uVar24 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8);
          uVar25 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0);
          uVar26 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8);
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 8);
          pTVar34->_s_1 = pTVar32->_s_1;
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x78);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x70);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x88);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x80);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0x98);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0x90);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0xa8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0xa0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8) = uVar27;
          uVar27 = *(undefined8 *)((pTVar32->ElementData).Pad + 0xb8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0) =
               *(undefined8 *)((pTVar32->ElementData).Pad + 0xb0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8) = uVar27;
          pTVar32->_s_1 = TVar3;
          *(undefined8 *)((pTVar32->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x18) = uVar6;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x20) = uVar7;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x28) = uVar8;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x30) = uVar9;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x38) = uVar10;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x40) = uVar11;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x48) = uVar12;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x50) = uVar13;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x58) = uVar14;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x60) = uVar15;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x68) = uVar16;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x70) = uVar17;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x78) = uVar18;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x80) = uVar19;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x88) = uVar20;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x90) = uVar21;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0x98) = uVar22;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0xa0) = uVar23;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0xa8) = uVar24;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0xb0) = uVar25;
          *(undefined8 *)((pTVar32->ElementData).Pad + 0xb8) = uVar26;
          iVar33 = iVar30;
        } while (iVar30 * 2 + 1 < iVar29);
      }
      iVar29 = iVar29 + -1;
      lVar35 = lVar35 + -1;
      pTVar31 = pTVar31 + -1;
    } while (0 < lVar35);
  }
  return;
}

// HeapSortInternal<FVertexElement,int,FIdentityFunctor,TDereferenceWrapper<FVertexElement,`FPipelineCacheFileFormatPSO::SortVertexElements'::__l2::<lambda_1>_>_> @ 145c41300

void __cdecl
AlgoImpl::
HeapSortInternal<FVertexElement,int,FIdentityFunctor,TDereferenceWrapper<FVertexElement,_FPipelineCacheFileFormatPSO::SortVertexElements_::__l2::<lambda_1>_>_>
          (FVertexElement *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FVertexElement,_public:_static_void___cdecl_FPipelineCacheFileFormatPSO::SortVertexElements(TArray<FVertexElement,TFixedAllocator<17>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  FVertexElement *pFVar1;
  FVertexElement *pFVar2;
  FVertexElement FVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FVertexElement,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FVertexElement,_FPipelineCacheFileFormatPSO::SortVertexElements_::__l2::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<FVertexElement,_public:_static_void___cdecl_FPipelineCacheFileFormatPSO::SortVertexElements(TArray<FVertexElement,TFixedAllocator<17>_>_&)_::_2_::<lambda_1>_>
              *)&local_res20);
  iVar7 = param_2 + -1;
  lVar8 = (longlong)iVar7;
  if (0 < iVar7) {
    do {
      FVar3 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = FVar3;
      iVar10 = 0;
      if (1 < iVar7) {
        do {
          iVar5 = iVar10 * 2;
          iVar9 = iVar5 + 1;
          if (iVar5 + 2 < iVar7) {
            if (param_1[(longlong)iVar5 + 2].StreamIndex < param_1[(longlong)iVar5 + 1].StreamIndex)
            {
              bVar6 = true;
            }
            else if (param_1[(longlong)iVar5 + 1].StreamIndex <
                     param_1[(longlong)iVar5 + 2].StreamIndex) {
              bVar6 = false;
            }
            else if (param_1[(longlong)iVar5 + 2].Offset < param_1[(longlong)iVar5 + 1].Offset) {
              bVar6 = true;
            }
            else if (param_1[(longlong)iVar5 + 1].Offset < param_1[(longlong)iVar5 + 2].Offset) {
              bVar6 = false;
            }
            else {
              bVar6 = false;
              if (param_1[(longlong)iVar5 + 2].AttributeIndex <
                  param_1[(longlong)iVar5 + 1].AttributeIndex) {
                bVar6 = true;
              }
            }
            if (bVar6) {
              iVar9 = iVar5;
            }
            iVar9 = iVar9 + 1;
          }
          pFVar1 = param_1 + iVar10;
          pFVar2 = param_1 + iVar9;
          if ((param_1[iVar9].StreamIndex <= pFVar1->StreamIndex) &&
             ((pFVar1->StreamIndex != param_1[iVar9].StreamIndex ||
              ((pFVar2->Offset <= pFVar1->Offset &&
               ((pFVar1->Offset != pFVar2->Offset ||
                (pFVar2->AttributeIndex <= pFVar1->AttributeIndex)))))))) break;
          FVar3 = *pFVar1;
          *pFVar1 = *pFVar2;
          *pFVar2 = FVar3;
          iVar10 = iVar9;
        } while (iVar9 * 2 + 1 < iVar7);
      }
      iVar7 = iVar7 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}

// HeapifyInternal<FVertexElement,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FVertexElement,`FPipelineCacheFileFormatPSO::SortVertexElements'::__l2::<lambda_1>_>_>_> @ 145c41470

void __cdecl
AlgoImpl::
HeapifyInternal<FVertexElement,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FVertexElement,_FPipelineCacheFileFormatPSO::SortVertexElements_::__l2::<lambda_1>_>_>_>
          (FVertexElement *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FVertexElement,_public:_static_void___cdecl_FPipelineCacheFileFormatPSO::SortVertexElements(TArray<FVertexElement,TFixedAllocator<17>_>_&)_::_2_::<lambda_1>_>_>
          param_4)

{
  FVertexElement *pFVar1;
  FVertexElement *pFVar2;
  FVertexElement FVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar5 = iVar8;
  iVar9 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_145c4159a:
      if (iVar9 == 0) {
        return;
      }
      iVar7 = iVar9 + -1;
      iVar8 = iVar5 + -2;
      iVar5 = iVar8;
      iVar9 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar10 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      if (param_1[(longlong)iVar8 + 2].StreamIndex < param_1[(longlong)iVar8 + 1].StreamIndex) {
        bVar6 = true;
      }
      else if (param_1[(longlong)iVar8 + 1].StreamIndex < param_1[(longlong)iVar8 + 2].StreamIndex)
      {
        bVar6 = false;
      }
      else if (param_1[(longlong)iVar8 + 2].Offset < param_1[(longlong)iVar8 + 1].Offset) {
        bVar6 = true;
      }
      else if (param_1[(longlong)iVar8 + 1].Offset < param_1[(longlong)iVar8 + 2].Offset) {
        bVar6 = false;
      }
      else {
        bVar6 = false;
        if (param_1[(longlong)iVar8 + 2].AttributeIndex <
            param_1[(longlong)iVar8 + 1].AttributeIndex) {
          bVar6 = true;
        }
      }
      if (bVar6) {
        iVar10 = iVar8;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar1 = param_1 + iVar7;
    pFVar2 = param_1 + iVar10;
    if ((param_1[iVar10].StreamIndex <= pFVar1->StreamIndex) &&
       ((pFVar1->StreamIndex != param_1[iVar10].StreamIndex ||
        ((pFVar2->Offset <= pFVar1->Offset &&
         ((pFVar1->Offset != pFVar2->Offset || (pFVar2->AttributeIndex <= pFVar1->AttributeIndex))))
        )))) goto LAB_145c4159a;
    FVar3 = *pFVar1;
    *pFVar1 = *pFVar2;
    iVar8 = iVar10 * 2 + 1;
    *pFVar2 = FVar3;
    iVar7 = iVar10;
  } while( true );
}

// IntroSortInternal<UE::RHI::GPUProfiler::FNode_*,int,FIdentityFunctor,TDereferenceWrapper<UE::RHI::GPUProfiler::FNode_*,`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::__l7::<lambda_1>_>_> @ 145c415d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::RHI::GPUProfiler::FNode_*,int,FIdentityFunctor,TDereferenceWrapper<UE::RHI::GPUProfiler::FNode_*,_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l7::<lambda_1>_>_>
          (FNode **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::RHI::GPUProfiler::FNode_*,_public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree(UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState_const_&,unsigned_int)const_::_7_::<lambda_1>_>
          param_4)

{
  EGPUProfileSortMode EVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  FNode **ppFVar4;
  int iVar5;
  int iVar6;
  FNode **ppFVar7;
  int iVar8;
  FNode **ppFVar9;
  FNode **ppFVar10;
  FNode **ppFVar11;
  FNode ***pppFVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_378 [48];
  FNode **local_348;
  FNode **local_338;
  FNode **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar14;
    memset(local_320,0,0x2e8);
    pppFVar12 = &local_338;
    do {
      ppFVar11 = pppFVar12[1];
      local_348 = pppFVar12[2];
      iVar5 = (int)((longlong)ppFVar11 - (longlong)*pppFVar12 >> 3);
      ppFVar4 = *pppFVar12;
      iVar8 = (int)local_348;
      while (iVar6 = iVar5 + 1, iVar8 != 0) {
        if (iVar6 < 9) {
          if (ppFVar4 < ppFVar11) {
            do {
              ppFVar9 = ppFVar4;
              if (ppFVar4 + 1 <= ppFVar11) {
                EVar1 = (param_4.Predicate)->SortMode;
                ppFVar7 = ppFVar4 + 1;
                do {
                  pFVar2 = *ppFVar7;
                  pFVar3 = *ppFVar9;
                  if (EVar1 == TimeElapsed) {
LAB_145c4187d:
                    bVar13 = (pFVar2->Inclusive).BusyCycles < (pFVar3->Inclusive).BusyCycles;
                  }
                  else if (EVar1 == NumPrims) {
                    bVar13 = (pFVar2->Inclusive).NumPrimitives < (pFVar3->Inclusive).NumPrimitives;
                  }
                  else {
                    if (EVar1 != NumVerts) goto LAB_145c4187d;
                    bVar13 = (pFVar2->Inclusive).NumVertices < (pFVar3->Inclusive).NumVertices;
                  }
                  if (bVar13) {
                    ppFVar9 = ppFVar7;
                  }
                  ppFVar7 = ppFVar7 + 1;
                } while (ppFVar7 <= ppFVar11);
              }
              pFVar2 = *ppFVar9;
              ppFVar7 = ppFVar11 + -1;
              *ppFVar9 = *ppFVar11;
              *ppFVar11 = pFVar2;
              ppFVar11 = ppFVar7;
            } while (ppFVar4 < ppFVar7);
          }
          goto LAB_145c417f0;
        }
        if (iVar6 < 0) {
          iVar6 = iVar5 + 2;
        }
        ppFVar9 = ppFVar11 + 1;
        pFVar2 = ppFVar4[iVar6 >> 1];
        ppFVar4[iVar6 >> 1] = *ppFVar4;
        *ppFVar4 = pFVar2;
        ppFVar7 = ppFVar4;
LAB_145c416c0:
        do {
          ppFVar7 = ppFVar7 + 1;
          if (ppFVar11 < ppFVar7) break;
          EVar1 = (param_4.Predicate)->SortMode;
          pFVar2 = *ppFVar7;
          pFVar3 = *ppFVar4;
          if (EVar1 == TimeElapsed) {
LAB_145c416f4:
            bVar13 = (pFVar2->Inclusive).BusyCycles < (pFVar3->Inclusive).BusyCycles;
          }
          else if (EVar1 == NumPrims) {
            bVar13 = (pFVar2->Inclusive).NumPrimitives < (pFVar3->Inclusive).NumPrimitives;
          }
          else {
            if (EVar1 != NumVerts) goto LAB_145c416f4;
            bVar13 = (pFVar2->Inclusive).NumVertices < (pFVar3->Inclusive).NumVertices;
          }
        } while (!bVar13);
        do {
          ppFVar10 = ppFVar9;
          ppFVar9 = ppFVar10 + -1;
          if (ppFVar9 <= ppFVar4) break;
          EVar1 = (param_4.Predicate)->SortMode;
          pFVar2 = *ppFVar4;
          pFVar3 = *ppFVar9;
          if (EVar1 == TimeElapsed) {
LAB_145c41737:
            bVar13 = (pFVar2->Inclusive).BusyCycles < (pFVar3->Inclusive).BusyCycles;
          }
          else if (EVar1 == NumPrims) {
            bVar13 = (pFVar2->Inclusive).NumPrimitives < (pFVar3->Inclusive).NumPrimitives;
          }
          else {
            if (EVar1 != NumVerts) goto LAB_145c41737;
            bVar13 = (pFVar2->Inclusive).NumVertices < (pFVar3->Inclusive).NumVertices;
          }
        } while (!bVar13);
        if (ppFVar7 <= ppFVar9) {
          pFVar2 = *ppFVar7;
          *ppFVar7 = *ppFVar9;
          *ppFVar9 = pFVar2;
          goto LAB_145c416c0;
        }
        pFVar2 = *ppFVar4;
        iVar8 = iVar8 + -1;
        *ppFVar4 = *ppFVar9;
        *ppFVar9 = pFVar2;
        if ((longlong)((longlong)ppFVar9 + (-8 - (longlong)ppFVar4) & 0xfffffffffffffff8U) <
            (longlong)((longlong)ppFVar11 - (longlong)ppFVar7 & 0xfffffffffffffff8U)) {
          if (ppFVar7 < ppFVar11) {
            *pppFVar12 = ppFVar7;
            pppFVar12[1] = ppFVar11;
            *(int *)(pppFVar12 + 2) = iVar8;
            pppFVar12 = pppFVar12 + 3;
          }
          if (ppFVar9 <= ppFVar4 + 1) goto LAB_145c417f0;
          ppFVar11 = ppFVar10 + -2;
          ppFVar7 = ppFVar4;
        }
        else {
          if (ppFVar4 + 1 < ppFVar9) {
            *pppFVar12 = ppFVar4;
            pppFVar12[1] = ppFVar10 + -2;
            *(int *)(pppFVar12 + 2) = iVar8;
            pppFVar12 = pppFVar12 + 3;
          }
          if (ppFVar11 <= ppFVar7) goto LAB_145c417f0;
        }
        iVar5 = (int)((longlong)ppFVar11 - (longlong)ppFVar7 >> 3);
        ppFVar4 = ppFVar7;
      }
      HeapSortInternal<UE::RHI::GPUProfiler::FNode_*,int,FIdentityFunctor,TDereferenceWrapper<UE::RHI::GPUProfiler::FNode_*,_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l7::<lambda_1>_>_>
                (ppFVar4,iVar6,param_3,param_4);
LAB_145c417f0:
      pppFVar12 = pppFVar12 + -3;
    } while (&local_338 <= pppFVar12);
  }
  return;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<`FPipelineCacheFile::SortMetaData'::__l5::<lambda_1>_>_>_>_> @ 145c418c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  longlong lVar27;
  int iVar28;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar29;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar30;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar31;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar32;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar33;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar34;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> **ppTVar35;
  float fVar36;
  undefined1 auStack_438 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *local_408;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_s_1 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_438;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar36 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar36;
    memset(local_320,0,0x2e8);
    ppTVar35 = &local_338;
    do {
      pTVar29 = ppTVar35[1];
      pTVar34 = *ppTVar35;
      pTVar1 = ppTVar35[2];
      local_408._0_4_ = (int)pTVar1;
      iVar28 = (int)(((longlong)pTVar29 - (longlong)pTVar34) / 0xc0) + 1;
      pTVar33 = pTVar34;
      if ((int)local_408 != 0) {
LAB_145c419b0:
        if (8 < iVar28) {
          pTVar34 = pTVar33 + iVar28 / 2;
          TVar2 = pTVar34->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28);
          uVar8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30);
          uVar9 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38);
          uVar10 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40);
          uVar11 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48);
          uVar12 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50);
          uVar13 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58);
          uVar14 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60);
          uVar15 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68);
          uVar16 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70);
          uVar17 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78);
          uVar18 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80);
          uVar19 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88);
          uVar20 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90);
          uVar21 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98);
          uVar22 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0);
          uVar23 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8);
          uVar24 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0);
          uVar25 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8);
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 8);
          pTVar34->_s_1 = pTVar33->_s_1;
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x78);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x70);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x88);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x80);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x98);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x90);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xa8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0xa0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xb8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0xb0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8) = uVar26;
          pTVar33->_s_1 = TVar2;
          *(undefined8 *)((pTVar33->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x18) = uVar5;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x20) = uVar6;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x28) = uVar7;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x30) = uVar8;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x38) = uVar9;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x40) = uVar10;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x48) = uVar11;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x50) = uVar12;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x58) = uVar13;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x60) = uVar14;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x68) = uVar15;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x70) = uVar16;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x78) = uVar17;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x80) = uVar18;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x88) = uVar19;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x90) = uVar20;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x98) = uVar21;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0xa0) = uVar22;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0xa8) = uVar23;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0xb0) = uVar24;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0xb8) = uVar25;
          pTVar31 = pTVar29 + 1;
          pTVar34 = pTVar33;
LAB_145c41b60:
          pTVar30 = pTVar34;
          pTVar34 = pTVar30 + 1;
          if (pTVar34 <= pTVar29) goto code_r0x000145c41b6c;
          goto LAB_145c41b80;
        }
        for (; pTVar34 = pTVar33, pTVar1 = pTVar33, pTVar33 < pTVar29; pTVar29 = pTVar29 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar29) {
            if (*(longlong *)((longlong)(pTVar1->ElementData).Pad + 0x28) <
                *(longlong *)((longlong)(pTVar34->ElementData).Pad + 0x28)) {
              pTVar34 = pTVar1;
            }
          }
          local_400 = pTVar34->_s_1;
          uStack_3f8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8);
          local_3f0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10);
          uStack_3e8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18);
          local_3e0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20);
          uStack_3d8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28);
          local_3d0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30);
          uStack_3c8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38);
          local_3c0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40);
          uStack_3b8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48);
          local_3b0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50);
          uStack_3a8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58);
          local_3a0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60);
          uStack_398 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68);
          local_390 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70);
          uStack_388 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78);
          local_380 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80);
          uStack_378 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88);
          local_370 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90);
          uStack_368 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98);
          local_360 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0);
          uStack_358 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8);
          local_350 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0);
          uStack_348 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8);
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 8);
          pTVar34->_s_1 = pTVar29->_s_1;
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x78);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x70);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x88);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x80);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x98);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x90);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8) = uVar3;
          pTVar29->_s_1 = local_400;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 8) = uStack_3f8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x10) = local_3f0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x18) = uStack_3e8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x20) = local_3e0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x28) = uStack_3d8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x30) = local_3d0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x38) = uStack_3c8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x40) = local_3c0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x48) = uStack_3b8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x50) = local_3b0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x58) = uStack_3a8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x60) = local_3a0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x68) = uStack_398;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x70) = local_390;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x78) = uStack_388;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x80) = local_380;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x88) = uStack_378;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x90) = local_370;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x98) = uStack_368;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa0) = local_360;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa8) = uStack_358;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb0) = local_350;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb8) = uStack_348;
        }
        goto LAB_145c41fa2;
      }
LAB_145c41f93:
      local_408 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>_>_>
                (pTVar34,iVar28,param_3,param_4);
LAB_145c41fa2:
      ppTVar35 = ppTVar35 + -3;
    } while (&local_338 <= ppTVar35);
  }
  return;
code_r0x000145c41b6c:
  if (*(longlong *)((pTVar33->ElementData).Pad + 0x28) <= *(longlong *)((longlong)pTVar30 + 0xe8))
  goto LAB_145c41b60;
LAB_145c41b80:
  do {
    pTVar32 = pTVar31;
    pTVar31 = pTVar32 + -1;
    if (pTVar31 <= pTVar33) break;
  } while (*(longlong *)((longlong)pTVar32 + -0x98) <=
           *(longlong *)((pTVar33->ElementData).Pad + 0x28));
  if (pTVar34 <= pTVar31) {
    TVar2 = pTVar34->_s_1;
    uVar3 = *(undefined8 *)((longlong)pTVar30 + 200);
    uVar4 = *(undefined8 *)((longlong)pTVar30 + 0xd0);
    uVar5 = *(undefined8 *)((longlong)pTVar30 + 0xd8);
    uVar6 = *(undefined8 *)((longlong)pTVar30 + 0xe0);
    uVar7 = *(undefined8 *)((longlong)pTVar30 + 0xe8);
    uVar8 = *(undefined8 *)((longlong)pTVar30 + 0xf0);
    uVar9 = *(undefined8 *)((longlong)pTVar30 + 0xf8);
    uVar10 = *(undefined8 *)((longlong)pTVar30 + 0x100);
    uVar11 = *(undefined8 *)((longlong)pTVar30 + 0x108);
    uVar12 = *(undefined8 *)((longlong)pTVar30 + 0x110);
    uVar13 = *(undefined8 *)((longlong)pTVar30 + 0x118);
    uVar14 = *(undefined8 *)((longlong)pTVar30 + 0x120);
    uVar15 = *(undefined8 *)((longlong)pTVar30 + 0x128);
    uVar16 = *(undefined8 *)((longlong)pTVar30 + 0x130);
    uVar17 = *(undefined8 *)((longlong)pTVar30 + 0x138);
    uVar18 = *(undefined8 *)((longlong)pTVar30 + 0x140);
    uVar19 = *(undefined8 *)((longlong)pTVar30 + 0x148);
    uVar20 = *(undefined8 *)((longlong)pTVar30 + 0x150);
    uVar21 = *(undefined8 *)((longlong)pTVar30 + 0x158);
    uVar22 = *(undefined8 *)((longlong)pTVar30 + 0x160);
    uVar23 = *(undefined8 *)((longlong)pTVar30 + 0x168);
    uVar24 = *(undefined8 *)((longlong)pTVar30 + 0x170);
    uVar25 = *(undefined8 *)((longlong)pTVar30 + 0x178);
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0xb8);
    pTVar34->_s_1 = pTVar31->_s_1;
    *(undefined8 *)((longlong)pTVar30 + 200) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0xa8);
    *(undefined8 *)((longlong)pTVar30 + 0xd0) = *(undefined8 *)((longlong)pTVar32 + -0xb0);
    *(undefined8 *)((longlong)pTVar30 + 0xd8) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x98);
    *(undefined8 *)((longlong)pTVar30 + 0xe0) = *(undefined8 *)((longlong)pTVar32 + -0xa0);
    *(undefined8 *)((longlong)pTVar30 + 0xe8) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x88);
    *(undefined8 *)((longlong)pTVar30 + 0xf0) = *(undefined8 *)((longlong)pTVar32 + -0x90);
    *(undefined8 *)((longlong)pTVar30 + 0xf8) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x78);
    *(undefined8 *)((longlong)pTVar30 + 0x100) = *(undefined8 *)((longlong)pTVar32 + -0x80);
    *(undefined8 *)((longlong)pTVar30 + 0x108) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x68);
    *(undefined8 *)((longlong)pTVar30 + 0x110) = *(undefined8 *)((longlong)pTVar32 + -0x70);
    *(undefined8 *)((longlong)pTVar30 + 0x118) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x58);
    *(undefined8 *)((longlong)pTVar30 + 0x120) = *(undefined8 *)((longlong)pTVar32 + -0x60);
    *(undefined8 *)((longlong)pTVar30 + 0x128) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x48);
    *(undefined8 *)((longlong)pTVar30 + 0x130) = *(undefined8 *)((longlong)pTVar32 + -0x50);
    *(undefined8 *)((longlong)pTVar30 + 0x138) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x38);
    *(undefined8 *)((longlong)pTVar30 + 0x140) = *(undefined8 *)((longlong)pTVar32 + -0x40);
    *(undefined8 *)((longlong)pTVar30 + 0x148) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x28);
    *(undefined8 *)((longlong)pTVar30 + 0x150) = *(undefined8 *)((longlong)pTVar32 + -0x30);
    *(undefined8 *)((longlong)pTVar30 + 0x158) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x18);
    *(undefined8 *)((longlong)pTVar30 + 0x160) = *(undefined8 *)((longlong)pTVar32 + -0x20);
    *(undefined8 *)((longlong)pTVar30 + 0x168) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -8);
    *(undefined8 *)((longlong)pTVar30 + 0x170) = *(undefined8 *)((longlong)pTVar32 + -0x10);
    *(undefined8 *)((longlong)pTVar30 + 0x178) = uVar26;
    pTVar31->_s_1 = TVar2;
    *(undefined8 *)((longlong)pTVar32 + -0xb8) = uVar3;
    *(undefined8 *)((longlong)pTVar32 + -0xb0) = uVar4;
    *(undefined8 *)((longlong)pTVar32 + -0xa8) = uVar5;
    *(undefined8 *)((longlong)pTVar32 + -0xa0) = uVar6;
    *(undefined8 *)((longlong)pTVar32 + -0x98) = uVar7;
    *(undefined8 *)((longlong)pTVar32 + -0x90) = uVar8;
    *(undefined8 *)((longlong)pTVar32 + -0x88) = uVar9;
    *(undefined8 *)((longlong)pTVar32 + -0x80) = uVar10;
    *(undefined8 *)((longlong)pTVar32 + -0x78) = uVar11;
    *(undefined8 *)((longlong)pTVar32 + -0x70) = uVar12;
    *(undefined8 *)((longlong)pTVar32 + -0x68) = uVar13;
    *(undefined8 *)((longlong)pTVar32 + -0x60) = uVar14;
    *(undefined8 *)((longlong)pTVar32 + -0x58) = uVar15;
    *(undefined8 *)((longlong)pTVar32 + -0x50) = uVar16;
    *(undefined8 *)((longlong)pTVar32 + -0x48) = uVar17;
    *(undefined8 *)((longlong)pTVar32 + -0x40) = uVar18;
    *(undefined8 *)((longlong)pTVar32 + -0x38) = uVar19;
    *(undefined8 *)((longlong)pTVar32 + -0x30) = uVar20;
    *(undefined8 *)((longlong)pTVar32 + -0x28) = uVar21;
    *(undefined8 *)((longlong)pTVar32 + -0x20) = uVar22;
    *(undefined8 *)((longlong)pTVar32 + -0x18) = uVar23;
    *(undefined8 *)((longlong)pTVar32 + -0x10) = uVar24;
    *(undefined8 *)((longlong)pTVar32 + -8) = uVar25;
    goto LAB_145c41b60;
  }
  local_400 = pTVar33->_s_1;
  uStack_3f8 = *(undefined8 *)((pTVar33->ElementData).Pad + 8);
  local_408._0_4_ = (int)local_408 + -1;
  local_3f0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x10);
  uStack_3e8 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x18);
  local_3e0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x20);
  uStack_3d8 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x28);
  local_3d0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x30);
  uStack_3c8 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x38);
  local_3c0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x40);
  uStack_3b8 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x48);
  local_3b0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x50);
  uStack_3a8 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x58);
  local_3a0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x60);
  uStack_398 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x68);
  local_390 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x70);
  uStack_388 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x78);
  local_380 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x80);
  uStack_378 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x88);
  local_370 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x90);
  uStack_368 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x98);
  local_360 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xa0);
  uStack_358 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xa8);
  local_350 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xb0);
  uStack_348 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xb8);
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0xb8);
  pTVar33->_s_1 = pTVar31->_s_1;
  *(undefined8 *)((pTVar33->ElementData).Pad + 8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0xa8);
  lVar27 = (longlong)pTVar31 + (-0xc0 - (longlong)pTVar33);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar32 + -0xb0);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x18) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x98);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar32 + -0xa0);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x28) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x88);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar32 + -0x90);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x38) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x78);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x40) = *(undefined8 *)((longlong)pTVar32 + -0x80);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x48) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x68);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x50) = *(undefined8 *)((longlong)pTVar32 + -0x70);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x58) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x58);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x60) = *(undefined8 *)((longlong)pTVar32 + -0x60);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x68) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x48);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x70) = *(undefined8 *)((longlong)pTVar32 + -0x50);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x78) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x38);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x80) = *(undefined8 *)((longlong)pTVar32 + -0x40);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x88) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x28);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x90) = *(undefined8 *)((longlong)pTVar32 + -0x30);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x98) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x18);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0xa0) = *(undefined8 *)((longlong)pTVar32 + -0x20);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0xa8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -8);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0xb0) = *(undefined8 *)((longlong)pTVar32 + -0x10);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0xb8) = uVar3;
  pTVar31->_s_1 = local_400;
  *(undefined8 *)((longlong)pTVar32 + -0xb8) = uStack_3f8;
  *(undefined8 *)((longlong)pTVar32 + -0xb0) = local_3f0;
  *(undefined8 *)((longlong)pTVar32 + -0xa8) = uStack_3e8;
  *(undefined8 *)((longlong)pTVar32 + -0xa0) = local_3e0;
  *(undefined8 *)((longlong)pTVar32 + -0x98) = uStack_3d8;
  *(undefined8 *)((longlong)pTVar32 + -0x90) = local_3d0;
  *(undefined8 *)((longlong)pTVar32 + -0x88) = uStack_3c8;
  *(undefined8 *)((longlong)pTVar32 + -0x80) = local_3c0;
  *(undefined8 *)((longlong)pTVar32 + -0x78) = uStack_3b8;
  *(undefined8 *)((longlong)pTVar32 + -0x70) = local_3b0;
  *(undefined8 *)((longlong)pTVar32 + -0x68) = uStack_3a8;
  *(undefined8 *)((longlong)pTVar32 + -0x60) = local_3a0;
  *(undefined8 *)((longlong)pTVar32 + -0x58) = uStack_398;
  *(undefined8 *)((longlong)pTVar32 + -0x50) = local_390;
  *(undefined8 *)((longlong)pTVar32 + -0x48) = uStack_388;
  *(undefined8 *)((longlong)pTVar32 + -0x40) = local_380;
  *(undefined8 *)((longlong)pTVar32 + -0x38) = uStack_378;
  *(undefined8 *)((longlong)pTVar32 + -0x30) = local_370;
  *(undefined8 *)((longlong)pTVar32 + -0x28) = uStack_368;
  lVar27 = lVar27 / 6 + (lVar27 >> 0x3f);
  *(undefined8 *)((longlong)pTVar32 + -0x20) = local_360;
  *(undefined8 *)((longlong)pTVar32 + -0x18) = uStack_358;
  *(undefined8 *)((longlong)pTVar32 + -0x10) = local_350;
  *(undefined8 *)((longlong)pTVar32 + -8) = uStack_348;
  if ((lVar27 >> 5) - (lVar27 >> 0x3f) < ((longlong)pTVar29 - (longlong)pTVar34) / 0xc0) {
    if (pTVar34 < pTVar29) {
      *ppTVar35 = pTVar34;
      ppTVar35[1] = pTVar29;
      *(int *)(ppTVar35 + 2) = (int)local_408;
      ppTVar35 = ppTVar35 + 3;
    }
    if (pTVar31 <= pTVar33 + 1) goto LAB_145c41fa2;
    pTVar29 = pTVar32 + -2;
    pTVar34 = pTVar33;
  }
  else {
    if (pTVar33 + 1 < pTVar31) {
      *ppTVar35 = pTVar33;
      ppTVar35[1] = pTVar32 + -2;
      *(int *)(ppTVar35 + 2) = (int)local_408;
      ppTVar35 = ppTVar35 + 3;
    }
    if (pTVar29 <= pTVar34) goto LAB_145c41fa2;
  }
  iVar28 = (int)(((longlong)pTVar29 - (longlong)pTVar34) / 0xc0) + 1;
  pTVar33 = pTVar34;
  if ((int)local_408 == 0) goto LAB_145c41f93;
  goto LAB_145c419b0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<`FPipelineCacheFile::SortMetaData'::__l6::<lambda_2>_>_>_>_> @ 145c421d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  longlong lVar27;
  int iVar28;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar29;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar30;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar31;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar32;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar33;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar34;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> **ppTVar35;
  float fVar36;
  undefined1 auStack_438 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *local_408;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_s_1 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_438;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar36 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar36;
    memset(local_320,0,0x2e8);
    ppTVar35 = &local_338;
    do {
      pTVar29 = ppTVar35[1];
      pTVar34 = *ppTVar35;
      pTVar1 = ppTVar35[2];
      local_408._0_4_ = (int)pTVar1;
      iVar28 = (int)(((longlong)pTVar29 - (longlong)pTVar34) / 0xc0) + 1;
      pTVar33 = pTVar34;
      if ((int)local_408 != 0) {
LAB_145c422c0:
        if (8 < iVar28) {
          pTVar34 = pTVar33 + iVar28 / 2;
          TVar2 = pTVar34->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28);
          uVar8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30);
          uVar9 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38);
          uVar10 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40);
          uVar11 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48);
          uVar12 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50);
          uVar13 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58);
          uVar14 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60);
          uVar15 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68);
          uVar16 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70);
          uVar17 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78);
          uVar18 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80);
          uVar19 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88);
          uVar20 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90);
          uVar21 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98);
          uVar22 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0);
          uVar23 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8);
          uVar24 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0);
          uVar25 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8);
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 8);
          pTVar34->_s_1 = pTVar33->_s_1;
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x78);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x70);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x88);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x80);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x98);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0x90);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xa8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0xa0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8) = uVar26;
          uVar26 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xb8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0) =
               *(undefined8 *)((pTVar33->ElementData).Pad + 0xb0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8) = uVar26;
          pTVar33->_s_1 = TVar2;
          *(undefined8 *)((pTVar33->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x18) = uVar5;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x20) = uVar6;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x28) = uVar7;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x30) = uVar8;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x38) = uVar9;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x40) = uVar10;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x48) = uVar11;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x50) = uVar12;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x58) = uVar13;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x60) = uVar14;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x68) = uVar15;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x70) = uVar16;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x78) = uVar17;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x80) = uVar18;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x88) = uVar19;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x90) = uVar20;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0x98) = uVar21;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0xa0) = uVar22;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0xa8) = uVar23;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0xb0) = uVar24;
          *(undefined8 *)((pTVar33->ElementData).Pad + 0xb8) = uVar25;
          pTVar31 = pTVar29 + 1;
          pTVar34 = pTVar33;
LAB_145c42470:
          pTVar30 = pTVar34;
          pTVar34 = pTVar30 + 1;
          if (pTVar34 <= pTVar29) goto code_r0x000145c4247c;
          goto LAB_145c42490;
        }
        for (; pTVar34 = pTVar33, pTVar1 = pTVar33, pTVar33 < pTVar29; pTVar29 = pTVar29 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar29) {
            if (*(longlong *)((longlong)(pTVar1->ElementData).Pad + 0x40) <
                *(longlong *)((longlong)(pTVar34->ElementData).Pad + 0x40)) {
              pTVar34 = pTVar1;
            }
          }
          local_400 = pTVar34->_s_1;
          uStack_3f8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8);
          local_3f0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10);
          uStack_3e8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18);
          local_3e0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20);
          uStack_3d8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28);
          local_3d0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30);
          uStack_3c8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38);
          local_3c0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40);
          uStack_3b8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48);
          local_3b0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50);
          uStack_3a8 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58);
          local_3a0 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60);
          uStack_398 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68);
          local_390 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70);
          uStack_388 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78);
          local_380 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80);
          uStack_378 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88);
          local_370 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90);
          uStack_368 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98);
          local_360 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0);
          uStack_358 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8);
          local_350 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0);
          uStack_348 = *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8);
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 8);
          pTVar34->_s_1 = pTVar29->_s_1;
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 8) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x10) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x18) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x20) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x28) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x30) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x38) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x40) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x48) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x50) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x58) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x60) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x68) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x78);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x70) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x70);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x78) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x88);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x80) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x80);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x88) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x98);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x90) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x90);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0x98) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa0) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xa8) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb8);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb0) =
               *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb0);
          *(undefined8 *)((longlong)(pTVar34->ElementData).Pad + 0xb8) = uVar3;
          pTVar29->_s_1 = local_400;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 8) = uStack_3f8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x10) = local_3f0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x18) = uStack_3e8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x20) = local_3e0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x28) = uStack_3d8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x30) = local_3d0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x38) = uStack_3c8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x40) = local_3c0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x48) = uStack_3b8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x50) = local_3b0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x58) = uStack_3a8;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x60) = local_3a0;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x68) = uStack_398;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x70) = local_390;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x78) = uStack_388;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x80) = local_380;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x88) = uStack_378;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x90) = local_370;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x98) = uStack_368;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa0) = local_360;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xa8) = uStack_358;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb0) = local_350;
          *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0xb8) = uStack_348;
        }
        goto LAB_145c428b2;
      }
LAB_145c428a3:
      local_408 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>_>_>
                (pTVar34,iVar28,param_3,param_4);
LAB_145c428b2:
      ppTVar35 = ppTVar35 + -3;
    } while (&local_338 <= ppTVar35);
  }
  return;
code_r0x000145c4247c:
  if (*(longlong *)((pTVar33->ElementData).Pad + 0x40) <= *(longlong *)((longlong)pTVar30 + 0x100))
  goto LAB_145c42470;
LAB_145c42490:
  do {
    pTVar32 = pTVar31;
    pTVar31 = pTVar32 + -1;
    if (pTVar31 <= pTVar33) break;
  } while (*(longlong *)((longlong)pTVar32 + -0x80) <=
           *(longlong *)((pTVar33->ElementData).Pad + 0x40));
  if (pTVar34 <= pTVar31) {
    TVar2 = pTVar34->_s_1;
    uVar3 = *(undefined8 *)((longlong)pTVar30 + 200);
    uVar4 = *(undefined8 *)((longlong)pTVar30 + 0xd0);
    uVar5 = *(undefined8 *)((longlong)pTVar30 + 0xd8);
    uVar6 = *(undefined8 *)((longlong)pTVar30 + 0xe0);
    uVar7 = *(undefined8 *)((longlong)pTVar30 + 0xe8);
    uVar8 = *(undefined8 *)((longlong)pTVar30 + 0xf0);
    uVar9 = *(undefined8 *)((longlong)pTVar30 + 0xf8);
    uVar10 = *(undefined8 *)((longlong)pTVar30 + 0x100);
    uVar11 = *(undefined8 *)((longlong)pTVar30 + 0x108);
    uVar12 = *(undefined8 *)((longlong)pTVar30 + 0x110);
    uVar13 = *(undefined8 *)((longlong)pTVar30 + 0x118);
    uVar14 = *(undefined8 *)((longlong)pTVar30 + 0x120);
    uVar15 = *(undefined8 *)((longlong)pTVar30 + 0x128);
    uVar16 = *(undefined8 *)((longlong)pTVar30 + 0x130);
    uVar17 = *(undefined8 *)((longlong)pTVar30 + 0x138);
    uVar18 = *(undefined8 *)((longlong)pTVar30 + 0x140);
    uVar19 = *(undefined8 *)((longlong)pTVar30 + 0x148);
    uVar20 = *(undefined8 *)((longlong)pTVar30 + 0x150);
    uVar21 = *(undefined8 *)((longlong)pTVar30 + 0x158);
    uVar22 = *(undefined8 *)((longlong)pTVar30 + 0x160);
    uVar23 = *(undefined8 *)((longlong)pTVar30 + 0x168);
    uVar24 = *(undefined8 *)((longlong)pTVar30 + 0x170);
    uVar25 = *(undefined8 *)((longlong)pTVar30 + 0x178);
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0xb8);
    pTVar34->_s_1 = pTVar31->_s_1;
    *(undefined8 *)((longlong)pTVar30 + 200) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0xa8);
    *(undefined8 *)((longlong)pTVar30 + 0xd0) = *(undefined8 *)((longlong)pTVar32 + -0xb0);
    *(undefined8 *)((longlong)pTVar30 + 0xd8) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x98);
    *(undefined8 *)((longlong)pTVar30 + 0xe0) = *(undefined8 *)((longlong)pTVar32 + -0xa0);
    *(undefined8 *)((longlong)pTVar30 + 0xe8) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x88);
    *(undefined8 *)((longlong)pTVar30 + 0xf0) = *(undefined8 *)((longlong)pTVar32 + -0x90);
    *(undefined8 *)((longlong)pTVar30 + 0xf8) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x78);
    *(undefined8 *)((longlong)pTVar30 + 0x100) = *(undefined8 *)((longlong)pTVar32 + -0x80);
    *(undefined8 *)((longlong)pTVar30 + 0x108) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x68);
    *(undefined8 *)((longlong)pTVar30 + 0x110) = *(undefined8 *)((longlong)pTVar32 + -0x70);
    *(undefined8 *)((longlong)pTVar30 + 0x118) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x58);
    *(undefined8 *)((longlong)pTVar30 + 0x120) = *(undefined8 *)((longlong)pTVar32 + -0x60);
    *(undefined8 *)((longlong)pTVar30 + 0x128) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x48);
    *(undefined8 *)((longlong)pTVar30 + 0x130) = *(undefined8 *)((longlong)pTVar32 + -0x50);
    *(undefined8 *)((longlong)pTVar30 + 0x138) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x38);
    *(undefined8 *)((longlong)pTVar30 + 0x140) = *(undefined8 *)((longlong)pTVar32 + -0x40);
    *(undefined8 *)((longlong)pTVar30 + 0x148) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x28);
    *(undefined8 *)((longlong)pTVar30 + 0x150) = *(undefined8 *)((longlong)pTVar32 + -0x30);
    *(undefined8 *)((longlong)pTVar30 + 0x158) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -0x18);
    *(undefined8 *)((longlong)pTVar30 + 0x160) = *(undefined8 *)((longlong)pTVar32 + -0x20);
    *(undefined8 *)((longlong)pTVar30 + 0x168) = uVar26;
    uVar26 = *(undefined8 *)((longlong)pTVar32 + -8);
    *(undefined8 *)((longlong)pTVar30 + 0x170) = *(undefined8 *)((longlong)pTVar32 + -0x10);
    *(undefined8 *)((longlong)pTVar30 + 0x178) = uVar26;
    pTVar31->_s_1 = TVar2;
    *(undefined8 *)((longlong)pTVar32 + -0xb8) = uVar3;
    *(undefined8 *)((longlong)pTVar32 + -0xb0) = uVar4;
    *(undefined8 *)((longlong)pTVar32 + -0xa8) = uVar5;
    *(undefined8 *)((longlong)pTVar32 + -0xa0) = uVar6;
    *(undefined8 *)((longlong)pTVar32 + -0x98) = uVar7;
    *(undefined8 *)((longlong)pTVar32 + -0x90) = uVar8;
    *(undefined8 *)((longlong)pTVar32 + -0x88) = uVar9;
    *(undefined8 *)((longlong)pTVar32 + -0x80) = uVar10;
    *(undefined8 *)((longlong)pTVar32 + -0x78) = uVar11;
    *(undefined8 *)((longlong)pTVar32 + -0x70) = uVar12;
    *(undefined8 *)((longlong)pTVar32 + -0x68) = uVar13;
    *(undefined8 *)((longlong)pTVar32 + -0x60) = uVar14;
    *(undefined8 *)((longlong)pTVar32 + -0x58) = uVar15;
    *(undefined8 *)((longlong)pTVar32 + -0x50) = uVar16;
    *(undefined8 *)((longlong)pTVar32 + -0x48) = uVar17;
    *(undefined8 *)((longlong)pTVar32 + -0x40) = uVar18;
    *(undefined8 *)((longlong)pTVar32 + -0x38) = uVar19;
    *(undefined8 *)((longlong)pTVar32 + -0x30) = uVar20;
    *(undefined8 *)((longlong)pTVar32 + -0x28) = uVar21;
    *(undefined8 *)((longlong)pTVar32 + -0x20) = uVar22;
    *(undefined8 *)((longlong)pTVar32 + -0x18) = uVar23;
    *(undefined8 *)((longlong)pTVar32 + -0x10) = uVar24;
    *(undefined8 *)((longlong)pTVar32 + -8) = uVar25;
    goto LAB_145c42470;
  }
  local_400 = pTVar33->_s_1;
  uStack_3f8 = *(undefined8 *)((pTVar33->ElementData).Pad + 8);
  local_408._0_4_ = (int)local_408 + -1;
  local_3f0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x10);
  uStack_3e8 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x18);
  local_3e0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x20);
  uStack_3d8 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x28);
  local_3d0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x30);
  uStack_3c8 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x38);
  local_3c0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x40);
  uStack_3b8 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x48);
  local_3b0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x50);
  uStack_3a8 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x58);
  local_3a0 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x60);
  uStack_398 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x68);
  local_390 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x70);
  uStack_388 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x78);
  local_380 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x80);
  uStack_378 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x88);
  local_370 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x90);
  uStack_368 = *(undefined8 *)((pTVar33->ElementData).Pad + 0x98);
  local_360 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xa0);
  uStack_358 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xa8);
  local_350 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xb0);
  uStack_348 = *(undefined8 *)((pTVar33->ElementData).Pad + 0xb8);
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0xb8);
  pTVar33->_s_1 = pTVar31->_s_1;
  *(undefined8 *)((pTVar33->ElementData).Pad + 8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0xa8);
  lVar27 = (longlong)pTVar31 + (-0xc0 - (longlong)pTVar33);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar32 + -0xb0);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x18) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x98);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar32 + -0xa0);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x28) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x88);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar32 + -0x90);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x38) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x78);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x40) = *(undefined8 *)((longlong)pTVar32 + -0x80);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x48) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x68);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x50) = *(undefined8 *)((longlong)pTVar32 + -0x70);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x58) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x58);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x60) = *(undefined8 *)((longlong)pTVar32 + -0x60);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x68) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x48);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x70) = *(undefined8 *)((longlong)pTVar32 + -0x50);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x78) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x38);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x80) = *(undefined8 *)((longlong)pTVar32 + -0x40);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x88) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x28);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x90) = *(undefined8 *)((longlong)pTVar32 + -0x30);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0x98) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -0x18);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0xa0) = *(undefined8 *)((longlong)pTVar32 + -0x20);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0xa8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar32 + -8);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0xb0) = *(undefined8 *)((longlong)pTVar32 + -0x10);
  *(undefined8 *)((pTVar33->ElementData).Pad + 0xb8) = uVar3;
  pTVar31->_s_1 = local_400;
  *(undefined8 *)((longlong)pTVar32 + -0xb8) = uStack_3f8;
  *(undefined8 *)((longlong)pTVar32 + -0xb0) = local_3f0;
  *(undefined8 *)((longlong)pTVar32 + -0xa8) = uStack_3e8;
  *(undefined8 *)((longlong)pTVar32 + -0xa0) = local_3e0;
  *(undefined8 *)((longlong)pTVar32 + -0x98) = uStack_3d8;
  *(undefined8 *)((longlong)pTVar32 + -0x90) = local_3d0;
  *(undefined8 *)((longlong)pTVar32 + -0x88) = uStack_3c8;
  *(undefined8 *)((longlong)pTVar32 + -0x80) = local_3c0;
  *(undefined8 *)((longlong)pTVar32 + -0x78) = uStack_3b8;
  *(undefined8 *)((longlong)pTVar32 + -0x70) = local_3b0;
  *(undefined8 *)((longlong)pTVar32 + -0x68) = uStack_3a8;
  *(undefined8 *)((longlong)pTVar32 + -0x60) = local_3a0;
  *(undefined8 *)((longlong)pTVar32 + -0x58) = uStack_398;
  *(undefined8 *)((longlong)pTVar32 + -0x50) = local_390;
  *(undefined8 *)((longlong)pTVar32 + -0x48) = uStack_388;
  *(undefined8 *)((longlong)pTVar32 + -0x40) = local_380;
  *(undefined8 *)((longlong)pTVar32 + -0x38) = uStack_378;
  *(undefined8 *)((longlong)pTVar32 + -0x30) = local_370;
  *(undefined8 *)((longlong)pTVar32 + -0x28) = uStack_368;
  lVar27 = lVar27 / 6 + (lVar27 >> 0x3f);
  *(undefined8 *)((longlong)pTVar32 + -0x20) = local_360;
  *(undefined8 *)((longlong)pTVar32 + -0x18) = uStack_358;
  *(undefined8 *)((longlong)pTVar32 + -0x10) = local_350;
  *(undefined8 *)((longlong)pTVar32 + -8) = uStack_348;
  if ((lVar27 >> 5) - (lVar27 >> 0x3f) < ((longlong)pTVar29 - (longlong)pTVar34) / 0xc0) {
    if (pTVar34 < pTVar29) {
      *ppTVar35 = pTVar34;
      ppTVar35[1] = pTVar29;
      *(int *)(ppTVar35 + 2) = (int)local_408;
      ppTVar35 = ppTVar35 + 3;
    }
    if (pTVar31 <= pTVar33 + 1) goto LAB_145c428b2;
    pTVar29 = pTVar32 + -2;
    pTVar34 = pTVar33;
  }
  else {
    if (pTVar33 + 1 < pTVar31) {
      *ppTVar35 = pTVar33;
      ppTVar35[1] = pTVar32 + -2;
      *(int *)(ppTVar35 + 2) = (int)local_408;
      ppTVar35 = ppTVar35 + 3;
    }
    if (pTVar29 <= pTVar34) goto LAB_145c428b2;
  }
  iVar28 = (int)(((longlong)pTVar29 - (longlong)pTVar34) / 0xc0) + 1;
  pTVar33 = pTVar34;
  if ((int)local_408 == 0) goto LAB_145c428a3;
  goto LAB_145c422c0;
}

// IntroSortInternal<FVertexElement,int,FIdentityFunctor,TDereferenceWrapper<FVertexElement,`FPipelineCacheFileFormatPSO::SortVertexElements'::__l2::<lambda_1>_>_> @ 145c42ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FVertexElement,int,FIdentityFunctor,TDereferenceWrapper<FVertexElement,_FPipelineCacheFileFormatPSO::SortVertexElements_::__l2::<lambda_1>_>_>
          (FVertexElement *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FVertexElement,_public:_static_void___cdecl_FPipelineCacheFileFormatPSO::SortVertexElements(TArray<FVertexElement,TFixedAllocator<17>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  FVertexElement FVar1;
  bool bVar2;
  FVertexElement *pFVar3;
  int iVar4;
  int iVar5;
  FVertexElement *pFVar6;
  FVertexElement *pFVar7;
  FVertexElement **ppFVar8;
  FVertexElement *pFVar9;
  FVertexElement *pFVar10;
  int iVar11;
  float fVar12;
  undefined1 auStack_368 [56];
  FVertexElement *local_330;
  FVertexElement *local_328;
  FVertexElement *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (param_2 < 2) {
    return;
  }
  local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
  local_320 = param_1 + (longlong)param_2 + -1;
  local_328 = param_1;
  fVar12 = logf((float)param_2 * (float)param_2);
  local_318 = (undefined4)(longlong)fVar12;
  memset(local_310,0,0x2e8);
  ppFVar8 = &local_328;
  do {
    pFVar9 = ppFVar8[1];
    local_330 = ppFVar8[2];
    iVar4 = (int)((longlong)pFVar9 - (longlong)*ppFVar8 >> 3);
    pFVar3 = *ppFVar8;
    iVar11 = (int)local_330;
joined_r0x000145c42b86:
    iVar5 = iVar4 + 1;
    if (iVar11 == 0) {
      HeapSortInternal<FVertexElement,int,FIdentityFunctor,TDereferenceWrapper<FVertexElement,_FPipelineCacheFileFormatPSO::SortVertexElements_::__l2::<lambda_1>_>_>
                (pFVar3,iVar5,param_3,param_4);
    }
    else {
      if (8 < iVar5) {
        if (iVar5 < 0) {
          iVar5 = iVar4 + 2;
        }
        FVar1 = pFVar3[iVar5 >> 1];
        pFVar3[iVar5 >> 1] = *pFVar3;
        pFVar6 = pFVar9 + 1;
        *pFVar3 = FVar1;
        pFVar10 = pFVar3;
LAB_145c42bc0:
        pFVar7 = pFVar10;
        pFVar10 = pFVar7 + 1;
        if ((pFVar10 <= pFVar9) && (pFVar10->StreamIndex <= pFVar3->StreamIndex)) break;
        goto LAB_145c42bf0;
      }
      for (; pFVar10 = pFVar3, pFVar6 = pFVar3, pFVar3 < pFVar9; pFVar9 = pFVar9 + -1) {
        while (pFVar7 = pFVar10, pFVar6 = pFVar6 + 1, pFVar6 <= pFVar9) {
          if (pFVar7->StreamIndex < pFVar6->StreamIndex) {
            bVar2 = true;
          }
          else if (pFVar6->StreamIndex < pFVar7->StreamIndex) {
LAB_145c42d3c:
            bVar2 = false;
          }
          else if (pFVar7->Offset < pFVar6->Offset) {
            bVar2 = true;
          }
          else {
            if ((pFVar6->Offset < pFVar7->Offset) ||
               (pFVar6->AttributeIndex <= pFVar7->AttributeIndex)) goto LAB_145c42d3c;
            bVar2 = true;
          }
          pFVar10 = pFVar6;
          if (!bVar2) {
            pFVar10 = pFVar7;
          }
        }
        FVar1 = *pFVar7;
        *pFVar7 = *pFVar9;
        *pFVar9 = FVar1;
      }
    }
LAB_145c42cc2:
    ppFVar8 = ppFVar8 + -3;
    if (ppFVar8 < &local_328) {
      return;
    }
  } while( true );
  if ((pFVar3->StreamIndex != pFVar10->StreamIndex) ||
     ((pFVar7[1].Offset <= pFVar3->Offset &&
      ((pFVar3->Offset != pFVar7[1].Offset || (pFVar7[1].AttributeIndex <= pFVar3->AttributeIndex)))
      ))) goto LAB_145c42bc0;
LAB_145c42bf0:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if ((pFVar6 <= pFVar3) || (pFVar6->StreamIndex < pFVar3->StreamIndex)) break;
  } while ((pFVar6->StreamIndex != pFVar3->StreamIndex) ||
          ((pFVar3->Offset <= pFVar7[-1].Offset &&
           ((pFVar7[-1].Offset != pFVar3->Offset ||
            (pFVar3->AttributeIndex <= pFVar7[-1].AttributeIndex))))));
  if (pFVar10 <= pFVar6) {
    FVar1 = *pFVar10;
    *pFVar10 = *pFVar6;
    *pFVar6 = FVar1;
    goto LAB_145c42bc0;
  }
  FVar1 = *pFVar3;
  iVar11 = iVar11 + -1;
  *pFVar3 = *pFVar6;
  *pFVar6 = FVar1;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar3) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar9 - (longlong)pFVar10 & 0xfffffffffffffff8U)) {
    if (pFVar10 < pFVar9) {
      *ppFVar8 = pFVar10;
      ppFVar8[1] = pFVar9;
      *(int *)(ppFVar8 + 2) = iVar11;
      ppFVar8 = ppFVar8 + 3;
    }
    if (pFVar6 <= pFVar3 + 1) goto LAB_145c42cc2;
    pFVar9 = pFVar7 + -2;
    pFVar10 = pFVar3;
  }
  else {
    if (pFVar3 + 1 < pFVar6) {
      *ppFVar8 = pFVar3;
      ppFVar8[1] = pFVar7 + -2;
      *(int *)(ppFVar8 + 2) = iVar11;
      ppFVar8 = ppFVar8 + 3;
    }
    if (pFVar9 <= pFVar10) goto LAB_145c42cc2;
  }
  iVar4 = (int)((longlong)pFVar9 - (longlong)pFVar10 >> 3);
  pFVar3 = pFVar10;
  goto joined_r0x000145c42b86;
}

// LegacyCompareEqual<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> @ 145c42d80

bool __cdecl
LegacyCompareEqual<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>
          (TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *param_1,
          TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar7 = *(int *)&(param_1->Elements).field_0x8;
  if (iVar7 != *(int *)&(param_2->Elements).field_0x8) {
    return false;
  }
  iVar10 = 0;
  if (0 < iVar7) {
    do {
      if (((iVar10 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar10)) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      puVar1 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar8 = &(param_1->Elements).field_0x10;
      if (puVar1 != (undefined1 *)0x0) {
        puVar8 = puVar1;
      }
      uVar11 = 1 << ((byte)iVar10 & 0x1f);
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0x1f;
      }
      uVar12 = uVar11 & *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4);
      if (((iVar10 < 0) || (*(int *)&(param_2->Elements).field_0x28 <= iVar10)) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      puVar1 = *(undefined1 **)&(param_2->Elements).field_0x20;
      puVar8 = &(param_2->Elements).field_0x10;
      if (puVar1 != (undefined1 *)0x0) {
        puVar8 = puVar1;
      }
      if ((uVar12 != 0) != ((*(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) & uVar11) != 0)) {
        return false;
      }
      if (uVar12 != 0) {
        lVar2 = *(longlong *)&param_1->Elements;
        lVar9 = (longlong)iVar10 * 0x1c;
        lVar3 = *(longlong *)&param_2->Elements;
        if (*(longlong *)(lVar2 + lVar9) != *(longlong *)(lVar3 + lVar9)) {
          return false;
        }
        if (*(longlong *)(lVar2 + 8 + lVar9) != *(longlong *)(lVar3 + 8 + lVar9)) {
          return false;
        }
        if (*(int *)(lVar2 + 0x10 + lVar9) != *(int *)(lVar3 + 0x10 + lVar9)) {
          return false;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)&(param_1->Elements).field_0x8);
  }
  return true;
}

// LowerBoundInternal<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FResolvedSignal_const_,int,unsigned___int64,`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::TrimSignals'::__l2::<lambda_1>,TLess<void>_> @ 145c42f00

int __cdecl
AlgoImpl::
LowerBoundInternal<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FResolvedSignal_const_,int,unsigned___int64,_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::TrimSignals_::__l2::<lambda_1>,TLess<void>_>
          (FResolvedSignal *param_1,int param_2,ulong64 *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].GPUTimestampBOP < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FResolvedSignal_const_,int,unsigned___int64,`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::ResolveWait'::__l7::<lambda_1>,TLess<void>_> @ 145c42f60

int __cdecl
AlgoImpl::
LowerBoundInternal<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FResolvedSignal_const_,int,unsigned___int64,_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::ResolveWait_::__l7::<lambda_1>,TLess<void>_>
          (FResolvedSignal *param_1,int param_2,ulong64 *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Value < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MatchRHIState<FRHIBlendState,FBlendStateInitializerRHI> @ 145c42fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
MatchRHIState<FRHIBlendState,FBlendStateInitializerRHI>
          (FRHIBlendState *param_1,FRHIBlendState *param_2)

{
  bool bVar1;
  undefined1 auStack_b8 [32];
  FBlendStateInitializerRHI local_98;
  FBlendStateInitializerRHI local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_58.RenderTargets.Elements[0].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[0].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[0].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[0].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[0].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[0].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[0].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[1].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[1].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[1].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[1].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[1].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[1].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[1].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[2].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[2].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[2].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[2].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[2].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[2].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[2].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[3].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[3].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[3].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[3].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[3].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[3].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[3].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[4].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[4].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[4].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[4].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[4].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[4].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[4].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[5].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[5].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[5].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[5].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[5].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[5].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[5].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[6].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[6].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[6].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[6].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[6].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[6].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[6].ColorWriteMask.Value = '\x0f';
  local_58.RenderTargets.Elements[7].ColorBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[7].ColorSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[7].ColorDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[7].AlphaBlendOp.Value = '\0';
  local_58.RenderTargets.Elements[7].AlphaSrcBlend.Value = '\x01';
  local_58.RenderTargets.Elements[7].AlphaDestBlend.Value = '\0';
  local_58.RenderTargets.Elements[7].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[0].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[0].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[0].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[0].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[0].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[0].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[0].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[1].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[1].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[1].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[1].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[1].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[1].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[1].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[2].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[2].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[2].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[2].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[2].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[2].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[2].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[3].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[3].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[3].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[3].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[3].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[3].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[3].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[4].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[4].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[4].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[4].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[4].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[4].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[4].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[5].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[5].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[5].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[5].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[5].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[5].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[5].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[6].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[6].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[6].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[6].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[6].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[6].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[6].ColorWriteMask.Value = '\x0f';
  local_98.RenderTargets.Elements[7].ColorBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[7].ColorSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[7].ColorDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[7].AlphaBlendOp.Value = '\0';
  local_98.RenderTargets.Elements[7].AlphaSrcBlend.Value = '\x01';
  local_98.RenderTargets.Elements[7].AlphaDestBlend.Value = '\0';
  local_98.RenderTargets.Elements[7].ColorWriteMask.Value = '\x0f';
  if (param_1 != (FRHIBlendState *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,&local_58);
  }
  if (param_2 != (FRHIBlendState *)0x0) {
    (**(code **)(*(longlong *)param_2 + 0x10))(param_2,&local_98);
  }
  bVar1 = operator==(&local_58,&local_98);
  return bVar1;
}

// Sort<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<`FPipelineCacheFile::SortMetaData'::__l5::<lambda_1>_>_> @ 145c44820

void __thiscall
TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>
          (TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> **)&this->Elements;
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
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l5::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_5_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// Sort<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<`FPipelineCacheFile::SortMetaData'::__l6::<lambda_2>_>_> @ 145c448b0

void __thiscall
TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>
          (TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> **)&this->Elements;
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
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_FPipelineCacheFile::SortMetaData_::__l6::<lambda_2>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<_public:_static_void___cdecl_FPipelineCacheFile::SortMetaData(TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>_&,FPipelineFileCacheManager::PSOOrder)_::_6_::<lambda_2>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>_> @ 145c44940

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>_> @ 145c44950

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>_> @ 145c44960

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>_> @ 145c44970

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> @ 145c44980

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*> @ 145c44990

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// get<1,TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_&> @ 145c449a0

FQueueTimestamps * __cdecl
get<1,TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_&>
          (TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>
           *param_1)

{
  return (FQueueTimestamps *)&param_1->field_0x8;
}

// get<1,TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>_&> @ 145c449b0

TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>
* __cdecl get<1,TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>_&>
                    (TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>
                     *param_1)

{
  return (TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>
          *)&param_1->field_0x8;
}

// get<1,TTuple<FRHIBreadcrumbData_Stats,int>_&> @ 145c449c0

int * __cdecl
get<1,TTuple<FRHIBreadcrumbData_Stats,int>_&>(TTuple<FRHIBreadcrumbData_Stats,int> *param_1)

{
  return (int *)&param_1->field_0x8;
}

// get<1,TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_const_&> @ 145c449d0

FQueueTimestamps * __cdecl
get<1,TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_const_&>
          (TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>
           *param_1)

{
  return (FQueueTimestamps *)&param_1->field_0x8;
}

// get<1,TTuple<FRHIBreadcrumbData_Stats,int>_const_&> @ 145c449e0

int * __cdecl
get<1,TTuple<FRHIBreadcrumbData_Stats,int>_const_&>(TTuple<FRHIBreadcrumbData_Stats,int> *param_1)

{
  return (int *)&param_1->field_0x8;
}

// get<1,TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_const_&> @ 145c449f0

FStatState * __cdecl
get<1,TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_const_&>
          (TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>
           *param_1)

{
  return (FStatState *)&param_1->field_0x8;
}

// get<0,TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_&> @ 145c44a00

FQueue * __cdecl
get<0,TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_&>
          (TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>
           *param_1)

{
  return (FQueue *)param_1;
}

// get<0,TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>_&> @ 145c44a10

FQueue * __cdecl
get<0,TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>_&>
          (TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>
           *param_1)

{
  return (FQueue *)param_1;
}

// get<0,TTuple<FRHIBreadcrumbData_Stats,int>_&> @ 145c44a20

FRHIBreadcrumbData_Stats * __cdecl
get<0,TTuple<FRHIBreadcrumbData_Stats,int>_&>(TTuple<FRHIBreadcrumbData_Stats,int> *param_1)

{
  return (FRHIBreadcrumbData_Stats *)param_1;
}

// get<0,TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_const_&> @ 145c44a30

FQueue * __cdecl
get<0,TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_const_&>
          (TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>
           *param_1)

{
  return (FQueue *)param_1;
}

// get<0,TTuple<FRHIBreadcrumbData_Stats,int>_const_&> @ 145c44a40

FRHIBreadcrumbData_Stats * __cdecl
get<0,TTuple<FRHIBreadcrumbData_Stats,int>_const_&>(TTuple<FRHIBreadcrumbData_Stats,int> *param_1)

{
  return (FRHIBreadcrumbData_Stats *)param_1;
}

// get<0,TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_const_&> @ 145c44a50

FRHIBreadcrumbData_Stats * __cdecl
get<0,TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_const_&>
          (TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>
           *param_1)

{
  return (FRHIBreadcrumbData_Stats *)param_1;
}

// ~TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l19::<lambda_10>,1,1> @ 145c46ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l19::<lambda_10>,1,1>::
~TFunction_OwnedObject<_UE::RHI::GPUProfiler::FTable::ToStringInner_::__l19::<lambda_10>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_10>__BD___ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_11>,1,0> @ 145c46f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_11>,1,0>::
~TFunction_OwnedObject<_UE::RHI::GPUProfiler::FTable::ToStringInner_::__l2::<lambda_11>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_11>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FPipelineFileCacheManager::BroadcastNewPSOsDelegate'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,0> @ 145c46f30

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPipelineFileCacheManager::BroadcastNewPSOsDelegate'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FPipelineFileCacheManager::BroadcastNewPSOsDelegate_::__l8::<lambda_1>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FPipelineFileCacheManager::BroadcastNewPSOsDelegate'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<FPipelineCacheFileFormatPSO,int>
            (*(FPipelineCacheFileFormatPSO **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FPipelineCacheFile::FetchPSODescriptors'::__l4::<lambda_1>,0,0> @ 145c46f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPipelineCacheFile::FetchPSODescriptors'::__l4::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FPipelineCacheFile::FetchPSODescriptors_::__l4::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3__FetchPSODescriptors_FPipelineCacheFile__QEAAXAEAV__TDoubleLinkedList_PEAUFPipelineCacheFileFormatPSORead_____Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_4>,1,0> @ 145c46f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_4>,1,0>::
~TFunction_OwnedObject<_UE::RHI::GPUProfiler::FTable::ToStringInner_::__l2::<lambda_4>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_4>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_5>,1,0> @ 145c46fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_5>,1,0>::
~TFunction_OwnedObject<_UE::RHI::GPUProfiler::FTable::ToStringInner_::__l2::<lambda_5>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_5>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::__l41::<lambda_5>,1,1> @ 145c46fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::__l41::<lambda_5>,1,1>
::
~TFunction_OwnedObject<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l41::<lambda_5>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::`41'::<lambda_5>,1,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_6>,1,1> @ 145c47010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_6>,1,1>::
~TFunction_OwnedObject<_UE::RHI::GPUProfiler::FTable::ToStringInner_::__l2::<lambda_6>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_6>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_7>,1,0> @ 145c47030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_7>,1,0>::
~TFunction_OwnedObject<_UE::RHI::GPUProfiler::FTable::ToStringInner_::__l2::<lambda_7>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_7>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_8>,1,0> @ 145c47050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_8>,1,0>::
~TFunction_OwnedObject<_UE::RHI::GPUProfiler::FTable::ToStringInner_::__l2::<lambda_8>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_8>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l22::<lambda_9>,1,0> @ 145c47070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l22::<lambda_9>,1,0>::
~TFunction_OwnedObject<_UE::RHI::GPUProfiler::FTable::ToStringInner_::__l22::<lambda_9>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_9>__BG___ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145c47420

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FGuid,TUniquePtr<_FPipelineCacheFile::SavePipelineFileCache_::__l46::FMemoryReaderAndMemory,TDefaultDelete<_FPipelineCacheFile::SavePipelineFileCache_::__l46::FMemoryReaderAndMemory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator<< @ 145c48b50

FArchive * __cdecl operator<<(FArchive *param_1,FDepthStencilStateInitializerRHI *param_2)

{
  uchar *puVar1;
  
  operator<<(param_1,&param_2->bEnableDepthWrite);
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->DepthTest,1);
  }
  else {
    (param_2->DepthTest).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  operator<<(param_1,&param_2->bEnableFrontFaceStencil);
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FrontFaceStencilTest,1);
  }
  else {
    (param_2->FrontFaceStencilTest).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FrontFaceStencilFailStencilOp,1);
  }
  else {
    (param_2->FrontFaceStencilFailStencilOp).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FrontFaceDepthFailStencilOp,1);
  }
  else {
    (param_2->FrontFaceDepthFailStencilOp).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FrontFacePassStencilOp,1);
  }
  else {
    (param_2->FrontFacePassStencilOp).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  operator<<(param_1,&param_2->bEnableBackFaceStencil);
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->BackFaceStencilTest,1);
  }
  else {
    (param_2->BackFaceStencilTest).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->BackFaceStencilFailStencilOp,1);
  }
  else {
    (param_2->BackFaceStencilFailStencilOp).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->BackFaceDepthFailStencilOp,1);
  }
  else {
    (param_2->BackFaceDepthFailStencilOp).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->BackFacePassStencilOp,1);
  }
  else {
    (param_2->BackFacePassStencilOp).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->StencilReadMask,1);
  }
  else {
    param_2->StencilReadMask = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->StencilWriteMask = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->StencilWriteMask,1);
  return param_1;
}

// operator<< @ 145c48df0

FArchive * __cdecl operator<<(FArchive *param_1,FPipelineCacheFileFormatHeader *param_2)

{
  undefined1 *puVar1;
  ulong64 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uchar *puVar5;
  ulong64 *puVar6;
  
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Magic);
    }
  }
  else {
    param_2->Magic = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_1->field_0x2a;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Version,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Version);
    }
  }
  else {
    param_2->Version = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = &param_2->GameVersion;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar5 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Platform,1);
  }
  else {
    (param_2->Platform).Value = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  operator<<(param_1,&param_2->Guid);
  puVar2 = &param_2->TableOffset;
  puVar6 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  if (0x15 < param_2->Version) {
    operator<<(param_1,&param_2->LastGCUnixTime);
  }
  return param_1;
}

// operator<< @ 145c48fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FPipelineCacheFileFormatPSO *param_2)

{
  FRHIShaderBindingLayout *pFVar1;
  EShaderBindingLayoutFlags *pEVar2;
  ERenderTargetLoadAction *pEVar3;
  ERenderTargetStoreAction *pEVar4;
  uchar *puVar5;
  uchar uVar6;
  undefined2 uVar7;
  DescriptorType DVar8;
  DescriptorType *pDVar9;
  longlong *plVar10;
  uint *puVar11;
  EShaderBindingLayoutFlags *pEVar12;
  uint *puVar13;
  ERenderTargetLoadAction *pEVar14;
  ERenderTargetStoreAction *pEVar15;
  uchar *puVar16;
  code *pcVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  FArchive *pFVar22;
  ETextureCreateFlags *pEVar23;
  EPixelFormat *pEVar24;
  longlong lVar25;
  byte *pbVar26;
  uint uVar27;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [4];
  uint local_144;
  FIdentityFunctor local_140 [4];
  uint local_13c;
  uint local_138;
  uint local_134;
  EPrimitiveType local_130;
  uint local_12c;
  uint local_128;
  uint local_124 [3];
  ulonglong local_118;
  ulonglong local_110;
  byte *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined4 local_dc;
  TArray<FVertexElement,TFixedAllocator<17>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  pDVar9 = (DescriptorType *)**(undefined8 **)&param_1->field_0x8;
  if ((DescriptorType *)(*(undefined8 **)&param_1->field_0x8)[1] < pDVar9 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Type);
    }
  }
  else {
    param_2->Type = *pDVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pbVar26 = &param_1->field_0x2a;
  DVar8 = param_2->Type;
  local_108 = pbVar26;
  if (DVar8 == Compute) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->ComputeDesc,0x14);
    iVar20 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    if (iVar20 == 9) {
      plVar10 = *(longlong **)&param_1->field_0x8;
      local_124[1] = 0;
      if ((ulonglong)plVar10[1] < *plVar10 + 4U) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_124 + 1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_124 + 1);
        }
      }
      else {
        *plVar10 = *plVar10 + 4;
      }
    }
  }
  else if (DVar8 == Graphics) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->GraphicsDesc,0x14);
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,&(param_2->GraphicsDesc).FragmentShader,0x14);
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,&(param_2->GraphicsDesc).GeometryShader,0x14);
    uVar19 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    if (uVar19 < 0x15) {
      local_f0 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_100,0x14);
      local_dc = 0;
      local_ec = 0;
      uStack_e4 = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_ec,0x14);
    }
    uVar19 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    if (0x13 < uVar19) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&(param_2->GraphicsDesc).MeshShader,0x14);
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,&(param_2->GraphicsDesc).AmplificationShader,0x14);
    }
    iVar20 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    if (iVar20 == 9) {
      plVar10 = *(longlong **)&param_1->field_0x8;
      local_144 = 0;
      if ((ulonglong)plVar10[1] < *plVar10 + 4U) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_144,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_144);
        }
      }
      else {
        *plVar10 = *plVar10 + 4;
      }
      plVar10 = *(longlong **)&param_1->field_0x8;
      local_144 = 0;
      if ((ulonglong)plVar10[1] < *plVar10 + 4U) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_144,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_144);
        }
      }
      else {
        *plVar10 = *plVar10 + 4;
      }
      plVar10 = *(longlong **)&param_1->field_0x8;
      local_144 = 0;
      if ((ulonglong)plVar10[1] < *plVar10 + 4U) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_144,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_144);
        }
      }
      else {
        *plVar10 = *plVar10 + 4;
      }
      plVar10 = *(longlong **)&param_1->field_0x8;
      local_144 = 0;
      if ((ulonglong)plVar10[1] < *plVar10 + 4U) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_144,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_144);
        }
      }
      else {
        *plVar10 = *plVar10 + 4;
      }
      plVar10 = *(longlong **)&param_1->field_0x8;
      local_144 = 0;
      if ((uint *)plVar10[1] < (uint *)*plVar10 + 1) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_144,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_144);
        }
      }
      else {
        local_144 = *(uint *)*plVar10;
        *plVar10 = *plVar10 + 4;
      }
    }
    uVar19 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    if (uVar19 < 0xb) {
      if (((param_1->field_0x28 & 1) == 0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("Ar.IsLoading()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                              ,0x500,L""), bVar18)) {
        pcVar17 = (code *)swi(3);
        pFVar22 = (FArchive *)(*pcVar17)();
        return pFVar22;
      }
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0x11;
      TArrayPrivateFriend::Serialize<FVertexElement,TFixedAllocator<17>_>(param_1,&local_d8);
      AlgoImpl::
      IntroSortInternal<FVertexElement,int,FIdentityFunctor,TDereferenceWrapper<FVertexElement,_FPipelineCacheFileFormatPSO::SortVertexElements_::__l2::<lambda_1>_>_>
                ((FVertexElement *)&local_d8,local_d8.ArrayNum,local_140[0],(<lambda_1> *)local_140)
      ;
      TArray<FVertexElement,TFixedAllocator<17>_>::AddZeroed
                (&(param_2->GraphicsDesc).VertexDescriptor,local_d8.ArrayNum);
      uVar19 = 0;
      if (local_d8.ArrayNum != 0) {
        do {
          uVar27 = ~uVar19 >> 0x1f;
          uVar21 = 0;
          if ((int)uVar19 < local_d8.ArrayNum) {
            uVar21 = uVar27;
          }
          if (uVar21 == 0) {
            local_158 = (longlong)(int)uVar19;
            local_150 = (longlong)local_d8.ArrayNum;
            bVar18 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar17 = (code *)swi(3);
              pFVar22 = (FArchive *)(*pcVar17)();
              return pFVar22;
            }
          }
          iVar20 = (param_2->GraphicsDesc).VertexDescriptor.ArrayNum;
          lVar25 = (longlong)(int)uVar19;
          uVar21 = 0;
          if ((int)uVar19 < iVar20) {
            uVar21 = uVar27;
          }
          uVar6 = local_d8.AllocatorInstance.InlineData[lVar25].Pad[0];
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)iVar20,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          (param_2->GraphicsDesc).VertexDescriptor.AllocatorInstance.InlineData[lVar25].Pad[0] =
               uVar6;
          uVar21 = 0;
          if ((int)uVar19 < local_d8.ArrayNum) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)local_d8.ArrayNum,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          iVar20 = (param_2->GraphicsDesc).VertexDescriptor.ArrayNum;
          uVar6 = local_d8.AllocatorInstance.InlineData[lVar25].Pad[1];
          uVar21 = 0;
          if ((int)uVar19 < iVar20) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)iVar20,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          (((TArray<FVertexElement,TFixedAllocator<17>_> *)
           (&(param_2->GraphicsDesc).AmplificationShader + 1))->AllocatorInstance).InlineData
          [lVar25].Pad[1] = uVar6;
          uVar21 = 0;
          if ((int)uVar19 < local_d8.ArrayNum) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)local_d8.ArrayNum,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          iVar20 = (param_2->GraphicsDesc).VertexDescriptor.ArrayNum;
          uVar6 = local_d8.AllocatorInstance.InlineData[lVar25].Pad[2];
          uVar21 = 0;
          if ((int)uVar19 < iVar20) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)iVar20,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          (((TArray<FVertexElement,TFixedAllocator<17>_> *)
           (&(param_2->GraphicsDesc).AmplificationShader + 1))->AllocatorInstance).InlineData
          [lVar25].Pad[2] = uVar6;
          uVar21 = 0;
          if ((int)uVar19 < local_d8.ArrayNum) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)local_d8.ArrayNum,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          iVar20 = (param_2->GraphicsDesc).VertexDescriptor.ArrayNum;
          uVar6 = local_d8.AllocatorInstance.InlineData[lVar25].Pad[3];
          uVar21 = 0;
          if ((int)uVar19 < iVar20) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)iVar20,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          (((TArray<FVertexElement,TFixedAllocator<17>_> *)
           (&(param_2->GraphicsDesc).AmplificationShader + 1))->AllocatorInstance).InlineData
          [lVar25].Pad[3] = uVar6;
          uVar21 = 0;
          if ((int)uVar19 < local_d8.ArrayNum) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)local_d8.ArrayNum,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          iVar20 = (param_2->GraphicsDesc).VertexDescriptor.ArrayNum;
          uVar7 = *(undefined2 *)(local_d8.AllocatorInstance.InlineData[lVar25].Pad + 4);
          uVar21 = 0;
          if ((int)uVar19 < iVar20) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)iVar20,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          *(undefined2 *)
           ((((TArray<FVertexElement,TFixedAllocator<17>_> *)
             (&(param_2->GraphicsDesc).AmplificationShader + 1))->AllocatorInstance).InlineData
            [lVar25].Pad + 4) = uVar7;
          uVar21 = 0;
          if ((int)uVar19 < local_d8.ArrayNum) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)local_d8.ArrayNum,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          iVar20 = (param_2->GraphicsDesc).VertexDescriptor.ArrayNum;
          uVar7 = *(undefined2 *)(local_d8.AllocatorInstance.InlineData[lVar25].Pad + 6);
          uVar21 = 0;
          if ((int)uVar19 < iVar20) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (local_158 = lVar25, local_150 = (longlong)iVar20,
             bVar18 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar22 = (FArchive *)(*pcVar17)();
            return pFVar22;
          }
          uVar19 = uVar19 + 1;
          *(undefined2 *)
           ((((TArray<FVertexElement,TFixedAllocator<17>_> *)
             (&(param_2->GraphicsDesc).AmplificationShader + 1))->AllocatorInstance).InlineData
            [lVar25].Pad + 6) = uVar7;
          pbVar26 = local_108;
        } while (uVar19 < (uint)local_d8.ArrayNum);
      }
    }
    else {
      TArrayPrivateFriend::Serialize<FVertexElement,TFixedAllocator<17>_>
                (param_1,&(param_2->GraphicsDesc).VertexDescriptor);
    }
    operator<<<FBlendStateInitializerRHI::FRenderTarget_8_4294967295>
              (param_1,&(param_2->GraphicsDesc).BlendState.RenderTargets);
    operator<<(param_1,&(param_2->GraphicsDesc).BlendState.bUseIndependentRenderTargetBlendStates);
    operator<<(param_1,&(param_2->GraphicsDesc).BlendState.bUseAlphaToCoverage);
    operator<<(param_1,&(param_2->GraphicsDesc).RasterizerState);
    operator<<(param_1,&(param_2->GraphicsDesc).DepthStencilState);
    pEVar24 = (param_2->GraphicsDesc).RenderTargetFormats;
    lVar25 = 8;
    pEVar23 = (param_2->GraphicsDesc).RenderTargetFlags;
    do {
      plVar10 = *(longlong **)&param_1->field_0x8;
      local_138 = (uint)*pEVar24;
      if ((uint *)plVar10[1] < (uint *)*plVar10 + 1) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_138,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_138);
        }
      }
      else {
        local_138 = *(uint *)*plVar10;
        *plVar10 = *plVar10 + 4;
      }
      *pEVar24 = (EPixelFormat)local_138;
      uVar19 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
      plVar10 = *(longlong **)&param_1->field_0x8;
      if (uVar19 < 0x17) {
        local_134 = 0;
        if ((uint *)plVar10[1] < (uint *)*plVar10 + 1) {
          if ((*pbVar26 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_134,4);
            uVar19 = local_134;
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_134);
            uVar19 = local_134;
          }
        }
        else {
          local_134 = *(uint *)*plVar10;
          *plVar10 = *plVar10 + 4;
          uVar19 = local_134;
        }
      }
      else {
        local_118 = (ulonglong)(uint)((int)*pEVar23 & (Shared|SRGB));
        if ((ulonglong *)plVar10[1] < (ulonglong *)*plVar10 + 1) {
          if ((*pbVar26 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_118,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_118);
          }
        }
        else {
          local_118 = *(ulonglong *)*plVar10;
          *plVar10 = *plVar10 + 8;
        }
        uVar19 = (uint)local_118;
      }
      *pEVar23 = (ulonglong)(uVar19 & 0x2000010);
      plVar10 = *(longlong **)&param_1->field_0x8;
      local_148[0] = 0;
      if ((undefined1 *)plVar10[1] < (undefined1 *)*plVar10 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_148,1);
      }
      else {
        local_148[0] = *(undefined1 *)*plVar10;
        *plVar10 = *plVar10 + 1;
      }
      plVar10 = *(longlong **)&param_1->field_0x8;
      if ((undefined1 *)plVar10[1] < (undefined1 *)*plVar10 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_148,1);
      }
      else {
        local_148[0] = *(undefined1 *)*plVar10;
        *plVar10 = *plVar10 + 1;
      }
      pEVar24 = pEVar24 + 1;
      pEVar23 = pEVar23 + 1;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    puVar11 = &(param_2->GraphicsDesc).RenderTargetsActive;
    puVar13 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar13 + 1) {
      if ((*pbVar26 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar11,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar11);
      }
    }
    else {
      *puVar11 = *puVar13;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar11 = &(param_2->GraphicsDesc).MSAASamples;
    puVar13 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar13 + 1) {
      if ((*pbVar26 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar11,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar11);
      }
    }
    else {
      *puVar11 = *puVar13;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    plVar10 = *(longlong **)&param_1->field_0x8;
    local_130 = (param_2->GraphicsDesc).PrimitiveType;
    if ((EPrimitiveType *)plVar10[1] < (EPrimitiveType *)*plVar10 + 1) {
      if ((*pbVar26 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_130,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_130);
      }
    }
    else {
      local_130 = *(EPrimitiveType *)*plVar10;
      *plVar10 = *plVar10 + 4;
    }
    (param_2->GraphicsDesc).PrimitiveType = local_130;
    plVar10 = *(longlong **)&param_1->field_0x8;
    local_12c = (uint)(param_2->GraphicsDesc).DepthStencilFormat;
    if ((uint *)plVar10[1] < (uint *)*plVar10 + 1) {
      if ((*pbVar26 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_12c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_12c);
      }
    }
    else {
      local_12c = *(uint *)*plVar10;
      *plVar10 = *plVar10 + 4;
    }
    (param_2->GraphicsDesc).DepthStencilFormat = (EPixelFormat)local_12c;
    uVar19 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    plVar10 = *(longlong **)&param_1->field_0x8;
    if (uVar19 < 0x17) {
      local_128 = 0;
      if ((uint *)plVar10[1] < (uint *)*plVar10 + 1) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_128,4);
          uVar19 = local_128;
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_128);
          uVar19 = local_128;
        }
      }
      else {
        local_128 = *(uint *)*plVar10;
        *plVar10 = *plVar10 + 4;
        uVar19 = local_128;
      }
    }
    else {
      local_110 = (ulonglong)
                  (uint)((int)(param_2->GraphicsDesc).DepthStencilFlags &
                        (Shared|SRGB|DepthStencilTargetable));
      if ((ulonglong *)plVar10[1] < (ulonglong *)*plVar10 + 1) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_110,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_110);
        }
      }
      else {
        local_110 = *(ulonglong *)*plVar10;
        *plVar10 = *plVar10 + 8;
      }
      uVar19 = (uint)local_110;
    }
    pEVar3 = &(param_2->GraphicsDesc).DepthLoad;
    (param_2->GraphicsDesc).DepthStencilFlags = (ulonglong)(uVar19 & 0x2000014);
    pEVar14 = (ERenderTargetLoadAction *)**(undefined8 **)&param_1->field_0x8;
    if ((ERenderTargetLoadAction *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar14 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,1);
    }
    else {
      *pEVar3 = *pEVar14;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    pEVar3 = &(param_2->GraphicsDesc).StencilLoad;
    pEVar14 = (ERenderTargetLoadAction *)**(undefined8 **)&param_1->field_0x8;
    if ((ERenderTargetLoadAction *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar14 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,1);
    }
    else {
      *pEVar3 = *pEVar14;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    pEVar4 = &(param_2->GraphicsDesc).DepthStore;
    pEVar15 = (ERenderTargetStoreAction *)**(undefined8 **)&param_1->field_0x8;
    if ((ERenderTargetStoreAction *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar15 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar4,1);
    }
    else {
      *pEVar4 = *pEVar15;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    pEVar4 = &(param_2->GraphicsDesc).StencilStore;
    pEVar15 = (ERenderTargetStoreAction *)**(undefined8 **)&param_1->field_0x8;
    if ((ERenderTargetStoreAction *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar15 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar4,1);
    }
    else {
      *pEVar4 = *pEVar15;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar5 = &(param_2->GraphicsDesc).SubpassHint;
    puVar16 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar16 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,1);
    }
    else {
      *puVar5 = *puVar16;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar5 = &(param_2->GraphicsDesc).SubpassIndex;
    puVar16 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar16 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,1);
    }
    else {
      *puVar5 = *puVar16;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    uVar19 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    if (0x17 < uVar19) {
      puVar5 = &(param_2->GraphicsDesc).MultiViewCount;
      puVar16 = (uchar *)**(undefined8 **)&param_1->field_0x8;
      if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar16 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,1);
      }
      else {
        *puVar5 = *puVar16;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
      operator<<(param_1,&(param_2->GraphicsDesc).bHasFragmentDensityAttachment);
    }
    uVar19 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    if (0x1d < uVar19) {
      operator<<(param_1,&(param_2->GraphicsDesc).bAllowVariableRateShading);
      plVar10 = *(longlong **)&param_1->field_0x8;
      local_124[0] = (uint)(param_2->GraphicsDesc).ShadingRate;
      if ((uint *)plVar10[1] < (uint *)*plVar10 + 1) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_124,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_124);
        }
      }
      else {
        local_124[0] = *(uint *)*plVar10;
        *plVar10 = *plVar10 + 4;
      }
      (param_2->GraphicsDesc).ShadingRate = (EVRSShadingRate)local_124[0];
    }
    uVar19 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    if (0x1b < uVar19) {
      operator<<(param_1,&(param_2->GraphicsDesc).bDepthBounds);
    }
  }
  else if (DVar8 == RayTracing) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->RayTracingDesc,0x14);
    operator<<(param_1,&(param_2->RayTracingDesc).DeprecatedMaxPayloadSizeInBytes);
    plVar10 = *(longlong **)&param_1->field_0x8;
    local_13c = (uint)(param_2->RayTracingDesc).Frequency;
    if ((uint *)plVar10[1] < (uint *)*plVar10 + 1) {
      if ((*pbVar26 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_13c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_13c);
      }
    }
    else {
      local_13c = *(uint *)*plVar10;
      *plVar10 = *plVar10 + 4;
    }
    (param_2->RayTracingDesc).Frequency = (EShaderFrequency)local_13c;
    uVar19 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    if (0x1c < uVar19) {
      puVar11 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar11 + 1) {
        pFVar1 = &(param_2->RayTracingDesc).ShaderBindingLayout;
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Hash);
        }
      }
      else {
        (param_2->RayTracingDesc).ShaderBindingLayout.Hash = *puVar11;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pEVar2 = &(param_2->RayTracingDesc).ShaderBindingLayout.Flags;
      pEVar12 = (EShaderBindingLayoutFlags *)**(undefined8 **)&param_1->field_0x8;
      if ((EShaderBindingLayoutFlags *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar12 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,1);
      }
      else {
        *pEVar2 = *pEVar12;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
      puVar11 = &(param_2->RayTracingDesc).ShaderBindingLayout.NumUniformBufferEntries;
      puVar13 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar13 + 1) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar11,4);
          operator<<<FRHIUniformBufferShaderBindingLayout,8,4294967295>
                    (param_1,&(param_2->RayTracingDesc).ShaderBindingLayout.UniformBufferEntries);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar11);
          operator<<<FRHIUniformBufferShaderBindingLayout,8,4294967295>
                    (param_1,&(param_2->RayTracingDesc).ShaderBindingLayout.UniformBufferEntries);
        }
      }
      else {
        *puVar11 = *puVar13;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        operator<<<FRHIUniformBufferShaderBindingLayout,8,4294967295>
                  (param_1,&(param_2->RayTracingDesc).ShaderBindingLayout.UniformBufferEntries);
      }
    }
  }
  else {
    bVar18 = FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                        ,0x577,L"");
    if (bVar18) {
      pcVar17 = (code *)swi(3);
      pFVar22 = (FArchive *)(*pcVar17)();
      return pFVar22;
    }
  }
  return param_1;
}

// operator<< @ 145c49f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FPipelineCacheFileFormatPSOMetaData *param_2)

{
  ulong64 *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStackY_b8 [32];
  char local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->FileOffset);
    }
  }
  else {
    param_2->FileOffset = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->FileSize);
    }
  }
  else {
    param_2->FileSize = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  local_88[0] = '\x01';
  iVar3 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
  if (iVar3 == 0x12) {
    if ((param_1->field_0x28 & 4) != 0) {
      local_88[0] = (((param_2->FileGuid).D != 0 || (param_2->FileGuid).C != 0) ||
                    (param_2->FileGuid).B != 0) || (param_2->FileGuid).A != 0;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((char *)plVar2[1] < (char *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_88);
    }
    else {
      local_88[0] = *(char *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
  }
  if (local_88[0] != '\0') {
    operator<<(param_1,&param_2->FileGuid);
  }
  operator<<(param_1,&param_2->Stats);
  iVar3 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
  if (iVar3 == 9) {
    local_4c = 0x80;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    local_48 = 0xffffffff;
    TSetPrivateFriend::Serialize<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
              (param_1,(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                       local_78);
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    iVar3 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_44 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  else {
    uVar4 = (**(code **)(*(longlong *)param_1 + 0x50))();
    if (9 < uVar4) {
      TSetPrivateFriend::Serialize<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>
                (param_1,&param_2->Shaders);
    }
  }
  uVar4 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
  if (0xc < uVar4) {
    operator<<(param_1,&param_2->UsageMask);
  }
  uVar4 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
  if (0xf < uVar4) {
    operator<<(param_1,&param_2->EngineFlags);
  }
  uVar4 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
  if (0x15 < uVar4) {
    operator<<(param_1,&param_2->LastUsedUnixTime);
  }
  return param_1;
}

// operator<< @ 145c4a210

FArchive * __cdecl operator<<(FArchive *param_1,FPipelineCacheFileFormatTOC *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  PSOOrder *pPVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  FPipelineCacheFileFormatTOC *pFVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *pTVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  char local_res8 [8];
  FPipelineCacheFileFormatTOC *local_res10;
  ulong64 local_res18;
  ulong64 local_res20;
  FGuid local_f8;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_e8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  *local_b8;
  undefined2 local_b0;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  TIterator local_80;
  
  plVar2 = *(longlong **)&param_1->field_0x8;
  iVar15 = 1;
  local_f8.A = 0;
  local_f8.B = 0;
  bVar6 = true;
  local_f8.C = 0;
  local_f8.D = 0;
  local_res10 = param_2;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res18 = 0x544f435354415232;
    if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_res18);
      }
    }
    else {
      local_res18 = *(ulong64 *)*plVar2;
      *plVar2 = *plVar2 + 8;
    }
    pTVar14 = &param_2->MetaData;
    local_res20 = CONCAT44(local_res20._4_4_,1);
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->MetaData).field_0x10;
    bVar5 = false;
    local_80._padding_._0_4_ = 0;
    iVar9 = *(int *)&(param_2->MetaData).field_0x28;
    local_80._padding_._0_4_ = (int)local_80._padding_;
    local_80._padding_._4_4_ = 0;
    if (iVar9 != 0) {
      puVar17 = *(uint **)&(param_2->MetaData).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)TStack_a0.Array;
      }
      uVar16 = *puVar17;
      local_80._padding_._0_4_ = 0;
      local_80._padding_._0_4_ = 0;
      while (uVar16 == 0) {
        lVar10 = (longlong)(int)local_80._padding_;
        local_80._padding_._0_4_ = (int)local_80._padding_ + 0x20;
        local_80._padding_._0_4_ = (int)local_80._padding_ + 1;
        local_80._padding_._4_4_ = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_80._padding_)
        goto LAB_145c4a42e;
        uVar16 = puVar17[lVar10 + 1];
      }
      local_res20 = (ulong64)(-uVar16 & uVar16);
      uVar12 = local_res20 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_80._padding_._4_4_ = (int)local_80._padding_ + -1 + (int)lVar10;
      if (iVar9 < local_80._padding_._4_4_) {
        local_80._padding_._4_4_ = iVar9;
      }
    }
LAB_145c4a42e:
    iVar4 = local_80._padding_._4_4_ - iVar9;
    local_80._padding_._4_4_ = (uint)local_res20;
    TStack_a0._padding_ = CONCAT44(local_80._padding_._4_4_,(int)local_80._padding_);
    local_80._padding_._0_4_ = 0xffffffff;
    uVar11._4_4_ = local_80._padding_._4_4_;
    uVar11._0_4_ = 0xffffffff;
    local_80._padding_._4_4_ = TStack_a0.CurrentBitIndex;
    TStack_a0._28_4_ = TStack_a0.CurrentBitIndex;
    TStack_a0.BaseBitIndex = (int)local_80._padding_;
    bVar18 = SBORROW4(local_80._padding_._4_4_,iVar9);
    local_a8 = pTVar14;
    TStack_a0._16_8_ = uVar11;
    local_80._padding_ = (longlong)pTVar14;
    local_80._padding_ = (longlong)TStack_a0.Array;
    iVar9 = local_80._padding_._4_4_;
    while (bVar18 != iVar4 < 0) {
      if (bVar5) {
        lVar13 = (longlong)iVar9 * 0xc0;
        lVar10 = *(longlong *)&local_a8->field_0x0;
        if (((local_f8.C != *(uint *)(lVar13 + 0x20 + lVar10) ||
             local_f8.D != *(uint *)(lVar13 + 0x24 + lVar10)) ||
            local_f8.B != *(uint *)(lVar13 + 0x1c + lVar10)) ||
            local_f8.A != *(uint *)(lVar13 + 0x18 + lVar10)) {
          bVar6 = false;
          break;
        }
      }
      else {
        bVar5 = true;
        puVar1 = (undefined8 *)((longlong)iVar9 * 0xc0 + 0x18 + *(longlong *)&local_a8->field_0x0);
        local_f8._0_8_ = *puVar1;
        local_f8._8_8_ = puVar1[1];
      }
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
      iVar4 = TStack_a0.CurrentBitIndex - (TStack_a0.Array)->NumBits;
      iVar9 = TStack_a0.CurrentBitIndex;
      bVar18 = SBORROW4(TStack_a0.CurrentBitIndex,(TStack_a0.Array)->NumBits);
    }
    bVar18 = false;
    if (bVar5) {
      bVar18 = bVar6;
    }
    local_res8[0] = bVar18;
    if (bVar18) {
      TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                (&local_80,
                 (TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                  *)pTVar14);
      uStack_d0 = (undefined4)local_80._padding_;
      auStack_e0._8_8_ = local_80._padding_;
      uStack_cc = local_80._padding_._4_4_;
      local_b0._0_1_ = '\0';
      local_b0._1_1_ = '\0';
      auStack_e0._0_8_ = CONCAT44(local_80._padding_._4_4_,(int)local_80._padding_);
      local_e8 = (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                  *)local_80._padding_;
      local_c8._4_4_ = local_80._padding_._4_4_;
      local_c8._0_4_ = (int)local_80._padding_;
      local_b0 = 0;
      pTStack_c0 = local_80.Set;
      uVar12 = auStack_e0._16_8_ >> 0x20;
      local_b8 = (TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                  *)pTVar14;
      if (local_80._padding_._4_4_ < *(int *)(local_80._padding_ + 0x18)) {
        local_a8 = (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                    *)0x0;
        TStack_a0._padding_ = 0;
        do {
          uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
          puVar1 = (undefined8 *)
                   ((longlong)(int)uVar12 * 0xc0 + 0x18 + *(longlong *)&local_e8->field_0x0);
          *puVar1 = local_a8;
          puVar1[1] = TStack_a0._padding_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
          uVar12 = (ulonglong)uStack_cc;
        } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
      }
      if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
        uVar16 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
        if (uVar16 < 4) {
          iVar9 = 1;
        }
        else {
          uVar12 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar9 = 1 << ((byte)lVar10 & 0x1f);
        }
        if (((0 < (int)uVar16) && (local_b8->HashSize < iVar9)) || (iVar9 < local_b8->HashSize)) {
          local_b8->HashSize = iVar9;
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::Rehash(local_b8);
        }
      }
    }
LAB_145c4a628:
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((char *)plVar2[1] < (char *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *(char *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    cVar7 = local_res8[0];
    if (local_res8[0] != '\0') {
      operator<<(param_1,&local_f8);
    }
    pFVar8 = local_res10;
    pPVar3 = (PSOOrder *)**(undefined8 **)&param_1->field_0x8;
    if ((PSOOrder *)(*(undefined8 **)&param_1->field_0x8)[1] < pPVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_res10->SortedOrder);
      }
    }
    else {
      local_res10->SortedOrder = *pPVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pTVar14 = &pFVar8->MetaData;
    TSetPrivateFriend::
    Serialize<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                        *)pTVar14);
    if ((param_1->field_0x28 & 4) == 0) {
      if (cVar7 != '\0') {
        TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  (&local_80,
                   (TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                    *)pTVar14);
        uStack_d0 = (undefined4)local_80._padding_;
        auStack_e0._8_8_ = local_80._padding_;
        uStack_cc = local_80._padding_._4_4_;
        auStack_e0._0_4_ = (int)local_80._padding_;
        auStack_e0._4_4_ = local_80._padding_._4_4_;
        local_b0 = 0;
        local_e8 = (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                    *)local_80._padding_;
        local_c8._4_4_ = local_80._padding_._4_4_;
        local_c8._0_4_ = (int)local_80._padding_;
        pTStack_c0 = local_80.Set;
        uVar12 = auStack_e0._16_8_ >> 0x20;
        local_b8 = (TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                    *)pTVar14;
        if (local_80._padding_._4_4_ < *(int *)(local_80._padding_ + 0x18)) {
          do {
            uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
            puVar1 = (undefined8 *)
                     ((longlong)(int)uVar12 * 0xc0 + 0x18 + *(longlong *)&local_e8->field_0x0);
            *puVar1 = local_f8._0_8_;
            puVar1[1] = local_f8._8_8_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
            uVar12 = (ulonglong)uStack_cc;
          } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
          if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
            uVar16 = *(int *)&(local_b8->Elements).field_0x8 -
                     *(int *)&(local_b8->Elements).field_0x34;
            if (3 < uVar16) {
              uVar12 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
              lVar10 = 0x3f;
              if (uVar12 != 0) {
                for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              iVar15 = 1 << ((byte)lVar10 & 0x1f);
            }
            if (((0 < (int)uVar16) && (local_b8->HashSize < iVar15)) ||
               (iVar15 < local_b8->HashSize)) {
              local_b8->HashSize = iVar15;
              TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
              ::Rehash(local_b8);
            }
          }
        }
      }
    }
    else {
      plVar2 = *(longlong **)&param_1->field_0x8;
      local_res18 = 0x454f462d4d41524b;
      if ((ulonglong)plVar2[1] < *plVar2 + 8U) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_res18);
        }
      }
      else {
        *plVar2 = *plVar2 + 8;
      }
    }
  }
  else {
    local_res18 = 0;
    if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_res18);
      }
    }
    else {
      local_res18 = *(ulong64 *)*plVar2;
      *plVar2 = *plVar2 + 8;
    }
    if (local_res18 == 0x544f435354415232) {
      local_res20 = 0;
      lVar10 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      uVar11 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar10 + -8);
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((ulonglong *)plVar2[1] < (ulonglong *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res20,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_res20);
        }
      }
      else {
        local_res20 = *(ulonglong *)*plVar2;
        *plVar2 = *plVar2 + 8;
      }
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar11);
      local_res8[0] = bVar6;
      if (local_res20 == 0x454f462d4d41524b) goto LAB_145c4a628;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<< @ 145c4a830

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FPipelineFileCacheRasterizerState *param_2)

{
  float *pfVar1;
  float *pfVar2;
  uchar *puVar3;
  ERasterizerDepthClipMode *pEVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint local_res8 [2];
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->DepthBias = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->SlopeScaleDepthBias;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->FillMode,1);
  }
  else {
    (param_2->FillMode).Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->CullMode,1);
  }
  else {
    (param_2->CullMode).Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar4 = (ERasterizerDepthClipMode *)**(undefined8 **)&param_1->field_0x8;
  if ((ERasterizerDepthClipMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->DepthClipMode,1);
  }
  else {
    param_2->DepthClipMode = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  operator<<(param_1,&param_2->bAllowMSAA);
  uVar6 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
  if (uVar6 < 0x1b) {
    puVar5 = *(ulonglong **)&param_1->field_0x8;
    if (*puVar5 + 4 <= puVar5[1]) {
      *puVar5 = *puVar5 + 4;
      return param_1;
    }
    local_res8[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  return param_1;
}

// operator<< @ 145c4a9f0

FArchive * __cdecl operator<<(FArchive *param_1,FPipelineStateStats *param_2)

{
  ulong64 *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  long64 *plVar4;
  long64 *plVar5;
  ulong64 *puVar6;
  uint *puVar7;
  
  plVar4 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    param_2->FirstFrameUsed = *plVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar4 = &param_2->LastFrameUsed;
  puVar3 = &param_1->field_0x2a;
  plVar5 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar4,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar4);
    }
  }
  else {
    *plVar4 = *plVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->CreateCount;
  puVar6 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar4 = &param_2->TotalBindCount;
  plVar5 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar4,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar4);
    }
  }
  else {
    *plVar4 = *plVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->PSOHash;
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar7 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar3 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return param_1;
}

// operator<< @ 145c4aba0

FArchive * __cdecl operator<<(FArchive *param_1,FVertexElement *param_2)

{
  ushort *puVar1;
  uchar *puVar2;
  ushort *puVar3;
  
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    param_2->StreamIndex = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Offset,1);
  }
  else {
    param_2->Offset = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Type,1);
  }
  else {
    (param_2->Type).Value = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->AttributeIndex,1);
  }
  else {
    param_2->AttributeIndex = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = &param_2->Stride;
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
  puVar1 = &param_2->bUseInstanceIndex;
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

// ??@fcd4f0b24017f1bb89cd5a9a5b49997c@ @ 145c4b420

FSetElementId __thiscall
___fcd4f0b24017f1bb89cd5a9a5b49997c_
          (void *this,
          TPairInitializer<FGuid_const_&,TUniquePtr<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory,TDefaultDelete<_public:_bool___cdecl_FPipelineCacheFile::SavePipelineFileCache(FPipelineFileCacheManager::SaveMode,TMap<unsigned_int,FPipelineStateStats_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineStateStats_*,0>_>_const_&,TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>_&,FPipelineFileCacheManager::PSOOrder,TMap<unsigned_int,FPSOUsageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPSOUsageData,0>_>_&)_::_46_::FMemoryReaderAndMemory>_>_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong64 uVar7;
  void *_Dst;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar6);
  if (local_48.Pointer != (FGuid *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    uVar4 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar4;
    uVar4 = *puVar3;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->A = (int)uVar4;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->B = (int)((ulonglong)uVar4 >> 0x20);
    *puVar3 = 0;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = 0xffffffff;
  }
  uVar7 = CityHash64(local_48.Pointer,0x10);
  bVar12 = false;
  if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) {
    iVar6 = TSet<TTuple<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>(this,(uint)uVar7,local_48.Pointer);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar6 * 0x20 + *(longlong *)this);
      puVar3 = *(undefined8 **)((longlong)_Dst + 0x10);
      if (puVar3 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)puVar3[2];
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        if ((void *)*puVar3 != (void *)0x0) {
          FMemory::Free((void *)*puVar3);
        }
        operator_delete(puVar3,0x18);
      }
      memmove(_Dst,local_48.Pointer,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar9 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)((longlong)this + 0x48))) {
      uVar9 = *(int *)((longlong)this + 0x48) - 1U & (uint)uVar7;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->D = uVar9;
      lVar10 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar10 = (longlong)this + 0x38;
      }
      uVar8 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar9;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = *(uint *)(lVar10 + uVar8 * 4);
      *(int *)(lVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar11;
      TSet<TTuple<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory,TDefaultDelete<`FPipelineCacheFile::SavePipelineFileCache'::__l46::FMemoryReaderAndMemory>_>,0>,FDefaultSetAllocator>
      ::Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// `scalar_deleting_destructor' @ 145c4cbd0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPipelineFileCacheManager::BroadcastNewPSOsDelegate'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FPipelineFileCacheManager::BroadcastNewPSOsDelegate'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  DestructItems<FPipelineCacheFileFormatPSO,int>
            (*(FPipelineCacheFileFormatPSO **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c4cc30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPipelineCacheFile::FetchPSODescriptors'::__l4::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3__FetchPSODescriptors_FPipelineCacheFile__QEAAXAEAV__TDoubleLinkedList_PEAUFPipelineCacheFileFormatPSORead_____Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c4cc70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::RHI::GPUProfiler::FEventStream,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::RHI::GPUProfiler::FEventStream,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c4ccb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IAsyncReadFileHandle,SharedPointerInternals::DefaultDeleter<IAsyncReadFileHandle>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<IAsyncReadFileHandle,SharedPointerInternals::DefaultDeleter<IAsyncReadFileHandle>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c4ccf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IAsyncReadRequest,SharedPointerInternals::DefaultDeleter<IAsyncReadRequest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<IAsyncReadRequest,SharedPointerInternals::DefaultDeleter<IAsyncReadRequest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c4cd30

void * __thiscall
FDefaultRHIRenderQueryPool::_scalar_deleting_destructor_
          (FDefaultRHIRenderQueryPool *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FDefaultRHIRenderQueryPool__6B_;
  bVar3 = IsInRHIThread();
  if (!bVar3) {
    bVar3 = IsInRenderingThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRHIThread() || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                         ,0x304,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
    }
  }
  if (this->AllocatedQueries != (this->Queries).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocatedQueries == Queries.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                       ,0x305,L"Querypool deleted before all Queries have been released");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  DestructItems<TRefCountPtr<FRHIRenderQuery>,int>
            ((TRefCountPtr<FRHIRenderQuery> *)(this->Queries).AllocatorInstance.Data,
             (this->Queries).ArrayNum);
  pFVar1 = (this->Queries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRHIRenderQueryPool__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c4ce10

void * __thiscall
FGPUDefragAllocator::FMemoryChunk::_scalar_deleting_destructor_(FMemoryChunk *this,uint param_1)

{
  if (this->PreviousChunk == (FMemoryChunk *)0x0) {
    this->BestFitAllocator->FirstChunk = this->NextChunk;
  }
  else {
    this->PreviousChunk->NextChunk = this->NextChunk;
  }
  if (this->NextChunk == (FMemoryChunk *)0x0) {
    this->BestFitAllocator->LastChunk = this->PreviousChunk;
  }
  else {
    this->NextChunk->PreviousChunk = this->PreviousChunk;
  }
  this->PreviousChunk = (FMemoryChunk *)0x0;
  this->NextChunk = (FMemoryChunk *)0x0;
  UnlinkFree(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145c4ce90

void * __thiscall
FRHIRenderQueryPool::_scalar_deleting_destructor_(FRHIRenderQueryPool *this,uint param_1)

{
  *(undefined ***)this = &___7FRHIRenderQueryPool__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// EmptyCachedBoundShaderStates @ 145c56600

void __cdecl EmptyCachedBoundShaderStates(void)

{
  bool bVar1;
  
  bVar1 = 1 < (int)GBoundShaderStateCache._72_4_;
  if (!bVar1) {
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
                      *)&GBoundShaderStateCache);
  }
  GBoundShaderStateCache._8_4_ = 0;
  if (GBoundShaderStateCache._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&GBoundShaderStateCache,0,
               (int *)&GBoundShaderStateCache.field_0xc);
  }
  GBoundShaderStateCache._48_4_ = 0xffffffff;
  GBoundShaderStateCache._52_4_ = 0;
  GBoundShaderStateCache._40_4_ = 0;
  if (0x80 < (uint)GBoundShaderStateCache._44_4_) {
    GBoundShaderStateCache._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GBoundShaderStateCache.field_0x10,0);
  }
  if (bVar1) {
    GBoundShaderStateCache._72_4_ = 1;
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
              *)&GBoundShaderStateCache);
  }
  bVar1 = 1 < (int)GBoundShaderStateCache_ThreadSafe._72_4_;
  if (!bVar1) {
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*,0>,FDefaultSetAllocator>
                      *)&GBoundShaderStateCache_ThreadSafe);
  }
  GBoundShaderStateCache_ThreadSafe._8_4_ = 0;
  if (GBoundShaderStateCache_ThreadSafe._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&GBoundShaderStateCache_ThreadSafe,0,
               (int *)&GBoundShaderStateCache_ThreadSafe.field_0xc);
  }
  GBoundShaderStateCache_ThreadSafe._48_4_ = 0xffffffff;
  GBoundShaderStateCache_ThreadSafe._52_4_ = 0;
  GBoundShaderStateCache_ThreadSafe._40_4_ = 0;
  if (0x80 < (uint)GBoundShaderStateCache_ThreadSafe._44_4_) {
    GBoundShaderStateCache_ThreadSafe._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GBoundShaderStateCache_ThreadSafe.field_0x10
               ,0);
  }
  if (bVar1) {
    GBoundShaderStateCache_ThreadSafe._72_4_ = 1;
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*,0>,FDefaultSetAllocator>
              *)&GBoundShaderStateCache_ThreadSafe);
  }
  return;
}

// FillVizualizeData @ 145c57550

void __cdecl
FillVizualizeData(FColor *param_1,int *param_2,int *param_3,int *param_4,FColor *param_5,
                 FColor *param_6,int param_7,int param_8,int param_9,int param_10)

{
  FColor *pFVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *param_4;
  iVar5 = (iVar4 + -1) / param_10;
  iVar7 = 1;
  if (1 < iVar5) {
    iVar7 = iVar5;
  }
  iVar6 = 0;
  iVar5 = iVar7;
  do {
    if (iVar4 < 1) {
      return;
    }
    pFVar1 = param_1 + (param_9 * *param_3 + *param_2);
    (pFVar1->field0_0x0)._s_0.R =
         (uchar)((int)((uint)(param_6->field0_0x0)._s_0.R * iVar5 +
                      (uint)(param_5->field0_0x0)._s_0.R * iVar6) / iVar7);
    (pFVar1->field0_0x0)._s_0.G =
         (uchar)((int)((uint)(param_6->field0_0x0)._s_0.G * iVar5 +
                      (uint)(param_5->field0_0x0)._s_0.G * iVar6) / iVar7);
    bVar2 = (param_5->field0_0x0)._s_0.B;
    bVar3 = (param_6->field0_0x0)._s_0.B;
    (pFVar1->field0_0x0)._s_0.A = 0xff;
    (pFVar1->field0_0x0)._s_0.B = (uchar)((int)((uint)bVar2 * iVar6 + (uint)bVar3 * iVar5) / iVar7);
    *param_2 = *param_2 + 1;
    if (param_7 <= *param_2) {
      *param_2 = 0;
      *param_3 = *param_3 + 1;
      if (param_8 <= *param_3) {
        return;
      }
    }
    *param_4 = *param_4 - param_10;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + -1;
    iVar4 = *param_4;
  } while( true );
}

// GetCachedBoundShaderState @ 145c5a950

FCachedBoundShaderStateLink * __cdecl
GetCachedBoundShaderState
          (FRHIVertexDeclaration *param_1,FRHIVertexShader *param_2,FRHIPixelShader *param_3,
          FRHIGeometryShader *param_4,FRHIMeshShader *param_5,FRHIAmplificationShader *param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  FBoundShaderStateLookupKey local_38;
  
  local_38.PixelShader = param_3;
  if (param_5 == (FRHIMeshShader *)0x0) {
    local_38.MeshShader = (FRHIMeshShader *)0x0;
    local_38.AmplificationShader = (FRHIAmplificationShader *)0x0;
    local_38.VertexDeclaration = param_1;
    local_38.VertexShader = param_2;
    local_38.GeometryShader = param_4;
    uVar1 = GetTypeHash(&local_38);
    iVar2 = TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FBoundShaderStateLookupKey>
                      ((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
                        *)&GBoundShaderStateCache,uVar1,&local_38);
    if ((iVar2 != -1) && (lVar3 = (longlong)iVar2 * 0x40 + GBoundShaderStateCache._0_8_, lVar3 != 0)
       ) {
      return *(FCachedBoundShaderStateLink **)(lVar3 + 0x30);
    }
  }
  else {
    local_38.MeshShader = param_5;
    local_38.AmplificationShader = param_6;
    local_38.VertexDeclaration = (FRHIVertexDeclaration *)0x0;
    local_38.VertexShader = (FRHIVertexShader *)0x0;
    local_38.GeometryShader = (FRHIGeometryShader *)0x0;
    uVar1 = GetTypeHash(&local_38);
    iVar2 = TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FBoundShaderStateLookupKey>
                      ((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
                        *)&GBoundShaderStateCache,uVar1,&local_38);
    if ((iVar2 != -1) && (lVar3 = (longlong)iVar2 * 0x40 + GBoundShaderStateCache._0_8_, lVar3 != 0)
       ) {
      return *(FCachedBoundShaderStateLink **)(lVar3 + 0x30);
    }
  }
  return (FCachedBoundShaderStateLink *)0x0;
}

// GetCachedBoundShaderState_Threadsafe @ 145c5aa30

TRefCountPtr<FRHIBoundShaderState> __cdecl
GetCachedBoundShaderState_Threadsafe
          (FRHIVertexDeclaration *param_1,FRHIVertexShader *param_2,FRHIPixelShader *param_3,
          FRHIGeometryShader *param_4,FRHIMeshShader *param_5,FRHIAmplificationShader *param_6)

{
  FRHIResource *this;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  FRHIAmplificationShader *in_stack_00000038;
  FBoundShaderStateLookupKey local_38;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&BoundShaderStateCacheLock);
  if (param_6 == (FRHIAmplificationShader *)0x0) {
    local_38.GeometryShader = (FRHIGeometryShader *)param_5;
    local_38.MeshShader = (FRHIMeshShader *)0x0;
    local_38.AmplificationShader = (FRHIAmplificationShader *)0x0;
    local_38.VertexDeclaration = (FRHIVertexDeclaration *)param_2;
    local_38.VertexShader = (FRHIVertexShader *)param_3;
  }
  else {
    local_38.MeshShader = (FRHIMeshShader *)param_6;
    local_38.AmplificationShader = in_stack_00000038;
    local_38.VertexDeclaration = (FRHIVertexDeclaration *)0x0;
    local_38.VertexShader = (FRHIVertexShader *)0x0;
    local_38.GeometryShader = (FRHIGeometryShader *)0x0;
  }
  local_38.PixelShader = (FRHIPixelShader *)param_4;
  uVar1 = GetTypeHash(&local_38);
  iVar2 = TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FBoundShaderStateLookupKey>
                    ((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*,0>,FDefaultSetAllocator>
                      *)&GBoundShaderStateCache_ThreadSafe,uVar1,&local_38);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x40 + GBoundShaderStateCache_ThreadSafe._0_8_, lVar3 == 0)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(lVar3 + 0x30);
  }
  if (((plVar4 == (longlong *)0x0) || ((*(uint *)(*plVar4 + 8) >> 0x1e & 1) != 0)) ||
     ((*(uint *)(*plVar4 + 8) & 0x3fffffff) == 0)) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    this = (FRHIResource *)*plVar4;
    *(FRHIResource **)param_1 = this;
    if (this != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&BoundShaderStateCacheLock);
  return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
}

// GetCurrentUnixTime @ 145c5ac60

long64 __cdecl GetCurrentUnixTime(void)

{
  FDateTime FVar1;
  FDateTime *pFVar2;
  longlong lVar3;
  FDateTime local_res10 [3];
  
  FVar1 = FDateTime::UtcNow();
  pFVar2 = FDateTime::FDateTime(local_res10,0x7b2,1,1,0,0,0,0);
  lVar3 = *(longlong *)FVar1.Ticks - pFVar2->Ticks;
  lVar3 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar3),8) + lVar3;
  return (lVar3 >> 0x17) - (lVar3 >> 0x3f);
}

// GetSectionBool @ 145c5b550

bool __cdecl GetSectionBool(FConfigSection *param_1,FName param_2,bool param_3)

{
  FConfigValue *this;
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  this = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
         ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *)param_1,param_2);
  if (this != (FConfigValue *)0x0) {
    pFVar1 = FConfigValue::GetValue(this,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    param_3 = FToBoolHelper::FromCStringWide(pwVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return param_3;
}

// GetSectionFeatureSupport @ 145c5b5b0

uint __cdecl GetSectionFeatureSupport(FConfigSection *param_1,FName param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FConfigValue *this;
  ForAnyElementType FVar5;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_2;
  this = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
         ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *)param_1,param_2);
  if (this == (FConfigValue *)0x0) {
    return param_3;
  }
  FConfigValue::GetValue(this,&local_28);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"Unsupported");
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"RuntimeDependent");
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    else {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar5.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"RuntimeGuaranteed");
      if (iVar3 != 0) {
        FName::ToString(local_res10,&local_18);
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DataDrivenShaderPlatformInfo.cpp"
                           ,0x70,L"Unknown ERHIFeatureSupport value \"%s\" for %s");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (!bVar2) {
          if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return param_3;
          }
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
          return param_3;
        }
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar4 = 2;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return uVar4;
}

// GetSectionUint @ 145c5b700

uint __cdecl GetSectionUint(FConfigSection *param_1,FName param_2,uint param_3)

{
  FConfigValue *this;
  FString *pFVar1;
  wchar_t *_Str;
  FString local_18;
  
  this = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
         ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *)param_1,param_2);
  if (this != (FConfigValue *)0x0) {
    pFVar1 = FConfigValue::GetValue(this,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    param_3 = _wtoi(_Str);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return param_3;
}

// GetTypeHash @ 145c5c670

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

uint __cdecl GetTypeHash(FPipelineCacheFileFormatPSO *param_1)

{
  int *piVar1;
  EShaderFrequency EVar2;
  int iVar3;
  code *pcVar4;
  ForElementType<FVertexElement> *pFVar5;
  bool bVar6;
  uint uVar7;
  DescriptorType DVar8;
  TEnumAsByte<EBlendFactor> *pTVar9;
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  DVar8 = param_1->Type;
  if (DVar8 == Compute) {
    DVar8 = *(DescriptorType *)(param_1->ComputeDesc).ComputeShader.Hash;
  }
  else {
    if (DVar8 == Graphics) {
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).RenderTargetsActive,4,1);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).MSAASamples,4,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).PrimitiveType,4,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&param_1->GraphicsDesc,0x14,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).FragmentShader,0x14,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).GeometryShader,0x14,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).MeshShader,0x14,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).AmplificationShader,0x14,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).DepthStencilFormat,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).DepthStencilFlags,8,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).DepthLoad,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).StencilLoad,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).DepthStore,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).StencilStore,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).BlendState.bUseIndependentRenderTargetBlendStates,
                         1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).BlendState.bUseAlphaToCoverage,1,uVar7)
      ;
      pTVar9 = &(param_1->GraphicsDesc).BlendState.RenderTargets.Elements[0].ColorSrcBlend;
      lVar11 = 8;
      do {
        uVar7 = (*FCrc::MemCrc32Func)((FRenderTarget *)(pTVar9 + -1),1,uVar7);
        uVar7 = (*FCrc::MemCrc32Func)(pTVar9,1,uVar7);
        uVar7 = (*FCrc::MemCrc32Func)(pTVar9 + 1,1,uVar7);
        uVar7 = (*FCrc::MemCrc32Func)((TEnumAsByte<EColorWriteMask> *)(pTVar9 + 5),1,uVar7);
        uVar7 = (*FCrc::MemCrc32Func)((TEnumAsByte<EBlendOperation> *)(pTVar9 + 2),1,uVar7);
        uVar7 = (*FCrc::MemCrc32Func)(pTVar9 + 3,1,uVar7);
        uVar7 = (*FCrc::MemCrc32Func)(pTVar9 + 4,1,uVar7);
        pTVar9 = pTVar9 + 7;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      uVar7 = (*FCrc::MemCrc32Func)((param_1->GraphicsDesc).RenderTargetFormats,8,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)((param_1->GraphicsDesc).RenderTargetFlags,0x40,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).SubpassHint,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).SubpassIndex,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).MultiViewCount,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).bHasFragmentDensityAttachment,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).bAllowVariableRateShading,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).ShadingRate,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).bDepthBounds,1,uVar7);
      pTVar10 = &(param_1->GraphicsDesc).VertexDescriptor;
      piVar1 = &(param_1->GraphicsDesc).VertexDescriptor.ArrayNum;
      iVar3 = *piVar1;
      pFVar5 = &pTVar10->AllocatorInstance;
      while( true ) {
        if (*piVar1 != iVar3) {
          `TCheckedPointerIterator<FVertexElement_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pTVar10 == (TArray<FVertexElement,TFixedAllocator<17>_> *)(pFVar5->InlineData + iVar3))
        break;
        uVar7 = (*FCrc::MemCrc32Func)(pTVar10,8,uVar7);
        pTVar10 = (TArray<FVertexElement,TFixedAllocator<17>_> *)
                  ((pTVar10->AllocatorInstance).InlineData + 1);
      }
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).RasterizerState,4,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).RasterizerState.SlopeScaleDepthBias,4,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).RasterizerState.FillMode,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).RasterizerState.CullMode,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).RasterizerState.bAllowMSAA,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).DepthStencilState,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)(&(param_1->GraphicsDesc).DepthStencilState.DepthTest,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.bEnableFrontFaceStencil,1,uVar7)
      ;
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.FrontFaceStencilTest,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.FrontFaceStencilFailStencilOp,1,
                         uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.FrontFaceDepthFailStencilOp,1,
                         uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.FrontFacePassStencilOp,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.bEnableBackFaceStencil,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.BackFaceStencilTest,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.BackFaceStencilFailStencilOp,1,
                         uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.BackFaceDepthFailStencilOp,1,
                         uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.BackFacePassStencilOp,1,uVar7);
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.StencilReadMask,1,uVar7);
                    /* WARNING: Could not recover jumptable at 0x000145c5cc49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*FCrc::MemCrc32Func)
                        (&(param_1->GraphicsDesc).DepthStencilState.StencilWriteMask,1,uVar7);
      return uVar7;
    }
    if (DVar8 == RayTracing) {
      EVar2 = (param_1->RayTracingDesc).Frequency;
      uVar7 = *(uint *)(param_1->RayTracingDesc).ShaderHash.Hash;
      return (uVar7 >> 2) + 0x9e3779b9 +
             ((EVar2 >> 2) + 0x9e3779b9 +
              (param_1->RayTracingDesc).ShaderBindingLayout.Hash + (uint)EVar2 * 0x40 ^ (uint)EVar2)
             + uVar7 * 0x40 ^ uVar7 ^ 2;
    }
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0x4c8,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
  }
  return DVar8;
}

// GetTypeHash @ 145c5cc60

uint __cdecl GetTypeHash(FBoundShaderStateLookupKey *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = ((uint)((ulonglong)param_1->VertexDeclaration >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->VertexDeclaration >> 4)) * -0x7a143595;
  uVar3 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = ((uint)((ulonglong)param_1->VertexShader >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->VertexShader >> 4)) * -0x7a143595;
  uVar6 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = ((uint)((ulonglong)param_1->MeshShader >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->MeshShader >> 4)) * -0x7a143595;
  uVar5 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = ((uint)((ulonglong)param_1->AmplificationShader >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->AmplificationShader >> 4)) * -0x7a143595;
  uVar4 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = ((uint)((ulonglong)param_1->PixelShader >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->PixelShader >> 4)) * -0x7a143595;
  uVar2 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = ((uint)((ulonglong)param_1->GeometryShader >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->GeometryShader >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return (uVar1 ^ uVar2 ^ uVar4 ^ uVar5 ^ uVar6 ^ uVar3) >> 0x10 ^ uVar1 ^ uVar2 ^ uVar4 ^ uVar5 ^
         uVar6 ^ uVar3;
}

// InitNullRHI @ 145c5d970

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InitNullRHI(void)

{
  FName FVar1;
  char cVar2;
  FName *pFVar3;
  FModuleManager *this;
  IModuleInterface *pIVar4;
  FText *pFVar5;
  FName local_res8 [4];
  FString local_28;
  FText local_18;
  
  pFVar3 = FName::FName(local_res8,L"NullDrv");
  FVar1 = *pFVar3;
  this = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this,FVar1);
  if (pIVar4 != (IModuleInterface *)0x0) {
    cVar2 = (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4);
    if (cVar2 != '\0') goto LAB_145c5d9f9;
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"DynamicRHI",L"NullDrvFailure",L"NullDrv failure?");
  FMessageDialog::Open(Ok,pFVar5);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  FWindowsPlatformMisc::RequestExit(true,L"InitNullRHI");
LAB_145c5d9f9:
  GDynamicRHI = (FDynamicRHI *)(**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,5);
  (**(code **)(GDynamicRHI->_padding_ + 8))(GDynamicRHI);
  GRHIGlobals.UsingNullRHI = true;
  GRHIGlobals.SupportsTextureStreaming = false;
  FString::FString((FString *)&local_18,L"NullRHI");
  FString::FString(&local_28,L"RHI.RHIName");
  FGenericCrashContext::SetEngineData(&local_28,(FString *)&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_18.TextData.Reference);
  }
  return;
}

// LexFromString @ 145c60bd0

void __cdecl LexFromString(ETextureCreateFlags *param_1,TStringView<wchar_t> *param_2)

{
  ETextureCreateFlags local_res8 [4];
  
  local_res8[0] = *param_1;
  LexFromString(local_res8,param_2);
  *param_1 = local_res8[0];
  return;
}

// ParseMonthDayYearDate @ 145c6ba60

FDateTime __cdecl ParseMonthDayYearDate(FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FString *in_RDX;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FString::FString(&local_28,L"-");
  FString::Split(in_RDX,&local_28,&local_48,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FString::FString(&local_28,L"-");
  FString::Split(&local_38,&local_28,&local_58,&local_68);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar1 = _wtoi((wchar_t *)FVar4.Data);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar2 = _wtoi((wchar_t *)FVar4.Data);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar4.Data = local_68.Data.AllocatorInstance.Data;
  }
  iVar3 = _wtoi((wchar_t *)FVar4.Data);
  FDateTime::FDateTime((FDateTime *)param_1,iVar3,iVar2,iVar1,0,0,0,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return (FDateTime)(long64)param_1;
}

// ParseShaderPlatform @ 145c6bbe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPlatform __cdecl ParseShaderPlatform(wchar_t *param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  bool bVar4;
  FString local_28;
  FString local_18;
  
  iVar3 = 0;
  while( true ) {
    pFVar2 = LexToString(&local_18,(EShaderPlatform)iVar3,false);
    FString::FString(&local_28,param_1);
    iVar1 = (pFVar2->Data).ArrayNum;
    if (iVar1 == local_28.Data.ArrayNum) {
      if (iVar1 < 2) {
        bVar4 = true;
      }
      else {
        iVar1 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                           (wchar_t *)local_28.Data.AllocatorInstance.Data);
        bVar4 = iVar1 == 0;
      }
    }
    else {
      bVar4 = iVar1 + local_28.Data.ArrayNum == 1;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) break;
    iVar3 = iVar3 + 1;
    if (0x9a < iVar3) {
      return SP_NumPlatforms;
    }
  }
  return (EShaderPlatform)iVar3;
}

// RHICreateRenderQueryPool @ 145c6ebe0

TRefCountPtr<FRHIRenderQueryPool> __cdecl
RHICreateRenderQueryPool(ERenderQueryType param_1,uint param_2)

{
  FRHIResource *this;
  undefined4 in_register_0000000c;
  FRHIRenderQueryPool *pFVar1;
  
  pFVar1 = (FRHIRenderQueryPool *)CONCAT44(in_register_0000000c,param_1);
  this = operator_new(0x38);
  if (this != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this,RRT_RenderQueryPool);
    *(uint *)&this[1]._padding_ = param_2;
    this->_padding_ = (longlong)&___7FDefaultRHIRenderQueryPool__6B_;
    *(FRHIResource **)pFVar1 = this;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].AtomicFlags = (atomic<unsigned_int>)0x0;
    this[1].ResourceType = RRT_None;
    this[1].field_0xd = 0;
    this[1]._padding_ = 0;
    this[1].OwnerName.ComparisonIndex = 0;
    this[1].OwnerName.Number = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    FRHIResource::AddRef(this);
    return (TRefCountPtr<FRHIRenderQueryPool>)pFVar1;
  }
  *(undefined8 *)pFVar1 = 0;
  return (TRefCountPtr<FRHIRenderQueryPool>)pFVar1;
}

// RHICreateTransition @ 145c6ece0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHITransition * __cdecl RHICreateTransition(FRHITransitionCreateInfo *param_1)

{
  ERHIPipeline EVar1;
  ERHIPipeline EVar2;
  ERHITransitionCreateFlags EVar3;
  ulong64 uVar4;
  FRHITransition *pFVar5;
  uint uVar6;
  
  uVar4 = 1;
  if (1 < GRHITransitionPrivateData_AlignInBytes) {
    uVar4 = GRHITransitionPrivateData_AlignInBytes;
  }
  uVar6 = (uint)GRHITransitionPrivateData_AlignInBytes;
  if (GRHITransitionPrivateData_AlignInBytes < 8) {
    uVar6 = 8;
  }
  pFVar5 = TLinearAllocatorBase<FCommandListBaseBlockAllocationTag,0>::Malloc
                     ((~(uVar4 - 1) & uVar4 + 0x8f) + GRHITransitionPrivateData_SizeInBytes,uVar6);
  EVar1 = param_1->DstPipelines;
  EVar2 = param_1->SrcPipelines;
  EVar3 = param_1->Flags;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->Flags = EVar3;
  pFVar5->AllowedDst = EVar1;
  pFVar5->AllowedSrc = EVar2;
  pFVar5->State = EVar1 << 2 | EVar2;
  (**(code **)(GDynamicRHI->_padding_ + 200))(GDynamicRHI,pFVar5,param_1);
  return pFVar5;
}

// RHIDetectAndWarnOfBadDrivers @ 145c6edd0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl RHIDetectAndWarnOfBadDrivers(bool param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  Type TVar9;
  wchar_t *pwVar10;
  FString *pFVar11;
  size_t sVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  wchar_t *pwVar16;
  ForAnyElementType FVar17;
  int iVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_608
  ;
  FString local_5f8;
  uint local_5e8;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  TArray<FString,TSizedDefaultAllocator<32>_> local_578;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_568;
  FText local_558;
  FString local_548;
  FString local_538;
  FGPUDriverInfo local_528;
  FString local_4b8;
  FText local_4a8;
  FScriptContainerElement *local_498;
  FScriptContainerElement *local_488;
  int iStack_480;
  undefined4 uStack_47c;
  FScriptContainerElement *local_478;
  int iStack_470;
  undefined4 uStack_46c;
  TOptional<FSuggestedDriverEntry> local_468;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FTextFormat local_3c8;
  FString local_3b8;
  FText local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FText local_368;
  FFormatArgumentValue local_358;
  TOptional<FString>_u_0 local_338;
  TReferenceControllerBase<1> *local_320;
  char local_318;
  void *local_308;
  char local_2f8;
  char local_2e0;
  void *local_2d8;
  char local_2c8;
  FFormatArgumentValue local_2b8;
  FFormatArgumentValue local_298;
  FFormatArgumentValue local_278;
  FFormatArgumentValue local_258;
  FFormatArgumentValue local_238;
  FFormatArgumentValue local_218;
  FFormatArgumentValue local_1f8;
  FString local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  FText local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  TStringView<wchar_t> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  FString local_a8;
  FFormatArgumentValue local_98;
  FText local_78;
  FTextFormat local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  
  bVar5 = false;
  local_res10[0] = 0;
  if (bDriverDenylistMessageShown) {
    return;
  }
  if (GRHIGlobals.GpuInfo.VendorId == 0) {
    if ((byte)LogRHI._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    return;
  }
  local_5e8 = GRHIGlobals.GpuInfo.VendorId;
  local_5e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = GRHIGlobals.GpuInfo.AdapterName.Data.ArrayNum + -1;
  if (GRHIGlobals.GpuInfo.AdapterName.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  local_5e0.Data.ArrayNum = 0;
  local_5e0.Data.ArrayMax = 0;
  local_5d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d0.Data.ArrayNum = 0;
  local_5d0.Data.ArrayMax = 0;
  local_5c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5c0.Data.ArrayNum = 0;
  local_5c0.Data.ArrayMax = 0;
  local_5b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5b0.Data.ArrayNum = 0;
  local_5b0.Data.ArrayMax = 0;
  local_5a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a0.Data.ArrayNum = 0;
  local_5a0.Data.ArrayMax = 0;
  local_590.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_590.Data.ArrayNum = 0;
  local_590.Data.ArrayMax = 0;
  FString::AssignRange
            (&local_5e0,(wchar_t *)GRHIGlobals.GpuInfo.AdapterName.Data.AllocatorInstance.Data,iVar6
            );
  FString::operator=(&local_5d0,L"Unknown");
  iVar18 = 0;
  iVar6 = GRHIGlobals.GpuInfo.AdapterInternalDriverVersion.Data.ArrayNum + -1;
  if (GRHIGlobals.GpuInfo.AdapterInternalDriverVersion.Data.ArrayNum == 0) {
    iVar6 = iVar18;
  }
  FString::AssignRange
            (&local_5c0,
             (wchar_t *)GRHIGlobals.GpuInfo.AdapterInternalDriverVersion.Data.AllocatorInstance.Data
             ,iVar6);
  iVar6 = GRHIGlobals.GpuInfo.AdapterUserDriverVersion.Data.ArrayNum + -1;
  if (GRHIGlobals.GpuInfo.AdapterUserDriverVersion.Data.ArrayNum == 0) {
    iVar6 = iVar18;
  }
  FString::AssignRange
            (&local_5b0,
             (wchar_t *)GRHIGlobals.GpuInfo.AdapterUserDriverVersion.Data.AllocatorInstance.Data,
             iVar6);
  iVar6 = GRHIGlobals.GpuInfo.AdapterDriverDate.Data.ArrayNum + -1;
  if (GRHIGlobals.GpuInfo.AdapterDriverDate.Data.ArrayNum == 0) {
    iVar6 = iVar18;
  }
  FString::AssignRange
            (&local_5a0,(wchar_t *)GRHIGlobals.GpuInfo.AdapterDriverDate.Data.AllocatorInstance.Data
             ,iVar6);
  if (GDynamicRHI == (FDynamicRHI *)0x0) {
    local_4b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = &local_4b8;
    local_4b8.Data.ArrayNum = 0;
    local_4b8.Data.ArrayMax = 0;
    bVar3 = false;
    bVar21 = true;
LAB_145c6ef66:
    if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_590.Data.AllocatorInstance.Data);
    }
    local_590.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_590.Data.ArrayNum = (pFVar11->Data).ArrayNum;
    local_590.Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    if ((bVar21) && (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
    if (bVar3) goto LAB_145c6efac;
  }
  else {
    pwVar10 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
    pFVar11 = FString::FString(&local_1d8,pwVar10);
    bVar3 = true;
    bVar21 = false;
    if (&local_590 != pFVar11) goto LAB_145c6ef66;
LAB_145c6efac:
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  FVar17.Data = local_5e0.Data.AllocatorInstance.Data;
  lVar19 = (longlong)local_5e0.Data.ArrayNum;
  local_528.VendorId = local_5e8;
  local_528.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_528.DeviceDescription.Data.ArrayNum = local_5e0.Data.ArrayNum;
  if (local_5e0.Data.ArrayNum == 0) {
    local_528.DeviceDescription.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_5e0.Data.ArrayNum,0,(ForAnyElementType *)&local_528.DeviceDescription,
               local_5e0.Data.ArrayNum,&local_528.DeviceDescription.Data.ArrayMax);
    memcpy(local_528.DeviceDescription.Data.AllocatorInstance.Data,FVar17.Data,lVar19 * 2);
  }
  FVar17.Data = local_5d0.Data.AllocatorInstance.Data;
  lVar19 = (longlong)local_5d0.Data.ArrayNum;
  local_528.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_528.ProviderName.Data.ArrayNum = local_5d0.Data.ArrayNum;
  if (local_5d0.Data.ArrayNum == 0) {
    local_528.ProviderName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_5d0.Data.ArrayNum,0,(ForAnyElementType *)&local_528.ProviderName,
               local_5d0.Data.ArrayNum,&local_528.ProviderName.Data.ArrayMax);
    memcpy(local_528.ProviderName.Data.AllocatorInstance.Data,FVar17.Data,lVar19 * 2);
  }
  FVar17.Data = local_5c0.Data.AllocatorInstance.Data;
  lVar19 = (longlong)local_5c0.Data.ArrayNum;
  local_528.InternalDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_528.InternalDriverVersion.Data.ArrayNum = local_5c0.Data.ArrayNum;
  if (local_5c0.Data.ArrayNum == 0) {
    local_528.InternalDriverVersion.Data.ArrayMax = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_5c0.Data.ArrayNum,0,(ForAnyElementType *)&local_528.InternalDriverVersion,
               local_5c0.Data.ArrayNum,&local_528.InternalDriverVersion.Data.ArrayMax);
    memcpy(local_528.InternalDriverVersion.Data.AllocatorInstance.Data,FVar17.Data,lVar19 * 2);
    iVar6 = local_5c0.Data.ArrayNum;
  }
  FVar17.Data = local_5b0.Data.AllocatorInstance.Data;
  lVar19 = (longlong)local_5b0.Data.ArrayNum;
  local_528.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_528.UserDriverVersion.Data.ArrayNum = local_5b0.Data.ArrayNum;
  if (local_5b0.Data.ArrayNum == 0) {
    local_528.UserDriverVersion.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_5b0.Data.ArrayNum,0,(ForAnyElementType *)&local_528.UserDriverVersion,
               local_5b0.Data.ArrayNum,&local_528.UserDriverVersion.Data.ArrayMax);
    memcpy(local_528.UserDriverVersion.Data.AllocatorInstance.Data,FVar17.Data,lVar19 * 2);
    iVar6 = local_5c0.Data.ArrayNum;
  }
  FVar17.Data = local_5a0.Data.AllocatorInstance.Data;
  lVar19 = (longlong)local_5a0.Data.ArrayNum;
  local_528.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_528.DriverDate.Data.ArrayNum = local_5a0.Data.ArrayNum;
  if (local_5a0.Data.ArrayNum == 0) {
    local_528.DriverDate.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_5a0.Data.ArrayNum,0,(ForAnyElementType *)&local_528.DriverDate,
               local_5a0.Data.ArrayNum,&local_528.DriverDate.Data.ArrayMax);
    memcpy(local_528.DriverDate.Data.AllocatorInstance.Data,FVar17.Data,lVar19 * 2);
    iVar6 = local_5c0.Data.ArrayNum;
  }
  FVar17.Data = local_590.Data.AllocatorInstance.Data;
  lVar19 = (longlong)local_590.Data.ArrayNum;
  local_528.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_528.RHIName.Data.ArrayNum = local_590.Data.ArrayNum;
  if (local_590.Data.ArrayNum == 0) {
    local_528.RHIName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_590.Data.ArrayNum,0,(ForAnyElementType *)&local_528.RHIName,
               local_590.Data.ArrayNum,&local_528.RHIName.Data.ArrayMax);
    memcpy(local_528.RHIName.Data.AllocatorInstance.Data,FVar17.Data,lVar19 * 2);
    iVar6 = local_5c0.Data.ArrayNum;
  }
  if ((1 < local_5e0.Data.ArrayNum) && (local_5e8 != 0)) {
    pwVar10 = L"";
    FVar17.Data = (FScriptContainerElement *)L"";
    if (iVar6 != 0) {
      FVar17.Data = local_5c0.Data.AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar17.Data,L"Unknown");
    if (iVar6 != 0) {
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_5c0.Data.ArrayNum != 0) {
        FVar17.Data = local_5c0.Data.AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar17.Data,L"");
      if ((iVar6 != 0) && (GRHIGlobals.GpuInfo.IsAMDPreGCNArchitecture == false)) {
        FGPUDriverHelper::GetBestConfigEntry<FDriverDenyListEntry>
                  ((FGPUDriverHelper *)&local_528,
                   (TOptional<FDriverDenyListEntry> *)&local_338.TypedValue,L"DriverDenyList");
        if ((local_2c8 == '\0') || (local_2f8 == local_2e0)) {
          GRHIGlobals.GpuInfo.AdapterDriverOnDenyList = false;
        }
        else {
          GRHIGlobals.GpuInfo.AdapterDriverOnDenyList = true;
          iVar18 = 1;
        }
        pwVar16 = L"false";
        if (iVar18 != 0) {
          pwVar16 = L"true";
        }
        FString::FString(&local_418,pwVar16);
        FString::FString(&local_428,L"RHI.DriverDenylisted");
        FGenericCrashContext::SetEngineData(&local_428,&local_418);
        if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_428.Data.AllocatorInstance.Data);
        }
        if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_418.Data.AllocatorInstance.Data);
        }
        if (GRHIGlobals.GpuInfo.AdapterDriverOnDenyList != false) {
          FGPUDriverHelper::GetBestConfigEntry<FSuggestedDriverEntry>
                    ((FGPUDriverHelper *)&local_528,&local_468,L"SuggestedDriverVersion");
          bVar21 = local_468.bIsSet == false;
          if (bVar21) {
            pFVar11 = FString::FString(&local_a8,L"Unknown");
          }
          else {
            pFVar11 = FString::FString(&local_b8,&local_468.TypedValue.SuggestedDriverVersion);
          }
          local_498 = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
          if ((bVar21) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if ((!bVar21) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (2 < (byte)LogRHI._0_1_) {
            if (local_468.bIsSet != false) {
              TOptional<FSuggestedDriverEntry>::operator->(&local_468);
            }
            UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_578.ArrayNum = 0;
          local_578.ArrayMax = 0;
          FConfigCacheIni::GetArray
                    (GConfig,L"Devices",L"DeviceCanUpdateDriverList",&local_578,&GHardwareIni);
          iVar6 = local_578.ArrayNum;
          pFVar20 = local_578.AllocatorInstance.Data + (longlong)local_578.ArrayNum * 0x10;
          FVar17.Data = local_578.AllocatorInstance.Data;
          do {
            if (local_578.ArrayNum != iVar6) {
              local_res10[0] = local_res10[0] & 0xffffff00;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
            }
            if (FVar17.Data == pFVar20) {
              if (bVar5) goto LAB_145c701ee;
              goto LAB_145c6f5d9;
            }
            if (*(int *)(FVar17.Data + 8) == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = *(wchar_t **)FVar17.Data;
            }
            local_548.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_548.Data.ArrayNum = 0;
            local_548.Data.ArrayMax = 0;
            FParse::Value(pwVar16 + 1,L"VendorId=",&local_548,true,(wchar_t **)0x0);
            iVar18 = 0;
            if (local_548.Data.ArrayNum == 0) {
              local_488 = (FScriptContainerElement *)0x15060d16c;
LAB_145c6f4c1:
              sVar12 = wcslen((wchar_t *)local_488);
              iVar18 = (int)sVar12;
            }
            else {
              local_488 = local_548.Data.AllocatorInstance.Data;
              if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_145c6f4c1;
            }
            local_c8._12_4_ = uStack_47c;
            local_c8.Size = iVar18;
            local_c8.DataPtr = (wchar_t *)local_488;
            iStack_480 = iVar18;
            uVar7 = FParse::HexNumber(&local_c8);
            local_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_538.Data.ArrayNum = 0;
            local_538.Data.ArrayMax = 0;
            FParse::Value(pwVar16 + 1,L"DeviceId=",&local_538,true,(wchar_t **)0x0);
            if (local_538.Data.ArrayNum == 0) {
              local_478 = (FScriptContainerElement *)0x15060d16c;
LAB_145c6f532:
              sVar12 = wcslen((wchar_t *)local_478);
              iVar18 = (int)sVar12;
            }
            else {
              iVar18 = 0;
              local_478 = local_538.Data.AllocatorInstance.Data;
              if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_145c6f532;
            }
            local_148._12_4_ = uStack_46c;
            local_148.Size = iVar18;
            local_148.DataPtr = (wchar_t *)local_478;
            iStack_470 = iVar18;
            uVar8 = FParse::HexNumber(&local_148);
            if ((local_5e8 == 0) || (local_5e8 != uVar7)) {
              bVar4 = 0;
            }
            else {
              bVar4 = 1;
            }
            bVar5 = (bool)(bVar5 | bVar4);
            if ((((local_5e8 != 0) && (GRHIGlobals.GpuInfo.DeviceId != 0)) && (local_5e8 == uVar7))
               && (GRHIGlobals.GpuInfo.DeviceId == uVar8)) goto LAB_145c6f5ac;
            if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_538.Data.AllocatorInstance.Data);
            }
            if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_548.Data.AllocatorInstance.Data);
            }
            FVar17.Data = FVar17.Data + 0x10;
          } while( true );
        }
        TOptional<FDriverDenyListEntry>::~TOptional<FDriverDenyListEntry>
                  ((TOptional<FDriverDenyListEntry> *)&local_338.TypedValue);
      }
    }
  }
LAB_145c70312:
  FGPUDriverInfo::~FGPUDriverInfo(&local_528);
  if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.Data.AllocatorInstance.Data);
  }
  if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
  }
  if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
  }
  if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
  }
  if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
  }
  if (local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
  }
  return;
LAB_145c6f5ac:
  if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_538.Data.AllocatorInstance.Data);
  }
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
LAB_145c6f5d9:
  bVar5 = FApp::IsUnattended();
  FVar17.Data = local_5d0.Data.AllocatorInstance.Data;
  if ((bVar5) || (GWarnOfBadDrivers == 0)) {
LAB_145c701ee:
    if (2 < (byte)LogRHI._0_1_) {
      FApp::IsUnattended();
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  else {
    lVar19 = (longlong)local_5d0.Data.ArrayNum;
    local_5f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5f8.Data.ArrayNum = local_5d0.Data.ArrayNum;
    if (local_5d0.Data.ArrayNum == 0) {
      local_5f8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_5d0.Data.ArrayNum,0,(ForAnyElementType *)&local_5f8,
                 local_5d0.Data.ArrayNum,&local_5f8.Data.ArrayMax);
      memcpy(local_5f8.Data.AllocatorInstance.Data,FVar17.Data,lVar19 * 2);
    }
    FText::FText(&local_558);
    if (local_5e8 == 0x10de) {
      FString::operator=(&local_5f8,L"NVIDIA");
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_158,L"MessageDialog",L"DriverDownloadLinkNVIDIA",
                           L"https://www.nvidia.com/download/index.aspx");
      FText::operator=(&local_558,pFVar13);
LAB_145c6f79e:
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
    }
    else {
      if (local_5e8 == 0x1002) {
        FString::operator=(&local_5f8,L"AMD");
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_f8,L"MessageDialog",L"DriverDownloadLinkAMD",
                             L"https://www.amd.com/en/support");
        FText::operator=(&local_558,pFVar13);
        local_158.TextData.Reference = local_f8.TextData.Reference;
        goto LAB_145c6f79e;
      }
      if (local_5e8 == 0x8086) {
        FString::operator=(&local_5f8,L"Intel");
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_138,L"MessageDialog",L"DriverDownloadLinkIntel",
                             L"https://downloadcenter.intel.com/product/80939/Graphics");
        FText::operator=(&local_558,pFVar13);
        local_158.TextData.Reference = local_138.TextData.Reference;
        goto LAB_145c6f79e;
      }
      if ((local_5e8 == 0x5143) || (local_5e8 == 0x4d4f4351)) {
        FString::operator=(&local_5f8,L"Qualcomm");
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_128,L"MessageDialog",L"DriverDownloadLinkQualcomm",
                             L"https://softwarecenter.qualcomm.com/catalog/item/Windows_Graphics_Driver"
                            );
        FText::operator=(&local_558,pFVar13);
        local_158.TextData.Reference = local_128.TextData.Reference;
        goto LAB_145c6f79e;
      }
    }
    local_608.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_608.Pairs.ArrayNum = 0;
    local_608.Pairs.ArrayMax = 0;
    pFVar13 = FText::FromString(&local_118,&local_5e0);
    local_278.Type = Text;
    FText::FText((FText *)&local_278.TextValue,pFVar13);
    if ((local_278.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FString::FString(&local_408,L"AdapterName");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_608,&local_408,&local_278);
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
    if (local_278.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_278.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    pFVar13 = FText::FromString(&local_108,&local_5f8);
    local_258.Type = Text;
    FText::FText((FText *)&local_258.TextValue,pFVar13);
    if ((local_258.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FString::FString(&local_3f8,L"Vendor");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_608,&local_3f8,&local_258);
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if (local_258.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_258.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    local_358.Type = Text;
    local_358.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_558.TextData.Reference;
    if (local_558.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_558.TextData.Reference + 8))
                (local_558.TextData.Reference,local_res20);
    }
    local_358.TextValue.field0_0x0.TypedValue.Flags = local_558.Flags;
    if ((local_358.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FString::FString(&local_3e8,L"Hyperlink");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_608,&local_3e8,&local_358);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if (local_358.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_358.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    pFVar13 = FText::FromString(&local_e8,&local_5b0);
    local_238.Type = Text;
    FText::FText((FText *)&local_238.TextValue,pFVar13);
    if ((local_238.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FString::FString(&local_3d8,L"InstalledVer");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_608,&local_3d8,&local_238);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    if (local_238.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_238.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    if (local_468.bIsSet == false) {
      if ((local_2c8 == '\0') &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar5 = FDriverDenyListEntry::AppliesToLatestDrivers
                        ((FDriverDenyListEntry *)&local_338.TypedValue);
      if (bVar5) {
        local_res18[0] = 0;
        `RHIDetectAndWarnOfBadDrivers'::__l85::<lambda_1>::operator()(local_res18);
      }
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_1b8,L"MessageDialog",L"LatestDriver",L"latest driver available");
      local_1f8.Type = Text;
      FText::FText((FText *)&local_1f8.TextValue,pFVar13);
      if ((local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FString::FString(&local_388,L"RecommendedVer");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_608,&local_388,&local_1f8);
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      if (local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1f8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
    }
    else {
      if ((local_2c8 == '\0') &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar5 = FDriverDenyListEntry::AppliesToLatestDrivers
                        ((FDriverDenyListEntry *)&local_338.TypedValue);
      if (bVar5) {
        if ((local_468.bIsSet == false) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar13 = FText::FromString(&local_1c8,&local_468.TypedValue.SuggestedDriverVersion);
        FFormatArgumentValue::FFormatArgumentValue(&local_98,pFVar13);
        FString::FString(&local_398,L"RecommendedVer");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_608,&local_398,&local_98);
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
        local_1b8.TextData.Reference = local_1c8.TextData.Reference;
        if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
          local_1b8.TextData.Reference = local_1c8.TextData.Reference;
        }
      }
      else {
        if ((local_468.bIsSet == false) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar13 = FText::FromString(&local_78,&local_468.TypedValue.SuggestedDriverVersion);
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_d8,L"MessageDialog",L"SuggestedDriverOrLatest",
                             L"{0} or latest driver available");
        pFVar15 = FTextFormat::FTextFormat(&local_68,pFVar14,Default);
        local_218.Type = Text;
        FText::FText((FText *)&local_218.TextValue,pFVar13);
        if ((local_218.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_568.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_568.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_568.AllocatorInstance,1,&local_568.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_568.AllocatorInstance.Data,&local_218,1);
        local_3c8.TextFormatData.Object = (pFVar15->TextFormatData).Object;
        local_3c8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_3c8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_3c8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_3c8.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_3a8,&local_3c8,&local_568);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_568.AllocatorInstance.Data,local_568.ArrayNum);
        if ((FFormatArgumentValue *)local_568.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_568.AllocatorInstance.Data);
        }
        if (local_218.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_218.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar1 = (pFVar13->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        local_298.Type = Text;
        FText::FText((FText *)&local_298.TextValue,&local_3a8);
        if ((local_298.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FString::FString(&local_3b8,L"RecommendedVer");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_608,&local_3b8,&local_298);
        if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        }
        if (local_298.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_298.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        local_1b8.TextData.Reference = local_d8.TextData.Reference;
        if (local_3a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
          local_1b8.TextData.Reference = local_d8.TextData.Reference;
        }
      }
    }
    if (local_1b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
    }
    FText::FText(&local_4a8);
    if ((local_2c8 == '\0') &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_338.TypedValue.Data.ArrayMax == -1) {
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_168,L"MessageDialog",L"VideoCardDriverIssueReport",
                           L"The installed version of the {Vendor} graphics driver has known issues.\nPlease install the recommended driver version.\n\nWould you like to visit the following URL to download the driver?\n\n{Hyperlink}\n\n{AdapterName}\nInstalled: {InstalledVer}\nRecommended: {RecommendedVer}"
                          );
      pFVar15 = FTextFormat::FTextFormat(&local_58,pFVar13,Default);
      pFVar13 = FText::Format(&local_178,pFVar15,&local_608);
      FText::operator=(&local_4a8,pFVar13);
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((local_2c8 == '\0') &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = TOptional<FString>::operator*((TOptional<FString> *)&local_338.TypedValue);
      pFVar13 = FText::FromString(&local_1a8,pFVar11);
      local_2b8.Type = Text;
      FText::FText((FText *)&local_2b8.TextValue,pFVar13);
      if ((local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FString::FString(&local_378,L"RHI");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_608,&local_378,&local_2b8);
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      if (local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_188,L"MessageDialog",L"VideoCardDriverRHIIssueReport",
                           L"The installed version of the {Vendor} graphics driver has known issues in {RHI}.\nPlease install the recommended driver version or switch to a different rendering API.\n\nWould you like to visit the following URL to download the driver?\n\n{Hyperlink}\n\n{AdapterName}\nInstalled: {InstalledVer}\nRecommended: {RecommendedVer}"
                          );
      pFVar15 = FTextFormat::FTextFormat(&local_48,pFVar13,Default);
      pFVar13 = FText::Format(&local_198,pFVar15,&local_608);
      FText::operator=(&local_4a8,pFVar13);
      local_168.TextData.Reference = local_188.TextData.Reference;
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
        local_168.TextData.Reference = local_188.TextData.Reference;
      }
    }
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    FText::AsLocalizable_Advanced_LocText
              (&local_368,L"MessageDialog",L"TitleVideoCardDriverIssue",
               L"WARNING: Known issues with graphics driver");
    TVar9 = FMessageDialog::Open(YesNo,&local_4a8,&local_368);
    if (TVar9 == Yes) {
      pFVar11 = FText::ToString(&local_558);
      if ((pFVar11->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      FWindowsPlatformProcess::LaunchURL(pwVar10,(wchar_t *)0x0,(FString *)0x0);
    }
    if (GBadDriverWarningIsFatal != false) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    bDriverDenylistMessageShown = true;
    if (local_368.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
    }
    if (local_4a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4a8.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_608.Pairs.AllocatorInstance.Data,
               local_608.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_608.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_608.Pairs.AllocatorInstance.Data);
    }
    if (local_558.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_558.TextData.Reference + 0x10))();
    }
    if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>((FString *)local_578.AllocatorInstance.Data,local_578.ArrayNum);
  if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.AllocatorInstance.Data);
  }
  if (local_498 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498);
  }
  if (local_468.bIsSet != false) {
    if (local_468.TypedValue.SuggestedDriverVersion.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.TypedValue.SuggestedDriverVersion.Data.AllocatorInstance.Data);
    }
    if ((char)local_468.TypedValue._padding_ != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_468.TypedValue._padding_);
    }
    if ((local_468.TypedValue._padding_._4_4_ != -1) &&
       ((void *)local_468.TypedValue._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_468.TypedValue._padding_);
    }
  }
  if (local_2c8 != '\0') {
    if (local_2d8 != (void *)0x0) {
      FMemory::Free(local_2d8);
    }
    if ((local_2f8 != '\0') && (local_308 != (void *)0x0)) {
      FMemory::Free(local_308);
    }
    if (local_318 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_320)
      ;
    }
    if ((local_338.TypedValue.Data.ArrayMax != -1) &&
       (local_338.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_338.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  goto LAB_145c70312;
}

// RHIExit @ 145c703d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RHIExit(void)

{
  if (GRHIGlobals.UsingNullRHI) {
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThreadFlushResources,None);
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
  }
  else if (GDynamicRHI != (FDynamicRHI *)0x0) {
    PipelineStateCache::Shutdown();
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
    (**(code **)(GDynamicRHI->_padding_ + 0x18))();
    if (GDynamicRHI != (FDynamicRHI *)0x0) {
      (**(code **)GDynamicRHI->_padding_)(GDynamicRHI,1);
    }
    GDynamicRHI = (FDynamicRHI *)0x0;
    FRHIResource::StopTrackingAllResources();
    FRHICommandListExecutor::CleanupGraphEvents(&GRHICommandList);
    return;
  }
  FRHICommandListExecutor::CleanupGraphEvents(&GRHICommandList);
  return;
}

// RHIGetGPUFrameCycles @ 145c70490

uint __cdecl RHIGetGPUFrameCycles(uint param_1)

{
  return GGPUFrameTime;
}

// RHIInit @ 145c704c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl RHIInit(bool param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  FName FVar11;
  FText *pFVar12;
  wchar_t *pwVar13;
  FString *pFVar14;
  FName *pFVar15;
  FModuleManager *this;
  IModuleInterface *pIVar16;
  FString *pFVar17;
  ForAnyElementType FVar18;
  longlong *plVar19;
  wchar_t *pwVar20;
  EShaderPlatform EVar21;
  bool bVar22;
  undefined4 local_res10 [2];
  FMemScope local_res18;
  undefined1 local_res20 [8];
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FGPUDriverInfo local_228;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
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
  FName local_d8;
  FString local_d0;
  FText local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FText local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pFVar17 = &local_198;
  pwVar20 = L"";
  local_res10[0] = 0;
  EVar21 = SP_NumPlatforms;
  if (GDynamicRHI == (FDynamicRHI *)0x0) {
    FRHIResource::StartTrackingAllResources();
    FGenericDataDrivenShaderPlatformInfo::Initialize();
    FRHICommandListExecutor::LatchBypass(&GRHICommandList);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar13 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar13,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      FLLMScope::FLLMScope((FLLMScope *)local_res10,RHIMisc,false,None,Default,true);
      FMemScope::FMemScope(&local_res18,RHIMisc,true);
      GDynamicRHI = PlatformCreateDynamicRHI();
      if (GDynamicRHI != (FDynamicRHI *)0x0) {
        FWindowsPlatformMisc::GetGPUDriverInfo(&local_228,&GRHIGlobals.GpuInfo.AdapterName,true);
        if ((1 < local_228.DeviceDescription.Data.ArrayNum) && (local_228.VendorId != 0)) {
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_228.InternalDriverVersion.Data.ArrayNum != 0) {
            FVar18.Data = local_228.InternalDriverVersion.Data.AllocatorInstance.Data;
          }
          iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"Unknown");
          if (iVar9 != 0) {
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_228.InternalDriverVersion.Data.ArrayNum != 0) {
              FVar18.Data = local_228.InternalDriverVersion.Data.AllocatorInstance.Data;
            }
            iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"");
            if (iVar9 != 0) {
              iVar9 = local_228.UserDriverVersion.Data.ArrayNum + -1;
              if (local_228.UserDriverVersion.Data.ArrayNum == 0) {
                iVar9 = 0;
              }
              FString::AssignRange
                        (&GRHIGlobals.GpuInfo.AdapterUserDriverVersion,
                         (wchar_t *)local_228.UserDriverVersion.Data.AllocatorInstance.Data,iVar9);
              iVar9 = local_228.InternalDriverVersion.Data.ArrayNum + -1;
              if (local_228.InternalDriverVersion.Data.ArrayNum == 0) {
                iVar9 = 0;
              }
              FString::AssignRange
                        (&GRHIGlobals.GpuInfo.AdapterInternalDriverVersion,
                         (wchar_t *)local_228.InternalDriverVersion.Data.AllocatorInstance.Data,
                         iVar9);
              iVar9 = local_228.DriverDate.Data.ArrayNum + -1;
              if (local_228.DriverDate.Data.ArrayNum == 0) {
                iVar9 = 0;
              }
              FString::AssignRange
                        (&GRHIGlobals.GpuInfo.AdapterDriverDate,
                         (wchar_t *)local_228.DriverDate.Data.AllocatorInstance.Data,iVar9);
            }
          }
        }
        if (((4 < (byte)LogRHI._0_1_) &&
            (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI),
            4 < (byte)LogRHI._0_1_)) &&
           (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI),
           4 < (byte)LogRHI._0_1_)) {
          FGPUDriverInfo::GetUnifiedDriverVersion(&local_228,&local_d0);
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (4 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
        }
        RHIDetectAndWarnOfBadDrivers(param_1);
        (**(code **)(GDynamicRHI->_padding_ + 8))();
        FRHICommandListBase::GetContext
                  ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
        if ((GRHIGlobals.IsRHIInitialized == false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("GRHIGlobals.IsRHIInitialized",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                               ,0x147,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
        if (GRHICommandList.CommandListImmediate._668_4_ != iVar9) {
          GRHICommandList.CommandListImmediate._668_4_ = iVar9;
          if ((GRHICommandList.bLatchedBypass == false) ||
             ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) {
            puVar10 = FMemStackBase::Alloc
                                ((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x18,8);
            GRHICommandList.CommandListImmediate._96_4_ =
                 GRHICommandList.CommandListImmediate._96_4_ + 1;
            *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar10;
            uVar6 = GRHICommandList.CommandListImmediate._668_4_;
            GRHICommandList.CommandListImmediate._48_8_ = puVar10 + 1;
            *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
            *puVar10 = &___7FRHICommandSetGPUMask__6B_;
            *(undefined4 *)(puVar10 + 2) = uVar6;
          }
          else {
            plVar19 = (longlong *)&GRHICommandList.CommandListImmediate.field_0x50;
            do {
              plVar1 = (longlong *)*plVar19;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0xe8))(plVar1,iVar9);
                iVar9 = GRHICommandList.CommandListImmediate._668_4_;
              }
              plVar19 = plVar19 + 1;
            } while (plVar19 != (longlong *)&GRHICommandList.CommandListImmediate.field_0x60);
          }
        }
        local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_268.Data.ArrayNum = 0;
        local_268.Data.ArrayMax = 0;
        GetFeatureLevelName(GMaxRHIFeatureLevel,&local_268);
        if ((param_1) && ((int)GMaxRHIFeatureLevel < 3)) {
          FVar11 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
          FName::ToString((FName *)FVar11,&local_248);
          FString::PrintfImpl(&local_1b8,
                              L"A Feature Level 5 video card is required to run the editor.\nAvailableFeatureLevel = %s, ShaderPlatform = %s"
                             );
          pFVar12 = FText::FromString(&local_c0,&local_1b8);
          FMessageDialog::Open(Ok,pFVar12);
          if (local_c0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
          }
          FWindowsPlatformMisc::RequestExit(true,L"RHIInit");
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
        }
        if (GDynamicRHI == (FDynamicRHI *)0x0) {
          pFVar14 = FString::FString(&local_b0,L"Unknown");
          bVar5 = false;
          bVar4 = false;
          bVar22 = false;
          bVar3 = false;
          bVar7 = true;
        }
        else {
          bVar22 = GMaxRHIFeatureLevel != ES3_1;
          if (bVar22) {
            pwVar13 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
            pFVar17 = FString::FString(&local_a0,pwVar13);
          }
          else {
            pwVar13 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
            pFVar14 = FString::FString(&local_90,pwVar13);
            FString::ConcatFC(pFVar17,pFVar14,L"_ES31");
          }
          bVar5 = !bVar22;
          bVar4 = !bVar22;
          local_258.Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
          pFVar14 = &local_258;
          (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_258.Data.ArrayNum = (pFVar17->Data).ArrayNum;
          local_258.Data.ArrayMax = (pFVar17->Data).ArrayMax;
          (pFVar17->Data).ArrayNum = 0;
          (pFVar17->Data).ArrayMax = 0;
          bVar3 = true;
          bVar7 = false;
        }
        FString::FString(&local_1a8,L"RHI.RHIName");
        FGenericCrashContext::SetEngineData(&local_1a8,pFVar14);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if ((bVar7) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if ((bVar3) && (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
        if ((bVar22) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if ((bVar4) && (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if ((bVar5) && (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        FString::FString(&local_188,L"RHI.AdapterName");
        FGenericCrashContext::SetEngineData(&local_188,&GRHIGlobals.GpuInfo.AdapterName);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        FString::FString(&local_178,L"RHI.UserDriverVersion");
        FGenericCrashContext::SetEngineData
                  (&local_178,&GRHIGlobals.GpuInfo.AdapterUserDriverVersion);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        FString::FString(&local_168,L"RHI.InternalDriverVersion");
        FGenericCrashContext::SetEngineData
                  (&local_168,&GRHIGlobals.GpuInfo.AdapterInternalDriverVersion);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        FString::FString(&local_158,L"RHI.DriverDate");
        FGenericCrashContext::SetEngineData(&local_158,&GRHIGlobals.GpuInfo.AdapterDriverDate);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        FString::FString(&local_148,L"RHI.FeatureLevel");
        FGenericCrashContext::SetEngineData(&local_148,&local_268);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        pwVar13 = RHIVendorIdToString();
        FString::FString(&local_128,pwVar13);
        FString::FString(&local_138,L"RHI.GPUVendor");
        FGenericCrashContext::SetEngineData(&local_138,&local_128);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        FString::PrintfImpl(&local_108,L"%04X");
        FString::FString(&local_118,L"RHI.DeviceId");
        FGenericCrashContext::SetEngineData(&local_118,&local_108);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
        if (local_228.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.RHIName.Data.AllocatorInstance.Data);
        }
        if (local_228.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.DriverDate.Data.AllocatorInstance.Data);
        }
        if (local_228.UserDriverVersion.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.UserDriverVersion.Data.AllocatorInstance.Data);
        }
        if (local_228.InternalDriverVersion.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.InternalDriverVersion.Data.AllocatorInstance.Data);
        }
        if (local_228.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.ProviderName.Data.AllocatorInstance.Data);
        }
        if (local_228.DeviceDescription.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.DeviceDescription.Data.AllocatorInstance.Data);
        }
      }
      FMemScope::~FMemScope(&local_res18);
      FLLMScope::~FLLMScope((FLLMScope *)local_res10);
    }
    else {
      pFVar15 = FName::FName(&local_d8,L"NullDrv");
      FVar11 = *pFVar15;
      this = FModuleManager::Get();
      pIVar16 = FModuleManager::LoadModuleChecked(this,FVar11);
      if ((pIVar16 == (IModuleInterface *)0x0) ||
         (cVar8 = (**(code **)((longlong)*pIVar16 + 0x48))(pIVar16), cVar8 == '\0')) {
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_80,L"DynamicRHI",L"NullDrvFailure",L"NullDrv failure?");
        FMessageDialog::Open(Ok,pFVar12);
        if (local_80.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
        }
        FWindowsPlatformMisc::RequestExit(true,L"InitNullRHI");
      }
      GDynamicRHI = (FDynamicRHI *)(**(code **)((longlong)*pIVar16 + 0x50))(pIVar16,5);
      (**(code **)(GDynamicRHI->_padding_ + 8))(GDynamicRHI);
      GRHIGlobals.UsingNullRHI = true;
      GRHIGlobals.SupportsTextureStreaming = false;
      FString::FString(&local_e8,L"NullRHI");
      FString::FString(&local_f8,L"RHI.RHIName");
      FGenericCrashContext::SetEngineData(&local_f8,&local_e8);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    if ((GDynamicRHI == (FDynamicRHI *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("GDynamicRHI",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                           ,0x16c,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = false;
  bVar7 = false;
  pwVar13 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
  FCsvProfiler::SetMetadata(L"VerbatimRHIName",pwVar13);
  if (GMaxRHIFeatureLevel == ES3_1) {
    bVar3 = true;
    bVar7 = true;
    pwVar13 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
    pFVar17 = FString::FString(&local_70,pwVar13);
    FString::ConcatFC(&local_238,pFVar17,L"_ES31");
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_238.Data.ArrayNum != 0) {
      FVar18.Data = local_238.Data.AllocatorInstance.Data;
    }
  }
  else {
    FVar18.Data = (FScriptContainerElement *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
  }
  FCsvProfiler::SetMetadata(L"RHIName",(wchar_t *)FVar18.Data);
  if ((bVar7) && (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  pFVar17 = LexToString(&local_60,GMaxRHIFeatureLevel);
  if ((pFVar17->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  }
  FCsvProfiler::SetMetadata(L"RHIFeatureLevel",pwVar13);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (GMaxRHIFeatureLevel != Num) {
    EVar21 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel];
  }
  pFVar17 = LexToString(&local_50,EVar21,true);
  if ((pFVar17->Data).ArrayNum != 0) {
    pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  }
  FCsvProfiler::SetMetadata(L"ShaderPlatform",pwVar20);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// RHIPostInit @ 145c71430

void __cdecl RHIPostInit(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if ((GDynamicRHI == (FDynamicRHI *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("GDynamicRHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                         ,0x1a5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar6 = &GDynamicRHI->PixelFormatBlockBytes;
  if (pTVar6 != param_1) {
    iVar2 = (GDynamicRHI->PixelFormatBlockBytes).ArrayMax;
    piVar1 = &(GDynamicRHI->PixelFormatBlockBytes).ArrayMax;
    iVar3 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    (GDynamicRHI->PixelFormatBlockBytes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar2,&pTVar6->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c714ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x10))();
  return;
}

// ShouldDeleteExistingUserCache @ 145c79540

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ShouldDeleteExistingUserCache(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (bOnce) {
    return bCmdLineForce;
  }
  bOnce = true;
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"deleteuserpsocache");
  if (!bVar1) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"logPSO");
    bCmdLineForce = false;
    if (!bVar1) goto LAB_145c79586;
  }
  bCmdLineForce = true;
LAB_145c79586:
  if ((2 < (byte)LogRHI._0_1_) && (bCmdLineForce != false)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return bCmdLineForce;
}

// Categories'' @ 1503cb6d0

void __cdecl
`dynamic_atexit_destructor_for_'UE::RHI::GPUProfiler::FGPUStat::FStatCategory::Categories__(void)

{
  UE::RHI::GPUProfiler::FGPUStat::FStatCategory::Categories._72_4_ = 0;
  if (UE::RHI::GPUProfiler::FGPUStat::FStatCategory::Categories._64_8_ != 0) {
    FMemory::Free((void *)UE::RHI::GPUProfiler::FGPUStat::FStatCategory::Categories._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUStat::FStatCategory,TDefaultDelete<UE::RHI::GPUProfiler::FGPUStat::FStatCategory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUStat::FStatCategory,TDefaultDelete<UE::RHI::GPUProfiler::FGPUStat::FStatCategory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUStat::FStatCategory,TDefaultDelete<UE::RHI::GPUProfiler::FGPUStat::FStatCategory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UE::RHI::GPUProfiler::FGPUStat::FStatCategory::Categories);
  return;
}

// FileCacheLock'' @ 1503cb710

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::FileCacheLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&FPipelineFileCacheManager::FileCacheLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001503cb730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&FPipelineFileCacheManager::FileCacheLock);
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

// FileCacheMap'' @ 1503cb770

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::FileCacheMap__(void)

{
  FPipelineFileCacheManager::FileCacheMap._72_4_ = 0;
  if (FPipelineFileCacheManager::FileCacheMap._64_8_ != 0) {
    FMemory::Free((void *)FPipelineFileCacheManager::FileCacheMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<FPipelineCacheFile,TDefaultDelete<FPipelineCacheFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FPipelineFileCacheManager::FileCacheMap);
  return;
}

// GameGuidToCacheKey'' @ 1503cb7b0

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::GameGuidToCacheKey__(void)

{
  FPipelineFileCacheManager::GameGuidToCacheKey._72_4_ = 0;
  if (FPipelineFileCacheManager::GameGuidToCacheKey._64_8_ != 0) {
    FMemory::Free((void *)FPipelineFileCacheManager::GameGuidToCacheKey._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FPipelineFileCacheManager::GameGuidToCacheKey);
  return;
}

// MemoryPool'' @ 1503cb7f0

void __cdecl
`dynamic_atexit_destructor_for_'UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool__(void)

{
  FLockFreePointerListLIFOBase<void,64,1>::~FLockFreePointerListLIFOBase<void,64,1>
            ((FLockFreePointerListLIFOBase<void,64,1> *)
             &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
  return;
}

// NewPSOHashes'' @ 1503cb810

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::NewPSOHashes__(void)

{
  FPipelineFileCacheManager::NewPSOHashes.HashSize = 0;
  if (FPipelineFileCacheManager::NewPSOHashes.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FPipelineFileCacheManager::NewPSOHashes.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FPipelineFileCacheManager::NewPSOHashes.Elements);
  return;
}

// NewPSOUsage'' @ 1503cb850

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::NewPSOUsage__(void)

{
  FPipelineFileCacheManager::NewPSOUsage._72_4_ = 0;
  if (FPipelineFileCacheManager::NewPSOUsage._64_8_ != 0) {
    FMemory::Free((void *)FPipelineFileCacheManager::NewPSOUsage._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPSOUsageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPSOUsageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPSOUsageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FPipelineFileCacheManager::NewPSOUsage);
  return;
}

// NewPSOs'' @ 1503cb890

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::NewPSOs__(void)

{
  FPipelineFileCacheManager::NewPSOs.HashSize = 0;
  if (FPipelineFileCacheManager::NewPSOs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FPipelineFileCacheManager::NewPSOs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FPipelineFileCacheManager::NewPSOs.Elements);
  return;
}

// NewPSOsToReport'' @ 1503cb8d0

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::NewPSOsToReport__(void)

{
  atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*> aVar1;
  undefined8 *puVar2;
  FNode *pFVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  aVar1 = (FPipelineFileCacheManager::NewPSOsToReport.Tail)->Next;
  FMemory::Free(FPipelineFileCacheManager::NewPSOsToReport.Tail);
  pFVar3 = FPipelineFileCacheManager::NewPSOsToReport.Tail;
  while (FPipelineFileCacheManager::NewPSOsToReport.Tail = (FNode *)aVar1,
        (atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>)
        FPipelineFileCacheManager::NewPSOsToReport.Tail !=
        (atomic<TMpscQueue<FPipelineCacheFileFormatPSO,FMemory>::FNode_*>)0x0) {
    lVar4 = 8;
    aVar1 = (FPipelineFileCacheManager::NewPSOsToReport.Tail)->Next;
    puVar5 = (undefined8 *)((longlong)FPipelineFileCacheManager::NewPSOsToReport.Tail + 0x2d0);
    do {
      puVar2 = puVar5 + -3;
      puVar5 = puVar5 + -3;
      lVar4 = lVar4 + -1;
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
    } while (lVar4 != 0);
    FMemory::Free(FPipelineFileCacheManager::NewPSOsToReport.Tail);
    pFVar3 = FPipelineFileCacheManager::NewPSOsToReport.Tail;
  }
  FPipelineFileCacheManager::NewPSOsToReport.Tail = pFVar3;
  return;
}

// PSOLoggedEvent'' @ 1503cb970

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::PSOLoggedEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FPipelineFileCacheManager::PSOLoggedEvent._8_8_,
             FPipelineFileCacheManager::PSOLoggedEvent._16_4_);
  if (FPipelineFileCacheManager::PSOLoggedEvent._8_8_ != 0) {
    FMemory::Free((void *)FPipelineFileCacheManager::PSOLoggedEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FPipelineFileCacheManager::PSOLoggedEvent);
  return;
}

// RunTimeToPSOUsage'' @ 1503cb9b0

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::RunTimeToPSOUsage__(void)

{
  FPipelineFileCacheManager::RunTimeToPSOUsage._72_4_ = 0;
  if (FPipelineFileCacheManager::RunTimeToPSOUsage._64_8_ != 0) {
    FMemory::Free((void *)FPipelineFileCacheManager::RunTimeToPSOUsage._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPSOUsageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPSOUsageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPSOUsageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FPipelineFileCacheManager::RunTimeToPSOUsage);
  return;
}

// Stats'' @ 1503cb9f0

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::Stats__(void)

{
  FPipelineFileCacheManager::Stats._72_4_ = 0;
  if (FPipelineFileCacheManager::Stats._64_8_ != 0) {
    FMemory::Free((void *)FPipelineFileCacheManager::Stats._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineStateStats_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineStateStats_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineStateStats_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FPipelineFileCacheManager::Stats);
  return;
}

// UserCacheKey'' @ 1503cba30

void __cdecl `dynamic_atexit_destructor_for_'FPipelineFileCacheManager::UserCacheKey__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FPipelineFileCacheManager::UserCacheKey.Data.AllocatorInstance.Data;
  if (FPipelineFileCacheManager::UserCacheKey.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FPipelineFileCacheManager::UserCacheKey.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'BoundShaderStateCacheLock'' @ 1503cba50

void __cdecl _dynamic_atexit_destructor_for__BoundShaderStateCacheLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cba57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&BoundShaderStateCacheLock);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAlwaysGeneratePOSSOFileCache'' @ 1503cba70

void __cdecl _dynamic_atexit_destructor_for__CVarAlwaysGeneratePOSSOFileCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAlwaysGeneratePOSSOFileCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBadDriverWarningIsFatal'' @ 1503cba90

void __cdecl _dynamic_atexit_destructor_for__CVarBadDriverWarningIsFatal__(void)

{
  CVarBadDriverWarningIsFatal._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBadDriverWarningIsFatal);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClearOSPSOFileCache'' @ 1503cbab0

void __cdecl _dynamic_atexit_destructor_for__CVarClearOSPSOFileCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarClearOSPSOFileCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUCsvStatsEnabled'' @ 1503cbad0

void __cdecl _dynamic_atexit_destructor_for__CVarGPUCsvStatsEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUCsvStatsEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUDefragAllowOverlappedMoves'' @ 1503cbaf0

void __cdecl _dynamic_atexit_destructor_for__CVarGPUDefragAllowOverlappedMoves__(void)

{
  CVarGPUDefragAllowOverlappedMoves._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUDefragAllowOverlappedMoves);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUDefragEnableTimeLimits'' @ 1503cbb10

void __cdecl _dynamic_atexit_destructor_for__CVarGPUDefragEnableTimeLimits__(void)

{
  CVarGPUDefragEnableTimeLimits._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUDefragEnableTimeLimits);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGPUDefragMaxRelocations'' @ 1503cbb30

void __cdecl _dynamic_atexit_destructor_for__CVarGPUDefragMaxRelocations__(void)

{
  CVarGPUDefragMaxRelocations._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGPUDefragMaxRelocations);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLazyLoadShadersWhenPSOCacheIsPresent'' @ 1503cbb50

void __cdecl _dynamic_atexit_destructor_for__CVarLazyLoadShadersWhenPSOCacheIsPresent__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLazyLoadShadersWhenPSOCacheIsPresent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheEnabled'' @ 1503cbb70

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheExcludePrecachePSO'' @ 1503cbb90

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheExcludePrecachePSO__(void)

{
  CVarPSOFileCacheExcludePrecachePSO._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheExcludePrecachePSO)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheLogPSO'' @ 1503cbbb0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheLogPSO__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheLogPSO);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCachePrintNewPSODescriptors'' @ 1503cbbd0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCachePrintNewPSODescriptors__(void)

{
  CVarPSOFileCachePrintNewPSODescriptors._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOFileCachePrintNewPSODescriptors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheReportPSO'' @ 1503cbbf0

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheReportPSO__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheReportPSO);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheSaveUserCache'' @ 1503cbc10

void __cdecl _dynamic_atexit_destructor_for__CVarPSOFileCacheSaveUserCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOFileCacheSaveUserCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheUserCacheUnusedElementCheckPeriod'' @ 1503cbc30

void __cdecl
_dynamic_atexit_destructor_for__CVarPSOFileCacheUserCacheUnusedElementCheckPeriod__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOFileCacheUserCacheUnusedElementCheckPeriod);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOFileCacheUserCacheUnusedElementRetainDays'' @ 1503cbc50

void __cdecl
_dynamic_atexit_destructor_for__CVarPSOFileCacheUserCacheUnusedElementRetainDays__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPSOFileCacheUserCacheUnusedElementRetainDays);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWarnOfBadDrivers'' @ 1503cbc70

void __cdecl _dynamic_atexit_destructor_for__CVarWarnOfBadDrivers__(void)

{
  CVarWarnOfBadDrivers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarWarnOfBadDrivers);
  return;
}

// `dynamic_atexit_destructor_for_'Cleanup'' @ 1503cbc90

void __cdecl
`TLinearAllocatorBase<FCommandListBaseBlockAllocationTag,0>::AllocateBlock'::__l5::
_dynamic_atexit_destructor_for__Cleanup__(void)

{
  uint uVar1;
  ulong64 uVar2;
  uint *puVar3;
  void *pvVar4;
  FPageAllocator *this;
  ulong64 *puVar5;
  
  puVar5 = (ulong64 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea0);
  uVar2 = *puVar5;
  if (uVar2 != 0) {
    *(ulong64 *)(uVar2 + 0x40) = uVar2 + 0x10000;
    puVar3 = (uint *)*puVar5;
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 - ~puVar3[0x12];
    UNLOCK();
    if (uVar1 == ~puVar3[0x12]) {
      MemoryTrace_UnmarkAllocAsHeap(*puVar5,0,0);
      pvVar4 = (void *)*puVar5;
      this = FPageAllocator::Get();
      FPageAllocator::Free(this,pvVar4);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'CsvGPUCategories'' @ 1503cbd10

void __cdecl
`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults'::__l8::
_dynamic_atexit_destructor_for__CsvGPUCategories__(void)

{
  DestructItems<TUniquePtr<FCsvCategory,TDefaultDelete<FCsvCategory>_>,int>
            ((TUniquePtr<FCsvCategory,TDefaultDelete<FCsvCategory>_> *)
             `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
             ::__l8::CsvGPUCategories.AllocatorInstance.Data,
             `public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
             ::__l8::CsvGPUCategories.ArrayNum);
  if (`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
      ::__l8::CsvGPUCategories.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_void___cdecl_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState::EmitResults(UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat&___ptr64,FEndOfPipeStats*___ptr64,FCsvProfiler*___ptr64)const___ptr64'
                  ::__l8::CsvGPUCategories.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GBoundShaderStateCache'' @ 1503cbd50

void __cdecl _dynamic_atexit_destructor_for__GBoundShaderStateCache__(void)

{
  GBoundShaderStateCache._72_4_ = 0;
  if (GBoundShaderStateCache._64_8_ != 0) {
    FMemory::Free((void *)GBoundShaderStateCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GBoundShaderStateCache);
  return;
}

// `dynamic_atexit_destructor_for_'GBoundShaderStateCache_ThreadSafe'' @ 1503cbd90

void __cdecl _dynamic_atexit_destructor_for__GBoundShaderStateCache_ThreadSafe__(void)

{
  GBoundShaderStateCache_ThreadSafe._72_4_ = 0;
  if (GBoundShaderStateCache_ThreadSafe._64_8_ != 0) {
    FMemory::Free((void *)GBoundShaderStateCache_ThreadSafe._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GBoundShaderStateCache_ThreadSafe);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_Root'' @ 1503cbdd0

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_Root__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_Root);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_ShowEmptyQueues'' @ 1503cbdf0

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_ShowEmptyQueues__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_ShowEmptyQueues);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_ShowExclusive'' @ 1503cbe10

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_ShowExclusive__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_ShowExclusive);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_ShowHeader'' @ 1503cbe30

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_ShowHeader__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_ShowHeader);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_ShowInclusive'' @ 1503cbe50

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_ShowInclusive__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_ShowInclusive);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_ShowLeafEvents'' @ 1503cbe70

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_ShowLeafEvents__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_ShowLeafEvents);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_ShowPercentColumn'' @ 1503cbe90

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_ShowPercentColumn__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_ShowPercentColumn);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_ShowStats'' @ 1503cbeb0

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_ShowStats__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_ShowStats);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_ShowUI'' @ 1503cbed0

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_ShowUI__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_ShowUI);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_Sort'' @ 1503cbef0

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_Sort__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_Sort);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_ThresholdPercent'' @ 1503cbf10

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_ThresholdPercent__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_ThresholdPercent);
  return;
}

// `dynamic_atexit_destructor_for_'GCVarProfileGPU_UnicodeOutput'' @ 1503cbf30

void __cdecl _dynamic_atexit_destructor_for__GCVarProfileGPU_UnicodeOutput__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarProfileGPU_UnicodeOutput);
  return;
}

// `dynamic_atexit_destructor_for_'GCommand_ProfileGPU'' @ 1503cbf50

void __cdecl UE::RHI::GPUProfiler::_dynamic_atexit_destructor_for__GCommand_ProfileGPU__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCommand_ProfileGPU);
  return;
}

// `dynamic_atexit_destructor_for_'GGPUProfilerSink_StatSystem'' @ 1503cbf70

void __cdecl
UE::RHI::GPUProfiler::_dynamic_atexit_destructor_for__GGPUProfilerSink_StatSystem__(void)

{
  GGPUProfilerSink_StatSystem.QueueStates._72_4_ = 0;
  if (GGPUProfilerSink_StatSystem.QueueStates._64_8_ != 0) {
    FMemory::Free((void *)GGPUProfilerSink_StatSystem.QueueStates._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,TUniquePtr<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState,TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GGPUProfilerSink_StatSystem.QueueStates);
  GGPUProfilerSink_StatSystem.Frames._72_4_ = 0;
  if (GGPUProfilerSink_StatSystem.Frames._64_8_ != 0) {
    FMemory::Free((void *)GGPUProfilerSink_StatSystem.Frames._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GGPUProfilerSink_StatSystem.Frames);
  FEventSink::~FEventSink((FEventSink *)&GGPUProfilerSink_StatSystem);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_Total'' @ 1503cbfe0

void __cdecl UE::RHI::GPUProfiler::_dynamic_atexit_destructor_for__GPUStat_Total__(void)

{
  GPUStat_Total.Instances._72_4_ = 0;
  if (GPUStat_Total.Instances._64_8_ != 0) {
    FMemory::Free((void *)GPUStat_Total.Instances._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_Total.Instances);
  return;
}

// `dynamic_atexit_destructor_for_'GRHIGPUFrameTimeHistory'' @ 1503cc020

void __cdecl _dynamic_atexit_destructor_for__GRHIGPUFrameTimeHistory__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cc027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GRHIGPUFrameTimeHistory.CS);
  return;
}

// `dynamic_atexit_destructor_for_'JOURNAL_FILE_EXTENSION'' @ 1503cc040

void __cdecl _dynamic_atexit_destructor_for__JOURNAL_FILE_EXTENSION__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = JOURNAL_FILE_EXTENSION.Data.AllocatorInstance.Data;
  if (JOURNAL_FILE_EXTENSION.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (JOURNAL_FILE_EXTENSION.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PlatformNameToShaderPlatformMap'' @ 1503cc060

void __cdecl _dynamic_atexit_destructor_for__PlatformNameToShaderPlatformMap__(void)

{
  PlatformNameToShaderPlatformMap._72_4_ = 0;
  if (PlatformNameToShaderPlatformMap._64_8_ != 0) {
    FMemory::Free((void *)PlatformNameToShaderPlatformMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_EShaderPlatform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_EShaderPlatform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&PlatformNameToShaderPlatformMap);
  return;
}

// `dynamic_atexit_destructor_for_'Sinks'' @ 1503cc0a0

void __cdecl `UE::RHI::GPUProfiler::GetSinks'::__l2::_dynamic_atexit_destructor_for__Sinks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Sinks.AllocatorInstance.Data;
  if (Sinks.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Sinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_PSO'' @ 1503cc0c0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_PSO__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_PSO.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_PSO.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_PSO.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// operator() @ 1504d9f50

bool __thiscall `RHIDetectAndWarnOfBadDrivers'::__l85::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7202533093079515342>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7202533093079515342>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

