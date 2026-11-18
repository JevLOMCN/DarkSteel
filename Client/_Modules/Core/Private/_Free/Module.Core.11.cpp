// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 459

// FullFileSHAHashMap'' @ 140f09f90

void __cdecl `dynamic_initializer_for_'FSHA1::FullFileSHAHashMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSHA1::FullFileSHAHashMap__);
  return;
}

// NestedTimerScopeDepths'' @ 140f09fb0

void __cdecl `dynamic_initializer_for_'FCpuProfilerTraceInternal::NestedTimerScopeDepths__(void)

{
  __tlregdtor(`dynamic_atexit_destructor_for_'FCpuProfilerTraceInternal::NestedTimerScopeDepths__);
  return;
}

// OnRuntimeIssueLogged'' @ 140f09fd0

void __cdecl `dynamic_initializer_for_'FRuntimeErrors::OnRuntimeIssueLogged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FRuntimeErrors::OnRuntimeIssueLogged__);
  return;
}

// RegisteredFiles'' @ 140f09ff0

void __cdecl `dynamic_initializer_for_'FPreloadableFile::RegisteredFiles__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPreloadableFile::RegisteredFiles__);
  return;
}

// ScriptSHAHashMap'' @ 140f0a010

void __cdecl `dynamic_initializer_for_'FSHA1::ScriptSHAHashMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSHA1::ScriptSHAHashMap__);
  return;
}

// Singleton'' @ 140f0a030

void __cdecl `dynamic_initializer_for_'FCsvProfilerThreadData::Singleton__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&FCsvProfilerThreadData::Singleton,4000)
  ;
  FCsvProfilerThreadData::Singleton.TlsSlot = 0xffffffff;
  FCsvProfilerThreadData::Singleton.TlsInstances.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FCsvProfilerThreadData::Singleton.TlsInstances.ArrayNum = 0;
  FCsvProfilerThreadData::Singleton.TlsInstances.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'FCsvProfilerThreadData::Singleton__);
  return;
}

// `dynamic_initializer_for_'ABTestCmd'' @ 140f0a080

void __cdecl _dynamic_initializer_for__ABTestCmd__(void)

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
    puVar1[3] = FABTest::ABTestCmdFunc;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ABTestCmd,L"abtest",
             L"Provide two console commands or \'stop\' to stop the abtest. Frames are timed with the two options, logging results over time."
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__ABTestCmd__);
  return;
}

// `dynamic_initializer_for_'AssetMetadataChannelReg'' @ 140f0a1c0

void __cdecl _dynamic_initializer_for__AssetMetadataChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&AssetMetadataChannelObject,"AssetMetadataChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'CVarABTestCoolDown'' @ 140f0a1f0

void __cdecl _dynamic_initializer_for__CVarABTestCoolDown__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarABTestCoolDown,L"abtest.CoolDown",local_res8,
             L"Number of frames to discard data after each command to cover threading.",0);
  atexit(_dynamic_atexit_destructor_for__CVarABTestCoolDown__);
  return;
}

// `dynamic_initializer_for_'CVarABTestHistory'' @ 140f0a240

void __cdecl _dynamic_initializer_for__CVarABTestHistory__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarABTestHistory,L"abtest.HistoryNum",local_res8,
             L"Number of history frames to use for stats.",0);
  atexit(_dynamic_atexit_destructor_for__CVarABTestHistory__);
  return;
}

// `dynamic_initializer_for_'CVarABTestMinFramesPerTrial'' @ 140f0a290

void __cdecl _dynamic_initializer_for__CVarABTestMinFramesPerTrial__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarABTestMinFramesPerTrial,L"abtest.MinFramesPerTrial",local_res8,
             L"The number of frames to run a given command before switching; this is randomized.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarABTestMinFramesPerTrial__);
  return;
}

// `dynamic_initializer_for_'CVarABTestNumResamples'' @ 140f0a2e0

void __cdecl _dynamic_initializer_for__CVarABTestNumResamples__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarABTestNumResamples,L"abtest.NumResamples",local_res8,
             L"The number of resamples to use to determine confidence.",0);
  atexit(_dynamic_atexit_destructor_for__CVarABTestNumResamples__);
  return;
}

// `dynamic_initializer_for_'CVarABTestReportNum'' @ 140f0a330

void __cdecl _dynamic_initializer_for__CVarABTestReportNum__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarABTestReportNum,L"abtest.ReportNum",local_res8,
             L"Number of frames between reports.",0);
  atexit(_dynamic_atexit_destructor_for__CVarABTestReportNum__);
  return;
}

// `dynamic_initializer_for_'CVarCsvAggregateTaskWorkerStats'' @ 140f0a380

void __cdecl _dynamic_initializer_for__CVarCsvAggregateTaskWorkerStats__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCsvAggregateTaskWorkerStats,L"csv.AggregateTaskWorkerStats",local_res8,
             L"If enabled, stats recorded on task worker threads are aggregated instead of outputting a single stat per thread.\r\nThis reduces CSV bloat when there are large numbers of worker threads and makes stat data more intelligible"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvAggregateTaskWorkerStats__);
  return;
}

// `dynamic_initializer_for_'CVarCsvBenchmark'' @ 140f0a3d0

void __cdecl _dynamic_initializer_for__CVarCsvBenchmark__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCsvBenchmark,L"csv.Benchmark",local_res8,
             L"If emabled, do a quick benchmark test on the frame before the CSV profiler starts",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarCsvBenchmark__);
  return;
}

// `dynamic_initializer_for_'CVarCsvBenchmarkIterationCount'' @ 140f0a420

void __cdecl _dynamic_initializer_for__CVarCsvBenchmarkIterationCount__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvBenchmarkIterationCount,L"csv.Benchmark.IterationCount",local_res8,
             L"Number of iterations of each CsvBenchmark test",0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvBenchmarkIterationCount__);
  return;
}

// `dynamic_initializer_for_'CVarCsvBlockOnCaptureEnd'' @ 140f0a470

void __cdecl _dynamic_initializer_for__CVarCsvBlockOnCaptureEnd__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvBlockOnCaptureEnd,L"csv.BlockOnCaptureEnd",local_res8,
             L"When 1, blocks the game thread until the CSV file has been written completely when the capture is ended.\r\nWhen 0, the game thread is not blocked whilst the file is written."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvBlockOnCaptureEnd__);
  return;
}

// `dynamic_initializer_for_'CVarCsvCompressionMode'' @ 140f0a4c0

void __cdecl _dynamic_initializer_for__CVarCsvCompressionMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvCompressionMode,L"csv.CompressionMode",local_res8,
             L"Controls whether CSV files are compressed when written out.\r\n -1 = (Default) Use compression if the code which started the capture opted for it.\r\n  0 = Force disable compression. All files will be written as uncompressed .csv files.\r\n  1 = Force enable compression. All files will be written as compressed .csv.gz files."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvCompressionMode__);
  return;
}

// `dynamic_initializer_for_'CVarCsvContinuousWrites'' @ 140f0a510

void __cdecl _dynamic_initializer_for__CVarCsvContinuousWrites__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvContinuousWrites,L"csv.ContinuousWrites",local_res8,
             L"When 1, completed CSV rows are converted to CSV format strings and appended to the write buffer whilst the capture is in progress.\r\nWhen 0, CSV rows are accumulated in memory as binary data, and only converted to strings and flushed to disk at the end of the capture."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvContinuousWrites__);
  return;
}

// `dynamic_initializer_for_'CVarCsvForceExit'' @ 140f0a560

void __cdecl _dynamic_initializer_for__CVarCsvForceExit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvForceExit,L"csv.ForceExit",local_res8,
             L"If 1, do a forced exit when if exitOnCompletion is enabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvForceExit__);
  return;
}

// `dynamic_initializer_for_'CVarCsvPauseProcessingThread'' @ 140f0a5b0

void __cdecl _dynamic_initializer_for__CVarCsvPauseProcessingThread__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvPauseProcessingThread,L"csv.PauseProcessingThread",local_res8,
             L"Debug only - When 1, blocks the processing thread to simulate starvation",0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvPauseProcessingThread__);
  return;
}

// `dynamic_initializer_for_'CVarCsvProcessingThreadGtStallUpdateEscalationThreshold'' @ 140f0a600

void __cdecl
_dynamic_initializer_for__CVarCsvProcessingThreadGtStallUpdateEscalationThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 3;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvProcessingThreadGtStallUpdateEscalationThreshold,
             L"csv.ProcessingThread.GtStallUpdateEscalationThreshold",local_res8,
             L"Number of progressively slower updates before we stall the GT. Updates faster than UpdateTimeThresholdMs are ignored"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvProcessingThreadGtStallUpdateEscalationThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarCsvProcessingThreadGtStallUpdateTimeThresholdMs'' @ 140f0a650

void __cdecl _dynamic_initializer_for__CVarCsvProcessingThreadGtStallUpdateTimeThresholdMs__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1000.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarCsvProcessingThreadGtStallUpdateTimeThresholdMs,
             L"csv.ProcessingThread.GtStallUpdateTimeThresholdMs",local_res8,
             L"Specifies the max time a processing thread update can take before we consider stalling the game thread.\nSet to 0 to disable stalling"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvProcessingThreadGtStallUpdateTimeThresholdMs__);
  return;
}

// `dynamic_initializer_for_'CVarCsvProcessingThreadTimeBetweenUpdates'' @ 140f0a6a0

void __cdecl _dynamic_initializer_for__CVarCsvProcessingThreadTimeBetweenUpdates__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 50.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarCsvProcessingThreadTimeBetweenUpdates,L"csv.ProcessingThread.TimeBetweenUpdates",
             local_res8,
             L"Specifies the minimum time between CSV processing thread updates.\r\nNote: This is the time between the start of updates. If processing takes longer than this, the next update will commence immediately."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvProcessingThreadTimeBetweenUpdates__);
  return;
}

// `dynamic_initializer_for_'CVarCsvStatCounts'' @ 140f0a6f0

void __cdecl _dynamic_initializer_for__CVarCsvStatCounts__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvStatCounts,L"csv.statCounts",local_res8,L"If 1, outputs count stats",0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvStatCounts__);
  return;
}

// `dynamic_initializer_for_'CVarCsvStatNameValidation'' @ 140f0a740

void __cdecl _dynamic_initializer_for__CVarCsvStatNameValidation__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvStatNameValidation,L"csv.StatNameValidation",local_res8,
             L"If 0, does nothing\r\nIf 1, warns if there are invalid characters\r\nIf 2, warns and sanitizes stat names with invalid characters\r\nIf 3, warns and removes stats with invalid characters"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvStatNameValidation__);
  return;
}

// `dynamic_initializer_for_'CVarCsvStreamFramesToBuffer'' @ 140f0a790

void __cdecl _dynamic_initializer_for__CVarCsvStreamFramesToBuffer__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x80;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvStreamFramesToBuffer,L"csv.FramesToBuffer",local_res8,
             L"Defines the minimum amount of frames to keep in memory before flushing them.",0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvStreamFramesToBuffer__);
  return;
}

// `dynamic_initializer_for_'CVarCsvTargetFrameRateOverride'' @ 140f0a7e0

void __cdecl _dynamic_initializer_for__CVarCsvTargetFrameRateOverride__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvTargetFrameRateOverride,L"csv.TargetFrameRateOverride",local_res8,
             L"If 0, Defaults to calculating the target frame rate using rhi.SyncInterval and Max refresh rate."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvTargetFrameRateOverride__);
  return;
}

// `dynamic_initializer_for_'CVarCsvWriteBufferSize'' @ 140f0a830

void __cdecl _dynamic_initializer_for__CVarCsvWriteBufferSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x20000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCsvWriteBufferSize,L"csv.WriteBufferSize",local_res8,
             L"When non-zero, defines the size of the write buffer to use whilst writing the CSV file.\r\nA non-zero value is required for GZip compressed output."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCsvWriteBufferSize__);
  return;
}

// `dynamic_initializer_for_'CVarForceStringifyTimecodeSubframes'' @ 140f0a880

void __cdecl _dynamic_initializer_for__CVarForceStringifyTimecodeSubframes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarForceStringifyTimecodeSubframes,L"timecode.ForceStringifyTimecodeSubframes",
             local_res8,
             L"Should Timecode.ToString() be forced to include subframes. 0 - Don\'t force. 1 - Force show. 2 - Force hide"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceStringifyTimecodeSubframes__);
  return;
}

// `dynamic_initializer_for_'CVarMaxPerThreadStatDataSlackKB'' @ 140f0a8d0

void __cdecl _dynamic_initializer_for__CVarMaxPerThreadStatDataSlackKB__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x40;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxPerThreadStatDataSlackKB,L"csv.MaxPerThreadStatDataSlackKB",local_res8,
             L"Max amount of per thread slack data to allow during a capture.\r\nHigher values result in better performance due to fewer allocations but higher memory overhead"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxPerThreadStatDataSlackKB__);
  return;
}

// `dynamic_initializer_for_'CVarNamedEventsExclusive'' @ 140f0a920

void __cdecl _dynamic_initializer_for__CVarNamedEventsExclusive__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNamedEventsExclusive,L"csv.NamedEventsExclusive",&GCsvProfilerNamedEventsExclusive
             ,L"Determines whether to emit named events for exclusive stats",0);
  atexit(_dynamic_atexit_destructor_for__CVarNamedEventsExclusive__);
  return;
}

// `dynamic_initializer_for_'CVarNamedEventsTiming'' @ 140f0a970

void __cdecl _dynamic_initializer_for__CVarNamedEventsTiming__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNamedEventsTiming,L"csv.NamedEventsTiming",&GCsvProfilerNamedEventsTiming,
             L"Determines whether to emit named events for non-exclusive timing stats",0);
  atexit(_dynamic_atexit_destructor_for__CVarNamedEventsTiming__);
  return;
}

// `dynamic_initializer_for_'CVarNumberedFNamesStatsAreFatal'' @ 140f0a9c0

void __cdecl _dynamic_initializer_for__CVarNumberedFNamesStatsAreFatal__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarNumberedFNamesStatsAreFatal,L"csv.NumberedFNamesStatsAreFatal",local_res8,
             L"Fatal error if numbered fname stats are encountered (ignored in shipping)",0);
  atexit(_dynamic_atexit_destructor_for__CVarNumberedFNamesStatsAreFatal__);
  return;
}

// `dynamic_initializer_for_'CVarSlowTaskMaxTraceRegionDepth'' @ 140f0aa10

void __cdecl _dynamic_initializer_for__CVarSlowTaskMaxTraceRegionDepth__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlowTaskMaxTraceRegionDepth,L"Trace.SlowTaskMaxRegionDepth",
             &GSlowTaskMaxTraceRegionDepth,
             L"Maximum depth of nested slow tasks to create as trace regions in Insights",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlowTaskMaxTraceRegionDepth__);
  return;
}

// `dynamic_initializer_for_'CVarTrackWaitsAllThreads'' @ 140f0aa60

void __cdecl _dynamic_initializer_for__CVarTrackWaitsAllThreads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTrackWaitsAllThreads,L"csv.trackWaitsAllThreads",&GCsvTrackWaitsOnAllThreads,
             L"Determines whether to track waits on all threads. Note that this incurs a lot of overhead"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackWaitsAllThreads__);
  return;
}

// `dynamic_initializer_for_'CVarTrackWaitsGT'' @ 140f0aab0

void __cdecl _dynamic_initializer_for__CVarTrackWaitsGT__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTrackWaitsGT,L"csv.trackWaitsGT",&GCsvTrackWaitsOnGameThread,
             L"Determines whether to track game thread waits. Note that this incurs overhead",0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackWaitsGT__);
  return;
}

// `dynamic_initializer_for_'CVarTrackWaitsRT'' @ 140f0ab00

void __cdecl _dynamic_initializer_for__CVarTrackWaitsRT__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTrackWaitsRT,L"csv.trackWaitsRT",&GCsvTrackWaitsOnRenderThread,
             L"Determines whether to track render thread waits. Note that this incurs overhead",0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackWaitsRT__);
  return;
}

// `dynamic_initializer_for_'CVarUseDropFormatTimecodeByDefaultWhenSupported'' @ 140f0ab50

void __cdecl _dynamic_initializer_for__CVarUseDropFormatTimecodeByDefaultWhenSupported__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarUseDropFormatTimecodeByDefaultWhenSupported,
             L"timecode.UseDropFormatTimecodeByDefaultWhenSupported",local_res8,
             L"By default, should we generate a timecode in drop frame format when the frame rate does support it."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseDropFormatTimecodeByDefaultWhenSupported__);
  return;
}

// `dynamic_initializer_for_'CallstackChannelReg'' @ 140f0aba0

void __cdecl _dynamic_initializer_for__CallstackChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&CallstackChannelObject,"CallstackChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'CharPtrToStringIndex'' @ 140f0abd0

void __cdecl _dynamic_initializer_for__CharPtrToStringIndex__(void)

{
  atexit(_dynamic_atexit_destructor_for__CharPtrToStringIndex__);
  return;
}

// `dynamic_initializer_for_'CountersChannelReg'' @ 140f0abf0

void __cdecl _dynamic_initializer_for__CountersChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&CountersChannelObject,"CountersChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'CpuChannelReg'' @ 140f0ac20

void __cdecl _dynamic_initializer_for__CpuChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&CpuChannelObject,"CpuChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'EmptyDeprecatedList'' @ 140f0ac50

void __cdecl _dynamic_initializer_for__EmptyDeprecatedList__(void)

{
  atexit(_dynamic_atexit_destructor_for__EmptyDeprecatedList__);
  return;
}

// `dynamic_initializer_for_'FCoreDebuggingStateTestAutomationTestInstance'' @ 140f0ac70

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCoreDebuggingStateTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCoreDebuggingStateTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCoreDebuggingStateTestAutomationTestInstance,&local_18,false);
  FCoreDebuggingStateTestAutomationTestInstance._0_8_ = &___7FCoreDebuggingStateTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCoreDebuggingStateTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTextFilterTests_TextFilterAutomationTestInstance'' @ 140f0acd0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTextFilterTests_TextFilterAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTextFilterTests_TextFilter");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTextFilterTests_TextFilterAutomationTestInstance,&local_18,
             false);
  FTextFilterTests_TextFilterAutomationTestInstance._0_8_ = &___7FTextFilterTests_TextFilter__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTextFilterTests_TextFilterAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTextFilterTests_TextFilterExpressionEvaluatorAutomationTestInstance'' @ 140f0ad30

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FTextFilterTests_TextFilterExpressionEvaluatorAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTextFilterTests_TextFilterExpressionEvaluator");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FTextFilterTests_TextFilterExpressionEvaluatorAutomationTestInstance,&local_18,false);
  FTextFilterTests_TextFilterExpressionEvaluatorAutomationTestInstance._0_8_ =
       &___7FTextFilterTests_TextFilterExpressionEvaluator__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FTextFilterTests_TextFilterExpressionEvaluatorAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'GCsvABTest'' @ 140f0ad90

void __cdecl _dynamic_initializer_for__GCsvABTest__(void)

{
  atexit(_dynamic_atexit_destructor_for__GCsvABTest__);
  return;
}

// `dynamic_initializer_for_'GCsvFileName'' @ 140f0adb0

void __cdecl _dynamic_initializer_for__GCsvFileName__(void)

{
  atexit(_dynamic_atexit_destructor_for__GCsvFileName__);
  return;
}

// `dynamic_initializer_for_'GCsvPersistentCustomStats'' @ 140f0add0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__GCsvPersistentCustomStats__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GCsvPersistentCustomStats,4000);
  GCsvPersistentCustomStats.StatLookup._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  GCsvPersistentCustomStats.StatLookup._48_8_ = _UNK_150631d98;
  GCsvPersistentCustomStats.StatLookup._0_8_ = 0;
  GCsvPersistentCustomStats.StatLookup._8_8_ = 0;
  GCsvPersistentCustomStats.StatLookup._32_8_ = 0;
  GCsvPersistentCustomStats.StatLookup._64_8_ = 0;
  GCsvPersistentCustomStats.StatLookup._72_4_ = 0;
  GCsvPersistentCustomStats.Stats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  GCsvPersistentCustomStats.Stats.ArrayNum = 0;
  GCsvPersistentCustomStats.Stats.ArrayMax = 0;
  atexit(_dynamic_atexit_destructor_for__GCsvPersistentCustomStats__);
  return;
}

// `dynamic_initializer_for_'GFrameBoundaries'' @ 140f0ae40

void __cdecl _dynamic_initializer_for__GFrameBoundaries__(void)

{
  ulong64 *puVar1;
  longlong lVar2;
  
  lVar2 = 3;
  puVar1 = &GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[0].Counter;
  do {
    ((TSingleProducerSingleConsumerList<unsigned___int64,16> *)(puVar1 + -2))->HeadBlock =
         (FBlock *)0x0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 5;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  GFrameBoundaries.FrameBoundaryTimestamps[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  GFrameBoundaries.FrameBoundaryTimestamps[2].ArrayNum = 0;
  GFrameBoundaries.FrameBoundaryTimestamps[2].ArrayMax = 0;
  GFrameBoundaries.CurrentReadFrameIndex = 0;
  GFrameBoundaries.EOPCounter = (atomic<int>)0x0;
  GFrameBoundaries.FrameBoundaryTimestamps[0].ArrayNum = 0;
  GFrameBoundaries.FrameBoundaryTimestamps[0].ArrayMax = 0;
  GFrameBoundaries.FrameBoundaryTimestamps[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  GFrameBoundaries.FrameBoundaryTimestamps[1].ArrayNum = 0;
  GFrameBoundaries.FrameBoundaryTimestamps[1].ArrayMax = 0;
  GFrameBoundaries.FrameBoundaryTimestamps[2].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  atexit(_dynamic_atexit_destructor_for__GFrameBoundaries__);
  return;
}

// `dynamic_initializer_for_'GGlobalCsvCategory'' @ 140f0aeb0

void __cdecl _dynamic_initializer_for__GGlobalCsvCategory__(void)

{
  FCsvCategoryData *this;
  
  FString::operator=(&GGlobalCsvCategory.Name,L"GLOBAL");
  this = FCsvCategoryData::Get();
  GGlobalCsvCategory.Index =
       FCsvCategoryData::RegisterCategory(this,&GGlobalCsvCategory.Name,true,true);
  atexit(_dynamic_atexit_destructor_for__GGlobalCsvCategory__);
  return;
}

// `dynamic_initializer_for_'GPixelFormats'' @ 140f0af00

void __cdecl _dynamic_initializer_for__GPixelFormats__(void)

{
  INSERT(GPixelFormats[1]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[1]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[2]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[2]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[3]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[3]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[4]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[4]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[8]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[8]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[5]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[5]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[6]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[6]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[7]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[7]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[9]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[9]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[10]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[10]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0xd]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0xd]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0xe]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0xe]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0xf]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0xf]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x10]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x10]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x11]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x11]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x12]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x12]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x13]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x13]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x14]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x14]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x15]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x15]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x16]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x16]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x17]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x17]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x18]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x18]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x1b]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x1b]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x1c]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x1c]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x1d]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x1d]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x20]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x20]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x21]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x21]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x22]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x22]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x23]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x23]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x25]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x25]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x26]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x26]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x27]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x27]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x28]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x28]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0xb]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0xb]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0xc]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0xc]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x19]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x19]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x1a]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x1a]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x1e]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x1e]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x1f]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x1f]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x24]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x24]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x29]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x29]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x2a]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x2a]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x2b]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x2b]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x30]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x30]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x31]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x31]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x2c]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x2c]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x37]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x37]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x38]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x38]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x2d]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x2d]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x39]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x39]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x3b]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x3b]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x2e]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x2e]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x3c]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x3c]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x3d]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x3d]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x2f]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x2f]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x3e]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x3e]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x3f]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x3f]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x32]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x32]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x44]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x44]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x47]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x47]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x33]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x33]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x34]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x34]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x35]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x35]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x36]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x36]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x3a]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x3a]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x40]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x40]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x41]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x41]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x42]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x42]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x43]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x43]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x45]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x45]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x46]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x46]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x48]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x48]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x4e]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x4e]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x49]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x49]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x4f]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x4f]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x50]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x50]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x4a]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x4a]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x51]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x51]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x52]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x52]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x4b]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x4b]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x53]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x53]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x5c]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x5c]._40_1_,'\x01',0,1);
  INSERT(GPixelFormats[0x4c]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x4c]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x4d]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x4d]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x54]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x54]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x55]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x55]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x56]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x56]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x57]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x57]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x58]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x58]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x59]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x59]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x5a]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x5a]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x5b]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x5b]._40_1_,'\0',0,1);
  INSERT(GPixelFormats[0x5d]._40_1_,'\x01',1,1);
  INSERT(GPixelFormats[0x5d]._40_1_,'\0',0,1);
  return;
}

// `dynamic_initializer_for_'GRemoteConfig'' @ 140f0b350

void __cdecl _dynamic_initializer_for__GRemoteConfig__(void)

{
  atexit(_dynamic_atexit_destructor_for__GRemoteConfig__);
  return;
}

// `dynamic_initializer_for_'GRemoteConfigIOManager'' @ 140f0b370

void __cdecl _dynamic_initializer_for__GRemoteConfigIOManager__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GRemoteConfigIOManager.SynchronizationObject,4000);
  atexit(_dynamic_atexit_destructor_for__GRemoteConfigIOManager__);
  return;
}

// `dynamic_initializer_for_'HandleCSVCategoryCmd'' @ 140f0b3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__HandleCSVCategoryCmd__(void)

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
    puVar3[3] = HandleCSVCategoryCommand;
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
                     (IConsoleManager::Singleton,L"CsvCategory",
                      L"Changes whether a CSV category is included in captures.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&HandleCSVCategoryCmd,pIVar5);
  HandleCSVCategoryCmd._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__HandleCSVCategoryCmd__);
  return;
}

// `dynamic_initializer_for_'HandleCSVProfileCmd'' @ 140f0b540

void __cdecl _dynamic_initializer_for__HandleCSVProfileCmd__(void)

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
    puVar1[3] = HandleCSVProfileCommand;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&HandleCSVProfileCmd,L"CsvProfile",L"Starts or stops Csv Profiles",
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
  atexit(_dynamic_atexit_destructor_for__HandleCSVProfileCmd__);
  return;
}

// `dynamic_initializer_for_'LogCsvProfiler'' @ 140f0b680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCsvProfiler__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogCsvProfiler,L"LogCsvProfiler",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCsvProfiler__);
  return;
}

// `dynamic_initializer_for_'LogModuleManager'' @ 140f0b6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogModuleManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogModuleManager,L"LogModuleManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogModuleManager__);
  return;
}

// `dynamic_initializer_for_'LogPaths'' @ 140f0b700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPaths__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogPaths,L"LogPaths",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPaths__);
  return;
}

// `dynamic_initializer_for_'LogSecureHash'' @ 140f0b740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSecureHash__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSecureHash,L"LogSecureHash",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSecureHash__);
  return;
}

// `dynamic_initializer_for_'LogStringUtility'' @ 140f0b780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStringUtility__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStringUtility,L"LogStringUtility",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStringUtility__);
  return;
}

// `dynamic_initializer_for_'LogTimeGuard'' @ 140f0b7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTimeGuard__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTimeGuard,L"LogTimeGuard",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTimeGuard__);
  return;
}

// `dynamic_initializer_for_'LogUProjectInfo'' @ 140f0b800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUProjectInfo__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogUProjectInfo,L"LogUProjectInfo",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogUProjectInfo__);
  return;
}

// `dynamic_initializer_for_'UniqueNonFNameStatIDIndices'' @ 140f0b840

void __cdecl _dynamic_initializer_for__UniqueNonFNameStatIDIndices__(void)

{
  atexit(_dynamic_atexit_destructor_for__UniqueNonFNameStatIDIndices__);
  return;
}

// `dynamic_initializer_for_'UniqueNonFNameStatIDStrings'' @ 140f0b860

void __cdecl _dynamic_initializer_for__UniqueNonFNameStatIDStrings__(void)

{
  atexit(_dynamic_atexit_destructor_for__UniqueNonFNameStatIDStrings__);
  return;
}

// `dynamic_initializer_for_'ValidatePixelFormats'' @ 140f0b880

void __cdecl _dynamic_initializer_for__ValidatePixelFormats__(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if ((EPixelFormat)uVar3 != GPixelFormats[(int)uVar3].UnrealFormat) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(EPixelFormat)Index == GPixelFormats[Index].UnrealFormat",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PixelFormat.cpp"
                         ,0x114,L"Missing entry for EPixelFormat %d");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x5e);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Basic'' @ 140f0b900

void __cdecl _dynamic_initializer_for___GCsvCategory_Basic__(void)

{
  FCsvCategoryData *this;
  
  FString::operator=(&_GCsvCategory_Basic.Name,L"Basic");
  this = FCsvCategoryData::Get();
  _GCsvCategory_Basic.Index =
       FCsvCategoryData::RegisterCategory(this,&_GCsvCategory_Basic.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Basic__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_CsvBench'' @ 140f0b950

void __cdecl _dynamic_initializer_for___GCsvCategory_CsvBench__(void)

{
  FCsvCategoryData *this;
  
  FString::operator=(&_GCsvCategory_CsvBench.Name,L"CsvBench");
  this = FCsvCategoryData::Get();
  _GCsvCategory_CsvBench.Index =
       FCsvCategoryData::RegisterCategory(this,&_GCsvCategory_CsvBench.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_CsvBench__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_CsvProfiler'' @ 140f0b9a0

void __cdecl _dynamic_initializer_for___GCsvCategory_CsvProfiler__(void)

{
  FCsvCategoryData *this;
  
  FString::operator=(&_GCsvCategory_CsvProfiler.Name,L"CsvProfiler");
  this = FCsvCategoryData::Get();
  _GCsvCategory_CsvProfiler.Index =
       FCsvCategoryData::RegisterCategory(this,&_GCsvCategory_CsvProfiler.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_CsvProfiler__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_CsvTest'' @ 140f0b9f0

void __cdecl _dynamic_initializer_for___GCsvCategory_CsvTest__(void)

{
  FCsvCategoryData *this;
  
  FString::operator=(&_GCsvCategory_CsvTest.Name,L"CsvTest");
  this = FCsvCategoryData::Get();
  _GCsvCategory_CsvTest.Index =
       FCsvCategoryData::RegisterCategory(this,&_GCsvCategory_CsvTest.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_CsvTest__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Exclusive'' @ 140f0ba40

void __cdecl _dynamic_initializer_for___GCsvCategory_Exclusive__(void)

{
  FCsvCategoryData *this;
  
  FString::operator=(&_GCsvCategory_Exclusive.Name,L"Exclusive");
  this = FCsvCategoryData::Get();
  _GCsvCategory_Exclusive.Index =
       FCsvCategoryData::RegisterCategory(this,&_GCsvCategory_Exclusive.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Exclusive__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_FileIO'' @ 140f0ba90

void __cdecl _dynamic_initializer_for___GCsvCategory_FileIO__(void)

{
  FCsvCategoryData *this;
  
  FString::operator=(&_GCsvCategory_FileIO.Name,L"FileIO");
  this = FCsvCategoryData::Get();
  _GCsvCategory_FileIO.Index =
       FCsvCategoryData::RegisterCategory(this,&_GCsvCategory_FileIO.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_FileIO__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs'' @ 140f0bae0

void __cdecl
_dynamic_initializer_for____GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs__(void)

{
  atomic<unsigned_int> aVar1;
  wchar_t wVar2;
  uchar *puVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  uint uVar7;
  FImportantLogScope local_18;
  
  if (CountersChannel->Enabled < 0) {
    uVar7 = 0;
  }
  else {
    LOCK();
    aVar1 = (atomic<unsigned_int>)((int)NextId + 1);
    UNLOCK();
    uVar7 = (int)NextId + 1;
    NextId = aVar1;
    if (-1 < CountersChannel->Enabled) {
      lVar6 = 0x2b;
      UE::Trace::Private::FImportantLogScope::Enter<FCountersSpecFields>(&local_18,0x2b);
      pwVar5 = L"QueuedThreadPoolWrapper/ScheduledWorkAllocs";
      *(short *)local_18.Ptr = (short)uVar7;
      local_18.Ptr[2] = '\0';
      local_18.Ptr[3] = '\0';
      builtin_memcpy(local_18.Ptr + local_18.AuxCursor,"\x01c\x05",4);
      puVar3 = local_18.Ptr + (longlong)local_18.AuxCursor + 4;
      do {
        wVar2 = *pwVar5;
        pwVar5 = pwVar5 + 1;
        *puVar3 = (uchar)wVar2;
        puVar3 = puVar3 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      iVar4 = local_18.AuxCursor + 0x2b;
      local_18.AuxCursor = local_18.AuxCursor + 0x2f;
      local_18.Ptr[(longlong)iVar4 + 4] = '\x03';
      LOCK();
      *(int *)(local_18.Ptr + local_18.BufferOffset) =
           *(int *)(local_18.Ptr + local_18.BufferOffset) + 1;
      UNLOCK();
    }
  }
  __GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs.CounterId =
       (atomic<unsigned_int>)(uVar7 & 0xffff);
  LOCK();
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs__
        );
  return;
}

// `scalar_deleting_destructor' @ 141900c00

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
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141901030

void * __thiscall
FTextFilterTests_TextFilterExpressionEvaluator::_scalar_deleting_destructor_
          (FTextFilterTests_TextFilterExpressionEvaluator *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141901b40

void * __thiscall
FTextFilterTests_TextFilter::_scalar_deleting_destructor_
          (FTextFilterTests_TextFilter *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141902630

void * __thiscall
FCoreDebuggingStateTest::_scalar_deleting_destructor_(FCoreDebuggingStateTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// AddLambda<`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_> @ 141903460

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>::
AddLambda<_FCsvProfiler::FCsvProfiler_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::`2'::<lambda_1>_>
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

// AppendToString<FAnsiString> @ 141903e70

void __cdecl AppendToString<FAnsiString>(FStringFormatArg *param_1,FAnsiString *param_2)

{
  char *_Str;
  wchar_t *pwVar1;
  uchar *_Str_00;
  size_t sVar2;
  int iVar3;
  FAnsiString local_18;
  
  switch(param_1->Type) {
  case Int:
    FAnsiString::PrintfImpl(&local_18,"%lld");
    break;
  case UInt:
    FAnsiString::PrintfImpl(&local_18,"%llu");
    break;
  case Double:
    FAnsiString::PrintfImpl(&local_18,"%f");
    break;
  case String:
    iVar3 = (param_1->StringValue).Data.ArrayNum;
    if (iVar3 == 0) {
      FAnsiString::AppendChars(param_2,L"",0);
      return;
    }
    FAnsiString::AppendChars
              (param_2,(wchar_t *)(param_1->StringValue).Data.AllocatorInstance.Data,iVar3 + -1);
    return;
  case StringLiteralANSI:
    _Str = (param_1->field1_0x8).StringLiteralANSIValue;
    sVar2 = strlen(_Str);
    FAnsiString::AppendChars(param_2,_Str,(int)sVar2);
    return;
  case StringLiteralWIDE:
    pwVar1 = (param_1->field1_0x8).StringLiteralWIDEValue;
    sVar2 = wcslen(pwVar1);
    FAnsiString::AppendChars(param_2,pwVar1,(int)sVar2);
    return;
  case StringLiteralUCS2:
    pwVar1 = (param_1->field1_0x8).StringLiteralWIDEValue;
    sVar2 = wcslen(pwVar1);
    FAnsiString::AppendChars(param_2,(ushort *)pwVar1,(int)sVar2);
    return;
  case StringLiteralUTF8:
    _Str_00 = (uchar *)(param_1->field1_0x8).StringLiteralANSIValue;
    sVar2 = strlen((char *)_Str_00);
    FAnsiString::AppendChars(param_2,_Str_00,(int)sVar2);
  default:
    goto switchD_141903e9c_default;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  FAnsiString::AppendChars(param_2,(char *)local_18.Data.AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
switchD_141903e9c_default:
  return;
}

// AppendToString<FString> @ 141904020

void __cdecl AppendToString<FString>(FStringFormatArg *param_1,FString *param_2)

{
  char *_Str;
  wchar_t *_Str_00;
  uchar *_Str_01;
  size_t sVar1;
  int iVar2;
  FString local_18;
  
  switch(param_1->Type) {
  case Int:
    FString::PrintfImpl(&local_18,L"%lld");
    break;
  case UInt:
    FString::PrintfImpl(&local_18,L"%llu");
    break;
  case Double:
    FString::PrintfImpl(&local_18,L"%f");
    break;
  case String:
    iVar2 = (param_1->StringValue).Data.ArrayNum;
    if (iVar2 == 0) {
      FString::AppendChars(param_2,L"",0);
      return;
    }
    FString::AppendChars
              (param_2,(wchar_t *)(param_1->StringValue).Data.AllocatorInstance.Data,iVar2 + -1);
    return;
  case StringLiteralANSI:
    _Str = (param_1->field1_0x8).StringLiteralANSIValue;
    sVar1 = strlen(_Str);
    FString::AppendChars(param_2,_Str,(int)sVar1);
    return;
  case StringLiteralWIDE:
    FString::Append<wchar_t_const_>(param_2,(param_1->field1_0x8).StringLiteralWIDEValue);
    return;
  case StringLiteralUCS2:
    _Str_00 = (param_1->field1_0x8).StringLiteralWIDEValue;
    sVar1 = wcslen(_Str_00);
    FString::AppendChars(param_2,(ushort *)_Str_00,(int)sVar1);
    return;
  case StringLiteralUTF8:
    _Str_01 = (uchar *)(param_1->field1_0x8).StringLiteralANSIValue;
    sVar1 = strlen((char *)_Str_01);
    FString::AppendChars(param_2,_Str_01,(int)sVar1);
  default:
    goto switchD_14190404c_default;
  }
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  FString::AppendChars(param_2,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
switchD_14190404c_default:
  return;
}

// AppendToString<FUtf8String> @ 1419041c0

void __cdecl AppendToString<FUtf8String>(FStringFormatArg *param_1,FUtf8String *param_2)

{
  char *_Str;
  wchar_t *pwVar1;
  uchar *_Str_00;
  size_t sVar2;
  int iVar3;
  FUtf8String local_18;
  
  switch(param_1->Type) {
  case Int:
    FUtf8String::PrintfImpl(&local_18,(uchar *)"%lld");
    break;
  case UInt:
    FUtf8String::PrintfImpl(&local_18,(uchar *)"%llu");
    break;
  case Double:
    FUtf8String::PrintfImpl(&local_18,(uchar *)"%f");
    break;
  case String:
    iVar3 = (param_1->StringValue).Data.ArrayNum;
    if (iVar3 == 0) {
      FUtf8String::AppendChars(param_2,L"",0);
      return;
    }
    FUtf8String::AppendChars
              (param_2,(wchar_t *)(param_1->StringValue).Data.AllocatorInstance.Data,iVar3 + -1);
    return;
  case StringLiteralANSI:
    _Str = (param_1->field1_0x8).StringLiteralANSIValue;
    sVar2 = strlen(_Str);
    FUtf8String::AppendChars(param_2,_Str,(int)sVar2);
    return;
  case StringLiteralWIDE:
    pwVar1 = (param_1->field1_0x8).StringLiteralWIDEValue;
    sVar2 = wcslen(pwVar1);
    FUtf8String::AppendChars(param_2,pwVar1,(int)sVar2);
    return;
  case StringLiteralUCS2:
    pwVar1 = (param_1->field1_0x8).StringLiteralWIDEValue;
    sVar2 = wcslen(pwVar1);
    FUtf8String::AppendChars(param_2,(ushort *)pwVar1,(int)sVar2);
    return;
  case StringLiteralUTF8:
    _Str_00 = (uchar *)(param_1->field1_0x8).StringLiteralANSIValue;
    sVar2 = strlen((char *)_Str_00);
    FUtf8String::AppendChars(param_2,_Str_00,(int)sVar2);
  default:
    goto switchD_1419041ec_default;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  FUtf8String::AppendChars(param_2,(uchar *)local_18.Data.AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
switchD_1419041ec_default:
  return;
}

// Async<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>_> @ 141904370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FPreloadableArchive::InitializeInternalAsync_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  wchar_t *pwVar6;
  atomic<UE::Tasks::Private::FTaskBase_*> aVar7;
  TFutureState<void> *pTVar8;
  TFutureState<FRunnableThread_*> *pTVar9;
  bool bVar10;
  int iVar11;
  TFuture<void> *pTVar12;
  FTaskBase *pFVar13;
  FTSTicker *this;
  FTaskBase *pFVar14;
  FRunnableThread *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FSharedReferencer<1> FVar20;
  FTaskBase *pFVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  FTaskBase *pFVar25;
  Type TVar26;
  undefined1 auStackY_1d8 [32];
  EExtendedTaskPriority local_198;
  ETaskPriority local_197 [7];
  TPromise<void> local_190;
  FRunnableThread *local_178;
  FTaskBase *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar25 = (FTaskBase *)0x0;
  local_178 = (FRunnableThread *)((ulonglong)local_178 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController = FMemory::Malloc(0x90,0x10);
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FPreloadableArchive::InitializeInternalAsync'::`2'::<lambda_1>,1,1>::
        _vftable_;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)param_2->__this;
  *(uint *)&(((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->
            EmptyEventRef).SharedReferenceCount.ReferenceController = param_2->InFlags;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->DebugName =
       (wchar_t *)param_2->PrimeSize;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
  TaskCount = *(atomic<unsigned___int64> *)&param_2->PassedArchiveFunction;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x50))->
  TaskCount = *(atomic<unsigned___int64> *)&(param_2->PassedArchiveFunction).field_0x28;
  *(undefined8 *)&(param_2->PassedArchiveFunction).field_0x28 = 0;
  pwVar6 = *(wchar_t **)&(param_2->PassedArchiveFunction).field_0x18;
  (((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
  EmptyEventRef).SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(param_2->PassedArchiveFunction).field_0x10;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
  DebugName = pwVar6;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x50))->
  LastTask = *(atomic<UE::Tasks::Private::FTaskBase_*> *)
              &(param_2->PassedArchiveFunction).field_0x20;
  if (((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))
      ->TaskCount != (atomic<unsigned___int64>)0x0) {
    *(undefined8 *)&param_2->PassedArchiveFunction = 0;
  }
  (((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x50))->
  EmptyEventRef).Object = *(TEventCount<unsigned_int> **)&param_2->PassedAsyncArchiveFunction;
  (((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x78))->
  EmptyEventRef).Object =
       *(TEventCount<unsigned_int> **)&(param_2->PassedAsyncArchiveFunction).field_0x28;
  *(undefined8 *)&(param_2->PassedAsyncArchiveFunction).field_0x28 = 0;
  aVar7 = *(atomic<UE::Tasks::Private::FTaskBase_*> *)
           &(param_2->PassedAsyncArchiveFunction).field_0x18;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x50))->
  DebugName = *(wchar_t **)&(param_2->PassedAsyncArchiveFunction).field_0x10;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x78))->
  LastTask = aVar7;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x78))->
  TaskCount = *(atomic<unsigned___int64> *)&(param_2->PassedAsyncArchiveFunction).field_0x20;
  if ((((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x50))
      ->EmptyEventRef).Object != (TEventCount<unsigned_int> *)0x0) {
    *(undefined8 *)&param_2->PassedAsyncArchiveFunction = 0;
  }
  if (&((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef !=
      (TSharedRef<UE::TEventCount<unsigned_int>,1> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>,void>
               ::Call;
  }
  TPromise<void>::TPromise<void>(&local_190,param_3);
  if ((local_190.bFutureRetrieved != false) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TFuture<void> *)(*pcVar5)();
    return pTVar12;
  }
  local_190.bFutureRetrieved = true;
  if (((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TFuture<void> *)(*pcVar5)();
    return pTVar12;
  }
  FVar22.ReferenceController = local_190.State.SharedReferenceCount.ReferenceController;
  local_170 = (FTaskBase *)local_190.State.Object;
  if (local_190.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar26 = GameThread;
    if (param_1 == TaskGraph) {
      TVar26 = AnyNormalThreadNormalTask;
    }
    pFVar13 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar21 = pFVar25;
    if (pFVar13 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar13,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar13->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar21 = pFVar13;
    }
    pFVar21[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar21[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar21[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar21[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    pFVar21[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar21[1]._padding_ != 0) {
      local_f8 = pFVar25;
    }
    pFVar21[1].Pipe = (FPipe *)local_190.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar21[1].StateChangeEvent =
         local_190.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar21[1].ExecutingThreadId = local_190.bFutureRetrieved;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar21[1].TraceId = TVar26;
    UE::Tasks::Private::TranslatePriority(TVar26,local_197,&local_198);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar21,L"GraphTask",local_197[0],local_198,None);
    if (pFVar21 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar21->RefCount = (atomic<unsigned_int>)((int)pFVar21->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar21,0x130);
      LOCK();
      paVar1 = &pFVar21->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar21->_padding_)(pFVar21,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = (FTaskBase *)local_190.State.Object;
    local_90 = local_190.State.SharedReferenceCount.ReferenceController;
    local_88 = local_190.bFutureRetrieved;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object = (TFutureState<void> *)0x0;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FPreloadableArchive::InitializeInternalAsync'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State->IsComplete()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x242,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<void> *)(*pcVar5)();
      return pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)(*(code **)pFVar19 + 0x10))();
    }
    break;
  case Thread:
    bVar10 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar10) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pFVar14 = operator_new(0x70);
      pFVar21 = local_170;
      pFVar13 = pFVar25;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("!bFutureRetrieved",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x24d,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<void> *)(*pcVar5)();
          return pTVar12;
        }
        pTVar9 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("State.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x283,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<void> *)(*pcVar5)();
          return pTVar12;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pFVar14->_padding_ = &___7__TAsyncRunnable_X__6B_;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar14->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar14->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar14->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar14->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar14->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8 = pFVar25;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (pFVar14->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar9;
        pFVar21 = pFVar25;
        pFVar25 = (FTaskBase *)&DAT_00000001;
        pFVar13 = pFVar14;
      }
      if (pFVar25 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar21);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar24.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar15 = FRunnableThread::Create
                          ((FRunnable *)pFVar13,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_178 = pFVar15;
      if ((pFVar15 == (FRunnableThread *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("RunnableThread != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x14d,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<void> *)(*pcVar5)();
        return pTVar12;
      }
      iVar11 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar11 != 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x14e,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<void> *)(*pcVar5)();
        return pTVar12;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_178);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<void> *)(*pcVar5)();
        return pTVar12;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar25 = local_f8;
      FVar20.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar20.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar20.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar25)(uVar17);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x283,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<void> *)(*pcVar5)();
          return pTVar12;
        }
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<void> *)(*pcVar5)();
          return pTVar12;
        }
      }
      pTVar8 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("!IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0xcd,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<void> *)(*pcVar5)();
        return pTVar12;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar8);
    }
    break;
  case ThreadIfForkSafe:
    bVar10 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar10) || (bVar10 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar10)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pFVar14 = operator_new(0x70);
      pFVar21 = local_170;
      pFVar13 = pFVar25;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("!bFutureRetrieved",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x24d,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<void> *)(*pcVar5)();
          return pTVar12;
        }
        pTVar9 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("State.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x283,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<void> *)(*pcVar5)();
          return pTVar12;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pFVar14->_padding_ = &___7__TAsyncRunnable_X__6B_;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar14->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar14->_padding_ = (longlong)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar14->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar14->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pFVar14->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8 = pFVar25;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &(pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (pFVar14->TraceId).field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar9;
        pFVar21 = pFVar25;
        pFVar25 = (FTaskBase *)&DAT_00000002;
        pFVar13 = pFVar14;
      }
      if (pFVar25 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar21);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_120,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar24.Data = local_120.Data.AllocatorInstance.Data;
      }
      pFVar15 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar13,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FRunnableThread *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("RunnableThread != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x161,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<void> *)(*pcVar5)();
        return pTVar12;
      }
      iVar11 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar11 != 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x162,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<void> *)(*pcVar5)();
        return pTVar12;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<void> *)(*pcVar5)();
        return pTVar12;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar25 = local_f8;
      FVar20.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar20.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar20.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar25)(uVar17);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x283,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<void> *)(*pcVar5)();
          return pTVar12;
        }
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<void> *)(*pcVar5)();
          return pTVar12;
        }
      }
      pTVar8 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("!IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0xcd,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<void> *)(*pcVar5)();
        return pTVar12;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar8);
    }
    break;
  case ThreadPool:
    bVar10 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar10) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("GThreadPool != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                              ,0x16f,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<void> *)(*pcVar5)();
        return pTVar12;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar25;
        }
        puVar16[8] = local_190.State.Object;
        puVar16[9] = local_190.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_190.bFutureRetrieved;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar25 = local_f8;
      FVar20.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar20.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar20.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar25)(uVar17);
      if ((FTaskBase *)local_190.State.Object == (FTaskBase *)0x0) {
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x283,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<void> *)(*pcVar5)();
          return pTVar12;
        }
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TFuture<void> *)(*pcVar5)();
          return pTVar12;
        }
      }
      pTVar8 = local_190.State.Object;
      if (((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                  &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum != '\0') &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("!IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0xcd,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TFuture<void> *)(*pcVar5)();
        return pTVar12;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar8);
    }
    break;
  default:
    bVar10 = FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                        ,0x187,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TFuture<void> *)(*pcVar5)();
      return pTVar12;
    }
  }
  *(FTaskBase **)__return_storage_ptr__ = local_170;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((((FTaskBase *)local_190.State.Object != (FTaskBase *)0x0) &&
      ((char)(((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              &(local_190.State.Object)->field_0x58)->Prerequisites).ArrayNum == '\0')) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("State->IsComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x242,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TFuture<void> *)(*pcVar5)();
    return pTVar12;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>_> @ 1419050c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_TAsyncRunnable<void>::Run_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TAsyncRunnable<void> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->Thread;
  local_e8.EmptyEventRef.Object = (TEventCount<unsigned_int> *)param_2->__this;
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_X__UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>,void>::Call;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = (TAsyncRunnable<void> *)local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_X__UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_X__UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// CompareStrings<char> @ 1419070a0

bool __cdecl
TextFilterInternal::CompareStrings<char>
          (char *param_1,int param_2,char *param_3,int param_4,ETextFilterTextComparisonMode param_5
          ,Type param_6)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  bool bVar7;
  
  if (param_6 == CaseSensitive) {
    if (param_5 != Exact) {
      if (param_5 == Partial) {
        pcVar6 = strstr(param_1,param_3);
        return pcVar6 != (char *)0x0;
      }
      if (param_5 == StartsWith) {
        bVar7 = false;
        if (param_4 < 0) {
          sVar5 = strlen(param_3);
          param_4 = (int)sVar5;
          bVar7 = param_4 < 0;
        }
        if (param_4 == 0 || bVar7) {
          return false;
        }
      }
      else {
        if (param_5 != EndsWith) {
          return false;
        }
        if (param_2 < 0) {
          sVar5 = strlen(param_1);
          param_2 = (int)sVar5;
        }
        if (param_4 < 0) {
          sVar5 = strlen(param_3);
          param_4 = (int)sVar5;
        }
        if (param_2 < 1) {
          return false;
        }
        if (param_2 < param_4) {
          return false;
        }
        param_1 = param_1 + (param_2 - param_4);
      }
      iVar4 = strncmp(param_1,param_3,(longlong)param_4);
LAB_141907120:
      if (iVar4 != 0) {
        return false;
      }
      return true;
    }
    iVar4 = strcmp(param_1,param_3);
LAB_141907271:
    return iVar4 == 0;
  }
  if (param_5 == Exact) {
    iVar4 = FGenericPlatformStricmp::Stricmp(param_1,param_3);
    goto LAB_141907271;
  }
  if (param_5 != Partial) {
    if (param_5 == StartsWith) {
      bVar7 = false;
      if (param_4 < 0) {
        sVar5 = strlen(param_3);
        param_4 = (int)sVar5;
        bVar7 = param_4 < 0;
      }
      if (param_4 == 0 || bVar7) {
        return false;
      }
      iVar4 = FGenericPlatformStricmp::Strnicmp(param_1,param_3,(longlong)param_4);
    }
    else {
      if (param_5 != EndsWith) {
        return false;
      }
      if (param_2 < 0) {
        sVar5 = strlen(param_1);
        param_2 = (int)sVar5;
      }
      if (param_4 < 0) {
        sVar5 = strlen(param_3);
        param_4 = (int)sVar5;
      }
      if (param_2 < 1) {
        return false;
      }
      if (param_2 < param_4) {
        return false;
      }
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (param_1 + (param_2 - param_4),param_3,(longlong)param_4);
    }
    goto LAB_141907120;
  }
  if ((param_3 != (char *)0x0) && (param_1 != (char *)0x0)) {
    bVar1 = *param_3;
    bVar3 = -((int)(char)bVar1 - 0x61U < 0x1a) & 0x20;
    if (bVar1 == bVar3) goto LAB_141907253;
    sVar5 = strlen(param_3);
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      param_1 = param_1 + 1;
      if (((byte)(cVar2 - (-((int)cVar2 - 0x61U < 0x1a) & 0x20U)) == (byte)(bVar1 - bVar3)) &&
         (iVar4 = FGenericPlatformStricmp::Strnicmp(param_1,param_3 + 1,(longlong)((int)sVar5 + -1))
         , iVar4 == 0)) {
        return param_1 != &DAT_00000001;
      }
      cVar2 = *param_1;
    }
  }
  param_1 = (char *)0x0;
LAB_141907253:
  return param_1 != (char *)0x0;
}

// CompareStrings<wchar_t> @ 1419072a0

bool __cdecl
TextFilterInternal::CompareStrings<wchar_t>
          (wchar_t *param_1,int param_2,wchar_t *param_3,int param_4,
          ETextFilterTextComparisonMode param_5,Type param_6)

{
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  bool bVar4;
  
  if (param_6 == CaseSensitive) {
    if (param_5 == Exact) {
      iVar1 = wcscmp(param_1,param_3);
LAB_1419073fa:
      return iVar1 == 0;
    }
    if (param_5 == Partial) {
      pwVar3 = wcsstr(param_1,param_3);
      return pwVar3 != (wchar_t *)0x0;
    }
    if (param_5 == StartsWith) {
      bVar4 = false;
      if (param_4 < 0) {
        sVar2 = wcslen(param_3);
        param_4 = (int)sVar2;
        bVar4 = param_4 < 0;
      }
      if (param_4 == 0 || bVar4) {
        return false;
      }
    }
    else {
      if (param_5 != EndsWith) {
        return false;
      }
      if (param_2 < 0) {
        sVar2 = wcslen(param_1);
        param_2 = (int)sVar2;
      }
      if (param_4 < 0) {
        sVar2 = wcslen(param_3);
        param_4 = (int)sVar2;
      }
      if (param_2 < 1) {
        return false;
      }
      if (param_2 < param_4) {
        return false;
      }
      param_1 = param_1 + (param_2 - param_4);
    }
    iVar1 = wcsncmp(param_1,param_3,(longlong)param_4);
  }
  else {
    if (param_5 == Exact) {
      iVar1 = FGenericPlatformStricmp::Stricmp(param_1,param_3);
      goto LAB_1419073fa;
    }
    if (param_5 == Partial) {
      pwVar3 = TCString<wchar_t>::Stristr(param_1,param_3);
      return pwVar3 != (wchar_t *)0x0;
    }
    if (param_5 == StartsWith) {
      bVar4 = false;
      if (param_4 < 0) {
        sVar2 = wcslen(param_3);
        param_4 = (int)sVar2;
        bVar4 = param_4 < 0;
      }
      if (param_4 == 0 || bVar4) {
        return false;
      }
      iVar1 = FGenericPlatformStricmp::Strnicmp(param_1,param_3,(longlong)param_4);
    }
    else {
      if (param_5 != EndsWith) {
        return false;
      }
      if (param_2 < 0) {
        sVar2 = wcslen(param_1);
        param_2 = (int)sVar2;
      }
      if (param_4 < 0) {
        sVar2 = wcslen(param_3);
        param_4 = (int)sVar2;
      }
      if (param_2 < 1) {
        return false;
      }
      if (param_2 < param_4) {
        return false;
      }
      iVar1 = FGenericPlatformStricmp::Strnicmp
                        (param_1 + (param_2 - param_4),param_3,(longlong)param_4);
    }
  }
  if (iVar1 != 0) {
    return false;
  }
  return true;
}

// ConsumeOperator<TextFilterExpressionParser::FAnd> @ 141907510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FAnd>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  wchar_t **ppwVar1;
  undefined1 auStack_b8 [32];
  TOptional<TStringToken<wchar_t>_> local_98;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  ppwVar1 = FAnd::Monikers;
  do {
    TTokenStream<wchar_t>::ParseToken
              (this,&local_98,(wchar_t *)*ppwVar1,(TStringToken<wchar_t> *)0x0);
    if (local_98.bIsSet != false) {
      local_78._16_8_ = &___7__FInlineDataStorage_UFAnd_TextFilterExpressionParser___Impl__6B_;
      local_78._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
           ::__l2::Global.A;
      local_78._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
           ::__l2::Global.B;
      local_78._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
           ::__l2::Global.C;
      local_78._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
           ::__l2::Global.D;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_1,&local_98.TypedValue,(FExpressionNode *)local_78);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_78);
    }
    ppwVar1 = ppwVar1 + 1;
  } while ((FEventNode **)ppwVar1 != &CpuProfilerEventBatchV3Event);
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeOperator<TextFilterExpressionParser::FEqual> @ 1419075f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FEqual>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  wchar_t **ppwVar1;
  undefined1 auStack_b8 [32];
  TOptional<TStringToken<wchar_t>_> local_98;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  ppwVar1 = FEqual::Monikers;
  do {
    TTokenStream<wchar_t>::ParseToken(this,&local_98,*ppwVar1,(TStringToken<wchar_t> *)0x0);
    if (local_98.bIsSet != false) {
      local_78._16_8_ = &___7__FInlineDataStorage_UFEqual_TextFilterExpressionParser___Impl__6B_;
      local_78._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
           ::__l2::Global.A;
      local_78._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
           ::__l2::Global.B;
      local_78._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
           ::__l2::Global.C;
      local_78._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
           ::__l2::Global.D;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_1,&local_98.TypedValue,(FExpressionNode *)local_78);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_78);
    }
    ppwVar1 = ppwVar1 + 1;
  } while (ppwVar1 != FNotEqual::Monikers);
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeOperator<TextFilterExpressionParser::FGreater> @ 1419076d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FGreater>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken
            (this,&local_78,FGreater::Monikers[0],(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFGreater_TextFilterExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeOperator<TextFilterExpressionParser::FGreaterOrEqual> @ 141907780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FGreaterOrEqual>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  wchar_t **ppwVar1;
  undefined1 auStack_b8 [32];
  TOptional<TStringToken<wchar_t>_> local_98;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  ppwVar1 = FGreaterOrEqual::Monikers;
  do {
    TTokenStream<wchar_t>::ParseToken(this,&local_98,*ppwVar1,(TStringToken<wchar_t> *)0x0);
    if (local_98.bIsSet != false) {
      local_78._16_8_ =
           &___7__FInlineDataStorage_UFGreaterOrEqual_TextFilterExpressionParser___Impl__6B_;
      local_78._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
           ::__l2::Global.A;
      local_78._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
           ::__l2::Global.B;
      local_78._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
           ::__l2::Global.C;
      local_78._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
           ::__l2::Global.D;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_1,&local_98.TypedValue,(FExpressionNode *)local_78);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_78);
    }
    ppwVar1 = ppwVar1 + 1;
  } while (ppwVar1 != FOr::Monikers);
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeOperator<TextFilterExpressionParser::FLess> @ 141907860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FLess>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken(this,&local_78,FLess::Monikers[0],(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ = &___7__FInlineDataStorage_UFLess_TextFilterExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeOperator<TextFilterExpressionParser::FLessOrEqual> @ 141907910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FLessOrEqual>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  wchar_t **ppwVar1;
  undefined1 auStack_b8 [32];
  TOptional<TStringToken<wchar_t>_> local_98;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  ppwVar1 = FLessOrEqual::Monikers;
  do {
    TTokenStream<wchar_t>::ParseToken(this,&local_98,*ppwVar1,(TStringToken<wchar_t> *)0x0);
    if (local_98.bIsSet != false) {
      local_78._16_8_ =
           &___7__FInlineDataStorage_UFLessOrEqual_TextFilterExpressionParser___Impl__6B_;
      local_78._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
           ::__l2::Global.A;
      local_78._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
           ::__l2::Global.B;
      local_78._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
           ::__l2::Global.C;
      local_78._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
           ::__l2::Global.D;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_1,&local_98.TypedValue,(FExpressionNode *)local_78);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_78);
    }
    ppwVar1 = ppwVar1 + 1;
  } while (ppwVar1 != FGreater::Monikers);
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeOperator<TextFilterExpressionParser::FNot> @ 1419079f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FNot>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  wchar_t **ppwVar1;
  undefined1 auStack_b8 [32];
  TOptional<TStringToken<wchar_t>_> local_98;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  ppwVar1 = FNot::Monikers;
  do {
    TTokenStream<wchar_t>::ParseToken
              (this,&local_98,(wchar_t *)*ppwVar1,(TStringToken<wchar_t> *)0x0);
    if (local_98.bIsSet != false) {
      local_78._16_8_ = &___7__FInlineDataStorage_UFNot_TextFilterExpressionParser___Impl__6B_;
      local_78._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
           ::__l2::Global.A;
      local_78._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
           ::__l2::Global.B;
      local_78._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
           ::__l2::Global.C;
      local_78._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
           ::__l2::Global.D;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_1,&local_98.TypedValue,(FExpressionNode *)local_78);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_78);
    }
    ppwVar1 = ppwVar1 + 1;
  } while ((FEventNode **)ppwVar1 != &CpuProfilerEndThreadEvent);
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeOperator<TextFilterExpressionParser::FNotEqual> @ 141907ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FNotEqual>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  wchar_t **ppwVar1;
  undefined1 auStack_b8 [32];
  TOptional<TStringToken<wchar_t>_> local_98;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  ppwVar1 = FNotEqual::Monikers;
  do {
    TTokenStream<wchar_t>::ParseToken(this,&local_98,*ppwVar1,(TStringToken<wchar_t> *)0x0);
    if (local_98.bIsSet != false) {
      local_78._16_8_ = &___7__FInlineDataStorage_UFNotEqual_TextFilterExpressionParser___Impl__6B_;
      local_78._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
           ::__l2::Global.A;
      local_78._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
           ::__l2::Global.B;
      local_78._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
           ::__l2::Global.C;
      local_78._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
           ::__l2::Global.D;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_1,&local_98.TypedValue,(FExpressionNode *)local_78);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_78);
    }
    ppwVar1 = ppwVar1 + 1;
  } while (ppwVar1 != FLess::Monikers);
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeOperator<TextFilterExpressionParser::FOr> @ 141907bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FOr>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  wchar_t **ppwVar1;
  undefined1 auStack_b8 [32];
  TOptional<TStringToken<wchar_t>_> local_98;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  ppwVar1 = FOr::Monikers;
  do {
    TTokenStream<wchar_t>::ParseToken(this,&local_98,*ppwVar1,(TStringToken<wchar_t> *)0x0);
    if (local_98.bIsSet != false) {
      local_78._16_8_ = &___7__FInlineDataStorage_UFOr_TextFilterExpressionParser___Impl__6B_;
      local_78._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
           ::__l2::Global.A;
      local_78._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
           ::__l2::Global.B;
      local_78._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
           ::__l2::Global.C;
      local_78._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
           ::__l2::Global.D;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_1,&local_98.TypedValue,(FExpressionNode *)local_78);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_78);
    }
    ppwVar1 = ppwVar1 + 1;
  } while (ppwVar1 != FAnd::Monikers);
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeOperator<TextFilterExpressionParser::FSubExpressionEnd> @ 141907c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FSubExpressionEnd>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken
            (this,&local_78,FSubExpressionEnd::Monikers[0],(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ =
         &___7__FInlineDataStorage_UFSubExpressionEnd_TextFilterExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeOperator<TextFilterExpressionParser::FSubExpressionStart> @ 141907d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FSubExpressionStart>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_98 [32];
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseToken
            (this,&local_78,FSubExpressionStart::Monikers[0],(TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_58._16_8_ =
         &___7__FInlineDataStorage_UFSubExpressionStart_TextFilterExpressionParser___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
         ::__l2::Global.D;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// DefaultConstructItems<FTrackedActivityManager::FInfo,int> @ 141908150

void __cdecl DefaultConstructItems<FTrackedActivityManager::FInfo,int>(void *param_1,int param_2)

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

// DefaultConstructItems<FABTest::FSample,int> @ 141908180

void __cdecl DefaultConstructItems<FABTest::FSample,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x20);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x80;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>,int> @ 1419090e0

void __cdecl
DestructItems<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>,int>
          (TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x10);
    param_1 = (TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>
               *)(&param_1->field_0x10 + 0x18);
  }
  return;
}

// DestructItems<FCsvABTest::FCVarABData,int> @ 141909120

void __cdecl DestructItems<FCsvABTest::FCVarABData,int>(FCVarABData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->OriginalValue).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->CVarName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FCsvEvent,int> @ 141909170

void __cdecl DestructItems<FCsvEvent,int>(FCsvEvent *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->EventText).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FCsvProcessedEvent,int> @ 1419091b0

void __cdecl DestructItems<FCsvProcessedEvent,int>(FCsvProcessedEvent *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->EventText).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FTrackedActivityManager::FInfo,int> @ 1419091f0

void __cdecl DestructItems<FTrackedActivityManager::FInfo,int>(FInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Status).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FModuleDiskInfo,int> @ 141909230

void __cdecl DestructItems<FModuleDiskInfo,int>(FModuleDiskInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->FilePath;
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

// DestructItems<FModuleStatus,int> @ 141909270

void __cdecl DestructItems<FModuleStatus,int>(FModuleStatus *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->FilePath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FABTest::FSample,int> @ 1419092c0

void __cdecl DestructItems<FABTest::FSample,int>(FSample *param_1,int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->InResamples).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)>,int> @ 141909300

void __cdecl
DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)>,int>
          (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)> *param_1
          ,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)>,int> @ 141909350

void __cdecl
DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)>,int>
          (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)>
           *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FCsvProfilerThreadData,1>,int> @ 1419093a0

void __cdecl
DestructItems<TSharedPtr<FCsvProfilerThreadData,1>,int>
          (TSharedPtr<FCsvProfilerThreadData,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<FCsvProfilerThreadData,1>,int> @ 1419093e0

void __cdecl
DestructItems<TWeakPtr<FCsvProfilerThreadData,1>,int>
          (TWeakPtr<FCsvProfilerThreadData,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRemoteConfigAsyncCachedWriteTask,int> @ 141909430

void __cdecl
DestructItems<FRemoteConfigAsyncCachedWriteTask,int>
          (FRemoteConfigAsyncCachedWriteTask *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Contents).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Filename).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Evaluate<ITextFilterExpressionContext> @ 14190d2c0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
ExpressionParser::Evaluate<ITextFilterExpressionContext>
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_> *param_1,
          TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *param_2,
          ITextFilterExpressionContext *param_3)

{
  TIOperatorEvaluationEnvironment<wchar_t> local_28;
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *local_20;
  ITextFilterExpressionContext *local_18;
  
  local_28 = (TIOperatorEvaluationEnvironment<wchar_t>)
             &___7__TOperatorEvaluationEnvironment_VITextFilterExpressionContext___W__6B_;
  local_20 = param_2;
  local_18 = param_3;
  Evaluate<wchar_t>(__return_storage_ptr__,param_1,&local_28);
  return __return_storage_ptr__;
}

// FindByPredicate<TMap<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>_>_const_&,`UE::Core::FURLRequestFilter::IsRequestAllowed'::__l2::<lambda_1>_> @ 14190d300

TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> * __cdecl
AlgoImpl::
FindByPredicate<TMap<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>_>_const_&,_UE::Core::FURLRequestFilter::IsRequestAllowed_::__l2::<lambda_1>_>
          (TMap<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>_>
           *param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> *pTVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar5 = 1;
  iVar14 = 0;
  iVar6 = 0;
  if (iVar11 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar6 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14190d39d;
      uVar10 = puVar15[lVar8 + 1];
    }
    uVar5 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (int)lVar8 + -1 + iVar14;
    if (iVar11 < iVar6) {
      iVar6 = iVar11;
    }
  }
LAB_14190d39d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar12);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar11 < (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> *)
             (*pcVar3)();
    return pTVar7;
  }
  uVar5 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar5) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar12;
      uVar9 = uVar9 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14190d4a0;
      uVar10 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_14190d4a0:
  do {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return (TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> *)0x0;
    }
    iVar11 = *(int *)(*(longlong *)param_1 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    pTVar7 = (TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_> *)
             (*(longlong *)param_1 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    if (1 < iVar11) {
      iVar12 = (param_2->Scheme).Size;
      iVar11 = iVar11 + -1;
      if (iVar12 == iVar11) {
        if ((iVar12 != 0) && (iVar11 != 0)) {
          iVar14 = iVar11;
          if (iVar12 < iVar11) {
            iVar14 = iVar12;
          }
          iVar14 = FGenericPlatformStricmp::Strnicmp
                             ((param_2->Scheme).DataPtr,*(wchar_t **)pTVar7,(longlong)iVar14);
          if (iVar14 != 0) goto LAB_14190d513;
        }
        if (iVar12 == iVar11) {
          return pTVar7;
        }
      }
    }
LAB_14190d513:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// FindLastBy<wchar_t_const_,wchar_t,FIdentityFunctor> @ 14190db30

wchar_t * __cdecl
AlgoImpl::FindLastBy<wchar_t_const_,wchar_t,FIdentityFunctor>
          (wchar_t *param_1,ulong64 param_2,wchar_t *param_3,FIdentityFunctor param_4)

{
  wchar_t *pwVar1;
  
  pwVar1 = param_1 + param_2;
  if (param_1 != pwVar1) {
    do {
      pwVar1 = pwVar1 + -1;
      if (*pwVar1 == *param_3) {
        return pwVar1;
      }
    } while (param_1 != pwVar1);
  }
  return (wchar_t *)0x0;
}

// FindLastByPredicate<wchar_t_const_,bool_(__cdecl*)(wchar_t)> @ 14190db60

wchar_t * __cdecl
AlgoImpl::FindLastByPredicate<wchar_t_const_,bool_(__cdecl*)(wchar_t)>
          (wchar_t *param_1,ulong64 param_2,_func___cdecl_bool_wchar_t *param_3)

{
  wchar_t *pwVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  pwVar3 = param_1 + param_2;
  do {
    if (param_1 == pwVar3) {
      return (wchar_t *)0x0;
    }
    pwVar1 = pwVar3 + -1;
    pwVar3 = pwVar3 + -1;
    bVar2 = (*param_3)(*pwVar1);
  } while (!bVar2);
  return pwVar3;
}

// FindOrAddHeterogeneous<FString,FString,TStringView<wchar_t>,TStringView<wchar_t>_> @ 14190dcb0

FString * __cdecl
FindOrAddHeterogeneous<FString,FString,TStringView<wchar_t>,TStringView<wchar_t>_>
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int local_res8;
  FString local_58;
  undefined1 local_48 [16];
  wchar_t *local_38;
  undefined8 uStack_30;
  
  local_res8 = 0;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_2->Size,param_2->DataPtr);
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar9 = *(undefined1 **)&param_1->field_0x40;
    if (*(undefined1 **)&param_1->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_1->field_0x38;
    }
    iVar2 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & uVar3) * 4);
    while (iVar2 != -1) {
      lVar1 = (longlong)iVar2 * 0x28;
      iVar7 = *(int *)(lVar1 + 8 + *(longlong *)param_1);
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      iVar7 = (int)*(undefined8 *)&param_2->Size;
      if (iVar7 == iVar8) {
        if ((iVar7 != 0) && (iVar8 != 0)) {
          iVar4 = iVar8;
          if (iVar7 < iVar8) {
            iVar4 = iVar7;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            (param_2->DataPtr,*(wchar_t **)(lVar1 + *(longlong *)param_1),
                             (longlong)iVar4);
          if (iVar4 != 0) goto LAB_14190dd77;
        }
        if (iVar7 == iVar8) {
          lVar1 = *(longlong *)param_1 + (longlong)iVar2 * 0x28;
          pFVar5 = (FString *)(lVar1 + 0x10);
          if (lVar1 == 0) {
            pFVar5 = (FString *)0x0;
          }
          if (pFVar5 != (FString *)0x0) {
            return pFVar5;
          }
          break;
        }
      }
LAB_14190dd77:
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)param_1);
    }
  }
  local_38 = param_3->DataPtr;
  uStack_30 = *(undefined8 *)&param_3->Size;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar5 = FString::ConstructFromPtrSize
                     ((FString *)local_48,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  if (&local_58 != pFVar5) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  local_48._0_8_ = &local_58;
  local_48._8_8_ = &local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TStringView<wchar_t>_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,TStringView<wchar_t>_&&> *)&local_res8,
             (bool *)local_48);
  lVar6 = (longlong)local_res8;
  lVar1 = *(longlong *)param_1;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return (FString *)(lVar1 + (lVar6 * 5 + 2) * 8);
}

// ForEach<FConfigFile_const_&,`UE::Core::FURLRequestFilter::UpdateConfig'::__l8::<lambda_1>_> @ 14190df40

void __cdecl
Algo::ForEach<FConfigFile_const_&,_UE::Core::FURLRequestFilter::UpdateConfig_::__l8::<lambda_1>_>
          (FConfigFile *param_1,<lambda_1> *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  int iStack_40;
  
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  uVar8 = (uint)param_1->_padding_;
  plVar1 = &param_1->_padding_;
  iVar9 = 0;
  uVar6 = 1;
  TStack_60.CurrentBitIndex = 0;
  TStack_60.BaseBitIndex = iVar9;
  if (uVar8 != 0) {
    plVar10 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar10 = plVar1;
    }
    uVar3 = (uint)*plVar10;
    while (uVar3 == 0) {
      lVar7 = (longlong)iVar9;
      TStack_60.BaseBitIndex = TStack_60.BaseBitIndex + 0x20;
      iVar9 = iVar9 + 1;
      TStack_60.CurrentBitIndex = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14190dfed;
      uVar3 = *(uint *)((longlong)plVar10 + lVar7 * 4 + 4);
    }
    uVar6 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    TStack_60.CurrentBitIndex = (int)lVar7 + -1 + TStack_60.BaseBitIndex;
    if ((int)uVar8 < TStack_60.CurrentBitIndex) {
      TStack_60.CurrentBitIndex = uVar8;
    }
  }
LAB_14190dfed:
  iStack_40 = (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4);
  TStack_60._padding_ = CONCAT44(uVar6,iVar9);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  uVar8 = (uint)param_1->_padding_;
  iVar9 = (int)uVar8 >> 5;
  uVar6 = uVar8 & 0xffffffe0;
  if ((int)uVar8 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar3 = (uint)param_1->_padding_;
  if (uVar8 != uVar3) {
    plVar10 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar10 = plVar1;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)((longlong)plVar10 + (longlong)iVar9 * 4);
    while (uVar8 == 0) {
      lVar7 = (longlong)iVar9;
      uVar6 = uVar6 + 0x20;
      iVar9 = iVar9 + 1;
      uVar8 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14190e0f9;
      uVar8 = *(uint *)((longlong)plVar10 + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar8 = (int)lVar7 + -1 + uVar6;
    if ((int)uVar3 < (int)uVar8) {
      uVar8 = uVar3;
    }
  }
LAB_14190e0f9:
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  while( true ) {
    if ((int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4) != iStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) break;
    `UE::Core::FURLRequestFilter::UpdateConfig'::__l8::<lambda_1>::operator()
              (param_2,(TTuple<FString,FConfigSection> *)
                       ((longlong)TStack_60.CurrentBitIndex * 0x110 + param_1->_padding_));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GenerateErrorMsg<char> @ 14190e190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FExpressionError * __cdecl
GenerateErrorMsg<char>(FExpressionError *__return_storage_ptr__,TStringToken<char> *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *this;
  FText *pFVar5;
  FExpressionError *pFVar6;
  FTextFormat *pFVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_a8;
  FFormatArgumentValue local_98;
  FString local_78;
  FString local_68;
  FText local_58;
  FString local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  this = FString::FString(&local_48,param_1->TokenEnd);
  iVar8 = (this->Data).ArrayNum;
  iVar4 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar4 = 0;
  }
  iVar8 = iVar4;
  if (10 < iVar4) {
    iVar8 = 10;
  }
  iVar10 = 0;
  if (0 < iVar8) {
    iVar10 = iVar8;
  }
  FString::RemoveAt(this,iVar10,iVar4 - iVar10,No);
  local_78.Data.AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = (this->Data).ArrayNum;
  local_78.Data.ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  FString::ConcatFC(&local_68,&local_78,L"...");
  pFVar5 = FText::FromString(&local_58,&local_68);
  local_98.Type = Text;
  FText::FText((FText *)&local_98.TextValue,pFVar5);
  if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FExpressionError *)(*pcVar2)();
    return pFVar6;
  }
  if (((local_a8.AllocatorInstance.Data <= &local_98) &&
      (&local_98 <
       (FFormatArgumentValue *)
       (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x20))) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FExpressionError *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = local_a8.ArrayNum;
  if (local_a8.ArrayNum == local_a8.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
  }
  local_a8.ArrayNum = iVar4 + 1;
  lVar9 = (longlong)iVar4 * 0x20;
  *(Type *)&local_a8.AllocatorInstance.Data[lVar9].field_0x0 = local_98.Type;
  *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar9 + 8) =
       CONCAT44(local_98.field1_0x8.IntValue._4_4_,local_98.field1_0x8.FloatValue);
  *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar9 + 8) =
       CONCAT44(local_98.field1_0x8.IntValue._4_4_,local_98.field1_0x8.FloatValue);
  *(float *)(local_a8.AllocatorInstance.Data + lVar9 + 8) = local_98.field1_0x8.FloatValue;
  *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar9 + 8) =
       CONCAT44(local_98.field1_0x8.IntValue._4_4_,local_98.field1_0x8.FloatValue);
  *(undefined8 *)&local_a8.AllocatorInstance.Data[lVar9 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_a8.AllocatorInstance.Data + lVar9 + 0x18) = 0;
  if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_a8.AllocatorInstance.Data + lVar9 + 0x10),
                   (FText *)&local_98.TextValue),
     local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"StringFormatter",L"InvalidTokenDefinition",
                      L"Invalid token definition at \'{0}\'");
  pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
  pFVar5 = FText::Format(&local_38,pFVar7,&local_a8);
  (__return_storage_ptr__->Text).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->Text).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (__return_storage_ptr__->Text).Flags = pFVar5->Flags;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GenerateErrorMsg<char8_t> @ 14190e470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FExpressionError * __cdecl
GenerateErrorMsg<char8_t>(FExpressionError *__return_storage_ptr__,TStringToken<char8_t> *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *this;
  FText *pFVar5;
  FExpressionError *pFVar6;
  FTextFormat *pFVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_a8;
  FFormatArgumentValue local_98;
  FString local_78;
  FString local_68;
  FText local_58;
  FString local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  this = FString::FString(&local_48,param_1->TokenEnd);
  iVar8 = (this->Data).ArrayNum;
  iVar4 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar4 = 0;
  }
  iVar8 = iVar4;
  if (10 < iVar4) {
    iVar8 = 10;
  }
  iVar10 = 0;
  if (0 < iVar8) {
    iVar10 = iVar8;
  }
  FString::RemoveAt(this,iVar10,iVar4 - iVar10,No);
  local_78.Data.AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = (this->Data).ArrayNum;
  local_78.Data.ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  FString::ConcatFC(&local_68,&local_78,L"...");
  pFVar5 = FText::FromString(&local_58,&local_68);
  local_98.Type = Text;
  FText::FText((FText *)&local_98.TextValue,pFVar5);
  if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FExpressionError *)(*pcVar2)();
    return pFVar6;
  }
  if (((local_a8.AllocatorInstance.Data <= &local_98) &&
      (&local_98 <
       (FFormatArgumentValue *)
       (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x20))) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FExpressionError *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = local_a8.ArrayNum;
  if (local_a8.ArrayNum == local_a8.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
  }
  local_a8.ArrayNum = iVar4 + 1;
  lVar9 = (longlong)iVar4 * 0x20;
  *(Type *)&local_a8.AllocatorInstance.Data[lVar9].field_0x0 = local_98.Type;
  *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar9 + 8) =
       CONCAT44(local_98.field1_0x8.IntValue._4_4_,local_98.field1_0x8.FloatValue);
  *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar9 + 8) =
       CONCAT44(local_98.field1_0x8.IntValue._4_4_,local_98.field1_0x8.FloatValue);
  *(float *)(local_a8.AllocatorInstance.Data + lVar9 + 8) = local_98.field1_0x8.FloatValue;
  *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar9 + 8) =
       CONCAT44(local_98.field1_0x8.IntValue._4_4_,local_98.field1_0x8.FloatValue);
  *(undefined8 *)&local_a8.AllocatorInstance.Data[lVar9 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_a8.AllocatorInstance.Data + lVar9 + 0x18) = 0;
  if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_a8.AllocatorInstance.Data + lVar9 + 0x10),
                   (FText *)&local_98.TextValue),
     local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"StringFormatter",L"InvalidTokenDefinition",
                      L"Invalid token definition at \'{0}\'");
  pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
  pFVar5 = FText::Format(&local_38,pFVar7,&local_a8);
  (__return_storage_ptr__->Text).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->Text).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (__return_storage_ptr__->Text).Flags = pFVar5->Flags;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GenerateErrorMsg<wchar_t> @ 14190e750

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FExpressionError * __cdecl
GenerateErrorMsg<wchar_t>(FExpressionError *__return_storage_ptr__,TStringToken<wchar_t> *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *this;
  FText *pFVar5;
  FExpressionError *pFVar6;
  FTextFormat *pFVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_a8;
  FFormatArgumentValue local_98;
  FString local_78;
  FString local_68;
  FText local_58;
  FString local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  this = FString::FString(&local_48,param_1->TokenEnd);
  iVar8 = (this->Data).ArrayNum;
  iVar4 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar4 = 0;
  }
  iVar8 = iVar4;
  if (10 < iVar4) {
    iVar8 = 10;
  }
  iVar10 = 0;
  if (0 < iVar8) {
    iVar10 = iVar8;
  }
  FString::RemoveAt(this,iVar10,iVar4 - iVar10,No);
  local_78.Data.AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = (this->Data).ArrayNum;
  local_78.Data.ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  FString::ConcatFC(&local_68,&local_78,L"...");
  pFVar5 = FText::FromString(&local_58,&local_68);
  local_98.Type = Text;
  FText::FText((FText *)&local_98.TextValue,pFVar5);
  if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FExpressionError *)(*pcVar2)();
    return pFVar6;
  }
  if (((local_a8.AllocatorInstance.Data <= &local_98) &&
      (&local_98 <
       (FFormatArgumentValue *)
       (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x20))) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FExpressionError *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = local_a8.ArrayNum;
  if (local_a8.ArrayNum == local_a8.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
  }
  local_a8.ArrayNum = iVar4 + 1;
  lVar9 = (longlong)iVar4 * 0x20;
  *(Type *)&local_a8.AllocatorInstance.Data[lVar9].field_0x0 = local_98.Type;
  *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar9 + 8) =
       CONCAT44(local_98.field1_0x8.IntValue._4_4_,local_98.field1_0x8.FloatValue);
  *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar9 + 8) =
       CONCAT44(local_98.field1_0x8.IntValue._4_4_,local_98.field1_0x8.FloatValue);
  *(float *)(local_a8.AllocatorInstance.Data + lVar9 + 8) = local_98.field1_0x8.FloatValue;
  *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar9 + 8) =
       CONCAT44(local_98.field1_0x8.IntValue._4_4_,local_98.field1_0x8.FloatValue);
  *(undefined8 *)&local_a8.AllocatorInstance.Data[lVar9 + 0x10].field_0x0 = 0;
  *(undefined4 *)(local_a8.AllocatorInstance.Data + lVar9 + 0x18) = 0;
  if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
     (FText::FText((FText *)(local_a8.AllocatorInstance.Data + lVar9 + 0x10),
                   (FText *)&local_98.TextValue),
     local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"StringFormatter",L"InvalidTokenDefinition",
                      L"Invalid token definition at \'{0}\'");
  pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
  pFVar5 = FText::Format(&local_38,pFVar7,&local_a8);
  (__return_storage_ptr__->Text).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->Text).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (__return_storage_ptr__->Text).Flags = pFVar5->Flags;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetBaseFilenameImpl<FString_const_&> @ 14190eee0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
GetBaseFilenameImpl<FString_const_&>(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  longlong lVar10;
  FString local_38;
  FString local_28;
  
  if (param_2) {
    pFVar7 = FPaths::GetCleanFilename(&local_28,param_1);
    FString::FString(__return_storage_ptr__,pFVar7);
  }
  else {
    local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar10 = (longlong)local_38.Data.ArrayNum;
    pFVar8 = (param_1->Data).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar8,lVar10 * 2);
    }
    FString::FString(__return_storage_ptr__,&local_38);
    local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar5 = FString::Find(__return_storage_ptr__,L".",1,CaseSensitive,FromEnd,-1);
  if (iVar5 != -1) {
    if (!param_2) {
      iVar6 = (__return_storage_ptr__->Data).ArrayNum;
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      if (((iVar9 < 0) || (iVar6 < iVar9)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Count >= 0 && Count <= this->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x55b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      pFVar8 = pFVar2 + (longlong)iVar9 * 2;
      do {
        if (pFVar8 == pFVar2) goto LAB_14190f03b;
        pFVar1 = pFVar8 + -2;
        pFVar8 = pFVar8 + -2;
      } while ((*(short *)pFVar1 != 0x2f) && (*(short *)pFVar1 != 0x5c));
      iVar6 = (int)((longlong)pFVar8 - (longlong)pFVar2 >> 1);
      if ((iVar6 != -1) && (iVar5 <= iVar6)) {
        return __return_storage_ptr__;
      }
    }
LAB_14190f03b:
    iVar6 = (__return_storage_ptr__->Data).ArrayNum;
    iVar9 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar9 = 0;
    }
    iVar6 = iVar9;
    if (iVar5 < iVar9) {
      iVar6 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    FString::RemoveAt(__return_storage_ptr__,iVar5,iVar9 - iVar5,Default);
  }
  return __return_storage_ptr__;
}

// GetBaseFilenameImpl<FString> @ 14190f090

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
GetBaseFilenameImpl<FString>(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  bool bVar9;
  FString local_38;
  FString local_28;
  
  bVar9 = !param_2;
  if (bVar9) {
    local_38.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    pFVar6 = &local_38;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
    local_38.Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  else {
    pFVar6 = FPaths::GetCleanFilename(&local_28,param_1);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if ((bVar9) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar9) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar4 = FString::Find(__return_storage_ptr__,L".",1,CaseSensitive,FromEnd,-1);
  if (iVar4 != -1) {
    if (!param_2) {
      iVar5 = (__return_storage_ptr__->Data).ArrayNum;
      iVar8 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar8 = 0;
      }
      if (((iVar8 < 0) || (iVar5 < iVar8)) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("Count >= 0 && Count <= this->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x55b,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      pFVar7 = pFVar2 + (longlong)iVar8 * 2;
      do {
        if (pFVar7 == pFVar2) goto LAB_14190f1eb;
        pFVar1 = pFVar7 + -2;
        pFVar7 = pFVar7 + -2;
      } while ((*(short *)pFVar1 != 0x2f) && (*(short *)pFVar1 != 0x5c));
      iVar5 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 1);
      if ((iVar5 != -1) && (iVar4 <= iVar5)) {
        return __return_storage_ptr__;
      }
    }
LAB_14190f1eb:
    iVar5 = (__return_storage_ptr__->Data).ArrayNum;
    iVar8 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar8 = 0;
    }
    iVar5 = iVar8;
    if (iVar4 < iVar8) {
      iVar5 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    FString::RemoveAt(__return_storage_ptr__,iVar4,iVar8 - iVar4,Default);
  }
  return __return_storage_ptr__;
}

// GetDefaultFormatter<char> @ 14190f240

TStringFormatter<char> * __cdecl GetDefaultFormatter<char>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      TStringFormatter<char>::TStringFormatter<char>
                (&`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::
                  __l2::DefaultFormatter);
      atexit(`GetDefaultFormatter<char>'::__l2::_dynamic_atexit_destructor_for__DefaultFormatter__);
      _Init_thread_footer(&`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2
              ::DefaultFormatter;
    }
  }
  return &`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
          DefaultFormatter;
}

// GetDefaultFormatter<char8_t> @ 14190f2d0

TStringFormatter<char8_t> * __cdecl GetDefaultFormatter<char8_t>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      TStringFormatter<char8_t>::TStringFormatter<char8_t>
                (&`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'
                  ::__l2::DefaultFormatter);
      atexit(`GetDefaultFormatter<char8_t>'::__l2::
             _dynamic_atexit_destructor_for__DefaultFormatter__);
      _Init_thread_footer(&`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'
              ::__l2::DefaultFormatter;
    }
  }
  return &`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::
          __l2::DefaultFormatter;
}

// GetDefaultFormatter<wchar_t> @ 14190f360

TStringFormatter<wchar_t> * __cdecl GetDefaultFormatter<wchar_t>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      TStringFormatter<wchar_t>::TStringFormatter<wchar_t>
                (&`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'
                  ::__l2::DefaultFormatter);
      atexit(`GetDefaultFormatter<wchar_t>'::__l2::
             _dynamic_atexit_destructor_for__DefaultFormatter__);
      _Init_thread_footer(&`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'
              ::__l2::DefaultFormatter;
    }
  }
  return &`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::
          __l2::DefaultFormatter;
}

// HeapSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_> @ 14190f910

void __cdecl
AlgoImpl::HeapSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
          (float *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<float,TLess<void>_> param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
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
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14190f9f2:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            fVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = fVar1;
            iVar8 = 0;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar7 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] <= param_1[iVar7] &&
                      param_1[iVar7] != param_1[(longlong)iVar4 + 2]) {
                    iVar7 = iVar4;
                  }
                  iVar7 = iVar7 + 1;
                }
                fVar1 = param_1[iVar8];
                if (param_1[iVar7] <= fVar1) break;
                param_1[iVar8] = param_1[iVar7];
                param_1[iVar7] = fVar1;
                iVar8 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] <= param_1[iVar6] &&
          param_1[iVar6] != param_1[(longlong)iVar5 + 2]) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    fVar1 = param_1[iVar4];
    if (param_1[iVar6] <= fVar1) goto LAB_14190f9f2;
    param_1[iVar4] = param_1[iVar6];
    param_1[iVar6] = fVar1;
    iVar5 = iVar6 * 2 + 1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<`FModuleManager::UnloadModulesAtShutdown'::__l2::FModulePair,int,FIdentityFunctor,TDereferenceWrapper<`FModuleManager::UnloadModulesAtShutdown'::__l2::FModulePair,TLess<void>_>_> @ 14190faa0

void __cdecl
AlgoImpl::
HeapSortInternal<_FModuleManager::UnloadModulesAtShutdown_::__l2::FModulePair,int,FIdentityFunctor,TDereferenceWrapper<_FModuleManager::UnloadModulesAtShutdown_::__l2::FModulePair,TLess<void>_>_>
          (FModulePair *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_FModuleManager::UnloadModulesAtShutdown(void)_::_2_::FModulePair,TLess<void>_>
          param_4)

{
  FModulePair *pFVar1;
  FModulePair *pFVar2;
  IModuleInterface *pIVar3;
  code *pcVar4;
  FName FVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FModulePair *pFVar15;
  longlong lVar16;
  int iVar17;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar17 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_14190fbad:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar16 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar15 = param_1 + lVar16;
          do {
            iVar17 = pFVar15->LoadOrder;
            uVar7 = *(undefined4 *)&pFVar15->field_0xc;
            pIVar3 = param_1->Module;
            FVar5 = param_1->ModuleName;
            iVar11 = param_1->LoadOrder;
            uVar9 = *(undefined4 *)&param_1->field_0xc;
            param_1->ModuleName = pFVar15->ModuleName;
            param_1->LoadOrder = iVar17;
            *(undefined4 *)&param_1->field_0xc = uVar7;
            param_1->Module = pFVar15->Module;
            pFVar15->ModuleName = FVar5;
            pFVar15->LoadOrder = iVar11;
            *(undefined4 *)&pFVar15->field_0xc = uVar9;
            pFVar15->Module = pIVar3;
            iVar17 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar17 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (param_1[iVar13].LoadOrder < param_1[(longlong)iVar11 + 2].LoadOrder) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar1 = param_1 + iVar13;
                if (param_1[iVar17].LoadOrder <= pFVar1->LoadOrder) break;
                iVar11 = pFVar1->LoadOrder;
                uVar7 = *(undefined4 *)&pFVar1->field_0xc;
                pIVar3 = param_1[iVar17].Module;
                pFVar2 = param_1 + iVar17;
                FVar5 = pFVar2->ModuleName;
                iVar14 = pFVar2->LoadOrder;
                uVar9 = *(undefined4 *)&pFVar2->field_0xc;
                pFVar2 = param_1 + iVar17;
                pFVar2->ModuleName = pFVar1->ModuleName;
                pFVar2->LoadOrder = iVar11;
                *(undefined4 *)&pFVar2->field_0xc = uVar7;
                param_1[iVar17].Module = pFVar1->Module;
                pFVar1->ModuleName = FVar5;
                pFVar1->LoadOrder = iVar14;
                *(undefined4 *)&pFVar1->field_0xc = uVar9;
                pFVar1->Module = pIVar3;
                iVar17 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar16 = lVar16 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar17 + -2;
      iVar17 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar14 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (param_1[iVar14].LoadOrder < param_1[(longlong)iVar12 + 2].LoadOrder) {
        iVar14 = iVar12;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar15 = param_1 + iVar14;
    if (param_1[iVar11].LoadOrder <= pFVar15->LoadOrder) goto LAB_14190fbad;
    iVar6 = pFVar15->LoadOrder;
    uVar7 = *(undefined4 *)&pFVar15->field_0xc;
    iVar12 = iVar14 * 2 + 1;
    pIVar3 = param_1[iVar11].Module;
    pFVar1 = param_1 + iVar11;
    FVar5 = pFVar1->ModuleName;
    iVar8 = pFVar1->LoadOrder;
    uVar9 = *(undefined4 *)&pFVar1->field_0xc;
    pFVar1 = param_1 + iVar11;
    pFVar1->ModuleName = pFVar15->ModuleName;
    pFVar1->LoadOrder = iVar6;
    *(undefined4 *)&pFVar1->field_0xc = uVar7;
    param_1[iVar11].Module = pFVar15->Module;
    pFVar15->ModuleName = FVar5;
    pFVar15->LoadOrder = iVar8;
    *(undefined4 *)&pFVar15->field_0xc = uVar9;
    pFVar15->Module = pIVar3;
    iVar11 = iVar14;
  } while( true );
}

// IndexOfBy<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,FIdentityFunctor> @ 14190fcc0

int __cdecl
AlgoImpl::IndexOfBy<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,FIdentityFunctor>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1,FGuid *param_2,
          FIdentityFunctor param_3)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data + 8;
    uVar3 = uVar2;
    do {
      if (((param_2->D == *(uint *)(pFVar1 + 4) && param_2->B == *(uint *)(pFVar1 + -4)) &&
          param_2->A == *(uint *)(pFVar1 + -8)) && param_2->C == *(uint *)pFVar1) {
        return (int)uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      pFVar1 = pFVar1 + 0x10;
    } while ((longlong)uVar2 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// IntToStringBuffer<char> @ 14190fd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TextFilterUtils::IntToStringBuffer<char>(char *param_1,int param_2,int param_3)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [30];
  char acStack_3a [16];
  char local_2a [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_2a[1] = 0;
  lVar3 = -(longlong)param_2;
  if (-1 < param_2) {
    lVar3 = (longlong)param_2;
  }
  pcVar2 = local_2a + 1;
  iVar4 = 0xf;
  do {
    iVar5 = iVar4;
    iVar4 = iVar5 + -1;
    pcVar2 = pcVar2 + -1;
    lVar1 = lVar3 / 10;
    *pcVar2 = (char)lVar3 + (char)lVar1 * -10 + '0';
    lVar3 = lVar1;
  } while (lVar1 != 0);
  if (param_2 < 0) {
    iVar4 = iVar5 + -2;
    acStack_3a[iVar5] = '-';
  }
  iVar5 = 0xf - iVar4;
  if (iVar5 < param_3) {
    strncpy(param_1,acStack_3a + (longlong)iVar4 + 2,(longlong)iVar5 + 1);
    param_1[iVar5] = '\0';
  }
  else if (0 < param_3) {
    *param_1 = '\0';
  }
  return;
}

// IntToStringBuffer<wchar_t> @ 14190fe50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TextFilterUtils::IntToStringBuffer<wchar_t>(wchar_t *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined1 auStack_68 [28];
  wchar_t awStack_4c [16];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  psVar5 = local_2c + 1;
  local_2c[1] = 0;
  lVar2 = -(longlong)param_2;
  iVar3 = 0xf;
  if (-1 < param_2) {
    lVar2 = (longlong)param_2;
  }
  do {
    iVar4 = iVar3;
    iVar3 = iVar4 + -1;
    psVar5 = psVar5 + -1;
    lVar1 = lVar2 / 10;
    *psVar5 = (short)lVar2 + (short)lVar1 * -10 + 0x30;
    lVar2 = lVar1;
  } while (lVar1 != 0);
  if (param_2 < 0) {
    iVar3 = iVar4 + -2;
    awStack_4c[iVar4] = L'-';
  }
  iVar4 = 0xf - iVar3;
  if (iVar4 < param_3) {
    wcsncpy(param_1,awStack_4c + (longlong)iVar3 + 2,(longlong)iVar4);
    param_1[iVar4] = L'\0';
  }
  else if (0 < param_3) {
    *param_1 = L'\0';
  }
  return;
}

// IntroSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_> @ 14190ff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
          (float *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<float,TLess<void>_> param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float **ppfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auStack_368 [48];
  float *local_338;
  float *local_328;
  float *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar9 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar9;
    memset(local_310,0,0x2e8);
    ppfVar5 = &local_328;
    do {
      pfVar7 = ppfVar5[1];
      pfVar4 = *ppfVar5;
      pfVar1 = ppfVar5[2];
      iVar2 = (int)((longlong)pfVar7 - (longlong)pfVar4 >> 2) + 1;
      local_338._0_4_ = (int)pfVar1;
      pfVar8 = pfVar4;
      if ((int)local_338 != 0) {
LAB_141910030:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          pfVar3 = pfVar7 + 1;
          fVar9 = pfVar8[iVar2 >> 1];
          pfVar8[iVar2 >> 1] = *pfVar8;
          *pfVar8 = fVar9;
          pfVar4 = pfVar8;
LAB_141910060:
          pfVar4 = pfVar4 + 1;
          if (pfVar4 <= pfVar7) goto code_r0x000141910069;
          goto LAB_141910073;
        }
        if (pfVar8 < pfVar7) {
          pfVar1 = pfVar8 + 1;
          do {
            pfVar4 = pfVar8;
            if (pfVar1 <= pfVar7) {
              pfVar3 = pfVar1;
              if (0xf < ((longlong)pfVar7 + (4 - (longlong)pfVar1) & 0xfffffffffffffffcU)) {
                do {
                  fVar9 = *pfVar4;
                  if (*pfVar4 < *pfVar3) {
                    pfVar4 = pfVar3;
                    fVar9 = *pfVar3;
                  }
                  if (fVar9 < pfVar3[1]) {
                    pfVar4 = pfVar3 + 1;
                  }
                  fVar9 = *pfVar4;
                  if (*pfVar4 < pfVar3[2]) {
                    pfVar4 = pfVar3 + 2;
                    fVar9 = pfVar3[2];
                  }
                  if (fVar9 < pfVar3[3]) {
                    pfVar4 = pfVar3 + 3;
                  }
                  pfVar3 = pfVar3 + 4;
                } while (pfVar3 <= pfVar7 + -3);
              }
              for (; pfVar3 <= pfVar7; pfVar3 = pfVar3 + 1) {
                if (*pfVar4 < *pfVar3) {
                  pfVar4 = pfVar3;
                }
              }
            }
            fVar9 = *pfVar4;
            pfVar3 = pfVar7 + -1;
            *pfVar4 = *pfVar7;
            *pfVar7 = fVar9;
            pfVar7 = pfVar3;
          } while (pfVar8 < pfVar3);
        }
        goto LAB_141910136;
      }
LAB_141910125:
      local_338 = pfVar1;
      HeapSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
                (pfVar4,iVar2,param_3,param_4);
LAB_141910136:
      ppfVar5 = ppfVar5 + -3;
    } while (&local_328 <= ppfVar5);
  }
  return;
code_r0x000141910069:
  if (*pfVar4 < *pfVar8 || *pfVar4 == *pfVar8) goto LAB_141910060;
LAB_141910073:
  do {
    pfVar6 = pfVar3;
    pfVar3 = pfVar6 + -1;
    if (pfVar3 <= pfVar8) break;
  } while (*pfVar8 < *pfVar3 || *pfVar8 == *pfVar3);
  if (pfVar4 <= pfVar3) {
    fVar9 = *pfVar4;
    *pfVar4 = *pfVar3;
    *pfVar3 = fVar9;
    goto LAB_141910060;
  }
  fVar9 = *pfVar8;
  *pfVar8 = *pfVar3;
  *pfVar3 = fVar9;
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)pfVar3 + (-4 - (longlong)pfVar8) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pfVar7 - (longlong)pfVar4 & 0xfffffffffffffffcU)) {
    if (pfVar4 < pfVar7) {
      *ppfVar5 = pfVar4;
      ppfVar5[1] = pfVar7;
      *(int *)(ppfVar5 + 2) = (int)local_338;
      ppfVar5 = ppfVar5 + 3;
    }
    if (pfVar3 <= pfVar8 + 1) goto LAB_141910136;
    pfVar7 = pfVar6 + -2;
    pfVar4 = pfVar8;
  }
  else {
    if (pfVar8 + 1 < pfVar3) {
      *ppfVar5 = pfVar8;
      ppfVar5[1] = pfVar6 + -2;
      *(int *)(ppfVar5 + 2) = (int)local_338;
      ppfVar5 = ppfVar5 + 3;
    }
    if (pfVar7 <= pfVar4) goto LAB_141910136;
  }
  iVar2 = (int)((longlong)pfVar7 - (longlong)pfVar4 >> 2) + 1;
  pfVar8 = pfVar4;
  if ((int)local_338 == 0) goto LAB_141910125;
  goto LAB_141910030;
}

// IntroSortInternal<`FModuleManager::UnloadModulesAtShutdown'::__l2::FModulePair,int,FIdentityFunctor,TDereferenceWrapper<`FModuleManager::UnloadModulesAtShutdown'::__l2::FModulePair,TLess<void>_>_> @ 141910220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FModuleManager::UnloadModulesAtShutdown_::__l2::FModulePair,int,FIdentityFunctor,TDereferenceWrapper<_FModuleManager::UnloadModulesAtShutdown_::__l2::FModulePair,TLess<void>_>_>
          (FModulePair *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_FModuleManager::UnloadModulesAtShutdown(void)_::_2_::FModulePair,TLess<void>_>
          param_4)

{
  FModulePair *pFVar1;
  IModuleInterface *pIVar2;
  undefined8 uVar3;
  FName FVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  FModulePair *pFVar11;
  FModulePair *pFVar12;
  FModulePair *pFVar13;
  FModulePair *pFVar14;
  FModulePair *pFVar15;
  FModulePair *pFVar16;
  FModulePair **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FModulePair *local_348;
  FModulePair *local_338;
  FModulePair *local_330;
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
    ppFVar17 = &local_338;
    do {
      pFVar11 = ppFVar17[1];
      pFVar16 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      local_348._0_4_ = (int)pFVar1;
      iVar10 = (int)(((longlong)pFVar11 - (longlong)pFVar16) / 0x18) + 1;
      pFVar15 = pFVar16;
      if ((int)local_348 != 0) {
LAB_1419102f0:
        if (8 < iVar10) {
          iVar5 = pFVar15->LoadOrder;
          uVar6 = *(undefined4 *)&pFVar15->field_0xc;
          pFVar13 = pFVar11 + 1;
          iVar10 = iVar10 / 2;
          pFVar16 = pFVar15 + iVar10;
          FVar4 = pFVar16->ModuleName;
          iVar7 = pFVar16->LoadOrder;
          uVar8 = *(undefined4 *)&pFVar16->field_0xc;
          pIVar2 = pFVar15[iVar10].Module;
          pFVar16 = pFVar15 + iVar10;
          pFVar16->ModuleName = pFVar15->ModuleName;
          pFVar16->LoadOrder = iVar5;
          *(undefined4 *)&pFVar16->field_0xc = uVar6;
          pFVar15[iVar10].Module = pFVar15->Module;
          pFVar15->ModuleName = FVar4;
          pFVar15->LoadOrder = iVar7;
          *(undefined4 *)&pFVar15->field_0xc = uVar8;
          pFVar15->Module = pIVar2;
          pFVar16 = pFVar15;
LAB_141910340:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar11) goto code_r0x000141910349;
          goto LAB_141910353;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar11; pFVar11 = pFVar11 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar11) {
            if (pFVar1->LoadOrder < pFVar16->LoadOrder) {
              pFVar16 = pFVar1;
            }
          }
          FVar4 = pFVar16->ModuleName;
          iVar5 = pFVar16->LoadOrder;
          uVar8 = *(undefined4 *)&pFVar16->field_0xc;
          pIVar2 = pFVar16->Module;
          iVar10 = pFVar11->LoadOrder;
          uVar6 = *(undefined4 *)&pFVar11->field_0xc;
          pFVar16->ModuleName = pFVar11->ModuleName;
          pFVar16->LoadOrder = iVar10;
          *(undefined4 *)&pFVar16->field_0xc = uVar6;
          pFVar16->Module = pFVar11->Module;
          pFVar11->ModuleName = FVar4;
          pFVar11->LoadOrder = iVar5;
          *(undefined4 *)&pFVar11->field_0xc = uVar8;
          pFVar11->Module = pIVar2;
        }
        goto LAB_141910475;
      }
LAB_141910466:
      local_348 = pFVar1;
      HeapSortInternal<_FModuleManager::UnloadModulesAtShutdown_::__l2::FModulePair,int,FIdentityFunctor,TDereferenceWrapper<_FModuleManager::UnloadModulesAtShutdown_::__l2::FModulePair,TLess<void>_>_>
                (pFVar16,iVar10,param_3,param_4);
LAB_141910475:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x000141910349:
  if (pFVar15->LoadOrder <= pFVar12[1].LoadOrder) goto LAB_141910340;
LAB_141910353:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar15) break;
  } while (pFVar14[-1].LoadOrder <= pFVar15->LoadOrder);
  uVar3 = *(undefined8 *)&pFVar14[-1].LoadOrder;
  if (pFVar16 <= pFVar13) {
    FVar4 = pFVar16->ModuleName;
    iVar10 = pFVar12[1].LoadOrder;
    uVar6 = *(undefined4 *)&pFVar12[1].field_0xc;
    pIVar2 = pFVar12[1].Module;
    pFVar16->ModuleName = pFVar13->ModuleName;
    *(undefined8 *)&pFVar12[1].LoadOrder = uVar3;
    pFVar12[1].Module = pFVar14[-1].Module;
    pFVar13->ModuleName = FVar4;
    pFVar14[-1].LoadOrder = iVar10;
    *(undefined4 *)&pFVar14[-1].field_0xc = uVar6;
    pFVar14[-1].Module = pIVar2;
    goto LAB_141910340;
  }
  FVar4 = pFVar15->ModuleName;
  iVar10 = pFVar15->LoadOrder;
  uVar6 = *(undefined4 *)&pFVar15->field_0xc;
  pIVar2 = pFVar15->Module;
  lVar9 = (longlong)pFVar13 + (-0x18 - (longlong)pFVar15);
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  pFVar15->ModuleName = pFVar13->ModuleName;
  *(undefined8 *)&pFVar15->LoadOrder = uVar3;
  pFVar15->Module = pFVar14[-1].Module;
  pFVar13->ModuleName = FVar4;
  pFVar14[-1].LoadOrder = iVar10;
  *(undefined4 *)&pFVar14[-1].field_0xc = uVar6;
  pFVar14[-1].Module = pIVar2;
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)pFVar11 - (longlong)pFVar16) / 0x18) {
    if (pFVar16 < pFVar11) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar11;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar15 + 1) goto LAB_141910475;
    pFVar11 = pFVar14 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar13) {
      *ppFVar17 = pFVar15;
      ppFVar17[1] = pFVar14 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar11 <= pFVar16) goto LAB_141910475;
  }
  iVar10 = (int)(((longlong)pFVar11 - (longlong)pFVar16) / 0x18) + 1;
  pFVar15 = pFVar16;
  if ((int)local_348 == 0) goto LAB_141910466;
  goto LAB_1419102f0;
}

// LexToString<FAnsiString,double> @ 141910530

FAnsiString * __cdecl
LexToString<FAnsiString,double>(FAnsiString *__return_storage_ptr__,double *param_1)

{
  FAnsiString::PrintfImpl(__return_storage_ptr__,"%f");
  return __return_storage_ptr__;
}

// LexToString<FAnsiString,__int64> @ 141910560

FAnsiString * __cdecl
LexToString<FAnsiString,__int64>(FAnsiString *__return_storage_ptr__,long64 *param_1)

{
  FAnsiString::PrintfImpl(__return_storage_ptr__,"%lld");
  return __return_storage_ptr__;
}

// LexToString<FAnsiString,unsigned___int64> @ 141910590

FAnsiString * __cdecl
LexToString<FAnsiString,unsigned___int64>(FAnsiString *__return_storage_ptr__,ulong64 *param_1)

{
  FAnsiString::PrintfImpl(__return_storage_ptr__,"%llu");
  return __return_storage_ptr__;
}

// LexToString<FUtf8String,double> @ 1419105c0

FUtf8String * __cdecl
LexToString<FUtf8String,double>(FUtf8String *__return_storage_ptr__,double *param_1)

{
  FUtf8String::PrintfImpl(__return_storage_ptr__,(uchar *)"%f");
  return __return_storage_ptr__;
}

// LexToString<FUtf8String,__int64> @ 1419105f0

FUtf8String * __cdecl
LexToString<FUtf8String,__int64>(FUtf8String *__return_storage_ptr__,long64 *param_1)

{
  FUtf8String::PrintfImpl(__return_storage_ptr__,(uchar *)"%lld");
  return __return_storage_ptr__;
}

// LexToString<FUtf8String,unsigned___int64> @ 141910620

FUtf8String * __cdecl
LexToString<FUtf8String,unsigned___int64>(FUtf8String *__return_storage_ptr__,ulong64 *param_1)

{
  FUtf8String::PrintfImpl(__return_storage_ptr__,(uchar *)"%llu");
  return __return_storage_ptr__;
}

// ParseEscapedChar<char> @ 141910840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FExpressionError> * __cdecl
ParseEscapedChar<char>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<char> *param_1,bool param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTokenStream<char> *pTVar5;
  TOptional<FExpressionError> *pTVar6;
  char *pcVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  longlong lVar10;
  undefined1 auStack_198 [32];
  FFormatArgumentValue *local_178;
  FFormatArgumentValue *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_148;
  FFormatArgumentValue local_138;
  FAnsiString local_118;
  undefined1 local_108 [8];
  FText local_100;
  TOptional<TStringToken<char>_> local_f0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  TOptional<TStringToken<char>_> local_a0;
  FTextFormat local_80;
  undefined1 local_68 [24];
  uchar local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  pTVar5 = TExpressionTokenConsumer<char>::GetStream(param_1);
  TTokenStream<char>::ParseSymbol(pTVar5,&local_f0,'`',(TStringToken<char> *)0x0);
  if (local_f0.bIsSet != false) {
    pTVar5 = TExpressionTokenConsumer<char>::GetStream(param_1);
    if ((local_f0.bIsSet == false) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TOptional<FExpressionError> *)(*pcVar2)();
      return pTVar6;
    }
    TTokenStream<char>::ParseSymbol(pTVar5,&local_a0,&local_f0.TypedValue);
    if (local_a0.bIsSet != false) {
      uVar1 = *local_a0.TypedValue.TokenStart;
      pcVar7 = strchr(`struct_TOptional<FExpressionError>___cdecl_ParseEscapedChar<char>(TExpressionTokenConsumer<char>&___ptr64,bool)'
                      ::__l2::ValidEscapeChars,(int)(char)uVar1);
      if (pcVar7 == (char *)0x0) {
        if (param_2) {
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          FAnsiString::AppendChar(&local_118,uVar1);
          local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.ArrayNum = 0;
          local_148.ArrayMax = 0;
          pFVar8 = FText::FromString(&local_d0,&local_118);
          local_138.Type = Text;
          FText::FText((FText *)&local_138.TextValue,pFVar8);
          if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TOptional<FExpressionError> *)(*pcVar2)();
            return pTVar6;
          }
          if (local_148.AllocatorInstance.Data <= &local_138) {
            if (&local_138 <
                (FFormatArgumentValue *)
                (local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x20)) {
              local_160 = (longlong)local_148.ArrayNum;
              local_158 = 0x20;
              local_178 = &local_138;
              local_170 = (FFormatArgumentValue *)local_148.AllocatorInstance.Data;
              local_168 = (longlong)local_148.ArrayMax;
              bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                pTVar6 = (TOptional<FExpressionError> *)(*pcVar2)();
                return pTVar6;
              }
            }
          }
          iVar4 = local_148.ArrayNum;
          if (local_148.ArrayNum == local_148.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_148.AllocatorInstance,&local_148.ArrayMax);
          }
          local_148.ArrayNum = iVar4 + 1;
          lVar10 = (longlong)iVar4 * 0x20;
          *(Type *)&local_148.AllocatorInstance.Data[lVar10].field_0x0 = local_138.Type;
          *(ulonglong *)(local_148.AllocatorInstance.Data + lVar10 + 8) =
               CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
          *(ulonglong *)(local_148.AllocatorInstance.Data + lVar10 + 8) =
               CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
          *(float *)(local_148.AllocatorInstance.Data + lVar10 + 8) =
               local_138.field1_0x8.FloatValue;
          *(ulonglong *)(local_148.AllocatorInstance.Data + lVar10 + 8) =
               CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
          *(undefined8 *)&local_148.AllocatorInstance.Data[lVar10 + 0x10].field_0x0 = 0;
          *(undefined4 *)(local_148.AllocatorInstance.Data + lVar10 + 0x18) = 0;
          if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
             (FText::FText((FText *)(local_148.AllocatorInstance.Data + lVar10 + 0x10),
                           (FText *)&local_138.TextValue),
             local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)
                         *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
          }
          pFVar8 = FText::AsLocalizable_Advanced_LocText
                             (&local_b0,L"StringFormatter",L"InvalidEscapeCharacter",
                              L"Invalid escape character \'{0}\'");
          pFVar9 = FTextFormat::FTextFormat(&local_80,pFVar8,Default);
          pFVar8 = FText::Format(&local_c0,pFVar9,&local_148);
          local_100.TextData.Reference = (pFVar8->TextData).Reference;
          if (local_100.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_100.TextData.Reference + 8))
                      (local_100.TextData.Reference,local_108);
          }
          local_100.Flags = pFVar8->Flags;
          FText::FText((FText *)__return_storage_ptr__,&local_100);
          __return_storage_ptr__->bIsSet = true;
          if (local_100.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
          }
          if (local_c0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
          }
          if (local_b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
          if ((FFormatArgumentValue *)local_148.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_148.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
      }
      else {
        local_68._16_8_ = &___7__FInlineDataStorage_U__TEscapedCharacter_D___Impl__6B_;
        local_68._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char>_>::GetTypeId(void)'
             ::__l2::Global.A;
        local_68._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char>_>::GetTypeId(void)'
             ::__l2::Global.B;
        local_68._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char>_>::GetTypeId(void)'
             ::__l2::Global.C;
        local_68._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char>_>::GetTypeId(void)'
             ::__l2::Global.D;
        local_50 = uVar1;
        if ((local_f0.bIsSet == false) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TOptional<FExpressionError> *)(*pcVar2)();
          return pTVar6;
        }
        TExpressionTokenConsumer<char>::Add
                  (param_1,&local_f0.TypedValue,(FExpressionNode *)local_68);
        FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseEscapedChar<char8_t> @ 141910c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FExpressionError> * __cdecl
ParseEscapedChar<char8_t>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<char8_t> *param_1,bool param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTokenStream<char8_t> *pTVar5;
  TOptional<FExpressionError> *pTVar6;
  char *pcVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  longlong lVar10;
  undefined1 auStack_198 [32];
  FFormatArgumentValue *local_178;
  FFormatArgumentValue *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_148;
  FFormatArgumentValue local_138;
  FUtf8String local_118;
  undefined1 local_108 [8];
  FText local_100;
  TOptional<TStringToken<char8_t>_> local_f0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  TOptional<TStringToken<char8_t>_> local_a0;
  FTextFormat local_80;
  undefined1 local_68 [24];
  uchar local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  pTVar5 = TExpressionTokenConsumer<char8_t>::GetStream(param_1);
  TTokenStream<char8_t>::ParseSymbol(pTVar5,&local_f0,'`',(TStringToken<char8_t> *)0x0);
  if (local_f0.bIsSet != false) {
    pTVar5 = TExpressionTokenConsumer<char8_t>::GetStream(param_1);
    if ((local_f0.bIsSet == false) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TOptional<FExpressionError> *)(*pcVar2)();
      return pTVar6;
    }
    TTokenStream<char8_t>::ParseSymbol(pTVar5,&local_a0,&local_f0.TypedValue);
    if (local_a0.bIsSet != false) {
      uVar1 = *local_a0.TypedValue.TokenStart;
      pcVar7 = strchr((char *)`struct_TOptional<FExpressionError>___cdecl_ParseEscapedChar<char8_t>(TExpressionTokenConsumer<char8_t>&___ptr64,bool)'
                              ::__l2::ValidEscapeChars,(int)(char)uVar1);
      if (pcVar7 == (char *)0x0) {
        if (param_2) {
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          FUtf8String::AppendChar(&local_118,uVar1);
          local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.ArrayNum = 0;
          local_148.ArrayMax = 0;
          pFVar8 = FText::FromString(&local_d0,&local_118);
          local_138.Type = Text;
          FText::FText((FText *)&local_138.TextValue,pFVar8);
          if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TOptional<FExpressionError> *)(*pcVar2)();
            return pTVar6;
          }
          if (local_148.AllocatorInstance.Data <= &local_138) {
            if (&local_138 <
                (FFormatArgumentValue *)
                (local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x20)) {
              local_160 = (longlong)local_148.ArrayNum;
              local_158 = 0x20;
              local_178 = &local_138;
              local_170 = (FFormatArgumentValue *)local_148.AllocatorInstance.Data;
              local_168 = (longlong)local_148.ArrayMax;
              bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                pTVar6 = (TOptional<FExpressionError> *)(*pcVar2)();
                return pTVar6;
              }
            }
          }
          iVar4 = local_148.ArrayNum;
          if (local_148.ArrayNum == local_148.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_148.AllocatorInstance,&local_148.ArrayMax);
          }
          local_148.ArrayNum = iVar4 + 1;
          lVar10 = (longlong)iVar4 * 0x20;
          *(Type *)&local_148.AllocatorInstance.Data[lVar10].field_0x0 = local_138.Type;
          *(ulonglong *)(local_148.AllocatorInstance.Data + lVar10 + 8) =
               CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
          *(ulonglong *)(local_148.AllocatorInstance.Data + lVar10 + 8) =
               CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
          *(float *)(local_148.AllocatorInstance.Data + lVar10 + 8) =
               local_138.field1_0x8.FloatValue;
          *(ulonglong *)(local_148.AllocatorInstance.Data + lVar10 + 8) =
               CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
          *(undefined8 *)&local_148.AllocatorInstance.Data[lVar10 + 0x10].field_0x0 = 0;
          *(undefined4 *)(local_148.AllocatorInstance.Data + lVar10 + 0x18) = 0;
          if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
             (FText::FText((FText *)(local_148.AllocatorInstance.Data + lVar10 + 0x10),
                           (FText *)&local_138.TextValue),
             local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)
                         *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
          }
          pFVar8 = FText::AsLocalizable_Advanced_LocText
                             (&local_b0,L"StringFormatter",L"InvalidEscapeCharacter",
                              L"Invalid escape character \'{0}\'");
          pFVar9 = FTextFormat::FTextFormat(&local_80,pFVar8,Default);
          pFVar8 = FText::Format(&local_c0,pFVar9,&local_148);
          local_100.TextData.Reference = (pFVar8->TextData).Reference;
          if (local_100.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_100.TextData.Reference + 8))
                      (local_100.TextData.Reference,local_108);
          }
          local_100.Flags = pFVar8->Flags;
          FText::FText((FText *)__return_storage_ptr__,&local_100);
          __return_storage_ptr__->bIsSet = true;
          if (local_100.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
          }
          if (local_c0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
          }
          if (local_b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
          if ((FFormatArgumentValue *)local_148.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_148.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
      }
      else {
        local_68._16_8_ = &___7__FInlineDataStorage_U__TEscapedCharacter__Q___Impl__6B_;
        local_68._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.A;
        local_68._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.B;
        local_68._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.C;
        local_68._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.D;
        local_50 = uVar1;
        if ((local_f0.bIsSet == false) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TOptional<FExpressionError> *)(*pcVar2)();
          return pTVar6;
        }
        TExpressionTokenConsumer<char8_t>::Add
                  (param_1,&local_f0.TypedValue,(FExpressionNode *)local_68);
        FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseEscapedChar<wchar_t> @ 141910fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FExpressionError> * __cdecl
ParseEscapedChar<wchar_t>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1,bool param_2)

{
  wchar_t _Ch;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTokenStream<wchar_t> *pTVar4;
  TOptional<FExpressionError> *pTVar5;
  wchar_t *pwVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  longlong lVar9;
  undefined1 auStack_198 [32];
  FFormatArgumentValue *local_178;
  FFormatArgumentValue *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_148;
  FFormatArgumentValue local_138;
  FString local_118;
  undefined1 local_108 [8];
  FText local_100;
  TOptional<TStringToken<wchar_t>_> local_f0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  TOptional<TStringToken<wchar_t>_> local_a0;
  FTextFormat local_80;
  undefined1 local_68 [24];
  wchar_t local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  pTVar4 = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseSymbol(pTVar4,&local_f0,L'`',(TStringToken<wchar_t> *)0x0);
  if (local_f0.bIsSet != false) {
    pTVar4 = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
    if ((local_f0.bIsSet == false) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<FExpressionError> *)(*pcVar1)();
      return pTVar5;
    }
    TTokenStream<wchar_t>::ParseSymbol(pTVar4,&local_a0,&local_f0.TypedValue);
    if (local_a0.bIsSet != false) {
      _Ch = *local_a0.TypedValue.TokenStart;
      pwVar6 = wcschr(`struct_TOptional<FExpressionError>___cdecl_ParseEscapedChar<wchar_t>(TExpressionTokenConsumer<wchar_t>&___ptr64,bool)'
                      ::__l2::ValidEscapeChars,_Ch);
      if (pwVar6 == (wchar_t *)0x0) {
        if (param_2) {
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          FString::AppendChar(&local_118,_Ch);
          local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.ArrayNum = 0;
          local_148.ArrayMax = 0;
          pFVar7 = FText::FromString(&local_d0,&local_118);
          local_138.Type = Text;
          FText::FText((FText *)&local_138.TextValue,pFVar7);
          if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar2 = FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TOptional<FExpressionError> *)(*pcVar1)();
            return pTVar5;
          }
          if (local_148.AllocatorInstance.Data <= &local_138) {
            if (&local_138 <
                (FFormatArgumentValue *)
                (local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x20)) {
              local_160 = (longlong)local_148.ArrayNum;
              local_158 = 0x20;
              local_178 = &local_138;
              local_170 = (FFormatArgumentValue *)local_148.AllocatorInstance.Data;
              local_168 = (longlong)local_148.ArrayMax;
              bVar2 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                pTVar5 = (TOptional<FExpressionError> *)(*pcVar1)();
                return pTVar5;
              }
            }
          }
          iVar3 = local_148.ArrayNum;
          if (local_148.ArrayNum == local_148.ArrayMax) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_148.AllocatorInstance,&local_148.ArrayMax);
          }
          local_148.ArrayNum = iVar3 + 1;
          lVar9 = (longlong)iVar3 * 0x20;
          *(Type *)&local_148.AllocatorInstance.Data[lVar9].field_0x0 = local_138.Type;
          *(ulonglong *)(local_148.AllocatorInstance.Data + lVar9 + 8) =
               CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
          *(ulonglong *)(local_148.AllocatorInstance.Data + lVar9 + 8) =
               CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
          *(float *)(local_148.AllocatorInstance.Data + lVar9 + 8) = local_138.field1_0x8.FloatValue
          ;
          *(ulonglong *)(local_148.AllocatorInstance.Data + lVar9 + 8) =
               CONCAT44(local_138.field1_0x8.IntValue._4_4_,local_138.field1_0x8.FloatValue);
          *(undefined8 *)&local_148.AllocatorInstance.Data[lVar9 + 0x10].field_0x0 = 0;
          *(undefined4 *)(local_148.AllocatorInstance.Data + lVar9 + 0x18) = 0;
          if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
             (FText::FText((FText *)(local_148.AllocatorInstance.Data + lVar9 + 0x10),
                           (FText *)&local_138.TextValue),
             local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)
                         *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
          }
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_b0,L"StringFormatter",L"InvalidEscapeCharacter",
                              L"Invalid escape character \'{0}\'");
          pFVar8 = FTextFormat::FTextFormat(&local_80,pFVar7,Default);
          pFVar7 = FText::Format(&local_c0,pFVar8,&local_148);
          local_100.TextData.Reference = (pFVar7->TextData).Reference;
          if (local_100.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_100.TextData.Reference + 8))
                      (local_100.TextData.Reference,local_108);
          }
          local_100.Flags = pFVar7->Flags;
          FText::FText((FText *)__return_storage_ptr__,&local_100);
          __return_storage_ptr__->bIsSet = true;
          if (local_100.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
          }
          if (local_c0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
          }
          if (local_b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
          }
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
          if ((FFormatArgumentValue *)local_148.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_148.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
      }
      else {
        local_68._16_8_ = &___7__FInlineDataStorage_U__TEscapedCharacter__W___Impl__6B_;
        local_68._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.A;
        local_68._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.B;
        local_68._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.C;
        local_68._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TEscapedCharacter<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.D;
        local_50 = _Ch;
        if ((local_f0.bIsSet == false) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TOptional<FExpressionError> *)(*pcVar1)();
          return pTVar5;
        }
        TExpressionTokenConsumer<wchar_t>::Add
                  (param_1,&local_f0.TypedValue,(FExpressionNode *)local_68);
        FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseIndex<char> @ 141911380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ParseIndex<char>(TOptional<FExpressionError> *__return_storage_ptr__,
                TExpressionTokenConsumer<char> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TTokenStream<char> *this;
  FText *pFVar3;
  TOptional<TStringToken<char>_> *pTVar4;
  TOptional<FExpressionError> *pTVar5;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  undefined4 local_1a0;
  char local_19c;
  TOptional<TStringToken<char>_> local_198;
  undefined4 *local_178 [2];
  FExpressionError local_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  int iStack_14c;
  code *local_148;
  undefined1 *local_140;
  code *local_138;
  undefined4 **local_130;
  code *local_128;
  undefined1 *local_120;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  FExpressionError local_f8;
  TOptional<TStringToken<char>_> local_e8;
  TOptional<TStringToken<char>_> local_c8;
  TOptional<TStringToken<char>_> local_a8;
  TOptional<TStringToken<char>_> local_88;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = TExpressionTokenConsumer<char>::GetStream(param_1);
  TTokenStream<char>::ParseSymbol(this,&local_198,'{',(TStringToken<char> *)0x0);
  if (local_198.bIsSet != false) {
    local_140 = &local_1a8;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseIndex<char>'::__l2::<lambda_2>,enum_EParseState,char>::Call
    ;
    TTokenStream<char>::ParseToken
              (this,&local_e8,(TFunctionRef<EParseState___cdecl(char)> *)&local_148,
               &local_198.TypedValue);
    local_178[0] = &local_1a0;
    local_19c = '\0';
    local_130 = local_178;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseIndex<char>'::__l2::<lambda_3>,enum_EParseState,char>::Call
    ;
    TTokenStream<char>::ParseToken
              (this,&local_c8,(TFunctionRef<EParseState___cdecl(char)> *)&local_138,
               &local_198.TypedValue);
    if (local_19c == '\0') {
      if (param_2) {
        pFVar3 = &GenerateErrorMsg<char>(&local_f8,&local_198.TypedValue)->Text;
        FText::FText((FText *)__return_storage_ptr__,pFVar3);
LAB_1419114dc:
        __return_storage_ptr__->bIsSet = true;
        if (local_f8.Text.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_f8.Text.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
    }
    else {
      local_120 = local_1a7;
      local_128 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParseIndex<char>'::__l2::<lambda_4>,enum_EParseState,char>::
                  Call;
      TTokenStream<char>::ParseToken
                (this,&local_a8,(TFunctionRef<EParseState___cdecl(char)> *)&local_128,
                 &local_198.TypedValue);
      pTVar4 = TTokenStream<char>::ParseSymbol(this,&local_88,'}',&local_198.TypedValue);
      if (pTVar4->bIsSet == false) {
        if (param_2) {
          pFVar3 = &GenerateErrorMsg<char>(&local_168,&local_198.TypedValue)->Text;
          FText::FText((FText *)__return_storage_ptr__,pFVar3);
          local_f8.Text.TextData.Reference =
               (ITextData *)
               CONCAT44(local_168.Text.TextData.Reference._4_4_,
                        local_168.Text.TextData.Reference._0_4_);
          goto LAB_1419114dc;
        }
      }
      else {
        if ((local_19c == '\0') &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TOptional<FExpressionError> *)(*pcVar1)();
          return pTVar5;
        }
        local_168.Text.TextData.Reference._0_4_ = local_1a0;
        uStack_110 = (uint)local_198.TypedValue.TokenStart;
        uStack_10c = (undefined4)((ulonglong)local_198.TypedValue.TokenStart >> 0x20);
        uStack_108 = SUB84(local_198.TypedValue.TokenEnd,0);
        uStack_104 = (undefined4)((ulonglong)local_198.TypedValue.TokenEnd >> 0x20);
        iStack_100 = local_198.TypedValue.LineNumber;
        iStack_fc = local_198.TypedValue.CharacterIndex;
        local_168.Text.Flags = uStack_110;
        local_168.Text._12_4_ = uStack_10c;
        uStack_158 = uStack_108;
        iStack_14c = iStack_fc;
        local_68._16_8_ = &___7__FInlineDataStorage_U__TIndexSpecifier_D___Impl__6B_;
        uStack_154 = uStack_104;
        iStack_150 = iStack_100;
        local_68._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char>_>::GetTypeId(void)'
             ::__l2::Global.A;
        local_68._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char>_>::GetTypeId(void)'
             ::__l2::Global.B;
        local_68._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char>_>::GetTypeId(void)'
             ::__l2::Global.C;
        local_68._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char>_>::GetTypeId(void)'
             ::__l2::Global.D;
        TExpressionTokenConsumer<char>::Add
                  (param_1,&local_198.TypedValue,(FExpressionNode *)local_68);
        FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseIndex<char8_t> @ 1419115e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ParseIndex<char8_t>(TOptional<FExpressionError> *__return_storage_ptr__,
                   TExpressionTokenConsumer<char8_t> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TTokenStream<char8_t> *this;
  FText *pFVar3;
  TOptional<TStringToken<char8_t>_> *pTVar4;
  TOptional<FExpressionError> *pTVar5;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  undefined4 local_1a0;
  char local_19c;
  TOptional<TStringToken<char8_t>_> local_198;
  undefined4 *local_178 [2];
  FExpressionError local_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  int iStack_14c;
  code *local_148;
  undefined1 *local_140;
  code *local_138;
  undefined4 **local_130;
  code *local_128;
  undefined1 *local_120;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  FExpressionError local_f8;
  TOptional<TStringToken<char8_t>_> local_e8;
  TOptional<TStringToken<char8_t>_> local_c8;
  TOptional<TStringToken<char8_t>_> local_a8;
  TOptional<TStringToken<char8_t>_> local_88;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = TExpressionTokenConsumer<char8_t>::GetStream(param_1);
  TTokenStream<char8_t>::ParseSymbol(this,&local_198,'{',(TStringToken<char8_t> *)0x0);
  if (local_198.bIsSet != false) {
    local_140 = &local_1a8;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseIndex<char8_t>'::__l2::<lambda_2>,enum_EParseState,char8_t>
                ::Call;
    TTokenStream<char8_t>::ParseToken
              (this,&local_e8,(TFunctionRef<EParseState___cdecl(char8_t)> *)&local_148,
               &local_198.TypedValue);
    local_178[0] = &local_1a0;
    local_19c = '\0';
    local_130 = local_178;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseIndex<char8_t>'::__l2::<lambda_3>,enum_EParseState,char8_t>
                ::Call;
    TTokenStream<char8_t>::ParseToken
              (this,&local_c8,(TFunctionRef<EParseState___cdecl(char8_t)> *)&local_138,
               &local_198.TypedValue);
    if (local_19c == '\0') {
      if (param_2) {
        pFVar3 = &GenerateErrorMsg<char8_t>(&local_f8,&local_198.TypedValue)->Text;
        FText::FText((FText *)__return_storage_ptr__,pFVar3);
LAB_14191173c:
        __return_storage_ptr__->bIsSet = true;
        if (local_f8.Text.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_f8.Text.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
    }
    else {
      local_120 = local_1a7;
      local_128 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParseIndex<char8_t>'::__l2::<lambda_4>,enum_EParseState,char8_t>
                  ::Call;
      TTokenStream<char8_t>::ParseToken
                (this,&local_a8,(TFunctionRef<EParseState___cdecl(char8_t)> *)&local_128,
                 &local_198.TypedValue);
      pTVar4 = TTokenStream<char8_t>::ParseSymbol(this,&local_88,'}',&local_198.TypedValue);
      if (pTVar4->bIsSet == false) {
        if (param_2) {
          pFVar3 = &GenerateErrorMsg<char8_t>(&local_168,&local_198.TypedValue)->Text;
          FText::FText((FText *)__return_storage_ptr__,pFVar3);
          local_f8.Text.TextData.Reference =
               (ITextData *)
               CONCAT44(local_168.Text.TextData.Reference._4_4_,
                        local_168.Text.TextData.Reference._0_4_);
          goto LAB_14191173c;
        }
      }
      else {
        if ((local_19c == '\0') &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TOptional<FExpressionError> *)(*pcVar1)();
          return pTVar5;
        }
        local_168.Text.TextData.Reference._0_4_ = local_1a0;
        uStack_110 = (uint)local_198.TypedValue.TokenStart;
        uStack_10c = (undefined4)((ulonglong)local_198.TypedValue.TokenStart >> 0x20);
        uStack_108 = SUB84(local_198.TypedValue.TokenEnd,0);
        uStack_104 = (undefined4)((ulonglong)local_198.TypedValue.TokenEnd >> 0x20);
        iStack_100 = local_198.TypedValue.LineNumber;
        iStack_fc = local_198.TypedValue.CharacterIndex;
        local_168.Text.Flags = uStack_110;
        local_168.Text._12_4_ = uStack_10c;
        uStack_158 = uStack_108;
        iStack_14c = iStack_fc;
        local_68._16_8_ = &___7__FInlineDataStorage_U__TIndexSpecifier__Q___Impl__6B_;
        uStack_154 = uStack_104;
        iStack_150 = iStack_100;
        local_68._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.A;
        local_68._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.B;
        local_68._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.C;
        local_68._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.D;
        TExpressionTokenConsumer<char8_t>::Add
                  (param_1,&local_198.TypedValue,(FExpressionNode *)local_68);
        FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseIndex<wchar_t> @ 141911840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ParseIndex<wchar_t>(TOptional<FExpressionError> *__return_storage_ptr__,
                   TExpressionTokenConsumer<wchar_t> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TTokenStream<wchar_t> *this;
  FText *pFVar3;
  TOptional<TStringToken<wchar_t>_> *pTVar4;
  TOptional<FExpressionError> *pTVar5;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  undefined4 local_1a0;
  char local_19c;
  TOptional<TStringToken<wchar_t>_> local_198;
  undefined4 *local_178 [2];
  FExpressionError local_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  int iStack_14c;
  code *local_148;
  undefined1 *local_140;
  code *local_138;
  undefined4 **local_130;
  code *local_128;
  undefined1 *local_120;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  FExpressionError local_f8;
  TOptional<TStringToken<wchar_t>_> local_e8;
  TOptional<TStringToken<wchar_t>_> local_c8;
  TOptional<TStringToken<wchar_t>_> local_a8;
  TOptional<TStringToken<wchar_t>_> local_88;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseSymbol(this,&local_198,L'{',(TStringToken<wchar_t> *)0x0);
  if (local_198.bIsSet != false) {
    local_140 = &local_1a8;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseIndex<wchar_t>'::__l2::<lambda_2>,enum_EParseState,wchar_t>
                ::Call;
    TTokenStream<wchar_t>::ParseToken
              (this,&local_e8,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_148,
               &local_198.TypedValue);
    local_178[0] = &local_1a0;
    local_19c = '\0';
    local_130 = local_178;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseIndex<wchar_t>'::__l2::<lambda_3>,enum_EParseState,wchar_t>
                ::Call;
    TTokenStream<wchar_t>::ParseToken
              (this,&local_c8,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_138,
               &local_198.TypedValue);
    if (local_19c == '\0') {
      if (param_2) {
        pFVar3 = &GenerateErrorMsg<wchar_t>(&local_f8,&local_198.TypedValue)->Text;
        FText::FText((FText *)__return_storage_ptr__,pFVar3);
LAB_1419119a2:
        __return_storage_ptr__->bIsSet = true;
        if (local_f8.Text.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_f8.Text.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
    }
    else {
      local_120 = local_1a7;
      local_128 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParseIndex<wchar_t>'::__l2::<lambda_4>,enum_EParseState,wchar_t>
                  ::Call;
      TTokenStream<wchar_t>::ParseToken
                (this,&local_a8,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_128,
                 &local_198.TypedValue);
      pTVar4 = TTokenStream<wchar_t>::ParseSymbol(this,&local_88,L'}',&local_198.TypedValue);
      if (pTVar4->bIsSet == false) {
        if (param_2) {
          pFVar3 = &GenerateErrorMsg<wchar_t>(&local_168,&local_198.TypedValue)->Text;
          FText::FText((FText *)__return_storage_ptr__,pFVar3);
          local_f8.Text.TextData.Reference =
               (ITextData *)
               CONCAT44(local_168.Text.TextData.Reference._4_4_,
                        local_168.Text.TextData.Reference._0_4_);
          goto LAB_1419119a2;
        }
      }
      else {
        if ((local_19c == '\0') &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TOptional<FExpressionError> *)(*pcVar1)();
          return pTVar5;
        }
        local_168.Text.TextData.Reference._0_4_ = local_1a0;
        uStack_110 = (uint)local_198.TypedValue.TokenStart;
        uStack_10c = (undefined4)((ulonglong)local_198.TypedValue.TokenStart >> 0x20);
        uStack_108 = SUB84(local_198.TypedValue.TokenEnd,0);
        uStack_104 = (undefined4)((ulonglong)local_198.TypedValue.TokenEnd >> 0x20);
        iStack_100 = local_198.TypedValue.LineNumber;
        iStack_fc = local_198.TypedValue.CharacterIndex;
        local_168.Text.Flags = uStack_110;
        local_168.Text._12_4_ = uStack_10c;
        uStack_158 = uStack_108;
        iStack_14c = iStack_fc;
        local_68._16_8_ = &___7__FInlineDataStorage_U__TIndexSpecifier__W___Impl__6B_;
        uStack_154 = uStack_104;
        iStack_150 = iStack_100;
        local_68._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.A;
        local_68._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.B;
        local_68._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.C;
        local_68._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TIndexSpecifier<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.D;
        TExpressionTokenConsumer<wchar_t>::Add
                  (param_1,&local_198.TypedValue,(FExpressionNode *)local_68);
        FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseLiteral<char> @ 141911aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ParseLiteral<char>(TOptional<FExpressionError> *__return_storage_ptr__,
                  TExpressionTokenConsumer<char> *param_1,bool param_2)

{
  TTokenStream<char> *this;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined1 *local_90;
  code *local_88;
  undefined1 **local_80;
  TOptional<TStringToken<char>_> local_78;
  undefined1 local_58 [24];
  char *local_40;
  int local_38;
  uchar auStack_34 [4];
  int iStack_30;
  int iStack_2c;
  int local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98[0] = 1;
  this = TExpressionTokenConsumer<char>::GetStream(param_1);
  local_90 = local_98;
  local_80 = &local_90;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`ParseLiteral<char>'::__l2::<lambda_1>,enum_EParseState,char>::Call;
  TTokenStream<char>::ParseToken
            (this,&local_78,(TFunctionRef<EParseState___cdecl(char)> *)&local_88,
             (TStringToken<char> *)0x0);
  if (local_78.bIsSet != false) {
    local_40 = local_78.TypedValue.TokenStart;
    local_58._16_8_ = &___7__FInlineDataStorage_U__TStringLiteral_D___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char>_>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char>_>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char>_>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char>_>::GetTypeId(void)'
         ::__l2::Global.D;
    local_38 = (int)local_78.TypedValue.TokenEnd;
    auStack_34[0] = local_78.TypedValue.TokenEnd._4_1_;
    auStack_34[1] = local_78.TypedValue.TokenEnd._5_1_;
    auStack_34[2] = local_78.TypedValue.TokenEnd._6_1_;
    auStack_34[3] = local_78.TypedValue.TokenEnd._7_1_;
    iStack_30 = local_78.TypedValue.LineNumber;
    iStack_2c = local_78.TypedValue.CharacterIndex;
    local_28 = (int)local_78.TypedValue.TokenEnd - (int)local_78.TypedValue.TokenStart;
    local_24 = local_78._28_4_;
    TExpressionTokenConsumer<char>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58);
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseLiteral<char8_t> @ 141911bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ParseLiteral<char8_t>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<char8_t> *param_1,bool param_2)

{
  TTokenStream<char8_t> *this;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined1 *local_90;
  code *local_88;
  undefined1 **local_80;
  TOptional<TStringToken<char8_t>_> local_78;
  undefined1 local_58 [24];
  uchar *local_40;
  int local_38;
  uchar auStack_34 [4];
  int iStack_30;
  int iStack_2c;
  int local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98[0] = 1;
  this = TExpressionTokenConsumer<char8_t>::GetStream(param_1);
  local_90 = local_98;
  local_80 = &local_90;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`ParseLiteral<char8_t>'::__l2::<lambda_1>,enum_EParseState,char8_t>
             ::Call;
  TTokenStream<char8_t>::ParseToken
            (this,&local_78,(TFunctionRef<EParseState___cdecl(char8_t)> *)&local_88,
             (TStringToken<char8_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_40 = local_78.TypedValue.TokenStart;
    local_58._16_8_ = &___7__FInlineDataStorage_U__TStringLiteral__Q___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char8_t>_>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char8_t>_>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char8_t>_>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<char8_t>_>::GetTypeId(void)'
         ::__l2::Global.D;
    local_38 = (int)local_78.TypedValue.TokenEnd;
    auStack_34[0] = local_78.TypedValue.TokenEnd._4_1_;
    auStack_34[1] = local_78.TypedValue.TokenEnd._5_1_;
    auStack_34[2] = local_78.TypedValue.TokenEnd._6_1_;
    auStack_34[3] = local_78.TypedValue.TokenEnd._7_1_;
    iStack_30 = local_78.TypedValue.LineNumber;
    iStack_2c = local_78.TypedValue.CharacterIndex;
    local_28 = (int)local_78.TypedValue.TokenEnd - (int)local_78.TypedValue.TokenStart;
    local_24 = local_78._28_4_;
    TExpressionTokenConsumer<char8_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseLiteral<wchar_t> @ 141911cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ParseLiteral<wchar_t>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1,bool param_2)

{
  TTokenStream<wchar_t> *this;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined1 *local_90;
  code *local_88;
  undefined1 **local_80;
  TOptional<TStringToken<wchar_t>_> local_78;
  undefined1 local_58 [24];
  wchar_t *local_40;
  wchar_t *local_38;
  int iStack_30;
  int iStack_2c;
  uchar local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98[0] = 1;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  local_90 = local_98;
  local_80 = &local_90;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`ParseLiteral<wchar_t>'::__l2::<lambda_1>,enum_EParseState,wchar_t>
             ::Call;
  TTokenStream<wchar_t>::ParseToken
            (this,&local_78,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_88,
             (TStringToken<wchar_t> *)0x0);
  if (local_78.bIsSet != false) {
    local_40 = local_78.TypedValue.TokenStart;
    local_58._16_8_ = &___7__FInlineDataStorage_U__TStringLiteral__W___Impl__6B_;
    local_58._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<wchar_t>_>::GetTypeId(void)'
         ::__l2::Global.A;
    local_58._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<wchar_t>_>::GetTypeId(void)'
         ::__l2::Global.B;
    local_58._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<wchar_t>_>::GetTypeId(void)'
         ::__l2::Global.C;
    local_58._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TStringLiteral<wchar_t>_>::GetTypeId(void)'
         ::__l2::Global.D;
    local_38 = local_78.TypedValue.TokenEnd;
    iStack_30 = local_78.TypedValue.LineNumber;
    iStack_2c = local_78.TypedValue.CharacterIndex;
    local_28._0_4_ =
         (undefined4)
         ((longlong)local_78.TypedValue.TokenEnd - (longlong)local_78.TypedValue.TokenStart >> 1);
    local_28[4] = local_78._28_1_;
    local_28[5] = local_78._29_1_;
    local_28[6] = local_78._30_1_;
    local_28[7] = local_78._31_1_;
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_78.TypedValue,(FExpressionNode *)local_58)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_58);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseSpecifier<char> @ 141911dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ParseSpecifier<char>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<char> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TTokenStream<char> *this;
  FText *pFVar3;
  TOptional<TStringToken<char>_> *pTVar4;
  TOptional<FExpressionError> *pTVar5;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196 [6];
  TOptional<TStringToken<char>_> local_190;
  FExpressionError local_170;
  code *local_160;
  undefined1 *local_158;
  code *local_150;
  undefined1 *local_148;
  code *local_140;
  undefined1 *local_138;
  TOptional<TStringToken<char>_> local_130;
  FExpressionError local_110 [2];
  int local_f0;
  int iStack_ec;
  char *pcStack_e8;
  char *pcStack_e0;
  int local_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  TOptional<TStringToken<char>_> local_c8;
  TOptional<TStringToken<char>_> local_a8;
  TOptional<TStringToken<char>_> local_88;
  undefined1 local_68 [24];
  undefined8 *local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  this = TExpressionTokenConsumer<char>::GetStream(param_1);
  TTokenStream<char>::ParseSymbol(this,&local_190,'{',(TStringToken<char> *)0x0);
  if (local_190.bIsSet != false) {
    local_158 = &local_198;
    local_160 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseSpecifier<char>'::__l2::<lambda_2>,enum_EParseState,char>::
                Call;
    TTokenStream<char>::ParseToken
              (this,&local_c8,(TFunctionRef<EParseState___cdecl(char)> *)&local_160,
               &local_190.TypedValue);
    local_148 = &local_197;
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseSpecifier<char>'::__l2::<lambda_3>,enum_EParseState,char>::
                Call;
    TTokenStream<char>::ParseToken
              (this,&local_130,(TFunctionRef<EParseState___cdecl(char)> *)&local_150,
               &local_190.TypedValue);
    if (local_130.bIsSet == false) {
      if (param_2) {
        pFVar3 = &GenerateErrorMsg<char>(local_110,&local_190.TypedValue)->Text;
        FText::FText((FText *)__return_storage_ptr__,pFVar3);
LAB_141911f24:
        __return_storage_ptr__->bIsSet = true;
        if (local_110[0].Text.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_110[0].Text.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
    }
    else {
      local_138 = local_196;
      local_140 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParseSpecifier<char>'::__l2::<lambda_4>,enum_EParseState,char>
                  ::Call;
      TTokenStream<char>::ParseToken
                (this,&local_a8,(TFunctionRef<EParseState___cdecl(char)> *)&local_140,
                 &local_190.TypedValue);
      pTVar4 = TTokenStream<char>::ParseSymbol(this,&local_88,'}',&local_190.TypedValue);
      if (pTVar4->bIsSet == false) {
        if (param_2) {
          pFVar3 = &GenerateErrorMsg<char>(&local_170,&local_190.TypedValue)->Text;
          FText::FText((FText *)__return_storage_ptr__,pFVar3);
          local_110[0].Text.TextData.Reference =
               (ITextData *)
               CONCAT44(local_170.Text.TextData.Reference._4_4_,
                        (int)local_170.Text.TextData.Reference);
          goto LAB_141911f24;
        }
      }
      else {
        if ((local_130.bIsSet == false) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TOptional<FExpressionError> *)(*pcVar1)();
          return pTVar5;
        }
        pcStack_e8 = local_190.TypedValue.TokenStart;
        pcStack_e0 = local_190.TypedValue.TokenEnd;
        local_f0 = local_130.TypedValue.LineNumber;
        iStack_ec = local_130.TypedValue.CharacterIndex;
        local_d8 = local_190.TypedValue.LineNumber;
        iStack_d4 = local_190.TypedValue.CharacterIndex;
        local_d0 = (uint)local_130.TypedValue.TokenEnd - (int)local_130.TypedValue.TokenStart;
        local_170.Text.TextData.Reference._0_4_ = (int)local_130.TypedValue.TokenStart;
        local_170.Text.TextData.Reference._4_4_ = local_130.TypedValue.TokenStart._4_4_;
        local_170.Text.Flags = (uint)local_130.TypedValue.TokenEnd;
        local_170.Text._12_4_ = local_130.TypedValue.TokenEnd._4_4_;
        local_68._16_8_ = &___7__FHeapDataStorage_U__TTokenFormatSpecifier_D___Impl__6B_;
        local_68._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char>_>::GetTypeId(void)'
             ::__l2::Global.A;
        local_68._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char>_>::GetTypeId(void)'
             ::__l2::Global.B;
        local_68._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char>_>::GetTypeId(void)'
             ::__l2::Global.C;
        local_68._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char>_>::GetTypeId(void)'
             ::__l2::Global.D;
        local_50 = operator_new(0x38);
        if (local_50 != (undefined8 *)0x0) {
          *local_50 = CONCAT44(local_170.Text.TextData.Reference._4_4_,
                               (int)local_170.Text.TextData.Reference);
          local_50[1] = CONCAT44(local_170.Text._12_4_,local_170.Text.Flags);
          local_50[2] = _local_f0;
          local_50[3] = pcStack_e8;
          local_50[4] = pcStack_e0;
          local_50[5] = _local_d8;
          local_50[6] = CONCAT44(uStack_cc,local_d0);
        }
        TExpressionTokenConsumer<char>::Add
                  (param_1,&local_190.TypedValue,(FExpressionNode *)local_68);
        FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseSpecifier<char8_t> @ 141912040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ParseSpecifier<char8_t>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<char8_t> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TTokenStream<char8_t> *this;
  FText *pFVar3;
  TOptional<TStringToken<char8_t>_> *pTVar4;
  TOptional<FExpressionError> *pTVar5;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196 [6];
  TOptional<TStringToken<char8_t>_> local_190;
  FExpressionError local_170;
  code *local_160;
  undefined1 *local_158;
  code *local_150;
  undefined1 *local_148;
  code *local_140;
  undefined1 *local_138;
  TOptional<TStringToken<char8_t>_> local_130;
  FExpressionError local_110 [2];
  int local_f0;
  int iStack_ec;
  uchar *puStack_e8;
  uchar *puStack_e0;
  int local_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  TOptional<TStringToken<char8_t>_> local_c8;
  TOptional<TStringToken<char8_t>_> local_a8;
  TOptional<TStringToken<char8_t>_> local_88;
  undefined1 local_68 [24];
  undefined8 *local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  this = TExpressionTokenConsumer<char8_t>::GetStream(param_1);
  TTokenStream<char8_t>::ParseSymbol(this,&local_190,'{',(TStringToken<char8_t> *)0x0);
  if (local_190.bIsSet != false) {
    local_158 = &local_198;
    local_160 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseSpecifier<char8_t>'::__l2::<lambda_2>,enum_EParseState,char8_t>
                ::Call;
    TTokenStream<char8_t>::ParseToken
              (this,&local_c8,(TFunctionRef<EParseState___cdecl(char8_t)> *)&local_160,
               &local_190.TypedValue);
    local_148 = &local_197;
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseSpecifier<char8_t>'::__l2::<lambda_3>,enum_EParseState,char8_t>
                ::Call;
    TTokenStream<char8_t>::ParseToken
              (this,&local_130,(TFunctionRef<EParseState___cdecl(char8_t)> *)&local_150,
               &local_190.TypedValue);
    if (local_130.bIsSet == false) {
      if (param_2) {
        pFVar3 = &GenerateErrorMsg<char8_t>(local_110,&local_190.TypedValue)->Text;
        FText::FText((FText *)__return_storage_ptr__,pFVar3);
LAB_141912194:
        __return_storage_ptr__->bIsSet = true;
        if (local_110[0].Text.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_110[0].Text.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
    }
    else {
      local_138 = local_196;
      local_140 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParseSpecifier<char8_t>'::__l2::<lambda_4>,enum_EParseState,char8_t>
                  ::Call;
      TTokenStream<char8_t>::ParseToken
                (this,&local_a8,(TFunctionRef<EParseState___cdecl(char8_t)> *)&local_140,
                 &local_190.TypedValue);
      pTVar4 = TTokenStream<char8_t>::ParseSymbol(this,&local_88,'}',&local_190.TypedValue);
      if (pTVar4->bIsSet == false) {
        if (param_2) {
          pFVar3 = &GenerateErrorMsg<char8_t>(&local_170,&local_190.TypedValue)->Text;
          FText::FText((FText *)__return_storage_ptr__,pFVar3);
          local_110[0].Text.TextData.Reference =
               (ITextData *)
               CONCAT44(local_170.Text.TextData.Reference._4_4_,
                        (int)local_170.Text.TextData.Reference);
          goto LAB_141912194;
        }
      }
      else {
        if ((local_130.bIsSet == false) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TOptional<FExpressionError> *)(*pcVar1)();
          return pTVar5;
        }
        puStack_e8 = local_190.TypedValue.TokenStart;
        puStack_e0 = local_190.TypedValue.TokenEnd;
        local_f0 = local_130.TypedValue.LineNumber;
        iStack_ec = local_130.TypedValue.CharacterIndex;
        local_d8 = local_190.TypedValue.LineNumber;
        iStack_d4 = local_190.TypedValue.CharacterIndex;
        local_d0 = (uint)local_130.TypedValue.TokenEnd - (int)local_130.TypedValue.TokenStart;
        local_170.Text.TextData.Reference._0_4_ = (int)local_130.TypedValue.TokenStart;
        local_170.Text.TextData.Reference._4_4_ = local_130.TypedValue.TokenStart._4_4_;
        local_170.Text.Flags = (uint)local_130.TypedValue.TokenEnd;
        local_170.Text._12_4_ = local_130.TypedValue.TokenEnd._4_4_;
        local_68._16_8_ = &___7__FHeapDataStorage_U__TTokenFormatSpecifier__Q___Impl__6B_;
        local_68._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.A;
        local_68._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.B;
        local_68._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.C;
        local_68._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char8_t>_>::GetTypeId(void)'
             ::__l2::Global.D;
        local_50 = operator_new(0x38);
        if (local_50 != (undefined8 *)0x0) {
          *local_50 = CONCAT44(local_170.Text.TextData.Reference._4_4_,
                               (int)local_170.Text.TextData.Reference);
          local_50[1] = CONCAT44(local_170.Text._12_4_,local_170.Text.Flags);
          local_50[2] = _local_f0;
          local_50[3] = puStack_e8;
          local_50[4] = puStack_e0;
          local_50[5] = _local_d8;
          local_50[6] = CONCAT44(uStack_cc,local_d0);
        }
        TExpressionTokenConsumer<char8_t>::Add
                  (param_1,&local_190.TypedValue,(FExpressionNode *)local_68);
        FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseSpecifier<wchar_t> @ 1419122b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
ParseSpecifier<wchar_t>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TTokenStream<wchar_t> *this;
  FText *pFVar3;
  TOptional<TStringToken<wchar_t>_> *pTVar4;
  TOptional<FExpressionError> *pTVar5;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196 [6];
  TOptional<TStringToken<wchar_t>_> local_190;
  undefined1 local_170 [16];
  code *local_160;
  undefined1 *local_158;
  code *local_150;
  undefined1 *local_148;
  code *local_140;
  undefined1 *local_138;
  TOptional<TStringToken<wchar_t>_> local_130;
  FExpressionError local_110 [2];
  longlong local_f0;
  wchar_t *pwStack_e8;
  wchar_t *pwStack_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  TOptional<TStringToken<wchar_t>_> local_c8;
  TOptional<TStringToken<wchar_t>_> local_a8;
  TOptional<TStringToken<wchar_t>_> local_88;
  undefined1 local_68 [24];
  longlong *local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  TTokenStream<wchar_t>::ParseSymbol(this,&local_190,L'{',(TStringToken<wchar_t> *)0x0);
  if (local_190.bIsSet != false) {
    local_158 = &local_198;
    local_160 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseSpecifier<wchar_t>'::__l2::<lambda_2>,enum_EParseState,wchar_t>
                ::Call;
    TTokenStream<wchar_t>::ParseToken
              (this,&local_c8,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_160,
               &local_190.TypedValue);
    local_148 = &local_197;
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParseSpecifier<wchar_t>'::__l2::<lambda_3>,enum_EParseState,wchar_t>
                ::Call;
    TTokenStream<wchar_t>::ParseToken
              (this,&local_130,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_150,
               &local_190.TypedValue);
    if (local_130.bIsSet == false) {
      if (param_2) {
        pFVar3 = &GenerateErrorMsg<wchar_t>(local_110,&local_190.TypedValue)->Text;
        FText::FText((FText *)__return_storage_ptr__,pFVar3);
LAB_14191240a:
        __return_storage_ptr__->bIsSet = true;
        if (local_110[0].Text.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_110[0].Text.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
    }
    else {
      local_138 = local_196;
      local_140 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParseSpecifier<wchar_t>'::__l2::<lambda_4>,enum_EParseState,wchar_t>
                  ::Call;
      TTokenStream<wchar_t>::ParseToken
                (this,&local_a8,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_140,
                 &local_190.TypedValue);
      pTVar4 = TTokenStream<wchar_t>::ParseSymbol(this,&local_88,L'}',&local_190.TypedValue);
      if (pTVar4->bIsSet == false) {
        if (param_2) {
          pFVar3 = &GenerateErrorMsg<wchar_t>((FExpressionError *)local_170,&local_190.TypedValue)->
                    Text;
          FText::FText((FText *)__return_storage_ptr__,pFVar3);
          local_110[0].Text.TextData.Reference = (ITextData *)local_170._0_8_;
          goto LAB_14191240a;
        }
      }
      else {
        if ((local_130.bIsSet == false) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TOptional<FExpressionError> *)(*pcVar1)();
          return pTVar5;
        }
        pwStack_e8 = local_190.TypedValue.TokenStart;
        pwStack_e0 = local_190.TypedValue.TokenEnd;
        local_f0._0_4_ = local_130.TypedValue.LineNumber;
        local_f0._4_4_ = local_130.TypedValue.CharacterIndex;
        local_d8._0_4_ = local_190.TypedValue.LineNumber;
        local_d8._4_4_ = local_190.TypedValue.CharacterIndex;
        local_d0 = (undefined4)
                   ((longlong)local_130.TypedValue.TokenEnd -
                    (longlong)local_130.TypedValue.TokenStart >> 1);
        local_170._0_8_ = local_130.TypedValue.TokenStart;
        local_170._8_8_ = local_130.TypedValue.TokenEnd;
        local_68._16_8_ = &___7__FHeapDataStorage_U__TTokenFormatSpecifier__W___Impl__6B_;
        local_68._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.A;
        local_68._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.B;
        local_68._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.C;
        local_68._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<wchar_t>_>::GetTypeId(void)'
             ::__l2::Global.D;
        local_50 = operator_new(0x38);
        if (local_50 != (longlong *)0x0) {
          *local_50 = local_170._0_8_;
          local_50[1] = local_170._8_8_;
          local_50[2] = local_f0;
          local_50[3] = (longlong)pwStack_e8;
          local_50[4] = (longlong)pwStack_e0;
          local_50[5] = local_d8;
          local_50[6] = CONCAT44(uStack_cc,local_d0);
        }
        TExpressionTokenConsumer<wchar_t>::Add
                  (param_1,&local_190.TypedValue,(FExpressionNode *)local_68);
        FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// SetPromise<TUniqueFunction<void___cdecl(void)>_&> @ 141913220

void __cdecl
SetPromise<TUniqueFunction<void___cdecl(void)>_&>
          (TPromise<void> *param_1,TUniqueFunction<void___cdecl(void)> *param_2)

{
  code *pcVar1;
  TFutureState<void> *this;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar4 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_2->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3);
  if ((param_1->State).Object == (TFutureState<void> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->State).Object == (TFutureState<void> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = (param_1->State).Object;
  if (*(TAtomic<bool> *)&this->field_0x68 != (TAtomic<bool>)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FFutureState::MarkComplete((FFutureState *)this);
  return;
}

// SimpleParseString<TStringBuilderBase<wchar_t>_> @ 141913310

bool __cdecl
SimpleParseString<TStringBuilderBase<wchar_t>_>
          (wchar_t **param_1,TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t **ppwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = *param_1;
  if (*pwVar4 == L'\"') {
LAB_141913350:
    wVar2 = pwVar4[1];
    switch(wVar2) {
    case L'\0':
    case L'\t':
    case L'\n':
    case L'\r':
      break;
    default:
      ppwVar3 = &param_2->CurPos;
      if (param_2->End < *ppwVar3 + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_2,1);
      }
      **ppwVar3 = wVar2;
      *ppwVar3 = *ppwVar3 + 1;
      pwVar4 = pwVar4 + 1;
      goto LAB_141913350;
    case L'\"':
      *param_1 = pwVar4 + 2;
      return true;
    case L'\\':
      pwVar1 = pwVar4 + 2;
      pwVar4 = pwVar4 + 2;
      switch(*pwVar1) {
      case L'\"':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\"';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      default:
        goto LAB_141913563;
      case L'/':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'/';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L'\\':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\\';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L'b':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\b';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L'f':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\f';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L'n':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\n';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L'r':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\r';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L't':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\t';
        *ppwVar3 = *ppwVar3 + 1;
      }
      goto LAB_141913350;
    }
  }
LAB_141913563:
  return false;
}

// SimpleParseString<FString> @ 141913670

bool __cdecl SimpleParseString<FString>(wchar_t **param_1,FString *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = *param_1;
  if (*pwVar2 == L'\"') {
LAB_1419136be:
    wVar1 = pwVar2[1];
    pwVar3 = pwVar2 + 1;
    switch(wVar1) {
    case L'\0':
    case L'\t':
    case L'\n':
    case L'\r':
      break;
    default:
switchD_1419136f3_caseD_1:
      FString::AppendChar(param_2,wVar1);
      pwVar2 = pwVar3;
      goto LAB_1419136be;
    case L'\"':
      *param_1 = pwVar2 + 2;
      return true;
    case L'\\':
      pwVar3 = pwVar2 + 2;
      switch(pwVar2[2]) {
      case L'\"':
        FString::AppendChar(param_2,L'\"');
        pwVar2 = pwVar3;
        break;
      default:
        goto LAB_1419137af;
      case L'/':
        FString::AppendChar(param_2,L'/');
        pwVar2 = pwVar3;
        break;
      case L'\\':
        FString::AppendChar(param_2,L'\\');
        pwVar2 = pwVar3;
        break;
      case L'b':
        FString::AppendChar(param_2,L'\b');
        pwVar2 = pwVar3;
        break;
      case L'f':
        FString::AppendChar(param_2,L'\f');
        pwVar2 = pwVar3;
        break;
      case L'n':
        FString::AppendChar(param_2,L'\n');
        pwVar2 = pwVar3;
        break;
      case L'r':
        FString::AppendChar(param_2,L'\r');
        pwVar2 = pwVar3;
        break;
      case L't':
        wVar1 = L'\t';
        goto switchD_1419136f3_caseD_1;
      }
      goto LAB_1419136be;
    }
  }
LAB_1419137af:
  return false;
}

// WriteToUtf8String<300,UE::SourceLocation::FFileAndLineAdapter> @ 1419138c0

TStringBuilderWithBuffer<char8_t,300> * __cdecl
WriteToUtf8String<300,UE::SourceLocation::FFileAndLineAdapter>
          (TStringBuilderWithBuffer<char8_t,300> *__return_storage_ptr__,
          FFileAndLineAdapter *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)&__return_storage_ptr__->field_0x14c;
  TStringBuilderBase<char8_t>::AppendfImpl
            ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,(uchar *)"%hs(%d)");
  return __return_storage_ptr__;
}

// WriteToUtf8String<512,UE::SourceLocation::FFullAdapter> @ 141913910

TStringBuilderWithBuffer<char8_t,512> * __cdecl
WriteToUtf8String<512,UE::SourceLocation::FFullAdapter>
          (TStringBuilderWithBuffer<char8_t,512> *__return_storage_ptr__,FFullAdapter *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  TStringBuilderBase<char8_t>::AppendfImpl
            ((TStringBuilderBase<char8_t> *)__return_storage_ptr__,(uchar *)"%hs(%d:%d) %hs");
  return __return_storage_ptr__;
}

// _Atomic_address_as<char,std::_Atomic_padded<signed_char>_> @ 141913970

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<signed_char>_>
          (_Atomic_padded<signed_char> *param_1)

{
  return &param_1->_Value;
}

// _Atomic_address_as<int,std::_Atomic_padded<float>_> @ 141913980

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<float>_>(_Atomic_padded<float> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<float>_> @ 141913990

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<float>_>(_Atomic_padded<float> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<long,std::_Atomic_padded<float>_> @ 1419139a0

long * __cdecl
std::_Atomic_address_as<long,std::_Atomic_padded<float>_>(_Atomic_padded<float> *param_1)

{
  return (long *)param_1;
}

// _Atomic_reinterpret_as<int,float> @ 1419139b0

int __cdecl std::_Atomic_reinterpret_as<int,float>(float *param_1)

{
  return (int)*param_1;
}

// _Atomic_reinterpret_as<long,float> @ 1419139c0

long __cdecl std::_Atomic_reinterpret_as<long,float>(float *param_1)

{
  return (long)*param_1;
}

// FThreadSafeStaticStat<`FAsyncSHAVerify::GetStatId'::__l2::FStat_FAsyncSHAVerify> @ 1419139d0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FAsyncSHAVerify::GetStatId(void)const_::_2_::FStat_FAsyncSHAVerify>
* __thiscall
FThreadSafeStaticStat<`FAsyncSHAVerify::GetStatId'::__l2::FStat_FAsyncSHAVerify>::
FThreadSafeStaticStat<_FAsyncSHAVerify::GetStatId_::__l2::FStat_FAsyncSHAVerify>(void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FAsyncSHAVerify");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FAsyncSHAVerify","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
               L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FRemoteConfigAsyncWorker::GetStatId'::__l2::FStat_FRemoteConfigAsyncWorker> @ 141913a60

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FRemoteConfigAsyncWorker::GetStatId(void)const_::_2_::FStat_FRemoteConfigAsyncWorker>
* __thiscall
FThreadSafeStaticStat<`FRemoteConfigAsyncWorker::GetStatId'::__l2::FStat_FRemoteConfigAsyncWorker>::
FThreadSafeStaticStat<_FRemoteConfigAsyncWorker::GetStatId_::__l2::FStat_FRemoteConfigAsyncWorker>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FRemoteConfigAsyncWorker");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FRemoteConfigAsyncWorker","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// ~<lambda_1> @ 1419197d0

void __thiscall
`Async<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000141919837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 141919850

void __thiscall
`Async<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001419198b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>,1,1> @ 1419199d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FPreloadableArchive::InitializeInternalAsync_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreloadableArchive::InitializeInternalAsync'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x60) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x70);
    if (*(longlong **)((longlong)this + 0x88) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x88);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
                    /* WARNING: Could not recover jumptable at 0x000141919a1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FPreloadableArchive::ResumePreloadNonRecursive'::__l2::<lambda_1>,0,0> @ 141919a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreloadableArchive::ResumePreloadNonRecursive'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FPreloadableArchive::ResumePreloadNonRecursive_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreloadableArchive::ResumePreloadNonRecursive'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>,1,0> @ 141919a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_TAsyncRunnable<void>::Run_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_X__UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_11>_>'::__l3::<lambda_1>,0,0> @ 141919a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_11>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_11>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_11>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_17>_>'::__l3::<lambda_1>,0,0> @ 141919a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_17>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_17>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_17>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_1>_>'::__l3::<lambda_1>,0,0> @ 141919ab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_1>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_1>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_1>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0> @ 141919ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_2>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_2>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0> @ 141919af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_3>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_3>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0> @ 141919b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_4>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined **)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_4>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0> @ 141919b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_5>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_5>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,0,0> @ 141919b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_6>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_6>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,0,0> @ 141919b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_7>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_7>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_12>_>'::__l3::<lambda_1>,0,0> @ 141919b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_12>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_12>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_12>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_8>_>'::__l3::<lambda_1>,0,0> @ 141919bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_8>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_8>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_8>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_13>_>'::__l3::<lambda_1>,0,0> @ 141919bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_13>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_13>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_13>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_9>_>'::__l3::<lambda_1>,0,0> @ 141919bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_9>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_9>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_9>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_10>_>'::__l3::<lambda_1>,0,0> @ 141919c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_10>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_10>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_10>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_14>_>'::__l3::<lambda_1>,0,0> @ 141919c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_14>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_14>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_14>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_15>_>'::__l3::<lambda_1>,0,0> @ 141919c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_15>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_15>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_15>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Impl::WrapUnaryFunction<bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_16>_>'::__l3::<lambda_1>,0,0> @ 141919c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_16>_>'::__l3::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Impl::WrapUnaryFunction<bool,ITextFilterExpressionContext,_FTextFilterExpressionEvaluator::ConstructExpressionParser_::__l2::<lambda_16>_>_::__l3::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapUnaryFunction<bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_16>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 141919c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FPreloadableArchive::InitializeInternalAsync_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FPreloadableArchive::InitializeInternalAsync'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 141919cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_TAsyncRunnable<void>::Run_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_X__UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_X__UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::__l4::<lambda_1>,1,0> @ 141919cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::__l4::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FPreloadableFile::InitializeAsync_::__l4::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::`4'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FCsvProfiler::EndCapture'::__l2::<lambda_2>,1,0> @ 141919cf0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FCsvProfiler::EndCapture'::__l2::<lambda_2>,1,0>
::~TFunction_OwnedObject<_FCsvProfiler::EndCapture_::__l2::<lambda_2>,1,0>(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCsvProfiler::EndCapture'::`2'::<lambda_2>,1,0>::_vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141919d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::__l4::<lambda_2>,1,0> @ 141919d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::__l4::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FPreloadableFile::InitializeAsync_::__l4::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::`4'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPreLoadFile::FPreLoadFile'::__l1::<lambda_3_>,0,0> @ 141919d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadFile::FPreLoadFile'::__l1::<lambda_3_>,0,0>::
~TFunction_OwnedObject<_FPreLoadFile::FPreLoadFile_::__l1::<lambda_3_>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreLoadFile::FPreLoadFile'::`1'::<lambda_3_>,0,0>::_vftable_;
  return;
}

// operator<< @ 14191df20

TStringBuilderBase<wchar_t> * __cdecl
operator<<(TStringBuilderBase<wchar_t> *param_1,wchar_t param_2)

{
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(param_1,1);
  }
  *param_1->CurPos = param_2;
  param_1->CurPos = param_1->CurPos + 1;
  return param_1;
}

// operator<< @ 14191df70

FArchive * __cdecl operator<<(FArchive *param_1,FTimespan *param_2)

{
  long64 *plVar1;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar1 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    param_2->Ticks = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
  return param_1;
}

// operator() @ 14191e730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EParseState __thiscall
`TextFilterExpressionParser::ConsumeTextImpl'::__l2::<lambda_1>::operator()
          (void *this,wchar_t param_1)

{
  int iVar1;
  FString *this_00;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  wchar_t local_38 [4];
  wchar_t local_30;
  wchar_t local_2e;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (**(short **)this == 0) {
    if ((param_1 != L'\"') && (param_1 != L'\'')) {
      local_38[0] = param_1;
      cVar2 = (*(code *)**(undefined8 **)((longlong)this + 0x18))
                        ((*(undefined8 **)((longlong)this + 0x18))[1],local_38);
      if (cVar2 == '\0') {
        ::FString::AppendChar(*(FString **)((longlong)this + 0x20),param_1);
        return Continue;
      }
      return StopBefore;
    }
    ::FString::AppendChar(*(FString **)((longlong)this + 8),param_1);
    **(wchar_t **)this = param_1;
    piVar3 = *(int **)((longlong)this + 0x10);
  }
  else {
    ::FString::AppendChar(*(FString **)((longlong)this + 8),param_1);
    local_38[0] = **(wchar_t **)this;
    if ((param_1 == local_38[0]) && ((**(byte **)((longlong)this + 0x10) & 1) == 0)) {
      this_00 = *(FString **)((longlong)this + 8);
      local_30 = L'\\';
      local_2c = 0;
      local_38[1] = 0;
      local_2e = local_38[0];
      ::FString::ReplaceInline(this_00,&local_30,local_38,IgnoreCase);
      ::FString::ReplaceInline(this_00,L"\\\\",L"\\",IgnoreCase);
      iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars
                (*(FString **)((longlong)this + 0x20),
                 (wchar_t *)**(undefined8 **)((longlong)this + 8),iVar4);
      ::FString::Reset(*(FString **)((longlong)this + 8),0);
      **(undefined2 **)this = 0;
    }
    piVar3 = *(int **)((longlong)this + 0x10);
    if (param_1 == L'\\') {
      *piVar3 = *piVar3 + 1;
      return Continue;
    }
  }
  *piVar3 = 0;
  return Continue;
}

// operator() @ 14191f8a0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_11>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  uchar *puVar6;
  uchar *puVar7;
  
  puVar7 = param_2->InlineBytes + 8;
  puVar6 = param_1->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar7 = (uchar *)0x0;
  }
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar6 = (uchar *)0x0;
  }
  if (*(int *)(puVar6 + 8) < 2) {
LAB_14191f951:
    if (1 < *(int *)(puVar7 + 8)) {
      cVar4 = (**(code **)*param_3)(param_3,puVar7,puVar7[0x20]);
      if (puVar7[0x21] != '\0') {
        cVar4 = cVar4 == '\0';
      }
      if (cVar4 == '\0') goto LAB_14191f976;
    }
    uVar5 = 1;
  }
  else {
    cVar4 = (**(code **)*param_3)(param_3,puVar6,puVar6[0x20]);
    if (puVar6[0x21] != '\0') {
      cVar4 = cVar4 == '\0';
    }
    if (cVar4 != '\0') goto LAB_14191f951;
LAB_14191f976:
    uVar5 = 0;
  }
  uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar1;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar2;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
  (__return_storage_ptr__->Variant).field_0x18 = uVar5;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 14191f9c0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_17>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  uchar *puVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  uchar *puVar9;
  atomic<unsigned___int64> aVar10;
  FReadAccessScope local_38;
  
  lVar6 = *(longlong *)this;
  puVar9 = param_2->InlineBytes + 8;
  puVar8 = param_1->InlineBytes + 8;
  aVar10 = (atomic<unsigned___int64>)0x0;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar9 = (uchar *)0x0;
  }
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar8 = (uchar *)0x0;
  }
  uVar3 = 0;
  iVar5 = *(int *)(puVar8 + 8) + -1;
  if (*(int *)(puVar8 + 8) == 0) {
    pwVar7 = L"";
    iVar5 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)puVar8;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  iVar5 = TSet<TTuple<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                      *)(lVar6 + 0x90),uVar4,(FString *)puVar8);
  if (iVar5 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)iVar5 * 0x30 + *(longlong *)(lVar6 + 0x90);
  }
  this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0;
  }
  if (this_00 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_38);
    if (*(int *)&this_00[2].AccessDetector.State != 0) {
      aVar10 = this_00[1].AccessDetector.State;
    }
    uVar3 = (**(code **)(*(longlong *)aVar10 + 0x60))(aVar10,puVar9);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  uVar4 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar4;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar1;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar2;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).field_0x18 = uVar3;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 14191fb30

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_1>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FTextToken *this_00;
  FTextFilterString *pFVar5;
  
  pFVar5 = (FTextFilterString *)(param_1->InlineBytes + 8);
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar5 = (FTextFilterString *)0x0;
  }
  this_00 = (FTextToken *)(param_2->InlineBytes + 8);
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    this_00 = (FTextToken *)0x0;
  }
  bVar4 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (this_00,param_3,pFVar5,LessOrEqual);
  uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar1;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar2;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
  (__return_storage_ptr__->Variant).field_0x18 = bVar4;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 14191fbf0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_2>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FTextToken *this_00;
  FTextFilterString *pFVar5;
  
  pFVar5 = (FTextFilterString *)(param_1->InlineBytes + 8);
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar5 = (FTextFilterString *)0x0;
  }
  this_00 = (FTextToken *)(param_2->InlineBytes + 8);
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    this_00 = (FTextToken *)0x0;
  }
  bVar4 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (this_00,param_3,pFVar5,Less);
  uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar1;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar2;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
  (__return_storage_ptr__->Variant).field_0x18 = bVar4;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 14191fcb0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_3>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FTextToken *this_00;
  FTextFilterString *pFVar5;
  
  pFVar5 = (FTextFilterString *)(param_1->InlineBytes + 8);
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar5 = (FTextFilterString *)0x0;
  }
  this_00 = (FTextToken *)(param_2->InlineBytes + 8);
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    this_00 = (FTextToken *)0x0;
  }
  bVar4 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (this_00,param_3,pFVar5,GreaterOrEqual);
  uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar1;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar2;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
  (__return_storage_ptr__->Variant).field_0x18 = bVar4;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 14191fd70

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_4>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FTextToken *this_00;
  FTextFilterString *pFVar5;
  
  pFVar5 = (FTextFilterString *)(param_1->InlineBytes + 8);
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar5 = (FTextFilterString *)0x0;
  }
  this_00 = (FTextToken *)(param_2->InlineBytes + 8);
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    this_00 = (FTextToken *)0x0;
  }
  bVar4 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (this_00,param_3,pFVar5,Greater);
  uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar1;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar2;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
  (__return_storage_ptr__->Variant).field_0x18 = bVar4;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 14191fe30

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_5>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FTextToken *this_00;
  FTextFilterString *pFVar5;
  
  pFVar5 = (FTextFilterString *)(param_1->InlineBytes + 8);
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar5 = (FTextFilterString *)0x0;
  }
  this_00 = (FTextToken *)(param_2->InlineBytes + 8);
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    this_00 = (FTextToken *)0x0;
  }
  bVar4 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (this_00,param_3,pFVar5,NotEqual);
  uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar1;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar2;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
  (__return_storage_ptr__->Variant).field_0x18 = bVar4;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 14191fef0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_6>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FTextToken *this_00;
  FTextFilterString *pFVar5;
  
  pFVar5 = (FTextFilterString *)(param_1->InlineBytes + 8);
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    pFVar5 = (FTextFilterString *)0x0;
  }
  this_00 = (FTextToken *)(param_2->InlineBytes + 8);
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    this_00 = (FTextToken *)0x0;
  }
  bVar4 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (this_00,param_3,pFVar5,Equal);
  uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar1;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar2;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
  (__return_storage_ptr__->Variant).field_0x18 = bVar4;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 14191ffb0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_7>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  uchar *puVar6;
  uchar *puVar7;
  
  puVar7 = param_2->InlineBytes + 8;
  puVar6 = param_1->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar7 = (uchar *)0x0;
  }
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar6 = (uchar *)0x0;
  }
  if (1 < *(int *)(puVar6 + 8)) {
    cVar4 = (**(code **)*param_3)(param_3,puVar6,puVar6[0x20]);
    if (puVar6[0x21] != '\0') {
      cVar4 = cVar4 == '\0';
    }
    if ((cVar4 == '\0') && (1 < *(int *)(puVar7 + 8))) {
      cVar4 = (**(code **)*param_3)(param_3,puVar7,puVar7[0x20]);
      if (puVar7[0x21] != '\0') {
        cVar4 = cVar4 == '\0';
      }
      uVar5 = 0;
      if (cVar4 == '\0') goto LAB_141920088;
    }
  }
  uVar5 = 1;
LAB_141920088:
  uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar1;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar2;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
  (__return_storage_ptr__->Variant).field_0x18 = uVar5;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1419200d0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_12>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uchar uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 uVar4;
  uchar *puVar5;
  uchar *puVar6;
  
  puVar6 = param_1->InlineBytes + 8;
  puVar5 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  uVar1 = *puVar5;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar6 = (uchar *)0x0;
  }
  if (*(int *)(puVar6 + 8) < 2) {
LAB_14192017b:
    if (uVar1 != '\0') {
      uVar4 = 1;
      goto LAB_141920186;
    }
  }
  else {
    cVar3 = (**(code **)*param_3)(param_3,puVar6,puVar6[0x20]);
    if (puVar6[0x21] != '\0') {
      cVar3 = cVar3 == '\0';
    }
    if (cVar3 != '\0') goto LAB_14192017b;
  }
  uVar4 = 0;
LAB_141920186:
  auVar2._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar2._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar2._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar2._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar2;
  (__return_storage_ptr__->Variant).field_0x18 = uVar4;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1419201c0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_8>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  uchar uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 uVar4;
  uchar *puVar5;
  uchar *puVar6;
  
  puVar6 = param_1->InlineBytes + 8;
  puVar5 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  uVar1 = *puVar5;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar6 = (uchar *)0x0;
  }
  if (1 < *(int *)(puVar6 + 8)) {
    cVar3 = (**(code **)*param_3)(param_3,puVar6,puVar6[0x20]);
    if (puVar6[0x21] != '\0') {
      cVar3 = cVar3 == '\0';
    }
    if ((cVar3 == '\0') && (uVar4 = 0, uVar1 == '\0')) goto LAB_141920272;
  }
  uVar4 = 1;
LAB_141920272:
  auVar2._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar2._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar2._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar2._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar2;
  (__return_storage_ptr__->Variant).field_0x18 = uVar4;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1419202b0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_13>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 uVar3;
  uchar *puVar4;
  uchar *puVar5;
  
  puVar5 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  puVar4 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  if (*puVar4 == '\0') {
LAB_14192035b:
    uVar3 = 0;
  }
  else {
    if (1 < *(int *)(puVar5 + 8)) {
      cVar2 = (**(code **)*param_3)(param_3,puVar5,puVar5[0x20]);
      if (puVar5[0x21] != '\0') {
        cVar2 = cVar2 == '\0';
      }
      if (cVar2 == '\0') goto LAB_14192035b;
    }
    uVar3 = 1;
  }
  auVar1._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar1._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar1._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar1._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar1;
  (__return_storage_ptr__->Variant).field_0x18 = uVar3;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 141920390

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_9>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 uVar3;
  uchar *puVar4;
  uchar *puVar5;
  
  puVar5 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  puVar4 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  if ((*puVar4 == '\0') && (1 < *(int *)(puVar5 + 8))) {
    cVar2 = (**(code **)*param_3)(param_3,puVar5,puVar5[0x20]);
    if (puVar5[0x21] != '\0') {
      cVar2 = cVar2 == '\0';
    }
    uVar3 = 0;
    if (cVar2 == '\0') goto LAB_141920439;
  }
  uVar3 = 1;
LAB_141920439:
  auVar1._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar1._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar1._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar1._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar1;
  (__return_storage_ptr__->Variant).field_0x18 = uVar3;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 141920470

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_10>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  puVar4 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  puVar3 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar3 = (uchar *)0x0;
  }
  if ((*puVar3 == '\0') && (*puVar4 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  auVar1._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar1._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar1._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar1._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar1;
  (__return_storage_ptr__->Variant).field_0x18 = uVar2;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 141920530

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_14>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,FExpressionNode *param_2,ITextFilterExpressionContext *param_3)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  puVar4 = param_2->InlineBytes + 8;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  puVar3 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar3 = (uchar *)0x0;
  }
  if ((*puVar3 == '\0') || (*puVar4 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  auVar1._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar1._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar1._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar1._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.D;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar1;
  (__return_storage_ptr__->Variant).field_0x18 = uVar2;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1419205f0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`Impl::
WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_15>_>'
::__l3::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FExpressionNode *param_1,ITextFilterExpressionContext *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uchar *puVar5;
  
  puVar5 = param_1->InlineBytes + 8;
  if ((((param_1->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_1->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_1->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_1->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar5 = (uchar *)0x0;
  }
  if (*(int *)(puVar5 + 8) < 2) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = (**(code **)*param_2)(param_2,puVar5,puVar5[0x20]);
    if (puVar5[0x21] != '\0') {
      cVar4 = cVar4 == '\0';
    }
  }
  uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar1;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar2;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage__N_Impl__6B_;
  (__return_storage_ptr__->Variant).field_0x18 = cVar4 == '\0';
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1419206a0

void __thiscall `CSVTest'::__l8::<lambda_1>::operator()(void *this,int param_1)

{
  ulonglong uVar1;
  FBlock *pFVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  FCsvProfilerThreadData *this_00;
  ulonglong uVar6;
  LARGE_INTEGER local_res18 [2];
  FScopedCsvStat local_38 [2];
  
  if (!__CsvProfilerStat4987) {
    FCsvProfilerTrace::OutputInlineStat("TaskTimer",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat4987 = true;
  }
  uVar4 = _GCsvCategory_CsvTest.Index;
  local_38[0].CategoryIndex = _GCsvCategory_CsvTest.Index;
  local_38[0].StatName = "TaskTimer";
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_CsvTest.Index] != false)) {
    if (GCsvProfilerNamedEventsTiming != false) {
      local_res18[0].s.LowPart = 0xffff80ff;
      CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_TaskTimer");
    }
    this_00 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (this_00 == (FCsvProfilerThreadData *)0x0) {
      this_00 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(local_res18);
    FCsvProfilerTrace::OutputBeginStat
              ("TaskTimer",uVar4,CONCAT44(local_res18[0].s.HighPart,local_res18[0].s.LowPart));
    uVar1 = (this_00->TimingMarkers).Counter;
    uVar6 = uVar1 & 0xff;
    if ((char)uVar1 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&this_00->TimingMarkers)
      ;
    }
    pFVar2 = (this_00->TimingMarkers).TailBlock;
    *(ulonglong *)(pFVar2->Entries + uVar6) =
         CONCAT44(local_res18[0].s.HighPart,local_res18[0].s.LowPart);
    pFVar2->Entries[uVar6].field_0x15 = 2;
    *(char **)&pFVar2->Entries[uVar6].field_0x8 = "TaskTimer";
    *(uint *)&pFVar2->Entries[uVar6].field_0x10 = uVar4;
    (this_00->TimingMarkers).Counter = (this_00->TimingMarkers).Counter + 1;
  }
  bVar5 = IsInGameThread();
  if (!bVar5) {
    if (__CsvProfilerStat4990 == false) {
      FCsvProfilerTrace::OutputInlineStat("TaskCustomStatSet",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat4990 = true;
    }
    fVar3 = __real_3f000000;
    FCsvProfiler::RecordCustomStat
              ("TaskCustomStatSet",_GCsvCategory_CsvTest.Index,__real_3f000000,Set);
    if (__CsvProfilerStat4991 == false) {
      FCsvProfilerTrace::OutputInlineStat("TaskCustomStatSet",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat4991 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("TaskCustomStatSet",_GCsvCategory_CsvTest.Index,__real_3f800000,Set);
    if (__CsvProfilerStat4992 == false) {
      FCsvProfilerTrace::OutputInlineStat("TaskCustomStatAccumulate",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat4992 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("TaskCustomStatAccumulate",_GCsvCategory_CsvTest.Index,fVar3,Accumulate);
    if (__CsvProfilerStat4993 == false) {
      FCsvProfilerTrace::OutputInlineStat("TaskCustomStatAccumulate",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat4993 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("TaskCustomStatAccumulate",_GCsvCategory_CsvTest.Index,fVar3,Accumulate);
    if (__CsvProfilerStat4994 == false) {
      FCsvProfilerTrace::OutputInlineStat("TaskCustomStatMax",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat4994 = true;
    }
    FCsvProfiler::RecordCustomStat("TaskCustomStatMax",_GCsvCategory_CsvTest.Index,fVar3,Max);
    if (__CsvProfilerStat4995 == false) {
      FCsvProfilerTrace::OutputInlineStat("TaskCustomStatMax",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat4995 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("TaskCustomStatMax",_GCsvCategory_CsvTest.Index,__real_3f800000,Max);
    if (*(int *)this == (*(uint *)this / 0x141) * 0x141) {
      if (__CsvProfilerStat4999 == false) {
        FCsvProfilerTrace::OutputInlineStat("TaskSparse",_GCsvCategory_CsvTest.Index);
        __CsvProfilerStat4999 = true;
      }
      FCsvProfiler::RecordCustomStat("TaskSparse",_GCsvCategory_CsvTest.Index,__real_3f800000,Set);
    }
  }
  SpinWaitMs(__real_3ff0000000000000);
  FScopedCsvStat::~FScopedCsvStat(local_38);
  return;
}

// operator() @ 141921790

EParseState __thiscall `ParseIndex<char>'::__l2::<lambda_3>::operator()(void *this,wchar_t param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  EParseState EVar6;
  undefined4 local_18 [4];
  
  iVar5 = iswdigit(param_1);
  if (iVar5 == 0) {
    return StopBefore;
  }
  puVar1 = *(undefined4 **)this;
  if ((*(char *)(puVar1 + 1) == '\0') && (local_18 != puVar1)) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  piVar2 = *(int **)this;
  if ((char)piVar2[1] == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
  }
  *piVar2 = *piVar2 * 10;
  piVar2 = *(int **)this;
  if ((char)piVar2[1] == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
  }
  *piVar2 = *piVar2 + ((ushort)param_1 - 0x30);
  return Continue;
}

// operator() @ 141921870

EParseState __thiscall
`ParseIndex<char8_t>'::__l2::<lambda_3>::operator()(void *this,wchar_t param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  EParseState EVar6;
  undefined4 local_18 [4];
  
  iVar5 = iswdigit(param_1);
  if (iVar5 == 0) {
    return StopBefore;
  }
  puVar1 = *(undefined4 **)this;
  if ((*(char *)(puVar1 + 1) == '\0') && (local_18 != puVar1)) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  piVar2 = *(int **)this;
  if ((char)piVar2[1] == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
  }
  *piVar2 = *piVar2 * 10;
  piVar2 = *(int **)this;
  if ((char)piVar2[1] == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
  }
  *piVar2 = *piVar2 + ((ushort)param_1 - 0x30);
  return Continue;
}

// operator() @ 141921950

EParseState __thiscall
`ParseIndex<wchar_t>'::__l2::<lambda_3>::operator()(void *this,wchar_t param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  EParseState EVar6;
  undefined4 local_18 [4];
  
  iVar5 = iswdigit(param_1);
  if (iVar5 == 0) {
    return StopBefore;
  }
  puVar1 = *(undefined4 **)this;
  if ((*(char *)(puVar1 + 1) == '\0') && (local_18 != puVar1)) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  piVar2 = *(int **)this;
  if ((char)piVar2[1] == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
  }
  *piVar2 = *piVar2 * 10;
  piVar2 = *(int **)this;
  if ((char)piVar2[1] == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
  }
  *piVar2 = *piVar2 + ((ushort)param_1 - 0x30);
  return Continue;
}

// `vector_deleting_destructor'`adjustor{16}' @ 141921c60

/* [thunk]:public: virtual void * __ptr64 __cdecl FQueuedThreadPoolWrapper::FScheduledWork::`vector
   deleting destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FQueuedThreadPoolWrapper::FScheduledWork::_vector_deleting_destructor__adjustor_16__
          (FScheduledWork *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FScheduledWork *)&this[-1].Work,param_1);
  return pvVar1;
}

// `vector_deleting_destructor' @ 141921c70

void * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::_vector_deleting_destructor_
          (FTreeNode *this,uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  FTreeNode *this_00;
  
  if ((param_1 & 2) == 0) {
    ~FTreeNode(this);
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x28);
    }
    return this;
  }
  lVar2 = *(longlong *)&this[-1].NumChildNodesAndFlags;
  puVar1 = &this[-1].NumChildNodesAndFlags;
  this_00 = this + lVar2;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    this_00 = this_00 + -1;
    ~FTreeNode(this_00);
  }
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1,*(longlong *)puVar1 * 0x28 + 8);
  }
  return puVar1;
}

// `scalar_deleting_destructor' @ 141921d20

void * __thiscall
FAsyncTask<FRemoteConfigAsyncWorker>::_scalar_deleting_destructor_
          (FAsyncTask<FRemoteConfigAsyncWorker> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Task).Contents.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Task).IOInfo.Buffer.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141921d80

void * __thiscall
FAutoDeleteAsyncTask<FAsyncSHAVerify>::_scalar_deleting_destructor_
          (FAutoDeleteAsyncTask<FAsyncSHAVerify> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  
  pFVar3 = (this->Task).Pathname.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141921e00

void * __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<char>_>::_scalar_deleting_destructor_
          (FHeapDataStorage<TTokenFormatSpecifier<char>_> *this,uint param_1)

{
  ::operator_delete((this->Value).Ptr,0x38);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141921e50

void * __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<char8_t>_>::_scalar_deleting_destructor_
          (FHeapDataStorage<TTokenFormatSpecifier<char8_t>_> *this,uint param_1)

{
  ::operator_delete((this->Value).Ptr,0x38);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141921ea0

void * __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<wchar_t>_>::_scalar_deleting_destructor_
          (FHeapDataStorage<TTokenFormatSpecifier<wchar_t>_> *this,uint param_1)

{
  ::operator_delete((this->Value).Ptr,0x38);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141921ef0

void * __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<char>_>::_scalar_deleting_destructor_
          (FInlineDataStorage<TEscapedCharacter<char>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141921f20

void * __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<char8_t>_>::_scalar_deleting_destructor_
          (FInlineDataStorage<TEscapedCharacter<char8_t>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141921f50

void * __thiscall
Impl::FInlineDataStorage<TEscapedCharacter<wchar_t>_>::_scalar_deleting_destructor_
          (FInlineDataStorage<TEscapedCharacter<wchar_t>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141921f80

void * __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<char>_>::_scalar_deleting_destructor_
          (FInlineDataStorage<TIndexSpecifier<char>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141921fb0

void * __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<char8_t>_>::_scalar_deleting_destructor_
          (FInlineDataStorage<TIndexSpecifier<char8_t>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141921fe0

void * __thiscall
Impl::FInlineDataStorage<TIndexSpecifier<wchar_t>_>::_scalar_deleting_destructor_
          (FInlineDataStorage<TIndexSpecifier<wchar_t>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922010

void * __thiscall
Impl::FInlineDataStorage<TStringLiteral<char>_>::_scalar_deleting_destructor_
          (FInlineDataStorage<TStringLiteral<char>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922040

void * __thiscall
Impl::FInlineDataStorage<TStringLiteral<char8_t>_>::_scalar_deleting_destructor_
          (FInlineDataStorage<TStringLiteral<char8_t>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922070

void * __thiscall
Impl::FInlineDataStorage<TStringLiteral<wchar_t>_>::_scalar_deleting_destructor_
          (FInlineDataStorage<TStringLiteral<wchar_t>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419220a0

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FAnd>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FAnd> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419220d0

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FEqual>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FEqual> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922100

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FGreater>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FGreater> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922130

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FGreaterOrEqual>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FGreaterOrEqual> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922160

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FLess>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FLess> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922190

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FLessOrEqual>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FLessOrEqual> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419221c0

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FNot>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FNot> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419221f0

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FNotEqual>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FNotEqual> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922220

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FOr>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FOr> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922250

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FSubExpressionEnd>::
_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FSubExpressionEnd> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922280

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FSubExpressionStart>::
_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FSubExpressionStart> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419222b0

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FFunction>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FFunction> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419222e0

void * __thiscall
Impl::FInlineDataStorage<TextFilterExpressionParser::FTextToken>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFilterExpressionParser::FTextToken> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).String.InternalStringAnsi.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Value).String.InternalString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922340

void * __thiscall
IBaseDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922370

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419223a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419223d0

void * __thiscall
IBaseDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922400

void * __thiscall
IFilter<TextFilterTests::FTestFilterItem_const_*>::_scalar_deleting_destructor_
          (IFilter<TextFilterTests::FTestFilterItem_const_*> *this,uint param_1)

{
  *this = (IFilter<TextFilterTests::FTestFilterItem_const_*>)
          &___7__IFilter_PEBUFTestFilterItem_TextFilterTests____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922440

void * __thiscall
TAsyncQueuedWork<void>::_scalar_deleting_destructor_(TAsyncQueuedWork<void> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  TFutureState<void> *pTVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  longlong *plVar9;
  
  pTVar3 = (this->Promise).State.Object;
  if ((pTVar3 != (TFutureState<void> *)0x0) && (pTVar3->field_0x68 == '\0')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pvVar8 = (void *)(*pcVar6)();
      return pvVar8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar4 = *(longlong **)&(this->Function).field_0x28;
    plVar9 = (longlong *)&(this->Function).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = plVar4;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(undefined ***)this = &___7IQueuedWork__6B_;
  puVar5 = *(undefined8 **)&this->field_0x8;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922510

void * __thiscall
TAsyncRunnable<void>::_scalar_deleting_destructor_(TAsyncRunnable<void> *this,uint param_1)

{
  TFutureState<void> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong *plVar6;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ThreadFuture).field_0x8);
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<void> *)0x0) && (pTVar1->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar6 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419225c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FCsvProfiler::FCsvProfiler'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419225f0

void * __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922620

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922650

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922680

void * __thiscall
TCommonDelegateInstanceState<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419226b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419226e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922710

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<char>_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<char>_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer_D___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<char8_t>_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<char8_t>_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__Q___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419227c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreloadableArchive::InitializeInternalAsync'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x60) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x70);
    if (*(longlong **)((longlong)this + 0x88) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x88);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreloadableArchive::ResumePreloadNonRecursive'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreloadableArchive::ResumePreloadNonRecursive'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_X__UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419228c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_11>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_11>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_17>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_17>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_1>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_1>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_2>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419229c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_3>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined **)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_4>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_5>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_6>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_7>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_12>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_12>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_8>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_8>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_13>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_13>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_9>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_9>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_10>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_10>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_14>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_14>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_15>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_15>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Impl::WrapUnaryFunction<bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_16>_>'::__l3::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Impl::WrapUnaryFunction<bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_16>_>'::`3'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FPreloadableArchive::InitializeInternalAsync'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FPreloadableArchive::InitializeInternalAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_X__UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_X__UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<void>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::__l4::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::`4'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922de0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FCsvProfiler::EndCapture'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCsvProfiler::EndCapture'::`2'::<lambda_2>,1,0>::_vftable_;
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

// `scalar_deleting_destructor' @ 141922e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::__l4::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreloadableFile::InitializeAsync'::`4'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadFile::FPreLoadFile'::__l1::<lambda_3_>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreLoadFile::FPreLoadFile'::`1'::<lambda_3_>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922ed0

void * __thiscall
TGraphTask<TAsyncGraphTask<void>_>::_scalar_deleting_destructor_
          (TGraphTask<TAsyncGraphTask<void>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141922f30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FRunnableThread_*>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<FRunnableThread_*>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922f70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FString>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<FString>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922fb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<void>,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<TFutureState<void>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141922ff0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCsvProfilerThreadData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FCsvProfilerThreadData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923030

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTrackedActivity,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FTrackedActivity,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923070

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FArchive,SharedPointerInternals::DefaultDeleter<FArchive>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FArchive,SharedPointerInternals::DefaultDeleter<FArchive>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419230b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCsvProfilerThreadData,SharedPointerInternals::DefaultDeleter<FCsvProfilerThreadData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FCsvProfilerThreadData,SharedPointerInternals::DefaultDeleter<FCsvProfilerThreadData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419230f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCsvThreadGroupStatProcessor,SharedPointerInternals::DefaultDeleter<FCsvThreadGroupStatProcessor>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FCsvThreadGroupStatProcessor,SharedPointerInternals::DefaultDeleter<FCsvThreadGroupStatProcessor>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923130

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FModuleManager::FModuleInfo,SharedPointerInternals::DefaultDeleter<FModuleManager::FModuleInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FModuleManager::FModuleInfo,SharedPointerInternals::DefaultDeleter<FModuleManager::FModuleInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923170

void * __thiscall
TTextFilter<TextFilterTests::FTestFilterItem_const_*>::_scalar_deleting_destructor_
          (TTextFilter<TextFilterTests::FTestFilterItem_const_*> *this,uint param_1)

{
  ~TTextFilter<TextFilterTests::FTestFilterItem_const_*>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419231b0

void * __thiscall
TTlsAutoCleanupValue<TSharedPtr<FCsvProfilerThreadData,1>_>::_scalar_deleting_destructor_
          (TTlsAutoCleanupValue<TSharedPtr<FCsvProfilerThreadData,1>_> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923200

void * __thiscall
FCsvAggregateStatSeries::_scalar_deleting_destructor_(FCsvAggregateStatSeries *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->RowValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RowValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FCsvStatSeriesValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,FCsvStatSeriesValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,FCsvStatSeriesValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RowValues);
  this->_padding_ = (longlong)&___7FCsvStatSeries__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923280

void * __thiscall
FCsvProfilerProcessingThread::_scalar_deleting_destructor_
          (FCsvProfilerProcessingThread *this,uint param_1)

{
  FRunnableThread *pFVar1;
  undefined4 in_register_00000014;
  
  this->_padding_ = (longlong)&___7FCsvProfilerProcessingThread__6B_;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))
              (pFVar1,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),1));
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->StallGameThreadCs);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923310

void * __thiscall FCsvStatSeries::_scalar_deleting_destructor_(FCsvStatSeries *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCsvStatSeries__6B_;
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923360

void * __thiscall
FCsvThreadGroupStatProcessor::_scalar_deleting_destructor_
          (FCsvThreadGroupStatProcessor *this,uint param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  pFVar4 = (this->StatSeriesArray).AllocatorInstance.Data;
  iVar1 = (this->StatSeriesArray).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->StatSeriesArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCsvStatSeries_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar3) break;
    puVar2 = *(undefined8 **)pFVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FCsvStatRegister::~FCsvStatRegister(&this->StatRegister);
  pFVar3 = (this->StatSeriesArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923410

void * __thiscall
FDummyTextFilterExpressionContext::_scalar_deleting_destructor_
          (FDummyTextFilterExpressionContext *this,uint param_1)

{
  *this = (FDummyTextFilterExpressionContext)&___7ITextFilterExpressionContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923450

void * __thiscall FModuleManager::_scalar_deleting_destructor_(FModuleManager *this,uint param_1)

{
  ~FModuleManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923490

void * __thiscall
FPathPermissionList::_scalar_deleting_destructor_(FPathPermissionList *this,uint param_1)

{
  ~FPathPermissionList(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419234d0

void * __thiscall
FPreloadableArchive::_scalar_deleting_destructor_(FPreloadableArchive *this,uint param_1)

{
  ~FPreloadableArchive(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923510

void * __thiscall
FPreloadableArchiveProxy::_scalar_deleting_destructor_(FPreloadableArchiveProxy *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Archive).SharedReferenceCount.ReferenceController);
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923560

void * __thiscall
FPreloadableFile::_scalar_deleting_destructor_(FPreloadableFile *this,uint param_1)

{
  FPreloadableArchive::~FPreloadableArchive((FPreloadableArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419235a0

void * __thiscall
FQueuedThreadPoolWrapper::_scalar_deleting_destructor_(FQueuedThreadPoolWrapper *this,uint param_1)

{
  ~FQueuedThreadPoolWrapper(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419235e0

void * __thiscall
FQueuedThreadPoolWrapper::FScheduledWork::_scalar_deleting_destructor_
          (FScheduledWork *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  
  this->_padding_ = (longlong)&_vftable__for__IQueuedWork__;
  this->_padding_ = (longlong)&_vftable__for__IExecutionResource__;
  if ((this->NumRefs).Counter != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs.GetValue() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\QueuedThreadPoolWrapper.cpp"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  LOCK();
  UNLOCK();
  lVar7 = (longlong)QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs + -1;
  QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs =
       (atomic<__int64>)((longlong)QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs + -1);
  FCountersTrace::TCounter<__int64,0,__int64,0>::Set
            (&__GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs,lVar7);
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419236c0

void * __thiscall
TextFilterTests::FTestFilterExpression::_scalar_deleting_destructor_
          (FTestFilterExpression *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITestFilterExpression_TextFilterTests__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923700

void * __thiscall
TextFilterTests::FTestFilterExpression_TextFilter::_scalar_deleting_destructor_
          (FTestFilterExpression_TextFilter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITestFilterExpression_TextFilterTests__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923740

void * __thiscall
TextFilterTests::FTestFilterExpression_TextFilterExpressionEvaluator::_scalar_deleting_destructor_
          (FTestFilterExpression_TextFilterExpressionEvaluator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITestFilterExpression_TextFilterTests__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923780

void * __thiscall
TextFilterTests::FTestFilterItem::_scalar_deleting_destructor_(FTestFilterItem *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->KeyValuePairs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyValuePairs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyValuePairs);
  DestructItems<FString,int>
            ((FString *)(this->BasicStrings).AllocatorInstance.Data,(this->BasicStrings).ArrayNum);
  pFVar2 = (this->BasicStrings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7ITextFilterExpressionContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923810

void * __thiscall
TTextFilter<TextFilterTests::FTestFilterItem_const_*>::FTextFilterExpressionContext::
_scalar_deleting_destructor_(FTextFilterExpressionContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->ItemBasicStrings).AllocatorInstance.Data,
             (this->ItemBasicStrings).ArrayNum);
  pFVar1 = (this->ItemBasicStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TestComplexExpressionDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TransformArrayDelegate);
  this->_padding_ = (longlong)&___7ITextFilterExpressionContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923880

void * __thiscall
FTextFilterExpressionEvaluator::_scalar_deleting_destructor_
          (FTextFilterExpressionEvaluator *this,uint param_1)

{
  ~FTextFilterExpressionEvaluator(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x378);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1419238c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
FCpuProfilerTraceInternal::FThreadBuffer::_scalar_deleting_destructor_
          (FThreadBuffer *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this->_padding_ = (longlong)&___7FThreadBuffer_FCpuProfilerTraceInternal__6B_;
  if (this->BufferSize != 0) {
    FlushThreadBuffer(this);
  }
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCpuProfilerEndThreadFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined8 *)(lVar1 + 0xb60) = 0;
  *(undefined4 *)&(this->DynamicFNameScopeNamesMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->DynamicFNameScopeNamesMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicFNameScopeNamesMap);
  *(undefined4 *)&(this->DynamicTCharScopeNamesMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->DynamicTCharScopeNamesMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicTCharScopeNamesMap);
  *(undefined4 *)&(this->DynamicAnsiScopeNamesMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->DynamicAnsiScopeNamesMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<char_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<char_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<char_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicAnsiScopeNamesMap);
  if ((GIsCriticalError == false) && ((this->DynamicScopeNamesMemory).NumMarks != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  FMemStackBase::FreeChunks(&this->DynamicScopeNamesMemory,(FTaggedMemory *)0x0);
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141923a70

void * __thiscall
TextFilterTests::ITestFilterExpression::_scalar_deleting_destructor_
          (ITestFilterExpression *this,uint param_1)

{
  *this = (ITestFilterExpression)&___7ITestFilterExpression_TextFilterTests__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AddIfDirectoryExists @ 141925430

void __cdecl
AddIfDirectoryExists(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  IFileManager *pIVar6;
  wchar_t *pwVar7;
  
  pIVar6 = IFileManager::Get();
  if ((param_2->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6,pwVar7);
  if (cVar3 != '\0') {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if ((pFVar1 <= param_2) && (param_2 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
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
    FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10),param_2
                    );
  }
  return;
}

// BeginReload @ 1419293f0

void __cdecl BeginReload(EActiveReloadType param_1,IReload *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (GActiveReloadInterface != (IReload *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GActiveReloadInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                       ,0x89b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GActiveReloadInterface = param_2;
  GActiveReloadType = param_1;
  return;
}

// CSVTest @ 141929e70

void __cdecl CSVTest(void)

{
  FBlock *pFVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  atomic<float> aVar8;
  atomic<float> aVar9;
  uint uVar10;
  uint uVar11;
  FName *pFVar12;
  TCsvPersistentCustomStat<float> *pTVar13;
  TCsvPersistentCustomStat<int> *pTVar14;
  FCsvProfiler *pFVar15;
  FCsvProfilerThreadData *pFVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  bool bVar28;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  FScopedCsvStatExclusive local_res20;
  LARGE_INTEGER local_e8;
  uint local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER *local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  atomic<float> local_98;
  LARGE_INTEGER local_90;
  uint local_88;
  FScopedCsvStat local_80;
  FScopedCsvStat local_70 [3];
  
  if (GCsvTestCategoryOnly) {
    memset(GCsvCategoriesEnabled,0,0x800);
    GCsvCategoriesEnabled[_GCsvCategory_CsvTest.Index] = true;
  }
  FCsvProfiler::Get();
  uVar11 = _GCsvCategory_CsvTest.Index;
  pFVar12 = FName::FName((FName *)&local_res10.s,L"PersistentStatFloat");
  pTVar13 = FCsvPersistentCustomStats::GetOrCreatePersistentCustomStat<float>
                      (&GCsvPersistentCustomStats,*pFVar12,uVar11,false);
  fVar4 = __real_3e19999a;
  aVar8 = pTVar13->Value;
  do {
    LOCK();
    aVar9 = pTVar13->Value;
    bVar28 = aVar8 == aVar9;
    if (bVar28) {
      pTVar13->Value = (atomic<float>)((float)aVar8 + fVar4);
      aVar9 = aVar8;
    }
    aVar8 = aVar9;
    fVar3 = __real_3dcccccd;
    UNLOCK();
  } while (!bVar28);
  local_res8.s.LowPart = (DWORD)pTVar13->Value;
  aVar8 = (atomic<float>)local_res8.s.LowPart;
  do {
    LOCK();
    aVar9 = pTVar13->Value;
    bVar28 = aVar8 == aVar9;
    if (bVar28) {
      pTVar13->Value = (atomic<float>)((float)aVar8 - fVar3);
      aVar9 = aVar8;
    }
    UNLOCK();
    aVar8 = aVar9;
  } while (!bVar28);
  FCsvProfiler::Get();
  uVar11 = _GCsvCategory_CsvTest.Index;
  pFVar12 = FName::FName((FName *)&local_res8.s,L"PersistentStatInt");
  pTVar14 = FCsvPersistentCustomStats::GetOrCreatePersistentCustomStat<int>
                      (&GCsvPersistentCustomStats,*pFVar12,uVar11,false);
  LOCK();
  pTVar14->Value = (atomic<int>)((int)pTVar14->Value + 0xf);
  UNLOCK();
  LOCK();
  pTVar14->Value = (atomic<int>)((int)pTVar14->Value + -1);
  UNLOCK();
  pFVar15 = FCsvProfiler::Get();
  aVar8 = (atomic<float>)pFVar15->CaptureFrameNumber;
  local_98 = aVar8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pwVar17 = FCommandLine::Get();
    bTaskStats = FParse::Param(pwVar17,L"csvTestTasks");
    _Init_thread_footer(&_TSS0);
  }
  if (bTaskStats != false) {
    local_d8.QuadPart =
         (LONGLONG)
         UE::Core::Private::Function::TFunctionRefCaller<`CSVTest'::__l8::<lambda_1>,void,int>::Call
    ;
    local_d0 = &local_res8;
    local_e8.QuadPart = 0;
    local_e0 = 0;
    local_res8.s.LowPart._0_1_ = aVar8._0_1_;
    uVar7 = local_res8.s.LowPart._0_1_;
    local_res8.s.LowPart = (DWORD)aVar8;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",4,1,(TFunctionRef<void___cdecl(int)> *)&local_d8.s,
               (<lambda_1>)uVar7,BackgroundPriority,(TArrayView<std::nullptr_t,int> *)&local_e8.s);
  }
  if (__CsvProfilerStat5007 == false) {
    FCsvProfilerTrace::OutputInlineStat("CsvTestStat",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat5007 = true;
  }
  FScopedCsvStat::FScopedCsvStat
            (local_70,"CsvTestStat",_GCsvCategory_CsvTest.Index,"CSV_CsvTestStat");
  if (__CsvProfilerStat5008 == false) {
    FCsvProfilerTrace::OutputInlineStat("CaptureFrameNumber",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat5008 = true;
  }
  FCsvProfiler::RecordCustomStat("CaptureFrameNumber",_GCsvCategory_CsvTest.Index,(int)aVar8,Set);
  if (__CsvProfilerStat5009 == false) {
    FCsvProfilerTrace::OutputInlineStat("SameCustomStat",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat5009 = true;
  }
  FCsvProfiler::RecordCustomStat("SameCustomStat",_GCsvCategory_CsvTest.Index,1,Set);
  if (__CsvProfilerStat5010 == false) {
    FCsvProfilerTrace::OutputInlineStat("SameCustomStat",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat5010 = true;
  }
  FCsvProfiler::RecordCustomStat("SameCustomStat",_GCsvCategory_CsvTest.Index,1,Accumulate);
  dVar2 = __real_3ff0000000000000;
  lVar27 = 3;
  do {
    if (__CsvProfilerStat5013 == false) {
      FCsvProfilerTrace::OutputInlineStat("RepeatStat1MS",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat5013 = true;
    }
    uVar11 = _GCsvCategory_CsvTest.Index;
    uVar18 = (ulonglong)_GCsvCategory_CsvTest.Index;
    if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar18] != false)) {
      if (GCsvProfilerNamedEventsTiming != false) {
        local_res8.s.LowPart = 0xffff80ff;
        CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_RepeatStat1MS");
      }
      pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
        pFVar16 = FCsvProfilerThreadData::CreateTLSData();
      }
      QueryPerformanceCounter(&local_res10);
      FCsvProfilerTrace::OutputBeginStat("RepeatStat1MS",uVar11,local_res10.QuadPart);
      uVar21 = (pFVar16->TimingMarkers).Counter;
      uVar20 = uVar21 & 0xff;
      if ((char)uVar21 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar16->TimingMarkers);
      }
      pFVar1 = (pFVar16->TimingMarkers).TailBlock;
      ((LARGE_INTEGER *)(pFVar1->Entries + uVar20))->QuadPart = (LONGLONG)local_res10;
      pFVar1->Entries[uVar20].field_0x15 = 2;
      *(char **)&pFVar1->Entries[uVar20].field_0x8 = "RepeatStat1MS";
      *(uint *)&pFVar1->Entries[uVar20].field_0x10 = uVar11;
      (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
    }
    SpinWaitMs(dVar2);
    if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar18] != false)) {
      pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
        pFVar16 = FCsvProfilerThreadData::CreateTLSData();
      }
      QueryPerformanceCounter(&local_res18);
      FCsvProfilerTrace::OutputEndStat("RepeatStat1MS",uVar11,local_res18.QuadPart);
      uVar18 = (pFVar16->TimingMarkers).Counter;
      uVar21 = uVar18 & 0xff;
      if ((char)uVar18 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar16->TimingMarkers);
      }
      pFVar1 = (pFVar16->TimingMarkers).TailBlock;
      ((LARGE_INTEGER *)(pFVar1->Entries + uVar21))->QuadPart = (LONGLONG)local_res18;
      pFVar1->Entries[uVar21].field_0x15 = 0;
      *(char **)&pFVar1->Entries[uVar21].field_0x8 = "RepeatStat1MS";
      *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
      (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
      if (GCsvProfilerNamedEventsTiming != false) {
        if (CpuChannel->Enabled < 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        else {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
    }
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  if (__CsvProfilerStat5022 == false) {
    FCsvProfilerTrace::OutputInlineStat("TimerStatTimer",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat5022 = true;
  }
  FScopedCsvStat::FScopedCsvStat
            (&local_80,"TimerStatTimer",_GCsvCategory_CsvTest.Index,"CSV_TimerStatTimer");
  local_e8.QuadPart = 0x9c4;
  do {
    if (__CsvProfilerStat5025 == false) {
      FCsvProfilerTrace::OutputInlineStat("BeginEndbenchmarkInner0",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat5025 = true;
    }
    uVar11 = _GCsvCategory_CsvTest.Index;
    uVar18 = (ulonglong)_GCsvCategory_CsvTest.Index;
    if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar18] != false)) {
      if (GCsvProfilerNamedEventsTiming != false) {
        local_res8.s.LowPart = 0xffff80ff;
        CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_BeginEndbenchmarkInner0");
      }
      pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
        pFVar16 = FCsvProfilerThreadData::CreateTLSData();
      }
      QueryPerformanceCounter(&local_90);
      FCsvProfilerTrace::OutputBeginStat("BeginEndbenchmarkInner0",uVar11,local_90.QuadPart);
      uVar21 = (pFVar16->TimingMarkers).Counter;
      uVar20 = uVar21 & 0xff;
      if ((char)uVar21 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar16->TimingMarkers);
      }
      pFVar1 = (pFVar16->TimingMarkers).TailBlock;
      ((LARGE_INTEGER *)(pFVar1->Entries + uVar20))->QuadPart = (LONGLONG)local_90;
      pFVar1->Entries[uVar20].field_0x15 = 2;
      *(char **)&pFVar1->Entries[uVar20].field_0x8 = "BeginEndbenchmarkInner0";
      *(uint *)&pFVar1->Entries[uVar20].field_0x10 = uVar11;
      (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
    }
    if (__CsvProfilerStat5026 == false) {
      FCsvProfilerTrace::OutputInlineStat("BeginEndbenchmarkInner1",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat5026 = true;
    }
    uVar10 = _GCsvCategory_CsvTest.Index;
    uVar21 = (ulonglong)_GCsvCategory_CsvTest.Index;
    if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar21] != false)) {
      if (GCsvProfilerNamedEventsTiming != false) {
        local_res10.s.LowPart = 0xffff80ff;
        CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_BeginEndbenchmarkInner1");
      }
      pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
        pFVar16 = FCsvProfilerThreadData::CreateTLSData();
      }
      QueryPerformanceCounter(&local_c8);
      FCsvProfilerTrace::OutputBeginStat("BeginEndbenchmarkInner1",uVar10,local_c8.QuadPart);
      uVar20 = (pFVar16->TimingMarkers).Counter;
      uVar25 = uVar20 & 0xff;
      if ((char)uVar20 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar16->TimingMarkers);
      }
      pFVar1 = (pFVar16->TimingMarkers).TailBlock;
      ((LARGE_INTEGER *)(pFVar1->Entries + uVar25))->QuadPart = (LONGLONG)local_c8;
      pFVar1->Entries[uVar25].field_0x15 = 2;
      *(char **)&pFVar1->Entries[uVar25].field_0x8 = "BeginEndbenchmarkInner1";
      *(uint *)&pFVar1->Entries[uVar25].field_0x10 = uVar10;
      (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
    }
    if (__CsvProfilerStat5027 == false) {
      FCsvProfilerTrace::OutputInlineStat("BeginEndbenchmarkInner2",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat5027 = true;
    }
    uVar5 = _GCsvCategory_CsvTest.Index;
    uVar20 = (ulonglong)_GCsvCategory_CsvTest.Index;
    if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar20] != false)) {
      if (GCsvProfilerNamedEventsTiming != false) {
        local_res18.s.LowPart = 0xffff80ff;
        CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_BeginEndbenchmarkInner2");
      }
      pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
        pFVar16 = FCsvProfilerThreadData::CreateTLSData();
      }
      QueryPerformanceCounter(&local_c0);
      FCsvProfilerTrace::OutputBeginStat("BeginEndbenchmarkInner2",uVar5,local_c0.QuadPart);
      uVar25 = (pFVar16->TimingMarkers).Counter;
      uVar23 = uVar25 & 0xff;
      if ((char)uVar25 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar16->TimingMarkers);
      }
      pFVar1 = (pFVar16->TimingMarkers).TailBlock;
      ((LARGE_INTEGER *)(pFVar1->Entries + uVar23))->QuadPart = (LONGLONG)local_c0;
      pFVar1->Entries[uVar23].field_0x15 = 2;
      *(char **)&pFVar1->Entries[uVar23].field_0x8 = "BeginEndbenchmarkInner2";
      *(uint *)&pFVar1->Entries[uVar23].field_0x10 = uVar5;
      (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
    }
    if (__CsvProfilerStat5028 == false) {
      FCsvProfilerTrace::OutputInlineStat("BeginEndbenchmarkInner3",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat5028 = true;
    }
    uVar6 = _GCsvCategory_CsvTest.Index;
    uVar25 = (ulonglong)_GCsvCategory_CsvTest.Index;
    if (GCsvProfilerIsCapturing != false) {
      if (GCsvCategoriesEnabled[uVar25] != false) {
        if (GCsvProfilerNamedEventsTiming != false) {
          local_res20.StatName._0_4_ = 0xffff80ff;
          CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_BeginEndbenchmarkInner3");
        }
        pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
        if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
          pFVar16 = FCsvProfilerThreadData::CreateTLSData();
        }
        QueryPerformanceCounter(&local_b8);
        FCsvProfilerTrace::OutputBeginStat("BeginEndbenchmarkInner3",uVar6,local_b8.QuadPart);
        uVar23 = (pFVar16->TimingMarkers).Counter;
        uVar22 = uVar23 & 0xff;
        if ((char)uVar23 == '\0') {
          TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                    (&pFVar16->TimingMarkers);
        }
        pFVar1 = (pFVar16->TimingMarkers).TailBlock;
        ((LARGE_INTEGER *)(pFVar1->Entries + uVar22))->QuadPart = (LONGLONG)local_b8;
        pFVar1->Entries[uVar22].field_0x15 = 2;
        *(char **)&pFVar1->Entries[uVar22].field_0x8 = "BeginEndbenchmarkInner3";
        *(uint *)&pFVar1->Entries[uVar22].field_0x10 = uVar6;
        (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
      }
      if (GCsvProfilerIsCapturing != false) {
        if (GCsvCategoriesEnabled[uVar25] != false) {
          pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
          if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
            pFVar16 = FCsvProfilerThreadData::CreateTLSData();
          }
          QueryPerformanceCounter(&local_b0);
          FCsvProfilerTrace::OutputEndStat("BeginEndbenchmarkInner3",uVar6,local_b0.QuadPart);
          uVar25 = (pFVar16->TimingMarkers).Counter;
          uVar23 = uVar25 & 0xff;
          if ((char)uVar25 == '\0') {
            TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                      (&pFVar16->TimingMarkers);
          }
          pFVar1 = (pFVar16->TimingMarkers).TailBlock;
          ((LARGE_INTEGER *)(pFVar1->Entries + uVar23))->QuadPart = (LONGLONG)local_b0;
          *(char **)&pFVar1->Entries[uVar23].field_0x8 = "BeginEndbenchmarkInner3";
          pFVar1->Entries[uVar23].field_0x15 = 0;
          *(uint *)&pFVar1->Entries[uVar23].field_0x10 = uVar6;
          (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
          if (GCsvProfilerNamedEventsTiming != false) {
            if (CpuChannel->Enabled < 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            else {
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
        }
        if (GCsvProfilerIsCapturing != false) {
          if (GCsvCategoriesEnabled[uVar20] != false) {
            pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
            if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
              pFVar16 = FCsvProfilerThreadData::CreateTLSData();
            }
            QueryPerformanceCounter(&local_a8);
            FCsvProfilerTrace::OutputEndStat("BeginEndbenchmarkInner2",uVar5,local_a8.QuadPart);
            uVar20 = (pFVar16->TimingMarkers).Counter;
            uVar25 = uVar20 & 0xff;
            if ((char)uVar20 == '\0') {
              TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                        (&pFVar16->TimingMarkers);
            }
            pFVar1 = (pFVar16->TimingMarkers).TailBlock;
            ((LARGE_INTEGER *)(pFVar1->Entries + uVar25))->QuadPart = (LONGLONG)local_a8;
            pFVar1->Entries[uVar25].field_0x15 = 0;
            *(char **)&pFVar1->Entries[uVar25].field_0x8 = "BeginEndbenchmarkInner2";
            *(uint *)&pFVar1->Entries[uVar25].field_0x10 = uVar5;
            (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
            if (GCsvProfilerNamedEventsTiming != false) {
              if (CpuChannel->Enabled < 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              else {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
          }
          if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar21] != false)) {
            pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
            if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
              pFVar16 = FCsvProfilerThreadData::CreateTLSData();
            }
            QueryPerformanceCounter(&local_a0);
            FCsvProfilerTrace::OutputEndStat("BeginEndbenchmarkInner1",uVar10,local_a0.QuadPart);
            uVar21 = (pFVar16->TimingMarkers).Counter;
            uVar20 = uVar21 & 0xff;
            if ((char)uVar21 == '\0') {
              TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                        (&pFVar16->TimingMarkers);
            }
            pFVar1 = (pFVar16->TimingMarkers).TailBlock;
            ((LARGE_INTEGER *)(pFVar1->Entries + uVar20))->QuadPart = (LONGLONG)local_a0;
            pFVar1->Entries[uVar20].field_0x15 = 0;
            *(char **)&pFVar1->Entries[uVar20].field_0x8 = "BeginEndbenchmarkInner1";
            *(uint *)&pFVar1->Entries[uVar20].field_0x10 = uVar10;
            (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
            if (GCsvProfilerNamedEventsTiming != false) {
              if (CpuChannel->Enabled < 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              else {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
          }
        }
      }
    }
    if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar18] != false)) {
      pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
        pFVar16 = FCsvProfilerThreadData::CreateTLSData();
      }
      QueryPerformanceCounter(&local_d8);
      FCsvProfilerTrace::OutputEndStat("BeginEndbenchmarkInner0",uVar11,local_d8.QuadPart);
      uVar18 = (pFVar16->TimingMarkers).Counter;
      uVar21 = uVar18 & 0xff;
      if ((char)uVar18 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar16->TimingMarkers);
      }
      pFVar1 = (pFVar16->TimingMarkers).TailBlock;
      ((LARGE_INTEGER *)(pFVar1->Entries + uVar21))->QuadPart = (LONGLONG)local_d8;
      pFVar1->Entries[uVar21].field_0x15 = 0;
      *(char **)&pFVar1->Entries[uVar21].field_0x8 = "BeginEndbenchmarkInner0";
      *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
      (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
      if (GCsvProfilerNamedEventsTiming != false) {
        if (CpuChannel->Enabled < 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        else {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
    }
    local_e8.QuadPart = local_e8.QuadPart + -1;
  } while ((char *)local_e8.QuadPart != (char *)0x0);
  FScopedCsvStat::~FScopedCsvStat(&local_80);
  iVar26 = 0;
  if (__CsvProfilerStat5033 == false) {
    FCsvProfilerTrace::OutputInlineStat("CustomStatTimer",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat5033 = true;
  }
  uVar11 = _GCsvCategory_CsvTest.Index;
  uVar18 = (ulonglong)_GCsvCategory_CsvTest.Index;
  local_d0 = (LARGE_INTEGER *)CONCAT44(local_d0._4_4_,_GCsvCategory_CsvTest.Index);
  local_d8.QuadPart = 0x1506be0a8;
  if ((GCsvProfilerIsCapturing != false) && (GCsvCategoriesEnabled[uVar18] != false)) {
    if (GCsvProfilerNamedEventsTiming != false) {
      local_res8.s.LowPart = 0xffff80ff;
      CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_CustomStatTimer");
    }
    pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
      pFVar16 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputBeginStat
              ("CustomStatTimer",uVar11,CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart));
    uVar18 = (pFVar16->TimingMarkers).Counter;
    uVar21 = uVar18 & 0xff;
    if ((char)uVar18 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar16->TimingMarkers)
      ;
    }
    pFVar1 = (pFVar16->TimingMarkers).TailBlock;
    *(ulonglong *)(pFVar1->Entries + uVar21) = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
    pFVar1->Entries[uVar21].field_0x15 = 2;
    *(char **)&pFVar1->Entries[uVar21].field_0x8 = "CustomStatTimer";
    *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
    (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
    uVar18 = (ulonglong)_GCsvCategory_CsvTest.Index;
  }
  iVar24 = 0;
  iVar19 = 99;
  while( true ) {
    uVar11 = (uint)uVar18;
    if (__CsvProfilerStat5036 == false) {
      FCsvProfilerTrace::OutputInlineStat("SetStat_99",(uint)uVar18);
      __CsvProfilerStat5036 = true;
      uVar11 = _GCsvCategory_CsvTest.Index;
    }
    FCsvProfiler::RecordCustomStat("SetStat_99",uVar11,iVar24,Set);
    if (__CsvProfilerStat5037 == false) {
      FCsvProfilerTrace::OutputInlineStat("MaxStat_99",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat5037 = true;
    }
    FCsvProfiler::RecordCustomStat("MaxStat_99",_GCsvCategory_CsvTest.Index,iVar19,Max);
    if (__CsvProfilerStat5038 == false) {
      FCsvProfilerTrace::OutputInlineStat("MinStat_0",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat5038 = true;
    }
    FCsvProfiler::RecordCustomStat("MinStat_0",_GCsvCategory_CsvTest.Index,iVar24,Min);
    if (__CsvProfilerStat5039 == false) {
      FCsvProfilerTrace::OutputInlineStat("AccStat_4950",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat5039 = true;
    }
    FCsvProfiler::RecordCustomStat("AccStat_4950",_GCsvCategory_CsvTest.Index,iVar24,Accumulate);
    aVar8 = local_98;
    iVar24 = iVar24 + 1;
    iVar19 = iVar19 + -1;
    if (iVar19 < 0) break;
    uVar18 = (ulonglong)_GCsvCategory_CsvTest.Index;
  }
  if (100 < (uint)local_98) {
    if (__CsvProfilerStat5043 == false) {
      FCsvProfilerTrace::OutputInlineStat("TimerOver100",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat5043 = true;
    }
    uVar11 = _GCsvCategory_CsvTest.Index;
    local_e0 = _GCsvCategory_CsvTest.Index;
    local_e8.QuadPart = 0x1506be110;
    if ((GCsvProfilerIsCapturing != false) &&
       (GCsvCategoriesEnabled[_GCsvCategory_CsvTest.Index] != false)) {
      if (GCsvProfilerNamedEventsTiming != false) {
        local_res8.s.LowPart = 0xffff80ff;
        CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_TimerOver100");
      }
      pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
        pFVar16 = FCsvProfilerThreadData::CreateTLSData();
      }
      QueryPerformanceCounter(&local_res8);
      FCsvProfilerTrace::OutputBeginStat
                ("TimerOver100",uVar11,CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart));
      uVar18 = (pFVar16->TimingMarkers).Counter;
      uVar21 = uVar18 & 0xff;
      if ((char)uVar18 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar16->TimingMarkers);
      }
      pFVar1 = (pFVar16->TimingMarkers).TailBlock;
      *(ulonglong *)(pFVar1->Entries + uVar21) =
           CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
      pFVar1->Entries[uVar21].field_0x15 = 2;
      *(char **)&pFVar1->Entries[uVar21].field_0x8 = "TimerOver100";
      *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
      (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
    }
    if (__CsvProfilerStat5044 == false) {
      FCsvProfilerTrace::OutputInlineStat("CustomStatOver100",_GCsvCategory_CsvTest.Index);
      __CsvProfilerStat5044 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("CustomStatOver100",_GCsvCategory_CsvTest.Index,(int)aVar8 + -100,Set);
    FScopedCsvStat::~FScopedCsvStat((FScopedCsvStat *)&local_e8.s);
  }
  FScopedCsvStat::~FScopedCsvStat((FScopedCsvStat *)&local_d8.s);
  if (__CsvProfilerStat5048 == false) {
    FCsvProfilerTrace::OutputInlineStat("EventTimer",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat5048 = true;
  }
  uVar11 = _GCsvCategory_CsvTest.Index;
  local_e0 = _GCsvCategory_CsvTest.Index;
  local_e8.QuadPart = 0x1506be150;
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_CsvTest.Index] != false)) {
    if (GCsvProfilerNamedEventsTiming != false) {
      local_res8.s.LowPart = 0xffff80ff;
      CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_EventTimer");
    }
    pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
      pFVar16 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputBeginStat
              ("EventTimer",uVar11,CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart));
    uVar18 = (pFVar16->TimingMarkers).Counter;
    uVar21 = uVar18 & 0xff;
    if ((char)uVar18 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar16->TimingMarkers)
      ;
    }
    pFVar1 = (pFVar16->TimingMarkers).TailBlock;
    *(ulonglong *)(pFVar1->Entries + uVar21) = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
    pFVar1->Entries[uVar21].field_0x15 = 2;
    *(char **)&pFVar1->Entries[uVar21].field_0x8 = "EventTimer";
    *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
    (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
  }
  if (((uint)aVar8 % 0x14 < 2) &&
     (FCsvProfiler::RecordEventfInternal(_GCsvCategory_CsvTest.Index,L"This is frame %d"),
     -1 < BookmarkChannel->Enabled)) {
    if (__BookmarkPoint5051 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint5051,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                 ,0x13bb,L"CsvTest/This is frame %d");
      __BookmarkPoint5051 = true;
    }
    uVar11 = GFrameNumber;
    uVar10 = CallstackTrace_GetCurrentId();
    FMiscTrace::OutputBookmark<unsigned_int>(uVar10,&__BookmarkPoint5051,uVar11);
  }
  if (aVar8 == (atomic<float>)(((uint)aVar8 / 0x32) * 0x32)) {
    do {
      FCsvProfiler::RecordEventfInternal(_GCsvCategory_CsvTest.Index,L"Multiple Event %d");
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint5057 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint5057,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                     ,0x13c1,L"CsvTest/Multiple Event %d");
          __BookmarkPoint5057 = true;
        }
        uVar11 = CallstackTrace_GetCurrentId();
        FMiscTrace::OutputBookmark<int>(uVar11,&__BookmarkPoint5057,iVar26);
      }
      iVar26 = iVar26 + 1;
    } while (iVar26 < 5);
  }
  FScopedCsvStat::~FScopedCsvStat((FScopedCsvStat *)&local_e8.s);
  if (__CsvProfilerStat5062 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("ExclusiveLevel0");
    __CsvProfilerStat5062 = true;
  }
  local_res20.StatName = "ExclusiveLevel0";
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
    if (GCsvProfilerNamedEventsExclusive != false) {
      local_res8.s.LowPart = 0xffff8080;
      CsvBeginNamedEvent((FColor)0xffff8080,"CSV_ExclusiveLevel0");
    }
    pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
      pFVar16 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputBeginExclusiveStat
              ("ExclusiveLevel0",_GCsvCategory_Exclusive.Index,
               CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart));
    uVar18 = (pFVar16->TimingMarkers).Counter;
    uVar21 = uVar18 & 0xff;
    if ((char)uVar18 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar16->TimingMarkers)
      ;
    }
    uVar11 = _GCsvCategory_Exclusive.Index;
    pFVar1 = (pFVar16->TimingMarkers).TailBlock;
    *(ulonglong *)(pFVar1->Entries + uVar21) = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
    pFVar1->Entries[uVar21].field_0x15 = 0x12;
    *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveLevel0";
    *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
    (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
  }
  if (__CsvProfilerStat5064 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("ExclusiveLevel1");
    __CsvProfilerStat5064 = true;
  }
  local_res18.QuadPart = 0x1506be258;
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
    if (GCsvProfilerNamedEventsExclusive != false) {
      local_res8.s.LowPart = 0xffff8080;
      CsvBeginNamedEvent((FColor)0xffff8080,"CSV_ExclusiveLevel1");
    }
    pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
      pFVar16 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputBeginExclusiveStat
              ("ExclusiveLevel1",_GCsvCategory_Exclusive.Index,
               CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart));
    uVar18 = (pFVar16->TimingMarkers).Counter;
    uVar21 = uVar18 & 0xff;
    if ((char)uVar18 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar16->TimingMarkers)
      ;
    }
    uVar11 = _GCsvCategory_Exclusive.Index;
    pFVar1 = (pFVar16->TimingMarkers).TailBlock;
    *(ulonglong *)(pFVar1->Entries + uVar21) = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
    pFVar1->Entries[uVar21].field_0x15 = 0x12;
    *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveLevel1";
    *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
    (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
  }
  if (__CsvProfilerStat5065 == false) {
    FCsvProfilerTrace::OutputInlineStat("NonExclusiveTestLevel1",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat5065 = true;
  }
  uVar11 = _GCsvCategory_CsvTest.Index;
  local_d0 = (LARGE_INTEGER *)CONCAT44(local_d0._4_4_,_GCsvCategory_CsvTest.Index);
  local_d8.QuadPart = 0x1506be280;
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_CsvTest.Index] != false)) {
    if (GCsvProfilerNamedEventsTiming != false) {
      local_res8.s.LowPart = 0xffff80ff;
      CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_NonExclusiveTestLevel1");
    }
    pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
      pFVar16 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputBeginStat
              ("NonExclusiveTestLevel1",uVar11,CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart))
    ;
    uVar18 = (pFVar16->TimingMarkers).Counter;
    uVar21 = uVar18 & 0xff;
    if ((char)uVar18 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar16->TimingMarkers)
      ;
    }
    pFVar1 = (pFVar16->TimingMarkers).TailBlock;
    *(ulonglong *)(pFVar1->Entries + uVar21) = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
    pFVar1->Entries[uVar21].field_0x15 = 2;
    *(char **)&pFVar1->Entries[uVar21].field_0x8 = "NonExclusiveTestLevel1";
    *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
    (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
  }
  FWindowsPlatformProcess::Sleep(__real_3b03126f);
  if (__CsvProfilerStat5068 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("ExclusiveLevel2");
    __CsvProfilerStat5068 = true;
  }
  local_res10.QuadPart = 0x1506be2b8;
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
    if (GCsvProfilerNamedEventsExclusive != false) {
      local_res8.s.LowPart = 0xffff8080;
      CsvBeginNamedEvent((FColor)0xffff8080,"CSV_ExclusiveLevel2");
    }
    pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
      pFVar16 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputBeginExclusiveStat
              ("ExclusiveLevel2",_GCsvCategory_Exclusive.Index,
               CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart));
    uVar18 = (pFVar16->TimingMarkers).Counter;
    uVar21 = uVar18 & 0xff;
    if ((char)uVar18 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar16->TimingMarkers)
      ;
    }
    uVar11 = _GCsvCategory_Exclusive.Index;
    pFVar1 = (pFVar16->TimingMarkers).TailBlock;
    *(ulonglong *)(pFVar1->Entries + uVar21) = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
    pFVar1->Entries[uVar21].field_0x15 = 0x12;
    *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveLevel2";
    *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
    (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
  }
  if (__CsvProfilerStat5069 == false) {
    FCsvProfilerTrace::OutputInlineStat("NonExclusiveTestLevel2",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat5069 = true;
  }
  uVar11 = _GCsvCategory_CsvTest.Index;
  local_e0 = _GCsvCategory_CsvTest.Index;
  local_e8.QuadPart = 0x1506be2e0;
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_CsvTest.Index] != false)) {
    if (GCsvProfilerNamedEventsTiming != false) {
      local_res8.s.LowPart = 0xffff80ff;
      CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_NonExclusiveTestLevel2");
    }
    pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
      pFVar16 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputBeginStat
              ("NonExclusiveTestLevel2",uVar11,CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart))
    ;
    uVar18 = (pFVar16->TimingMarkers).Counter;
    uVar21 = uVar18 & 0xff;
    if ((char)uVar18 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar16->TimingMarkers)
      ;
    }
    pFVar1 = (pFVar16->TimingMarkers).TailBlock;
    *(ulonglong *)(pFVar1->Entries + uVar21) = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
    pFVar1->Entries[uVar21].field_0x15 = 2;
    *(char **)&pFVar1->Entries[uVar21].field_0x8 = "NonExclusiveTestLevel2";
    *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
    (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
  }
  FWindowsPlatformProcess::Sleep(__real_3b449ba6);
  FScopedCsvStat::~FScopedCsvStat((FScopedCsvStat *)&local_e8.s);
  FScopedCsvStatExclusive::~FScopedCsvStatExclusive((FScopedCsvStatExclusive *)&local_res10.s);
  FScopedCsvStat::~FScopedCsvStat((FScopedCsvStat *)&local_d8.s);
  FScopedCsvStatExclusive::~FScopedCsvStatExclusive((FScopedCsvStatExclusive *)&local_res18.s);
  FWindowsPlatformProcess::Sleep(__real_3a83126f);
  FScopedCsvStatExclusive::~FScopedCsvStatExclusive(&local_res20);
  if (__CsvProfilerStat5076 == false) {
    FCsvProfilerTrace::OutputInlineStat("ExclusiveTimerStatTimer",_GCsvCategory_CsvTest.Index);
    __CsvProfilerStat5076 = true;
  }
  uVar11 = _GCsvCategory_CsvTest.Index;
  local_88 = _GCsvCategory_CsvTest.Index;
  local_90.QuadPart = 0x1506be318;
  if ((GCsvProfilerIsCapturing != false) &&
     (GCsvCategoriesEnabled[_GCsvCategory_CsvTest.Index] != false)) {
    if (GCsvProfilerNamedEventsTiming != false) {
      local_res8.s.LowPart = 0xffff80ff;
      CsvBeginNamedEvent((FColor)0xffff80ff,"CSV_ExclusiveTimerStatTimer");
    }
    pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
    if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
      pFVar16 = FCsvProfilerThreadData::CreateTLSData();
    }
    QueryPerformanceCounter(&local_res8);
    FCsvProfilerTrace::OutputBeginStat
              ("ExclusiveTimerStatTimer",uVar11,CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart)
              );
    uVar18 = (pFVar16->TimingMarkers).Counter;
    uVar21 = uVar18 & 0xff;
    if ((char)uVar18 == '\0') {
      TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock(&pFVar16->TimingMarkers)
      ;
    }
    pFVar1 = (pFVar16->TimingMarkers).TailBlock;
    *(ulonglong *)(pFVar1->Entries + uVar21) = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
    pFVar1->Entries[uVar21].field_0x15 = 2;
    *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveTimerStatTimer";
    *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
    (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
  }
  lVar27 = 100;
  do {
    if (DAT_154f0c5b2 == '\0') {
      FCsvProfilerTrace::OutputInlineStatExclusive("ExclusiveBeginEndbenchmarkInner0");
      DAT_154f0c5b2 = '\x01';
    }
    if ((GCsvProfilerIsCapturing != false) &&
       (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
      if (GCsvProfilerNamedEventsExclusive != false) {
        local_res8.s.LowPart = 0xffff8080;
        CsvBeginNamedEvent((FColor)0xffff8080,"CSV_ExclusiveBeginEndbenchmarkInner0");
      }
      pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
        pFVar16 = FCsvProfilerThreadData::CreateTLSData();
      }
      QueryPerformanceCounter(&local_e8);
      FCsvProfilerTrace::OutputBeginExclusiveStat
                ("ExclusiveBeginEndbenchmarkInner0",_GCsvCategory_Exclusive.Index,local_e8.QuadPart)
      ;
      uVar18 = (pFVar16->TimingMarkers).Counter;
      uVar21 = uVar18 & 0xff;
      if ((char)uVar18 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar16->TimingMarkers);
      }
      uVar11 = _GCsvCategory_Exclusive.Index;
      pFVar1 = (pFVar16->TimingMarkers).TailBlock;
      ((LARGE_INTEGER *)(pFVar1->Entries + uVar21))->QuadPart = (LONGLONG)local_e8;
      *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveBeginEndbenchmarkInner0";
      pFVar1->Entries[uVar21].field_0x15 = 0x12;
      *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
      (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
    }
    if (DAT_154f0c5b3 == '\0') {
      FCsvProfilerTrace::OutputInlineStatExclusive("ExclusiveBeginEndbenchmarkInner1");
      DAT_154f0c5b3 = '\x01';
    }
    if ((GCsvProfilerIsCapturing != false) &&
       (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
      if (GCsvProfilerNamedEventsExclusive != false) {
        local_res10.s.LowPart = 0xffff8080;
        CsvBeginNamedEvent((FColor)0xffff8080,"CSV_ExclusiveBeginEndbenchmarkInner1");
      }
      pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
        pFVar16 = FCsvProfilerThreadData::CreateTLSData();
      }
      QueryPerformanceCounter(&local_d8);
      FCsvProfilerTrace::OutputBeginExclusiveStat
                ("ExclusiveBeginEndbenchmarkInner1",_GCsvCategory_Exclusive.Index,local_d8.QuadPart)
      ;
      uVar18 = (pFVar16->TimingMarkers).Counter;
      uVar21 = uVar18 & 0xff;
      if ((char)uVar18 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar16->TimingMarkers);
      }
      uVar11 = _GCsvCategory_Exclusive.Index;
      pFVar1 = (pFVar16->TimingMarkers).TailBlock;
      ((LARGE_INTEGER *)(pFVar1->Entries + uVar21))->QuadPart = (LONGLONG)local_d8;
      pFVar1->Entries[uVar21].field_0x15 = 0x12;
      *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveBeginEndbenchmarkInner1";
      *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
      (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
    }
    if (DAT_154f0c5b4 == '\0') {
      FCsvProfilerTrace::OutputInlineStatExclusive("ExclusiveBeginEndbenchmarkInner2");
      DAT_154f0c5b4 = '\x01';
    }
    if ((GCsvProfilerIsCapturing != false) &&
       (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
      if (GCsvProfilerNamedEventsExclusive != false) {
        local_res18.s.LowPart = 0xffff8080;
        CsvBeginNamedEvent((FColor)0xffff8080,"CSV_ExclusiveBeginEndbenchmarkInner2");
      }
      pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
      if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
        pFVar16 = FCsvProfilerThreadData::CreateTLSData();
      }
      QueryPerformanceCounter(&local_a0);
      FCsvProfilerTrace::OutputBeginExclusiveStat
                ("ExclusiveBeginEndbenchmarkInner2",_GCsvCategory_Exclusive.Index,local_a0.QuadPart)
      ;
      uVar18 = (pFVar16->TimingMarkers).Counter;
      uVar21 = uVar18 & 0xff;
      if ((char)uVar18 == '\0') {
        TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                  (&pFVar16->TimingMarkers);
      }
      uVar11 = _GCsvCategory_Exclusive.Index;
      pFVar1 = (pFVar16->TimingMarkers).TailBlock;
      ((LARGE_INTEGER *)(pFVar1->Entries + uVar21))->QuadPart = (LONGLONG)local_a0;
      pFVar1->Entries[uVar21].field_0x15 = 0x12;
      *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveBeginEndbenchmarkInner2";
      *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
      (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
    }
    if (DAT_154f0c5b5 == '\0') {
      FCsvProfilerTrace::OutputInlineStatExclusive("ExclusiveBeginEndbenchmarkInner3");
      DAT_154f0c5b5 = '\x01';
    }
    if (GCsvProfilerIsCapturing != false) {
      if (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false) {
        if (GCsvProfilerNamedEventsExclusive != false) {
          local_res20.StatName._0_4_ = 0xffff8080;
          CsvBeginNamedEvent((FColor)0xffff8080,"CSV_ExclusiveBeginEndbenchmarkInner3");
        }
        pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
        if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
          pFVar16 = FCsvProfilerThreadData::CreateTLSData();
        }
        QueryPerformanceCounter(&local_a8);
        FCsvProfilerTrace::OutputBeginExclusiveStat
                  ("ExclusiveBeginEndbenchmarkInner3",_GCsvCategory_Exclusive.Index,
                   local_a8.QuadPart);
        uVar18 = (pFVar16->TimingMarkers).Counter;
        uVar21 = uVar18 & 0xff;
        if ((char)uVar18 == '\0') {
          TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                    (&pFVar16->TimingMarkers);
        }
        uVar11 = _GCsvCategory_Exclusive.Index;
        pFVar1 = (pFVar16->TimingMarkers).TailBlock;
        ((LARGE_INTEGER *)(pFVar1->Entries + uVar21))->QuadPart = (LONGLONG)local_a8;
        pFVar1->Entries[uVar21].field_0x15 = 0x12;
        *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveBeginEndbenchmarkInner3";
        *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
        (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
      }
      if (GCsvProfilerIsCapturing != false) {
        if (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false) {
          pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
          if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
            pFVar16 = FCsvProfilerThreadData::CreateTLSData();
          }
          QueryPerformanceCounter(&local_b0);
          FCsvProfilerTrace::OutputEndExclusiveStat
                    ("ExclusiveBeginEndbenchmarkInner3",_GCsvCategory_Exclusive.Index,
                     local_b0.QuadPart);
          uVar18 = (pFVar16->TimingMarkers).Counter;
          uVar21 = uVar18 & 0xff;
          if ((char)uVar18 == '\0') {
            TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                      (&pFVar16->TimingMarkers);
          }
          uVar11 = _GCsvCategory_Exclusive.Index;
          pFVar1 = (pFVar16->TimingMarkers).TailBlock;
          ((LARGE_INTEGER *)(pFVar1->Entries + uVar21))->QuadPart = (LONGLONG)local_b0;
          pFVar1->Entries[uVar21].field_0x15 = 0x10;
          *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveBeginEndbenchmarkInner3";
          *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
          (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
          if (GCsvProfilerNamedEventsExclusive != false) {
            if (CpuChannel->Enabled < 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            else {
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
        }
        if (GCsvProfilerIsCapturing != false) {
          if (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false) {
            pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
            if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
              pFVar16 = FCsvProfilerThreadData::CreateTLSData();
            }
            QueryPerformanceCounter(&local_b8);
            FCsvProfilerTrace::OutputEndExclusiveStat
                      ("ExclusiveBeginEndbenchmarkInner2",_GCsvCategory_Exclusive.Index,
                       local_b8.QuadPart);
            uVar18 = (pFVar16->TimingMarkers).Counter;
            uVar21 = uVar18 & 0xff;
            if ((char)uVar18 == '\0') {
              TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                        (&pFVar16->TimingMarkers);
            }
            uVar11 = _GCsvCategory_Exclusive.Index;
            pFVar1 = (pFVar16->TimingMarkers).TailBlock;
            ((LARGE_INTEGER *)(pFVar1->Entries + uVar21))->QuadPart = (LONGLONG)local_b8;
            pFVar1->Entries[uVar21].field_0x15 = 0x10;
            *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveBeginEndbenchmarkInner2";
            *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
            (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
            if (GCsvProfilerNamedEventsExclusive != false) {
              if (CpuChannel->Enabled < 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              else {
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
          }
          if (GCsvProfilerIsCapturing != false) {
            if (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false) {
              pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
              if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
                pFVar16 = FCsvProfilerThreadData::CreateTLSData();
              }
              QueryPerformanceCounter(&local_c0);
              FCsvProfilerTrace::OutputEndExclusiveStat
                        ("ExclusiveBeginEndbenchmarkInner1",_GCsvCategory_Exclusive.Index,
                         local_c0.QuadPart);
              uVar18 = (pFVar16->TimingMarkers).Counter;
              uVar21 = uVar18 & 0xff;
              if ((char)uVar18 == '\0') {
                TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                          (&pFVar16->TimingMarkers);
              }
              uVar11 = _GCsvCategory_Exclusive.Index;
              pFVar1 = (pFVar16->TimingMarkers).TailBlock;
              ((LARGE_INTEGER *)(pFVar1->Entries + uVar21))->QuadPart = (LONGLONG)local_c0;
              pFVar1->Entries[uVar21].field_0x15 = 0x10;
              *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveBeginEndbenchmarkInner1";
              *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
              (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
              if (GCsvProfilerNamedEventsExclusive != false) {
                if (CpuChannel->Enabled < 0) {
                  FGenericPlatformMisc::EndNamedEvent();
                }
                else {
                  FCpuProfilerTrace::OutputEndEvent();
                }
              }
            }
            if ((GCsvProfilerIsCapturing != false) &&
               (GCsvCategoriesEnabled[_GCsvCategory_Exclusive.Index] != false)) {
              pFVar16 = TlsGetValue(FCsvProfilerThreadData::Singleton.TlsSlot);
              if (pFVar16 == (FCsvProfilerThreadData *)0x0) {
                pFVar16 = FCsvProfilerThreadData::CreateTLSData();
              }
              QueryPerformanceCounter(&local_c8);
              FCsvProfilerTrace::OutputEndExclusiveStat
                        ("ExclusiveBeginEndbenchmarkInner0",_GCsvCategory_Exclusive.Index,
                         local_c8.QuadPart);
              uVar18 = (pFVar16->TimingMarkers).Counter;
              uVar21 = uVar18 & 0xff;
              if ((char)uVar18 == '\0') {
                TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
                          (&pFVar16->TimingMarkers);
              }
              uVar11 = _GCsvCategory_Exclusive.Index;
              pFVar1 = (pFVar16->TimingMarkers).TailBlock;
              ((LARGE_INTEGER *)(pFVar1->Entries + uVar21))->QuadPart = (LONGLONG)local_c8;
              pFVar1->Entries[uVar21].field_0x15 = 0x10;
              *(char **)&pFVar1->Entries[uVar21].field_0x8 = "ExclusiveBeginEndbenchmarkInner0";
              *(uint *)&pFVar1->Entries[uVar21].field_0x10 = uVar11;
              (pFVar16->TimingMarkers).Counter = (pFVar16->TimingMarkers).Counter + 1;
              if (GCsvProfilerNamedEventsExclusive != false) {
                if (CpuChannel->Enabled < 0) {
                  FGenericPlatformMisc::EndNamedEvent();
                }
                else {
                  FCpuProfilerTrace::OutputEndEvent();
                }
              }
            }
          }
        }
      }
    }
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  FScopedCsvStat::~FScopedCsvStat((FScopedCsvStat *)&local_90.s);
  FScopedCsvStat::~FScopedCsvStat(local_70);
  return;
}

// CallstackTrace_Create @ 14192c730

void __cdecl CallstackTrace_Create(FMalloc *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      CallstackTrace_CreateInternal(param_1);
      InitOnce = true;
      _Init_thread_footer(&_TSS0);
    }
  }
  return;
}

// CallstackTrace_Initialize @ 14192c7a0

void __cdecl CallstackTrace_Initialize(void)

{
  GCallStackTracingTlsSlotIndex = TlsAlloc();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      CallstackTrace_InitializeInternal();
      InitOnce = true;
      _Init_thread_footer(&_TSS0);
    }
  }
  return;
}

// ConsumeBasicText @ 14192ed20

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeBasicText
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TextFilterExpressionParser::ConsumeBasicText'::__l2::<lambda_1>,bool,wchar_t>
             ::Call;
  ConsumeTextImpl(__return_storage_ptr__,param_1,(TFunctionRef<bool___cdecl(wchar_t)> *)&local_18);
  return __return_storage_ptr__;
}

// ConsumeComplexText @ 14192ed60

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeComplexText
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TextFilterExpressionParser::ConsumeComplexText'::__l2::<lambda_1>,bool,wchar_t>
             ::Call;
  ConsumeTextImpl(__return_storage_ptr__,param_1,(TFunctionRef<bool___cdecl(wchar_t)> *)&local_18);
  return __return_storage_ptr__;
}

// ConsumeNumber @ 14192eda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeNumber
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTokenStream<wchar_t> *pTVar3;
  TOptional<FExpressionError> *pTVar4;
  undefined1 auStack_d8 [32];
  FTextFilterString local_b8;
  FString local_98;
  TOptional<TStringToken<wchar_t>_> local_88;
  undefined1 local_68 [24];
  FScriptContainerElement *local_50;
  int local_48;
  int local_44;
  FScriptContainerElement *local_40;
  int local_38;
  int local_34;
  uchar local_30 [8];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar3 = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  ExpressionParser::ParseLocalizedNumberWithAgnosticFallback
            (&local_88,pTVar3,(TStringToken<wchar_t> *)0x0,(double *)0x0);
  if (local_88.bIsSet != false) {
    ::FString::ConstructFromPtrSize
              (&local_98,local_88.TypedValue.TokenStart,
               (int)((longlong)local_88.TypedValue.TokenEnd -
                     (longlong)local_88.TypedValue.TokenStart >> 1));
    local_b8.InternalString.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    local_b8.InternalString.Data.ArrayNum = local_98.Data.ArrayNum;
    local_b8.InternalString.Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.InternalStringAnsi.ArrayNum = 0;
    local_b8.InternalStringAnsi.ArrayMax = 0;
    FTextFilterString::UppercaseInternalString(&local_b8);
    local_40 = local_b8.InternalStringAnsi.AllocatorInstance.Data;
    local_44 = local_b8.InternalString.Data.ArrayMax;
    local_48 = local_b8.InternalString.Data.ArrayNum;
    local_50 = local_b8.InternalString.Data.AllocatorInstance.Data;
    local_38 = local_b8.InternalStringAnsi.ArrayNum;
    local_34 = local_b8.InternalStringAnsi.ArrayMax;
    local_b8.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.InternalString.Data.ArrayNum = 0;
    local_b8.InternalString.Data.ArrayMax = 0;
    local_b8.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.InternalStringAnsi.ArrayNum = 0;
    local_b8.InternalStringAnsi.ArrayMax = 0;
    local_68._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
         ::__l2::Global.A;
    local_68._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
         ::__l2::Global.B;
    local_68._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
         ::__l2::Global.C;
    local_68._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
         ::__l2::Global.D;
    local_68._16_8_ = &___7__FInlineDataStorage_VFTextToken_TextFilterExpressionParser___Impl__6B_;
    local_30[0] = '\x01';
    local_30[1] = '\0';
    if (local_88.bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FExpressionError> *)(*pcVar1)();
        return pTVar4;
      }
    }
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_88.TypedValue,(FExpressionNode *)local_68)
    ;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeTextImpl @ 14192ef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFilterExpressionParser::ConsumeTextImpl
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1,TFunctionRef<bool___cdecl(wchar_t)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTokenStream<wchar_t> *this;
  FTextToken *pFVar3;
  TOptional<FExpressionError> *pTVar4;
  undefined1 auStack_148 [32];
  undefined2 local_128 [4];
  FScriptContainerElement *local_120;
  undefined8 local_118;
  undefined4 local_110 [2];
  void *local_108;
  undefined8 local_100;
  FString local_f8;
  code *local_e8;
  undefined2 **local_e0;
  undefined2 *local_d8;
  void **local_d0;
  undefined4 *local_c8;
  TFunctionRef<bool___cdecl(wchar_t)> *local_c0;
  FScriptContainerElement **local_b8;
  TOptional<TStringToken<wchar_t>_> local_b0;
  FTextToken local_90;
  FExpressionNode local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  local_d8 = local_128;
  local_120 = (FScriptContainerElement *)0x0;
  local_d0 = &local_108;
  local_118 = 0;
  local_c8 = local_110;
  local_108 = (void *)0x0;
  local_b8 = &local_120;
  local_100 = 0;
  local_e0 = &local_d8;
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TextFilterExpressionParser::ConsumeTextImpl'::__l2::<lambda_1>,enum_EParseState,wchar_t>
             ::Call;
  local_128[0] = 0;
  local_110[0] = 0;
  local_c0 = param_2;
  TTokenStream<wchar_t>::ParseToken
            (this,&local_b0,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_e8,
             (TStringToken<wchar_t> *)0x0);
  if (local_b0.bIsSet != false) {
    local_f8.Data.AllocatorInstance.Data = local_120;
    local_f8.Data.ArrayNum = (int)local_118;
    local_f8.Data.ArrayMax = local_118._4_4_;
    local_118 = 0;
    local_120 = (FScriptContainerElement *)0x0;
    pFVar3 = CreateTextTokenFromUnquotedString(&local_90,&local_f8);
    FExpressionNode::FExpressionNode<TextFilterExpressionParser::FTextToken>(&local_68,pFVar3);
    if (local_b0.bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FExpressionError> *)(*pcVar1)();
        return pTVar4;
      }
    }
    TExpressionTokenConsumer<wchar_t>::Add(param_1,&local_b0.TypedValue,&local_68);
    FExpressionNode::~FExpressionNode(&local_68);
  }
  __return_storage_ptr__->bIsSet = false;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_120 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120);
  }
  return __return_storage_ptr__;
}

// CreateTextTokenFromUnquotedString @ 141931e30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FTextToken * __cdecl
TextFilterExpressionParser::CreateTextTokenFromUnquotedString
          (FTextToken *__return_storage_ptr__,FString *param_1)

{
  int *piVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FTextToken *pFVar8;
  int iVar9;
  EInvertResult EVar10;
  ETextFilterTextComparisonMode EVar11;
  FTextFilterString local_38;
  
  iVar9 = (param_1->Data).ArrayNum;
  EVar11 = Partial;
  iVar7 = 0;
  iVar6 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar6 = iVar7;
  }
  if (iVar6 < 1) {
LAB_141931ed6:
    piVar1 = &(param_1->Data).ArrayNum;
    iVar9 = *piVar1;
    iVar6 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar6 = iVar7;
    }
    if ((iVar6 < 3) || (bVar5 = ::FString::StartsWith(param_1,L"...",3,CaseSensitive), !bVar5)) {
      iVar9 = (param_1->Data).ArrayNum;
      iVar6 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar6 = iVar7;
      }
      if ((2 < iVar6) && (bVar5 = ::FString::EndsWith(param_1,L"...",3,CaseSensitive), bVar5)) {
        iVar6 = *piVar1;
        EVar11 = StartsWith;
        iVar9 = iVar6 + -4;
        if (iVar6 == 0) {
          iVar9 = -3;
        }
        ::FString::RemoveAt(param_1,iVar9,3,No);
      }
    }
    else {
      EVar11 = EndsWith;
      ::FString::RemoveAt(param_1,0,3,No);
    }
  }
  else {
    if (((iVar9 == 0) || (iVar9 + -1 < 1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FTextToken *)(*pcVar4)();
      return pFVar8;
    }
    if (*(short *)(param_1->Data).AllocatorInstance.Data != 0x2b) goto LAB_141931ed6;
    EVar11 = Exact;
    ::FString::RemoveAt(param_1,0,No);
  }
  iVar9 = (param_1->Data).ArrayNum;
  EVar10 = No;
  iVar6 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (((iVar9 == 0) || (iVar9 + -1 < 1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FTextToken *)(*pcVar4)();
      return pFVar8;
    }
    if (*(short *)(param_1->Data).AllocatorInstance.Data == 0x2d) {
      EVar10 = Yes;
      ::FString::RemoveAt(param_1,0,No);
    }
  }
  iVar9 = (param_1->Data).ArrayNum;
  iVar6 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar6 = iVar7;
  }
  if (1 < iVar6) {
    if (((iVar9 == 0) || (iVar9 + -1 < 1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FTextToken *)(*pcVar4)();
      return pFVar8;
    }
    iVar9 = 0;
    if (*(short *)(param_1->Data).AllocatorInstance.Data != 0x22) {
      iVar6 = (param_1->Data).ArrayNum;
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = iVar9;
      }
      if ((iVar7 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FTextToken *)(*pcVar4)();
        return pFVar8;
      }
      if (*(short *)(param_1->Data).AllocatorInstance.Data != 0x27) goto LAB_14193215a;
    }
    iVar6 = (param_1->Data).ArrayNum;
    iVar7 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar7 = iVar9;
    }
    if ((iVar7 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FTextToken *)(*pcVar4)();
      return pFVar8;
    }
    sVar2 = *(short *)(param_1->Data).AllocatorInstance.Data;
    iVar6 = (param_1->Data).ArrayNum;
    iVar7 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar7 = iVar9;
    }
    if ((((iVar6 == 0) || (iVar7 + -1 < 0)) || (iVar6 + -1 <= iVar7 + -1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FTextToken *)(*pcVar4)();
      return pFVar8;
    }
    if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar7 * 2 + -2) == sVar2) {
      ::FString::RemoveAt(param_1,0,No);
      iVar6 = (param_1->Data).ArrayNum;
      iVar9 = iVar6 + -2;
      if (iVar6 == 0) {
        iVar9 = -1;
      }
      ::FString::RemoveAt(param_1,iVar9,No);
    }
  }
LAB_14193215a:
  local_38.InternalString.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.InternalString.Data.ArrayNum = (param_1->Data).ArrayNum;
  local_38.InternalString.Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  local_38.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.InternalStringAnsi.ArrayNum = 0;
  local_38.InternalStringAnsi.ArrayMax = 0;
  FTextFilterString::UppercaseInternalString(&local_38);
  (__return_storage_ptr__->String).InternalString.Data.AllocatorInstance.Data =
       local_38.InternalString.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->String).InternalString.Data.ArrayNum =
       local_38.InternalString.Data.ArrayNum;
  (__return_storage_ptr__->String).InternalString.Data.ArrayMax =
       local_38.InternalString.Data.ArrayMax;
  (__return_storage_ptr__->String).InternalStringAnsi.AllocatorInstance.Data =
       local_38.InternalStringAnsi.AllocatorInstance.Data;
  (__return_storage_ptr__->String).InternalStringAnsi.ArrayNum =
       local_38.InternalStringAnsi.ArrayNum;
  (__return_storage_ptr__->String).InternalStringAnsi.ArrayMax =
       local_38.InternalStringAnsi.ArrayMax;
  __return_storage_ptr__->TextComparisonMode = EVar11;
  __return_storage_ptr__->InvertResult = EVar10;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  local_38.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.InternalString.Data.ArrayNum = 0;
  local_38.InternalString.Data.ArrayMax = 0;
  local_38.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.InternalStringAnsi.ArrayNum = 0;
  local_38.InternalStringAnsi.ArrayMax = 0;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// CsvBeginNamedEvent @ 141932400

void __cdecl CsvBeginNamedEvent(FColor param_1,FName *param_2)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FColor_u_0 local_res8 [8];
  FString local_18;
  
  local_res8[0] = param_1.field0_0x0;
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (param_2,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
               ,0x1a3);
    return;
  }
  pFVar1 = FName::ToString(param_2,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,pwVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// CsvBeginNamedEvent @ 141932480

void __cdecl CsvBeginNamedEvent(FColor param_1,char *param_2)

{
  FColor_u_0 local_res8 [8];
  
  local_res8[0] = param_1.field0_0x0;
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (param_2,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
               ,0x191);
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,param_2);
  return;
}

// CsvEndNamedEvent @ 1419324d0

void __cdecl CsvEndNamedEvent(void)

{
  longlong lVar1;
  ulong64 uVar2;
  FThreadBuffer *pFVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  int *piVar7;
  ushort uVar8;
  uchar *puVar9;
  LARGE_INTEGER LStackX_8;
  
  if (CpuChannel->Enabled < 0) {
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar7 = (int *)(lVar1 + 0xb58);
  pFVar3 = *(FThreadBuffer **)(lVar1 + 0xb60);
  *piVar7 = *piVar7 + -1;
  if (pFVar3 == (FThreadBuffer *)0x0) {
    pFVar3 = FCpuProfilerTraceInternal::CreateThreadBuffer();
  }
  QueryPerformanceCounter(&LStackX_8);
  uVar2 = pFVar3->LastCycle;
  pFVar3->LastCycle = (ulong64)LStackX_8;
  puVar9 = pFVar3->Buffer + pFVar3->BufferSize;
  uVar6 = (LStackX_8.QuadPart - uVar2) * 4;
  do {
    bVar5 = (byte)uVar6;
    bVar4 = 0;
    if (0x7f < uVar6) {
      bVar4 = 0x80;
    }
    uVar6 = uVar6 >> 7;
    *puVar9 = bVar4 | bVar5 & 0x7f;
    puVar9 = puVar9 + 1;
  } while (uVar6 != 0);
  uVar8 = ((short)puVar9 - (short)pFVar3) - 0x12;
  pFVar3->BufferSize = uVar8;
  if (*piVar7 == 0 || 0xf0 < uVar8) {
    FCpuProfilerTraceInternal::FlushThreadBuffer(pFVar3);
  }
  return;
}

// CsvProfilerBeginFrame @ 1419324f0

void __cdecl CsvProfilerBeginFrame(void)

{
  FCsvProfiler *this;
  
  this = FCsvProfiler::Get();
  FCsvProfiler::BeginFrame(this);
  return;
}

// CsvProfilerBeginFrameRT @ 141932510

void __cdecl CsvProfilerBeginFrameRT(void)

{
  code *pcVar1;
  FBlock *pFVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  FCsvProfiler *pFVar5;
  uint uVar6;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18;
  
  pFVar5 = FCsvProfiler::Get();
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,CsvProfiler,true);
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  pFVar5->RenderThreadId = aVar4;
  UNLOCK();
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0xf77,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GCsvProfilerIsCapturing != false) {
    bVar3 = IsInRenderingThread();
    if (!bVar3) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0x55e,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    GFrameBoundaries.EOPCounter = (atomic<int>)((int)GFrameBoundaries.EOPCounter + 1);
    UNLOCK();
    uVar6 = (uint)GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter;
    if ((GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter & 0xf) == 0) {
      TSingleProducerSingleConsumerList<unsigned___int64,16>::AddTailBlock
                (GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer + 1);
    }
    pFVar2 = GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].TailBlock;
    QueryPerformanceCounter(&local_res10);
    *(LARGE_INTEGER *)(pFVar2->Entries + (uVar6 & 0xf)) = local_res10;
    GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter =
         GFrameBoundaries.FrameBoundaryTimestampsWriteBuffer[1].Counter + 1;
  }
  GCsvProfilerIsCapturingRT = GCsvProfilerIsCapturing;
  if (GCsvTestingRT != false) {
    CSVTest();
  }
  *(bool *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xb68)
       = GCsvTrackWaitsOnRenderThread;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CsvProfilerEndFrame @ 141932680

void __cdecl CsvProfilerEndFrame(void)

{
  FCsvProfiler *this;
  
  this = FCsvProfiler::Get();
  FCsvProfiler::EndFrame(this);
  return;
}

// CsvProfilerEndFrameRT @ 1419326a0

void __cdecl CsvProfilerEndFrameRT(void)

{
  code *pcVar1;
  bool bVar2;
  FCsvProfiler *pFVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  pFVar3 = FCsvProfiler::Get();
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(local_res10,CsvProfiler,true);
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0xf8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GCsvProfilerIsCapturing != false) {
    pFVar3->CaptureFrameNumberRT = pFVar3->CaptureFrameNumberRT + 1;
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CsvProfilerReadConfig @ 141932740

void __cdecl CsvProfilerReadConfig(void)

{
  FCsvCategoryData *this;
  
  this = FCsvCategoryData::Get();
  FCsvCategoryData::UpdateCategoriesFromConfig(this);
  return;
}

// EndReload @ 141936c10

void __cdecl EndReload(void)

{
  GActiveReloadType = None;
  GActiveReloadInterface = (IReload *)0x0;
  return;
}

// FindNewestModuleFile @ 14193dd70

bool __cdecl
FindNewestModuleFile
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FDateTime *param_2,FString *param_3,
          FString *param_4,FString *param_5,FString *param_6)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  IFileManager *pIVar10;
  FString *pFVar11;
  int iVar12;
  ulonglong uVar13;
  long64 lVar14;
  int iVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType _Src_00;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  undefined1 local_b8 [8];
  FString local_b0;
  FString local_a0;
  ForAnyElementType local_90;
  int local_88;
  int local_84;
  uint local_80;
  FString local_78;
  longlong local_68;
  FScriptContainerElement *local_60;
  FString local_58;
  
  lVar14 = param_2->Ticks;
  bVar20 = false;
  local_80 = param_1->ArrayNum;
  uVar13 = (ulonglong)(int)local_80;
  pFVar17 = (param_1->AllocatorInstance).Data;
  bVar4 = false;
  bVar3 = false;
  local_60 = pFVar17 + uVar13 * 0x10;
  bVar5 = false;
  do {
    pFVar1 = local_60;
    if (param_1->ArrayNum != (int)uVar13) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (pFVar17 == pFVar1) {
      return bVar20;
    }
    iVar12 = (param_3->Data).ArrayNum;
    iVar15 = *(int *)(pFVar17 + 8);
    if (iVar12 < 2) {
      _Src = *(void **)pFVar17;
      bVar4 = true;
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = iVar15;
      if (iVar15 == 0) {
        local_84 = 0;
        _Src_00.Data = (FScriptContainerElement *)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar15,0,&local_90,iVar15,&local_84);
        memcpy(local_90.Data,_Src,(longlong)iVar15 * 2);
        _Src_00.Data = local_90.Data;
        iVar15 = local_88;
      }
    }
    else {
      pFVar1 = (param_3->Data).AllocatorInstance.Data;
      uVar18 = iVar15 - 1;
      bVar3 = true;
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar20 = iVar15 == 0;
      if (bVar20) {
        iVar15 = 1;
      }
      pFVar19 = (FScriptContainerElement *)(ulonglong)uVar18;
      if (bVar20) {
        pFVar19 = (FScriptContainerElement *)0x0;
      }
      uVar18 = iVar15 + iVar12;
      local_a0.Data.ArrayNum = iVar12;
      if ((int)uVar18 < iVar12) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar18,0,(ForAnyElementType *)&local_a0,iVar12,&local_a0.Data.ArrayMax);
      memcpy(local_a0.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar12 * 2);
      FString::PathAppend(&local_a0,*(wchar_t **)pFVar17,(int)pFVar19);
      _Src_00.Data = local_a0.Data.AllocatorInstance.Data;
      bVar20 = bVar5;
      iVar15 = local_a0.Data.ArrayNum;
    }
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.Data.ArrayNum = iVar15;
    if (iVar15 == 0) {
      local_b0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar15,0,(ForAnyElementType *)&local_b0,iVar15,&local_b0.Data.ArrayMax);
      memcpy(local_b0.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)iVar15 * 2);
    }
    if ((bVar3) &&
       (bVar3 = false, local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (bVar4 = false, local_90.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_90.Data);
    }
    iVar15 = (param_4->Data).ArrayNum;
    iVar9 = (param_5->Data).ArrayNum;
    iVar12 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar12 = 0;
    }
    iVar9 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar9 = 0;
    }
    iVar15 = local_b0.Data.ArrayNum + -1;
    if (local_b0.Data.ArrayNum == 0) {
      iVar15 = 0;
    }
    if ((iVar15 <= iVar12 + iVar9) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("FoundFilePath.Len() > Prefix.Len() + Suffix.Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                           ,0x192,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    iVar15 = (param_4->Data).ArrayNum;
    iVar9 = (param_5->Data).ArrayNum;
    iVar12 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar12 = 0;
    }
    iVar15 = iVar9 + -1;
    iVar16 = local_b0.Data.ArrayNum + -1;
    if (local_b0.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    if (iVar9 == 0) {
      iVar15 = 0;
    }
    FString::Mid(&local_b0,&local_78,iVar12,(iVar16 - iVar15) - iVar12);
    bVar7 = FString::StartsWith(&local_78,L"-",1,IgnoreCase);
    if ((!bVar7) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Center.StartsWith(L\"-\")",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                           ,0x194,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    bVar7 = FString::IsNumeric(&local_78);
    if (bVar7) {
      pIVar10 = IFileManager::Get();
      (**(code **)((longlong)*pIVar10 + 0xd8))(pIVar10);
      lVar6 = local_68;
      if (local_68 == 0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3710524381336699293>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                           ,0x19d,"FoundFileTime != FDateTime::MinValue()");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
      }
      else if (lVar14 < local_68) {
        bVar20 = true;
        bVar5 = true;
        pFVar11 = FPaths::GetCleanFilename(&local_58,&local_b0);
        if (param_6 != pFVar11) {
          pFVar1 = (param_6->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_6->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_6->Data).ArrayNum = (pFVar11->Data).ArrayNum;
          (param_6->Data).ArrayMax = (pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        lVar14 = lVar6;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    pFVar17 = pFVar17 + 0x10;
    uVar13 = (ulonglong)local_80;
  } while( true );
}

// GetActiveReloadInterface @ 141944c70

IReload * __cdecl GetActiveReloadInterface(void)

{
  return GActiveReloadInterface;
}

// GetActiveReloadType @ 141944c80

EActiveReloadType __cdecl GetActiveReloadType(void)

{
  return GActiveReloadType;
}

// GetClassesToReinstanceForHotReload @ 141945b10

TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_> *
__cdecl GetClassesToReinstanceForHotReload(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetClassesToReinstanceForHotReload'::__l2::_dynamic_atexit_destructor_for__Data__);
      _Init_thread_footer(&_TSS0);
    }
  }
  return &Data;
}

// GetExtensionDirsInternal @ 141946e10

void __cdecl
GetExtensionDirsInternal
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,FString *param_3,
          EGetExtensionDirsFlags param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  IFileManager *pIVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_108 [4];
  uint local_104;
  FString local_100;
  FString local_f0;
  FString local_e0;
  uint local_d0;
  FString local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_b8;
  code *local_b0;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_a0;
  FString local_98;
  EGetExtensionDirsFlags local_88;
  FScriptContainerElement *local_80;
  int local_78;
  undefined8 local_70;
  int aiStack_68 [2];
  FScriptContainerElement *local_60;
  int local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_104 = (uint)param_4;
  if ((param_4 & WithBase) != None) {
    iVar5 = (param_2->Data).ArrayNum;
    pFVar12 = (param_2->Data).AllocatorInstance.Data;
    pFVar14 = (param_3->Data).AllocatorInstance.Data;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    iVar1 = (param_3->Data).ArrayNum;
    iVar11 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar11 = 0;
    }
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    FString::Reserve(&local_c8,iVar11 + 2 + iVar5);
    FString::AppendChars(&local_c8,(wchar_t *)pFVar12,iVar11);
    FString::PathAppend(&local_c8,(wchar_t *)pFVar14,iVar5);
    AddIfDirectoryExists(param_1,&local_c8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_104 & 4) != 0) {
    pFVar12 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.Data.ArrayNum = 0;
    local_f0.Data.ArrayMax = 0;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    FString::Reserve(&local_f0,iVar5 + 0xb);
    FString::AppendChars(&local_f0,(wchar_t *)pFVar12,iVar5);
    FString::PathAppend(&local_f0,L"Platforms",9);
    local_b8 = FDataDrivenPlatformInfoRegistry::GetPlatformDirectoryNames((bool)(param_4 >> 3 & 1));
    local_d0 = local_b8->ArrayNum;
    uVar7 = (ulonglong)(int)local_d0;
    pFVar12 = (local_b8->AllocatorInstance).Data;
    pFVar14 = pFVar12 + uVar7 * 0x10;
    while( true ) {
      if (local_b8->ArrayNum != (int)uVar7) {
        local_108[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_108);
      }
      FVar8.Data = local_f0.Data.AllocatorInstance.Data;
      if (pFVar12 == pFVar14) break;
      local_80 = local_f0.Data.AllocatorInstance.Data;
      local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70 = *(undefined8 *)pFVar12;
      iVar5 = local_f0.Data.ArrayNum + -1;
      if (local_f0.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      local_100.Data.ArrayNum = 0;
      local_100.Data.ArrayMax = 0;
      local_60 = (param_3->Data).AllocatorInstance.Data;
      aiStack_68[0] = *(int *)(pFVar12 + 8) + -1;
      if (*(int *)(pFVar12 + 8) == 0) {
        aiStack_68[0] = 0;
      }
      iVar1 = (param_3->Data).ArrayNum;
      local_58 = iVar1 + -1;
      if (iVar1 == 0) {
        local_58 = 0;
      }
      local_78 = iVar5;
      FString::Reserve(&local_100,local_58 + 3 + aiStack_68[0] + iVar5);
      FString::AppendChars(&local_100,(wchar_t *)FVar8.Data,iVar5);
      puVar9 = &local_70;
      lVar13 = 2;
      do {
        local_48 = *puVar9;
        uStack_40 = puVar9[1];
        FString::PathAppend(&local_100,(wchar_t *)*puVar9,(int)puVar9[1]);
        puVar9 = puVar9 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      pIVar6 = IFileManager::Get();
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_100.Data.ArrayNum != 0) {
        FVar8.Data = local_100.Data.AllocatorInstance.Data;
      }
      cVar3 = (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6,FVar8.Data);
      if (cVar3 != '\0') {
        pFVar10 = (param_1->AllocatorInstance).Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_100) &&
            ((FScriptContainerElement *)&local_100 < pFVar10 + (longlong)param_1->ArrayMax * 0x10))
           && (bVar4 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_1->ArrayNum;
        if (iVar5 == param_1->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        FVar8.Data = local_100.Data.AllocatorInstance.Data;
        pFVar10 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        param_1->ArrayNum = iVar5 + 1;
        *(undefined8 *)&pFVar10->field_0x0 = 0;
        lVar13 = (longlong)local_100.Data.ArrayNum;
        *(int *)&pFVar10[8].field_0x0 = local_100.Data.ArrayNum;
        if (local_100.Data.ArrayNum == 0) {
          *(int *)(pFVar10 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)pFVar10,
                     local_100.Data.ArrayNum,(int *)(pFVar10 + 0xc));
          memcpy(*(void **)&pFVar10->field_0x0,FVar8.Data,lVar13 * 2);
        }
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      pFVar12 = pFVar12 + 0x10;
      uVar7 = (ulonglong)local_d0;
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  if ((local_104 & 2) != 0) {
    pFVar12 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = 0;
    local_e0.Data.ArrayMax = 0;
    FString::Reserve(&local_e0,iVar5 + 0xc);
    FString::AppendChars(&local_e0,(wchar_t *)pFVar12,iVar5);
    FString::PathAppend(&local_e0,L"Restricted",10);
    pIVar6 = IFileManager::Get();
    pcVar2 = *(code **)((longlong)*pIVar6 + 0x90);
    local_a0 = param_1;
    FString::FString(&local_98,param_3);
    local_a8 = &local_a0;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_e0.Data.ArrayNum != 0) {
      FVar8.Data = local_e0.Data.AllocatorInstance.Data;
    }
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`GetExtensionDirsInternal'::__l15::<lambda_1>,bool,wchar_t_const_*,bool>
               ::Call;
    local_88 = param_4;
    (*pcVar2)(pIVar6,FVar8.Data,&local_b0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetIniTimeStamp @ 1419482e0

FDateTime __cdecl GetIniTimeStamp(wchar_t *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDateTime FVar4;
  FRemoteConfigAsyncIOInfo *pFVar5;
  IFileManager *pIVar6;
  wchar_t *in_R8;
  
  if (param_2 == (wchar_t *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FilenameToLoad",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                       ,0x1ee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.Ticks = (*pcVar1)();
      return (FDateTime)FVar4.Ticks;
    }
  }
  if (in_R8 == (wchar_t *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IniFileName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                       ,0x1ef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.Ticks = (*pcVar1)();
      return (FDateTime)FVar4.Ticks;
    }
  }
  if (param_2 == (wchar_t *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FilenameToLoad",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                       ,0x1ba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.Ticks = (*pcVar1)();
      return (FDateTime)FVar4.Ticks;
    }
  }
  pFVar5 = FRemoteConfig::FindConfig(&GRemoteConfig,param_2);
  if (in_R8 == (wchar_t *)0x0) {
    bVar2 = true;
  }
  else {
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,in_R8);
    bVar2 = iVar3 == 0;
  }
  if (((pFVar5 == (FRemoteConfigAsyncIOInfo *)0x0) || (!bVar2)) || (pFVar5->bReadIOFailed != false))
  {
    pIVar6 = IFileManager::Get();
    (**(code **)((longlong)*pIVar6 + 0xd8))(pIVar6,param_1);
  }
  else {
    pFVar5 = FRemoteConfig::FindConfig(&GRemoteConfig,param_2);
    *(long64 *)param_1 = (pFVar5->TimeStamp).Ticks;
  }
  return (FDateTime)(long64)param_1;
}

// GetPixelFormatFromString @ 141949620

EPixelFormat __cdecl GetPixelFormatFromString(wchar_t *param_1)

{
  int iVar1;
  EPixelFormat EVar2;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_Unknown",param_1);
  if (iVar1 == 0) {
    return PF_Unknown;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_A32B32G32R32F",param_1);
  if (iVar1 == 0) {
    return PF_A32B32G32R32F;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_B8G8R8A8",param_1);
  if (iVar1 == 0) {
    return PF_B8G8R8A8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_G8",param_1);
  if (iVar1 == 0) {
    return PF_G8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_G16",param_1);
  if (iVar1 == 0) {
    return PF_G16;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_DXT1",param_1);
  if (iVar1 == 0) {
    return PF_DXT1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_DXT3",param_1);
  if (iVar1 == 0) {
    return PF_DXT3;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_DXT5",param_1);
  if (iVar1 == 0) {
    return PF_DXT5;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_UYVY",param_1);
  if (iVar1 == 0) {
    return PF_UYVY;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_FloatRGB",param_1);
  if (iVar1 == 0) {
    return PF_FloatRGB;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_FloatRGBA",param_1);
  if (iVar1 == 0) {
    return PF_FloatRGBA;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_DepthStencil",param_1);
  if (iVar1 == 0) {
    return PF_DepthStencil;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ShadowDepth",param_1);
  if (iVar1 == 0) {
    return PF_ShadowDepth;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R32_FLOAT",param_1);
  if (iVar1 == 0) {
    return PF_R32_FLOAT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_G16R16",param_1);
  if (iVar1 == 0) {
    return PF_G16R16;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_G16R16F",param_1);
  if (iVar1 == 0) {
    return PF_G16R16F;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_G16R16F_FILTER",param_1);
  if (iVar1 == 0) {
    return PF_G16R16F_FILTER;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_G32R32F",param_1);
  if (iVar1 == 0) {
    return PF_G32R32F;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_A2B10G10R10",param_1);
  if (iVar1 == 0) {
    return PF_A2B10G10R10;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_A16B16G16R16",param_1);
  if (iVar1 == 0) {
    return PF_A16B16G16R16;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_D24",param_1);
  if (iVar1 == 0) {
    return PF_D24;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R16F",param_1);
  if (iVar1 == 0) {
    return PF_R16F;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R16F_FILTER",param_1);
  if (iVar1 == 0) {
    return PF_R16F_FILTER;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_BC5",param_1);
  if (iVar1 == 0) {
    return PF_BC5;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_V8U8",param_1);
  if (iVar1 == 0) {
    return PF_V8U8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_A1",param_1);
  if (iVar1 == 0) {
    return PF_A1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_FloatR11G11B10",param_1);
  if (iVar1 == 0) {
    return PF_FloatR11G11B10;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_A8",param_1);
  if (iVar1 == 0) {
    return PF_A8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R32_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R32_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R32_SINT",param_1);
  if (iVar1 == 0) {
    return PF_R32_SINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_PVRTC2",param_1);
  if (iVar1 == 0) {
    return PF_PVRTC2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_PVRTC4",param_1);
  if (iVar1 == 0) {
    return PF_PVRTC4;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R16_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R16_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R16_SINT",param_1);
  if (iVar1 == 0) {
    return PF_R16_SINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R16G16B16A16_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R16G16B16A16_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R16G16B16A16_SINT",param_1);
  if (iVar1 == 0) {
    return PF_R16G16B16A16_SINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R5G6B5_UNORM",param_1);
  if (iVar1 == 0) {
    return PF_R5G6B5_UNORM;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R8G8B8A8",param_1);
  if (iVar1 == 0) {
    return PF_R8G8B8A8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_A8R8G8B8",param_1);
  if (iVar1 == 0) {
    return PF_A8R8G8B8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_BC4",param_1);
  if (iVar1 == 0) {
    return PF_BC4;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R8G8",param_1);
  if (iVar1 == 0) {
    return PF_R8G8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ATC_RGB",param_1);
  if (iVar1 == 0) {
    return PF_ATC_RGB;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ATC_RGBA_E",param_1);
  if (iVar1 == 0) {
    return PF_ATC_RGBA_E;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ATC_RGBA_I",param_1);
  if (iVar1 == 0) {
    return PF_ATC_RGBA_I;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_X24_G8",param_1);
  if (iVar1 == 0) {
    return PF_X24_G8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ETC1",param_1);
  if (iVar1 == 0) {
    return PF_ETC1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ETC2_RGB",param_1);
  if (iVar1 == 0) {
    return PF_ETC2_RGB;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ETC2_RGBA",param_1);
  if (iVar1 == 0) {
    return PF_ETC2_RGBA;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R32G32B32A32_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R32G32B32A32_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R16G16_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R16G16_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_4x4",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_4x4;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_6x6",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_6x6;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_8x8",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_8x8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_10x10",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_10x10;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_12x12",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_12x12;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_BC6H",param_1);
  if (iVar1 == 0) {
    return PF_BC6H;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_BC7",param_1);
  if (iVar1 == 0) {
    return PF_BC7;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R8_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R8_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_L8",param_1);
  if (iVar1 == 0) {
    return PF_L8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_XGXR8",param_1);
  if (iVar1 == 0) {
    return PF_XGXR8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R8G8B8A8_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R8G8B8A8_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R8G8B8A8_SNORM",param_1);
  if (iVar1 == 0) {
    return PF_R8G8B8A8_SNORM;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R16G16B16A16_UNORM",param_1);
  if (iVar1 == 0) {
    return PF_R16G16B16A16_UNORM;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R16G16B16A16_SNORM",param_1);
  if (iVar1 == 0) {
    return PF_R16G16B16A16_SNORM;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_PLATFORM_HDR_0",param_1);
  if (iVar1 == 0) {
    return PF_PLATFORM_HDR_0;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_PLATFORM_HDR_1",param_1);
  if (iVar1 == 0) {
    return PF_PLATFORM_HDR_1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_PLATFORM_HDR_2",param_1);
  if (iVar1 == 0) {
    return PF_PLATFORM_HDR_2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_NV12",param_1);
  if (iVar1 == 0) {
    return PF_NV12;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R32G32_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R32G32_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ETC2_R11_EAC",param_1);
  if (iVar1 == 0) {
    return PF_ETC2_R11_EAC;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ETC2_RG11_EAC",param_1);
  if (iVar1 == 0) {
    return PF_ETC2_RG11_EAC;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R8",param_1);
  if (iVar1 == 0) {
    return PF_R8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_B5G5R5A1_UNORM",param_1);
  if (iVar1 == 0) {
    return PF_B5G5R5A1_UNORM;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_4x4_HDR",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_4x4_HDR;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_6x6_HDR",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_6x6_HDR;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_8x8_HDR",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_8x8_HDR;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_10x10_HDR",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_10x10_HDR;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_12x12_HDR",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_12x12_HDR;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_G16R16_SNORM",param_1);
  if (iVar1 == 0) {
    return PF_G16R16_SNORM;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R8G8_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R8G8_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R32G32B32_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R32G32B32_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R32G32B32_SINT",param_1);
  if (iVar1 == 0) {
    return PF_R32G32B32_SINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R32G32B32F",param_1);
  if (iVar1 == 0) {
    return PF_R32G32B32F;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R8_SINT",param_1);
  if (iVar1 == 0) {
    return PF_R8_SINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R64_UINT",param_1);
  if (iVar1 == 0) {
    return PF_R64_UINT;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R9G9B9EXP5",param_1);
  if (iVar1 == 0) {
    return PF_R9G9B9EXP5;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_P010",param_1);
  if (iVar1 == 0) {
    return PF_P010;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_4x4_NORM_RG",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_4x4_NORM_RG;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_6x6_NORM_RG",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_6x6_NORM_RG;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_8x8_NORM_RG",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_8x8_NORM_RG;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_10x10_NORM_RG",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_10x10_NORM_RG;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_ASTC_12x12_NORM_RG",param_1);
  if (iVar1 == 0) {
    return PF_ASTC_12x12_NORM_RG;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R8G8B8",param_1);
  if (iVar1 == 0) {
    return PF_R8G8B8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"PF_R16G16_SINT",param_1);
  EVar2 = PF_Unknown;
  if (iVar1 == 0) {
    EVar2 = PF_R16G16_SINT;
  }
  return EVar2;
}

// GetPixelFormatString @ 14194a030

wchar_t * __cdecl GetPixelFormatString(EPixelFormat param_1)

{
  switch(param_1) {
  default:
    return L"PF_Unknown";
  case PF_A32B32G32R32F:
    return L"PF_A32B32G32R32F";
  case PF_B8G8R8A8:
    return L"PF_B8G8R8A8";
  case PF_G8:
    return L"PF_G8";
  case PF_G16:
    return L"PF_G16";
  case PF_DXT1:
    return L"PF_DXT1";
  case PF_DXT3:
    return L"PF_DXT3";
  case PF_DXT5:
    return L"PF_DXT5";
  case PF_UYVY:
    return L"PF_UYVY";
  case PF_FloatRGB:
    return L"PF_FloatRGB";
  case PF_FloatRGBA:
    return L"PF_FloatRGBA";
  case PF_DepthStencil:
    return L"PF_DepthStencil";
  case PF_ShadowDepth:
    return L"PF_ShadowDepth";
  case PF_R32_FLOAT:
    return L"PF_R32_FLOAT";
  case PF_G16R16:
    return L"PF_G16R16";
  case PF_G16R16F:
    return L"PF_G16R16F";
  case PF_G16R16F_FILTER:
    return L"PF_G16R16F_FILTER";
  case PF_G32R32F:
    return L"PF_G32R32F";
  case PF_A2B10G10R10:
    return L"PF_A2B10G10R10";
  case PF_A16B16G16R16:
    return L"PF_A16B16G16R16";
  case PF_D24:
    return L"PF_D24";
  case PF_R16F:
    return L"PF_R16F";
  case PF_R16F_FILTER:
    return L"PF_R16F_FILTER";
  case PF_BC5:
    return L"PF_BC5";
  case PF_V8U8:
    return L"PF_V8U8";
  case PF_A1:
    return L"PF_A1";
  case PF_FloatR11G11B10:
    return L"PF_FloatR11G11B10";
  case PF_A8:
    return L"PF_A8";
  case PF_R32_UINT:
    return L"PF_R32_UINT";
  case PF_R32_SINT:
    return L"PF_R32_SINT";
  case PF_PVRTC2:
    return L"PF_PVRTC2";
  case PF_PVRTC4:
    return L"PF_PVRTC4";
  case PF_R16_UINT:
    return L"PF_R16_UINT";
  case PF_R16_SINT:
    return L"PF_R16_SINT";
  case PF_R16G16B16A16_UINT:
    return L"PF_R16G16B16A16_UINT";
  case PF_R16G16B16A16_SINT:
    return L"PF_R16G16B16A16_SINT";
  case PF_R5G6B5_UNORM:
    return L"PF_R5G6B5_UNORM";
  case PF_R8G8B8A8:
    return L"PF_R8G8B8A8";
  case PF_A8R8G8B8:
    return L"PF_A8R8G8B8";
  case PF_BC4:
    return L"PF_BC4";
  case PF_R8G8:
    return L"PF_R8G8";
  case PF_ATC_RGB:
    return L"PF_ATC_RGB";
  case PF_ATC_RGBA_E:
    return L"PF_ATC_RGBA_E";
  case PF_ATC_RGBA_I:
    return L"PF_ATC_RGBA_I";
  case PF_X24_G8:
    return L"PF_X24_G8";
  case PF_ETC1:
    return L"PF_ETC1";
  case PF_ETC2_RGB:
    return L"PF_ETC2_RGB";
  case PF_ETC2_RGBA:
    return L"PF_ETC2_RGBA";
  case PF_R32G32B32A32_UINT:
    return L"PF_R32G32B32A32_UINT";
  case PF_R16G16_UINT:
    return L"PF_R16G16_UINT";
  case PF_ASTC_4x4:
    return L"PF_ASTC_4x4";
  case PF_ASTC_6x6:
    return L"PF_ASTC_6x6";
  case PF_ASTC_8x8:
    return L"PF_ASTC_8x8";
  case PF_ASTC_10x10:
    return L"PF_ASTC_10x10";
  case PF_ASTC_12x12:
    return L"PF_ASTC_12x12";
  case PF_BC6H:
    return L"PF_BC6H";
  case PF_BC7:
    return L"PF_BC7";
  case PF_R8_UINT:
    return L"PF_R8_UINT";
  case PF_L8:
    return L"PF_L8";
  case PF_XGXR8:
    return L"PF_XGXR8";
  case PF_R8G8B8A8_UINT:
    return L"PF_R8G8B8A8_UINT";
  case PF_R8G8B8A8_SNORM:
    return L"PF_R8G8B8A8_SNORM";
  case PF_R16G16B16A16_UNORM:
    return L"PF_R16G16B16A16_UNORM";
  case PF_R16G16B16A16_SNORM:
    return L"PF_R16G16B16A16_SNORM";
  case PF_PLATFORM_HDR_0:
    return L"PF_PLATFORM_HDR_0";
  case PF_PLATFORM_HDR_1:
    return L"PF_PLATFORM_HDR_1";
  case PF_PLATFORM_HDR_2:
    return L"PF_PLATFORM_HDR_2";
  case PF_NV12:
    return L"PF_NV12";
  case PF_R32G32_UINT:
    return L"PF_R32G32_UINT";
  case PF_ETC2_R11_EAC:
    return L"PF_ETC2_R11_EAC";
  case PF_ETC2_RG11_EAC:
    return L"PF_ETC2_RG11_EAC";
  case PF_R8:
    return L"PF_R8";
  case PF_B5G5R5A1_UNORM:
    return L"PF_B5G5R5A1_UNORM";
  case PF_ASTC_4x4_HDR:
    return L"PF_ASTC_4x4_HDR";
  case PF_ASTC_6x6_HDR:
    return L"PF_ASTC_6x6_HDR";
  case PF_ASTC_8x8_HDR:
    return L"PF_ASTC_8x8_HDR";
  case PF_ASTC_10x10_HDR:
    return L"PF_ASTC_10x10_HDR";
  case PF_ASTC_12x12_HDR:
    return L"PF_ASTC_12x12_HDR";
  case PF_G16R16_SNORM:
    return L"PF_G16R16_SNORM";
  case PF_R8G8_UINT:
    return L"PF_R8G8_UINT";
  case PF_R32G32B32_UINT:
    return L"PF_R32G32B32_UINT";
  case PF_R32G32B32_SINT:
    return L"PF_R32G32B32_SINT";
  case PF_R32G32B32F:
    return L"PF_R32G32B32F";
  case PF_R8_SINT:
    return L"PF_R8_SINT";
  case PF_R64_UINT:
    return L"PF_R64_UINT";
  case PF_R9G9B9EXP5:
    return L"PF_R9G9B9EXP5";
  case PF_P010:
    return L"PF_P010";
  case PF_ASTC_4x4_NORM_RG:
    return L"PF_ASTC_4x4_NORM_RG";
  case PF_ASTC_6x6_NORM_RG:
    return L"PF_ASTC_6x6_NORM_RG";
  case PF_ASTC_8x8_NORM_RG:
    return L"PF_ASTC_8x8_NORM_RG";
  case PF_ASTC_10x10_NORM_RG:
    return L"PF_ASTC_10x10_NORM_RG";
  case PF_ASTC_12x12_NORM_RG:
    return L"PF_ASTC_12x12_NORM_RG";
  case PF_R16G16_SINT:
    return L"PF_R16G16_SINT";
  case PF_R8G8B8:
    return L"PF_R8G8B8";
  }
}

// GetRoundedTransformCRC32 @ 14194b3b0

uint __cdecl TransformUtilities::GetRoundedTransformCRC32(TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  TRotator<double> local_98;
  TQuat<double> local_78 [3];
  
  dVar3 = __real_3fe0000000000000;
  local_78[0].Z = (param_1->Translation).ZW.m128d_f64[0];
  local_c8 = (int)ROUND((param_1->Translation).XY.m128d_f64[0] * __real_4000000000000000 +
                        __real_3fe0000000000000) >> 1;
  local_c4 = (int)ROUND((param_1->Translation).XY.m128d_f64[1] * __real_4000000000000000 +
                        __real_3fe0000000000000) >> 1;
  local_c0 = (int)ROUND(local_78[0].Z * __real_4000000000000000 + __real_3fe0000000000000) >> 1;
  uVar4 = (*FCrc::MemCrc32Func)(&local_c8,0xc,0);
  local_78[0].X = (param_1->Rotation).XY.m128d_f64[0];
  local_78[0].Y = (param_1->Rotation).XY.m128d_f64[1];
  local_78[0].Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_78[0].W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(local_78,&local_98);
  dVar5 = __real_4076800000000000;
  local_78[0].Z = local_98.Roll;
  dVar1 = FGenericPlatformMath::Fmod(local_98.Pitch,__real_4076800000000000);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + dVar5;
  }
  dVar6 = FGenericPlatformMath::Fmod(local_98.Yaw,dVar5);
  if (dVar6 < 0.0) {
    dVar6 = dVar6 + dVar5;
  }
  dVar2 = FGenericPlatformMath::Fmod(local_78[0].Z,dVar5);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + dVar5;
  }
  local_b8 = ((int)ROUND(dVar1 + dVar1 + dVar3) >> 1) % 0x168;
  local_b4 = ((int)ROUND(dVar6 + dVar6 + dVar3) >> 1) % 0x168;
  local_b0 = ((int)ROUND(dVar2 + dVar2 + dVar3) >> 1) % 0x168;
  uVar4 = (*FCrc::MemCrc32Func)(&local_b8,0xc,uVar4);
  dVar1 = (param_1->Scale3D).XY.m128d_f64[0] * __real_4059000000000000;
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1] * __real_4059000000000000;
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[0] * __real_4059000000000000;
  local_a8 = (int)ROUND(dVar1 + dVar1 + dVar3) >> 1;
  local_a4 = (int)ROUND(dVar5 + dVar5 + dVar3) >> 1;
  local_a0 = (int)ROUND(dVar6 + dVar6 + dVar3) >> 1;
  uVar4 = (*FCrc::MemCrc32Func)(&local_a8,0xc,uVar4);
  return uVar4;
}

// GetTypeHash @ 14194bf20

uint __cdecl GetTypeHash(FTimespan *param_1)

{
  return (int)((ulonglong)param_1->Ticks >> 0x20) * 0x17 + (int)param_1->Ticks;
}

// HandleCSVCategoryCommand @ 14194cae0

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
HandleCSVCategoryCommand
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FCsvCategoryData *lpCriticalSection;
  FString *pFVar7;
  uint *puVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1->ArrayNum - 1U < 2) {
    FCsvProfiler::Get();
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    lpCriticalSection = FCsvCategoryData::Get();
    if ((lpCriticalSection == (FCsvCategoryData *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar7 = FString::ToLower((FString *)pFVar2,&local_38);
    puVar8 = (uint *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                     ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                             *)&lpCriticalSection->CategoryNameToIndex,pFVar7);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (puVar8 == (uint *)0x0) {
      if (lpCriticalSection != (FCsvCategoryData *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    else {
      uVar1 = *puVar8;
      if (lpCriticalSection != (FCsvCategoryData *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      if (-1 < (int)uVar1) {
        bVar4 = true;
        if (param_1->ArrayNum != 2) {
          if ((0x7ff < uVar1) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("CategoryIndex < CSV_MAX_CATEGORY_COUNT",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                 ,0x1325,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar4 = GCsvCategoriesEnabled[uVar1] == false;
LAB_14194ccfc:
          if ((0x7ff < uVar1) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("CategoryIndex < CSV_MAX_CATEGORY_COUNT",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                                 ,0x131f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          GCsvCategoriesEnabled[uVar1] = bVar4;
          FOutputDevice::LogfImpl(param_3,Log,L"CsvProfiler: category \'%s\' is now %s.");
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        FString::FString(&local_58,L"disable");
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar10.Data = local_58.Data.AllocatorInstance.Data;
        }
        if (*(int *)(pFVar2 + 0x18) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(pFVar2 + 0x10);
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,(wchar_t *)FVar10.Data);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (iVar6 == 0) {
          bVar4 = false;
          goto LAB_14194ccfc;
        }
        FString::FString(&local_48,L"enable");
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar10.Data = local_48.Data.AllocatorInstance.Data;
        }
        if (*(int *)(pFVar2 + 0x18) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(pFVar2 + 0x10);
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,(wchar_t *)FVar10.Data);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (iVar6 == 0) goto LAB_14194ccfc;
        goto LAB_14194cc9b;
      }
    }
    FOutputDevice::LogfImpl(param_3,Error,L"CsvProfiler: category \'%s\' does not exist.");
  }
  else {
LAB_14194cc9b:
    FOutputDevice::LogfImpl
              (param_3,Error,
               L"CsvProfiler: Usage: csvcategory <category> [enable/disable] (toggles if second parameter is omitted)"
              );
  }
  return;
}

// HandleCSVProfileCommand @ 14194cdb0

void __cdecl HandleCSVProfileCommand(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  bool bVar2;
  int iVar3;
  FCsvProfiler *pFVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  ulonglong local_res8;
  int local_res10 [2];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = *(int *)(pFVar1 + 8);
    lVar6 = (longlong)local_30;
    _Src = *(void **)pFVar1;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,_Src,lVar6 * 2);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_30 != 0) {
      FVar5.Data = local_38.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"START");
    if (iVar3 == 0) {
      pFVar4 = FCsvProfiler::Get();
      local_28 = (undefined1  [8])0x0;
      local_20 = (TReferenceControllerBase<1> *)0x0;
      FCsvProfiler::BeginCapture(pFVar4,-1,(FString *)local_28,&GCsvFileName,None);
      if (local_28 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_28);
      }
    }
    else {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_30 != 0) {
        FVar5.Data = local_38.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"STOP");
      if (iVar3 == 0) {
        pFVar4 = FCsvProfiler::Get();
        local_res8 = 0;
        FCsvProfiler::EndCapture
                  (pFVar4,(TSharedFuture<FString> *)local_28,(FBaseGraphTask *)&local_res8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
      }
      else {
        FVar5.Data = (FScriptContainerElement *)L"";
        if (local_30 != 0) {
          FVar5.Data = local_38.Data;
        }
        bVar2 = FParse::Value((wchar_t *)FVar5.Data,L"STARTFILE=",&GCsvFileName,true,(wchar_t **)0x0
                             );
        if (!bVar2) {
          FVar5.Data = (FScriptContainerElement *)L"";
          if (local_30 != 0) {
            FVar5.Data = local_38.Data;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"EXITONCOMPLETION");
          if (iVar3 == 0) {
            GCsvExitOnCompletion = true;
          }
          else {
            local_res8 = local_res8 & 0xffffffff00000000;
            FVar5.Data = (FScriptContainerElement *)L"";
            if (local_30 != 0) {
              FVar5.Data = local_38.Data;
            }
            bVar2 = FParse::Value((wchar_t *)FVar5.Data,L"FRAMES=",(int *)&local_res8);
            if (bVar2) {
              pFVar4 = FCsvProfiler::Get();
              local_28 = (undefined1  [8])0x0;
              local_20 = (TReferenceControllerBase<1> *)0x0;
              FCsvProfiler::BeginCapture
                        (pFVar4,(int)local_res8,(FString *)local_28,&GCsvFileName,None);
              if (local_28 != (undefined1  [8])0x0) {
                FMemory::Free((void *)local_28);
              }
            }
            local_res10[0] = 0;
            FVar5.Data = (FScriptContainerElement *)L"";
            if (local_30 != 0) {
              FVar5.Data = local_38.Data;
            }
            bVar2 = FParse::Value((wchar_t *)FVar5.Data,L"REPEAT=",local_res10);
            if (bVar2) {
              GCsvRepeatCount = local_res10[0];
            }
          }
        }
      }
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return;
}

// IntrinsicToString @ 141951110

void __cdecl
Freeze::IntrinsicToString
          (FSHAHash *param_1,FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,
          FMemoryToStringContext *param_4)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  FString local_18;
  
  pTVar1 = param_4->String;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  BytesToHex(param_1->Hash,0x14,&local_18);
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"%s\n");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IsContinuousWriteEnabled @ 1419512a0

bool __cdecl IsContinuousWriteEnabled(bool param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarCsvContinuousWrites.Ref;
  if (param_1) {
    bVar3 = IsInParallelGameThread();
    if (((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      return 0 < pTVar2->ShadowedValue[1];
    }
  }
  return 0 < pTVar2->ShadowedValue[0];
}

// IsInCsvProcessingThread @ 141951ec0

bool __cdecl IsInCsvProcessingThread(void)

{
  uint uVar1;
  DWORD DVar2;
  
  uVar1 = GCsvProcessingThreadId;
  if (GGameThreadIsCsvProcessingThread) {
    uVar1 = GGameThreadId;
  }
  DVar2 = GetCurrentThreadId();
  return DVar2 == uVar1;
}

// IsReloadActive @ 1419525b0

bool __cdecl IsReloadActive(void)

{
  return GActiveReloadType != None;
}

// IsUsingLocalIniFile @ 141953140

bool __cdecl IsUsingLocalIniFile(wchar_t *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FRemoteConfigAsyncIOInfo *pFVar5;
  
  if (param_1 == (wchar_t *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FilenameToLoad",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                       ,0x1ba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar5 = FRemoteConfig::FindConfig(&GRemoteConfig,param_1);
  if (param_2 == (wchar_t *)0x0) {
    bVar2 = true;
  }
  else {
    iVar4 = FGenericPlatformStricmp::Stricmp(param_1,param_2);
    bVar2 = iVar4 == 0;
  }
  if (((pFVar5 != (FRemoteConfigAsyncIOInfo *)0x0) && (bVar2)) && (pFVar5->bReadIOFailed == false))
  {
    return false;
  }
  return true;
}

// LexToString @ 141953f30

wchar_t * __cdecl LexToString(EModuleLoadResult param_1)

{
  switch(param_1) {
  case Success:
    return L"Success";
  case FileNotFound:
    return L"FileNotFound";
  case FileIncompatible:
    return L"FileIncompatible";
  case CouldNotBeLoadedByOS:
    return L"CouldNotBeLoadedByOS";
  case FailedToInitialize:
    return L"FailedToInitialize";
  case NotLoadedByGameThread:
    return L"NotLoadedByGameThread";
  default:
    return L"<Unknown>";
  }
}

// MakeLocalCopy @ 1419554a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl MakeLocalCopy(wchar_t *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRemoteConfigAsyncIOInfo *pFVar5;
  IFileManager *pIVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType _Source;
  undefined1 auStack_878 [32];
  undefined1 local_858;
  undefined1 local_850;
  undefined8 local_848;
  undefined4 local_840;
  undefined4 local_838;
  FString local_828;
  wchar_t local_818 [10];
  wchar_t local_804 [1014];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_878;
  if (param_1 == (wchar_t *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Filename",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                       ,0x1fe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("FilenameToLoad",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                       ,0x1ba,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = FRemoteConfig::FindConfig(&GRemoteConfig,param_1);
  if (pFVar5 == (FRemoteConfigAsyncIOInfo *)0x0) {
    return;
  }
  if (pFVar5->bReadIOFailed != false) {
    return;
  }
  pIVar6 = IFileManager::Get();
  lVar7 = (**(code **)((longlong)*pIVar6 + 0x110))(pIVar6,param_1);
  if (lVar7 < 0) {
    return;
  }
  FString::FString(&local_828,param_1);
  if (local_828.Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)local_828.Data.AllocatorInstance.Data;
    if (local_828.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14195558c;
  }
  wVar1 = *pwVar10;
  while (wVar1 != L'\0') {
    pFVar11 = (FScriptContainerElement *)((longlong)pwVar10 + 2);
    if (((wchar_t)(wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20)) == 0x2e) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar11,L"ini",3), iVar4 == 0)) {
      if ((FScriptContainerElement *)pwVar10 != (FScriptContainerElement *)0x0) {
        iVar4 = local_828.Data.ArrayNum + -1;
        if (local_828.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        if (iVar4 + -4 < iVar4) {
          iVar4 = iVar4 + -4;
        }
        iVar9 = 0;
        if (0 < iVar4) {
          iVar9 = iVar4;
        }
        FString::RemoveAt(&local_828,iVar9,4,No);
        goto LAB_1419555ae;
      }
      break;
    }
    pwVar10 = (wchar_t *)pFVar11;
    wVar1 = *(wchar_t *)pFVar11;
  }
LAB_14195558c:
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                     ,0x20e,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1419555ae:
  _Source.Data = (FScriptContainerElement *)L"";
  if (local_828.Data.ArrayNum != 0) {
    _Source.Data = local_828.Data.AllocatorInstance.Data;
  }
  wcscpy(local_818,(wchar_t *)_Source.Data);
  pwVar10 = (wchar_t *)((longlong)&local_828.Data.ArrayMax + 2);
  do {
    pwVar8 = pwVar10;
    pwVar10 = pwVar8 + 1;
  } while (pwVar8[1] != L'\0');
  *(undefined8 *)(pwVar8 + 1) = u__Local_ini._0_8_;
  *(undefined8 *)(pwVar8 + 5) = u__Local_ini._8_8_;
  *(undefined4 *)(pwVar8 + 9) = u__Local_ini._16_4_;
  pwVar8[0xb] = u__Local_ini[10];
  pIVar6 = IFileManager::Get();
  local_838 = 0;
  local_840 = 0;
  local_848 = 0;
  local_850 = 0;
  local_858 = 0;
  (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,local_818,param_1,1);
  if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.Data.AllocatorInstance.Data);
  }
  return;
}

// NameStrincmp @ 141956ee0

int __cdecl
TextFilterUtils::NameStrincmp
          (FName *param_1,FString *param_2,TArray<char,TSizedDefaultAllocator<32>_> *param_3,
          int param_4)

{
  uint uVar1;
  int iVar2;
  FNameEntry *pFVar3;
  ulong64 uVar4;
  FNameBufferWithNumber local_838;
  
  uVar1 = param_1->Number;
  uVar4 = (ulong64)param_4;
  local_838.bIsWide = false;
  pFVar3 = ::FName::GetDisplayNameEntry(param_1);
  FNameBufferWithNumber::Init(&local_838,pFVar3,uVar1);
  if (local_838.bIsWide == false) {
    if (param_3->ArrayNum < 2) {
      iVar2 = -1;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Strnicmp
                        (local_838.field1_0x2.AnsiName,(char *)(param_3->AllocatorInstance).Data,
                         uVar4);
    }
  }
  else if ((param_2->Data).ArrayNum == 0) {
    iVar2 = FGenericPlatformStricmp::Strnicmp(local_838.field1_0x2.WideName,L"",uVar4);
  }
  else {
    iVar2 = FGenericPlatformStricmp::Strnicmp
                      (local_838.field1_0x2.WideName,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data,uVar4);
  }
  return iVar2;
}

// NormalizeAndCollapseDirectories @ 141957010

void __cdecl NormalizeAndCollapseDirectories(TStringBuilderBase<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  int iVar5;
  bool local_res8 [8];
  
  pwVar4 = param_1->Base;
  iVar5 = (int)((longlong)param_1->CurPos - (longlong)pwVar4 >> 1);
  if ((iVar5 < 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pwVar1 = pwVar4 + iVar5;
  for (; pwVar4 != pwVar1; pwVar4 = pwVar4 + 1) {
    if (*pwVar4 == L'\\') {
      *pwVar4 = L'/';
    }
  }
  UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<TStringBuilderBase<wchar_t>_>
            (param_1,false,local_res8);
  if ((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) == 0) {
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L'/';
    param_1->CurPos = param_1->CurPos + 1;
  }
  return;
}

// ProcessIniContents @ 14195d8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ProcessIniContents(wchar_t *param_1,wchar_t *param_2,FConfigFile *param_3,bool param_4,bool param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_void___cdecl_ProcessIniContents(wchar_t_const_*,wchar_t_const_*,FConfigFile_*,bool,bool)_::_2_::FStat_STAT_ProcessIniContents>
  FVar9;
  FRemoteConfigAsyncIOInfo *pFVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FStatMessage local_b8;
  FString local_a8;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FString local_78;
  FString local_68;
  FName local_58;
  FName local_50;
  TStringView<wchar_t> local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_ProcessIniContents ==
        (FThreadSafeStaticStat<_void___cdecl_ProcessIniContents(wchar_t_const_*,wchar_t_const_*,FConfigFile_*,bool,bool)_::_2_::FStat_STAT_ProcessIniContents>
         )0x0) {
      pFVar8 = FName::FName(&local_58,"STAT_ProcessIniContents");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessIniContents,*pFVar8,
                 L"ProcessIniContents","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,true
                 ,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar9 = StatPtr_STAT_ProcessIniContents;
  if (StatPtr_STAT_ProcessIniContents ==
      (FThreadSafeStaticStat<_void___cdecl_ProcessIniContents(wchar_t_const_*,wchar_t_const_*,FConfigFile_*,bool,bool)_::_2_::FStat_STAT_ProcessIniContents>
       )0x0) {
    pFVar8 = FName::FName(&local_50,"STAT_ProcessIniContents");
    FVar9 = (FThreadSafeStaticStat<_void___cdecl_ProcessIniContents(wchar_t_const_*,wchar_t_const_*,FConfigFile_*,bool,bool)_::_2_::FStat_STAT_ProcessIniContents>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcessIniContents,*pFVar8,
                         L"ProcessIniContents","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar3 = false;
  bVar5 = false;
  FVar13 = *(FName *)FVar9;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                   ,0x1c3);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_14195da43;
    }
  }
  bVar4 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_14195da43:
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("FilenameToLoad",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                         ,0x1c5,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 == (wchar_t *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("IniFileName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                         ,0x1c6,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_3 == (FConfigFile *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Config",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                         ,0x1c7,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("FilenameToLoad",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                         ,0x1ba,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar10 = FRemoteConfig::FindConfig(&GRemoteConfig,param_1);
  if (param_2 == (wchar_t *)0x0) {
    bVar6 = true;
  }
  else {
    iVar7 = FGenericPlatformStricmp::Stricmp(param_1,param_2);
    bVar6 = iVar7 == 0;
  }
  if (((pFVar10 == (FRemoteConfigAsyncIOInfo *)0x0) || (!bVar6)) ||
     (pFVar10->bReadIOFailed != false)) {
    if (param_5) {
      FString::FString(&local_78,param_2);
      FConfigFile::Combine(param_3,&local_78);
      local_a8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
    else {
      FString::FString(&local_68,param_2);
      FConfigFile::Read(param_3,&local_68);
      local_a8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar10 = FRemoteConfig::FindConfig(&GRemoteConfig,param_1);
    if (param_4) {
      AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      bVar6 = 1 < (int)param_3->_padding_;
      if (!bVar6) {
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                          *)param_3);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_3,0,(int)param_3->_padding_);
      piVar1 = (int *)((longlong)&param_3->_padding_ + 4);
      *(undefined4 *)&param_3->_padding_ = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x110,8,0,(ForAnyElementType *)param_3,0,piVar1);
      }
      *(undefined4 *)&param_3->_padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&param_3->_padding_ + 4) = 0;
      iVar7 = *(int *)((longlong)&param_3->_padding_ + 4);
      *(undefined4 *)&param_3->_padding_ = 0;
      if ((iVar7 < 0) || (0x80 < iVar7)) {
        *(undefined4 *)((longlong)&param_3->_padding_ + 4) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&param_3->_padding_,0);
      }
      if (bVar6) {
        *(undefined4 *)&param_3->_padding_ = 1;
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                  *)param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    }
    if (param_5) {
      FString::FString(&local_a8,param_1);
      FConfigFile::CombineFromBuffer(param_3,&pFVar10->Buffer,&local_a8);
    }
    else {
      FString::FString(&local_88,param_1);
      local_98 = (pFVar10->Buffer).Data.AllocatorInstance.Data;
      iVar7 = (pFVar10->Buffer).Data.ArrayNum;
      iStack_90 = iVar7 + -1;
      if (iVar7 == 0) {
        iStack_90 = 0;
      }
      local_48._12_4_ = uStack_8c;
      local_48.Size = iStack_90;
      local_48.DataPtr = (wchar_t *)local_98;
      FConfigFile::ProcessInputFileContents(param_3,&local_48,&local_88);
      local_a8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    }
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar13 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_b8.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_b8.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_b8);
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
  return;
}

// Sha1TransformX86 @ 14196d430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Sha1TransformX86(uint *param_1,void *param_2,ulong64 param_3)

{
  undefined1 (*pauVar1) [16];
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = param_1[4];
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auVar7._8_8_;
  auVar8 = auVar8 << 0x40;
  auVar3._4_4_ = param_1[2];
  auVar3._0_4_ = param_1[3];
  auVar3._8_4_ = param_1[1];
  auVar3._12_4_ = *param_1;
  if (0x3f < param_3) {
    pauVar1 = (undefined1 (*) [16])((longlong)param_2 + 0x20);
    uVar2 = param_3 >> 6;
    auVar7 = auVar3;
    do {
      auVar15 = pshufb(*pauVar1,___xmm_000102030405060708090a0b0c0d0e0f);
      auVar10 = pshufb(pauVar1[1],___xmm_000102030405060708090a0b0c0d0e0f);
      auVar4 = pshufb(pauVar1[-2],___xmm_000102030405060708090a0b0c0d0e0f);
      auVar6 = pshufb(pauVar1[-1],___xmm_000102030405060708090a0b0c0d0e0f);
      auVar5._0_4_ = auVar4._0_4_ + auVar8._0_4_;
      auVar5._4_4_ = auVar4._4_4_ + auVar8._4_4_;
      auVar5._8_4_ = auVar4._8_4_ + auVar8._8_4_;
      auVar5._12_4_ = auVar4._12_4_ + auVar8._12_4_;
      auVar20 = sha1rnds4_sha(auVar7,auVar5,0);
      auVar3 = sha1nexte_sha(auVar7,auVar6);
      auVar5 = sha1msg1_sha(auVar4,auVar6);
      auVar22._0_4_ = auVar15._0_4_ ^ auVar5._0_4_;
      auVar22._4_4_ = auVar15._4_4_ ^ auVar5._4_4_;
      auVar22._8_4_ = auVar15._8_4_ ^ auVar5._8_4_;
      auVar22._12_4_ = auVar15._12_4_ ^ auVar5._12_4_;
      auVar4 = sha1rnds4_sha(auVar20,auVar3,0);
      auVar3 = sha1nexte_sha(auVar20,auVar15);
      auVar5 = sha1msg1_sha(auVar6,auVar15);
      auVar15 = sha1msg1_sha(auVar15,auVar10);
      auVar20 = sha1rnds4_sha(auVar4,auVar3,0);
      auVar3 = sha1nexte_sha(auVar4,auVar10);
      auVar4._0_4_ = auVar10._0_4_ ^ auVar5._0_4_;
      auVar4._4_4_ = auVar10._4_4_ ^ auVar5._4_4_;
      auVar4._8_4_ = auVar10._8_4_ ^ auVar5._8_4_;
      auVar4._12_4_ = auVar10._12_4_ ^ auVar5._12_4_;
      auVar21 = sha1rnds4_sha(auVar20,auVar3,0);
      auVar6 = sha1msg2_sha(auVar22,auVar10);
      auVar3 = sha1nexte_sha(auVar20,auVar6);
      auVar16._0_4_ = auVar15._0_4_ ^ auVar6._0_4_;
      auVar16._4_4_ = auVar15._4_4_ ^ auVar6._4_4_;
      auVar16._8_4_ = auVar15._8_4_ ^ auVar6._8_4_;
      auVar16._12_4_ = auVar15._12_4_ ^ auVar6._12_4_;
      auVar15 = sha1rnds4_sha(auVar21,auVar3,0);
      auVar5 = sha1msg2_sha(auVar4,auVar6);
      auVar3 = sha1nexte_sha(auVar21,auVar5);
      auVar20 = sha1msg2_sha(auVar16,auVar5);
      auVar4 = sha1rnds4_sha(auVar15,auVar3,1);
      auVar3 = sha1nexte_sha(auVar15,auVar20);
      auVar22 = sha1rnds4_sha(auVar4,auVar3,1);
      auVar3 = sha1msg1_sha(auVar10,auVar6);
      auVar11._0_4_ = auVar3._0_4_ ^ auVar5._0_4_;
      auVar11._4_4_ = auVar3._4_4_ ^ auVar5._4_4_;
      auVar11._8_4_ = auVar3._8_4_ ^ auVar5._8_4_;
      auVar11._12_4_ = auVar3._12_4_ ^ auVar5._12_4_;
      auVar10 = sha1msg2_sha(auVar11,auVar20);
      auVar3 = sha1nexte_sha(auVar4,auVar10);
      auVar21 = sha1rnds4_sha(auVar22,auVar3,1);
      auVar4 = sha1msg1_sha(auVar6,auVar5);
      auVar3 = sha1msg1_sha(auVar5,auVar20);
      auVar6 = sha1msg1_sha(auVar20,auVar10);
      auVar9._0_4_ = auVar10._0_4_ ^ auVar3._0_4_;
      auVar9._4_4_ = auVar10._4_4_ ^ auVar3._4_4_;
      auVar9._8_4_ = auVar10._8_4_ ^ auVar3._8_4_;
      auVar9._12_4_ = auVar10._12_4_ ^ auVar3._12_4_;
      auVar15._0_4_ = auVar20._0_4_ ^ auVar4._0_4_;
      auVar15._4_4_ = auVar20._4_4_ ^ auVar4._4_4_;
      auVar15._8_4_ = auVar20._8_4_ ^ auVar4._8_4_;
      auVar15._12_4_ = auVar20._12_4_ ^ auVar4._12_4_;
      auVar5 = sha1msg2_sha(auVar15,auVar10);
      auVar3 = sha1nexte_sha(auVar22,auVar5);
      auVar20 = sha1rnds4_sha(auVar21,auVar3,1);
      auVar4 = sha1msg2_sha(auVar9,auVar5);
      auVar3 = sha1nexte_sha(auVar21,auVar4);
      auVar17._0_4_ = auVar6._0_4_ ^ auVar5._0_4_;
      auVar17._4_4_ = auVar6._4_4_ ^ auVar5._4_4_;
      auVar17._8_4_ = auVar6._8_4_ ^ auVar5._8_4_;
      auVar17._12_4_ = auVar6._12_4_ ^ auVar5._12_4_;
      auVar15 = sha1msg2_sha(auVar17,auVar4);
      auVar22 = sha1rnds4_sha(auVar20,auVar3,1);
      auVar6 = sha1msg1_sha(auVar10,auVar5);
      auVar3 = sha1nexte_sha(auVar20,auVar15);
      auVar12._0_4_ = auVar6._0_4_ ^ auVar4._0_4_;
      auVar12._4_4_ = auVar6._4_4_ ^ auVar4._4_4_;
      auVar12._8_4_ = auVar6._8_4_ ^ auVar4._8_4_;
      auVar12._12_4_ = auVar6._12_4_ ^ auVar4._12_4_;
      auVar10 = sha1msg2_sha(auVar12,auVar15);
      auVar5 = sha1msg1_sha(auVar5,auVar4);
      auVar20 = sha1rnds4_sha(auVar22,auVar3,2);
      auVar3 = sha1nexte_sha(auVar22,auVar10);
      auVar6._0_4_ = auVar15._0_4_ ^ auVar5._0_4_;
      auVar6._4_4_ = auVar15._4_4_ ^ auVar5._4_4_;
      auVar6._8_4_ = auVar15._8_4_ ^ auVar5._8_4_;
      auVar6._12_4_ = auVar15._12_4_ ^ auVar5._12_4_;
      auVar4 = sha1msg1_sha(auVar4,auVar15);
      auVar22 = sha1rnds4_sha(auVar20,auVar3,2);
      auVar5 = sha1msg2_sha(auVar6,auVar10);
      auVar3 = sha1msg1_sha(auVar15,auVar10);
      pauVar1 = pauVar1 + 4;
      auVar18._0_4_ = auVar3._0_4_ ^ auVar5._0_4_;
      auVar18._4_4_ = auVar3._4_4_ ^ auVar5._4_4_;
      auVar18._8_4_ = auVar3._8_4_ ^ auVar5._8_4_;
      auVar18._12_4_ = auVar3._12_4_ ^ auVar5._12_4_;
      auVar21._0_4_ = auVar10._0_4_ ^ auVar4._0_4_;
      auVar21._4_4_ = auVar10._4_4_ ^ auVar4._4_4_;
      auVar21._8_4_ = auVar10._8_4_ ^ auVar4._8_4_;
      auVar21._12_4_ = auVar10._12_4_ ^ auVar4._12_4_;
      auVar3 = sha1nexte_sha(auVar20,auVar5);
      auVar20 = sha1rnds4_sha(auVar22,auVar3,2);
      auVar4 = sha1msg2_sha(auVar21,auVar5);
      auVar3 = sha1nexte_sha(auVar22,auVar4);
      auVar22 = sha1rnds4_sha(auVar20,auVar3,2);
      auVar3 = sha1msg1_sha(auVar10,auVar5);
      auVar13._0_4_ = auVar3._0_4_ ^ auVar4._0_4_;
      auVar13._4_4_ = auVar3._4_4_ ^ auVar4._4_4_;
      auVar13._8_4_ = auVar3._8_4_ ^ auVar4._8_4_;
      auVar13._12_4_ = auVar3._12_4_ ^ auVar4._12_4_;
      auVar15 = sha1msg2_sha(auVar18,auVar4);
      auVar6 = sha1msg2_sha(auVar13,auVar15);
      auVar3 = sha1nexte_sha(auVar20,auVar15);
      auVar21 = sha1rnds4_sha(auVar22,auVar3,2);
      auVar3 = sha1nexte_sha(auVar22,auVar6);
      auVar22 = sha1rnds4_sha(auVar21,auVar3,3);
      auVar3 = sha1msg1_sha(auVar5,auVar4);
      auVar20._0_4_ = auVar15._0_4_ ^ auVar3._0_4_;
      auVar20._4_4_ = auVar15._4_4_ ^ auVar3._4_4_;
      auVar20._8_4_ = auVar15._8_4_ ^ auVar3._8_4_;
      auVar20._12_4_ = auVar15._12_4_ ^ auVar3._12_4_;
      auVar3 = sha1msg1_sha(auVar4,auVar15);
      auVar10._0_4_ = auVar6._0_4_ ^ auVar3._0_4_;
      auVar10._4_4_ = auVar6._4_4_ ^ auVar3._4_4_;
      auVar10._8_4_ = auVar6._8_4_ ^ auVar3._8_4_;
      auVar10._12_4_ = auVar6._12_4_ ^ auVar3._12_4_;
      auVar4 = sha1msg2_sha(auVar20,auVar6);
      auVar3 = sha1msg1_sha(auVar15,auVar6);
      auVar19._0_4_ = auVar3._0_4_ ^ auVar4._0_4_;
      auVar19._4_4_ = auVar3._4_4_ ^ auVar4._4_4_;
      auVar19._8_4_ = auVar3._8_4_ ^ auVar4._8_4_;
      auVar19._12_4_ = auVar3._12_4_ ^ auVar4._12_4_;
      auVar3 = sha1nexte_sha(auVar21,auVar4);
      auVar15 = sha1rnds4_sha(auVar22,auVar3,3);
      auVar5 = sha1msg2_sha(auVar10,auVar4);
      auVar3 = sha1nexte_sha(auVar22,auVar5);
      auVar10 = sha1rnds4_sha(auVar15,auVar3,3);
      auVar3 = sha1msg1_sha(auVar6,auVar4);
      auVar14._0_4_ = auVar3._0_4_ ^ auVar5._0_4_;
      auVar14._4_4_ = auVar3._4_4_ ^ auVar5._4_4_;
      auVar14._8_4_ = auVar3._8_4_ ^ auVar5._8_4_;
      auVar14._12_4_ = auVar3._12_4_ ^ auVar5._12_4_;
      auVar5 = sha1msg2_sha(auVar19,auVar5);
      auVar3 = sha1nexte_sha(auVar15,auVar5);
      auVar4 = sha1rnds4_sha(auVar10,auVar3,3);
      auVar3 = sha1msg2_sha(auVar14,auVar5);
      auVar3 = sha1nexte_sha(auVar10,auVar3);
      auVar5 = sha1rnds4_sha(auVar4,auVar3,3);
      auVar3._0_4_ = auVar5._0_4_ + auVar7._0_4_;
      auVar3._4_4_ = auVar5._4_4_ + auVar7._4_4_;
      auVar3._8_4_ = auVar5._8_4_ + auVar7._8_4_;
      auVar3._12_4_ = auVar5._12_4_ + auVar7._12_4_;
      auVar8 = sha1nexte_sha(auVar4,auVar8);
      uVar2 = uVar2 - 1;
      auVar7 = auVar3;
    } while (uVar2 != 0);
  }
  *param_1 = auVar3._12_4_;
  param_1[1] = auVar3._8_4_;
  param_1[2] = auVar3._4_4_;
  param_1[3] = auVar3._0_4_;
  param_1[4] = auVar8._12_4_;
  return;
}

// SpinWaitMs @ 14196dd30

void __cdecl SpinWaitMs(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar2 = __real_4170000000000000;
  dVar3 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar1 = param_1 * __real_3f50624dd2f1a9fc + dVar3;
  while (dVar3 < dVar1) {
    QueryPerformanceCounter(local_res8);
    dVar3 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2;
  }
  return;
}

// TestAllBasicFilterExpressions @ 14196f640

bool __cdecl TextFilterTests::TestAllBasicFilterExpressions(ITestFilterExpression *param_1)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = TestAllCommonFilterExpressions(param_1);
  bVar2 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Funky<String>",1);
  return (bool)(bVar2 & bVar1);
}

// TestAllCommonFilterExpressions @ 14196f680

bool __cdecl TextFilterTests::TestAllCommonFilterExpressions(ITestFilterExpression *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  
  bVar1 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Wooble",1);
  bVar2 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Woo...",1);
  bVar3 = (**(code **)((longlong)*param_1 + 8))(param_1,L"...ble",1);
  bVar4 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Wo... AND ...le",1);
  bVar5 = (**(code **)((longlong)*param_1 + 8))(param_1,L"\'Wooble\'",1);
  bVar6 = (**(code **)((longlong)*param_1 + 8))(param_1,L"\'Woo\'",1);
  bVar7 = (**(code **)((longlong)*param_1 + 8))(param_1,L"+\'Wooble\'",1);
  bVar8 = (**(code **)((longlong)*param_1 + 8))(param_1,L"+\'Woo\'",0);
  bVar9 = (**(code **)((longlong)*param_1 + 8))(param_1,L"+Wooble",1);
  bVar10 = (**(code **)((longlong)*param_1 + 8))(param_1,L"+Woo",0);
  bVar11 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Wooble2",0);
  bVar12 = (**(code **)((longlong)*param_1 + 8))(param_1,L"-Wooble2",1);
  bVar13 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Wooble2 Flibble",0);
  bVar14 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Wooble2 OR Flibble",1);
  bVar15 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Wooble2 AND Flibble",0);
  bVar16 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Wooble && !Flibble",0);
  bVar17 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Flibble -Wooble2",1);
  bVar18 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Flibble OR -Wooble2",1);
  bVar19 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Flibble AND -Wooble2",1);
  bVar20 = (**(code **)((longlong)*param_1 + 8))(param_1,L"Type\'/Path/To/Asset.Asset\'",1);
  bVar21 = (**(code **)((longlong)*param_1 + 8))
                     (param_1,L"Other\'/Path/To/Asset.Asset\'FollowingText",1);
  bVar22 = (**(code **)((longlong)*param_1 + 8))(param_1,L"\"Funky<String>\"",1);
  bVar23 = (**(code **)((longlong)*param_1 + 8))(param_1,L"My-Item",1);
  bVar24 = (**(code **)((longlong)*param_1 + 8))(param_1,L"+My-Item",1);
  bVar25 = (**(code **)((longlong)*param_1 + 8))(param_1,L"My+Item",1);
  bVar26 = (**(code **)((longlong)*param_1 + 8))(param_1,L"+My+Item",1);
  bVar27 = (**(code **)((longlong)*param_1 + 8))(param_1,L"My.Item",1);
  bVar28 = (**(code **)((longlong)*param_1 + 8))(param_1,L"+My.Item",1);
  return (bool)(bVar28 & bVar27 & bVar26 & bVar25 & bVar24 & bVar23 & bVar22 & bVar21 & bVar20 & 
                                                  bVar19 & bVar18 & bVar17 & bVar16 & bVar15 & 
                                                  bVar14 & bVar13 & bVar12 & bVar11 & bVar10 & bVar9
                                                                                               & 
                                                  bVar8 & bVar7 & bVar6 & bVar5 & bVar4 & bVar3 & 
                                                  bVar2 & bVar1 & 1);
}

// TestAllComplexFilterExpressions @ 14196f9d0

bool __cdecl TextFilterTests::TestAllComplexFilterExpressions(ITestFilterExpression *param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  
  bVar1 = TestAllCommonFilterExpressions(param_1);
  bVar2 = (**(code **)((longlong)*param_1 + 8))(param_1,L"\'Funky<String>\'",1);
  bVar3 = (**(code **)((longlong)*param_1 + 8))(param_1,L"StringKey=Test",1);
  bVar4 = (**(code **)((longlong)*param_1 + 8))(param_1,L"StringKey!=Test",0);
  bVar5 = (**(code **)((longlong)*param_1 + 8))(param_1,L"IntKey=123",1);
  bVar6 = (**(code **)((longlong)*param_1 + 8))(param_1,L"IntKey>122",1);
  bVar7 = (**(code **)((longlong)*param_1 + 8))(param_1,L"IntKey<122",0);
  bVar8 = (**(code **)((longlong)*param_1 + 8))(param_1,L"FloatKey=456.789",1);
  bVar9 = (**(code **)((longlong)*param_1 + 8))(param_1,L"FloatKey>456",1);
  bVar10 = (**(code **)((longlong)*param_1 + 8))(param_1,L"FloatKey<456",0);
  bVar11 = (**(code **)((longlong)*param_1 + 8))(param_1,L"NegFloatKey=-456.789",1);
  bVar12 = (**(code **)((longlong)*param_1 + 8))(param_1,L"NegFloatKey>-456",0);
  bVar13 = (**(code **)((longlong)*param_1 + 8))(param_1,L"NegFloatKey<-456",1);
  bVar14 = (**(code **)((longlong)*param_1 + 8))(param_1,L"IntKey==300 || FloatKey==456.789",1);
  bVar15 = (**(code **)((longlong)*param_1 + 8))(param_1,L"IntKey==300 && FloatKey==456.789",0);
  bVar16 = (**(code **)((longlong)*param_1 + 8))
                     (param_1,L"(IntKey==300 && FloatKey==456.789) OR StringKey==Test",1);
  return (bool)(bVar16 & bVar15 & bVar14 & bVar13 & bVar12 & bVar11 & bVar10 & bVar9 & bVar8 & bVar7
                                                                                               & 
                                                  bVar6 & bVar5 & bVar4 & bVar3 & bVar2 & bVar1);
}

// TestBasicStringExpression @ 14196fe00

bool __cdecl
TextFilterUtils::TestBasicStringExpression
          (FTextFilterString *param_1,FTextFilterString *param_2,
          ETextFilterTextComparisonMode param_3)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  iVar4 = (param_2->InternalString).Data.ArrayNum;
  pwVar3 = L"";
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->InternalString).Data.AllocatorInstance.Data;
  }
  iVar1 = (param_1->InternalString).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar3 = (wchar_t *)(param_1->InternalString).Data.AllocatorInstance.Data;
  }
  bVar2 = TextFilterInternal::CompareStrings<wchar_t>
                    (pwVar3,iVar4,pwVar5,iVar6,param_3,CaseSensitive);
  return bVar2;
}

// TestComplexExpression @ 141970000

bool __cdecl
TextFilterUtils::TestComplexExpression
          (FTextFilterString *param_1,FTextFilterString *param_2,
          ETextFilterComparisonOperation param_3,ETextFilterTextComparisonMode param_4)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *pwVar9;
  double dVar10;
  double dVar11;
  
  bVar4 = ::FString::IsNumeric(&param_1->InternalString);
  if ((bVar4) && (bVar4 = ::FString::IsNumeric(&param_2->InternalString), bVar4)) {
    if ((param_1->InternalString).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->InternalString).Data.AllocatorInstance.Data;
    }
    dVar10 = wcstod(pwVar7,(wchar_t **)0x0);
    if ((param_2->InternalString).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_2->InternalString).Data.AllocatorInstance.Data;
    }
    dVar11 = wcstod(pwVar7,(wchar_t **)0x0);
    if (dVar10 - dVar11 <= 0.0) {
      iVar8 = (0.0 <= dVar10 - dVar11) - 1;
    }
    else {
      iVar8 = 1;
    }
    bVar3 = (byte)((uint)iVar8 >> 0x18);
    switch(param_3) {
    case Equal:
      bVar4 = iVar8 == 0;
      break;
    case NotEqual:
      bVar4 = iVar8 != 0;
      break;
    case Less:
      bVar4 = (bool)(bVar3 >> 7);
      break;
    case LessOrEqual:
      bVar4 = iVar8 < 1;
      break;
    case Greater:
      bVar4 = 0 < iVar8;
      break;
    case GreaterOrEqual:
      bVar4 = (bool)(bVar3 >> 7 ^ 1);
      break;
    default:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\TextFilterUtils.cpp"
                         ,0x164,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar4 = false;
    }
  }
  else if (param_3 < Less) {
    iVar6 = (param_2->InternalString).Data.ArrayNum;
    pwVar7 = L"";
    iVar8 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar8 = 0;
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_2->InternalString).Data.AllocatorInstance.Data;
    }
    iVar1 = (param_1->InternalString).Data.ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    else {
      pwVar7 = (wchar_t *)(param_1->InternalString).Data.AllocatorInstance.Data;
    }
    bVar4 = TextFilterInternal::CompareStrings<wchar_t>
                      (pwVar7,iVar6,pwVar9,iVar8,param_4,CaseSensitive);
    if (param_3 != Equal) {
      bVar4 = !bVar4;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// TryConvertWideToAnsi @ 1419758a0

bool __cdecl
TextFilterUtils::TryConvertWideToAnsi
          (FString *param_1,TArray<char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  piVar1 = &param_2->ArrayNum;
  *piVar1 = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  iVar3 = (param_1->Data).ArrayNum;
  pwVar6 = L"";
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = *pwVar5;
  while( true ) {
    if (uVar2 == 0) {
      iVar4 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      if (0 < iVar4) {
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
        iVar3 = (param_1->Data).ArrayNum;
        if (iVar3 != 0) {
          pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        FGenericPlatformString::Convert<wchar_t,char>
                  ((char *)(param_2->AllocatorInstance).Data,*piVar1,pwVar6,iVar3);
      }
      return true;
    }
    if (0x7f < uVar2) break;
    uVar2 = *(ushort *)((longlong)pwVar5 + 2);
    pwVar5 = (wchar_t *)((longlong)pwVar5 + 2);
  }
  return false;
}

// UnescapeQuotedString @ 1419799f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TextFilterExpressionParser::UnescapeQuotedString(FString *param_1,wchar_t param_2)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [4];
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28[2] = 0x5c;
  local_20 = 0;
  local_28[1] = 0;
  local_28[0] = param_2;
  local_28[3] = param_2;
  ::FString::ReplaceInline(param_1,local_28 + 2,local_28,IgnoreCase);
  ::FString::ReplaceInline(param_1,L"\\\\",L"\\",IgnoreCase);
  return;
}

// UnescapeURI @ 141979a80

FString * __cdecl StringUtility::UnescapeURI(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  ::FString::Replace(param_1,__return_storage_ptr__,L"%20",L" ",CaseSensitive);
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,L"%21",L"!",CaseSensitive);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::Replace(__return_storage_ptr__,&local_18,L"%3F",L"?",CaseSensitive);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// appOnFailSHAVerification @ 14197cee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl appOnFailSHAVerification(wchar_t *param_1,bool param_2)

{
  if (4 < (byte)LogSHA._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogSHA);
    return;
  }
  return;
}

// FullFileSHAHashMap'' @ 150343f50

void __cdecl `dynamic_atexit_destructor_for_'FSHA1::FullFileSHAHashMap__(void)

{
  FSHA1::FullFileSHAHashMap._72_4_ = 0;
  if (FSHA1::FullFileSHAHashMap._64_8_ != 0) {
    FMemory::Free((void *)FSHA1::FullFileSHAHashMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FSHA1::FullFileSHAHashMap);
  return;
}

// NestedTimerScopeDepths'' @ 150343f90

void __cdecl
`dynamic_atexit_destructor_for_'FCpuProfilerTraceInternal::NestedTimerScopeDepths__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xba0);
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

// OnRuntimeIssueLogged'' @ 150343fc0

void __cdecl `dynamic_atexit_destructor_for_'FRuntimeErrors::OnRuntimeIssueLogged__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FRuntimeErrors::OnRuntimeIssueLogged,(FWriteAccessScope *)&local_28);
  if ((FRuntimeErrors::OnRuntimeIssueLogged._16_4_ != 0) &&
     (FRuntimeErrors::OnRuntimeIssueLogged._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FRuntimeErrors::OnRuntimeIssueLogged._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FRuntimeErrors::OnRuntimeIssueLogged.field_0x8,0,0,0x10);
    FRuntimeErrors::OnRuntimeIssueLogged._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FRuntimeErrors::OnRuntimeIssueLogged._8_8_ != 0) {
    FMemory::Free((void *)FRuntimeErrors::OnRuntimeIssueLogged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FRuntimeErrors::OnRuntimeIssueLogged);
  return;
}

// RegisteredFiles'' @ 150344060

void __cdecl `dynamic_atexit_destructor_for_'FPreloadableFile::RegisteredFiles__(void)

{
  FPreloadableFile::RegisteredFiles._72_4_ = 0;
  if (FPreloadableFile::RegisteredFiles._64_8_ != 0) {
    FMemory::Free((void *)FPreloadableFile::RegisteredFiles._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FPreloadableFile::RegisteredFiles);
  return;
}

// ScriptSHAHashMap'' @ 1503440a0

void __cdecl `dynamic_atexit_destructor_for_'FSHA1::ScriptSHAHashMap__(void)

{
  FSHA1::ScriptSHAHashMap._72_4_ = 0;
  if (FSHA1::ScriptSHAHashMap._64_8_ != 0) {
    FMemory::Free((void *)FSHA1::ScriptSHAHashMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FSHA1::ScriptSHAHashMap);
  return;
}

// Singleton'' @ 1503440e0

void __cdecl `dynamic_atexit_destructor_for_'FCsvProfilerThreadData::Singleton__(void)

{
  DestructItems<TWeakPtr<FCsvProfilerThreadData,1>,int>
            ((TWeakPtr<FCsvProfilerThreadData,1> *)
             FCsvProfilerThreadData::Singleton.TlsInstances.AllocatorInstance.Data,
             FCsvProfilerThreadData::Singleton.TlsInstances.ArrayNum);
  if (FCsvProfilerThreadData::Singleton.TlsInstances.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FCsvProfilerThreadData::Singleton.TlsInstances.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x000150344112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FCsvProfilerThreadData::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'A'' @ 150344120

void __cdecl `FTrackedActivity::GetEngineActivity'::__l2::_dynamic_atexit_destructor_for__A__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::A.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'A'' @ 150344140

void __cdecl `FTrackedActivity::GetIOActivity'::__l2::_dynamic_atexit_destructor_for__A__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::A.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'ABTestCmd'' @ 150344160

void __cdecl _dynamic_atexit_destructor_for__ABTestCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ABTestCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CVarABTestCoolDown'' @ 150344180

void __cdecl _dynamic_atexit_destructor_for__CVarABTestCoolDown__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarABTestCoolDown);
  return;
}

// `dynamic_atexit_destructor_for_'CVarABTestHistory'' @ 1503441a0

void __cdecl _dynamic_atexit_destructor_for__CVarABTestHistory__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarABTestHistory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarABTestMinFramesPerTrial'' @ 1503441c0

void __cdecl _dynamic_atexit_destructor_for__CVarABTestMinFramesPerTrial__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarABTestMinFramesPerTrial);
  return;
}

// `dynamic_atexit_destructor_for_'CVarABTestNumResamples'' @ 1503441e0

void __cdecl _dynamic_atexit_destructor_for__CVarABTestNumResamples__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarABTestNumResamples);
  return;
}

// `dynamic_atexit_destructor_for_'CVarABTestReportNum'' @ 150344200

void __cdecl _dynamic_atexit_destructor_for__CVarABTestReportNum__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarABTestReportNum);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvAggregateTaskWorkerStats'' @ 150344220

void __cdecl _dynamic_atexit_destructor_for__CVarCsvAggregateTaskWorkerStats__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvAggregateTaskWorkerStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvBenchmark'' @ 150344240

void __cdecl _dynamic_atexit_destructor_for__CVarCsvBenchmark__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvBenchmark);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvBenchmarkIterationCount'' @ 150344260

void __cdecl _dynamic_atexit_destructor_for__CVarCsvBenchmarkIterationCount__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvBenchmarkIterationCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvBlockOnCaptureEnd'' @ 150344280

void __cdecl _dynamic_atexit_destructor_for__CVarCsvBlockOnCaptureEnd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvBlockOnCaptureEnd);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvCompressionMode'' @ 1503442a0

void __cdecl _dynamic_atexit_destructor_for__CVarCsvCompressionMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvCompressionMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvContinuousWrites'' @ 1503442c0

void __cdecl _dynamic_atexit_destructor_for__CVarCsvContinuousWrites__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvContinuousWrites);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvForceExit'' @ 1503442e0

void __cdecl _dynamic_atexit_destructor_for__CVarCsvForceExit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvForceExit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvPauseProcessingThread'' @ 150344300

void __cdecl _dynamic_atexit_destructor_for__CVarCsvPauseProcessingThread__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvPauseProcessingThread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvProcessingThreadGtStallUpdateEscalationThreshold'' @ 150344320

void __cdecl
_dynamic_atexit_destructor_for__CVarCsvProcessingThreadGtStallUpdateEscalationThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCsvProcessingThreadGtStallUpdateEscalationThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvProcessingThreadGtStallUpdateTimeThresholdMs'' @ 150344340

void __cdecl
_dynamic_atexit_destructor_for__CVarCsvProcessingThreadGtStallUpdateTimeThresholdMs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCsvProcessingThreadGtStallUpdateTimeThresholdMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvProcessingThreadTimeBetweenUpdates'' @ 150344360

void __cdecl _dynamic_atexit_destructor_for__CVarCsvProcessingThreadTimeBetweenUpdates__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCsvProcessingThreadTimeBetweenUpdates);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvStatCounts'' @ 150344380

void __cdecl _dynamic_atexit_destructor_for__CVarCsvStatCounts__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvStatCounts);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvStatNameValidation'' @ 1503443a0

void __cdecl _dynamic_atexit_destructor_for__CVarCsvStatNameValidation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvStatNameValidation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvStreamFramesToBuffer'' @ 1503443c0

void __cdecl _dynamic_atexit_destructor_for__CVarCsvStreamFramesToBuffer__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvStreamFramesToBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvTargetFrameRateOverride'' @ 1503443e0

void __cdecl _dynamic_atexit_destructor_for__CVarCsvTargetFrameRateOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvTargetFrameRateOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCsvWriteBufferSize'' @ 150344400

void __cdecl _dynamic_atexit_destructor_for__CVarCsvWriteBufferSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCsvWriteBufferSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceStringifyTimecodeSubframes'' @ 150344420

void __cdecl _dynamic_atexit_destructor_for__CVarForceStringifyTimecodeSubframes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceStringifyTimecodeSubframes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxPerThreadStatDataSlackKB'' @ 150344440

void __cdecl _dynamic_atexit_destructor_for__CVarMaxPerThreadStatDataSlackKB__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxPerThreadStatDataSlackKB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNamedEventsExclusive'' @ 150344460

void __cdecl _dynamic_atexit_destructor_for__CVarNamedEventsExclusive__(void)

{
  CVarNamedEventsExclusive._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNamedEventsExclusive);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNamedEventsTiming'' @ 150344480

void __cdecl _dynamic_atexit_destructor_for__CVarNamedEventsTiming__(void)

{
  CVarNamedEventsTiming._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNamedEventsTiming);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumberedFNamesStatsAreFatal'' @ 1503444a0

void __cdecl _dynamic_atexit_destructor_for__CVarNumberedFNamesStatsAreFatal__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNumberedFNamesStatsAreFatal);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlowTaskMaxTraceRegionDepth'' @ 1503444c0

void __cdecl _dynamic_atexit_destructor_for__CVarSlowTaskMaxTraceRegionDepth__(void)

{
  CVarSlowTaskMaxTraceRegionDepth._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlowTaskMaxTraceRegionDepth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackWaitsAllThreads'' @ 1503444e0

void __cdecl _dynamic_atexit_destructor_for__CVarTrackWaitsAllThreads__(void)

{
  CVarTrackWaitsAllThreads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTrackWaitsAllThreads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackWaitsGT'' @ 150344500

void __cdecl _dynamic_atexit_destructor_for__CVarTrackWaitsGT__(void)

{
  CVarTrackWaitsGT._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTrackWaitsGT);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackWaitsRT'' @ 150344520

void __cdecl _dynamic_atexit_destructor_for__CVarTrackWaitsRT__(void)

{
  CVarTrackWaitsRT._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTrackWaitsRT);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseDropFormatTimecodeByDefaultWhenSupported'' @ 150344540

void __cdecl _dynamic_atexit_destructor_for__CVarUseDropFormatTimecodeByDefaultWhenSupported__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUseDropFormatTimecodeByDefaultWhenSupported);
  return;
}

// `dynamic_atexit_destructor_for_'CharPtrToStringIndex'' @ 150344560

void __cdecl _dynamic_atexit_destructor_for__CharPtrToStringIndex__(void)

{
  CharPtrToStringIndex._72_4_ = 0;
  if (CharPtrToStringIndex._64_8_ != 0) {
    FMemory::Free((void *)CharPtrToStringIndex._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<char_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<char_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<char_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&CharPtrToStringIndex);
  return;
}

// `dynamic_atexit_destructor_for_'ClassesPrefix'' @ 1503445a0

void __cdecl
`FPathViews::GetMountPointNameFromPath'::__l5::_dynamic_atexit_destructor_for__ClassesPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClassesPrefix.Data.AllocatorInstance.Data;
  if (ClassesPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClassesPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Data'' @ 1503445c0

void __cdecl
`GetClassesToReinstanceForHotReload'::__l2::_dynamic_atexit_destructor_for__Data__(void)

{
  ::Data._72_4_ = 0;
  if (::Data._64_8_ != 0) {
    FMemory::Free((void *)::Data._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Data);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultDictionary'' @ 150344600

void __cdecl
`FUProjectDictionary::GetDefault'::__l2::_dynamic_atexit_destructor_for__DefaultDictionary__(void)

{
  DefaultDictionary.ShortProjectNameDictionary._72_4_ = 0;
  if (DefaultDictionary.ShortProjectNameDictionary._64_8_ != 0) {
    FMemory::Free((void *)DefaultDictionary.ShortProjectNameDictionary._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&DefaultDictionary.ShortProjectNameDictionary);
  DestructItems<FString,int>
            ((FString *)DefaultDictionary.ProjectRootDirs.AllocatorInstance.Data,
             DefaultDictionary.ProjectRootDirs.ArrayNum);
  if (DefaultDictionary.ProjectRootDirs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(DefaultDictionary.ProjectRootDirs.AllocatorInstance.Data);
  }
  if (DefaultDictionary.RootDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(DefaultDictionary.RootDir.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultFormatter'' @ 150344670

void __cdecl
`GetDefaultFormatter<char>'::__l2::_dynamic_atexit_destructor_for__DefaultFormatter__(void)

{
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)> *)
             `class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
             DefaultFormatter.StrictOrderedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
             DefaultFormatter.StrictOrderedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
      DefaultFormatter.StrictOrderedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::
                  __l2::DefaultFormatter.StrictOrderedDefinitions.Definitions.AllocatorInstance.Data
                 );
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)> *)
             `class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
             DefaultFormatter.StrictNamedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
             DefaultFormatter.StrictNamedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
      DefaultFormatter.StrictNamedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::
                  __l2::DefaultFormatter.StrictNamedDefinitions.Definitions.AllocatorInstance.Data);
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)> *)
             `class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
             DefaultFormatter.OrderedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
             DefaultFormatter.OrderedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
      DefaultFormatter.OrderedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::
                  __l2::DefaultFormatter.OrderedDefinitions.Definitions.AllocatorInstance.Data);
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)> *)
             `class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
             DefaultFormatter.NamedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
             DefaultFormatter.NamedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::__l2::
      DefaultFormatter.NamedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<char>&___ptr64___cdecl_GetDefaultFormatter<char>(void)'::
                  __l2::DefaultFormatter.NamedDefinitions.Definitions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultFormatter'' @ 150344710

void __cdecl
`GetDefaultFormatter<char8_t>'::__l2::_dynamic_atexit_destructor_for__DefaultFormatter__(void)

{
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)> *)
             `class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::
             __l2::DefaultFormatter.StrictOrderedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::
             __l2::DefaultFormatter.StrictOrderedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::__l2::
      DefaultFormatter.StrictOrderedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'
                  ::__l2::DefaultFormatter.StrictOrderedDefinitions.Definitions.AllocatorInstance.
                  Data);
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)> *)
             `class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::
             __l2::DefaultFormatter.StrictNamedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::
             __l2::DefaultFormatter.StrictNamedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::__l2::
      DefaultFormatter.StrictNamedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'
                  ::__l2::DefaultFormatter.StrictNamedDefinitions.Definitions.AllocatorInstance.Data
                 );
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)> *)
             `class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::
             __l2::DefaultFormatter.OrderedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::
             __l2::DefaultFormatter.OrderedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::__l2::
      DefaultFormatter.OrderedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'
                  ::__l2::DefaultFormatter.OrderedDefinitions.Definitions.AllocatorInstance.Data);
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)> *)
             `class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::
             __l2::DefaultFormatter.NamedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::
             __l2::DefaultFormatter.NamedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'::__l2::
      DefaultFormatter.NamedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<char8_t>&___ptr64___cdecl_GetDefaultFormatter<char8_t>(void)'
                  ::__l2::DefaultFormatter.NamedDefinitions.Definitions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultFormatter'' @ 1503447b0

void __cdecl
`GetDefaultFormatter<wchar_t>'::__l2::_dynamic_atexit_destructor_for__DefaultFormatter__(void)

{
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             `class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::
             __l2::DefaultFormatter.StrictOrderedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::
             __l2::DefaultFormatter.StrictOrderedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::__l2::
      DefaultFormatter.StrictOrderedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'
                  ::__l2::DefaultFormatter.StrictOrderedDefinitions.Definitions.AllocatorInstance.
                  Data);
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             `class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::
             __l2::DefaultFormatter.StrictNamedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::
             __l2::DefaultFormatter.StrictNamedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::__l2::
      DefaultFormatter.StrictNamedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'
                  ::__l2::DefaultFormatter.StrictNamedDefinitions.Definitions.AllocatorInstance.Data
                 );
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             `class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::
             __l2::DefaultFormatter.OrderedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::
             __l2::DefaultFormatter.OrderedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::__l2::
      DefaultFormatter.OrderedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'
                  ::__l2::DefaultFormatter.OrderedDefinitions.Definitions.AllocatorInstance.Data);
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             `class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::
             __l2::DefaultFormatter.NamedDefinitions.Definitions.AllocatorInstance.Data,
             `class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::
             __l2::DefaultFormatter.NamedDefinitions.Definitions.ArrayNum);
  if (`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'::__l2::
      DefaultFormatter.NamedDefinitions.Definitions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`class_TStringFormatter<wchar_t>&___ptr64___cdecl_GetDefaultFormatter<wchar_t>(void)'
                  ::__l2::DefaultFormatter.NamedDefinitions.Definitions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyDeprecatedList'' @ 150344850

void __cdecl _dynamic_atexit_destructor_for__EmptyDeprecatedList__(void)

{
  EmptyDeprecatedList._72_4_ = 0;
  if (EmptyDeprecatedList._64_8_ != 0) {
    FMemory::Free((void *)EmptyDeprecatedList._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&EmptyDeprecatedList);
  return;
}

// `dynamic_atexit_destructor_for_'EndOfPipeData'' @ 150344890

void __cdecl
`FCsvProfilerThreadData::GetEndOfPipe'::__l2::_dynamic_atexit_destructor_for__EndOfPipeData__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(DAT_154f0c1d8)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FCoreDebuggingStateTestAutomationTestInstance'' @ 1503448b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCoreDebuggingStateTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCoreDebuggingStateTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTextFilterTests_TextFilterAutomationTestInstance'' @ 1503448d0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTextFilterTests_TextFilterAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTextFilterTests_TextFilterAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTextFilterTests_TextFilterExpressionEvaluatorAutomationTestInstance'' @ 1503448f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTextFilterTests_TextFilterExpressionEvaluatorAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FTextFilterTests_TextFilterExpressionEvaluatorAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GCsvABTest'' @ 150344910

void __cdecl _dynamic_atexit_destructor_for__GCsvABTest__(void)

{
  if (GCsvABTest.CVarValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GCsvABTest.CVarValues.AllocatorInstance.Data);
  }
  DestructItems<FCsvABTest::FCVarABData,int>
            ((FCVarABData *)GCsvABTest.CVarABDataArray.AllocatorInstance.Data,
             GCsvABTest.CVarABDataArray.ArrayNum);
  if (GCsvABTest.CVarABDataArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GCsvABTest.CVarABDataArray.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCsvFileName'' @ 150344960

void __cdecl _dynamic_atexit_destructor_for__GCsvFileName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GCsvFileName.Data.AllocatorInstance.Data;
  if (GCsvFileName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GCsvFileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GCsvPersistentCustomStats'' @ 150344980

void __cdecl _dynamic_atexit_destructor_for__GCsvPersistentCustomStats__(void)

{
  if (GCsvPersistentCustomStats.Stats.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GCsvPersistentCustomStats.Stats.AllocatorInstance.Data);
  }
  GCsvPersistentCustomStats.StatLookup._72_4_ = 0;
  if (GCsvPersistentCustomStats.StatLookup._64_8_ != 0) {
    FMemory::Free((void *)GCsvPersistentCustomStats.StatLookup._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FCsvPersistentCustomStatBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FCsvPersistentCustomStatBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FCsvPersistentCustomStatBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GCsvPersistentCustomStats.StatLookup);
                    /* WARNING: Could not recover jumptable at 0x0001503449c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GCsvPersistentCustomStats);
  return;
}

// `dynamic_atexit_destructor_for_'GFrameBoundaries'' @ 1503449e0

void __cdecl _dynamic_atexit_destructor_for__GFrameBoundaries__(void)

{
  undefined8 *puVar1;
  TSingleProducerSingleConsumerList<unsigned___int64,16> *pTVar2;
  FBlock *pFVar3;
  longlong lVar4;
  TSingleProducerSingleConsumerList<unsigned___int64,16> *pTVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 3;
  lVar7 = 0x154f0a8f8;
  lVar4 = 3;
  do {
    puVar1 = (undefined8 *)(lVar7 + -0x10);
    lVar7 = lVar7 + -0x10;
    lVar4 = lVar4 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar4 != 0);
  pTVar5 = (TSingleProducerSingleConsumerList<unsigned___int64,16> *)
           GFrameBoundaries.FrameBoundaryTimestamps;
  do {
    pTVar2 = pTVar5 + -1;
    lVar6 = lVar6 + -1;
    pFVar3 = pTVar5[-1].HeadBlock;
    while (pFVar3 != (FBlock *)0x0) {
      pTVar2->HeadBlock = pFVar3->Next;
      operator_delete(pFVar3,0x88);
      pFVar3 = pTVar2->HeadBlock;
    }
    pTVar2->HeadBlock = (FBlock *)0x0;
    pTVar5[-1].TailBlock = (FBlock *)0x0;
    pTVar5 = pTVar2;
  } while (lVar6 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'GGlobalCsvCategory'' @ 150344ab0

void __cdecl _dynamic_atexit_destructor_for__GGlobalCsvCategory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GGlobalCsvCategory.Name.Data.AllocatorInstance.Data;
  if (GGlobalCsvCategory.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GGlobalCsvCategory.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GRemoteConfig'' @ 150344ad0

void __cdecl _dynamic_atexit_destructor_for__GRemoteConfig__(void)

{
  DestructItems<FString,int>
            ((FString *)GRemoteConfig.CachedFileNames.AllocatorInstance.Data,
             GRemoteConfig.CachedFileNames.ArrayNum);
  if (GRemoteConfig.CachedFileNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GRemoteConfig.CachedFileNames.AllocatorInstance.Data);
  }
  GRemoteConfig.ConfigBuffers._72_4_ = 0;
  if (GRemoteConfig.ConfigBuffers._64_8_ != 0) {
    FMemory::Free((void *)GRemoteConfig.ConfigBuffers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FRemoteConfigAsyncIOInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FRemoteConfigAsyncIOInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FRemoteConfigAsyncIOInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GRemoteConfig);
  return;
}

// `dynamic_atexit_destructor_for_'GRemoteConfigIOManager'' @ 150344b30

void __cdecl _dynamic_atexit_destructor_for__GRemoteConfigIOManager__(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&GRemoteConfigIOManager.SynchronizationObject);
  DestructItems<FRemoteConfigAsyncCachedWriteTask,int>
            ((FRemoteConfigAsyncCachedWriteTask *)
             GRemoteConfigIOManager.CachedWriteTasks.AllocatorInstance.Data,
             GRemoteConfigIOManager.CachedWriteTasks.ArrayNum);
  if (GRemoteConfigIOManager.CachedWriteTasks.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GRemoteConfigIOManager.CachedWriteTasks.AllocatorInstance.Data);
  }
  GRemoteConfigIOManager.PendingTasks._72_4_ = 0;
  if (GRemoteConfigIOManager.PendingTasks._64_8_ != 0) {
    FMemory::Free((void *)GRemoteConfigIOManager.PendingTasks._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GRemoteConfigIOManager);
  return;
}

// `dynamic_atexit_destructor_for_'HandleCSVCategoryCmd'' @ 150344ba0

void __cdecl _dynamic_atexit_destructor_for__HandleCSVCategoryCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&HandleCSVCategoryCmd);
  return;
}

// `dynamic_atexit_destructor_for_'HandleCSVProfileCmd'' @ 150344bc0

void __cdecl _dynamic_atexit_destructor_for__HandleCSVProfileCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&HandleCSVProfileCmd);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 150344be0

void __cdecl `FPreloadFileRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  `public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'::
  __l2::Instance.Files._72_4_ = 0;
  if (`public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
      ::__l2::Instance.Files._64_8_ != 0) {
    FMemory::Free((void *)`public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
                          ::__l2::Instance.Files._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPreLoadFile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPreLoadFile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPreLoadFile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
                 ::__l2::Instance.Files);
                    /* WARNING: Could not recover jumptable at 0x000150344c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_static_struct_FPreloadFileRegistry&___ptr64___cdecl_FPreloadFileRegistry::Get(void)'
              ::__l2::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 150344c30

void __cdecl `FCsvProfiler::Get'::__l5::_dynamic_atexit_destructor_for__Instance__(void)

{
  FCsvProfiler::~FCsvProfiler(&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'LogCsvProfiler'' @ 150344c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCsvProfiler__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCsvProfiler);
  return;
}

// `dynamic_atexit_destructor_for_'LogModuleManager'' @ 150344c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogModuleManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogModuleManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogPaths'' @ 150344c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPaths__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPaths);
  return;
}

// `dynamic_atexit_destructor_for_'LogSecureHash'' @ 150344cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSecureHash__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSecureHash);
  return;
}

// `dynamic_atexit_destructor_for_'LogStringUtility'' @ 150344cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStringUtility__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStringUtility);
  return;
}

// `dynamic_atexit_destructor_for_'LogTimeGuard'' @ 150344cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTimeGuard__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTimeGuard);
  return;
}

// `dynamic_atexit_destructor_for_'LogUProjectInfo'' @ 150344d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUProjectInfo__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUProjectInfo);
  return;
}

// `dynamic_atexit_destructor_for_'Manager'' @ 150344d30

void __cdecl `FTrackedActivityManager::Get'::__l2::_dynamic_atexit_destructor_for__Manager__(void)

{
  longlong *plVar1;
  
  if (`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
      ::__l2::Manager.EventFunc._0_8_ != 0) {
    plVar1 = (longlong *)
             &`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
              ::__l2::Manager.EventFunc.field_0x10;
    if (`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
        ::__l2::Manager.EventFunc._40_8_ != 0) {
      plVar1 = (longlong *)
               `public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
               ::__l2::Manager.EventFunc._40_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
      ::__l2::Manager.Activities.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
                  ::__l2::Manager.Activities.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x000150344d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_static_class_FTrackedActivityManager&___ptr64___cdecl_FTrackedActivityManager::Get(void)'
              ::__l2::Manager);
  return;
}

// `dynamic_atexit_destructor_for_'Module'' @ 150344d90

void __cdecl
`FModuleManager::LoadModuleWithFailureReason'::__l2::_dynamic_atexit_destructor_for__Module__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Module.Data.AllocatorInstance.Data;
  if (Module.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Module.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Scores'' @ 150344db0

void __cdecl `FABTest::TickAndGetCommand'::__l117::_dynamic_atexit_destructor_for__Scores__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Scores.AllocatorInstance.Data;
  if (Scores.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Scores.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Singleton'' @ 150344dd0

void __cdecl `FABTest::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (::Singleton.ResampleCount.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.ResampleCount.AllocatorInstance.Data);
  }
  if (::Singleton.ResampleAccumulators.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.ResampleAccumulators.AllocatorInstance.Data);
  }
  DestructItems<FABTest::FSample,int>
            ((FSample *)::Singleton.Samples.AllocatorInstance.Data,::Singleton.Samples.ArrayNum);
  if (::Singleton.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.Samples.AllocatorInstance.Data);
  }
  lVar3 = 0x154b812d0;
  lVar2 = 2;
  do {
    puVar1 = (undefined8 *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150344e60

void __cdecl
`TLazySingleton<FPaths::FStaticData>::GetLazy'::__l2::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  if (DAT_154f0c830 != (FStaticData *)0x0) {
    FPaths::FStaticData::~FStaticData(DAT_154f0c830);
    DAT_154f0c830 = (FStaticData *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150344e90

void __cdecl
`UE::Core::Private::GetModuleManagerSingleton'::__l2::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  if (::Singleton.bIsSet) {
    FModuleManager::~FModuleManager(&::Singleton.TypedValue);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'State'' @ 150344eb0

void __cdecl
`UE::Core::FVisualizerDebuggingState::Assign'::__l5::_dynamic_atexit_destructor_for__State__(void)

{
  FScriptContainerElement *pFVar1;
  FVisualizerDebuggingStateImpl *pFVar2;
  
  pFVar2 = State.PimplData;
  if (State.PimplData != (FVisualizerDebuggingStateImpl *)0x0) {
    pFVar1 = ((State.PimplData)->OrderedGuidString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar2->DebugPtrs).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar2->UniqueIds).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar2,0x30);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticTimecodeParser'' @ 150344f10

void __cdecl
`UE::Core::Private::FTimecodeParser::Get'::__l2::
_dynamic_atexit_destructor_for__StaticTimecodeParser__(void)

{
  if (`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
      ::__l2::StaticTimecodeParser.ValueSeparators.AllocatorInstance.SecondaryData !=
      (ForElementType<TArray<wchar_t,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_*>
       )0x0) {
    FMemory::Free((void *)`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
                          ::__l2::StaticTimecodeParser.ValueSeparators.AllocatorInstance.
                          SecondaryData);
  }
  if (`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
      ::__l2::StaticTimecodeParser.DropFrameSeparators.AllocatorInstance.SecondaryData !=
      (ForElementType<wchar_t>)0x0) {
    FMemory::Free((void *)`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
                          ::__l2::StaticTimecodeParser.DropFrameSeparators.AllocatorInstance.
                          SecondaryData);
  }
  if (`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
      ::__l2::StaticTimecodeParser.SubFrameSeparators.AllocatorInstance.SecondaryData !=
      (ForElementType<wchar_t>)0x0) {
    FMemory::Free((void *)`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
                          ::__l2::StaticTimecodeParser.SubFrameSeparators.AllocatorInstance.
                          SecondaryData);
  }
  if (`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
      ::__l2::StaticTimecodeParser.AllSeparators.AllocatorInstance.SecondaryData !=
      (ForElementType<wchar_t>)0x0) {
    FMemory::Free((void *)`public:_static_class_UE::Core::Private::FTimecodeParser&___ptr64___cdecl_UE::Core::Private::FTimecodeParser::Get(void)'
                          ::__l2::StaticTimecodeParser.AllSeparators.AllocatorInstance.SecondaryData
                 );
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'UniqueNonFNameStatIDIndices'' @ 150344f70

void __cdecl _dynamic_atexit_destructor_for__UniqueNonFNameStatIDIndices__(void)

{
  DestructItems<FString,int>
            ((FString *)UniqueNonFNameStatIDIndices.AllocatorInstance.Data,
             UniqueNonFNameStatIDIndices.ArrayNum);
  if (UniqueNonFNameStatIDIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(UniqueNonFNameStatIDIndices.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'UniqueNonFNameStatIDStrings'' @ 150344fb0

void __cdecl _dynamic_atexit_destructor_for__UniqueNonFNameStatIDStrings__(void)

{
  UniqueNonFNameStatIDStrings._72_4_ = 0;
  if (UniqueNonFNameStatIDStrings._64_8_ != 0) {
    FMemory::Free((void *)UniqueNonFNameStatIDStrings._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UniqueNonFNameStatIDStrings);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Basic'' @ 150344ff0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Basic__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Basic.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Basic.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Basic.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_CsvBench'' @ 150345010

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_CsvBench__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_CsvBench.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_CsvBench.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_CsvBench.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_CsvProfiler'' @ 150345030

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_CsvProfiler__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_CsvProfiler.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_CsvProfiler.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (_GCsvCategory_CsvProfiler.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_CsvTest'' @ 150345050

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_CsvTest__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_CsvTest.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_CsvTest.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_CsvTest.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_Exclusive'' @ 150345070

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Exclusive__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Exclusive.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Exclusive.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Exclusive.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_FileIO'' @ 150345090

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_FileIO__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_FileIO.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_FileIO.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_FileIO.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'__GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs'' @ 1503450b0

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs__(void)

{
  if ((__GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs.CounterFlags & 0x20) != 0) {
    operator_delete__(__GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs.CounterName);
    return;
  }
  return;
}

// operator() @ 15047ed70

bool __thiscall `ValidateFName'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3045156212573208102>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3045156212573208102>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047edd7;
    }
  }
  bVar2 = false;
LAB_15047edd7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

