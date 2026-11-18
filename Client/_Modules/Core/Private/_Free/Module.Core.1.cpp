// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 433

// NewTasks'' @ 140ef5ad0

void __cdecl `dynamic_initializer_for_'FTaskGraphCompatibilityImplementation::NewTasks__(void)

{
  __tlregdtor(`dynamic_atexit_destructor_for_'FTaskGraphCompatibilityImplementation::NewTasks__);
  return;
}

// Null'' @ 140ef5af0

void __cdecl `dynamic_initializer_for_'FCompressedBuffer::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FCompressedBuffer::Null__);
  return;
}

// PendingDeleteTlsValues'' @ 140ef5b10

void __cdecl
`dynamic_initializer_for_'LowLevelTasks::FSchedulerTls::FImpl::PendingDeleteTlsValues__(void)

{
  atexit(`dynamic_atexit_destructor_for_'LowLevelTasks::FSchedulerTls::FImpl::
         PendingDeleteTlsValues__);
  return;
}

// PendingInsertTlsValues'' @ 140ef5b30

void __cdecl
`dynamic_initializer_for_'LowLevelTasks::FSchedulerTls::FImpl::PendingInsertTlsValues__(void)

{
  atexit(`dynamic_atexit_destructor_for_'LowLevelTasks::FSchedulerTls::FImpl::
         PendingInsertTlsValues__);
  return;
}

// Singleton'' @ 140ef5b50

void __cdecl `dynamic_initializer_for_'LowLevelTasks::FScheduler::Singleton__(void)

{
  LowLevelTasks::FScheduler::FScheduler(&LowLevelTasks::FScheduler::Singleton);
  atexit(`dynamic_atexit_destructor_for_'LowLevelTasks::FScheduler::Singleton__);
  return;
}

// TlsValuesHolder'' @ 140ef5b80

/* WARNING: Removing unreachable block (ram,0x000140ef5bf7) */

void __cdecl `dynamic_initializer_for_'LowLevelTasks::FSchedulerTls::TlsValuesHolder__(void)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar3;
  bool bVar4;
  atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
  aVar5;
  atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
  aVar6;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar7;
  atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
  *paVar8;
  
  aVar6 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
           )0x0;
  paVar8 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
            *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x50
              );
  *paVar8 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
             )0x0;
  bVar4 = FGenericPlatformMallocCrash::IsActive();
  if (!bVar4) {
    aVar5 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
             )AnsiMalloc(0x28,0x40);
    if (aVar5 != (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
                  )0x0) {
      *(undefined8 *)((longlong)aVar5 + 0x20) = 0;
      *(undefined8 *)aVar5 = 0;
      *(undefined8 *)((longlong)aVar5 + 8) = 0;
      *(undefined8 *)((longlong)aVar5 + 0x10) = 0;
      *(undefined8 *)((longlong)aVar5 + 0x18) = 0;
      aVar6 = aVar5;
    }
    *paVar8 = aVar6;
    if (((byte)LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State & 1) == 0) {
      LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State =
           LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State | 1;
      LOCK();
      UNLOCK();
      LowLevelTasks::FSchedulerTls::FImpl::ProcessPendingTlsValuesNoLock();
      aVar6 = *paVar8;
      if (LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValues != (FTlsValues *)0x0) {
        LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValues->_padding_ = (longlong)aVar6;
      }
      *(FTlsValues **)aVar6 = LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValues;
      *(FTlsValues ***)((longlong)aVar6 + 8) = &LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValues
      ;
      LOCK();
      aVar2 = LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State + -1;
      UNLOCK();
      bVar1 = (byte)LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State & 2;
      LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State = aVar2;
      LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValues = (FTlsValues *)aVar6;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex);
      }
    }
    else {
      aVar6 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
               )AnsiMalloc(0x10,8);
      *(atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
        *)aVar6 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
                   )0x0;
      *(atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
        *)((longlong)aVar6 + 8) = *paVar8;
      TVar7 = LowLevelTasks::FSchedulerTls::FImpl::PendingInsertTlsValues;
      do {
        *(atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
          *)aVar6 = TVar7.Head;
        LOCK();
        bVar4 = TVar7.Head != LowLevelTasks::FSchedulerTls::FImpl::PendingInsertTlsValues.Head;
        TVar3.Head = aVar6;
        if (bVar4) {
          TVar7 = LowLevelTasks::FSchedulerTls::FImpl::PendingInsertTlsValues;
          TVar3 = LowLevelTasks::FSchedulerTls::FImpl::PendingInsertTlsValues;
        }
        LowLevelTasks::FSchedulerTls::FImpl::PendingInsertTlsValues.Head = TVar3.Head;
        UNLOCK();
      } while (bVar4);
    }
  }
  __tlregdtor(`dynamic_atexit_destructor_for_'LowLevelTasks::FSchedulerTls::TlsValuesHolder__);
  return;
}

// `dynamic_initializer_for_'CVarEnableForkedMultithreading'' @ 140ef5cb0

void __cdecl _dynamic_initializer_for__CVarEnableForkedMultithreading__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableForkedMultithreading,L"TaskGraph.EnableForkedMultithreading",
             &GAllowTaskGraphForkMultithreading,
             L"When false will prevent the task graph from running multithreaded on forked processes."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableForkedMultithreading__);
  return;
}

// `dynamic_initializer_for_'CVarForkedProcessMaxWorkerThreads'' @ 140ef5d00

void __cdecl _dynamic_initializer_for__CVarForkedProcessMaxWorkerThreads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForkedProcessMaxWorkerThreads,L"TaskGraph.ForkedProcessMaxWorkerThreads",
             &CVar_ForkedProcess_MaxWorkerThreads,
             L"Configures the number of worker threads a forked process should spawn if it allows multithreading."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForkedProcessMaxWorkerThreads__);
  return;
}

// `dynamic_initializer_for_'CVarIgnoreThreadToDoGatherOn'' @ 140ef5d50

void __cdecl _dynamic_initializer_for__CVarIgnoreThreadToDoGatherOn__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIgnoreThreadToDoGatherOn,L"TaskGraph.IgnoreThreadToDoGatherOn",
             &GIgnoreThreadToDoGatherOn,
             L"DEPRECATED! If 1, then we ignore the hint provided with SetGatherThreadForDontCompleteUntil and just run it on AnyHiPriThreadHiPriTask."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIgnoreThreadToDoGatherOn__);
  return;
}

// `dynamic_initializer_for_'CVarNumForegroundWorkers'' @ 140ef5da0

void __cdecl _dynamic_initializer_for__CVarNumForegroundWorkers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNumForegroundWorkers,L"TaskGraph.NumForegroundWorkers",&GNumForegroundWorkers,
             L"Configures the number of foreground worker threads. Requires the scheduler to be restarted to have an affect"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNumForegroundWorkers__);
  return;
}

// `dynamic_initializer_for_'CVarNumWorkerThreadsToIgnore'' @ 140ef5df0

void __cdecl _dynamic_initializer_for__CVarNumWorkerThreadsToIgnore__(void)

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
    puVar1[3] = HandleNumWorkerThreadsToIgnore;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarNumWorkerThreadsToIgnore,L"TaskGraph.NumWorkerThreadsToIgnore",
             L"Used to tune the number of task threads. Generally once you have found the right value, PlatformMisc::NumberOfWorkerThreadsToSpawn() should be hardcoded."
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
  atexit(_dynamic_atexit_destructor_for__CVarNumWorkerThreadsToIgnore__);
  return;
}

// `dynamic_initializer_for_'CVarParallelForBackgroundYieldingTimeout'' @ 140ef5f30

void __cdecl _dynamic_initializer_for__CVarParallelForBackgroundYieldingTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarParallelForBackgroundYieldingTimeout,L"Async.ParallelFor.YieldingTimeout",
             &GParallelForBackgroundYieldingTimeoutMs,
             L"The timeout (in ms) when background priority parallel for task will yield execution to give higher priority tasks the chance to run."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarParallelForBackgroundYieldingTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarParallelForDisableOversubscription'' @ 140ef5f80

void __cdecl _dynamic_initializer_for__CVarParallelForDisableOversubscription__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarParallelForDisableOversubscription,L"Async.ParallelFor.DisableOversubscription",
             &GParallelForDisableOversubscription,
             L"If true, do not enable new threads to handle tasks while waiting for a ParallelFor to finish, because new threads can decrease overall performance."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarParallelForDisableOversubscription__);
  return;
}

// `dynamic_initializer_for_'CVarPrintBroadcastWarnings'' @ 140ef5fd0

void __cdecl _dynamic_initializer_for__CVarPrintBroadcastWarnings__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrintBroadcastWarnings,L"TaskGraph.PrintBroadcastWarnings",
             &GPrintBroadcastWarnings,
             L"If > 0 taskgraph will emit warnings when waiting on broadcasts",0);
  atexit(_dynamic_atexit_destructor_for__CVarPrintBroadcastWarnings__);
  return;
}

// `dynamic_initializer_for_'CVarTaskDynamicPrioritization'' @ 140ef6020

void __cdecl _dynamic_initializer_for__CVarTaskDynamicPrioritization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTaskDynamicPrioritization,L"TaskGraph.UseDynamicPrioritization",
             &GTaskGraphUseDynamicPrioritization,
             L"Adjust thread priority per-task so that higher priority tasks running on background threads can\'t be preempted as easily. Helps a lot under high load."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarTaskDynamicPrioritization__);
  return;
}

// `dynamic_initializer_for_'CVarTaskDynamicThreadCreation'' @ 140ef6070

void __cdecl _dynamic_initializer_for__CVarTaskDynamicThreadCreation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTaskDynamicThreadCreation,L"TaskGraph.UseDynamicThreadCreation",
             &GTaskGraphUseDynamicThreadCreation,
             L"Allow threads to be created only when needed instead of at engine initialization.",4)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarTaskDynamicThreadCreation__);
  return;
}

// `dynamic_initializer_for_'CVarTaskOversubscriptionRatio'' @ 140ef60c0

void __cdecl _dynamic_initializer_for__CVarTaskOversubscriptionRatio__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTaskOversubscriptionRatio,L"TaskGraph.OversubscriptionRatio",
             &GTaskGraphOversubscriptionRatio,
             L"Ratio used to compute the maximum numbers of workers allowed during oversubscription.\nYou might need to increase that value depending on how many recursive waits the scheduled tasks may contain.\nThe optimal scenario to strive for is using prerequisites to setup dependencies instead of waiting.\nOnce none of the scheduled tasks contains waiting logic anymore, this can be set to 1.0f, which effectively deactivate the feature."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarTaskOversubscriptionRatio__);
  return;
}

// `dynamic_initializer_for_'CVarTestDontCompleteUntilForAlreadyComplete'' @ 140ef6110

void __cdecl _dynamic_initializer_for__CVarTestDontCompleteUntilForAlreadyComplete__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTestDontCompleteUntilForAlreadyComplete,
             L"TaskGraph.TestDontCompleteUntilForAlreadyComplete",
             &GTestDontCompleteUntilForAlreadyComplete,
             L"If 1, then we before spawning a gather task, we just check if all of the subtasks are complete, and in that case we can skip the gather."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTestDontCompleteUntilForAlreadyComplete__);
  return;
}

// `dynamic_initializer_for_'CVarUseBackgroundThreads'' @ 140ef6160

void __cdecl _dynamic_initializer_for__CVarUseBackgroundThreads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseBackgroundThreads,L"TaskGraph.UseBackgroundThreads",
             &ENamedThreads::bHasBackgroundThreads,
             L"If > 0, then use background threads, otherwise run background tasks on normal priority task threads. Used for performance tuning."
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarUseBackgroundThreads__);
  return;
}

// `dynamic_initializer_for_'CVarUseHiPriThreads'' @ 140ef61b0

void __cdecl _dynamic_initializer_for__CVarUseHiPriThreads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseHiPriThreads,L"TaskGraph.UseHiPriThreads",
             &ENamedThreads::bHasHighPriorityThreads,
             L"If > 0, then use hi priority task threads, otherwise run background tasks on normal priority task threads. Used for performance tuning."
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarUseHiPriThreads__);
  return;
}

// `dynamic_initializer_for_'CVar_GIoDispatcherDecompressOnIdle'' @ 140ef6200

void __cdecl _dynamic_initializer_for__CVar_GIoDispatcherDecompressOnIdle__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_GIoDispatcherDecompressOnIdle,L"s.IoDispatcherDecompressOnIdle",
             &GIoDispatcherDecompressOnIdle,
             L"When enabled the I/O dispatcher thread will help out decompress chunk blocks when idle."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_GIoDispatcherDecompressOnIdle__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherBufferAlignment'' @ 140ef6250

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherBufferAlignment__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherBufferAlignment,L"s.IoDispatcherBufferAlignment",
             &GIoDispatcherBufferAlignment,L"IoDispatcher read buffer alignment.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherBufferAlignment__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherBufferMemoryMB'' @ 140ef62a0

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherBufferMemoryMB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherBufferMemoryMB,L"s.IoDispatcherBufferMemoryMB",
             &GIoDispatcherBufferMemoryMB,L"IoDispatcher buffer memory size (in megabytes).",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherBufferMemoryMB__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherBufferSizeKB'' @ 140ef62f0

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherBufferSizeKB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherBufferSizeKB,L"s.IoDispatcherBufferSizeKB",&GIoDispatcherBufferSizeKB
             ,L"IoDispatcher read buffer size (in kilobytes).",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherBufferSizeKB__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherCacheSizeMB'' @ 140ef6340

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherCacheSizeMB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherCacheSizeMB,L"s.IoDispatcherCacheSizeMB",&GIoDispatcherCacheSizeMB,
             L"IoDispatcher cache memory size (in megabytes).",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherCacheSizeMB__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherCanDecompressOnStarvation'' @ 140ef6390

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherCanDecompressOnStarvation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherCanDecompressOnStarvation,L"s.IoDispatcherCanDecompressOnStarvation",
             &GIoDispatcherCanDecompressOnStarvation,
             L"IoDispatcher thread will help with decompression tasks when all worker threads are IO starved to avoid deadlocks on low core count"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherCanDecompressOnStarvation__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherDecompressionWorkerCount'' @ 140ef63e0

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherDecompressionWorkerCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherDecompressionWorkerCount,L"s.IoDispatcherDecompressionWorkerCount",
             &GIoDispatcherDecompressionWorkerCount,L"IoDispatcher decompression worker count.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherDecompressionWorkerCount__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherForceSynchronousScatter'' @ 140ef6430

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherForceSynchronousScatter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherForceSynchronousScatter,L"s.IoDispatcherForceSynchronousScatter",
             &GIoDispatcherForceSynchronousScatter,
             L"Force scatter jobs to be synchronous on the IODispatcher thread.\nThis can avoid deadlocks in cases where background tasks end up waiting on I/O and we don\'t have enough background task threads to fulfill decompression requests."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherForceSynchronousScatter__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherMaintainSortingOnPriorityChange'' @ 140ef6480

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherMaintainSortingOnPriorityChange__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherMaintainSortingOnPriorityChange,
             L"s.IoDispatcherMaintainSortingOnPriorityChange",
             &GIoDispatcherMaintainSortingOnPriorityChange,
             L"If s.IoDispatcherSortRequestsByOffset > 0 and this > 0, io dispatcher remembers the last file handle/offset read from even when switching priority levels."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherMaintainSortingOnPriorityChange__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherMaxConsecutiveDecompressionJobs'' @ 140ef64d0

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherMaxConsecutiveDecompressionJobs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherMaxConsecutiveDecompressionJobs,
             L"s.IoDispatcherMaxConsecutiveDecompressionJobs",
             &GIoDispatcherMaxConsecutiveDecompressionJobs,
             L"Max consecutive decompression jobs before re-launching tasks.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherMaxConsecutiveDecompressionJobs__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherMaxForwardSeekKB'' @ 140ef6520

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherMaxForwardSeekKB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherMaxForwardSeekKB,L"s.IoDispatcherMaxForwardSeekKB",
             &GIoDispatcherMaxForwardSeekKB,
             L"If s.IoDispatcherSortRequestsByOffset is enabled and this is > 0, if the next sequential read is further than this offset from the last one, read the oldest request instead"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherMaxForwardSeekKB__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherMaxResolveBatchSize'' @ 140ef6570

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherMaxResolveBatchSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherMaxResolveBatchSize,L"s.IoDispatcherMaxResolveBatchSize",
             &GIoDispatcherMaxResolveBatchSize,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherMaxResolveBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherRequestLatencyCircuitBreakerMS'' @ 140ef65c0

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherRequestLatencyCircuitBreakerMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherRequestLatencyCircuitBreakerMS,
             L"s.IoDispatcherRequestLatencyCircuitBreakerMS",
             &GIoDispatcherRequestLatencyCircuitBreakerMS,
             L"If s.IoDispatcherSortRequestsByOffset is enabled and this is >0, if the oldest request has been in the queue for this long, read it instead of the most optimal read"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherRequestLatencyCircuitBreakerMS__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherSortRequestsByOffset'' @ 140ef6610

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherSortRequestsByOffset__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherSortRequestsByOffset,L"s.IoDispatcherSortRequestsByOffset",
             &GIoDispatcherSortRequestsByOffset,
             L"If > 0, io dispatcher sorts the outstanding request queue by offset rather than sequence."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherSortRequestsByOffset__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherTocsEnablePerfectHashing'' @ 140ef6660

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherTocsEnablePerfectHashing__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherTocsEnablePerfectHashing,L"s.IoDispatcherTocsEnablePerfectHashing",
             &GIoDispatcherTocsEnablePerfectHashing,
             L"Enable perfect hashmap lookups for iostore tocs",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherTocsEnablePerfectHashing__);
  return;
}

// `dynamic_initializer_for_'FColorSpaceTestInstance'' @ 140ef66b0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FColorSpaceTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FColorSpaceTest");
  FColorSpaceTest::FColorSpaceTest(&FColorSpaceTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FColorSpaceTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksLocalGlobalPrioritiesAutomationTestInstance'' @ 140ef6700

void __cdecl
Tasks2Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTasksLocalGlobalPrioritiesAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksLocalGlobalPriorities");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTasksLocalGlobalPrioritiesAutomationTestInstance,&local_18,
             false);
  FTasksLocalGlobalPrioritiesAutomationTestInstance._0_8_ =
       &___7FTasksLocalGlobalPriorities_Tasks2Tests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksLocalGlobalPrioritiesAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksPerfTests2AutomationTestInstance'' @ 140ef6760

void __cdecl
Tasks2Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTasksPerfTests2AutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksPerfTests2");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTasksPerfTests2AutomationTestInstance,&local_18,false);
  FTasksPerfTests2AutomationTestInstance._0_8_ = &___7FTasksPerfTests2_Tasks2Tests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksPerfTests2AutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTasksUnitTests2AutomationTestInstance'' @ 140ef67c0

void __cdecl
Tasks2Tests::`anonymous_namespace'::
_dynamic_initializer_for__FTasksUnitTests2AutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTasksUnitTests2");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTasksUnitTests2AutomationTestInstance,&local_18,false);
  FTasksUnitTests2AutomationTestInstance._0_8_ = &___7FTasksUnitTests2_Tasks2Tests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTasksUnitTests2AutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTransferFunctionsTestInstance'' @ 140ef6820

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FTransferFunctionsTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTransferFunctionsTest");
  FTransferFunctionsTest::FTransferFunctionsTest(&FTransferFunctionsTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTransferFunctionsTestInstance__);
  return;
}

// `dynamic_initializer_for_'GChaosMode'' @ 140ef6870

void __cdecl _dynamic_initializer_for__GChaosMode__(void)

{
  atexit(_dynamic_atexit_destructor_for__GChaosMode__);
  return;
}

// `dynamic_initializer_for_'GPlatformIoDispatcher'' @ 140ef6890

void __cdecl UE::_dynamic_initializer_for__GPlatformIoDispatcher__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPlatformIoDispatcher__);
  return;
}

// `dynamic_initializer_for_'LogAudioCore'' @ 140ef68b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioCore__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAudioCore,L"LogAudioCore",Log,Log);
  atexit(_dynamic_atexit_destructor_for__LogAudioCore__);
  return;
}

// `dynamic_initializer_for_'LogPlatformIoDispatcher'' @ 140ef68f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPlatformIoDispatcher__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPlatformIoDispatcher,L"LogPlatformIoDispatcher",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPlatformIoDispatcher__);
  return;
}

// `dynamic_initializer_for_'LogTaskGraph'' @ 140ef6930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTaskGraph__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTaskGraph,L"LogTaskGraph",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTaskGraph__);
  return;
}

// `dynamic_initializer_for_'LogTransferFunctions'' @ 140ef6970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTransferFunctions__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTransferFunctions,L"LogTransferFunctions",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTransferFunctions__);
  return;
}

// `dynamic_initializer_for_'LogUnrealColorManagementTest'' @ 140ef69b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUnrealColorManagementTest__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogUnrealColorManagementTest,L"LogUnrealColorManagementTest",Log,
             All);
  atexit(_dynamic_atexit_destructor_for__LogUnrealColorManagementTest__);
  return;
}

// `dynamic_initializer_for_'LowLevelTasks'' @ 140ef69f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LowLevelTasks::_dynamic_initializer_for__LowLevelTasks__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LowLevelTasks,L"LowLevelTasks",Log,All);
  atexit(_dynamic_atexit_destructor_for__LowLevelTasks__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FBroadcastTask'' @ 140ef6a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FBroadcastTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FBroadcastTask == (FThreadSafeStaticStat<FStat_STAT_FBroadcastTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FBroadcastTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FBroadcastTask,*pFVar1,L"FBroadcastTask",
               "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FReturnGraphTask'' @ 140ef6ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FReturnGraphTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FReturnGraphTask == (FThreadSafeStaticStat<FStat_STAT_FReturnGraphTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FReturnGraphTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FReturnGraphTask,*pFVar1,
               L"FReturnGraphTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FTriggerEventGraphTask'' @ 140ef6b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FTriggerEventGraphTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FTriggerEventGraphTask ==
      (FThreadSafeStaticStat<FStat_STAT_FTriggerEventGraphTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FTriggerEventGraphTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTriggerEventGraphTask,*pFVar1,
               L"FTriggerEventGraphTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParallelFor'' @ 140ef6be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParallelFor__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParallelFor");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar1,L"ParallelFor",
               "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ParallelForTask'' @ 140ef6c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ParallelForTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ParallelForTask == (FThreadSafeStaticStat<FStat_STAT_ParallelForTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ParallelForTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelForTask,*pFVar1,L"ParallelForTask"
               ,"STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TaskChannelReg'' @ 140ef6d00

void __cdecl TaskTrace::_dynamic_initializer_for__TaskChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&TaskChannelObject,"TaskChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'TaskThreadPriorityCmd'' @ 140ef6d30

void __cdecl _dynamic_initializer_for__TaskThreadPriorityCmd__(void)

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
    puVar1[3] = SetTaskThreadPriority;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TaskThreadPriorityCmd,L"TaskGraph.TaskThreadPriority",
             L"Sets the priority of the task threads. Argument is one of belownormal, normal or abovenormal."
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
  atexit(_dynamic_atexit_destructor_for__TaskThreadPriorityCmd__);
  return;
}

// `dynamic_initializer_for_'TestRandomizedThreadsCommand'' @ 140ef6e70

void __cdecl _dynamic_initializer_for__TestRandomizedThreadsCommand__(void)

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
    puVar1[3] = EnableRandomizedThreads;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TestRandomizedThreadsCommand,L"TaskGraph.Randomize",
             L"Useful for debugging, adds random sleeps throughout the task graph.",
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
  atexit(_dynamic_atexit_destructor_for__TestRandomizedThreadsCommand__);
  return;
}

// `dynamic_initializer_for_'ThreadLocalSharedLocks'' @ 140ef6fb0

void __cdecl UE::Core::Private::_dynamic_initializer_for__ThreadLocalSharedLocks__(void)

{
  __tlregdtor(_dynamic_atexit_destructor_for__ThreadLocalSharedLocks__);
  return;
}

// `dynamic_initializer_for_'ThreadSwitchForABTestCommand'' @ 140ef6fd0

void __cdecl _dynamic_initializer_for__ThreadSwitchForABTestCommand__(void)

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
    puVar1[3] = ThreadSwitchForABTest;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ThreadSwitchForABTestCommand,L"TaskGraph.ABTestThreads",
             L"Takes two 0/1 arguments. Equivalent to setting TaskGraph.UseHiPriThreads and TaskGraph.UseBackgroundThreads, respectively. Packages as one command for use with the abtest command."
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
  atexit(_dynamic_atexit_destructor_for__ThreadSwitchForABTestCommand__);
  return;
}

// `dynamic_initializer_for_'WorkingColorSpace'' @ 140ef7110

void __cdecl UE::Color::_dynamic_initializer_for__WorkingColorSpace__(void)

{
  FColorSpace::FColorSpace(&WorkingColorSpace,sRGB);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_IoDispatcherFileBackend'' @ 140ef7130

void __cdecl UE::_dynamic_initializer_for___GCsvCategory_IoDispatcherFileBackend__(void)

{
  ::FString::operator=(&_GCsvCategory_IoDispatcherFileBackend.Name,L"IoDispatcherFileBackend");
  _GCsvCategory_IoDispatcherFileBackend.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_IoDispatcherFileBackend.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_IoDispatcherFileBackend__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_IoDispatcherFileBackendVerbose'' @ 140ef7180

void __cdecl UE::_dynamic_initializer_for___GCsvCategory_IoDispatcherFileBackendVerbose__(void)

{
  ::FString::operator=
            (&_GCsvCategory_IoDispatcherFileBackendVerbose.Name,L"IoDispatcherFileBackendVerbose");
  _GCsvCategory_IoDispatcherFileBackendVerbose.Index =
       FCsvProfiler::RegisterCategory
                 (&_GCsvCategory_IoDispatcherFileBackendVerbose.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_IoDispatcherFileBackendVerbose__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Scheduler'' @ 140ef71d0

void __cdecl _dynamic_initializer_for___GCsvCategory_Scheduler__(void)

{
  FString::operator=(&_GCsvCategory_Scheduler.Name,L"Scheduler");
  _GCsvCategory_Scheduler.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_Scheduler.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Scheduler__);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBackwardSeeks'' @ 140ef7220

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBackwardSeeks__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameBackwardSeeks.Name,L"FrameBackwardSeeks");
  _GCsvStat_FrameBackwardSeeks.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBackwardSeeks.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBlockCacheHitKB'' @ 140ef7260

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBlockCacheHitKB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameBlockCacheHitKB.Name,L"FrameBlockCacheHitKB");
  _GCsvStat_FrameBlockCacheHitKB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBlockCacheHitKB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBlockCacheHits'' @ 140ef72a0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBlockCacheHits__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameBlockCacheHits.Name,L"FrameBlockCacheHits");
  _GCsvStat_FrameBlockCacheHits.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBlockCacheHits.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBlockCacheMissKB'' @ 140ef72e0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBlockCacheMissKB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameBlockCacheMissKB.Name,L"FrameBlockCacheMissKB");
  _GCsvStat_FrameBlockCacheMissKB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBlockCacheMissKB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBlockCacheMisses'' @ 140ef7320

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBlockCacheMisses__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameBlockCacheMisses.Name,L"FrameBlockCacheMisses");
  _GCsvStat_FrameBlockCacheMisses.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBlockCacheMisses.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBlockCacheStores'' @ 140ef7360

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBlockCacheStores__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameBlockCacheStores.Name,L"FrameBlockCacheStores");
  _GCsvStat_FrameBlockCacheStores.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBlockCacheStores.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBlockCacheStoresKB'' @ 140ef73a0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBlockCacheStoresKB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameBlockCacheStoresKB.Name,L"FrameBlockCacheStoresKB");
  _GCsvStat_FrameBlockCacheStoresKB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBlockCacheStoresKB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBytesReadKB'' @ 140ef73e0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBytesReadKB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameBytesReadKB.Name,L"FrameBytesReadKB");
  _GCsvStat_FrameBytesReadKB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBytesReadKB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBytesScatteredKB'' @ 140ef7420

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBytesScatteredKB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackend.Index;
  ::FName::FName(&_GCsvStat_FrameBytesScatteredKB.Name,L"FrameBytesScatteredKB");
  _GCsvStat_FrameBytesScatteredKB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBytesScatteredKB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBytesUncompressedInKB'' @ 140ef7460

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBytesUncompressedInKB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameBytesUncompressedInKB.Name,L"FrameBytesUncompressedInKB");
  _GCsvStat_FrameBytesUncompressedInKB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBytesUncompressedInKB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameBytesUncompressedOutKB'' @ 140ef74a0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameBytesUncompressedOutKB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameBytesUncompressedOutKB.Name,L"FrameBytesUncompressedOutKB");
  _GCsvStat_FrameBytesUncompressedOutKB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameBytesUncompressedOutKB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameFilesystemBytesReadKB'' @ 140ef74e0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameFilesystemBytesReadKB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackend.Index;
  ::FName::FName(&_GCsvStat_FrameFilesystemBytesReadKB.Name,L"FrameFilesystemBytesReadKB");
  _GCsvStat_FrameFilesystemBytesReadKB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameFilesystemBytesReadKB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameFilesystemReads'' @ 140ef7520

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameFilesystemReads__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameFilesystemReads.Name,L"FrameFilesystemReads");
  _GCsvStat_FrameFilesystemReads.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameFilesystemReads.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameForwardSeeks'' @ 140ef7560

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameForwardSeeks__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameForwardSeeks.Name,L"FrameForwardSeeks");
  _GCsvStat_FrameForwardSeeks.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameForwardSeeks.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameHandleChangeSeeks'' @ 140ef75a0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameHandleChangeSeeks__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameHandleChangeSeeks.Name,L"FrameHandleChangeSeeks");
  _GCsvStat_FrameHandleChangeSeeks.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameHandleChangeSeeks.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameSeekDistanceMB'' @ 140ef75e0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameSeekDistanceMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_FrameSeekDistanceMB.Name,L"FrameSeekDistanceMB");
  _GCsvStat_FrameSeekDistanceMB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameSeekDistanceMB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameSeeks'' @ 140ef7620

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameSeeks__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackend.Index;
  ::FName::FName(&_GCsvStat_FrameSeeks.Name,L"FrameSeeks");
  _GCsvStat_FrameSeeks.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameSeeks.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameSequentialReads'' @ 140ef7660

void __cdecl UE::_dynamic_initializer_for___GCsvStat_FrameSequentialReads__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackend.Index;
  ::FName::FName(&_GCsvStat_FrameSequentialReads.Name,L"FrameSequentialReads");
  _GCsvStat_FrameSequentialReads.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameSequentialReads.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_QueuedFilesystemReadMB'' @ 140ef76a0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_QueuedFilesystemReadMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackend.Index;
  ::FName::FName(&_GCsvStat_QueuedFilesystemReadMB.Name,L"QueuedFilesystemReadMB");
  _GCsvStat_QueuedFilesystemReadMB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_QueuedFilesystemReadMB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_QueuedFilesystemReads'' @ 140ef76e0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_QueuedFilesystemReads__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_QueuedFilesystemReads.Name,L"QueuedFilesystemReads");
  _GCsvStat_QueuedFilesystemReads.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_QueuedFilesystemReads.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_QueuedUncompressBlocks'' @ 140ef7720

void __cdecl UE::_dynamic_initializer_for___GCsvStat_QueuedUncompressBlocks__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_QueuedUncompressBlocks.Name,L"QueuedUncompressBlocks");
  _GCsvStat_QueuedUncompressBlocks.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_QueuedUncompressBlocks.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_QueuedUncompressInMB'' @ 140ef7760

void __cdecl UE::_dynamic_initializer_for___GCsvStat_QueuedUncompressInMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_QueuedUncompressInMB.Name,L"QueuedUncompressInMB");
  _GCsvStat_QueuedUncompressInMB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_QueuedUncompressInMB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_QueuedUncompressOutMB'' @ 140ef77a0

void __cdecl UE::_dynamic_initializer_for___GCsvStat_QueuedUncompressOutMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_IoDispatcherFileBackendVerbose.Index;
  ::FName::FName(&_GCsvStat_QueuedUncompressOutMB.Name,L"QueuedUncompressOutMB");
  _GCsvStat_QueuedUncompressOutMB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_QueuedUncompressOutMB.Name,uVar1);
  return;
}

// `scalar_deleting_destructor' @ 14146fe80

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14146fed0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141470100

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141470400

void * __thiscall
Tasks2Tests::FTasksPerfTests2::_scalar_deleting_destructor_(FTasksPerfTests2 *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141470b70

void * __thiscall
Tasks2Tests::FTasksLocalGlobalPriorities::_scalar_deleting_destructor_
          (FTasksLocalGlobalPriorities *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141471ce0

void * __thiscall
Tasks2Tests::FTasksUnitTests2::_scalar_deleting_destructor_(FTasksUnitTests2 *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141472530

void * __thiscall
FTransferFunctionsTest::_scalar_deleting_destructor_(FTransferFunctionsTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1414727f0

void * __thiscall FColorSpaceTest::_scalar_deleting_destructor_(FColorSpaceTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141472860

void * __thiscall
IDelegateInstance::_scalar_deleting_destructor_(IDelegateInstance *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// atomic<LowLevelTasks::FTask_*><LowLevelTasks::FTask_*,0> @ 141472a50

atomic<LowLevelTasks::FTask_*> * __thiscall
std::atomic<LowLevelTasks::FTask_*>::atomic<LowLevelTasks::FTask_*><LowLevelTasks::FTask_*,0>
          (atomic<LowLevelTasks::FTask_*> *this)

{
  *this = (atomic<LowLevelTasks::FTask_*>)0x0;
  return this;
}

// atomic<FThread_*><FThread_*,0> @ 141472a60

atomic<FThread_*> * __thiscall
std::atomic<FThread_*>::atomic<FThread_*><FThread_*,0>(atomic<FThread_*> *this)

{
  *this = (atomic<FThread_*>)0x0;
  return this;
}

// operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_> @ 141473210

void * __cdecl
operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  void *local_18 [2];
  
  if ((param_1 != 0x10) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Size == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0x176,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar3)();
    return pvVar8;
  }
  iVar1 = param_2->NumElements;
  param_2->NumElements = iVar1 + 1;
  iVar6 = (param_2->Chunks).Array.ArrayNum;
  iVar5 = (int)(iVar1 + 0x1000 + (iVar1 + 0x1000 >> 0x1f & 0xfffU)) >> 0xc;
  if (iVar6 < iVar5) {
    uVar12 = (ulonglong)(uint)(iVar5 - iVar6);
    do {
      pvVar8 = operator_new(0x10000);
      local_18[0] = (void *)0x0;
      if (pvVar8 != (void *)0x0) {
        lVar11 = 0x1000;
        puVar9 = (undefined4 *)((longlong)pvVar8 + 8);
        do {
          *puVar9 = 0;
          puVar9 = puVar9 + 4;
          lVar11 = lVar11 + -1;
          local_18[0] = pvVar8;
        } while (lVar11 != 0);
      }
      pFVar2 = (param_2->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(param_2->Chunks).Array.ArrayMax * 8)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar3)();
        return pvVar8;
      }
      iVar6 = (param_2->Chunks).Array.ArrayNum;
      if (iVar6 == (param_2->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_2,&(param_2->Chunks).Array.ArrayMax);
      }
      pFVar2 = (param_2->Chunks).Array.AllocatorInstance.Data;
      (param_2->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar10 = iVar1 >> 0x1f & 0xfff;
  uVar7 = iVar1 + uVar10;
  uVar13 = (int)uVar7 >> 0xc;
  uVar14 = 0;
  if ((int)uVar13 < (param_2->Chunks).Array.ArrayNum) {
    uVar14 = ~uVar13 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar3)();
    return pvVar8;
  }
  return (void *)((ulonglong)((uVar7 & 0xfff) - uVar10) * 0x10 +
                 *(longlong *)
                  ((param_2->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar13 * 8));
}

// BasicPerfTest<10000> @ 141473750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl Tasks2Tests::BasicPerfTest<10000>(bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  TReferenceControllerBase<1> *pTVar16;
  TSharedRef<LowLevelTasks::FTask,1> *pTVar17;
  ulonglong uVar18;
  uint uVar19;
  TReferenceControllerBase<1> *pTVar20;
  FTask *pFVar21;
  TSharedPtr<LowLevelTasks::FTask,1> *pTVar22;
  ForAnyElementType FVar23;
  TReferenceControllerBase<1> *pTVar24;
  undefined1 local_res10 [8];
  uint local_res18;
  LARGE_INTEGER local_res20;
  ForAnyElementType local_178;
  undefined8 local_170;
  TArray<TAwaitableTask<__int64>,TSizedDefaultAllocator<32>_> local_168;
  TAwaitableTask<void> local_158;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128 [2];
  TSharedPtr<LowLevelTasks::FTask,1> *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  <lambda_3> local_108;
  TSharedRef<LowLevelTasks::FTask,1> local_f8;
  TArrayView<TSharedPtr<LowLevelTasks::FTask,1>,int> local_e8;
  TSharedPtr<LowLevelTasks::FTask,1> local_d8 [9];
  
  if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l6::LOG_Static,
               (FLogCategoryBase *)&LogTemp);
  }
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,10000,&local_178,(int *)&local_170,(int *)((longlong)&local_170 + 4));
  memset(local_178.Data + (longlong)iVar14 * 0x10,0,160000);
  QueryPerformanceCounter(&local_res20);
  dVar7 = __real_4170000000000000;
  uVar15 = (ulonglong)(int)(uint)local_170;
  pTVar22 = (TSharedPtr<LowLevelTasks::FTask,1> *)(local_178.Data + uVar15 * 0x10);
  local_res18 = (uint)local_170;
  dVar10 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  uVar18 = uVar15;
  FVar23.Data = local_178.Data;
  while( true ) {
    if ((int)uVar15 != (int)uVar18) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<LowLevelTasks::FTask,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if ((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data == pTVar22) break;
    pTVar16 = ::operator_new(0x50);
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      pFVar21 = (FTask *)&DAT_00000010;
      pTVar16 = pTVar20;
    }
    else {
      pTVar16->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFTask_LowLevelTasks___00_SharedPointerInternals__6B_
      ;
      pTVar16->SharedReferenceCount = (atomic<int>)0x1;
      pTVar16->WeakReferenceCount = (atomic<int>)0x1;
      pTVar16[1]._padding_ = 0;
      pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[2]._padding_ = 0;
      pTVar16[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[3]._padding_ = 0;
      *(undefined ***)&pTVar16[3].SharedReferenceCount =
           &
           ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      pTVar16[4].SharedReferenceCount = (atomic<int>)0x20;
      pTVar16[4].WeakReferenceCount = (atomic<int>)0xe8000000;
      pFVar21 = (FTask *)(pTVar16 + 1);
      pTVar16[4]._padding_ = 0;
      if ((pFVar21 == (FTask *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar24 = pTVar16;
    if ((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data != local_d8) {
      ((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->Object = pFVar21;
      pTVar3 = (((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->SharedReferenceCount).
               ReferenceController;
      if (pTVar16 != pTVar3) {
        (((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->SharedReferenceCount).
        ReferenceController = pTVar16;
        pTVar24 = (TReferenceControllerBase<1> *)0x0;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar3->SharedReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)pTVar3->_padding_)(pTVar3);
            LOCK();
            paVar1 = &pTVar3->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    if ((((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->Object == (FTask *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar16 = (((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->SharedReferenceCount).
              ReferenceController;
    pFVar21 = ((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->Object;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((*(ulonglong *)&pFVar21->field_0x38 & 0x20) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                            ,0x1dd,L"State: %d"), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(*(longlong *)&pFVar21->field_0x28 + 0x18))(&pFVar21->field_0x28,pFVar21);
    *(FTask **)&pFVar21->field_0x10 = pFVar21;
    *(undefined ***)&pFVar21->field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(TReferenceControllerBase<1> **)&pFVar21->field_0x18 = pTVar16;
    *(__int64 **)pFVar21 = &`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l2::SGarbage;
    *(__int64 **)&pFVar21->field_0x8 =
         &`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l2::STestVal;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40)
    ;
    pTVar16 = pTVar20;
    if (lVar4 != 0) {
      pTVar16 = *(TReferenceControllerBase<1> **)(lVar4 + 0x30);
    }
    *(TReferenceControllerBase<1> **)&pFVar21->field_0x30 = pTVar16;
    *(undefined8 *)&pFVar21->field_0x38 = 0xc800005418680400;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar15 = local_170 & 0xffffffff;
    FVar23.Data = FVar23.Data + 0x10;
    uVar18 = (ulonglong)local_res18;
  }
  pTVar17 = MakeShared<LowLevelTasks::FTask,1>(&local_f8);
  pTVar16 = (pTVar17->SharedReferenceCount).ReferenceController;
  pFVar21 = pTVar17->Object;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if ((pFVar21 == (FTask *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((*(ulonglong *)&pFVar21->field_0x38 & 0x20) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsCompleted()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                          ,0x1dd,L"State: %d"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)(*(longlong *)&pFVar21->field_0x28 + 0x18))(&pFVar21->field_0x28,pFVar21);
  uVar18 = (ulonglong)_tls_index;
  *(undefined ***)&pFVar21->field_0x28 =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(ForAnyElementType **)pFVar21 = &local_178;
  lVar4 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x40);
  pTVar24 = pTVar20;
  if (lVar4 != 0) {
    pTVar24 = *(TReferenceControllerBase<1> **)(lVar4 + 0x30);
  }
  *(TReferenceControllerBase<1> **)&pFVar21->field_0x30 = pTVar24;
  *(undefined8 *)&pFVar21->field_0x38 = 0xc800005418680a00;
  QueryPerformanceCounter(&local_148);
  dVar9 = (double)local_148.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  if ((pFVar21 == (FTask *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar18 = *(ulonglong *)&pFVar21->field_0x38;
  do {
    LOCK();
    uVar15 = *(ulonglong *)&pFVar21->field_0x38;
    bVar13 = uVar18 == uVar15;
    if (bVar13) {
      *(ulonglong *)&pFVar21->field_0x38 = uVar18 | 2;
      uVar15 = uVar18;
    }
    UNLOCK();
    uVar18 = uVar15;
  } while (!bVar13);
  if ((uVar15 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,pFVar21,DefaultPreference,true);
  }
  iVar14 = (uint)local_170;
  local_118 = (TSharedPtr<LowLevelTasks::FTask,1> *)local_178.Data;
  if (((int)(uint)local_170 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_110 = iVar14;
  local_e8._12_4_ = uStack_10c;
  local_e8.ArrayNum = iVar14;
  local_e8.DataPtr = local_118;
  ExpediteOrWaitForTasks(&local_e8);
  if ((pFVar21 == (FTask *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar13 = LowLevelTasks::FTask::TryExpedite(pFVar21);
  if (!bVar13) {
    if ((pFVar21 == (FTask *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar18 = *(ulonglong *)&pFVar21->field_0x38;
    while ((uVar18 & 0x20) == 0) {
      FWindowsPlatformProcess::YieldThread();
      uVar18 = *(ulonglong *)&pFVar21->field_0x38;
    }
  }
  QueryPerformanceCounter(&local_140);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  dVar6 = (double)local_140.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  dVar8 = dVar6 - dVar10;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_1__)
     && (_Init_thread_header(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::
                              _thread_safe_static_guard_1__),
        `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_1__
        == -1)) {
    `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::TotalAvg = dVar8;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::
                         _thread_safe_static_guard_1__);
  }
  dVar12 = __real_3fefae147ae147ae;
  dVar11 = __real_3f847ae147ae147b;
  dVar10 = dVar9 - dVar10;
  `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::TotalAvg =
       dVar8 * __real_3f847ae147ae147b +
       `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::TotalAvg *
       __real_3fefae147ae147ae;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_2__)
     && (_Init_thread_header(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::
                              _thread_safe_static_guard_2__),
        `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_2__
        == -1)) {
    `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::SpawnedAvg = dVar10;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::
                         _thread_safe_static_guard_2__);
  }
  dVar6 = dVar6 - dVar9;
  `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::SpawnedAvg =
       dVar10 * dVar11 +
       `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::SpawnedAvg * dVar12;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_3__)
     && (_Init_thread_header(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::
                              _thread_safe_static_guard_3__),
        `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_3__
        == -1)) {
    `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::EndAvg = dVar6;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::
                         _thread_safe_static_guard_3__);
  }
  `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::EndAvg =
       dVar6 * dVar11 +
       `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l15::EndAvg * dVar12;
  if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l23::LOG_Static,
               (FLogCategoryBase *)&LogTemp);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  DestructItems<TSharedPtr<LowLevelTasks::FTask,1>,int>
            ((TSharedPtr<LowLevelTasks::FTask,1> *)local_178.Data,(uint)local_170);
  if ((TSharedPtr<LowLevelTasks::FTask,1> *)local_178.Data !=
      (TSharedPtr<LowLevelTasks::FTask,1> *)0x0) {
    FMemory::Free(local_178.Data);
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,10000,&local_168.AllocatorInstance,&local_168.ArrayNum,
                      &local_168.ArrayMax);
  DefaultConstructItems<TAwaitableTask<__int64>,int>
            (local_168.AllocatorInstance.Data + (longlong)iVar14 * 0x10,10000);
  QueryPerformanceCounter(&local_138);
  local_158.PromiseVTable.Promise = (FPromiseBase *)0x0;
  local_158.PromiseVTable._padding_ =
       (longlong)&___7__TPromiseVTableDummy_X_AwaitableTask_Detail__6B_;
  local_108.Tasks = &local_168;
  local_108.TestVal = &`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l2::STestVal;
  dVar10 = (double)local_138.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  TAwaitableTask<void>::InitAndLaunch<_Tasks2Tests::BasicPerfTest<10000>_::__l32::<lambda_3>_>
            (&local_158,L"Simple Awaitable Signal Task",Default,&local_108);
  QueryPerformanceCounter(&local_130);
  dVar9 = (double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  (**(code **)(local_158.PromiseVTable._padding_ + 0x10))();
  pTVar16 = pTVar20;
  while( true ) {
    if ((local_168.ArrayNum <= (int)pTVar20) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) break;
    `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l2::SGarbage =
         (**(code **)(*(longlong *)(local_168.AllocatorInstance.Data + (longlong)pTVar16) + 0x10))()
    ;
    uVar19 = (int)pTVar20 + 1;
    pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)uVar19;
    pTVar16 = pTVar16 + 1;
    if (9999 < (int)uVar19) {
      QueryPerformanceCounter(local_128);
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      dVar7 = (double)local_128[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
      dVar6 = dVar7 - dVar10;
      if ((*(int *)(lVar4 + 0x9d4c) <
           `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
           _thread_safe_static_guard_4__) &&
         (_Init_thread_header(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
                               _thread_safe_static_guard_4__),
         `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
         _thread_safe_static_guard_4__ == -1)) {
        `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::TotalAvg = dVar6;
        _Init_thread_footer(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
                             _thread_safe_static_guard_4__);
      }
      dVar10 = dVar9 - dVar10;
      `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::TotalAvg =
           dVar6 * dVar11 +
           `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::TotalAvg * dVar12;
      if ((*(int *)(lVar4 + 0x9d4c) <
           `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
           _thread_safe_static_guard_5__) &&
         (_Init_thread_header(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
                               _thread_safe_static_guard_5__),
         `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
         _thread_safe_static_guard_5__ == -1)) {
        `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::SpawnedAvg = dVar10;
        _Init_thread_footer(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
                             _thread_safe_static_guard_5__);
      }
      dVar7 = dVar7 - dVar9;
      `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::SpawnedAvg =
           dVar10 * dVar11 +
           `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::SpawnedAvg * dVar12;
      if ((*(int *)(lVar4 + 0x9d4c) <
           `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
           _thread_safe_static_guard_6__) &&
         (_Init_thread_header(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
                               _thread_safe_static_guard_6__),
         `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
         _thread_safe_static_guard_6__ == -1)) {
        `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::EndAvg = dVar7;
        _Init_thread_footer(&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::
                             _thread_safe_static_guard_6__);
      }
      `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::EndAvg =
           dVar7 * dVar11 +
           `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l32::EndAvg * dVar12;
      if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  (&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l38::LOG_Static,
                   (FLogCategoryBase *)&LogTemp);
      }
      (**(code **)(local_158.PromiseVTable._padding_ + 0x30))();
      DestructItems<TAwaitableTask<__int64>,int>
                ((TAwaitableTask<__int64> *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  (&`void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l50::LOG_Static,
                   (FLogCategoryBase *)&LogTemp);
      }
      `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l2::SGarbage =
           `void___cdecl_Tasks2Tests::BasicPerfTest<10000>(bool)'::__l2::SGarbage + 1;
      return;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Call<`UE::TIntrusiveMutex<UE::FSharedMutex::FParams>::TryWakeWaitingThread'::__l2::<lambda_1>_> @ 141474280

ulong64 __cdecl
UE::TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
Call<_UE::TIntrusiveMutex<UE::FSharedMutex::FParams>::TryWakeWaitingThread_::__l2::<lambda_1>_>
          (void *param_1,FWakeState param_2)

{
  if (param_2.bDidWake == false) {
    LOCK();
    **(uint **)param_1 = **(uint **)param_1 & 0xfffffffd;
    UNLOCK();
  }
  **(char **)((longlong)param_1 + 8) = param_2.bDidWake;
  return 0;
}

// Call<`UE::TIntrusiveMutex<UE::FMutex::FParams>::WakeWaitingThread'::__l2::<lambda_1>_> @ 1414742a0

ulong64 __cdecl
UE::TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
Call<_UE::TIntrusiveMutex<UE::FMutex::FParams>::WakeWaitingThread_::__l2::<lambda_1>_>
          (void *param_1,FWakeState param_2)

{
  if (param_2.bDidWake == false) {
    LOCK();
    **(byte **)param_1 = **(byte **)param_1 & 0xfd;
    UNLOCK();
  }
  return 0;
}

// Call<`UE::TIntrusiveMutex<UE::FSharedMutex::FParams>::WakeWaitingThread'::__l2::<lambda_1>_> @ 1414742c0

ulong64 __cdecl
UE::TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
Call<_UE::TIntrusiveMutex<UE::FSharedMutex::FParams>::WakeWaitingThread_::__l2::<lambda_1>_>
          (void *param_1,FWakeState param_2)

{
  if (param_2.bDidWake == false) {
    LOCK();
    **(uint **)param_1 = **(uint **)param_1 & 0xfffffffd;
    UNLOCK();
  }
  return 0;
}

// Call<`UE::FRecursiveMutex::WakeWaitingThread'::__l2::<lambda_1>_> @ 1414742e0

ulong64 __cdecl
UE::TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
Call<_UE::FRecursiveMutex::WakeWaitingThread_::__l2::<lambda_1>_>(void *param_1,FWakeState param_2)

{
  if (param_2.bHasWaitingThreads == false) {
    LOCK();
    **(uint **)param_1 = **(uint **)param_1 & 0xfffffffe;
    UNLOCK();
  }
  return 0;
}

// Call<`UE::TIntrusiveMutex<UE::FMutex::FParams>::LockLoop'::__l4::<lambda_1>_> @ 141474300

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::TIntrusiveMutex<UE::FMutex::FParams>::LockLoop_::__l4::<lambda_1>_>(void *param_1)

{
  return (**(byte **)param_1 & 3) == 3;
}

// Call<`UE::TIntrusiveMutex<UE::FSharedMutex::FParams>::LockLoop'::__l4::<lambda_1>_> @ 141474320

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::TIntrusiveMutex<UE::FSharedMutex::FParams>::LockLoop_::__l4::<lambda_1>_>(void *param_1)

{
  return (**(uint **)param_1 & 0xfffffff9) != 0 && (**(uint **)param_1 & 2) != 0;
}

// Call<`UE::FSharedMutex::LockSharedSlow'::__l4::<lambda_1>_> @ 141474340

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::FSharedMutex::LockSharedSlow_::__l4::<lambda_1>_>(void *param_1)

{
  return **(int **)param_1 == *(int *)((longlong)param_1 + 8);
}

// Call<`UE::FSharedRecursiveMutex::LockSharedSlow'::__l4::<lambda_1>_> @ 141474360

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::FSharedRecursiveMutex::LockSharedSlow_::__l4::<lambda_1>_>(void *param_1)

{
  return **(int **)param_1 == *(int *)((longlong)param_1 + 8);
}

// Call<`UE::FRecursiveMutex::LockSlow'::__l4::<lambda_1>_> @ 141474380

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::FRecursiveMutex::LockSlow_::__l4::<lambda_1>_>(void *param_1)

{
  return **(int **)param_1 == *(int *)((longlong)param_1 + 8);
}

// Call<`UE::FSharedRecursiveMutex::LockSlow'::__l4::<lambda_1>_> @ 1414743a0

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::FSharedRecursiveMutex::LockSlow_::__l4::<lambda_1>_>(void *param_1)

{
  return **(int **)param_1 == *(int *)((longlong)param_1 + 8);
}

// Call<`UE::FSharedRecursiveMutex::WakeWaitingThreads'::__l5::<lambda_1>_> @ 1414743c0

ulong64 __cdecl
UE::TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
Call<_UE::FSharedRecursiveMutex::WakeWaitingThreads_::__l5::<lambda_1>_>
          (void *param_1,FWakeState param_2)

{
  if (param_2.bDidWake == false) {
    LOCK();
    **(uint **)param_1 = **(uint **)param_1 & 0xfffffffe;
    UNLOCK();
  }
  **(char **)((longlong)param_1 + 8) = param_2.bDidWake;
  return 0;
}

// Call<`UE::FSharedRecursiveMutex::UnlockShared'::__l6::<lambda_1>_> @ 1414743e0

ulong64 __cdecl
UE::TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
Call<_UE::FSharedRecursiveMutex::UnlockShared_::__l6::<lambda_1>_>(void *param_1,FWakeState param_2)

{
  if (param_2.bDidWake == false) {
    LOCK();
    **(uint **)param_1 = **(uint **)param_1 & 0xfffffffe;
    UNLOCK();
  }
  return 0;
}

// Call<`UE::FManualResetEvent::WaitUntil'::__l13::<lambda_1>_> @ 141474400

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>(void *param_1)

{
  return (**(byte **)param_1 & 3) == 2;
}

// ConstructItems<FSharedBuffer,FSharedBuffer,int> @ 141474560

void __cdecl
ConstructItems<FSharedBuffer,FSharedBuffer,int>(void *param_1,FSharedBuffer *param_2,int param_3)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_1 - (longlong)param_2;
    do {
      pFVar3 = (param_2->Owner).Owner;
      if (pFVar3 != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = &pFVar3->ReferenceCountsAndFlags;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
        UNLOCK();
        if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
          LOCK();
          pFVar3->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)((longlong)pFVar3->ReferenceCountsAndFlags + 0x40000000);
          UNLOCK();
        }
      }
      *(FBufferOwner **)((longlong)param_2 + lVar4) = pFVar3;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FString,FString,int> @ 1414745b0

void __cdecl ConstructItems<FString,FString,int>(void *param_1,FString *param_2,int param_3)

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
                  (2,2,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 * 2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::FIoChunkBlockMemoryPool::FMemoryBlock,int> @ 141474660

void __cdecl
DefaultConstructItems<UE::FIoChunkBlockMemoryPool::FMemoryBlock,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0xffffffff;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::FIoFileBlockMemoryPool::FMemoryBlock,int> @ 1414746a0

void __cdecl
DefaultConstructItems<UE::FIoFileBlockMemoryPool::FMemoryBlock,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0xffffffff;
      puVar1[1] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FTracedTask,int> @ 1414746e0

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext>_::__l2::FTracedTask,int>
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

// DefaultConstructItems<LowLevelTasks::Private::FWaitEvent,int> @ 141474730

void __cdecl
DefaultConstructItems<LowLevelTasks::Private::FWaitEvent,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      FEventRef::FEventRef((FEventRef *)(puVar1 + 2),ManualReset);
      *(undefined1 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FWorkerThread,int> @ 141474790

void __cdecl DefaultConstructItems<FWorkerThread,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TAwaitableTask<void>,int> @ 1414747c0

void __cdecl DefaultConstructItems<TAwaitableTask<void>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(undefined ***)param_1 = &___7__TPromiseVTableDummy_X_AwaitableTask_Detail__6B_;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TAwaitableTask<__int64>,int> @ 1414747f0

void __cdecl DefaultConstructItems<TAwaitableTask<__int64>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(undefined ***)param_1 = &___7__TPromiseVTableDummy__J_AwaitableTask_Detail__6B_;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<LowLevelTasks::FTask,int> @ 141474820

void __cdecl DefaultConstructItems<LowLevelTasks::FTask,int>(void *param_1,int param_2)

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
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,int> @ 141474860

void __cdecl
DefaultConstructItems<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *_Dst;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)((longlong)param_1 + 0xa0510);
    do {
      lVar4 = 5;
      _Dst = puVar3 + -0x14082;
      do {
        lVar4 = lVar4 + -1;
        *(undefined4 *)(_Dst + -0x20) = 0xffffffff;
        *(undefined4 *)(_Dst + -0x10) = 0;
        memset(_Dst,0,0x20000);
        lVar2 = 0x400;
        puVar1 = _Dst;
        do {
          *puVar1 = 0;
          puVar1 = puVar1 + 0x10;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
        _Dst = _Dst + 0x4020;
      } while (lVar4 != 0);
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      *(undefined4 *)(puVar3 + 9) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x54) = 0;
      puVar3 = puVar3 + 0x140b0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DequeueIf<`UE::ParkingLot::WakeMultiple'::__l5::<lambda_1>_> @ 141474960

void __thiscall
UE::ParkingLot::Private::FBucket::DequeueIf<_UE::ParkingLot::WakeMultiple_::__l5::<lambda_1>_>
          (FBucket *this,<lambda_1> *param_1)

{
  FThread *pFVar1;
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar2;
  code *pcVar3;
  FThread *pFVar4;
  FThread *pFVar5;
  bool bVar6;
  int iVar7;
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar8;
  uint uVar9;
  FThread *pFVar10;
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar11;
  FThread *pFVar12;
  FThread *local_28 [2];
  
  pFVar1 = this->Head;
  pFVar4 = (FThread *)&this->Head;
  pFVar5 = (FThread *)0x0;
  do {
    if (pFVar1 == (FThread *)0x0) {
      return;
    }
    pFVar10 = pFVar1;
    pFVar12 = pFVar1;
    if (pFVar1->WaitAddress == (atomic<void_const_*>)param_1->Address) {
      FVar11 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)param_1->WakeThreads
      ;
      LOCK();
      pFVar1->ReferenceCount = (atomic<unsigned_int>)((int)pFVar1->ReferenceCount + 1);
      UNLOCK();
      FVar2 = *(ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> *)
               ((longlong)FVar11 + 0x400);
      FVar8 = FVar11;
      if (FVar2 != (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
        FVar8 = FVar2;
      }
      local_28[0] = pFVar1;
      if ((ulonglong)FVar8 <= local_28) {
        FVar8 = FVar11;
        if (FVar2 != (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
          FVar8 = FVar2;
        }
        if ((local_28 <
             (FThread **)((longlong)FVar8 + (longlong)*(int *)((longlong)FVar11 + 0x40c) * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar7 = *(int *)((longlong)FVar11 + 0x408);
      if (iVar7 == *(int *)((longlong)FVar11 + 0x40c)) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>_>
                          (0x808,(ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> *)
                                 FVar11,(int *)((longlong)FVar11 + 0x40c));
      }
      *(uint *)((longlong)FVar11 + 0x408) = iVar7 + 1U;
      if (*(ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> *)
           ((longlong)FVar11 + 0x400) !=
          (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
        FVar11 = *(ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> *)
                  ((longlong)FVar11 + 0x400);
      }
      *(undefined8 *)((longlong)FVar11 + (longlong)iVar7 * 8) = 0;
      *(FThread **)((longlong)FVar11 + (longlong)iVar7 * 8) = local_28[0];
      uVar9 = (uint)(iVar7 + 1U != param_1->WakeCount);
      if (uVar9 == 0xfffffffe) {
        return;
      }
      if (uVar9 != 0xffffffff) {
        if (uVar9 == 0) {
          if (this->Tail == pFVar1) {
            this->Tail = pFVar5;
          }
          pFVar4->Next = pFVar1->Next;
          pFVar1->Next = (FThread *)0x0;
          return;
        }
        pFVar10 = pFVar4;
        pFVar12 = pFVar5;
        if (uVar9 == 1) {
          if (this->Tail == pFVar1) {
            this->Tail = pFVar5;
          }
          pFVar4->Next = pFVar1->Next;
          pFVar1->Next = (FThread *)0x0;
        }
      }
    }
    pFVar1 = pFVar10->Next;
    pFVar4 = pFVar10;
    pFVar5 = pFVar12;
  } while( true );
}

// DestructItems<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext,int> @ 141474b60

void __cdecl
DestructItems<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext,int>
          (FBlockContext *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::FIoQueue::FPrioQueue,int> @ 141474ba0

void __cdecl DestructItems<UE::FIoQueue::FPrioQueue,int>(FPrioQueue *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ByOffset).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FTracedTask,int> @ 141474be0

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext>_::__l2::FTracedTask,int>
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

// DestructItems<LowLevelTasks::Private::FWaitEvent,int> @ 141474c60

void __cdecl DestructItems<LowLevelTasks::Private::FWaitEvent,int>(FWaitEvent *param_1,int param_2)

{
  FEventRef *this;
  
  if (param_2 != 0) {
    this = &param_1->Event;
    do {
      FEventRef::~FEventRef(this);
      this = this + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TAwaitableTask<void>,int> @ 141474ca0

void __cdecl DestructItems<TAwaitableTask<void>,int>(TAwaitableTask<void> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (**(code **)((param_1->PromiseVTable)._padding_ + 0x30))(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TAwaitableTask<__int64>,int> @ 141474ce0

void __cdecl
DestructItems<TAwaitableTask<__int64>,int>(TAwaitableTask<__int64> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (**(code **)((param_1->PromiseVTable)._padding_ + 0x30))(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int> @ 141474d20

void __cdecl
DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((*(int *)&param_1->field_0x8 != 0) &&
       (*(FScriptContainerElement **)param_1 != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)*(FScriptContainerElement **)param_1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)param_1,0,0,0x10);
      *(undefined4 *)&param_1->field_0x8 = 0;
    }
    if (*(FScriptContainerElement **)param_1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TFunction<void___cdecl(void)>,int> @ 141474da0

void __cdecl
DestructItems<TFunction<void___cdecl(void)>,int>(TFunction<void___cdecl(void)> *param_1,int param_2)

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

// DestructItems<TRefCountPtr<UE::ParkingLot::Private::FThread>,int> @ 141474df0

void __cdecl
DestructItems<TRefCountPtr<UE::ParkingLot::Private::FThread>,int>
          (TRefCountPtr<UE::ParkingLot::Private::FThread> *param_1,int param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FThread *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar3 = param_1->Reference;
    if (pFVar3 != (FThread *)0x0) {
      LOCK();
      paVar1 = &pFVar3->ReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        operator_delete(pFVar3,0x40,0x40);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FBaseGraphTask>,int> @ 141474e50

void __cdecl
DestructItems<TRefCountPtr<FBaseGraphTask>,int>(TRefCountPtr<FBaseGraphTask> *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar3 = param_1->Reference;
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
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<LowLevelTasks::FTask,1>,int> @ 141474ea0

void __cdecl
DestructItems<TSharedPtr<LowLevelTasks::FTask,1>,int>
          (TSharedPtr<LowLevelTasks::FTask,1> *param_1,int param_2)

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

// DestructItems<FLLMScope,int> @ 141474ee0

void __cdecl DestructItems<FLLMScope,int>(FLLMScope *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FLLMScope::~FLLMScope(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSharedBuffer,int> @ 141474f20

void __cdecl DestructItems<FSharedBuffer,int>(FSharedBuffer *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&param_1->Owner);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FString,int> @ 141474f60

void __cdecl DestructItems<FString,int>(FString *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<LowLevelTasks::FTask,int> @ 141474fa0

void __cdecl DestructItems<LowLevelTasks::FTask,int>(FTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&param_1->field_0x38;
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
      puVar3 = puVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,int> @ 141475020

void __cdecl
DestructItems<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,int>
          (TLocalQueue *param_1,int param_2)

{
  atomic<bool> aVar1;
  FTask *pFVar2;
  longlong lVar3;
  atomic<bool> *paVar4;
  FAAArrayQueue<LowLevelTasks::FTask> *this;
  longlong lVar5;
  atomic<bool> *paVar6;
  atomic<bool> *paVar7;
  longlong lVar8;
  bool bVar9;
  THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0> local_48;
  
  if (param_2 != 0) {
    paVar7 = &param_1->bIsInitialized;
    do {
      LOCK();
      aVar1 = *paVar7;
      *paVar7 = (atomic<bool>)0x0;
      UNLOCK();
      if (aVar1 != (atomic<bool>)0x0) {
        paVar4 = paVar7 + -0xa0564;
        lVar8 = 0;
        lVar5 = 0;
        paVar6 = paVar4;
LAB_141475082:
        do {
          lVar3 = (lVar5 + 2 + (ulonglong)(*(uint *)paVar6 & 0x3ff)) * 0x80;
          pFVar2 = *(FTask **)(paVar4 + lVar3);
          if ((FTask *)&DAT_00000001 < pFVar2) {
            LOCK();
            bVar9 = pFVar2 == *(FTask **)(paVar4 + lVar3);
            if (bVar9) {
              *(longlong *)(paVar4 + lVar3) = 0;
            }
            UNLOCK();
            if (bVar9) {
              *(uint *)paVar6 = *(uint *)paVar6 - 1;
              this = (FAAArrayQueue<LowLevelTasks::FTask> *)(*(longlong *)(paVar7 + -0x14) + lVar8);
              THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>::
              THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>
                        (&local_48,&this->tail,&this->Hazards);
              FAAArrayQueue<LowLevelTasks::FTask>::
              enqueueInternal<THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>_>
                        (this,pFVar2,&local_48);
              if (local_48.Record != (FHazardRecord *)0x0) {
                (local_48.Record)->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
              }
              goto LAB_141475082;
            }
          }
          paVar6 = paVar6 + 0x20100;
          lVar5 = lVar5 + 0x402;
          lVar8 = lVar8 + 0x1200;
        } while (lVar5 < 0x140a);
      }
      lVar5 = 5;
      paVar4 = paVar7 + -0xc;
      do {
        paVar6 = paVar4 + -0x10;
        paVar4 = paVar4 + -0x10;
        lVar5 = lVar5 + -1;
        if (*(undefined8 **)paVar6 != (undefined8 *)0x0) {
          **(undefined8 **)paVar6 = 0xffffffffffffffff;
        }
      } while (lVar5 != 0);
      paVar7 = paVar7 + 0xa0580;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EmptyPerfTest<10000> @ 1414756b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl Tasks2Tests::EmptyPerfTest<10000>(bool param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  void *pvVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FTask *pFVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStackY_1e8 [32];
  ForAnyElementType local_190;
  undefined8 local_188;
  ForAnyElementType local_180;
  undefined8 local_178;
  TArray<TAwaitableTask<void>,TSizedDefaultAllocator<32>_> local_170;
  undefined8 local_160;
  TAwaitableTask<void> local_158;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  <lambda_4> local_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  undefined1 local_f8 [40];
  undefined **local_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l6::LOG_Static,
               (FLogCategoryBase *)&LogTemp);
  }
  QueryPerformanceCounter(&local_148);
  dVar3 = __real_4170000000000000;
  uVar19 = 0;
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = 0;
  dVar6 = (double)local_148.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40,8,10000,&local_190,(int *)&local_188,(int *)((longlong)&local_188 + 4));
  DefaultConstructItems<LowLevelTasks::FTask,int>(local_190.Data + (longlong)iVar11 * 0x40,10000);
  local_160 = 0xc80000541866be00;
  uVar15 = uVar19;
  uVar21 = uVar19;
  do {
    if (((int)local_188 <= (int)uVar15) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar17 = local_190.Data + uVar21;
    if (((*(ulonglong *)(pFVar17 + 0x38) & 0x20) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                            ,0x1dd,L"State: %d"), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*(longlong *)(pFVar17 + 0x28) + 0x18))(pFVar17 + 0x28,pFVar17);
    pvVar9 = ThreadLocalStoragePointer;
    *(undefined ***)(pFVar17 + 0x28) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    uVar12 = (ulonglong)_tls_index;
    *pFVar17 = (FScriptContainerElement)param_1;
    lVar18 = *(longlong *)(*(longlong *)((longlong)pvVar9 + uVar12 * 8) + 0x40);
    uVar12 = uVar19;
    if (lVar18 != 0) {
      uVar12 = *(ulonglong *)(lVar18 + 0x30);
    }
    *(ulonglong *)(pFVar17 + 0x30) = uVar12;
    uVar20 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar20;
    uVar21 = uVar21 + 0x40;
    *(undefined8 *)(pFVar17 + 0x38) = local_160;
  } while ((int)uVar20 < 10000);
  QueryPerformanceCounter(&local_140);
  dVar5 = (double)local_140.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
  uVar15 = uVar19;
  uVar21 = uVar19;
  do {
    if (((int)local_188 <= (int)uVar15) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar14 = (FTask *)(local_190.Data + uVar21);
    uVar12 = *(ulonglong *)&pFVar14->field_0x38;
    do {
      LOCK();
      uVar13 = *(ulonglong *)&pFVar14->field_0x38;
      bVar10 = uVar12 == uVar13;
      if (bVar10) {
        *(ulonglong *)&pFVar14->field_0x38 = uVar12 | 2;
        uVar13 = uVar12;
      }
      UNLOCK();
      uVar12 = uVar13;
    } while (!bVar10);
    if ((uVar13 & 2) == 0) {
      LowLevelTasks::FScheduler::LaunchInternal
                (&LowLevelTasks::FScheduler::Singleton,pFVar14,DefaultPreference,true);
    }
    FVar16.Data = local_190.Data;
    uVar20 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar20;
    uVar21 = uVar21 + 0x40;
  } while ((int)uVar20 < 10000);
  lVar18 = (longlong)(int)local_188;
  if (((int)local_188 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar14 = (FTask *)(FVar16.Data + lVar18 * 0x40);
  for (; (FTask *)FVar16.Data != pFVar14; FVar16.Data = FVar16.Data + 0x40) {
    uVar15 = *(ulonglong *)&((FTask *)FVar16.Data)->field_0x38;
    while ((uVar15 & 0x20) == 0) {
      FWindowsPlatformProcess::YieldThread();
      uVar15 = *(ulonglong *)&((FTask *)FVar16.Data)->field_0x38;
    }
  }
  QueryPerformanceCounter(&local_138);
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  dVar2 = (double)local_138.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
  dVar4 = dVar2 - dVar6;
  if ((*(int *)(lVar18 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::
                              _thread_safe_static_guard_0__),
        `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_0__
        == -1)) {
    `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::TotalAvg = dVar4;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::
                         _thread_safe_static_guard_0__);
  }
  dVar8 = __real_3fefae147ae147ae;
  dVar7 = __real_3f847ae147ae147b;
  dVar6 = dVar5 - dVar6;
  `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::TotalAvg =
       dVar4 * __real_3f847ae147ae147b +
       `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::TotalAvg *
       __real_3fefae147ae147ae;
  if ((*(int *)(lVar18 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_1__)
     && (_Init_thread_header(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::
                              _thread_safe_static_guard_1__),
        `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_1__
        == -1)) {
    `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::SpawnedAvg = dVar6;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::
                         _thread_safe_static_guard_1__);
  }
  dVar2 = dVar2 - dVar5;
  `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::SpawnedAvg =
       dVar6 * dVar7 +
       `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::SpawnedAvg * dVar8;
  if ((*(int *)(lVar18 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_2__)
     && (_Init_thread_header(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::
                              _thread_safe_static_guard_2__),
        `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_2__
        == -1)) {
    `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::EndAvg = dVar2;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::
                         _thread_safe_static_guard_2__);
  }
  `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::EndAvg =
       dVar2 * dVar7 + `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l15::EndAvg * dVar8
  ;
  if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l23::LOG_Static,
               (FLogCategoryBase *)&LogTemp);
  }
  DestructItems<LowLevelTasks::FTask,int>((FTask *)local_190.Data,(int)local_188);
  if ((FTask *)local_190.Data != (FTask *)0x0) {
    FMemory::Free(local_190.Data);
  }
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178 = 0;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40,8,10000,&local_180,(int *)&local_178,(int *)((longlong)&local_178 + 4));
  DefaultConstructItems<LowLevelTasks::FTask,int>(local_180.Data + (longlong)iVar11 * 0x40,10000);
  QueryPerformanceCounter(&local_130);
  local_160 = 0xc80000541866c600;
  dVar6 = (double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
  uVar15 = uVar19;
  uVar21 = uVar19;
  do {
    if (((int)local_178 <= (int)uVar15) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar17 = local_180.Data + uVar21;
    if (((*(ulonglong *)(pFVar17 + 0x38) & 0x20) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                            ,0x1dd,L"State: %d"), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*(longlong *)(pFVar17 + 0x28) + 0x18))(pFVar17 + 0x28,pFVar17);
    pvVar9 = ThreadLocalStoragePointer;
    *(undefined ***)(pFVar17 + 0x28) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    uVar12 = (ulonglong)_tls_index;
    *pFVar17 = (FScriptContainerElement)param_1;
    lVar18 = *(longlong *)(*(longlong *)((longlong)pvVar9 + uVar12 * 8) + 0x40);
    uVar12 = uVar19;
    if (lVar18 != 0) {
      uVar12 = *(ulonglong *)(lVar18 + 0x30);
    }
    *(ulonglong *)(pFVar17 + 0x30) = uVar12;
    uVar20 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar20;
    uVar21 = uVar21 + 0x40;
    *(undefined8 *)(pFVar17 + 0x38) = local_160;
  } while ((int)uVar20 < 10000);
  local_d0 = &
             ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  local_c8 = ___xmm_e8000000000000200000000000000000;
  uStack_c0 = _UNK_15061cdc8;
  if (((_UNK_15061cdc8 & 0x20) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsCompleted()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                          ,0x1dd,L"State: %d"), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)local_d0[3])(&local_d0,local_f8);
  uVar15 = (ulonglong)_tls_index;
  local_d0 = &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  local_f8._0_8_ = &local_180;
  lVar18 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x40);
  if (lVar18 == 0) {
    local_c8 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar18 + 0x30);
  }
  uStack_c0 = 0xc80000541866ce00;
  QueryPerformanceCounter(&local_128);
  dVar5 = (double)local_128.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
  uVar21 = uStack_c0;
  do {
    LOCK();
    bVar10 = uVar21 != uStack_c0;
    uVar12 = uVar21 | 2;
    if (bVar10) {
      uVar21 = uStack_c0;
      uVar12 = uStack_c0;
    }
    uStack_c0 = uVar12;
    UNLOCK();
  } while (bVar10);
  if ((uVar21 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,(FTask *)local_f8,DefaultPreference,true);
  }
  FVar16.Data = local_180.Data;
  lVar18 = (longlong)(int)local_178;
  if (((int)local_178 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar14 = (FTask *)(FVar16.Data + lVar18 * 0x40);
  for (; (FTask *)FVar16.Data != pFVar14; FVar16.Data = FVar16.Data + 0x40) {
    uVar21 = *(ulonglong *)&((FTask *)FVar16.Data)->field_0x38;
    while ((uVar21 & 0x20) == 0) {
      FWindowsPlatformProcess::YieldThread();
      uVar21 = *(ulonglong *)&((FTask *)FVar16.Data)->field_0x38;
    }
  }
  while ((uStack_c0 & 0x20) == 0) {
    FWindowsPlatformProcess::YieldThread();
  }
  QueryPerformanceCounter(&local_120);
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
  dVar2 = (double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
  dVar4 = dVar2 - dVar6;
  if ((*(int *)(lVar18 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::_thread_safe_static_guard_3__)
     && (_Init_thread_header(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::
                              _thread_safe_static_guard_3__),
        `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::_thread_safe_static_guard_3__
        == -1)) {
    `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::TotalAvg = dVar4;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::
                         _thread_safe_static_guard_3__);
  }
  dVar6 = dVar5 - dVar6;
  `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::TotalAvg =
       dVar4 * dVar7 +
       `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::TotalAvg * dVar8;
  if ((*(int *)(lVar18 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::_thread_safe_static_guard_4__)
     && (_Init_thread_header(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::
                              _thread_safe_static_guard_4__),
        `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::_thread_safe_static_guard_4__
        == -1)) {
    `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::SpawnedAvg = dVar6;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::
                         _thread_safe_static_guard_4__);
  }
  dVar2 = dVar2 - dVar5;
  `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::SpawnedAvg =
       dVar6 * dVar7 +
       `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::SpawnedAvg * dVar8;
  if ((*(int *)(lVar18 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::_thread_safe_static_guard_5__)
     && (_Init_thread_header(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::
                              _thread_safe_static_guard_5__),
        `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::_thread_safe_static_guard_5__
        == -1)) {
    `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::EndAvg = dVar2;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::
                         _thread_safe_static_guard_5__);
  }
  `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::EndAvg =
       dVar2 * dVar7 + `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l32::EndAvg * dVar8
  ;
  if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l38::LOG_Static,
               (FLogCategoryBase *)&LogTemp);
  }
  if (((uStack_c0 & 0x20) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsCompleted()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                          ,0x204,L"State: %d"), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)local_d0[3])(&local_d0,local_f8);
  DestructItems<LowLevelTasks::FTask,int>((FTask *)local_180.Data,(int)local_178);
  if ((FTask *)local_180.Data != (FTask *)0x0) {
    FMemory::Free(local_180.Data);
  }
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,10000,&local_170.AllocatorInstance,&local_170.ArrayNum,
                      &local_170.ArrayMax);
  DefaultConstructItems<TAwaitableTask<void>,int>
            (local_170.AllocatorInstance.Data + (longlong)iVar11 * 0x10,10000);
  QueryPerformanceCounter(&local_118);
  local_158.PromiseVTable.Promise = (FPromiseBase *)0x0;
  local_158.PromiseVTable._padding_ =
       (longlong)&___7__TPromiseVTableDummy_X_AwaitableTask_Detail__6B_;
  local_110.Tasks = &local_170;
  dVar6 = (double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
  TAwaitableTask<void>::InitAndLaunch<_Tasks2Tests::EmptyPerfTest<10000>_::__l47::<lambda_4>_>
            (&local_158,L"Empty Awaitable Signal Task",Default,&local_110);
  QueryPerformanceCounter(&local_108);
  dVar5 = (double)local_108.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
  (**(code **)(local_158.PromiseVTable._padding_ + 0x10))();
  uVar15 = uVar19;
  while( true ) {
    if ((local_170.ArrayNum <= (int)uVar15) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    (**(code **)(*(longlong *)(local_170.AllocatorInstance.Data + uVar19) + 0x10))();
    uVar20 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar20;
    uVar19 = uVar19 + 0x10;
    if (9999 < (int)uVar20) {
      QueryPerformanceCounter(&local_100);
      lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      dVar3 = (double)local_100.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
      dVar2 = dVar3 - dVar6;
      if ((*(int *)(lVar18 + 0x9d4c) <
           `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
           _thread_safe_static_guard_6__) &&
         (_Init_thread_header(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
                               _thread_safe_static_guard_6__),
         `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
         _thread_safe_static_guard_6__ == -1)) {
        `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::TotalAvg = dVar2;
        _Init_thread_footer(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
                             _thread_safe_static_guard_6__);
      }
      dVar6 = dVar5 - dVar6;
      `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::TotalAvg =
           `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::TotalAvg * dVar8 +
           dVar2 * dVar7;
      if ((*(int *)(lVar18 + 0x9d4c) <
           `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
           _thread_safe_static_guard_7__) &&
         (_Init_thread_header(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
                               _thread_safe_static_guard_7__),
         `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
         _thread_safe_static_guard_7__ == -1)) {
        `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::SpawnedAvg = dVar6;
        _Init_thread_footer(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
                             _thread_safe_static_guard_7__);
      }
      dVar3 = dVar3 - dVar5;
      `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::SpawnedAvg =
           `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::SpawnedAvg * dVar8 +
           dVar6 * dVar7;
      if ((*(int *)(lVar18 + 0x9d4c) <
           `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
           _thread_safe_static_guard_8__) &&
         (_Init_thread_header(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
                               _thread_safe_static_guard_8__),
         `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
         _thread_safe_static_guard_8__ == -1)) {
        `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::EndAvg = dVar3;
        _Init_thread_footer(&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::
                             _thread_safe_static_guard_8__);
      }
      `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::EndAvg =
           `void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l47::EndAvg * dVar8 +
           dVar3 * dVar7;
      if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  (&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l53::LOG_Static,
                   (FLogCategoryBase *)&LogTemp);
      }
      (**(code **)(local_158.PromiseVTable._padding_ + 0x30))();
      DestructItems<TAwaitableTask<void>,int>
                ((TAwaitableTask<void> *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
      if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
      }
      if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  (&`void___cdecl_Tasks2Tests::EmptyPerfTest<10000>(bool)'::__l65::LOG_Static,
                   (FLogCategoryBase *)&LogTemp);
      }
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// HeapSortInternal<UE::ParkingLot::Private::FBucket_*,int,FIdentityFunctor,TLess<void>_> @ 141476bc0

void __cdecl
AlgoImpl::HeapSortInternal<UE::ParkingLot::Private::FBucket_*,int,FIdentityFunctor,TLess<void>_>
          (FBucket **param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  FBucket *pFVar1;
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
  iVar6 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_141476ca0:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar6] <= pFVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = pFVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar6 + -2;
      iVar6 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar7] <= pFVar1) goto LAB_141476ca0;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = pFVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapifyInternal<UE::FIoFileBlockRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::FIoFileBlockRequest_*,bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)>_> @ 141476d50

void __cdecl
AlgoImpl::
HeapifyInternal<UE::FIoFileBlockRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::FIoFileBlockRequest_*,bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)>_>
          (FIoFileBlockRequest **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::FIoFileBlockRequest_*,bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)>
          param_4)

{
  FIoFileBlockRequest *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar7 = iVar5 * 2 + 1;
  iVar3 = iVar7;
  iVar8 = iVar5;
  do {
    while (param_2 <= iVar7) {
LAB_141476e2c:
      if (iVar8 == 0) {
        return;
      }
      iVar5 = iVar8 + -1;
      iVar7 = iVar3 + -2;
      iVar3 = iVar7;
      iVar8 = iVar5;
    }
    iVar7 = iVar5 * 2;
    iVar6 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar4 = (*param_4.Predicate)(param_1[iVar6],param_1[(longlong)iVar7 + 2]);
      if (bVar4) {
        iVar6 = iVar7;
      }
      iVar6 = iVar6 + 1;
    }
    bVar4 = (*param_4.Predicate)(param_1[iVar6],param_1[iVar5]);
    if (!bVar4) goto LAB_141476e2c;
    pFVar1 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar6];
    param_1[iVar6] = pFVar1;
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar6;
  } while( true );
}

// InitAndLaunch<``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_> @ 141476e70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
TAwaitableTask<__int64>::
InitAndLaunch<__Tasks2Tests::BasicPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>
          (TAwaitableTask<__int64> *this,wchar_t *param_1,ETaskPriority param_2,<lambda_1> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  FPromiseBase *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ETaskPriority EVar9;
  FPromiseBase *pFVar10;
  
  (**(code **)((this->PromiseVTable)._padding_ + 0x30))();
  pFVar6 = ::operator_new(0x58);
  pFVar10 = (FPromiseBase *)0x0;
  if (pFVar6 != (FPromiseBase *)0x0) {
    *(long64 **)pFVar6 = param_3->TestVal;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)(pFVar6 + 0x40) = 0xe800000000000020;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined4 *)(pFVar6 + 0x50) = 2;
    pFVar6[0x54] = (FPromiseBase)0x0;
    if (((*(ulonglong *)(pFVar6 + 0x40) & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)(*(longlong *)(pFVar6 + 0x30) + 0x18))(pFVar6 + 0x30,pFVar6 + 8);
    uVar7 = (ulonglong)_tls_index;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    pvVar3 = ThreadLocalStoragePointer;
    *(FPromiseBase **)(pFVar6 + 8) = pFVar6;
    *(FPromiseBase **)(pFVar6 + 0x10) = pFVar6;
    lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar3 + uVar7 * 8) + 0x40);
    if (lVar1 == 0) {
      EVar9 = Default;
      if (param_2 != Inherit) {
        EVar9 = param_2;
      }
    }
    else {
      if (param_2 == Inherit) {
        param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
      }
      pFVar10 = *(FPromiseBase **)(lVar1 + 0x30);
      EVar9 = param_2;
    }
    *(FPromiseBase **)(pFVar6 + 0x38) = pFVar10;
    *(ulonglong *)(pFVar6 + 0x40) =
         ((longlong)(char)EVar9 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000
         ) << 6;
    pFVar10 = pFVar6;
  }
  (this->PromiseVTable).Promise = pFVar10;
  (this->PromiseVTable)._padding_ =
       (longlong)
       &
       ___7__TPromiseVTable_V__TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail___AwaitableTask_Detail__6B_
  ;
  uVar7 = *(ulonglong *)(pFVar10 + 0x40);
  do {
    LOCK();
    uVar8 = *(ulonglong *)(pFVar10 + 0x40);
    bVar4 = uVar7 == uVar8;
    if (bVar4) {
      *(ulonglong *)(pFVar10 + 0x40) = uVar7 | 2;
      uVar8 = uVar7;
    }
    UNLOCK();
    uVar7 = uVar8;
  } while (!bVar4);
  if ((uVar8 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(pFVar10 + 8),DefaultPreference,true);
  return true;
}

// InitAndLaunch<``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_> @ 141477050

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
TAwaitableTask<__int64>::
InitAndLaunch<__Tasks2Tests::StealingPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>
          (TAwaitableTask<__int64> *this,wchar_t *param_1,ETaskPriority param_2,<lambda_1> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  FPromiseBase *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ETaskPriority EVar9;
  FPromiseBase *pFVar10;
  
  (**(code **)((this->PromiseVTable)._padding_ + 0x30))();
  pFVar6 = ::operator_new(0x58);
  pFVar10 = (FPromiseBase *)0x0;
  if (pFVar6 != (FPromiseBase *)0x0) {
    *(long64 **)pFVar6 = param_3->TestVal;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)(pFVar6 + 0x40) = 0xe800000000000020;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined4 *)(pFVar6 + 0x50) = 2;
    pFVar6[0x54] = (FPromiseBase)0x0;
    if (((*(ulonglong *)(pFVar6 + 0x40) & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)(*(longlong *)(pFVar6 + 0x30) + 0x18))(pFVar6 + 0x30,pFVar6 + 8);
    uVar7 = (ulonglong)_tls_index;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    pvVar3 = ThreadLocalStoragePointer;
    *(FPromiseBase **)(pFVar6 + 8) = pFVar6;
    *(FPromiseBase **)(pFVar6 + 0x10) = pFVar6;
    lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar3 + uVar7 * 8) + 0x40);
    if (lVar1 == 0) {
      EVar9 = Default;
      if (param_2 != Inherit) {
        EVar9 = param_2;
      }
    }
    else {
      if (param_2 == Inherit) {
        param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
      }
      pFVar10 = *(FPromiseBase **)(lVar1 + 0x30);
      EVar9 = param_2;
    }
    *(FPromiseBase **)(pFVar6 + 0x38) = pFVar10;
    *(ulonglong *)(pFVar6 + 0x40) =
         ((longlong)(char)EVar9 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000
         ) << 6;
    pFVar10 = pFVar6;
  }
  (this->PromiseVTable).Promise = pFVar10;
  (this->PromiseVTable)._padding_ =
       (longlong)
       &
       ___7__TPromiseVTable_V__TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail___AwaitableTask_Detail__6B_
  ;
  uVar7 = *(ulonglong *)(pFVar10 + 0x40);
  do {
    LOCK();
    uVar8 = *(ulonglong *)(pFVar10 + 0x40);
    bVar4 = uVar7 == uVar8;
    if (bVar4) {
      *(ulonglong *)(pFVar10 + 0x40) = uVar7 | 2;
      uVar8 = uVar7;
    }
    UNLOCK();
    uVar7 = uVar8;
  } while (!bVar4);
  if ((uVar8 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(pFVar10 + 8),DefaultPreference,true);
  return true;
}

// InitAndLaunch<``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_> @ 141477230

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
TAwaitableTask<void>::
InitAndLaunch<__Tasks2Tests::EmptyPerfTest<10000>_::__l47::<lambda_4>::operator()_::__l5::<lambda_1>_>
          (TAwaitableTask<void> *this,wchar_t *param_1,ETaskPriority param_2,<lambda_1> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  FPromiseBase *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ETaskPriority EVar9;
  FPromiseBase *pFVar10;
  
  (**(code **)((this->PromiseVTable)._padding_ + 0x30))();
  pFVar6 = ::operator_new(0x50);
  pFVar10 = (FPromiseBase *)0x0;
  if (pFVar6 != (FPromiseBase *)0x0) {
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)(pFVar6 + 0x40) = 0xe800000000000020;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined4 *)(pFVar6 + 0x48) = 2;
    pFVar6[0x4c] = (FPromiseBase)0x0;
    if (((*(ulonglong *)(pFVar6 + 0x40) & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)(*(longlong *)(pFVar6 + 0x30) + 0x18))(pFVar6 + 0x30,pFVar6 + 8);
    uVar7 = (ulonglong)_tls_index;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    pvVar3 = ThreadLocalStoragePointer;
    *(FPromiseBase **)(pFVar6 + 8) = pFVar6;
    *(FPromiseBase **)(pFVar6 + 0x10) = pFVar6;
    lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar3 + uVar7 * 8) + 0x40);
    if (lVar1 == 0) {
      EVar9 = Default;
      if (param_2 != Inherit) {
        EVar9 = param_2;
      }
    }
    else {
      if (param_2 == Inherit) {
        param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
      }
      pFVar10 = *(FPromiseBase **)(lVar1 + 0x30);
      EVar9 = param_2;
    }
    *(FPromiseBase **)(pFVar6 + 0x38) = pFVar10;
    *(ulonglong *)(pFVar6 + 0x40) =
         ((longlong)(char)EVar9 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000
         ) << 6;
    pFVar10 = pFVar6;
  }
  (this->PromiseVTable).Promise = pFVar10;
  (this->PromiseVTable)._padding_ =
       (longlong)
       &
       ___7__TPromiseVTable_V__TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail___AwaitableTask_Detail__6B_
  ;
  uVar7 = *(ulonglong *)(pFVar10 + 0x40);
  do {
    LOCK();
    uVar8 = *(ulonglong *)(pFVar10 + 0x40);
    bVar4 = uVar7 == uVar8;
    if (bVar4) {
      *(ulonglong *)(pFVar10 + 0x40) = uVar7 | 2;
      uVar8 = uVar7;
    }
    UNLOCK();
    uVar7 = uVar8;
  } while (!bVar4);
  if ((uVar8 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(pFVar10 + 8),DefaultPreference,true);
  return true;
}

// InitAndLaunch<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_> @ 141477400

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
TAwaitableTask<__int64>::
InitAndLaunch<__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_1>_>
          (TAwaitableTask<__int64> *this,wchar_t *param_1,ETaskPriority param_2,<lambda_1> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  FPromiseBase *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ETaskPriority EVar9;
  FPromiseBase *pFVar10;
  
  (**(code **)((this->PromiseVTable)._padding_ + 0x30))();
  pFVar6 = ::operator_new(0x58);
  pFVar10 = (FPromiseBase *)0x0;
  if (pFVar6 != (FPromiseBase *)0x0) {
    *(undefined8 *)pFVar6 = *(undefined8 *)param_3;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)(pFVar6 + 0x40) = 0xe800000000000020;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined4 *)(pFVar6 + 0x50) = 2;
    pFVar6[0x54] = (FPromiseBase)0x0;
    if (((*(ulonglong *)(pFVar6 + 0x40) & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)(*(longlong *)(pFVar6 + 0x30) + 0x18))(pFVar6 + 0x30,pFVar6 + 8);
    uVar7 = (ulonglong)_tls_index;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    pvVar3 = ThreadLocalStoragePointer;
    *(FPromiseBase **)(pFVar6 + 8) = pFVar6;
    *(FPromiseBase **)(pFVar6 + 0x10) = pFVar6;
    lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar3 + uVar7 * 8) + 0x40);
    if (lVar1 == 0) {
      EVar9 = Default;
      if (param_2 != Inherit) {
        EVar9 = param_2;
      }
    }
    else {
      if (param_2 == Inherit) {
        param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
      }
      pFVar10 = *(FPromiseBase **)(lVar1 + 0x30);
      EVar9 = param_2;
    }
    *(FPromiseBase **)(pFVar6 + 0x38) = pFVar10;
    *(ulonglong *)(pFVar6 + 0x40) =
         ((longlong)(char)EVar9 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000
         ) << 6;
    pFVar10 = pFVar6;
  }
  (this->PromiseVTable).Promise = pFVar10;
  (this->PromiseVTable)._padding_ =
       (longlong)
       &
       ___7__TPromiseVTable_V__TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail___AwaitableTask_Detail__6B_
  ;
  uVar7 = *(ulonglong *)(pFVar10 + 0x40);
  do {
    LOCK();
    uVar8 = *(ulonglong *)(pFVar10 + 0x40);
    bVar4 = uVar7 == uVar8;
    if (bVar4) {
      *(ulonglong *)(pFVar10 + 0x40) = uVar7 | 2;
      uVar8 = uVar7;
    }
    UNLOCK();
    uVar7 = uVar8;
  } while (!bVar4);
  if ((uVar8 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(pFVar10 + 8),DefaultPreference,true);
  return true;
}

// InitAndLaunch<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_> @ 1414775e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
TAwaitableTask<__int64>::
InitAndLaunch<__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_2>_>
          (TAwaitableTask<__int64> *this,wchar_t *param_1,ETaskPriority param_2,<lambda_2> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  FPromiseBase *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ETaskPriority EVar9;
  FPromiseBase *pFVar10;
  
  (**(code **)((this->PromiseVTable)._padding_ + 0x30))();
  pFVar6 = ::operator_new(0x58);
  pFVar10 = (FPromiseBase *)0x0;
  if (pFVar6 != (FPromiseBase *)0x0) {
    *(undefined8 *)pFVar6 = *(undefined8 *)param_3;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)(pFVar6 + 0x40) = 0xe800000000000020;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined4 *)(pFVar6 + 0x50) = 2;
    pFVar6[0x54] = (FPromiseBase)0x0;
    if (((*(ulonglong *)(pFVar6 + 0x40) & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)(*(longlong *)(pFVar6 + 0x30) + 0x18))(pFVar6 + 0x30,pFVar6 + 8);
    uVar7 = (ulonglong)_tls_index;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    pvVar3 = ThreadLocalStoragePointer;
    *(FPromiseBase **)(pFVar6 + 8) = pFVar6;
    *(FPromiseBase **)(pFVar6 + 0x10) = pFVar6;
    lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar3 + uVar7 * 8) + 0x40);
    if (lVar1 == 0) {
      EVar9 = Default;
      if (param_2 != Inherit) {
        EVar9 = param_2;
      }
    }
    else {
      if (param_2 == Inherit) {
        param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
      }
      pFVar10 = *(FPromiseBase **)(lVar1 + 0x30);
      EVar9 = param_2;
    }
    *(FPromiseBase **)(pFVar6 + 0x38) = pFVar10;
    *(ulonglong *)(pFVar6 + 0x40) =
         ((longlong)(char)EVar9 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000
         ) << 6;
    pFVar10 = pFVar6;
  }
  (this->PromiseVTable).Promise = pFVar10;
  (this->PromiseVTable)._padding_ =
       (longlong)
       &
       ___7__TPromiseVTable_V__TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail___AwaitableTask_Detail__6B_
  ;
  uVar7 = *(ulonglong *)(pFVar10 + 0x40);
  do {
    LOCK();
    uVar8 = *(ulonglong *)(pFVar10 + 0x40);
    bVar4 = uVar7 == uVar8;
    if (bVar4) {
      *(ulonglong *)(pFVar10 + 0x40) = uVar7 | 2;
      uVar8 = uVar7;
    }
    UNLOCK();
    uVar7 = uVar8;
  } while (!bVar4);
  if ((uVar8 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(pFVar10 + 8),DefaultPreference,true);
  return true;
}

// InitAndLaunch<`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_> @ 1414777c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
TAwaitableTask<void>::InitAndLaunch<_Tasks2Tests::BasicPerfTest<10000>_::__l32::<lambda_3>_>
          (TAwaitableTask<void> *this,wchar_t *param_1,ETaskPriority param_2,<lambda_3> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  long64 *plVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  FPromiseBase *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ETaskPriority EVar10;
  FPromiseBase *pFVar11;
  
  (**(code **)((this->PromiseVTable)._padding_ + 0x30))();
  pFVar7 = ::operator_new(0x58);
  pFVar11 = (FPromiseBase *)0x0;
  if (pFVar7 != (FPromiseBase *)0x0) {
    plVar3 = param_3->TestVal;
    *(TArray<TAwaitableTask<__int64>,TSizedDefaultAllocator<32>_> **)pFVar7 = param_3->Tasks;
    *(long64 **)(pFVar7 + 8) = plVar3;
    *(undefined ***)(pFVar7 + 0x38) =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)(pFVar7 + 0x48) = 0xe800000000000020;
    *(undefined8 *)(pFVar7 + 0x40) = 0;
    *(undefined4 *)(pFVar7 + 0x50) = 2;
    pFVar7[0x54] = (FPromiseBase)0x0;
    if (((*(ulonglong *)(pFVar7 + 0x48) & 0x20) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    (**(code **)(*(longlong *)(pFVar7 + 0x38) + 0x18))(pFVar7 + 0x38,pFVar7 + 0x10);
    uVar8 = (ulonglong)_tls_index;
    *(undefined ***)(pFVar7 + 0x38) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    pvVar4 = ThreadLocalStoragePointer;
    *(FPromiseBase **)(pFVar7 + 0x10) = pFVar7;
    *(FPromiseBase **)(pFVar7 + 0x18) = pFVar7;
    lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar4 + uVar8 * 8) + 0x40);
    if (lVar1 == 0) {
      EVar10 = Default;
      if (param_2 != Inherit) {
        EVar10 = param_2;
      }
    }
    else {
      if (param_2 == Inherit) {
        param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
      }
      pFVar11 = *(FPromiseBase **)(lVar1 + 0x30);
      EVar10 = param_2;
    }
    *(FPromiseBase **)(pFVar7 + 0x40) = pFVar11;
    *(ulonglong *)(pFVar7 + 0x48) =
         ((longlong)(char)EVar10 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff |
         0xff00000000000000) << 6;
    pFVar11 = pFVar7;
  }
  (this->PromiseVTable).Promise = pFVar11;
  (this->PromiseVTable)._padding_ =
       (longlong)
       &
       ___7__TPromiseVTable_V__TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail___AwaitableTask_Detail__6B_
  ;
  uVar8 = *(ulonglong *)(pFVar11 + 0x48);
  do {
    LOCK();
    uVar9 = *(ulonglong *)(pFVar11 + 0x48);
    bVar5 = uVar8 == uVar9;
    if (bVar5) {
      *(ulonglong *)(pFVar11 + 0x48) = uVar8 | 2;
      uVar9 = uVar8;
    }
    UNLOCK();
    uVar8 = uVar9;
  } while (!bVar5);
  if ((uVar9 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(pFVar11 + 0x10),DefaultPreference,true)
  ;
  return true;
}

// InitAndLaunch<`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_> @ 1414779a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
TAwaitableTask<void>::InitAndLaunch<_Tasks2Tests::StealingPerfTest<10000>_::__l32::<lambda_3>_>
          (TAwaitableTask<void> *this,wchar_t *param_1,ETaskPriority param_2,<lambda_3> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  long64 *plVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  FPromiseBase *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ETaskPriority EVar10;
  FPromiseBase *pFVar11;
  
  (**(code **)((this->PromiseVTable)._padding_ + 0x30))();
  pFVar7 = ::operator_new(0x58);
  pFVar11 = (FPromiseBase *)0x0;
  if (pFVar7 != (FPromiseBase *)0x0) {
    plVar3 = param_3->TestVal;
    *(TArray<TAwaitableTask<__int64>,TSizedDefaultAllocator<32>_> **)pFVar7 = param_3->Tasks;
    *(long64 **)(pFVar7 + 8) = plVar3;
    *(undefined ***)(pFVar7 + 0x38) =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)(pFVar7 + 0x48) = 0xe800000000000020;
    *(undefined8 *)(pFVar7 + 0x40) = 0;
    *(undefined4 *)(pFVar7 + 0x50) = 2;
    pFVar7[0x54] = (FPromiseBase)0x0;
    if (((*(ulonglong *)(pFVar7 + 0x48) & 0x20) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    (**(code **)(*(longlong *)(pFVar7 + 0x38) + 0x18))(pFVar7 + 0x38,pFVar7 + 0x10);
    uVar8 = (ulonglong)_tls_index;
    *(undefined ***)(pFVar7 + 0x38) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    pvVar4 = ThreadLocalStoragePointer;
    *(FPromiseBase **)(pFVar7 + 0x10) = pFVar7;
    *(FPromiseBase **)(pFVar7 + 0x18) = pFVar7;
    lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar4 + uVar8 * 8) + 0x40);
    if (lVar1 == 0) {
      EVar10 = Default;
      if (param_2 != Inherit) {
        EVar10 = param_2;
      }
    }
    else {
      if (param_2 == Inherit) {
        param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
      }
      pFVar11 = *(FPromiseBase **)(lVar1 + 0x30);
      EVar10 = param_2;
    }
    *(FPromiseBase **)(pFVar7 + 0x40) = pFVar11;
    *(ulonglong *)(pFVar7 + 0x48) =
         ((longlong)(char)EVar10 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff |
         0xff00000000000000) << 6;
    pFVar11 = pFVar7;
  }
  (this->PromiseVTable).Promise = pFVar11;
  (this->PromiseVTable)._padding_ =
       (longlong)
       &
       ___7__TPromiseVTable_V__TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail___AwaitableTask_Detail__6B_
  ;
  uVar8 = *(ulonglong *)(pFVar11 + 0x48);
  do {
    LOCK();
    uVar9 = *(ulonglong *)(pFVar11 + 0x48);
    bVar5 = uVar8 == uVar9;
    if (bVar5) {
      *(ulonglong *)(pFVar11 + 0x48) = uVar8 | 2;
      uVar9 = uVar8;
    }
    UNLOCK();
    uVar8 = uVar9;
  } while (!bVar5);
  if ((uVar9 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(pFVar11 + 0x10),DefaultPreference,true)
  ;
  return true;
}

// InitAndLaunch<`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_> @ 141477b80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
TAwaitableTask<void>::InitAndLaunch<_Tasks2Tests::EmptyPerfTest<10000>_::__l47::<lambda_4>_>
          (TAwaitableTask<void> *this,wchar_t *param_1,ETaskPriority param_2,<lambda_4> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  FPromiseBase *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ETaskPriority EVar9;
  FPromiseBase *pFVar10;
  
  (**(code **)((this->PromiseVTable)._padding_ + 0x30))();
  pFVar6 = ::operator_new(0x50);
  pFVar10 = (FPromiseBase *)0x0;
  if (pFVar6 != (FPromiseBase *)0x0) {
    *(TArray<TAwaitableTask<void>,TSizedDefaultAllocator<32>_> **)pFVar6 = param_3->Tasks;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)(pFVar6 + 0x40) = 0xe800000000000020;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined4 *)(pFVar6 + 0x48) = 2;
    pFVar6[0x4c] = (FPromiseBase)0x0;
    if (((*(ulonglong *)(pFVar6 + 0x40) & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)(*(longlong *)(pFVar6 + 0x30) + 0x18))(pFVar6 + 0x30,pFVar6 + 8);
    uVar7 = (ulonglong)_tls_index;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    pvVar3 = ThreadLocalStoragePointer;
    *(FPromiseBase **)(pFVar6 + 8) = pFVar6;
    *(FPromiseBase **)(pFVar6 + 0x10) = pFVar6;
    lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar3 + uVar7 * 8) + 0x40);
    if (lVar1 == 0) {
      EVar9 = Default;
      if (param_2 != Inherit) {
        EVar9 = param_2;
      }
    }
    else {
      if (param_2 == Inherit) {
        param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
      }
      pFVar10 = *(FPromiseBase **)(lVar1 + 0x30);
      EVar9 = param_2;
    }
    *(FPromiseBase **)(pFVar6 + 0x38) = pFVar10;
    *(ulonglong *)(pFVar6 + 0x40) =
         ((longlong)(char)EVar9 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000
         ) << 6;
    pFVar10 = pFVar6;
  }
  (this->PromiseVTable).Promise = pFVar10;
  (this->PromiseVTable)._padding_ =
       (longlong)
       &
       ___7__TPromiseVTable_V__TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail___AwaitableTask_Detail__6B_
  ;
  uVar7 = *(ulonglong *)(pFVar10 + 0x40);
  do {
    LOCK();
    uVar8 = *(ulonglong *)(pFVar10 + 0x40);
    bVar4 = uVar7 == uVar8;
    if (bVar4) {
      *(ulonglong *)(pFVar10 + 0x40) = uVar7 | 2;
      uVar8 = uVar7;
    }
    UNLOCK();
    uVar7 = uVar8;
  } while (!bVar4);
  if ((uVar8 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(pFVar10 + 8),DefaultPreference,true);
  return true;
}

// InitAndLaunch<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_> @ 141477d60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
TAwaitableTask<void>::InitAndLaunch<_Tasks2Tests::FTasksUnitTests2::RunTest_::__l84::<lambda_4>_>
          (TAwaitableTask<void> *this,wchar_t *param_1,ETaskPriority param_2,<lambda_4> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  FPromiseBase *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ETaskPriority EVar9;
  FPromiseBase *pFVar10;
  
  (**(code **)((this->PromiseVTable)._padding_ + 0x30))();
  pFVar6 = ::operator_new(0x50);
  pFVar10 = (FPromiseBase *)0x0;
  if (pFVar6 != (FPromiseBase *)0x0) {
    *(uint **)pFVar6 = param_3->TestValue;
    *(undefined ***)(pFVar6 + 0x30) =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)(pFVar6 + 0x40) = 0xe800000000000020;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined4 *)(pFVar6 + 0x48) = 2;
    pFVar6[0x4c] = (FPromiseBase)0x0;
    if (((*(ulonglong *)(pFVar6 + 0x40) & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    (**(code **)(*(longlong *)(pFVar6 + 0x30) + 0x18))(pFVar6 + 0x30,pFVar6 + 8);
    uVar7 = (ulonglong)_tls_index;
    *(undefined ***)(pFVar6 + 0x30) =
         &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
          TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    pvVar3 = ThreadLocalStoragePointer;
    *(FPromiseBase **)(pFVar6 + 8) = pFVar6;
    *(FPromiseBase **)(pFVar6 + 0x10) = pFVar6;
    lVar1 = *(longlong *)(*(longlong *)((longlong)pvVar3 + uVar7 * 8) + 0x40);
    if (lVar1 == 0) {
      EVar9 = Default;
      if (param_2 != Inherit) {
        EVar9 = param_2;
      }
    }
    else {
      if (param_2 == Inherit) {
        param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
      }
      pFVar10 = *(FPromiseBase **)(lVar1 + 0x30);
      EVar9 = param_2;
    }
    *(FPromiseBase **)(pFVar6 + 0x38) = pFVar10;
    *(ulonglong *)(pFVar6 + 0x40) =
         ((longlong)(char)EVar9 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000
         ) << 6;
    pFVar10 = pFVar6;
  }
  (this->PromiseVTable).Promise = pFVar10;
  (this->PromiseVTable)._padding_ =
       (longlong)
       &AwaitableTask_Detail::
        TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>_>
        ::_vftable_;
  uVar7 = *(ulonglong *)(pFVar10 + 0x40);
  do {
    LOCK();
    uVar8 = *(ulonglong *)(pFVar10 + 0x40);
    bVar4 = uVar7 == uVar8;
    if (bVar4) {
      *(ulonglong *)(pFVar10 + 0x40) = uVar7 | 2;
      uVar8 = uVar7;
    }
    UNLOCK();
    uVar7 = uVar8;
  } while (!bVar4);
  if ((uVar8 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(pFVar10 + 8),DefaultPreference,true);
  return true;
}

// IntCastChecked<unsigned_int,__int64> @ 141477f40

uint __cdecl IntCastChecked<unsigned_int,__int64>(long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 != (param_1 & 0xffffffffU)) || (param_1 < 0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)param_1;
}

// IntCastChecked<unsigned_int,unsigned___int64> @ 141477fa0

uint __cdecl IntCastChecked<unsigned_int,unsigned___int64>(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 != (param_1 & 0xffffffff)) {
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
  return (uint)param_1;
}

// IntroSortInternal<UE::ParkingLot::Private::FBucket_*,int,FIdentityFunctor,TLess<void>_> @ 141477ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<UE::ParkingLot::Private::FBucket_*,int,FIdentityFunctor,TLess<void>_>
          (FBucket **param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  FBucket **ppFVar1;
  FBucket *pFVar2;
  int iVar3;
  FBucket **ppFVar4;
  FBucket ***pppFVar5;
  FBucket **ppFVar6;
  FBucket **ppFVar7;
  FBucket **ppFVar8;
  FBucket **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FBucket **local_338;
  FBucket **local_328;
  FBucket **local_320;
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
    pppFVar5 = &local_328;
    do {
      ppFVar8 = pppFVar5[1];
      ppFVar4 = *pppFVar5;
      ppFVar1 = pppFVar5[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar9 = ppFVar4;
      if ((int)local_338 != 0) {
LAB_1414780a0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar8 + 1;
          pFVar2 = ppFVar9[iVar3 >> 1];
          ppFVar9[iVar3 >> 1] = *ppFVar9;
          *ppFVar9 = pFVar2;
          ppFVar4 = ppFVar9;
LAB_1414780d0:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x0001414780d9;
          goto LAB_1414780e1;
        }
        for (; ppFVar4 = ppFVar9, ppFVar1 = ppFVar9, ppFVar9 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            if (*ppFVar4 < *ppFVar1) {
              ppFVar4 = ppFVar1;
            }
          }
          pFVar2 = *ppFVar4;
          *ppFVar4 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_14147819c;
      }
LAB_14147818a:
      local_338 = ppFVar1;
      HeapSortInternal<UE::ParkingLot::Private::FBucket_*,int,FIdentityFunctor,TLess<void>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_14147819c:
      pppFVar5 = pppFVar5 + -3;
    } while (&local_328 <= pppFVar5);
  }
  return;
code_r0x0001414780d9:
  if (*ppFVar4 <= *ppFVar9) goto LAB_1414780d0;
LAB_1414780e1:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar9) break;
  } while (*ppFVar9 <= *ppFVar6);
  if (ppFVar4 <= ppFVar6) {
    pFVar2 = *ppFVar4;
    *ppFVar4 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_1414780d0;
  }
  pFVar2 = *ppFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar9 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar5 = ppFVar4;
      pppFVar5[1] = ppFVar8;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar6 <= ppFVar9 + 1) goto LAB_14147819c;
    ppFVar8 = ppFVar7 + -2;
    ppFVar4 = ppFVar9;
  }
  else {
    if (ppFVar9 + 1 < ppFVar6) {
      *pppFVar5 = ppFVar9;
      pppFVar5[1] = ppFVar7 + -2;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_14147819c;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar9 = ppFVar4;
  if ((int)local_338 == 0) goto LAB_14147818a;
  goto LAB_1414780a0;
}

// IsSortedBy<UE::FIoQueue::FPrioQueue,int,int_(__cdecl*)(UE::FIoQueue::FPrioQueue_const_&),TLess<int>_> @ 141478290

bool __cdecl
AlgoImpl::
IsSortedBy<UE::FIoQueue::FPrioQueue,int,int_(__cdecl*)(UE::FIoQueue::FPrioQueue_const_&),TLess<int>_>
          (FPrioQueue *param_1,int param_2,_func___cdecl_int_FPrioQueue_ptr *param_3,
          TLess<int> param_4)

{
  FPrioQueue *pFVar1;
  int iVar2;
  int iVar3;
  
  pFVar1 = param_1;
  if (param_2 != 0) {
    while (param_2 = param_2 + -1, param_2 != 0) {
      iVar2 = (*param_3)(pFVar1 + 1);
      iVar3 = (*param_3)(param_1);
      if (iVar2 < iVar3) {
        return false;
      }
      param_1 = param_1 + 1;
      pFVar1 = pFVar1 + 1;
    }
  }
  return true;
}

// Launch<`FTaskGraphCompatibilityImplementation::TriggerEventWhenTasksComplete'::__l2::<lambda_1>,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&> @ 141478310

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_FTaskGraphCompatibilityImplementation::TriggerEventWhenTasksComplete_::__l2::<lambda_1>,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const_&>
          (wchar_t *param_1,<lambda_1> *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3,ETaskPriority param_4,EExtendedTaskPriority param_5,ETaskFlags param_6)

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
         ___7__TExecutableTaskBase_V<lambda_1>__1__TriggerEventWhenTasksComplete_FTaskGraphCompatibilityImplementation__EEAAXPEAVFEvent__AEBV__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA_______W4Type_ENamedThreads__2_Z_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    this[1]._padding_ = *(longlong *)(param_3->AllocatorInstance).InlineData;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1__TriggerEventWhenTasksComplete_FTaskGraphCompatibilityImplementation__EEAAXPEAVFEvent__AEBV__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA_______W4Type_ENamedThreads__2_Z__Private_Tasks_UE__6B_
    ;
  }
  Private::FTaskBase::
  AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
            (this,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)CONCAT71(in_register_00000089,param_4),true);
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

// Launch<`UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'::__l12::<lambda_1>,TRefCountPtr<FBaseGraphTask>_const_&> @ 141478410

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskHandle::
Launch<_UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_::__l12::<lambda_1>,TRefCountPtr<FBaseGraphTask>_const_&>
          (FTaskHandle *this,wchar_t *param_1,<lambda_1> *param_2,
          TRefCountPtr<FBaseGraphTask> *param_3,ETaskPriority param_4,EExtendedTaskPriority param_5,
          ETaskFlags param_6)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTaskBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTaskBase *this_00;
  
  if ((this->Pimpl).Reference != (FTaskBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x92,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__M_____WaitAny_V__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA________Tasks_UE__YAHAEBV__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA_______UFTimespan___Z_XX_Private_Tasks_UE__6B_
    ;
    FTaskBase::Init(this_00,param_1,param_4,param_5,param_6);
    this_00[1]._padding_ = (longlong)(param_2->SharedData).Object;
    pTVar3 = (param_2->SharedData).SharedReferenceCount.ReferenceController;
    this_00[1]._padding_ = (longlong)pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(int *)&this_00[1]._padding_ = param_2->Index;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__M_____WaitAny_V__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA________Tasks_UE__YAHAEBV__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA_______UFTimespan___Z__Private_Tasks_UE__6B_
    ;
  }
  pFVar4 = (FTaskBase *)param_3->Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    if ((this_00->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)this_00->NumLocks))
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0xe3,L"Prerequisites can be added only before the task is launched");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    paVar1 = &this_00->NumLocks;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
    UNLOCK();
    if (0x7fffffff < (int)aVar2 + 1U) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrevNumLocks + 1 < ExecutionFlag",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0xea,L"Max number of task prerequisites reached: %d");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    bVar6 = FTaskBase::AddSubsequent(pFVar4,this_00);
    if (bVar6) {
      LOCK();
      pFVar4->RefCount = (atomic<unsigned_int>)((int)pFVar4->RefCount + 1);
      UNLOCK();
      FTaskBase::FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                (&this_00->Prerequisites,pFVar4);
    }
    else {
      LOCK();
      this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + -1);
      UNLOCK();
    }
  }
  pFVar4 = (this->Pimpl).Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    (this->Pimpl).Reference = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  (this->Pimpl).Reference = this_00;
  FTaskBase::TryLaunch(this_00,0x100);
  return;
}

// Launch<`UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'::__l12::<lambda_1>,TRefCountPtr<FBaseGraphTask>_const_&> @ 1414785f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_::__l12::<lambda_1>,TRefCountPtr<FBaseGraphTask>_const_&>
          (wchar_t *param_1,<lambda_1> *param_2,TRefCountPtr<FBaseGraphTask> *param_3,
          ETaskPriority param_4,EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  Private::FTaskHandle::
  Launch<_UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_::__l12::<lambda_1>,TRefCountPtr<FBaseGraphTask>_const_&>
            ((FTaskHandle *)param_1,(wchar_t *)param_2,(<lambda_1> *)param_3,
             (TRefCountPtr<FBaseGraphTask> *)CONCAT71(in_register_00000089,param_4),param_5,
             (undefined1)param_6,in_stack_00000038);
  return (TTask<void>)param_1;
}

// LowerBoundInternal<UE::FIoQueue::FPrioQueue_const_,int,int,int_(__cdecl*)(UE::FIoQueue::FPrioQueue_const_&),TLess<int>_> @ 141478640

int __cdecl
AlgoImpl::
LowerBoundInternal<UE::FIoQueue::FPrioQueue_const_,int,int,int_(__cdecl*)(UE::FIoQueue::FPrioQueue_const_&),TLess<int>_>
          (FPrioQueue *param_1,int param_2,int *param_3,_func___cdecl_int_FPrioQueue_ptr *param_4,
          TLess<int> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = (*param_4)(param_1 + iVar1);
      if (iVar3 < *param_3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<UE::FIoFileBlockRequest_*_const,int,UE::FIoQueue::FFileOffset,UE::FIoQueue::FFileOffset_(__cdecl*)(UE::FIoFileBlockRequest_const_*),bool_(__cdecl*)(UE::FIoQueue::FFileOffset_const_&,UE::FIoQueue::FFileOffset_const_&)> @ 1414786c0

int __cdecl
AlgoImpl::
LowerBoundInternal<UE::FIoFileBlockRequest_*_const,int,UE::FIoQueue::FFileOffset,UE::FIoQueue::FFileOffset_(__cdecl*)(UE::FIoFileBlockRequest_const_*),bool_(__cdecl*)(UE::FIoQueue::FFileOffset_const_&,UE::FIoQueue::FFileOffset_const_&)>
          (FIoFileBlockRequest **param_1,int param_2,FFileOffset *param_3,
          _func___cdecl_FFileOffset_FIoFileBlockRequest_ptr *param_4,
          _func___cdecl_bool_FFileOffset_ptr_FFileOffset_ptr *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  FFileOffset *pFVar4;
  int iVar5;
  FFileOffset local_58;
  FFileOffset local_40;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      pFVar4 = (*param_4)(&local_40,param_1[iVar1]);
      local_58.FileHandle.Handle._0_4_ = (undefined4)(pFVar4->FileHandle).Handle;
      local_58.FileHandle.Handle._4_4_ = *(undefined4 *)((longlong)&(pFVar4->FileHandle).Handle + 4)
      ;
      local_58.FileOffset._0_4_ = (undefined4)pFVar4->FileOffset;
      local_58.FileOffset._4_4_ = *(undefined4 *)((longlong)&pFVar4->FileOffset + 4);
      local_58.Priority = pFVar4->Priority;
      local_58._20_4_ = *(undefined4 *)&pFVar4->field_0x14;
      bVar3 = (*param_5)(&local_58,param_3);
      if (bVar3) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// MakeShared<LowLevelTasks::FTask,1> @ 141478780

TSharedRef<LowLevelTasks::FTask,1> * __cdecl
MakeShared<LowLevelTasks::FTask,1>(TSharedRef<LowLevelTasks::FTask,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<LowLevelTasks::FTask,1> *pTVar4;
  
  pTVar3 = operator_new(0x50);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FTask *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTask_LowLevelTasks___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    *(undefined ***)&pTVar3[3].SharedReferenceCount =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x20;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0xe8000000;
    __return_storage_ptr__->Object = (FTask *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FTask *)(pTVar3 + 1) == (FTask *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<LowLevelTasks::FTask,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext> @ 141478850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_2> *param_4,<lambda_3> *param_5,
          EParallelForFlags param_6,
          TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>
          *param_7)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ETaskTag EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar13;
  FName FVar14;
  bool *pbVar15;
  int iVar16;
  ulonglong uVar17;
  FName FVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  undefined1 local_88;
  FColor_u_0 local_84;
  FEventRef local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_50;
  int local_48;
  char local_44;
  
  if (param_2 == 0) {
    `UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>::operator()(param_5);
    return;
  }
  FVar13 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_ParallelFor");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar12,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar5 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar7 = false;
  bVar21 = false;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_1414789da:
    bVar6 = bVar21;
    bVar5 = bVar7;
    bVar7 = false;
    FVar18 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_78.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar5 = true;
        bVar6 = true;
        bVar7 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1414789da;
    local_70 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar7 = true;
  }
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                         ,0x80,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = GetNumberOfThreadTasks(param_2,param_3,param_6);
  iVar16 = param_7->ArrayNum;
  iVar20 = iVar10;
  if ((iVar16 != 0) && (iVar20 = iVar16, iVar10 < iVar16)) {
    iVar20 = iVar10;
  }
  if (iVar20 < 2) {
    `UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>::operator()(param_5);
    iVar16 = 0;
    if (0 < param_2) {
      do {
        if ((param_7->ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        `UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>::operator()
                  (param_4,param_7->DataPtr,iVar16);
        iVar16 = iVar16 + 1;
      } while (iVar16 < param_2);
    }
    goto LAB_141478e1a;
  }
  uVar17 = 1;
  iVar16 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar19 = 6;
    iVar10 = iVar20 * 6;
    do {
      if (iVar10 <= param_2) {
        uVar3 = (longlong)(param_2 + -1 + iVar10) / (longlong)iVar10;
        uVar17 = uVar3 & 0xffffffff;
        iVar16 = (int)uVar3;
        local_84.Bits = (param_2 + -1 + iVar16) / iVar16;
        if (iVar20 <= (int)local_84.Bits) break;
      }
      iVar16 = (int)uVar17;
      iVar10 = iVar10 - iVar20;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
  iVar20 = iVar20 + -1;
  EVar11 = FTaskTagScope::GetCurrentTag();
  local_88 = 6;
  if ((EVar11 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_141478b5e;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = 0;
  }
  else {
LAB_141478b5e:
    local_88 = 3;
  }
  FEventRef::FEventRef(&local_80,ManualReset);
  FVar14 = (FName)TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (FVar14 == (FName)0x0) {
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
  }
  else {
    ((FColor_u_0 *)((longlong)FVar14 + 0x54))->Bits = (uint)local_84;
    *(undefined4 *)((longlong)FVar14 + 8) = 0;
    *(int *)((longlong)FVar14 + 0x80) = 0;
    *(undefined ***)FVar14 =
         &`ParallelForImpl::
          ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::FBlockContext>'
          ::`2'::FParallelForData::_vftable_;
    *(wchar_t **)((longlong)FVar14 + 0x38) = param_1;
    *(<lambda_2> **)((longlong)FVar14 + 0x60) = param_4;
    *(FEventRef **)((longlong)FVar14 + 0x68) = &local_80;
    *(undefined1 *)((longlong)FVar14 + 0x70) = local_88;
    *(int *)((longlong)FVar14 + 0x84) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x40) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x48) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x78) = 0;
    *(int *)((longlong)FVar14 + 0x4c) = param_2;
    *(int *)((longlong)FVar14 + 0x50) = iVar16;
    *(TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>
      **)((longlong)FVar14 + 0x58) = param_7;
    ((FColor_u_0 *)((longlong)FVar14 + 0x44))->Bits = (uint)local_84;
    iVar16 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext>_::__l2::FTracedTask>_>
                       (0x48,8,iVar20,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext>(wchar_t_const_*,int,int,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,EParallelForFlags,TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>_const_&)_::_2_::FTracedTask>
                         *)((longlong)FVar14 + 0x78),(int *)((longlong)FVar14 + 0x80),
                        (int *)((longlong)FVar14 + 0x84));
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext>_::__l2::FTracedTask,int>
              ((void *)(*(longlong *)((longlong)FVar14 + 0x78) + (longlong)iVar16 * 0x48),iVar20);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)((longlong)FVar14 + 0x10));
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  piVar1 = (int *)((longlong)FVar14 + 0x48);
  iVar16 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*(int *)((longlong)FVar14 + 0x80) <= iVar16) {
    iVar16 = -1;
  }
  if (iVar16 != -1) {
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
    local_70 = FVar14;
    `ParallelForImpl::
    ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
    ::__l2::FParallelExecutor::LaunchTask
              ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext>(wchar_t_const_*,int,int,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,EParallelForFlags,TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>_const_&)_::_2_::FParallelForData>
                *)&local_70,iVar16,true);
    if (local_70 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_70 + 8);
      LOCK();
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (((iVar16 == 1) && (piVar1 != (int *)0x0)) && (local_70 != (FName)0x0)) {
        (*(code *)**(undefined8 **)local_70)(local_70,1);
      }
    }
  }
  `UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>::operator()(param_5);
  local_44 = '\0';
  local_50 = FVar14;
  local_48 = iVar20;
  bVar8 = `ParallelForImpl::
          ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
          ::__l2::FParallelExecutor::operator()(&local_50,true);
  if (!bVar8) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar8 = IsInActualRenderingThread(), !bVar8))
    {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
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
        pbVar15 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar2 = *pbVar15;
        *pbVar15 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar15 = bVar2;
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar9 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      while (cVar9 == '\0') {
        (**(code **)((longlong)*TaskGraphImplementationSingleton + 0x48))
                  (TaskGraphImplementationSingleton,
                   ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar9 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      }
    }
  }
  if (local_50 != (FName)0x0) {
    if (local_44 != '\0') {
      `ParallelForImpl::
      ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
      ::__l2::FParallelExecutor::LaunchTask
                ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext>(wchar_t_const_*,int,int,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,EParallelForFlags,TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>_const_&)_::_2_::FParallelForData>
                  *)&local_50,local_48,true);
    }
    if (local_50 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_50 + 8);
      LOCK();
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar16 == 1) && (piVar1 != (int *)0x0)) {
        (*(code *)**(undefined8 **)local_50)(local_50,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_141478e1a:
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// ParallelForWithPreWorkWithTaskContext<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext,TSizedDefaultAllocator<32>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_1>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>_> @ 141478e90

void __cdecl
ParallelForWithPreWorkWithTaskContext<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext,TSizedDefaultAllocator<32>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_1>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>_>
          (wchar_t *param_1,
          TArray<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,TSizedDefaultAllocator<32>_>
          *param_2,int param_3,int param_4,<lambda_1> *param_5,<lambda_2> *param_6,
          <lambda_3> *param_7,EParallelForFlags param_8)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FBufferOwner *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FBlockContext *pFVar9;
  int iVar10;
  TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>
  local_c8;
  <lambda_3> local_b8;
  <lambda_2> local_98;
  FBlockContext local_58;
  
  if (0 < param_3) {
    uVar7 = ParallelForImpl::GetNumberOfThreadTasks(param_3,param_4,param_8);
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    pFVar9 = (FBlockContext *)(param_2->AllocatorInstance).Data;
    piVar1 = &param_2->ArrayMax;
    if (*piVar1 < (int)uVar7) {
      DestructItems<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext,int>
                (pFVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar7,&param_2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext,int>
                (pFVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
    }
    iVar10 = 0;
    if (0 < (int)uVar7) {
      do {
        pFVar9 = `UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_1>::
                 operator()(param_5,&local_58,iVar10,uVar7);
        iVar8 = param_2->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar8 + 1;
        pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x18;
        pFVar3 = (pFVar9->RawBlockCopy).Owner.Owner;
        (pFVar9->RawBlockCopy).Owner.Owner = (FBufferOwner *)0x0;
        *(FBufferOwner **)pFVar2 = pFVar3;
        uVar5 = (pFVar9->CompressedBlocksView).Size;
        *(void **)(pFVar2 + 8) = (pFVar9->CompressedBlocksView).Data;
        *(ulong64 *)(pFVar2 + 0x10) = uVar5;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                  ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_58);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar7);
    }
    local_c8.DataPtr = (FBlockContext *)(param_2->AllocatorInstance).Data;
    iVar10 = param_2->ArrayNum;
    if ((iVar10 < 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_b8.RawHash = param_7->RawHash;
    local_b8.RawData = param_7->RawData;
    local_b8.BlockContexts = param_7->BlockContexts;
    local_98.__this = param_6->__this;
    local_98.RawHash = param_6->RawHash;
    local_98.RawData = param_6->RawData;
    local_98.RawSize = param_6->RawSize;
    local_98.BlockSize = param_6->BlockSize;
    local_98.CompressedBlocks = param_6->CompressedBlocks;
    local_98.CompressedBlockSizes = param_6->CompressedBlockSizes;
    local_c8.ArrayNum = iVar10;
    ParallelForImpl::
    ParallelForInternal<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext>
              (param_1,param_3,param_4,&local_98,&local_b8,param_8,&local_c8);
  }
  return;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FTracedTask>_> @ 141479e70

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext>_::__l2::FTracedTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext>(wchar_t_const_*,int,int,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,EParallelForFlags,TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>_const_&)_::_2_::FTracedTask>
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
    else if (iVar4 < 0) goto LAB_141479f86;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_141479f86:
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

// StealingPerfTest<10000> @ 14147abd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl Tasks2Tests::StealingPerfTest<10000>(bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  TReferenceControllerBase<1> *pTVar16;
  TSharedRef<LowLevelTasks::FTask,1> *pTVar17;
  ulonglong uVar18;
  uint uVar19;
  TReferenceControllerBase<1> *pTVar20;
  FTask *pFVar21;
  TSharedPtr<LowLevelTasks::FTask,1> *pTVar22;
  ForAnyElementType FVar23;
  TReferenceControllerBase<1> *pTVar24;
  undefined1 local_res10 [8];
  uint local_res18;
  LARGE_INTEGER local_res20;
  ForAnyElementType local_178;
  undefined8 local_170;
  TArray<TAwaitableTask<__int64>,TSizedDefaultAllocator<32>_> local_168;
  TAwaitableTask<void> local_158;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128 [2];
  TSharedPtr<LowLevelTasks::FTask,1> *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  <lambda_3> local_108;
  TSharedRef<LowLevelTasks::FTask,1> local_f8;
  TArrayView<TSharedPtr<LowLevelTasks::FTask,1>,int> local_e8;
  TSharedPtr<LowLevelTasks::FTask,1> local_d8 [9];
  
  if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l6::LOG_Static,
               (FLogCategoryBase *)&LogTemp);
  }
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,10000,&local_178,(int *)&local_170,(int *)((longlong)&local_170 + 4));
  memset(local_178.Data + (longlong)iVar14 * 0x10,0,160000);
  QueryPerformanceCounter(&local_res20);
  dVar7 = __real_4170000000000000;
  uVar15 = (ulonglong)(int)(uint)local_170;
  pTVar22 = (TSharedPtr<LowLevelTasks::FTask,1> *)(local_178.Data + uVar15 * 0x10);
  local_res18 = (uint)local_170;
  dVar10 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  uVar18 = uVar15;
  FVar23.Data = local_178.Data;
  while( true ) {
    if ((int)uVar15 != (int)uVar18) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<LowLevelTasks::FTask,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if ((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data == pTVar22) break;
    pTVar16 = ::operator_new(0x50);
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      pFVar21 = (FTask *)&DAT_00000010;
      pTVar16 = pTVar20;
    }
    else {
      pTVar16->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFTask_LowLevelTasks___00_SharedPointerInternals__6B_
      ;
      pTVar16->SharedReferenceCount = (atomic<int>)0x1;
      pTVar16->WeakReferenceCount = (atomic<int>)0x1;
      pTVar16[1]._padding_ = 0;
      pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[2]._padding_ = 0;
      pTVar16[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[3]._padding_ = 0;
      *(undefined ***)&pTVar16[3].SharedReferenceCount =
           &
           ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      pTVar16[4].SharedReferenceCount = (atomic<int>)0x20;
      pTVar16[4].WeakReferenceCount = (atomic<int>)0xe8000000;
      pFVar21 = (FTask *)(pTVar16 + 1);
      pTVar16[4]._padding_ = 0;
      if ((pFVar21 == (FTask *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar24 = pTVar16;
    if ((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data != local_d8) {
      ((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->Object = pFVar21;
      pTVar3 = (((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->SharedReferenceCount).
               ReferenceController;
      if (pTVar16 != pTVar3) {
        (((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->SharedReferenceCount).
        ReferenceController = pTVar16;
        pTVar24 = (TReferenceControllerBase<1> *)0x0;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar3->SharedReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)pTVar3->_padding_)(pTVar3);
            LOCK();
            paVar1 = &pTVar3->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    if ((((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->Object == (FTask *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar16 = (((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->SharedReferenceCount).
              ReferenceController;
    pFVar21 = ((TSharedPtr<LowLevelTasks::FTask,1> *)FVar23.Data)->Object;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((*(ulonglong *)&pFVar21->field_0x38 & 0x20) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                            ,0x1dd,L"State: %d"), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(*(longlong *)&pFVar21->field_0x28 + 0x18))(&pFVar21->field_0x28,pFVar21);
    *(FTask **)&pFVar21->field_0x10 = pFVar21;
    *(undefined ***)&pFVar21->field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(TReferenceControllerBase<1> **)&pFVar21->field_0x18 = pTVar16;
    *(__int64 **)pFVar21 =
         &`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l2::SGarbage;
    *(__int64 **)&pFVar21->field_0x8 =
         &`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l2::STestVal;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40)
    ;
    pTVar16 = pTVar20;
    if (lVar4 != 0) {
      pTVar16 = *(TReferenceControllerBase<1> **)(lVar4 + 0x30);
    }
    *(TReferenceControllerBase<1> **)&pFVar21->field_0x30 = pTVar16;
    *(undefined8 *)&pFVar21->field_0x38 = 0xc800005418697600;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar15 = local_170 & 0xffffffff;
    FVar23.Data = FVar23.Data + 0x10;
    uVar18 = (ulonglong)local_res18;
  }
  pTVar17 = MakeShared<LowLevelTasks::FTask,1>(&local_f8);
  pTVar16 = (pTVar17->SharedReferenceCount).ReferenceController;
  pFVar21 = pTVar17->Object;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if ((pFVar21 == (FTask *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((*(ulonglong *)&pFVar21->field_0x38 & 0x20) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsCompleted()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                          ,0x1dd,L"State: %d"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)(*(longlong *)&pFVar21->field_0x28 + 0x18))(&pFVar21->field_0x28,pFVar21);
  uVar18 = (ulonglong)_tls_index;
  *(undefined ***)&pFVar21->field_0x28 =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(ForAnyElementType **)pFVar21 = &local_178;
  lVar4 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x40);
  pTVar24 = pTVar20;
  if (lVar4 != 0) {
    pTVar24 = *(TReferenceControllerBase<1> **)(lVar4 + 0x30);
  }
  *(TReferenceControllerBase<1> **)&pFVar21->field_0x30 = pTVar24;
  *(undefined8 *)&pFVar21->field_0x38 = 0xc800005418680a00;
  QueryPerformanceCounter(&local_148);
  dVar9 = (double)local_148.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  if ((pFVar21 == (FTask *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar18 = *(ulonglong *)&pFVar21->field_0x38;
  do {
    LOCK();
    uVar15 = *(ulonglong *)&pFVar21->field_0x38;
    bVar13 = uVar18 == uVar15;
    if (bVar13) {
      *(ulonglong *)&pFVar21->field_0x38 = uVar18 | 2;
      uVar15 = uVar18;
    }
    UNLOCK();
    uVar18 = uVar15;
  } while (!bVar13);
  if ((uVar15 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,pFVar21,DefaultPreference,true);
  }
  iVar14 = (uint)local_170;
  local_118 = (TSharedPtr<LowLevelTasks::FTask,1> *)local_178.Data;
  if (((int)(uint)local_170 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_110 = iVar14;
  local_e8._12_4_ = uStack_10c;
  local_e8.ArrayNum = iVar14;
  local_e8.DataPtr = local_118;
  ExpediteOrWaitForTasks(&local_e8);
  if ((pFVar21 == (FTask *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar13 = LowLevelTasks::FTask::TryExpedite(pFVar21);
  if (!bVar13) {
    if ((pFVar21 == (FTask *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar18 = *(ulonglong *)&pFVar21->field_0x38;
    while ((uVar18 & 0x20) == 0) {
      FWindowsPlatformProcess::YieldThread();
      uVar18 = *(ulonglong *)&pFVar21->field_0x38;
    }
  }
  QueryPerformanceCounter(&local_140);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  dVar6 = (double)local_140.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  dVar8 = dVar6 - dVar10;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::
                           _thread_safe_static_guard_1__),
     `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_1__
     == -1)) {
    `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::TotalAvg = dVar8;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::
                         _thread_safe_static_guard_1__);
  }
  dVar12 = __real_3fefae147ae147ae;
  dVar11 = __real_3f847ae147ae147b;
  dVar10 = dVar9 - dVar10;
  `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::TotalAvg =
       dVar8 * __real_3f847ae147ae147b +
       `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::TotalAvg *
       __real_3fefae147ae147ae;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::
       _thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::
                           _thread_safe_static_guard_2__),
     `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_2__
     == -1)) {
    `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::SpawnedAvg = dVar10;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::
                         _thread_safe_static_guard_2__);
  }
  dVar6 = dVar6 - dVar9;
  `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::SpawnedAvg =
       dVar10 * dVar11 +
       `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::SpawnedAvg * dVar12;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::
       _thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::
                           _thread_safe_static_guard_3__),
     `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::_thread_safe_static_guard_3__
     == -1)) {
    `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::EndAvg = dVar6;
    _Init_thread_footer(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::
                         _thread_safe_static_guard_3__);
  }
  `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::EndAvg =
       dVar6 * dVar11 +
       `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l15::EndAvg * dVar12;
  if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l23::LOG_Static,
               (FLogCategoryBase *)&LogTemp);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  DestructItems<TSharedPtr<LowLevelTasks::FTask,1>,int>
            ((TSharedPtr<LowLevelTasks::FTask,1> *)local_178.Data,(uint)local_170);
  if ((TSharedPtr<LowLevelTasks::FTask,1> *)local_178.Data !=
      (TSharedPtr<LowLevelTasks::FTask,1> *)0x0) {
    FMemory::Free(local_178.Data);
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,10000,&local_168.AllocatorInstance,&local_168.ArrayNum,
                      &local_168.ArrayMax);
  DefaultConstructItems<TAwaitableTask<__int64>,int>
            (local_168.AllocatorInstance.Data + (longlong)iVar14 * 0x10,10000);
  QueryPerformanceCounter(&local_138);
  local_158.PromiseVTable.Promise = (FPromiseBase *)0x0;
  local_158.PromiseVTable._padding_ =
       (longlong)&___7__TPromiseVTableDummy_X_AwaitableTask_Detail__6B_;
  local_108.Tasks = &local_168;
  local_108.TestVal = &`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l2::STestVal;
  dVar10 = (double)local_138.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  TAwaitableTask<void>::InitAndLaunch<_Tasks2Tests::StealingPerfTest<10000>_::__l32::<lambda_3>_>
            (&local_158,L"Stealing Awaitable Signal Task",Default,&local_108);
  QueryPerformanceCounter(&local_130);
  dVar9 = (double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  (**(code **)(local_158.PromiseVTable._padding_ + 0x10))();
  pTVar16 = pTVar20;
  while( true ) {
    if ((local_168.ArrayNum <= (int)pTVar20) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) break;
    `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l2::SGarbage =
         (**(code **)(*(longlong *)(local_168.AllocatorInstance.Data + (longlong)pTVar16) + 0x10))()
    ;
    uVar19 = (int)pTVar20 + 1;
    pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)uVar19;
    pTVar16 = pTVar16 + 1;
    if (9999 < (int)uVar19) {
      QueryPerformanceCounter(local_128);
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      dVar7 = (double)local_128[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
      dVar6 = dVar7 - dVar10;
      if ((*(int *)(lVar4 + 0x9d4c) <
           `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
           _thread_safe_static_guard_4__) &&
         (_Init_thread_header(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
                               _thread_safe_static_guard_4__),
         `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
         _thread_safe_static_guard_4__ == -1)) {
        `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::TotalAvg = dVar6;
        _Init_thread_footer(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
                             _thread_safe_static_guard_4__);
      }
      dVar10 = dVar9 - dVar10;
      `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::TotalAvg =
           dVar6 * dVar11 +
           `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::TotalAvg * dVar12;
      if ((*(int *)(lVar4 + 0x9d4c) <
           `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
           _thread_safe_static_guard_5__) &&
         (_Init_thread_header(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
                               _thread_safe_static_guard_5__),
         `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
         _thread_safe_static_guard_5__ == -1)) {
        `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::SpawnedAvg = dVar10;
        _Init_thread_footer(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
                             _thread_safe_static_guard_5__);
      }
      dVar7 = dVar7 - dVar9;
      `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::SpawnedAvg =
           dVar10 * dVar11 +
           `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::SpawnedAvg * dVar12;
      if ((*(int *)(lVar4 + 0x9d4c) <
           `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
           _thread_safe_static_guard_6__) &&
         (_Init_thread_header(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
                               _thread_safe_static_guard_6__),
         `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
         _thread_safe_static_guard_6__ == -1)) {
        `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::EndAvg = dVar7;
        _Init_thread_footer(&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::
                             _thread_safe_static_guard_6__);
      }
      `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::EndAvg =
           dVar7 * dVar11 +
           `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l32::EndAvg * dVar12;
      if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  (&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l38::LOG_Static,
                   (FLogCategoryBase *)&LogTemp);
      }
      (**(code **)(local_158.PromiseVTable._padding_ + 0x30))();
      DestructItems<TAwaitableTask<__int64>,int>
                ((TAwaitableTask<__int64> *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      if ((param_1) && (3 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  (&`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l50::LOG_Static,
                   (FLogCategoryBase *)&LogTemp);
      }
      `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l2::SGarbage =
           `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l2::SGarbage + 1;
      return;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// TransformAccumulate<unsigned___int64,TArrayView<unsigned_int_const_,int>,`UE::CompressedBuffer::Private::FBlockDecoder::TryDecompressTo'::__l2::<lambda_1>,TPlus<void>_> @ 14147b700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl
Algo::
TransformAccumulate<unsigned___int64,TArrayView<unsigned_int_const_,int>,_UE::CompressedBuffer::Private::FBlockDecoder::TryDecompressTo_::__l2::<lambda_1>,TPlus<void>_>
          (TArrayView<unsigned_int_const_,int> *param_1,<lambda_1> param_2,ulong64 param_3,
          TPlus<void> param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong lVar11;
  longlong lVar12;
  
  puVar8 = (ulonglong *)param_1->DataPtr;
  uVar7 = 0;
  puVar1 = (ulonglong *)((longlong)param_1->ArrayNum * 4 + (longlong)puVar8);
  uVar6 = (longlong)param_1->ArrayNum & 0x3fffffffffffffff;
  if (puVar1 < puVar8) {
    uVar6 = uVar7;
  }
  if (((uVar6 != 0) && (3 < uVar6)) && (1 < __isa_available)) {
    lVar11 = 0;
    lVar12 = 0;
    lVar4 = 0;
    lVar5 = 0;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *puVar8;
      uVar7 = uVar7 + 4;
      auVar9 = pshufb(auVar9,___xmm_0c0d0e0f08090a0b0405060700010203);
      auVar9 = pmovzxdq(auVar9,auVar9);
      lVar11 = lVar11 + auVar9._0_8_;
      lVar12 = lVar12 + auVar9._8_8_;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = puVar8[1];
      auVar9 = pshufb(auVar10,___xmm_0c0d0e0f08090a0b0405060700010203);
      puVar8 = puVar8 + 2;
      auVar9 = pmovzxdq(auVar9,auVar9);
      lVar4 = lVar4 + auVar9._0_8_;
      lVar5 = lVar5 + auVar9._8_8_;
    } while (uVar7 != (uVar6 & 0xfffffffffffffffc));
    auVar3._8_4_ = (int)(lVar5 + lVar12);
    auVar3._0_8_ = lVar4 + lVar11;
    auVar3._12_4_ = (int)((ulonglong)(lVar5 + lVar12) >> 0x20);
    param_3 = param_3 + lVar4 + lVar11 + auVar3._8_8_;
  }
  for (; puVar8 != puVar1; puVar8 = (ulonglong *)((longlong)puVar8 + 4)) {
    uVar2 = (uint)*puVar8;
    param_3 = param_3 + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                        uVar2 << 0x18);
  }
  return param_3;
}

// UpperBoundInternal<UE::FIoFileBlockRequest_*_const,int,UE::FIoQueue::FFileOffset,UE::FIoQueue::FFileOffset_(__cdecl*)(UE::FIoFileBlockRequest_const_*),bool_(__cdecl*)(UE::FIoQueue::FFileOffset_const_&,UE::FIoQueue::FFileOffset_const_&)> @ 14147bc40

int __cdecl
AlgoImpl::
UpperBoundInternal<UE::FIoFileBlockRequest_*_const,int,UE::FIoQueue::FFileOffset,UE::FIoQueue::FFileOffset_(__cdecl*)(UE::FIoFileBlockRequest_const_*),bool_(__cdecl*)(UE::FIoQueue::FFileOffset_const_&,UE::FIoQueue::FFileOffset_const_&)>
          (FIoFileBlockRequest **param_1,int param_2,FFileOffset *param_3,
          _func___cdecl_FFileOffset_FIoFileBlockRequest_ptr *param_4,
          _func___cdecl_bool_FFileOffset_ptr_FFileOffset_ptr *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  FFileOffset *pFVar4;
  int iVar5;
  FFileOffset local_58;
  FFileOffset local_40;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      pFVar4 = (*param_4)(&local_40,param_1[iVar1]);
      local_58.FileHandle.Handle._0_4_ = (undefined4)(pFVar4->FileHandle).Handle;
      local_58.FileHandle.Handle._4_4_ = *(undefined4 *)((longlong)&(pFVar4->FileHandle).Handle + 4)
      ;
      local_58.FileOffset._0_4_ = (undefined4)pFVar4->FileOffset;
      local_58.FileOffset._4_4_ = *(undefined4 *)((longlong)&pFVar4->FileOffset + 4);
      local_58.Priority = pFVar4->Priority;
      local_58._20_4_ = *(undefined4 *)&pFVar4->field_0x14;
      bVar3 = (*param_5)(param_3,&local_58);
      if (!bVar3) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// _Atomic_address_as<short,std::_Atomic_padded<unsigned_short>_> @ 14147c0c0

short * __cdecl
std::_Atomic_address_as<short,std::_Atomic_padded<unsigned_short>_>
          (_Atomic_padded<unsigned_short> *param_1)

{
  return (short *)param_1;
}

// _Atomic_address_as<short,std::_Atomic_padded<unsigned_short>_> @ 14147c0d0

short * __cdecl
std::_Atomic_address_as<short,std::_Atomic_padded<unsigned_short>_>
          (_Atomic_padded<unsigned_short> *param_1)

{
  return (short *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_EIoErrorCode>_> @ 14147c0e0

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_EIoErrorCode>_>
          (_Atomic_padded<EIoErrorCode> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_EIoErrorCode>_> @ 14147c0f0

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_EIoErrorCode>_>
          (_Atomic_padded<EIoErrorCode> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_LowLevelTasks::Private::EWaitState>_> @ 14147c100

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_LowLevelTasks::Private::EWaitState>_>
          (_Atomic_padded<LowLevelTasks::Private::EWaitState> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_LowLevelTasks::Private::EWaitState>_> @ 14147c110

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_LowLevelTasks::Private::EWaitState>_>
          (_Atomic_padded<LowLevelTasks::Private::EWaitState> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_ENamedThreads::Type>_> @ 14147c120

/* WARNING: Enum "Type": Some values do not have unique names */

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_ENamedThreads::Type>_>
          (_Atomic_padded<ENamedThreads::Type> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<long,std::_Atomic_padded<enum_EIoErrorCode>_> @ 14147c130

long * __cdecl
std::_Atomic_address_as<long,std::_Atomic_padded<enum_EIoErrorCode>_>
          (_Atomic_padded<EIoErrorCode> *param_1)

{
  return (long *)param_1;
}

// _Atomic_address_as<long,std::_Atomic_padded<enum_LowLevelTasks::Private::EWaitState>_> @ 14147c140

long * __cdecl
std::_Atomic_address_as<long,std::_Atomic_padded<enum_LowLevelTasks::Private::EWaitState>_>
          (_Atomic_padded<LowLevelTasks::Private::EWaitState> *param_1)

{
  return (long *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FHazardPointerCollection::FHazardRecordChunk_*>_> @ 14147c150

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<FHazardPointerCollection::FHazardRecordChunk_*>_>
          (_Atomic_padded<FHazardPointerCollection::FHazardRecordChunk_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>_> @ 14147c160

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>_>
          (_Atomic_padded<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>_> @ 14147c170

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>_>
          (_Atomic_padded<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FChaosMode::FState_*>_> @ 14147c180

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FChaosMode::FState_*>_>
          (_Atomic_padded<FChaosMode::FState_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FChaosMode::FState_*>_> @ 14147c190

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FChaosMode::FState_*>_>
          (_Atomic_padded<FChaosMode::FState_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FAAArrayQueue<LowLevelTasks::FTask>::Node_*>_> @ 14147c1a0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FAAArrayQueue<LowLevelTasks::FTask>::Node_*>_>
          (_Atomic_padded<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FAAArrayQueue<LowLevelTasks::FTask>::Node_*>_> @ 14147c1b0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FAAArrayQueue<LowLevelTasks::FTask>::Node_*>_>
          (_Atomic_padded<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::ParkingLot::Private::FBucket_*>_> @ 14147c1c0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::ParkingLot::Private::FBucket_*>_>
          (_Atomic_padded<UE::ParkingLot::Private::FBucket_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::ParkingLot::Private::FBucket_*>_> @ 14147c1d0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::ParkingLot::Private::FBucket_*>_>
          (_Atomic_padded<UE::ParkingLot::Private::FBucket_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::ParkingLot::Private::FTable_*>_> @ 14147c1e0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::ParkingLot::Private::FTable_*>_>
          (_Atomic_padded<UE::ParkingLot::Private::FTable_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::ParkingLot::Private::FTable_*>_> @ 14147c1f0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::ParkingLot::Private::FTable_*>_>
          (_Atomic_padded<UE::ParkingLot::Private::FTable_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<LowLevelTasks::FTask_*>_> @ 14147c200

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<LowLevelTasks::FTask_*>_>
          (_Atomic_padded<LowLevelTasks::FTask_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<LowLevelTasks::FTask_*>_> @ 14147c210

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<LowLevelTasks::FTask_*>_>
          (_Atomic_padded<LowLevelTasks::FTask_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FThread_*>_> @ 14147c220

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FThread_*>_>(_Atomic_padded<FThread_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>_> @ 14147c230

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>_>
          (_Atomic_padded<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>_> @ 14147c240

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>_>
          (_Atomic_padded<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<void_*>_> @ 14147c250

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<void_*>_>(_Atomic_padded<void_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<void_*>_> @ 14147c260

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<void_*>_>(_Atomic_padded<void_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TStatIdData_const_*>_> @ 14147c270

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<TStatIdData_const_*>_>
          (_Atomic_padded<TStatIdData_const_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<void_const_*>_> @ 14147c280

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<void_const_*>_>
          (_Atomic_padded<void_const_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<void_const_*>_> @ 14147c290

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<void_const_*>_>
          (_Atomic_padded<void_const_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<FMinimalName>_> @ 14147c2a0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<FMinimalName>_>
          (_Atomic_padded<FMinimalName> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<int,enum_EIoErrorCode> @ 14147c2b0

int __cdecl std::_Atomic_reinterpret_as<int,enum_EIoErrorCode>(EIoErrorCode *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<int,enum_LowLevelTasks::Private::EWaitState> @ 14147c2c0

int __cdecl
std::_Atomic_reinterpret_as<int,enum_LowLevelTasks::Private::EWaitState>(EWaitState *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<long,enum_EIoErrorCode> @ 14147c2d0

long __cdecl std::_Atomic_reinterpret_as<long,enum_EIoErrorCode>(EIoErrorCode *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<long,enum_LowLevelTasks::Private::EWaitState> @ 14147c2e0

long __cdecl
std::_Atomic_reinterpret_as<long,enum_LowLevelTasks::Private::EWaitState>(EWaitState *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<__int64,UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*> @ 14147c2f0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,FChaosMode::FState_*> @ 14147c300

long64 __cdecl std::_Atomic_reinterpret_as<__int64,FChaosMode::FState_*>(FState **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,FAAArrayQueue<LowLevelTasks::FTask>::Node_*> @ 14147c310

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,FAAArrayQueue<LowLevelTasks::FTask>::Node_*>(Node **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,UE::ParkingLot::Private::FBucket_*> @ 14147c320

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,UE::ParkingLot::Private::FBucket_*>(FBucket **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,UE::ParkingLot::Private::FTable_*> @ 14147c330

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,UE::ParkingLot::Private::FTable_*>(FTable **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,LowLevelTasks::FTask_*> @ 14147c340

long64 __cdecl std::_Atomic_reinterpret_as<__int64,LowLevelTasks::FTask_*>(FTask **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,FThread_*> @ 14147c350

long64 __cdecl std::_Atomic_reinterpret_as<__int64,FThread_*>(FThread **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*> @ 14147c360

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>
          (TLocalQueue **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,void_*> @ 14147c370

long64 __cdecl std::_Atomic_reinterpret_as<__int64,void_*>(void **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,void_const_*> @ 14147c380

long64 __cdecl std::_Atomic_reinterpret_as<__int64,void_const_*>(void **param_1)

{
  return (long64)*param_1;
}

// __builtin_array_init_helper<std::atomic<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>_> @ 14147c390

void __cdecl
__builtin_array_init_helper<std::atomic<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>_>
          (atomic<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*> *param_1,
          ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 8);
    return;
  }
  return;
}

// __builtin_array_init_helper<LowLevelTasks::LocalQueue_Impl::TWorkStealingQueueBase2<1024>::FAlignedElement> @ 14147c3b0

void __cdecl
__builtin_array_init_helper<LowLevelTasks::LocalQueue_Impl::TWorkStealingQueueBase2<1024>::FAlignedElement>
          (FAlignedElement *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    param_1->Value = (atomic<unsigned___int64>)0x0;
    param_1 = param_1 + 1;
  }
  return;
}

// __builtin_array_init_helper<FHazardPointerCollection::FHazardRecord> @ 14147c3e0

void __cdecl
__builtin_array_init_helper<FHazardPointerCollection::FHazardRecord>
          (FHazardRecord *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined8 *)&param_1->field_0x8 = 0;
    *(undefined8 *)&param_1->field_0x10 = 0;
    *(undefined8 *)&param_1->field_0x18 = 0;
    *(undefined8 *)&param_1->field_0x20 = 0;
    *(undefined8 *)&param_1->field_0x28 = 0;
    *(undefined8 *)&param_1->field_0x30 = 0;
    *(undefined8 *)&param_1->field_0x38 = 0;
    *(undefined8 *)&param_1->field_0x40 = 0;
    *(undefined8 *)&param_1->field_0x48 = 0;
    *(undefined8 *)&param_1->field_0x50 = 0;
    *(undefined8 *)&param_1->field_0x58 = 0;
    *(undefined8 *)&param_1->field_0x60 = 0;
    *(undefined8 *)&param_1->field_0x68 = 0;
    *(undefined8 *)&param_1->field_0x70 = 0;
    *(undefined8 *)&param_1->field_0x78 = 0;
    param_1->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
    param_1 = param_1 + 1;
  }
  return;
}

// ~TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::Finish> @ 141480020

void __thiscall
LowLevelTasks::
TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::Finish>
::
~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::BasicPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::BasicPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>::Finish>
          (void *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)pvVar3 + 0x50);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x20) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x204,L"State: %d");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (**(code **)(*(longlong *)((longlong)pvVar3 + 0x30) + 0x18))
                ((longlong)pvVar3 + 0x30,(longlong)pvVar3 + 8);
      ::operator_delete(pvVar3,0x58);
    }
  }
  return;
}

// ~TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::Finish> @ 1414800b0

void __thiscall
LowLevelTasks::
TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::Finish>
::
~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>::Finish>
          (void *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)pvVar3 + 0x50);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x20) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x204,L"State: %d");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (**(code **)(*(longlong *)((longlong)pvVar3 + 0x30) + 0x18))
                ((longlong)pvVar3 + 0x30,(longlong)pvVar3 + 8);
      ::operator_delete(pvVar3,0x58);
    }
  }
  return;
}

// ~TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::Finish> @ 141480140

void __thiscall
LowLevelTasks::
TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::Finish>
::
~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_1>_>::Finish>
          (void *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)pvVar3 + 0x50);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x20) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x204,L"State: %d");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (**(code **)(*(longlong *)((longlong)pvVar3 + 0x30) + 0x18))
                ((longlong)pvVar3 + 0x30,(longlong)pvVar3 + 8);
      ::operator_delete(pvVar3,0x58);
    }
  }
  return;
}

// ~TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::Finish> @ 1414801d0

void __thiscall
LowLevelTasks::
TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::Finish>
::
~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_2>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_2>_>::Finish>
          (void *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)pvVar3 + 0x50);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x20) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x204,L"State: %d");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (**(code **)(*(longlong *)((longlong)pvVar3 + 0x30) + 0x18))
                ((longlong)pvVar3 + 0x30,(longlong)pvVar3 + 8);
      ::operator_delete(pvVar3,0x58);
    }
  }
  return;
}

// ~TFunction_OwnedObject<`LowLevelTasks::FScheduler::CreateWorker'::__l2::<lambda_1>,1,1> @ 141480280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LowLevelTasks::FScheduler::CreateWorker'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_LowLevelTasks::FScheduler::CreateWorker_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LowLevelTasks::FScheduler::CreateWorker'::`2'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::__l2::<lambda_1>,1,0> @ 1414802a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Color::GetColorDecodeFunction'::__l2::<lambda_1>,0,1> @ 1414802c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Color::GetColorDecodeFunction'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UE::Color::GetColorDecodeFunction_::__l2::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Color::GetColorDecodeFunction'::`2'::<lambda_1>,0,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001414802e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Color::GetColorEncodeFunction'::__l2::<lambda_1>,0,1> @ 1414802f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Color::GetColorEncodeFunction'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UE::Color::GetColorEncodeFunction_::__l2::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Color::GetColorEncodeFunction'::`2'::<lambda_1>,0,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000141480313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`AnyTaskCompleted'::__l9::<lambda_1>,1,0> @ 141480320

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`AnyTaskCompleted'::__l9::<lambda_1>,1,0>::
~TFunction_OwnedObject<_AnyTaskCompleted_::__l9::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`AnyTaskCompleted'::`9'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_2>,0,1> @ 141480340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_2>,0,1>::
~TFunction_OwnedObject<_LowLevelTasks::FScheduler::StartWorkers_::__l27::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::`27'::<lambda_2>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_3>,0,1> @ 141480360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_3>,0,1>::
~TFunction_OwnedObject<_LowLevelTasks::FScheduler::StartWorkers_::__l27::<lambda_3>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::`27'::<lambda_3>,0,1>::
        _vftable_;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 1414805b0

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksBasic_::__l5::<lambda_1>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(longlong **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x20) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x20,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar4[3] = puVar3[3];
  }
  else {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar2[3] = puVar3[3];
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 141480680

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_Tasks2Tests::BasicPerfTest<10000>_::__l19::<lambda_1>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(longlong **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x20) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x20,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    puVar4[3] = puVar3[3];
  }
  else {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2[3] = puVar3[3];
  }
  puVar3[3] = 0;
  puVar3[2] = 0;
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 141480740

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_Tasks2Tests::StealingPerfTest<10000>_::__l19::<lambda_1>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(longlong **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x20) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x20,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    puVar4[3] = puVar3[3];
  }
  else {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2[3] = puVar3[3];
  }
  puVar3[3] = 0;
  puVar3[2] = 0;
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 141480800

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksBasic_::__l5::<lambda_2>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(longlong **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x20) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x20,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar4[3] = puVar3[3];
  }
  else {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar2[3] = puVar3[3];
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 1414808d0

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_Tasks2Tests::FTasksUnitTests2::RunTest_::__l42::<lambda_2>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(longlong **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x18) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`42'::<lambda_2>_>'::`13'::<lambda_1>,1>
                 ::_vftable_;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x18,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
  }
  else {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`42'::<lambda_2>_>'::`13'::<lambda_1>,0>
                 ::_vftable_;
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
  }
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 141480980

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

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
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::FBlockContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::FBlockContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// operator<< @ 1414821a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FCompressedBuffer *param_2)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FCompressedBuffer *pFVar6;
  FArchive *pFVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  FCompressedBuffer local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((param_1->field_0x28 & 1) == 0) {
    if (((param_1->field_0x28 & 4) == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsSaving()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
                           ,0x452,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FArchive *)(*pcVar4)();
      return pFVar7;
    }
    if (((param_2->CompressedData).Segments.ArrayNum == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("!CompressedData.IsNull()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
                           ,0x453,L"Serializing a null compressed buffer is not supported."), bVar5)
       ) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FArchive *)(*pcVar4)();
      return pFVar7;
    }
    FVar2 = (param_2->CompressedData).Segments.AllocatorInstance.SecondaryData;
    iVar1 = (param_2->CompressedData).Segments.ArrayNum;
    if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
      param_2 = (FCompressedBuffer *)FVar2;
    }
    if ((iVar1 < 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FArchive *)(*pcVar4)();
      return pFVar7;
    }
    FVar2 = (ForElementType<FSharedBuffer>)((longlong)param_2 + (longlong)iVar1 * 8);
    for (; (ForElementType<FSharedBuffer>)param_2 != FVar2;
        param_2 = (FCompressedBuffer *)((longlong)param_2 + 8)) {
      plVar3 = *(longlong **)param_2;
      pcVar4 = *(code **)(*(longlong *)param_1 + 0x188);
      if (plVar3 == (longlong *)0x0) {
        lVar9 = 0;
      }
      else {
        if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        lVar9 = plVar3[2];
      }
      plVar3 = *(longlong **)param_2;
      if (plVar3 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        lVar8 = plVar3[1];
      }
      (*pcVar4)(param_1,lVar8,lVar9);
    }
  }
  else {
    pFVar6 = FCompressedBuffer::Load(&local_48,param_1);
    FCompositeBuffer::operator=(&param_2->CompressedData,&pFVar6->CompressedData);
    FCompositeBuffer::~FCompositeBuffer(&local_48.CompressedData);
  }
  return param_1;
}

// operator() @ 141482ac0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

long64 __thiscall
``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>::
operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  long64 lVar3;
  long64 lVar4;
  longlong local_res8;
  TAwaitableTask<__int64> local_28;
  TAwaitableTask<__int64> local_18;
  
  lVar1 = **(longlong **)this;
  if (`void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l2::STheshold < lVar1) {
    local_18.PromiseVTable.Promise = (FPromiseBase *)0x0;
    local_28.PromiseVTable.Promise = (FPromiseBase *)0x0;
    local_18.PromiseVTable._padding_ =
         (longlong)&___7__TPromiseVTableDummy__J_AwaitableTask_Detail__6B_;
    local_28.PromiseVTable._padding_ =
         (longlong)&___7__TPromiseVTableDummy__J_AwaitableTask_Detail__6B_;
    local_res8 = lVar1;
    TAwaitableTask<__int64>::
    InitAndLaunch<__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_1>_>
              (&local_18,L"Awaitable Fibonacci Test1",Default,(<lambda_1> *)&local_res8);
    local_res8 = lVar1;
    TAwaitableTask<__int64>::
    InitAndLaunch<__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_2>_>
              (&local_28,L"Awaitable Fibonacci Test2",Default,(<lambda_2> *)&local_res8);
    lVar1 = (**(code **)(local_28.PromiseVTable._padding_ + 0x10))();
    lVar2 = (**(code **)(local_18.PromiseVTable._padding_ + 0x10))();
    (**(code **)(local_28.PromiseVTable._padding_ + 0x30))();
    (**(code **)(local_18.PromiseVTable._padding_ + 0x30))();
    return lVar1 + lVar2;
  }
  if (2 < lVar1) {
    lVar3 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::Fibonacci(lVar1 + -2);
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::Fibonacci(lVar1 + -1);
    return lVar3 + lVar4;
  }
  return 1;
}

// operator() @ 141482bc0

void __thiscall `AnyTaskCompleted'::__l9::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *this_00;
  longlong *plVar4;
  undefined8 *puVar5;
  atomic<unsigned_int> *paVar6;
  atomic<unsigned_int> *paVar7;
  
  this_00 = (FTaskBase *)**(undefined8 **)this;
  if (this_00 == (FTaskBase *)0x0) {
    paVar6 = (atomic<unsigned_int> *)&DAT_00000030;
  }
  else {
    paVar6 = &this_00->RefCount;
    LOCK();
    *paVar6 = (atomic<unsigned_int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  paVar7 = &this_00->RefCount;
  LOCK();
  piVar1 = (int *)(*(longlong *)this + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == *(int *)((longlong)this + 8)) {
    if (this_00->ExtendedPriority == TaskEvent) {
      LOCK();
      *paVar6 = (atomic<unsigned_int>)((int)*paVar6 + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  }
  else if ((iVar2 == 1) && (plVar4 = *(longlong **)this, plVar4 != (longlong *)0x0)) {
    puVar5 = (undefined8 *)*plVar4;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    ::operator_delete(plVar4,0x10);
  }
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    aVar3 = *paVar7;
    *paVar7 = (atomic<unsigned_int>)((int)*paVar7 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return;
}

// operator() @ 1414839e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall `Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  <lambda_1> local_res10;
  
  iVar4 = 0;
  lVar5 = 0;
  do {
    plVar1 = *(longlong **)this;
    if ((int)plVar1[1] <= iVar4) {
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
    local_res10.TestVal = *(long64 **)((longlong)this + 8);
    TAwaitableTask<__int64>::
    InitAndLaunch<__Tasks2Tests::BasicPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>
              ((TAwaitableTask<__int64> *)(*plVar1 + lVar5),L"Simple Awaitable Perf Test",Default,
               &local_res10);
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + 0x10;
  } while (iVar4 < 10000);
  return;
}

// operator() @ 141483a90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall `Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  <lambda_1> local_res10;
  
  iVar4 = 0;
  lVar5 = 0;
  do {
    plVar1 = *(longlong **)this;
    if ((int)plVar1[1] <= iVar4) {
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
    local_res10.TestVal = *(long64 **)((longlong)this + 8);
    TAwaitableTask<__int64>::
    InitAndLaunch<__Tasks2Tests::StealingPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>
              ((TAwaitableTask<__int64> *)(*plVar1 + lVar5),L"Stealing Awaitable Perf Test",Default,
               &local_res10);
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + 0x10;
  } while (iVar4 < 10000);
  return;
}

// operator() @ 141483b40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall `Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  <lambda_1> local_res10 [8];
  
  iVar4 = 0;
  lVar5 = 0;
  do {
    plVar1 = *(longlong **)this;
    if ((int)plVar1[1] <= iVar4) {
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
    TAwaitableTask<void>::
    InitAndLaunch<__Tasks2Tests::EmptyPerfTest<10000>_::__l47::<lambda_4>::operator()_::__l5::<lambda_1>_>
              ((TAwaitableTask<void> *)(*plVar1 + lVar5),L"Empty Awaitable Perf Test",Default,
               local_res10);
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + 0x10;
  } while (iVar4 < 10000);
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 141484284

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::FGenericPlatformIoDispatcher::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::FGenericPlatformIoDispatcher::_vector_deleting_destructor__adjustor_8__
          (FGenericPlatformIoDispatcher *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FGenericPlatformIoDispatcher *)&this[-1].WakeUpEvent,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 141484294

/* [thunk]:public: virtual void * __ptr64 __cdecl FNamedTaskThread::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FNamedTaskThread::_vector_deleting_destructor__adjustor_8__(FNamedTaskThread *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FNamedTaskThread *)&this[-1].Queues[1].field_0x178,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1414842a4

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::FPlatformIoDispatcherBase::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::FPlatformIoDispatcherBase::_vector_deleting_destructor__adjustor_8__
          (FPlatformIoDispatcherBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPlatformIoDispatcherBase *)&this[-1].bMultithreaded,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1414842b4

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FTaskThreadBase::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FTaskThreadBase::_vector_deleting_destructor__adjustor_8__(FTaskThreadBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FTaskThreadBase *)&this[-1].OwnerWorker,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1414842d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484300

void * __thiscall
IBaseDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484330

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484360

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484390

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1414843c0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(float),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1414843f0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FTaskGraphCompatibilityImplementation::TriggerEventWhenTasksComplete'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 141484460

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'::__l12::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 1414844d0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FTaskGraphCompatibilityImplementation::TriggerEventWhenTasksComplete'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484510

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'::__l12::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484550

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<float_(__cdecl*)(float),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<float_(__cdecl*)(float),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AMM_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LowLevelTasks::FScheduler::CreateWorker'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LowLevelTasks::FScheduler::CreateWorker'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1414845d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Color::GetColorDecodeFunction'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Color::GetColorDecodeFunction'::`2'::<lambda_1>,0,1>::_vftable_;
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

// `scalar_deleting_destructor' @ 141484670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Color::GetColorEncodeFunction'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Color::GetColorEncodeFunction'::`2'::<lambda_1>,0,1>::_vftable_;
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

// `scalar_deleting_destructor' @ 1414846d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`AnyTaskCompleted'::__l9::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`AnyTaskCompleted'::`9'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::`27'::<lambda_2>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_3>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::`27'::<lambda_3>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484790

void * __thiscall
TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::_scalar_deleting_destructor_
          (TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1414847f0

void * __thiscall
TGraphTask<FAsyncGraphTask>::_scalar_deleting_destructor_
          (TGraphTask<FAsyncGraphTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484850

void * __thiscall
TGraphTask<FBroadcastTask>::_scalar_deleting_destructor_
          (TGraphTask<FBroadcastTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1414848b0

void * __thiscall
TGraphTask<FReturnGraphTask>::_scalar_deleting_destructor_
          (TGraphTask<FReturnGraphTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484910

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'::__l2::FSharedData,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484950

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<LowLevelTasks::FTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<LowLevelTasks::FTask,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484990

void * __thiscall
SharedPointerInternals::TReferenceControllerBase<1>::_scalar_deleting_destructor_
          (TReferenceControllerBase<1> *this,uint param_1)

{
  this->_padding_ = (longlong)vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1414849d0

void * __thiscall
TThreadSingleton<FMemStack>::_scalar_deleting_destructor_
          (TThreadSingleton<FMemStack> *this,uint param_1)

{
  ~TThreadSingleton<FMemStack>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484a10

void * __thiscall
FAutoConsoleVariableRef::_scalar_deleting_destructor_(FAutoConsoleVariableRef *this,uint param_1)

{
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484a60

void * __thiscall FBaseGraphTask::_scalar_deleting_destructor_(FBaseGraphTask *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484aa0

void * __thiscall
UE::FGenericPlatformIoDispatcher::_scalar_deleting_destructor_
          (FGenericPlatformIoDispatcher *this,uint param_1)

{
  longlong *plVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__UE__IPlatformIoDispatcher__;
  LOCK();
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  UNLOCK();
  if (this->_padding_ != 0) {
    (**(code **)(((this->WakeUpEvent).Event)->_padding_ + 0x10))();
    plVar1 = (longlong *)this->_padding_;
    if (plVar1 != (longlong *)0x0) {
      this->_padding_ = 0;
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
  }
  FEventRef::~FEventRef(&this->WakeUpEvent);
  FPlatformIoDispatcherBase::~FPlatformIoDispatcherBase((FPlatformIoDispatcherBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484b50

void * __thiscall FGraphEventImpl::_scalar_deleting_destructor_(FGraphEventImpl *this,uint param_1)

{
  TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
  *this_00;
  
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      this_00 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                 *)GetGraphEventImplAllocator();
      TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free(this_00,this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484bb0

void * __thiscall
UE::FIoServiceThread::_scalar_deleting_destructor_(FIoServiceThread *this,uint param_1)

{
  FRunnableThread *pFVar1;
  
  pFVar1 = (this->Thread).Ptr;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  FEventRef::~FEventRef(&this->WakeUpEvent);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484c10

void * __thiscall FMemStack::_scalar_deleting_destructor_(FMemStack *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((!GIsCriticalError) && (*(int *)&this->field_0x30 != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  FMemStackBase::FreeChunks((FMemStackBase *)&this->field_0x10,(FTaggedMemory *)0x0);
  TThreadSingleton<FMemStack>::~TThreadSingleton<FMemStack>((TThreadSingleton<FMemStack> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484ca0

void * __thiscall
FNamedTaskThread::_scalar_deleting_destructor_(FNamedTaskThread *this,uint param_1)

{
  FGenericPlatformProcess::ReturnSynchEventToPool(this->Queues[1].StallRestartEvent);
  this->Queues[1].StallRestartEvent = (FEvent *)0x0;
  _vector_destructor_iterator_
            (this->Queues + 1,0x80,2,
             FLockFreePointerFIFOBase<FBaseGraphTask,64,1>::
             ~FLockFreePointerFIFOBase<FBaseGraphTask,64,1>);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->Queues[0].StallRestartEvent);
  this->Queues[0].StallRestartEvent = (FEvent *)0x0;
  _vector_destructor_iterator_
            (this->Queues,0x80,2,
             FLockFreePointerFIFOBase<FBaseGraphTask,64,1>::
             ~FLockFreePointerFIFOBase<FBaseGraphTask,64,1>);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x340,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484d70

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
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
       &ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::FBlockContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext>_::__l2::FTracedTask,int>
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

// `scalar_deleting_destructor' @ 141484e80

void * __thiscall
UE::FPlatformIoDispatcherBase::_scalar_deleting_destructor_
          (FPlatformIoDispatcherBase *this,uint param_1)

{
  ~FPlatformIoDispatcherBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x450);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484ec0

void * __thiscall FRunnable::_scalar_deleting_destructor_(FRunnable *this,uint param_1)

{
  *this = (FRunnable)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484f00

void * __thiscall
FSingleThreadRunnable::_scalar_deleting_destructor_(FSingleThreadRunnable *this,uint param_1)

{
  *this = (FSingleThreadRunnable)&___7FSingleThreadRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484f40

void * __thiscall
UE::Tasks::Private::FTaskBase::_scalar_deleting_destructor_(FTaskBase *this,uint param_1)

{
  ~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484f80

void * __thiscall
FTaskGraphCompatibilityImplementation::_scalar_deleting_destructor_
          (FTaskGraphCompatibilityImplementation *this,uint param_1)

{
  ~FTaskGraphCompatibilityImplementation(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141484fe0

void * __thiscall
FTaskGraphInterface::_scalar_deleting_destructor_(FTaskGraphInterface *this,uint param_1)

{
  *this = (FTaskGraphInterface)&___7FTaskGraphInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141485020

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FTaskThreadBase::_scalar_deleting_destructor_(FTaskThreadBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NewTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141485080

void * __thiscall
FThreadSafeRefCountedObject::_scalar_deleting_destructor_
          (FThreadSafeRefCountedObject *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1414850f0

void * __thiscall FTlsAutoCleanup::_scalar_deleting_destructor_(FTlsAutoCleanup *this,uint param_1)

{
  *this = (FTlsAutoCleanup)&___7FTlsAutoCleanup__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141485130

void * __thiscall
UE::Core::Private::Function::IFunction_OwnedObject::_scalar_deleting_destructor_
          (IFunction_OwnedObject *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141485160

void * __thiscall
UE::IPlatformIoDispatcher::_scalar_deleting_destructor_(IPlatformIoDispatcher *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AnyTaskCompleted @ 141486b10

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __cdecl
AnyTaskCompleted(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FTaskBase *this;
  longlong lVar5;
  longlong *plVar6;
  longlong in_RDX;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  code *local_68 [2];
  undefined **local_58;
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  
  piVar1 = (int *)(in_RDX + 0x28);
  if (*(int *)(in_RDX + 0x28) != 0) {
    plVar6 = operator_new(0x10);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar4 = *piVar1;
      FBaseGraphTask::CreateGraphEvent();
      *(int *)(plVar6 + 1) = iVar4;
    }
    (param_1->AllocatorInstance).InlineData[0] = '\0';
    (param_1->AllocatorInstance).InlineData[1] = '\0';
    (param_1->AllocatorInstance).InlineData[2] = '\0';
    (param_1->AllocatorInstance).InlineData[3] = '\0';
    (param_1->AllocatorInstance).InlineData[4] = '\0';
    (param_1->AllocatorInstance).InlineData[5] = '\0';
    (param_1->AllocatorInstance).InlineData[6] = '\0';
    (param_1->AllocatorInstance).InlineData[7] = '\0';
    lVar5 = *plVar6;
    *(longlong *)(param_1->AllocatorInstance).InlineData = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
      UNLOCK();
    }
    iVar4 = *piVar1;
    if (*(longlong *)(in_RDX + 0x20) != 0) {
      in_RDX = *(longlong *)(in_RDX + 0x20);
    }
    lVar5 = in_RDX + (longlong)iVar4 * 8;
    while( true ) {
      if (*piVar1 != iVar4) {
        `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (in_RDX == lVar5) break;
      local_48 = *piVar1;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`AnyTaskCompleted'::__l9::<lambda_1>,void>::Call;
      local_40 = 0;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`AnyTaskCompleted'::`9'::<lambda_1>,1,0>::_vftable_;
      local_50 = plVar6;
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)&local_res18,(TStatIdData *)local_68,
                 (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)in_RDX);
      if (local_res18 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_res18 + 6);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*local_res18)(local_res18,1);
        }
      }
      in_RDX = in_RDX + 8;
    }
    return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
  }
  FBaseGraphTask::CreateGraphEvent();
  this = *(FTaskBase **)(param_1->AllocatorInstance).InlineData;
  if (this->ExtendedPriority == TaskEvent) {
    LOCK();
    this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this,0);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// AsyncTask @ 141486e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl AsyncTask(Type param_1,TUniqueFunction<void___cdecl(void)> *param_2)

{
  FMutex *this;
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_char> aVar2;
  atomic<unsigned_int> aVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FTaskBase *this_00;
  longlong *plVar9;
  EExtendedTaskPriority local_18;
  ETaskPriority local_17 [15];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,1,false);
    this_00->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
    this = &(this_00->Prerequisites).Mutex;
    LOCK();
    aVar2 = this->State;
    this->State = (atomic<unsigned_char>)((char)this->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this);
    }
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFAsyncGraphTask____6B_;
  }
  *(Type *)&this_00[1]._padding_ = param_1;
  this_00[1]._padding_ = *(longlong *)param_2;
  uVar4 = param_2->field_0x2c;
  uVar5 = param_2->field_0x2d;
  uVar6 = *(undefined2 *)&param_2->field_0x2e;
  this_00[1].StateChangeEvent = (TEventCount<unsigned_int>)*(undefined4 *)&param_2->field_0x28;
  this_00[1].ExtendedPriority = uVar4;
  this_00[1].TaskTriggered = (atomic<bool>)uVar5;
  this_00[1]._padding_ = uVar6;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar7 = *(undefined4 *)&param_2->field_0x18;
  uVar8 = *(undefined4 *)&param_2->field_0x1c;
  this_00[1]._padding_ = *(longlong *)&param_2->field_0x10;
  this_00[1].RefCount = (atomic<unsigned_int>)uVar7;
  this_00[1].NumLocks = (atomic<unsigned_int>)uVar8;
  this_00[1].Pipe = *(FPipe **)&param_2->field_0x20;
  if (this_00[1]._padding_ != 0) {
    *(undefined8 *)param_2 = 0;
  }
  UE::Tasks::Private::TranslatePriority((Type)this_00[1]._padding_,local_17,&local_18);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_17[0],local_18,None);
  if (this_00 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
  }
  else {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x120);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// Completed @ 14148da00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TaskTrace::Completed(ulong64 param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) {
    if (param_1 == 0xffffffffffffffff) {
      param_1 = GenerateTaskId();
    }
    if (-1 < TaskChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceCompletedFields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1].QuadPart = param_1;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// Created @ 14148f680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TaskTrace::Created(ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) {
    if (param_1 == 0xffffffffffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskId != InvalidId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                         ,0x6e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (-1 < TaskChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceCreatedFields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1].QuadPart = param_1;
      local_20[2].QuadPart = param_2;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// Destroyed @ 141492250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TaskTrace::Destroyed(ulong64 param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) && (-1 < TaskChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceDestroyedFields>
              ((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1].QuadPart = param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// EnableRandomizedThreads @ 141492ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl EnableRandomizedThreads(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FState *this;
  FChaosMode FVar2;
  
  FVar2.State = GChaosMode.State;
  if ((GChaosMode.State == (atomic<FChaosMode::FState_*>)0x0) &&
     (this = operator_new(0x2cb38), FVar2.State = (atomic<FChaosMode::FState_*>)0x0,
     this != (FState *)0x0)) {
    FVar2.State = (atomic<FChaosMode::FState_*>)FChaosMode::FState::FState(this);
  }
  GChaosMode.State = FVar2.State;
  iVar1 = *(int *)((longlong)GChaosMode.State + 0x2cb34);
  *(uint *)((longlong)GChaosMode.State + 0x2cb34) = (uint)(iVar1 == 0);
  if (iVar1 == 0) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  return;
}

// EnterWait @ 141493bc0

void __cdecl LowLevelTasks::Private::WaitingQueueImpl::EnterWait(FWaitEvent *param_1)

{
  bool bVar1;
  FEvent *pFVar2;
  bool *pbVar3;
  
  FCpuProfilerTrace::FlushThreadBuffer();
  pbVar3 = FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
  bVar1 = *pbVar3;
  *pbVar3 = false;
  FMemory::MarkTLSCachesAsUnusedOnCurrentThread();
  pFVar2 = (param_1->Event).Event;
  (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0xffffffff,0);
  FMemory::MarkTLSCachesAsUsedOnCurrentThread();
  *pbVar3 = bVar1;
  return;
}

// ExpediteOrWaitForTasks @ 141494e30

void __cdecl
Tasks2Tests::ExpediteOrWaitForTasks(TArrayView<TSharedPtr<LowLevelTasks::FTask,1>,int> *param_1)

{
  FTask *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<LowLevelTasks::FTask,1> *pTVar5;
  TSharedPtr<LowLevelTasks::FTask,1> *pTVar6;
  
  pTVar5 = param_1->DataPtr;
  pTVar6 = pTVar5 + param_1->ArrayNum;
  while( true ) {
    if (pTVar5 == pTVar6) {
      return;
    }
    if ((pTVar5->Object == (FTask *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) break;
    bVar4 = LowLevelTasks::FTask::TryExpedite(pTVar5->Object);
    if (!bVar4) {
      if ((pTVar5->Object == (FTask *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = pTVar5->Object;
      uVar2 = *(ulonglong *)&pFVar1->field_0x38;
      while ((uVar2 & 0x20) == 0) {
        FWindowsPlatformProcess::YieldThread();
        uVar2 = *(ulonglong *)&pFVar1->field_0x38;
      }
    }
    pTVar5 = pTVar5 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Fibonacci @ 141494f00

long64 __cdecl `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(long64 param_1)

{
  long64 lVar1;
  long64 lVar2;
  
  if (2 < param_1) {
    lVar1 = Fibonacci(param_1 + -1);
    lVar2 = Fibonacci(param_1 + -2);
    return lVar2 + lVar1;
  }
  return 1;
}

// Fibonacci @ 141494f50

long64 __cdecl `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::Fibonacci(long64 param_1)

{
  long64 lVar1;
  long64 lVar2;
  
  if (2 < param_1) {
    lVar1 = Fibonacci(param_1 + -1);
    lVar2 = Fibonacci(param_1 + -2);
    return lVar2 + lVar1;
  }
  return 1;
}

// FibonacciTasksBasic @ 141494fa0

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

long64 __cdecl
`Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(long64 param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FTask *this;
  TReferenceControllerBase<1> *pTVar2;
  FTask *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<LowLevelTasks::FTask,1> *pTVar6;
  long64 lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  long64 lVar11;
  undefined8 uVar12;
  longlong local_res8;
  longlong local_res10;
  TSharedRef<LowLevelTasks::FTask,1> local_58;
  TSharedRef<LowLevelTasks::FTask,1> local_48;
  
  if (param_1 <= `void___cdecl_Tasks2Tests::StealingPerfTest<10000>(bool)'::__l2::STheshold) {
    if (2 < param_1) {
      lVar7 = Fibonacci(param_1 + -2);
      lVar11 = Fibonacci(param_1 + -1);
      return lVar7 + lVar11;
    }
    return 1;
  }
  pTVar6 = MakeShared<LowLevelTasks::FTask,1>(&local_58);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  this = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pTVar6 = MakeShared<LowLevelTasks::FTask,1>(&local_48);
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  this_00 = pTVar6->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if ((this == (FTask *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    lVar7 = (*pcVar4)();
    return lVar7;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((*(ulonglong *)&this->field_0x38 & 0x20) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar5)) {
    pcVar4 = (code *)swi(3);
    lVar7 = (*pcVar4)();
    return lVar7;
  }
  (**(code **)(*(longlong *)&this->field_0x28 + 0x18))(&this->field_0x28,this);
  *(FTask **)&this->field_0x8 = this;
  *(undefined ***)&this->field_0x28 =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar1;
  *(longlong **)this = &local_res10;
  *(long64 *)&this->field_0x18 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uVar12 = 0;
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40);
  uVar8 = uVar12;
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)(lVar3 + 0x30);
  }
  *(undefined8 *)&this->field_0x30 = uVar8;
  *(undefined8 *)&this->field_0x38 = 0xc800005418682000;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((this == (FTask *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    lVar7 = (*pcVar4)();
    return lVar7;
  }
  uVar9 = *(ulonglong *)&this->field_0x38;
  do {
    LOCK();
    uVar10 = *(ulonglong *)&this->field_0x38;
    bVar5 = uVar9 == uVar10;
    if (bVar5) {
      *(ulonglong *)&this->field_0x38 = uVar9 | 2;
      uVar10 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar10;
  } while (!bVar5);
  if ((uVar10 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,this,DefaultPreference,true);
  }
  if ((this_00 == (FTask *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    lVar7 = (*pcVar4)();
    return lVar7;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((*(ulonglong *)&this_00->field_0x38 & 0x20) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar5)) {
    pcVar4 = (code *)swi(3);
    lVar7 = (*pcVar4)();
    return lVar7;
  }
  (**(code **)(*(longlong *)&this_00->field_0x28 + 0x18))(&this_00->field_0x28,this_00);
  *(FTask **)&this_00->field_0x8 = this_00;
  *(undefined ***)&this_00->field_0x28 =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(TReferenceControllerBase<1> **)&this_00->field_0x10 = pTVar2;
  *(longlong **)this_00 = &local_res8;
  *(long64 *)&this_00->field_0x18 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40);
  if (lVar3 != 0) {
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
  }
  *(undefined8 *)&this_00->field_0x30 = uVar12;
  *(undefined8 *)&this_00->field_0x38 = 0xc800005418682c00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uVar9 = *(ulonglong *)&this_00->field_0x38;
  do {
    LOCK();
    uVar10 = *(ulonglong *)&this_00->field_0x38;
    bVar5 = uVar9 == uVar10;
    if (bVar5) {
      *(ulonglong *)&this_00->field_0x38 = uVar9 | 2;
      uVar10 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar10;
  } while (!bVar5);
  if ((uVar10 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,this_00,DefaultPreference,true);
  }
  bVar5 = LowLevelTasks::FTask::TryExpedite(this_00);
  if (!bVar5) {
    uVar9 = *(ulonglong *)&this_00->field_0x38;
    while ((uVar9 & 0x20) == 0) {
      FWindowsPlatformProcess::YieldThread();
      uVar9 = *(ulonglong *)&this_00->field_0x38;
    }
  }
  if ((this == (FTask *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    lVar7 = (*pcVar4)();
    return lVar7;
  }
  bVar5 = LowLevelTasks::FTask::TryExpedite(this);
  if (!bVar5) {
    if ((this == (FTask *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      lVar7 = (*pcVar4)();
      return lVar7;
    }
    uVar9 = *(ulonglong *)&this->field_0x38;
    while ((uVar9 & 0x20) == 0) {
      FWindowsPlatformProcess::YieldThread();
      uVar9 = *(ulonglong *)&this->field_0x38;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return local_res8 + local_res10;
}

// Finished @ 1414962f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TaskTrace::Finished(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) {
    if (param_1 == 0xffffffffffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskId != InvalidId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                         ,0xce,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (-1 < TaskChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceFinishedFields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1].QuadPart = param_1;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// GenerateTaskId @ 141496f90

ulong64 __cdecl TaskTrace::GenerateTaskId(void)

{
  code *pcVar1;
  atomic<unsigned___int64> aVar2;
  atomic<unsigned___int64> aVar3;
  ulong64 uVar4;
  bool bVar5;
  
  aVar3 = UId;
  LOCK();
  aVar2 = (atomic<unsigned___int64>)((longlong)UId + 1);
  UNLOCK();
  bVar5 = UId == (atomic<unsigned___int64>)0xffffffffffffffff;
  UId = aVar2;
  if (bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Id != InvalidId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                       ,0x50,L"TraceId overflow");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return (ulong64)aVar3;
}

// GetActiveThreadCount @ 1414974d0

ulong64 __cdecl LowLevelTasks::Private::WaitingQueueImpl::GetActiveThreadCount(ulong64 param_1)

{
  return (ulonglong)((uint)(param_1 >> 0xe) & 0x3fff);
}

// GetGraphEventImplAllocator @ 1414993e0

TLockFreeFixedSizeAllocator_TLSCache<216,64,FNoopCounter> * __cdecl GetGraphEventImplAllocator(void)

{
  code *pcVar1;
  bool bVar2;
  TLockFreeFixedSizeAllocator_TLSCache<216,64,FNoopCounter> *pTVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      Singleton._0_4_ = TlsAlloc();
      if (Singleton._0_4_ == 0xffffffff) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                           ,0x24,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TLockFreeFixedSizeAllocator_TLSCache<216,64,FNoopCounter> *)(*pcVar1)();
          return pTVar3;
        }
      }
      atexit(`GetGraphEventImplAllocator'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&_TSS0);
      return &Singleton;
    }
  }
  return &Singleton;
}

// GetNumberOfThreadTasks @ 1414996e0

int __cdecl
ParallelForImpl::GetNumberOfThreadTasks(int param_1,int param_2,EParallelForFlags param_3)

{
  bool bVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  FTlsValues *pFVar4;
  
  aVar2 = (atomic<unsigned_int>)0x0;
  bVar1 = FApp::ShouldUseThreadingForPerformance();
  if (!bVar1) {
    bVar1 = FForkProcessHelper::IsForkedMultithreadInstance();
    if (!bVar1) goto LAB_141499711;
  }
  bVar1 = true;
LAB_141499711:
  if (((1 < param_1) && ((param_3 & ForceSingleThread) == None)) && (bVar1 != false)) {
    aVar2 = (atomic<unsigned_int>)((param_2 / 2 + param_1) / param_2);
    if ((int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar2) {
      aVar2 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
    }
  }
  pFVar4 = LowLevelTasks::FSchedulerTls::GetTlsValuesRef();
  if ((pFVar4->WorkerType == None) ||
     ((FScheduler *)pFVar4->ActiveScheduler != &LowLevelTasks::FScheduler::Singleton)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  aVar3 = (atomic<unsigned_int>)((int)aVar2 + 1);
  if (bVar1) {
    aVar3 = aVar2;
  }
  aVar2 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  if ((int)aVar3 < (int)aVar2) {
    aVar2 = aVar3;
  }
  aVar3 = (atomic<unsigned_int>)0x1;
  if (1 < (int)aVar2) {
    aVar3 = aVar2;
  }
  return (int)aVar3;
}

// GetTraceIds @ 14149a6d0

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __cdecl
GetTraceIds(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
           TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  int *piVar1;
  int *piVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &param_1->ArrayNum;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar9 = *piVar2;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    uVar9 = *piVar2;
  }
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    param_1 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  FVar3 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
          ((longlong)param_1 + (longlong)(int)uVar9 * 8);
  while( true ) {
    if (*piVar2 != uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1 == FVar3) break;
    if (*(longlong *)param_1 != 0) {
      local_28[0] = *(undefined8 *)(*(longlong *)param_1 + 0x50);
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           local_28[0];
    }
    param_1 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 8);
  }
  return __return_storage_ptr__;
}

// HandleNumWorkerThreadsToIgnore @ 14149ac00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl HandleNumWorkerThreadsToIgnore(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *_Str;
  int iVar5;
  
  iVar2 = GNumWorkerThreadsToIgnore;
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar3 = _wtoi(_Str);
    iVar4 = (**(code **)((longlong)*TaskGraphImplementationSingleton + 0x20))();
    iVar4 = GNumWorkerThreadsToIgnore + iVar4;
    iVar2 = GNumWorkerThreadsToIgnore;
    if (((iVar3 < iVar4) && (-1 < iVar3)) && (iVar3 != GNumWorkerThreadsToIgnore)) {
      iVar2 = iVar3;
      if (GNumWorkerThreadsToIgnore < iVar3) {
        iVar5 = iVar4 - GNumWorkerThreadsToIgnore;
        while (iVar5 = iVar5 + -1, iVar4 - iVar3 <= iVar5) {
          (**(code **)((longlong)*TaskGraphImplementationSingleton + 0x80))
                    (TaskGraphImplementationSingleton,iVar5,1);
        }
      }
      else {
        iVar3 = (iVar4 - iVar3) + -1;
        if (iVar4 - GNumWorkerThreadsToIgnore <= iVar3) {
          do {
            (**(code **)((longlong)*TaskGraphImplementationSingleton + 0x80))
                      (TaskGraphImplementationSingleton,iVar3,0);
            iVar3 = iVar3 + -1;
          } while (iVar4 - GNumWorkerThreadsToIgnore <= iVar3);
        }
      }
    }
  }
  GNumWorkerThreadsToIgnore = iVar2;
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  return;
}

// Init @ 14149bca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TaskTrace::Init(void)

{
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < TaskChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceInitFields>((TLogScope<0> *)&local_28)
    ;
    *local_28 = 0;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  bGTaskTraceInitialized = true;
  if (-1 < CpuChannel->Enabled) {
    ExecuteTaskSpecId =
         (atomic<unsigned_int>)
         FCpuProfilerTrace::OutputEventType
                   ("ExecuteTask",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                    ,0x60);
    LOCK();
    UNLOCK();
  }
  return;
}

// IsPlatformIoDispatcherEnabled @ 14149e1b0

bool __cdecl IsPlatformIoDispatcherEnabled(void)

{
  FIoDispatcherConfig FVar1;
  bool bVar2;
  int iVar3;
  wchar_t *local_res8 [4];
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      local_res8[0] = FCommandLine::Get();
      IoDispatcherConfig.bPlatformIoDispatcherEnabled = false;
      bVar2 = FParse::Param(local_res8[0],L"NoPlatformIo");
      FVar1 = IoDispatcherConfig;
      if (bVar2) {
        IoDispatcherConfig.bPlatformIoDispatcherEnabled = false;
        _Init_thread_footer(&_TSS0);
        return IoDispatcherConfig.bPlatformIoDispatcherEnabled;
      }
      bVar2 = FParse::Param(local_res8[0],L"PlatformIo");
      IoDispatcherConfig.bPlatformIoDispatcherEnabled =
           (bool)(bVar2 | FVar1.bPlatformIoDispatcherEnabled);
      if (IoDispatcherConfig.bPlatformIoDispatcherEnabled == false) {
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        bVar2 = FParse::Value(local_res8[0],L"ExecCmds=",&local_18,false,local_res8);
        if (bVar2) {
          do {
            if (IoDispatcherConfig.bPlatformIoDispatcherEnabled != false) break;
            iVar3 = FString::Find(&local_18,L"s.PlatformIo 1",0xe,IgnoreCase,FromStart,-1);
            IoDispatcherConfig.bPlatformIoDispatcherEnabled = iVar3 != -1;
            bVar2 = FParse::Value(local_res8[0],L"ExecCmds=",&local_18,false,local_res8);
          } while (bVar2);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      _Init_thread_footer(&_TSS0);
      return IoDispatcherConfig.bPlatformIoDispatcherEnabled;
    }
  }
  return IoDispatcherConfig.bPlatformIoDispatcherEnabled;
}

// LZ4_compress @ 14149ec10

int __cdecl LZ4_compress(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if ((uint)param_3 < 0x7e000001) {
    iVar1 = param_3 / 0xff + 0x10 + param_3;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = LZ4_compress_fast(param_1,param_2,param_3,iVar1,1);
  return iVar1;
}

// LZ4_compress_continue @ 14149ec60

int __cdecl LZ4_compress_continue(LZ4_stream_u *param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  
  if ((uint)param_4 < 0x7e000001) {
    iVar1 = param_4 / 0xff + 0x10 + param_4;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = LZ4_compress_fast_continue(param_1,param_2,param_3,param_4,iVar1,1);
  return iVar1;
}

// LZ4_compress_destSize_extState @ 14149ecb0

int __cdecl
LZ4_compress_destSize_extState
          (LZ4_stream_u *param_1,char *param_2,char *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  short *psVar21;
  longlong *plVar22;
  longlong *plVar23;
  int *piVar24;
  int *piVar25;
  ulonglong uVar26;
  short sVar27;
  longlong lVar28;
  longlong *_Src;
  char *pcVar29;
  int local_res18;
  
  if ((param_1 != (LZ4_stream_u *)0x0) && (((ulonglong)param_1 & 7) == 0)) {
    memset(param_1,0,0x4020);
  }
  uVar5 = *param_4;
  iVar6 = 0;
  if (uVar5 < 0x7e000001) {
    iVar15 = (int)uVar5 / 0xff + 0x10 + uVar5;
  }
  else {
    iVar15 = 0;
  }
  if (iVar15 <= param_5) {
    iVar6 = LZ4_compress_fast_extState(param_1,param_2,param_3,uVar5,param_5,1);
    return iVar6;
  }
  iVar14 = (int)param_2;
  local_res18 = (int)param_3;
  iVar15 = iVar6;
  if ((int)uVar5 < 0x1000b) {
    iVar15 = 0;
    if (uVar5 < 0x7e000001) {
      if (uVar5 == 0) {
        iVar15 = iVar6;
        if (0 < param_5) {
          *param_3 = '\0';
          *param_4 = 0;
          iVar15 = 1;
        }
      }
      else {
        lVar28 = (longlong)param_2 - (ulonglong)(param_1->internal_donotuse).currentOffset;
        pcVar17 = param_3 + param_5;
        iVar15 = iVar6;
        if (0 < param_5) {
          (param_1->internal_donotuse).dictSize = (param_1->internal_donotuse).dictSize + uVar5;
          (param_1->internal_donotuse).currentOffset =
               uVar5 + (param_1->internal_donotuse).currentOffset;
          (param_1->internal_donotuse).tableType = 3;
          piVar24 = (int *)param_2;
          if (0xc < (int)uVar5) {
            sVar27 = (short)lVar28;
            *(short *)((longlong)param_1 +
                      (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) =
                 (short)param_2 - sVar27;
LAB_14149ee1b:
            iVar6 = *(int *)((longlong)piVar24 + 1);
            iVar15 = 0x40;
            iVar20 = 1;
            piVar11 = (int *)((longlong)piVar24 + 1);
            do {
              piVar9 = piVar11;
              uVar26 = (ulonglong)((uint)(iVar6 * -0x61c8864f) >> 0x13);
              lVar10 = (longlong)iVar20;
              iVar20 = iVar15 >> 6;
              piVar11 = (int *)(lVar10 + (longlong)piVar9);
              iVar15 = iVar15 + 1;
              if (param_2 + (longlong)(int)uVar5 + -0xb < piVar11) goto LAB_14149f1c8;
              iVar6 = *piVar11;
              piVar25 = (int *)((ulonglong)*(ushort *)((longlong)param_1 + uVar26 * 2) + lVar28);
              *(short *)((longlong)param_1 + uVar26 * 2) = (short)piVar9 - sVar27;
            } while (*piVar25 != *piVar9);
            piVar11 = piVar9;
            if (piVar24 < piVar9 && param_2 < piVar25) {
              do {
                piVar1 = (int *)((longlong)piVar25 - 1);
                piVar2 = (int *)((longlong)piVar11 - 1);
                if (*(char *)((longlong)piVar11 - 1) != *(char *)((longlong)piVar25 - 1)) break;
                piVar11 = piVar2;
                piVar25 = piVar1;
              } while (param_2 < piVar1 && piVar24 < piVar2);
            }
            psVar19 = (short *)((longlong)param_3 + 1);
            uVar7 = (int)piVar11 - (int)piVar24;
            if ((char *)((ulonglong)(uVar7 + 0xf0) / 0xff + 0xb + (ulonglong)uVar7 +
                        (longlong)psVar19) <= pcVar17) {
              if (uVar7 < 0xf) {
                *param_3 = (char)uVar7 << 4;
              }
              else {
                uVar16 = uVar7 - 0xf;
                *param_3 = -0x10;
                if (0xfe < (int)uVar16) {
                  uVar26 = (ulonglong)uVar16 / 0xff;
                  uVar16 = uVar16 + (int)uVar26 * -0xff;
                  psVar18 = (short *)((longlong)param_3 + 2);
                  psVar21 = psVar19;
                  do {
                    psVar19 = psVar18;
                    *(char *)psVar21 = -1;
                    uVar26 = uVar26 - 1;
                    psVar18 = (short *)((longlong)psVar19 + 1);
                    psVar21 = psVar19;
                  } while (uVar26 != 0);
                }
                *(char *)psVar19 = (char)uVar16;
                psVar19 = (short *)((longlong)psVar19 + 1);
              }
              psVar18 = (short *)((longlong)psVar19 + (ulonglong)uVar7);
              lVar10 = (longlong)piVar24 - (longlong)psVar19;
              do {
                *(undefined8 *)psVar19 = *(undefined8 *)((longlong)psVar19 + lVar10);
                psVar19 = psVar19 + 4;
                psVar21 = (short *)param_3;
              } while (psVar19 < psVar18);
              do {
                param_3 = (char *)psVar21;
                if (pcVar17 < (char *)((longlong)psVar18 + 0xb)) break;
                puVar12 = (ulonglong *)(param_2 + (longlong)(int)uVar5 + -0xc);
                puVar13 = (ulonglong *)(piVar25 + 1);
                *psVar18 = (short)piVar11 - (short)piVar25;
                puVar8 = (ulonglong *)(piVar11 + 1);
                param_3 = (char *)(psVar18 + 1);
                iVar6 = (int)puVar8;
                if (puVar8 < puVar12) {
                  uVar26 = *puVar8 ^ *puVar13;
                  if (uVar26 == 0) {
                    puVar8 = (ulonglong *)(piVar11 + 3);
                    puVar13 = (ulonglong *)(piVar25 + 3);
                    if (puVar8 < puVar12) {
LAB_14149eff0:
                      uVar26 = *puVar8 ^ *puVar13;
                      if (uVar26 == 0) goto code_r0x00014149effc;
                      uVar7 = 0;
                      for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                        uVar7 = uVar7 + 1;
                      }
                      uVar7 = ((uVar7 >> 3) - iVar6) + (int)puVar8;
                      goto LAB_14149f04e;
                    }
                    goto LAB_14149f009;
                  }
                  uVar7 = 0;
                  for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                    uVar7 = uVar7 + 1;
                  }
                  uVar7 = uVar7 >> 3;
                }
                else {
LAB_14149f009:
                  if ((puVar8 < param_2 + (longlong)(int)uVar5 + -8) &&
                     ((int)*puVar13 == (int)*puVar8)) {
                    puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                    puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                  }
                  if ((puVar8 < param_2 + (longlong)(int)uVar5 + -6) &&
                     ((short)*puVar13 == (short)*puVar8)) {
                    puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                    puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                  }
                  if ((puVar8 < param_2 + (longlong)(int)uVar5 + -5) &&
                     ((char)*puVar13 == (char)*puVar8)) {
                    puVar8 = (ulonglong *)((longlong)puVar8 + 1);
                  }
                  uVar7 = (int)puVar8 - iVar6;
                }
LAB_14149f04e:
                piVar24 = (int *)((longlong)piVar11 + (ulonglong)uVar7 + 4);
                uVar16 = uVar7;
                if (pcVar17 < (char *)((ulonglong)(uVar7 + 0xf0) / 0xff + 6 + (longlong)param_3)) {
                  uVar16 = ((int)pcVar17 - (int)param_3) * 0xff - 0x5ec;
                  piVar24 = (int *)((longlong)piVar24 - (ulonglong)(uVar7 - uVar16));
                  for (piVar11 = piVar24; piVar11 <= piVar9;
                      piVar11 = (int *)((longlong)piVar11 + 1)) {
                    *(undefined2 *)
                     ((longlong)param_1 + (ulonglong)((uint)(*piVar11 * -0x61c8864f) >> 0x13) * 2) =
                         0;
                  }
                }
                if (uVar16 < 0xf) {
                  *(char *)psVar21 = (char)*psVar21 + (char)uVar16;
                }
                else {
                  uVar16 = uVar16 - 0xf;
                  *(char *)psVar21 = (char)*psVar21 + '\x0f';
                  *(short *)((longlong)param_3 + 0) = -1;
                  *(short *)((longlong)param_3 + 2) = -1;
                  if (0x3fb < uVar16) {
                    uVar26 = (ulonglong)uVar16 / 0x3fc;
                    do {
                      param_3 = (char *)((longlong)param_3 + 4);
                      uVar16 = uVar16 - 0x3fc;
                      *(short *)((longlong)param_3 + 0) = -1;
                      *(short *)((longlong)param_3 + 2) = -1;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                  pcVar29 = (char *)((ulonglong)uVar16 / 0xff + (longlong)param_3);
                  param_3 = pcVar29 + 1;
                  *pcVar29 = (char)((ulonglong)uVar16 / 0xff) + (char)uVar16;
                }
                if (param_2 + (longlong)(int)uVar5 + -0xb <= piVar24) break;
                *(short *)((longlong)param_1 +
                          (ulonglong)
                          ((uint)(*(int *)((longlong)piVar24 + -2) * -0x61c8864f) >> 0x13) * 2) =
                     ((short)piVar24 + -2) - sVar27;
                uVar26 = (ulonglong)((uint)(*piVar24 * -0x61c8864f) >> 0x13);
                uVar4 = *(ushort *)((longlong)param_1 + uVar26 * 2);
                *(short *)((longlong)param_1 + uVar26 * 2) = (short)piVar24 - sVar27;
                piVar25 = (int *)((ulonglong)uVar4 + lVar28);
                if (*piVar25 != *piVar24) goto LAB_14149ee1b;
                psVar18 = (short *)((longlong)param_3 + 1);
                *param_3 = '\0';
                piVar11 = piVar24;
                psVar21 = (short *)param_3;
              } while( true );
            }
          }
LAB_14149f1c8:
          pcVar29 = param_2 + ((longlong)(int)uVar5 - (longlong)piVar24);
          if (pcVar17 < (char *)((longlong)param_3 +
                                (longlong)(pcVar29 + (ulonglong)(pcVar29 + 0xf0) / 0xff + 1))) {
            pcVar29 = pcVar17 + ((-1 - (longlong)param_3) -
                                ((ulonglong)(pcVar17 + (0xf0 - (longlong)param_3)) >> 8));
          }
          if (pcVar29 < (char *)0xf) {
            *param_3 = (char)pcVar29 << 4;
          }
          else {
            *param_3 = -0x10;
            pcVar17 = pcVar29 + -0xf;
            param_3 = (char *)((longlong)param_3 + 1);
            if ((char *)0xfe < pcVar17) {
              memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar17 / 0x1fe),0xff),
                     (ulonglong)pcVar17 / 0xff);
              param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar17 / 0xff);
              pcVar17 = (char *)((ulonglong)pcVar17 % 0xff);
            }
            *param_3 = (char)pcVar17;
          }
          memcpy((char *)((longlong)param_3 + 1),piVar24,(size_t)pcVar29);
          iVar6 = ((int)pcVar29 - iVar14) + (int)piVar24;
          iVar15 = (int)param_3 + 1 + ((int)pcVar29 - local_res18);
LAB_14149f7e5:
          *param_4 = iVar6;
        }
      }
    }
  }
  else if (uVar5 < 0x7e000001) {
    lVar28 = (longlong)param_2 - (ulonglong)(param_1->internal_donotuse).currentOffset;
    pcVar17 = param_3 + param_5;
    if (0 < param_5) {
      plVar23 = (longlong *)(param_2 + 1);
      (param_1->internal_donotuse).dictSize = (param_1->internal_donotuse).dictSize + uVar5;
      (param_1->internal_donotuse).currentOffset =
           (param_1->internal_donotuse).currentOffset + uVar5;
      iVar6 = (int)lVar28;
      (param_1->internal_donotuse).tableType = 2;
      *(int *)((longlong)param_1 +
              ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
           iVar14 - iVar6;
      lVar10 = *plVar23;
      _Src = (longlong *)param_2;
LAB_14149f325:
      iVar15 = 1;
      iVar20 = 0x40;
      do {
        plVar22 = plVar23;
        uVar26 = (ulonglong)(lVar10 * -0x30e4432345000000) >> 0x34;
        uVar7 = *(uint *)((longlong)param_1 + uVar26 * 4);
        uVar16 = (int)plVar22 - iVar6;
        plVar23 = (longlong *)((longlong)iVar15 + (longlong)plVar22);
        iVar15 = iVar20 >> 6;
        iVar20 = iVar20 + 1;
        if (param_2 + (longlong)(int)uVar5 + -0xb < plVar23) goto LAB_14149f723;
        lVar10 = *plVar23;
        piVar24 = (int *)(lVar28 + (ulonglong)uVar7);
        *(uint *)((longlong)param_1 + uVar26 * 4) = uVar16;
      } while ((uVar7 + 0xffff < uVar16) || (*piVar24 != (int)*plVar22));
      plVar23 = plVar22;
      if (_Src < plVar22 && param_2 < piVar24) {
        do {
          piVar11 = (int *)((longlong)piVar24 - 1);
          plVar3 = (longlong *)((longlong)plVar23 - 1);
          if (*(char *)((longlong)plVar23 - 1) != *(char *)((longlong)piVar24 - 1)) break;
          piVar24 = piVar11;
          plVar23 = plVar3;
        } while (_Src < plVar3 && param_2 < piVar11);
      }
      psVar19 = (short *)((longlong)param_3 + 1);
      uVar7 = (int)plVar23 - (int)_Src;
      if ((char *)((ulonglong)(uVar7 + 0xf0) / 0xff + 0xb + (ulonglong)uVar7 + (longlong)psVar19) <=
          pcVar17) {
        if (uVar7 < 0xf) {
          *param_3 = (char)uVar7 << 4;
        }
        else {
          uVar16 = uVar7 - 0xf;
          *param_3 = -0x10;
          if (0xfe < (int)uVar16) {
            uVar26 = (ulonglong)uVar16 / 0xff;
            uVar16 = uVar16 + (int)uVar26 * -0xff;
            psVar18 = (short *)((longlong)param_3 + 2);
            psVar21 = psVar19;
            do {
              psVar19 = psVar18;
              *(char *)psVar21 = -1;
              uVar26 = uVar26 - 1;
              psVar18 = (short *)((longlong)psVar19 + 1);
              psVar21 = psVar19;
            } while (uVar26 != 0);
          }
          *(char *)psVar19 = (char)uVar16;
          psVar19 = (short *)((longlong)psVar19 + 1);
        }
        psVar18 = (short *)((longlong)psVar19 + (ulonglong)uVar7);
        lVar10 = (longlong)_Src - (longlong)psVar19;
        do {
          *(undefined8 *)psVar19 = *(undefined8 *)(lVar10 + (longlong)psVar19);
          psVar19 = psVar19 + 4;
        } while (psVar19 < psVar18);
        do {
          if (pcVar17 < (char *)((longlong)psVar18 + 0xb)) break;
          puVar12 = (ulonglong *)((longlong)plVar23 + 4);
          puVar13 = (ulonglong *)(param_2 + (longlong)(int)uVar5 + -0xc);
          *psVar18 = (short)plVar23 - (short)piVar24;
          puVar8 = (ulonglong *)(piVar24 + 1);
          psVar19 = psVar18 + 1;
          iVar15 = (int)puVar12;
          if (puVar12 < puVar13) {
            uVar26 = *puVar8 ^ *puVar12;
            if (uVar26 == 0) {
              puVar12 = (ulonglong *)((longlong)plVar23 + 0xc);
              puVar8 = (ulonglong *)(piVar24 + 3);
              if (puVar12 < puVar13) {
LAB_14149f520:
                uVar26 = *puVar8 ^ *puVar12;
                if (uVar26 == 0) goto code_r0x00014149f52c;
                uVar7 = 0;
                for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                  uVar7 = uVar7 + 1;
                }
                uVar7 = ((uVar7 >> 3) - iVar15) + (int)puVar12;
                goto LAB_14149f57e;
              }
              goto LAB_14149f539;
            }
            uVar7 = 0;
            for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
              uVar7 = uVar7 + 1;
            }
            uVar7 = uVar7 >> 3;
          }
          else {
LAB_14149f539:
            if ((puVar12 < param_2 + (longlong)(int)uVar5 + -8) && ((int)*puVar8 == (int)*puVar12))
            {
              puVar12 = (ulonglong *)((longlong)puVar12 + 4);
              puVar8 = (ulonglong *)((longlong)puVar8 + 4);
            }
            if ((puVar12 < param_2 + (longlong)(int)uVar5 + -6) &&
               ((short)*puVar8 == (short)*puVar12)) {
              puVar12 = (ulonglong *)((longlong)puVar12 + 2);
              puVar8 = (ulonglong *)((longlong)puVar8 + 2);
            }
            if ((puVar12 < param_2 + (longlong)(int)uVar5 + -5) && ((char)*puVar8 == (char)*puVar12)
               ) {
              puVar12 = (ulonglong *)((longlong)puVar12 + 1);
            }
            uVar7 = (int)puVar12 - iVar15;
          }
LAB_14149f57e:
          _Src = (longlong *)((longlong)plVar23 + (ulonglong)uVar7 + 4);
          uVar16 = uVar7;
          if (pcVar17 < (char *)((ulonglong)(uVar7 + 0xf0) / 0xff + 6 + (longlong)psVar19)) {
            uVar16 = ((int)pcVar17 - (int)psVar19) * 0xff - 0x5ec;
            _Src = (longlong *)((longlong)_Src - (ulonglong)(uVar7 - uVar16));
            for (plVar23 = _Src; plVar23 <= plVar22; plVar23 = (longlong *)((longlong)plVar23 + 1))
            {
              *(undefined4 *)
               ((longlong)param_1 + ((ulonglong)(*plVar23 * -0x30e4432345000000) >> 0x34) * 4) = 0;
            }
          }
          if (uVar16 < 0xf) {
            *param_3 = (char)uVar16 + (char)*(short *)param_3;
          }
          else {
            uVar16 = uVar16 - 0xf;
            *param_3 = (char)*(short *)param_3 + '\x0f';
            psVar19[0] = -1;
            psVar19[1] = -1;
            if (0x3fb < uVar16) {
              uVar26 = (ulonglong)uVar16 / 0x3fc;
              do {
                psVar19 = psVar19 + 2;
                uVar16 = uVar16 - 0x3fc;
                psVar19[0] = -1;
                psVar19[1] = -1;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            pcVar29 = (char *)((ulonglong)uVar16 / 0xff + (longlong)psVar19);
            *pcVar29 = (char)uVar16 + (char)((ulonglong)uVar16 / 0xff);
            psVar19 = (short *)(pcVar29 + 1);
          }
          param_3 = (char *)psVar19;
          if (param_2 + (longlong)(int)uVar5 + -0xb <= _Src) break;
          *(int *)((longlong)param_1 +
                  ((ulonglong)(*(longlong *)((longlong)_Src + -2) * -0x30e4432345000000) >> 0x34) *
                  4) = ((int)_Src + -2) - iVar6;
          uVar16 = (int)_Src - iVar6;
          uVar26 = (ulonglong)(*_Src * -0x30e4432345000000) >> 0x34;
          uVar7 = *(uint *)((longlong)param_1 + uVar26 * 4);
          *(uint *)((longlong)param_1 + uVar26 * 4) = uVar16;
          piVar24 = (int *)(lVar28 + (ulonglong)uVar7);
          if ((uVar7 + 0xffff < uVar16) || (*piVar24 != (int)*_Src)) goto LAB_14149f6ed;
          psVar18 = (short *)((longlong)psVar19 + 1);
          *(char *)psVar19 = '\0';
          plVar23 = _Src;
        } while( true );
      }
LAB_14149f723:
      pcVar29 = param_2 + ((longlong)(int)uVar5 - (longlong)_Src);
      if (pcVar17 < (char *)((longlong)param_3 +
                            (longlong)(pcVar29 + (ulonglong)(pcVar29 + 0xf0) / 0xff + 1))) {
        pcVar29 = pcVar17 + ((-1 - (longlong)param_3) -
                            ((ulonglong)(pcVar17 + (0xf0 - (longlong)param_3)) >> 8));
      }
      if (pcVar29 < (char *)0xf) {
        *param_3 = (char)pcVar29 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar17 = pcVar29 + -0xf;
        param_3 = (char *)((longlong)param_3 + 1);
        if ((char *)0xfe < pcVar17) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar17 / 0x1fe),0xff),
                 (ulonglong)pcVar17 / 0xff);
          param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar17 / 0xff);
          pcVar17 = (char *)((ulonglong)pcVar17 % 0xff);
        }
        *param_3 = (char)pcVar17;
      }
      memcpy((char *)((longlong)param_3 + 1),_Src,(size_t)pcVar29);
      iVar6 = ((int)pcVar29 - iVar14) + (int)_Src;
      iVar15 = (int)param_3 + 1 + ((int)pcVar29 - local_res18);
      goto LAB_14149f7e5;
    }
  }
  return iVar15;
code_r0x00014149f52c:
  puVar12 = puVar12 + 1;
  puVar8 = puVar8 + 1;
  if (puVar13 <= puVar12) goto LAB_14149f539;
  goto LAB_14149f520;
LAB_14149f6ed:
  lVar10 = *(longlong *)((longlong)_Src + 1);
  plVar23 = (longlong *)((longlong)_Src + 1);
  goto LAB_14149f325;
code_r0x00014149effc:
  puVar8 = puVar8 + 1;
  puVar13 = puVar13 + 1;
  if (puVar12 <= puVar8) goto LAB_14149f009;
  goto LAB_14149eff0;
}

// LZ4_compress_limitedOutput @ 14149f830

int __cdecl LZ4_compress_limitedOutput(char *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LZ4_compress_fast(param_1,param_2,param_3,param_4,1);
  return iVar1;
}

// LZ4_compress_limitedOutput_continue @ 14149f850

int __cdecl
LZ4_compress_limitedOutput_continue
          (LZ4_stream_u *param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = LZ4_compress_fast_continue(param_1,param_2,param_3,param_4,param_5,1);
  return iVar1;
}

// LZ4_compress_limitedOutput_withState @ 14149f880

int __cdecl
LZ4_compress_limitedOutput_withState
          (void *param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = LZ4_compress_fast_extState(param_1,param_2,param_3,param_4,param_5,1);
  return iVar1;
}

// LZ4_compress_withState @ 14149f8b0

int __cdecl LZ4_compress_withState(void *param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  
  if ((uint)param_4 < 0x7e000001) {
    iVar1 = param_4 / 0xff + 0x10 + param_4;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = LZ4_compress_fast_extState(param_1,param_2,param_3,param_4,iVar1,1);
  return iVar1;
}

// LZ4_create @ 14149f900

void * __cdecl LZ4_create(char *param_1)

{
  void *_Dst;
  
  _Dst = malloc(0x4020);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  if (((ulonglong)_Dst & 7) == 0) {
    memset(_Dst,0,0x4020);
  }
  return _Dst;
}

// LZ4_decompress_fast @ 14149f950

int __cdecl LZ4_decompress_fast(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  char *pcVar5;
  char *_Src;
  byte *_Src_00;
  ushort *puVar6;
  ushort *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)param_3;
  pcVar1 = param_2 + uVar10;
  puVar7 = (ushort *)param_1;
  pcVar9 = param_2;
  while( true ) {
    uVar3 = *puVar7;
    _Src_00 = (byte *)((longlong)puVar7 + 1);
    uVar8 = (ulonglong)(byte)((byte)uVar3 >> 4);
    if (uVar8 == 0xf) {
      lVar4 = 0;
      do {
        bVar2 = *_Src_00;
        _Src_00 = _Src_00 + 1;
        lVar4 = lVar4 + (ulonglong)bVar2;
      } while ((ulonglong)bVar2 == 0xff);
      uVar8 = lVar4 + 0xf;
    }
    if (uVar10 < uVar8) {
      return -1;
    }
    memmove(pcVar9,_Src_00,uVar8);
    pcVar9 = pcVar9 + uVar8;
    puVar6 = (ushort *)(_Src_00 + uVar8);
    if ((ulonglong)((longlong)pcVar1 - (longlong)pcVar9) < 0xc) {
      if (pcVar9 != pcVar1) {
        return -1;
      }
      return (int)puVar6 - (int)param_1;
    }
    uVar10 = (ulonglong)((byte)uVar3 & 0xf);
    puVar7 = puVar6 + 1;
    if (uVar10 == 0xf) {
      lVar4 = 0;
      do {
        uVar3 = *puVar7;
        puVar7 = (ushort *)((longlong)puVar7 + 1);
        lVar4 = lVar4 + (ulonglong)(byte)uVar3;
      } while ((ulonglong)(byte)uVar3 == 0xff);
      uVar10 = lVar4 + 0xf;
    }
    uVar8 = uVar10 + 4;
    if ((ulonglong)((longlong)pcVar1 - (longlong)pcVar9) < uVar8) break;
    _Src = pcVar9 + -(ulonglong)*puVar6;
    if ((ulonglong)((longlong)pcVar9 - (longlong)param_2) < (ulonglong)*puVar6) {
      return -1;
    }
    if (uVar8 != 0) {
      if ((uVar8 < 0x10) || ((pcVar9 <= _Src + uVar10 + 3 && (_Src <= pcVar9 + uVar10 + 3)))) {
        pcVar5 = pcVar9;
        uVar10 = uVar8;
        do {
          *pcVar5 = pcVar5[(longlong)_Src - (longlong)pcVar9];
          pcVar5 = pcVar5 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      else {
        memcpy(pcVar9,_Src,uVar8);
      }
    }
    pcVar9 = pcVar9 + uVar8;
    uVar10 = (longlong)pcVar1 - (longlong)pcVar9;
    if (uVar10 < 5) {
      return -1;
    }
  }
  return -1;
}

// LZ4_decompress_fast_continue @ 14149fae0

int __cdecl
LZ4_decompress_fast_continue(LZ4_streamDecode_u *param_1,char *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  byte bVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  byte *_Src;
  ushort *puVar10;
  ulonglong uVar11;
  uchar *_Size;
  char *_Dst;
  ulong64 uVar12;
  uchar *puVar13;
  uchar *_Size_00;
  ulonglong uVar14;
  uchar *puVar15;
  char *pcVar16;
  int local_res10;
  
  uVar3 = (param_1->internal_donotuse).prefixSize;
  uVar12 = (ulong64)param_4;
  if (uVar3 == 0) {
    iVar6 = LZ4_decompress_fast(param_2,param_3,param_4);
  }
  else {
    if ((param_1->internal_donotuse).prefixEnd == (uchar *)param_3) {
      uVar4 = (param_1->internal_donotuse).extDictSize;
      pcVar1 = param_3 + uVar12;
      puVar15 = (param_1->internal_donotuse).externalDict;
      pcVar16 = param_3 + -uVar3;
      puVar10 = (ushort *)param_2;
      do {
        uVar5 = *puVar10;
        _Src = (byte *)((longlong)puVar10 + 1);
        uVar11 = (ulonglong)(byte)((byte)uVar5 >> 4);
        if (uVar11 == 0xf) {
          lVar7 = 0;
          do {
            bVar2 = *_Src;
            _Src = _Src + 1;
            lVar7 = lVar7 + (ulonglong)bVar2;
          } while ((ulonglong)bVar2 == 0xff);
          uVar11 = lVar7 + 0xf;
        }
        if ((ulonglong)((longlong)pcVar1 - (longlong)param_3) < uVar11) {
          return -1;
        }
        memmove(param_3,_Src,uVar11);
        _Dst = param_3 + uVar11;
        puVar10 = (ushort *)(_Src + uVar11);
        if (pcVar1 + -(longlong)_Dst < (uchar *)0xc) {
          if (_Dst != pcVar1) {
            return -1;
          }
          local_res10 = (int)param_2;
          local_res10 = (int)puVar10 - local_res10;
          if (0 < local_res10) {
            (param_1->internal_donotuse).prefixSize =
                 (param_1->internal_donotuse).prefixSize + uVar12;
            (param_1->internal_donotuse).prefixEnd = (param_1->internal_donotuse).prefixEnd + uVar12
            ;
            return local_res10;
          }
          return local_res10;
        }
        uVar14 = (ulonglong)*puVar10;
        uVar11 = (ulonglong)((byte)uVar5 & 0xf);
        puVar10 = puVar10 + 1;
        if (uVar11 == 0xf) {
          lVar7 = 0;
          do {
            uVar5 = *puVar10;
            puVar10 = (ushort *)((longlong)puVar10 + 1);
            lVar7 = lVar7 + (ulonglong)(byte)uVar5;
          } while ((ulonglong)(byte)uVar5 == 0xff);
          uVar11 = lVar7 + 0xf;
        }
        puVar13 = (uchar *)(uVar11 + 4);
        if (pcVar1 + -(longlong)_Dst < puVar13) {
          return -1;
        }
        if (((longlong)_Dst - (longlong)pcVar16) + uVar4 < uVar14) {
          return -1;
        }
        pcVar9 = _Dst + -uVar14;
        _Size_00 = puVar13;
        if ((ulonglong)((longlong)_Dst - (longlong)pcVar16) < uVar14) {
          pcVar9 = _Dst + (longlong)(puVar15 + ((uVar4 - uVar14) - (longlong)pcVar16));
          _Size = puVar15 + (uVar4 - (longlong)pcVar9);
          if (puVar13 < _Size) {
            memmove(_Dst,pcVar9,(size_t)puVar13);
            _Size_00 = (uchar *)0x0;
            _Size = puVar13;
          }
          else {
            memmove(_Dst,pcVar9,(size_t)_Size);
            _Size_00 = puVar13 + -(longlong)_Size;
          }
          _Dst = _Dst + (longlong)_Size;
          pcVar9 = pcVar16;
        }
        if (_Size_00 != (uchar *)0x0) {
          if ((_Size_00 < (uchar *)0x10) ||
             ((_Dst <= pcVar9 + (longlong)(_Size_00 + -1) &&
              (pcVar9 <= _Dst + (longlong)(_Size_00 + -1))))) {
            pcVar8 = _Dst;
            puVar13 = _Size_00;
            do {
              *pcVar8 = pcVar8[(longlong)pcVar9 - (longlong)_Dst];
              pcVar8 = pcVar8 + 1;
              puVar13 = puVar13 + -1;
            } while (puVar13 != (uchar *)0x0);
          }
          else {
            memcpy(_Dst,pcVar9,(size_t)_Size_00);
          }
        }
        param_3 = _Dst + (longlong)_Size_00;
      } while (4 < (ulonglong)((longlong)pcVar1 - (longlong)param_3));
      return -1;
    }
    puVar15 = (param_1->internal_donotuse).prefixEnd + -uVar3;
    (param_1->internal_donotuse).extDictSize = uVar3;
    (param_1->internal_donotuse).externalDict = puVar15;
    iVar6 = LZ4_decompress_fast_extDict(param_2,param_3,param_4,puVar15,uVar3);
  }
  if (0 < iVar6) {
    (param_1->internal_donotuse).prefixSize = uVar12;
    (param_1->internal_donotuse).prefixEnd = (uchar *)(param_3 + uVar12);
  }
  return iVar6;
}

// LZ4_decompress_fast_extDict @ 14149fd50

int __cdecl
LZ4_decompress_fast_extDict(char *param_1,char *param_2,int param_3,void *param_4,ulong64 param_5)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  byte *_Src;
  ushort *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong _Size;
  char *pcVar10;
  int local_res8;
  
  pcVar10 = param_2 + param_3;
  puVar6 = (ushort *)param_1;
  pcVar9 = param_2;
  while( true ) {
    uVar2 = *puVar6;
    _Src = (byte *)((longlong)puVar6 + 1);
    uVar7 = (ulonglong)(byte)((byte)uVar2 >> 4);
    if (uVar7 == 0xf) {
      lVar3 = 0;
      do {
        bVar1 = *_Src;
        _Src = _Src + 1;
        lVar3 = lVar3 + (ulonglong)bVar1;
      } while ((ulonglong)bVar1 == 0xff);
      uVar7 = lVar3 + 0xf;
    }
    if ((ulonglong)((longlong)pcVar10 - (longlong)pcVar9) < uVar7) {
      return -1;
    }
    memmove(pcVar9,_Src,uVar7);
    pcVar9 = pcVar9 + uVar7;
    puVar6 = (ushort *)(_Src + uVar7);
    if ((ulonglong)((longlong)pcVar10 - (longlong)pcVar9) < 0xc) {
      if (pcVar9 != pcVar10) {
        return -1;
      }
      local_res8 = (int)param_1;
      return (int)puVar6 - local_res8;
    }
    uVar8 = (ulonglong)*puVar6;
    uVar7 = (ulonglong)((byte)uVar2 & 0xf);
    puVar6 = puVar6 + 1;
    if (uVar7 == 0xf) {
      lVar3 = 0;
      do {
        uVar2 = *puVar6;
        puVar6 = (ushort *)((longlong)puVar6 + 1);
        lVar3 = lVar3 + (ulonglong)(byte)uVar2;
      } while ((ulonglong)(byte)uVar2 == 0xff);
      uVar7 = lVar3 + 0xf;
    }
    uVar7 = uVar7 + 4;
    if ((ulonglong)((longlong)pcVar10 - (longlong)pcVar9) < uVar7) break;
    if (((longlong)pcVar9 - (longlong)param_2) + param_5 < uVar8) {
      return -1;
    }
    pcVar5 = pcVar9 + -uVar8;
    _Size = uVar7;
    if ((ulonglong)((longlong)pcVar9 - (longlong)param_2) < uVar8) {
      pcVar5 = pcVar9 + (longlong)param_4 + ((param_5 - uVar8) - (longlong)param_2);
      uVar8 = (longlong)param_4 + (param_5 - (longlong)pcVar5);
      if (uVar7 < uVar8) {
        memmove(pcVar9,pcVar5,uVar7);
        _Size = 0;
        uVar8 = uVar7;
      }
      else {
        memmove(pcVar9,pcVar5,uVar8);
        _Size = uVar7 - uVar8;
      }
      pcVar9 = pcVar9 + uVar8;
      pcVar5 = param_2;
    }
    if (_Size != 0) {
      if ((_Size < 0x10) || ((pcVar9 <= pcVar5 + (_Size - 1) && (pcVar5 <= pcVar9 + (_Size - 1)))))
      {
        pcVar4 = pcVar9;
        uVar7 = _Size;
        do {
          *pcVar4 = pcVar4[(longlong)pcVar5 - (longlong)pcVar9];
          pcVar4 = pcVar4 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      else {
        memcpy(pcVar9,pcVar5,_Size);
      }
    }
    pcVar9 = pcVar9 + _Size;
    if ((ulonglong)((longlong)pcVar10 - (longlong)pcVar9) < 5) {
      return -1;
    }
  }
  return -1;
}

// LZ4_decompress_fast_usingDict @ 14149ff30

int __cdecl
LZ4_decompress_fast_usingDict(char *param_1,char *param_2,int param_3,char *param_4,int param_5)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  ulong64 uVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  char *_Src;
  byte *_Src_00;
  ushort *puVar9;
  ushort *puVar10;
  ulonglong uVar11;
  char *_Dst;
  longlong lVar12;
  
  uVar5 = (ulong64)param_5;
  if ((param_5 != 0) && (param_4 + uVar5 != param_2)) {
    iVar4 = LZ4_decompress_fast_extDict(param_1,param_2,param_3,param_4,uVar5);
    return iVar4;
  }
  uVar8 = (ulonglong)param_3;
  lVar12 = (longlong)param_2 - uVar5;
  pcVar1 = param_2 + uVar8;
  puVar10 = (ushort *)param_1;
  while( true ) {
    uVar3 = *puVar10;
    _Src_00 = (byte *)((longlong)puVar10 + 1);
    uVar11 = (ulonglong)(byte)((byte)uVar3 >> 4);
    if (uVar11 == 0xf) {
      lVar6 = 0;
      do {
        bVar2 = *_Src_00;
        _Src_00 = _Src_00 + 1;
        lVar6 = lVar6 + (ulonglong)bVar2;
      } while ((ulonglong)bVar2 == 0xff);
      uVar11 = lVar6 + 0xf;
    }
    if (uVar8 < uVar11) {
      return -1;
    }
    memmove(param_2,_Src_00,uVar11);
    _Dst = param_2 + uVar11;
    puVar9 = (ushort *)(_Src_00 + uVar11);
    if ((ulonglong)((longlong)pcVar1 - (longlong)_Dst) < 0xc) {
      if (_Dst != pcVar1) {
        return -1;
      }
      return (int)puVar9 - (int)param_1;
    }
    uVar8 = (ulonglong)((byte)uVar3 & 0xf);
    puVar10 = puVar9 + 1;
    if (uVar8 == 0xf) {
      lVar6 = 0;
      do {
        uVar3 = *puVar10;
        puVar10 = (ushort *)((longlong)puVar10 + 1);
        lVar6 = lVar6 + (ulonglong)(byte)uVar3;
      } while ((ulonglong)(byte)uVar3 == 0xff);
      uVar8 = lVar6 + 0xf;
    }
    uVar11 = uVar8 + 4;
    if ((ulonglong)((longlong)pcVar1 - (longlong)_Dst) < uVar11) break;
    _Src = _Dst + -(ulonglong)*puVar9;
    if ((ulonglong)((longlong)_Dst - lVar12) < (ulonglong)*puVar9) {
      return -1;
    }
    if (uVar11 != 0) {
      if ((uVar11 < 0x10) || ((_Dst <= _Src + uVar8 + 3 && (_Src <= _Dst + uVar8 + 3)))) {
        pcVar7 = _Dst;
        uVar8 = uVar11;
        do {
          *pcVar7 = pcVar7[(longlong)_Src - (longlong)_Dst];
          pcVar7 = pcVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      else {
        memcpy(_Dst,_Src,uVar11);
      }
    }
    param_2 = _Dst + uVar11;
    uVar8 = (longlong)pcVar1 - (longlong)param_2;
    if (uVar8 < 5) {
      return -1;
    }
  }
  return -1;
}

// LZ4_decompress_fast_withPrefix64k @ 1414a00e0

int __cdecl LZ4_decompress_fast_withPrefix64k(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *_Src;
  byte *_Src_00;
  ushort *puVar8;
  ushort *puVar9;
  ulonglong uVar10;
  char *_Dst;
  
  uVar7 = (ulonglong)param_3;
  pcVar1 = param_2 + -0x10000;
  pcVar2 = param_2 + uVar7;
  puVar9 = (ushort *)param_1;
  while( true ) {
    uVar4 = *puVar9;
    _Src_00 = (byte *)((longlong)puVar9 + 1);
    uVar10 = (ulonglong)(byte)((byte)uVar4 >> 4);
    if (uVar10 == 0xf) {
      lVar5 = 0;
      do {
        bVar3 = *_Src_00;
        _Src_00 = _Src_00 + 1;
        lVar5 = lVar5 + (ulonglong)bVar3;
      } while ((ulonglong)bVar3 == 0xff);
      uVar10 = lVar5 + 0xf;
    }
    if (uVar7 < uVar10) {
      return -1;
    }
    memmove(param_2,_Src_00,uVar10);
    _Dst = param_2 + uVar10;
    puVar8 = (ushort *)(_Src_00 + uVar10);
    if ((ulonglong)((longlong)pcVar2 - (longlong)_Dst) < 0xc) {
      if (_Dst != pcVar2) {
        return -1;
      }
      return (int)puVar8 - (int)param_1;
    }
    uVar7 = (ulonglong)((byte)uVar4 & 0xf);
    puVar9 = puVar8 + 1;
    if (uVar7 == 0xf) {
      lVar5 = 0;
      do {
        uVar4 = *puVar9;
        puVar9 = (ushort *)((longlong)puVar9 + 1);
        lVar5 = lVar5 + (ulonglong)(byte)uVar4;
      } while ((ulonglong)(byte)uVar4 == 0xff);
      uVar7 = lVar5 + 0xf;
    }
    uVar10 = uVar7 + 4;
    if ((ulonglong)((longlong)pcVar2 - (longlong)_Dst) < uVar10) break;
    _Src = _Dst + -(ulonglong)*puVar8;
    if ((ulonglong)((longlong)_Dst - (longlong)pcVar1) < (ulonglong)*puVar8) {
      return -1;
    }
    if (uVar10 != 0) {
      if ((uVar10 < 0x10) || ((_Dst <= _Src + uVar7 + 3 && (_Src <= _Dst + uVar7 + 3)))) {
        pcVar6 = _Dst;
        uVar7 = uVar10;
        do {
          *pcVar6 = pcVar6[(longlong)_Src - (longlong)_Dst];
          pcVar6 = pcVar6 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      else {
        memcpy(_Dst,_Src,uVar10);
      }
    }
    param_2 = _Dst + uVar10;
    uVar7 = (longlong)pcVar2 - (longlong)param_2;
    if (uVar7 < 5) {
      return -1;
    }
  }
  return -1;
}

// LZ4_decompress_safe_partial_withPrefix64k @ 1414a0270

int __cdecl
LZ4_decompress_safe_partial_withPrefix64k
          (char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ushort *_Src;
  ushort *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte *pbVar15;
  size_t _Size;
  ulonglong uVar16;
  byte *pbVar17;
  uint uVar18;
  ulonglong uVar19;
  byte *pbVar20;
  byte local_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  int local_68;
  
  pbVar2 = (byte *)(param_2 + -0x10000);
  if (param_4 < param_5) {
    param_5 = param_4;
  }
  if ((param_1 == (char *)0x0) || (param_5 < 0)) {
    return -1;
  }
  pbVar17 = (byte *)(param_1 + param_3);
  pbVar3 = (byte *)(param_2 + param_5);
  if (param_5 == 0) {
    iVar8 = 0;
  }
  else {
    if (param_3 != 0) {
      uVar13 = 0;
      puVar12 = (ushort *)param_1;
      _Src = (ushort *)param_1;
      pbVar20 = (byte *)param_2;
      pbVar15 = (byte *)param_2;
      if ((longlong)param_5 < 0x40) goto LAB_1414a05f6;
LAB_1414a0330:
      do {
        bVar4 = (byte)*puVar12;
        _Src = (ushort *)((longlong)puVar12 + 1);
        uVar11 = (ulonglong)(bVar4 >> 4);
        if (uVar11 == 0xf) {
          uVar11 = uVar13;
          if (pbVar17 + -0xf <= _Src) goto LAB_1414a0908;
          do {
            uVar7 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar11 = uVar11 + (byte)uVar7;
            if (pbVar17 + -0xf < _Src) goto LAB_1414a0908;
          } while ((byte)uVar7 == 0xff);
          if (uVar11 == 0xffffffffffffffff) goto LAB_1414a0908;
          uVar11 = uVar11 + 0xf;
          pbVar15 = pbVar20 + uVar11;
          if ((pbVar15 < pbVar20) || (puVar12 = (ushort *)(uVar11 + (longlong)_Src), puVar12 < _Src)
             ) goto LAB_1414a0908;
          uVar18 = (uint)bVar4;
          if (pbVar3 + -0x20 < pbVar15) goto LAB_1414a06e2;
          uVar18 = (uint)bVar4;
          if (pbVar17 + -0x20 < puVar12) goto LAB_1414a06e2;
          lVar14 = (longlong)pbVar20 - (longlong)_Src;
          do {
            uVar6 = *(undefined8 *)(_Src + 4);
            puVar1 = _Src + 0x10;
            *(undefined8 *)((longlong)_Src + lVar14) = *(undefined8 *)_Src;
            *(undefined8 *)((byte *)((longlong)_Src + lVar14) + 8) = uVar6;
            uVar6 = *(undefined8 *)(_Src + 0xc);
            pbVar20 = (byte *)((longlong)_Src + lVar14 + 0x10);
            *(undefined8 *)pbVar20 = *(undefined8 *)(_Src + 8);
            *(undefined8 *)(pbVar20 + 8) = uVar6;
            _Src = puVar1;
          } while ((byte *)((longlong)puVar1 + lVar14) < pbVar15);
        }
        else {
          pbVar15 = pbVar20 + uVar11;
          uVar18 = (uint)bVar4;
          if (pbVar17 + -0x11 < _Src) goto LAB_1414a06e2;
          uVar6 = *(undefined8 *)((longlong)puVar12 + 9);
          puVar12 = (ushort *)((longlong)_Src + uVar11);
          *(undefined8 *)pbVar20 = *(undefined8 *)_Src;
          *(undefined8 *)(pbVar20 + 8) = uVar6;
        }
        uVar11 = (ulonglong)*puVar12;
        pbVar9 = pbVar15 + -uVar11;
        _Src = puVar12 + 1;
        if ((ulonglong)(bVar4 & 0xf) == 0xf) {
          uVar19 = uVar13;
          do {
            uVar7 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar19 = uVar19 + (byte)uVar7;
            if (pbVar17 + -4 < _Src) goto LAB_1414a0908;
          } while ((byte)uVar7 == 0xff);
          if (uVar19 == 0xffffffffffffffff) goto LAB_1414a0908;
          uVar19 = uVar19 + 0x13;
          if ((pbVar15 + uVar19 < pbVar15) || (pbVar9 < pbVar2)) goto LAB_1414a0908;
          pbVar20 = pbVar15;
          if (pbVar3 + -0x40 <= pbVar15 + uVar19) goto LAB_1414a07e4;
LAB_1414a04ae:
          pbVar20 = pbVar15 + uVar19;
          puVar12 = _Src;
          if (0xf < uVar11) {
            lVar14 = (longlong)pbVar15 - (longlong)pbVar9;
            do {
              uVar6 = *(undefined8 *)(pbVar9 + 8);
              pbVar15 = pbVar9 + 0x20;
              *(undefined8 *)(pbVar9 + lVar14) = *(undefined8 *)pbVar9;
              *(undefined8 *)(pbVar9 + lVar14 + 8) = uVar6;
              uVar6 = *(undefined8 *)(pbVar9 + 0x18);
              *(undefined8 *)(pbVar9 + lVar14 + 0x10) = *(undefined8 *)(pbVar9 + 0x10);
              *(undefined8 *)(pbVar9 + lVar14 + 0x10 + 8) = uVar6;
              pbVar9 = pbVar15;
            } while (pbVar15 + lVar14 < pbVar20);
            goto LAB_1414a0330;
          }
          if (uVar11 == 1) {
            bStack_74 = *pbVar9;
            bStack_73 = bStack_74;
            bStack_72 = bStack_74;
            bStack_71 = bStack_74;
          }
          else if (uVar11 == 2) {
            local_78 = (byte)*(undefined2 *)pbVar9;
            bStack_77 = (byte)((ushort)*(undefined2 *)pbVar9 >> 8);
            bStack_72 = local_78;
            bStack_71 = bStack_77;
            bStack_74 = local_78;
            bStack_73 = bStack_77;
          }
          else {
            if (uVar11 != 4) {
              if (uVar11 < 8) {
                pbVar15[0] = 0;
                pbVar15[1] = 0;
                pbVar15[2] = 0;
                pbVar15[3] = 0;
                *pbVar15 = *pbVar9;
                pbVar15[1] = pbVar9[1];
                pbVar15[2] = pbVar9[2];
                pbVar15[3] = pbVar9[3];
                uVar18 = inc32table[uVar11];
                *(undefined4 *)(pbVar15 + 4) = *(undefined4 *)(pbVar9 + uVar18);
                pbVar10 = pbVar9 + uVar18 + -(longlong)dec64table[uVar11];
              }
              else {
                pbVar10 = pbVar9 + 8;
                *(undefined8 *)pbVar15 = *(undefined8 *)pbVar9;
              }
              pbVar15 = pbVar15 + 8;
              lVar14 = (longlong)pbVar10 - (longlong)pbVar15;
              do {
                *(undefined8 *)pbVar15 = *(undefined8 *)(pbVar15 + lVar14);
                pbVar15 = pbVar15 + 8;
              } while (pbVar15 < pbVar20);
              goto LAB_1414a0330;
            }
            uVar5 = *(undefined4 *)pbVar9;
            local_78 = (byte)uVar5;
            bStack_77 = (byte)((uint)uVar5 >> 8);
            bStack_76 = (byte)((uint)uVar5 >> 0x10);
            bStack_75 = (byte)((uint)uVar5 >> 0x18);
            bStack_74 = local_78;
            bStack_73 = bStack_77;
            bStack_72 = bStack_76;
            bStack_71 = bStack_75;
          }
          uVar6 = CONCAT17(bStack_71,
                           CONCAT16(bStack_72,
                                    CONCAT15(bStack_73,
                                             CONCAT14(bStack_74,
                                                      CONCAT13(bStack_71,
                                                               CONCAT12(bStack_72,
                                                                        CONCAT11(bStack_73,bStack_74
                                                                                )))))));
          pbVar9 = pbVar15 + 8;
          *(undefined8 *)pbVar15 = uVar6;
          uVar11 = (ulonglong)(pbVar20 + (7 - (longlong)pbVar9)) >> 3;
          if (pbVar20 < pbVar9) {
            uVar11 = uVar13;
          }
          if (uVar11 != 0) {
            for (; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined8 *)pbVar9 = uVar6;
              pbVar9 = pbVar9 + 8;
            }
          }
          goto LAB_1414a0330;
        }
        uVar19 = (ulonglong)(bVar4 & 0xf) + 4;
        if (pbVar3 + -0x40 <= pbVar15 + uVar19) goto LAB_1414a07db;
        if (uVar11 < 8) {
          if (pbVar2 <= pbVar9) goto LAB_1414a04ae;
          goto LAB_1414a0908;
        }
        *(undefined8 *)pbVar15 = *(undefined8 *)pbVar9;
        *(undefined8 *)(pbVar15 + 8) = *(undefined8 *)(pbVar9 + 8);
        *(undefined2 *)(pbVar15 + 0x10) = *(undefined2 *)(pbVar9 + 0x10);
        puVar12 = _Src;
        pbVar20 = pbVar15 + uVar19;
      } while( true );
    }
    iVar8 = -1;
  }
  return iVar8;
LAB_1414a07db:
  pbVar20 = pbVar15;
  if (pbVar9 < pbVar2) {
LAB_1414a0908:
    return ((int)param_1 - (int)_Src) + -1;
  }
LAB_1414a07e4:
  pbVar15 = pbVar20 + uVar19;
  if (pbVar3 + -0xc < pbVar15) {
    if ((ulonglong)((longlong)pbVar3 - (longlong)pbVar20) <= uVar19) {
      uVar19 = (longlong)pbVar3 - (longlong)pbVar20;
    }
    pbVar15 = pbVar20 + uVar19;
    if (pbVar20 < pbVar9 + uVar19) {
      for (; pbVar20 < pbVar15; pbVar20 = pbVar20 + 1) {
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        *pbVar20 = bVar4;
      }
    }
    else {
      memcpy(pbVar20,pbVar9,uVar19);
    }
    if (pbVar15 == pbVar3) goto LAB_1414a08c9;
  }
  else {
    if (uVar11 < 8) {
      pbVar20[0] = 0;
      pbVar20[1] = 0;
      pbVar20[2] = 0;
      pbVar20[3] = 0;
      *pbVar20 = *pbVar9;
      pbVar20[1] = pbVar9[1];
      pbVar20[2] = pbVar9[2];
      pbVar20[3] = pbVar9[3];
      uVar18 = inc32table[uVar11];
      *(undefined4 *)(pbVar20 + 4) = *(undefined4 *)(pbVar9 + uVar18);
      pbVar10 = pbVar9 + uVar18 + -(longlong)dec64table[uVar11];
    }
    else {
      pbVar10 = pbVar9 + 8;
      *(undefined8 *)pbVar20 = *(undefined8 *)pbVar9;
    }
    *(undefined8 *)(pbVar20 + 8) = *(undefined8 *)pbVar10;
    if (0x10 < uVar19) {
      pbVar9 = pbVar20 + 0x10;
      do {
        *(undefined8 *)pbVar9 =
             *(undefined8 *)(pbVar9 + (longlong)(pbVar10 + (8 - (longlong)(pbVar20 + 0x10))));
        pbVar9 = pbVar9 + 8;
      } while (pbVar9 < pbVar15);
    }
  }
LAB_1414a05f6:
  bVar4 = (byte)*_Src;
  _Src = (ushort *)((longlong)_Src + 1);
  pbVar20 = pbVar15;
  while( true ) {
    uVar11 = (ulonglong)(bVar4 >> 4);
    if (uVar11 == 0xf) break;
    if (pbVar17 + -0x10 <= _Src || pbVar3 + -0x20 < pbVar20) goto LAB_1414a06de;
    uVar6 = *(undefined8 *)(_Src + 4);
    puVar12 = (ushort *)((longlong)_Src + uVar11);
    uVar19 = (ulonglong)(bVar4 & 0xf);
    *(undefined8 *)pbVar20 = *(undefined8 *)_Src;
    *(undefined8 *)(pbVar20 + 8) = uVar6;
    pbVar15 = pbVar20 + uVar11;
    uVar11 = (ulonglong)*puVar12;
    pbVar9 = pbVar15 + -uVar11;
    _Src = puVar12 + 1;
    if (uVar19 == 0xf) goto LAB_1414a0791;
    if (uVar11 < 8) goto LAB_1414a07d0;
    *(undefined8 *)pbVar15 = *(undefined8 *)pbVar9;
    *(undefined8 *)(pbVar15 + 8) = *(undefined8 *)(pbVar9 + 8);
    *(undefined2 *)(pbVar15 + 0x10) = *(undefined2 *)(pbVar9 + 0x10);
    pbVar20 = pbVar15 + uVar19 + 4;
    bVar4 = (byte)*_Src;
    _Src = (ushort *)((longlong)puVar12 + 3);
  }
  uVar11 = uVar13;
  if (pbVar17 + -0xf <= _Src) goto LAB_1414a0908;
  do {
    uVar7 = *_Src;
    _Src = (ushort *)((longlong)_Src + 1);
    uVar11 = uVar11 + (byte)uVar7;
    if (pbVar17 + -0xf < _Src) goto LAB_1414a0908;
  } while ((byte)uVar7 == 0xff);
  if (((uVar11 == 0xffffffffffffffff) || (uVar11 = uVar11 + 0xf, pbVar20 + uVar11 < pbVar20)) ||
     ((ushort *)(uVar11 + (longlong)_Src) < _Src)) goto LAB_1414a0908;
LAB_1414a06de:
  pbVar15 = pbVar20 + uVar11;
  uVar18 = (uint)bVar4;
LAB_1414a06e2:
  if ((pbVar3 + -0xc < pbVar15) ||
     (puVar12 = (ushort *)(uVar11 + (longlong)_Src), pbVar17 + -8 < puVar12)) {
    pbVar9 = pbVar15;
    if (pbVar17 < (byte *)(uVar11 + (longlong)_Src)) {
      uVar11 = (longlong)pbVar17 - (longlong)_Src;
      pbVar9 = pbVar20 + uVar11;
    }
    _Size = (longlong)pbVar3 - (longlong)pbVar20;
    if (pbVar9 <= pbVar3) {
      _Size = uVar11;
    }
    memmove(pbVar20,_Src,_Size);
    puVar12 = (ushort *)((longlong)_Src + _Size);
    pbVar15 = pbVar20 + _Size;
    pbVar20 = pbVar3;
    if (pbVar9 <= pbVar3) {
      pbVar20 = pbVar9;
    }
    if ((pbVar20 == pbVar3) || (pbVar17 + -2 <= puVar12)) {
LAB_1414a08c9:
      local_68 = (int)param_2;
      return (int)pbVar15 - local_68;
    }
  }
  else {
    lVar14 = (longlong)_Src - (longlong)pbVar20;
    do {
      *(undefined8 *)pbVar20 = *(undefined8 *)(pbVar20 + lVar14);
      pbVar20 = pbVar20 + 8;
    } while (pbVar20 < pbVar15);
  }
  uVar11 = (ulonglong)*puVar12;
  pbVar9 = pbVar15 + -uVar11;
  _Src = puVar12 + 1;
  uVar19 = (ulonglong)(uVar18 & 0xf);
  if (uVar19 == 0xf) {
LAB_1414a0791:
    uVar16 = uVar13;
    do {
      uVar7 = *_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      uVar16 = uVar16 + (byte)uVar7;
      if (pbVar17 + -4 < _Src) goto LAB_1414a0908;
    } while ((byte)uVar7 == 0xff);
    if ((uVar16 == 0xffffffffffffffff) || (uVar19 = uVar19 + uVar16, pbVar15 + uVar19 < pbVar15))
    goto LAB_1414a0908;
  }
LAB_1414a07d0:
  uVar19 = uVar19 + 4;
  goto LAB_1414a07db;
}

// LZ4_decompress_safe_partial_withSmallPrefix @ 1414a0930

int __cdecl
LZ4_decompress_safe_partial_withSmallPrefix
          (char *param_1,char *param_2,int param_3,int param_4,int param_5,ulong64 param_6)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ushort *_Src;
  ushort *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  size_t _Size;
  ulonglong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  ulonglong uVar19;
  byte *pbVar20;
  byte local_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  int local_68;
  
  if (param_4 < param_5) {
    param_5 = param_4;
  }
  pbVar16 = (byte *)(param_2 + -param_6);
  if ((param_1 == (char *)0x0) || (param_5 < 0)) {
    return -1;
  }
  pbVar17 = (byte *)(param_1 + param_3);
  pbVar2 = (byte *)(param_2 + param_5);
  if (param_5 == 0) {
    iVar7 = 0;
  }
  else {
    if (param_3 != 0) {
      uVar12 = 0;
      puVar11 = (ushort *)param_1;
      _Src = (ushort *)param_1;
      pbVar20 = (byte *)param_2;
      pbVar9 = (byte *)param_2;
      if ((longlong)param_5 < 0x40) goto LAB_1414a0cb6;
LAB_1414a09e0:
      do {
        bVar3 = (byte)*puVar11;
        _Src = (ushort *)((longlong)puVar11 + 1);
        uVar10 = (ulonglong)(bVar3 >> 4);
        if (uVar10 == 0xf) {
          uVar10 = uVar12;
          if (pbVar17 + -0xf <= _Src) goto LAB_1414a0fd1;
          do {
            uVar6 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar10 = uVar10 + (byte)uVar6;
            if (pbVar17 + -0xf < _Src) goto LAB_1414a0fd1;
          } while ((byte)uVar6 == 0xff);
          if (uVar10 == 0xffffffffffffffff) goto LAB_1414a0fd1;
          uVar10 = uVar10 + 0xf;
          pbVar9 = pbVar20 + uVar10;
          if ((pbVar9 < pbVar20) || (puVar11 = (ushort *)(uVar10 + (longlong)_Src), puVar11 < _Src))
          goto LAB_1414a0fd1;
          uVar18 = (uint)bVar3;
          if (pbVar2 + -0x20 < pbVar9) goto LAB_1414a0db1;
          uVar18 = (uint)bVar3;
          if (pbVar17 + -0x20 < puVar11) goto LAB_1414a0db1;
          lVar13 = (longlong)pbVar20 - (longlong)_Src;
          do {
            uVar5 = *(undefined8 *)(_Src + 4);
            puVar1 = _Src + 0x10;
            *(undefined8 *)((longlong)_Src + lVar13) = *(undefined8 *)_Src;
            *(undefined8 *)((byte *)((longlong)_Src + lVar13) + 8) = uVar5;
            uVar5 = *(undefined8 *)(_Src + 0xc);
            pbVar20 = (byte *)((longlong)_Src + lVar13 + 0x10);
            *(undefined8 *)pbVar20 = *(undefined8 *)(_Src + 8);
            *(undefined8 *)(pbVar20 + 8) = uVar5;
            _Src = puVar1;
            pbVar14 = pbVar9;
          } while ((byte *)(lVar13 + (longlong)puVar1) < pbVar9);
        }
        else {
          pbVar9 = pbVar20 + uVar10;
          uVar18 = (uint)bVar3;
          if (pbVar17 + -0x11 < _Src) goto LAB_1414a0db1;
          uVar5 = *(undefined8 *)((longlong)puVar11 + 9);
          puVar11 = (ushort *)((longlong)_Src + uVar10);
          *(undefined8 *)pbVar20 = *(undefined8 *)_Src;
          *(undefined8 *)(pbVar20 + 8) = uVar5;
          pbVar14 = pbVar9;
        }
        uVar10 = (ulonglong)*puVar11;
        pbVar8 = pbVar14 + -uVar10;
        _Src = puVar11 + 1;
        if ((ulonglong)(bVar3 & 0xf) == 0xf) {
          uVar19 = uVar12;
          do {
            uVar6 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar19 = uVar19 + (byte)uVar6;
            if (pbVar17 + -4 < _Src) goto LAB_1414a0fd1;
          } while ((byte)uVar6 == 0xff);
          if (uVar19 == 0xffffffffffffffff) goto LAB_1414a0fd1;
          uVar19 = uVar19 + 0x13;
          if ((pbVar14 + uVar19 < pbVar14) || (pbVar8 < pbVar16)) goto LAB_1414a0fd1;
          if (pbVar2 + -0x40 <= pbVar14 + uVar19) goto LAB_1414a0eb4;
LAB_1414a0b1a:
          pbVar20 = pbVar14 + uVar19;
          puVar11 = _Src;
          if (0xf < uVar10) {
            lVar13 = (longlong)pbVar14 - (longlong)pbVar8;
            do {
              uVar5 = *(undefined8 *)(pbVar8 + 8);
              pbVar9 = pbVar8 + 0x20;
              *(undefined8 *)(pbVar8 + lVar13) = *(undefined8 *)pbVar8;
              *(undefined8 *)(pbVar8 + lVar13 + 8) = uVar5;
              uVar5 = *(undefined8 *)(pbVar8 + 0x18);
              *(undefined8 *)(pbVar8 + lVar13 + 0x10) = *(undefined8 *)(pbVar8 + 0x10);
              *(undefined8 *)(pbVar8 + lVar13 + 0x10 + 8) = uVar5;
              pbVar8 = pbVar9;
            } while (pbVar9 + lVar13 < pbVar20);
            goto LAB_1414a09e0;
          }
          if (uVar10 == 1) {
            bStack_74 = *pbVar8;
            bStack_73 = bStack_74;
            bStack_72 = bStack_74;
            bStack_71 = bStack_74;
          }
          else if (uVar10 == 2) {
            local_78 = (byte)*(undefined2 *)pbVar8;
            bStack_77 = (byte)((ushort)*(undefined2 *)pbVar8 >> 8);
            bStack_72 = local_78;
            bStack_71 = bStack_77;
            bStack_74 = local_78;
            bStack_73 = bStack_77;
          }
          else {
            if (uVar10 != 4) {
              if (uVar10 < 8) {
                pbVar14[0] = 0;
                pbVar14[1] = 0;
                pbVar14[2] = 0;
                pbVar14[3] = 0;
                *pbVar14 = *pbVar8;
                pbVar14[1] = pbVar8[1];
                pbVar14[2] = pbVar8[2];
                pbVar14[3] = pbVar8[3];
                uVar18 = inc32table[uVar10];
                *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar8 + uVar18);
                pbVar9 = pbVar8 + uVar18 + -(longlong)dec64table[uVar10];
              }
              else {
                pbVar9 = pbVar8 + 8;
                *(undefined8 *)pbVar14 = *(undefined8 *)pbVar8;
              }
              pbVar14 = pbVar14 + 8;
              lVar13 = (longlong)pbVar9 - (longlong)pbVar14;
              do {
                *(undefined8 *)pbVar14 = *(undefined8 *)(pbVar14 + lVar13);
                pbVar14 = pbVar14 + 8;
              } while (pbVar14 < pbVar20);
              goto LAB_1414a09e0;
            }
            uVar4 = *(undefined4 *)pbVar8;
            local_78 = (byte)uVar4;
            bStack_77 = (byte)((uint)uVar4 >> 8);
            bStack_76 = (byte)((uint)uVar4 >> 0x10);
            bStack_75 = (byte)((uint)uVar4 >> 0x18);
            bStack_74 = local_78;
            bStack_73 = bStack_77;
            bStack_72 = bStack_76;
            bStack_71 = bStack_75;
          }
          uVar5 = CONCAT17(bStack_71,
                           CONCAT16(bStack_72,
                                    CONCAT15(bStack_73,
                                             CONCAT14(bStack_74,
                                                      CONCAT13(bStack_71,
                                                               CONCAT12(bStack_72,
                                                                        CONCAT11(bStack_73,bStack_74
                                                                                )))))));
          pbVar9 = pbVar14 + 8;
          *(undefined8 *)pbVar14 = uVar5;
          uVar10 = (ulonglong)(pbVar20 + (7 - (longlong)pbVar9)) >> 3;
          if (pbVar20 < pbVar9) {
            uVar10 = uVar12;
          }
          if (uVar10 != 0) {
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined8 *)pbVar9 = uVar5;
              pbVar9 = pbVar9 + 8;
            }
          }
          goto LAB_1414a09e0;
        }
        uVar19 = (ulonglong)(bVar3 & 0xf) + 4;
        pbVar20 = pbVar14 + uVar19;
        if (pbVar2 + -0x40 <= pbVar20) goto LAB_1414a0eab;
        if (pbVar8 < pbVar16) goto LAB_1414a0fd1;
        if (uVar10 < 8) goto LAB_1414a0b1a;
        *(undefined8 *)pbVar14 = *(undefined8 *)pbVar8;
        *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar8 + 8);
        *(undefined2 *)(pbVar14 + 0x10) = *(undefined2 *)(pbVar8 + 0x10);
        puVar11 = _Src;
      } while( true );
    }
    iVar7 = -1;
  }
  return iVar7;
LAB_1414a0eab:
  if (pbVar8 < pbVar16) {
LAB_1414a0fd1:
    return ((int)param_1 - (int)_Src) + -1;
  }
LAB_1414a0eb4:
  pbVar9 = pbVar14 + uVar19;
  if (pbVar2 + -0xc < pbVar9) {
    if ((ulonglong)((longlong)pbVar2 - (longlong)pbVar14) <= uVar19) {
      uVar19 = (longlong)pbVar2 - (longlong)pbVar14;
    }
    pbVar9 = pbVar14 + uVar19;
    if (pbVar14 < pbVar8 + uVar19) {
      for (; pbVar14 < pbVar9; pbVar14 = pbVar14 + 1) {
        bVar3 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        *pbVar14 = bVar3;
      }
    }
    else {
      memcpy(pbVar14,pbVar8,uVar19);
    }
    if (pbVar9 == pbVar2) goto LAB_1414a0f99;
  }
  else {
    if (uVar10 < 8) {
      pbVar14[0] = 0;
      pbVar14[1] = 0;
      pbVar14[2] = 0;
      pbVar14[3] = 0;
      *pbVar14 = *pbVar8;
      pbVar14[1] = pbVar8[1];
      pbVar14[2] = pbVar8[2];
      pbVar14[3] = pbVar8[3];
      uVar18 = inc32table[uVar10];
      *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar8 + uVar18);
      pbVar20 = pbVar8 + uVar18 + -(longlong)dec64table[uVar10];
    }
    else {
      pbVar20 = pbVar8 + 8;
      *(undefined8 *)pbVar14 = *(undefined8 *)pbVar8;
    }
    *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)pbVar20;
    if (0x10 < uVar19) {
      pbVar8 = pbVar14 + 0x10;
      do {
        *(undefined8 *)pbVar8 =
             *(undefined8 *)(pbVar8 + (longlong)(pbVar20 + (8 - (longlong)(pbVar14 + 0x10))));
        pbVar8 = pbVar8 + 8;
      } while (pbVar8 < pbVar9);
    }
  }
LAB_1414a0cb6:
  bVar3 = (byte)*_Src;
  _Src = (ushort *)((longlong)_Src + 1);
  pbVar20 = pbVar9;
  while( true ) {
    uVar10 = (ulonglong)(bVar3 >> 4);
    if (uVar10 == 0xf) break;
    if (pbVar17 + -0x10 <= _Src || pbVar2 + -0x20 < pbVar20) goto LAB_1414a0dad;
    uVar5 = *(undefined8 *)(_Src + 4);
    puVar11 = (ushort *)((longlong)_Src + uVar10);
    uVar19 = (ulonglong)(bVar3 & 0xf);
    *(undefined8 *)pbVar20 = *(undefined8 *)_Src;
    *(undefined8 *)(pbVar20 + 8) = uVar5;
    pbVar9 = pbVar20 + uVar10;
    uVar10 = (ulonglong)*puVar11;
    pbVar8 = pbVar9 + -uVar10;
    _Src = puVar11 + 1;
    if (uVar19 == 0xf) goto LAB_1414a0e61;
    if ((uVar10 < 8) || (pbVar8 < pbVar16)) goto LAB_1414a0ea0;
    *(undefined8 *)pbVar9 = *(undefined8 *)pbVar8;
    *(undefined8 *)(pbVar9 + 8) = *(undefined8 *)(pbVar8 + 8);
    *(undefined2 *)(pbVar9 + 0x10) = *(undefined2 *)(pbVar8 + 0x10);
    pbVar20 = pbVar9 + uVar19 + 4;
    bVar3 = (byte)*_Src;
    _Src = (ushort *)((longlong)puVar11 + 3);
  }
  uVar10 = uVar12;
  if (pbVar17 + -0xf <= _Src) goto LAB_1414a0fd1;
  do {
    uVar6 = *_Src;
    _Src = (ushort *)((longlong)_Src + 1);
    uVar10 = uVar10 + (byte)uVar6;
    if (pbVar17 + -0xf < _Src) goto LAB_1414a0fd1;
  } while ((byte)uVar6 == 0xff);
  if (((uVar10 == 0xffffffffffffffff) || (uVar10 = uVar10 + 0xf, pbVar20 + uVar10 < pbVar20)) ||
     ((ushort *)(uVar10 + (longlong)_Src) < _Src)) goto LAB_1414a0fd1;
LAB_1414a0dad:
  pbVar9 = pbVar20 + uVar10;
  uVar18 = (uint)bVar3;
LAB_1414a0db1:
  if ((pbVar2 + -0xc < pbVar9) ||
     (puVar11 = (ushort *)(uVar10 + (longlong)_Src), pbVar17 + -8 < puVar11)) {
    pbVar14 = pbVar9;
    if (pbVar17 < (byte *)(uVar10 + (longlong)_Src)) {
      uVar10 = (longlong)pbVar17 - (longlong)_Src;
      pbVar14 = pbVar20 + uVar10;
    }
    _Size = (longlong)pbVar2 - (longlong)pbVar20;
    if (pbVar14 <= pbVar2) {
      _Size = uVar10;
    }
    memmove(pbVar20,_Src,_Size);
    puVar11 = (ushort *)((longlong)_Src + _Size);
    pbVar9 = pbVar20 + _Size;
    pbVar20 = pbVar2;
    if (pbVar14 <= pbVar2) {
      pbVar20 = pbVar14;
    }
    if ((pbVar20 == pbVar2) || (pbVar17 + -2 <= puVar11)) {
LAB_1414a0f99:
      local_68 = (int)param_2;
      return (int)pbVar9 - local_68;
    }
  }
  else {
    lVar13 = (longlong)_Src - (longlong)pbVar20;
    do {
      *(undefined8 *)pbVar20 = *(undefined8 *)(pbVar20 + lVar13);
      pbVar20 = pbVar20 + 8;
    } while (pbVar20 < pbVar9);
  }
  uVar10 = (ulonglong)*puVar11;
  pbVar8 = pbVar9 + -uVar10;
  _Src = puVar11 + 1;
  uVar19 = (ulonglong)(uVar18 & 0xf);
  if (uVar19 == 0xf) {
LAB_1414a0e61:
    uVar15 = uVar12;
    do {
      uVar6 = *_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      uVar15 = uVar15 + (byte)uVar6;
      if (pbVar17 + -4 < _Src) goto LAB_1414a0fd1;
    } while ((byte)uVar6 == 0xff);
    if ((uVar15 == 0xffffffffffffffff) || (uVar19 = uVar19 + uVar15, pbVar9 + uVar19 < pbVar9))
    goto LAB_1414a0fd1;
  }
LAB_1414a0ea0:
  uVar19 = uVar19 + 4;
  pbVar14 = pbVar9;
  goto LAB_1414a0eab;
}

// LZ4_decompress_safe_withPrefix64k @ 1414a0ff0

int __cdecl LZ4_decompress_safe_withPrefix64k(char *param_1,char *param_2,int param_3,int param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ushort *_Src;
  ushort *puVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte *pbVar15;
  uint uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulonglong uVar20;
  byte local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  int local_60;
  
  pbVar2 = (byte *)(param_2 + -0x10000);
  if ((param_1 == (char *)0x0) || (param_4 < 0)) {
    return -1;
  }
  pbVar12 = (byte *)(param_1 + param_3);
  pbVar3 = (byte *)(param_2 + param_4);
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == '\0')) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    uVar13 = 0;
    puVar10 = (ushort *)param_1;
    _Src = (ushort *)param_1;
    pbVar19 = (byte *)param_2;
    if ((ulonglong)(longlong)param_4 < 0x40) goto LAB_1414a1356;
LAB_1414a1091:
    do {
      bVar4 = (byte)*puVar10;
      _Src = (ushort *)((longlong)puVar10 + 1);
      uVar11 = (ulonglong)(bVar4 >> 4);
      if (uVar11 == 0xf) {
        uVar11 = uVar13;
        if (pbVar12 + -0xf <= _Src) goto LAB_1414a1626;
        do {
          uVar7 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar11 = uVar11 + (byte)uVar7;
          if (pbVar12 + -0xf < _Src) goto LAB_1414a1626;
        } while ((byte)uVar7 == 0xff);
        if (uVar11 == 0xffffffffffffffff) goto LAB_1414a1626;
        uVar11 = uVar11 + 0xf;
        pbVar15 = pbVar19 + uVar11;
        if ((pbVar15 < pbVar19) || (puVar10 = (ushort *)(uVar11 + (longlong)_Src), puVar10 < _Src))
        goto LAB_1414a1626;
        uVar16 = (uint)bVar4;
        if (pbVar3 + -0x20 < pbVar15) goto LAB_1414a1451;
        uVar16 = (uint)bVar4;
        if (pbVar12 + -0x20 < puVar10) goto LAB_1414a1451;
        lVar14 = (longlong)pbVar19 - (longlong)_Src;
        do {
          uVar6 = *(undefined8 *)(_Src + 4);
          puVar1 = _Src + 0x10;
          *(undefined8 *)((longlong)_Src + lVar14) = *(undefined8 *)_Src;
          *(undefined8 *)((byte *)((longlong)_Src + lVar14) + 8) = uVar6;
          uVar6 = *(undefined8 *)(_Src + 0xc);
          pbVar19 = (byte *)((longlong)_Src + lVar14 + 0x10);
          *(undefined8 *)pbVar19 = *(undefined8 *)(_Src + 8);
          *(undefined8 *)(pbVar19 + 8) = uVar6;
          _Src = puVar1;
        } while ((byte *)(lVar14 + (longlong)puVar1) < pbVar15);
      }
      else {
        pbVar15 = pbVar19 + uVar11;
        uVar16 = (uint)bVar4;
        if (pbVar12 + -0x11 < _Src) goto LAB_1414a1451;
        uVar6 = *(undefined8 *)((longlong)puVar10 + 9);
        puVar10 = (ushort *)((longlong)_Src + uVar11);
        *(undefined8 *)pbVar19 = *(undefined8 *)_Src;
        *(undefined8 *)(pbVar19 + 8) = uVar6;
      }
      uVar11 = (ulonglong)*puVar10;
      pbVar8 = pbVar15 + -uVar11;
      _Src = puVar10 + 1;
      if ((ulonglong)(bVar4 & 0xf) == 0xf) {
        uVar17 = uVar13;
        do {
          uVar7 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar17 = uVar17 + (byte)uVar7;
          if (pbVar12 + -4 < _Src) goto LAB_1414a1626;
        } while ((byte)uVar7 == 0xff);
        if (uVar17 == 0xffffffffffffffff) goto LAB_1414a1626;
        uVar17 = uVar17 + 0x13;
        if ((pbVar15 + uVar17 < pbVar15) || (pbVar8 < pbVar2)) goto LAB_1414a1626;
        if (pbVar3 + -0x40 <= pbVar15 + uVar17) goto LAB_1414a14ef;
LAB_1414a120c:
        pbVar19 = pbVar15 + uVar17;
        puVar10 = _Src;
        if (0xf < uVar11) {
          lVar14 = (longlong)pbVar15 - (longlong)pbVar8;
          do {
            uVar6 = *(undefined8 *)(pbVar8 + 8);
            pbVar15 = pbVar8 + 0x20;
            *(undefined8 *)(pbVar8 + lVar14) = *(undefined8 *)pbVar8;
            *(undefined8 *)(pbVar8 + lVar14 + 8) = uVar6;
            uVar6 = *(undefined8 *)(pbVar8 + 0x18);
            *(undefined8 *)(pbVar8 + lVar14 + 0x10) = *(undefined8 *)(pbVar8 + 0x10);
            *(undefined8 *)(pbVar8 + lVar14 + 0x10 + 8) = uVar6;
            pbVar8 = pbVar15;
          } while (pbVar15 + lVar14 < pbVar19);
          goto LAB_1414a1091;
        }
        if (uVar11 == 1) {
          bStack_64 = *pbVar8;
          bStack_63 = bStack_64;
          bStack_62 = bStack_64;
          bStack_61 = bStack_64;
        }
        else if (uVar11 == 2) {
          local_68 = (byte)*(undefined2 *)pbVar8;
          bStack_67 = (byte)((ushort)*(undefined2 *)pbVar8 >> 8);
          bStack_62 = local_68;
          bStack_61 = bStack_67;
          bStack_64 = local_68;
          bStack_63 = bStack_67;
        }
        else {
          if (uVar11 != 4) {
            if (uVar11 < 8) {
              pbVar15[0] = 0;
              pbVar15[1] = 0;
              pbVar15[2] = 0;
              pbVar15[3] = 0;
              *pbVar15 = *pbVar8;
              pbVar15[1] = pbVar8[1];
              pbVar15[2] = pbVar8[2];
              pbVar15[3] = pbVar8[3];
              uVar16 = inc32table[uVar11];
              *(undefined4 *)(pbVar15 + 4) = *(undefined4 *)(pbVar8 + uVar16);
              pbVar9 = pbVar8 + uVar16 + -(longlong)dec64table[uVar11];
            }
            else {
              pbVar9 = pbVar8 + 8;
              *(undefined8 *)pbVar15 = *(undefined8 *)pbVar8;
            }
            pbVar15 = pbVar15 + 8;
            lVar14 = (longlong)pbVar9 - (longlong)pbVar15;
            do {
              *(undefined8 *)pbVar15 = *(undefined8 *)(pbVar15 + lVar14);
              pbVar15 = pbVar15 + 8;
            } while (pbVar15 < pbVar19);
            goto LAB_1414a1091;
          }
          uVar5 = *(undefined4 *)pbVar8;
          local_68 = (byte)uVar5;
          bStack_67 = (byte)((uint)uVar5 >> 8);
          bStack_66 = (byte)((uint)uVar5 >> 0x10);
          bStack_65 = (byte)((uint)uVar5 >> 0x18);
          bStack_64 = local_68;
          bStack_63 = bStack_67;
          bStack_62 = bStack_66;
          bStack_61 = bStack_65;
        }
        uVar6 = CONCAT17(bStack_61,
                         CONCAT16(bStack_62,
                                  CONCAT15(bStack_63,
                                           CONCAT14(bStack_64,
                                                    CONCAT13(bStack_61,
                                                             CONCAT12(bStack_62,
                                                                      CONCAT11(bStack_63,bStack_64))
                                                            )))));
        *(undefined8 *)pbVar15 = uVar6;
        pbVar15 = pbVar15 + 8;
        uVar11 = (ulonglong)(pbVar19 + (7 - (longlong)pbVar15)) >> 3;
        if (pbVar19 < pbVar15) {
          uVar11 = uVar13;
        }
        if (uVar11 != 0) {
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined8 *)pbVar15 = uVar6;
            pbVar15 = pbVar15 + 8;
          }
        }
        goto LAB_1414a1091;
      }
      uVar17 = (ulonglong)(bVar4 & 0xf) + 4;
      pbVar19 = pbVar15 + uVar17;
      if (pbVar3 + -0x40 <= pbVar19) goto LAB_1414a14e6;
      if (uVar11 < 8) {
        if (pbVar2 <= pbVar8) goto LAB_1414a120c;
        goto LAB_1414a1626;
      }
      *(undefined8 *)pbVar15 = *(undefined8 *)pbVar8;
      *(undefined8 *)(pbVar15 + 8) = *(undefined8 *)(pbVar8 + 8);
      *(undefined2 *)(pbVar15 + 0x10) = *(undefined2 *)(pbVar8 + 0x10);
      puVar10 = _Src;
    } while( true );
  }
  return -1;
LAB_1414a14e6:
  if (pbVar8 < pbVar2) {
LAB_1414a1626:
    return ((int)param_1 - (int)_Src) + -1;
  }
LAB_1414a14ef:
  pbVar19 = pbVar15 + uVar17;
  if (uVar11 < 8) {
    pbVar15[0] = 0;
    pbVar15[1] = 0;
    pbVar15[2] = 0;
    pbVar15[3] = 0;
    *pbVar15 = *pbVar8;
    pbVar15[1] = pbVar8[1];
    pbVar15[2] = pbVar8[2];
    pbVar15[3] = pbVar8[3];
    uVar16 = inc32table[uVar11];
    *(undefined4 *)(pbVar15 + 4) = *(undefined4 *)(pbVar8 + uVar16);
    pbVar9 = pbVar8 + uVar16 + -(longlong)dec64table[uVar11];
  }
  else {
    pbVar9 = pbVar8 + 8;
    *(undefined8 *)pbVar15 = *(undefined8 *)pbVar8;
  }
  pbVar8 = pbVar15 + 8;
  if (pbVar3 + -0xc < pbVar19) {
    pbVar15 = pbVar3 + -7;
    if (pbVar3 + -5 < pbVar19) goto LAB_1414a1626;
    if (pbVar8 < pbVar15) {
      pbVar18 = pbVar8;
      do {
        *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + ((longlong)pbVar9 - (longlong)pbVar8));
        pbVar18 = pbVar18 + 8;
      } while (pbVar18 < pbVar15);
      pbVar9 = pbVar9 + ((longlong)pbVar15 - (longlong)pbVar8);
      pbVar8 = pbVar15;
    }
    for (; pbVar8 < pbVar19; pbVar8 = pbVar8 + 1) {
      bVar4 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      *pbVar8 = bVar4;
    }
  }
  else {
    *(undefined8 *)pbVar8 = *(undefined8 *)pbVar9;
    if (0x10 < uVar17) {
      pbVar8 = pbVar15 + 0x10;
      do {
        *(undefined8 *)pbVar8 =
             *(undefined8 *)(pbVar8 + (longlong)(pbVar9 + (8 - (longlong)(pbVar15 + 0x10))));
        pbVar8 = pbVar8 + 8;
      } while (pbVar8 < pbVar19);
    }
  }
LAB_1414a1356:
  bVar4 = (byte)*_Src;
  _Src = (ushort *)((longlong)_Src + 1);
  while( true ) {
    uVar11 = (ulonglong)(bVar4 >> 4);
    if (uVar11 == 0xf) break;
    if (pbVar12 + -0x10 <= _Src || pbVar3 + -0x20 < pbVar19) goto LAB_1414a144d;
    uVar6 = *(undefined8 *)(_Src + 4);
    puVar10 = (ushort *)((longlong)_Src + uVar11);
    uVar17 = (ulonglong)(bVar4 & 0xf);
    *(undefined8 *)pbVar19 = *(undefined8 *)_Src;
    *(undefined8 *)(pbVar19 + 8) = uVar6;
    pbVar15 = pbVar19 + uVar11;
    uVar11 = (ulonglong)*puVar10;
    pbVar8 = pbVar15 + -uVar11;
    _Src = puVar10 + 1;
    if (uVar17 == 0xf) goto LAB_1414a14ab;
    if (uVar11 < 8) goto LAB_1414a14e2;
    *(undefined8 *)pbVar15 = *(undefined8 *)pbVar8;
    *(undefined8 *)(pbVar15 + 8) = *(undefined8 *)(pbVar8 + 8);
    *(undefined2 *)(pbVar15 + 0x10) = *(undefined2 *)(pbVar8 + 0x10);
    pbVar19 = pbVar15 + uVar17 + 4;
    bVar4 = (byte)*_Src;
    _Src = (ushort *)((longlong)puVar10 + 3);
  }
  uVar11 = uVar13;
  if (pbVar12 + -0xf <= _Src) goto LAB_1414a1626;
  do {
    uVar7 = *_Src;
    _Src = (ushort *)((longlong)_Src + 1);
    uVar11 = uVar11 + (byte)uVar7;
    if (pbVar12 + -0xf < _Src) goto LAB_1414a1626;
  } while ((byte)uVar7 == 0xff);
  if (((uVar11 == 0xffffffffffffffff) || (uVar11 = uVar11 + 0xf, pbVar19 + uVar11 < pbVar19)) ||
     ((ushort *)(uVar11 + (longlong)_Src) < _Src)) goto LAB_1414a1626;
LAB_1414a144d:
  pbVar15 = pbVar19 + uVar11;
  uVar16 = (uint)bVar4;
LAB_1414a1451:
  if ((pbVar3 + -0xc < pbVar15) ||
     (puVar10 = (ushort *)(uVar11 + (longlong)_Src), pbVar12 + -8 < puVar10)) {
    if (((byte *)(uVar11 + (longlong)_Src) == pbVar12) && (pbVar15 <= pbVar3)) {
      memmove(pbVar19,_Src,uVar11);
      local_60 = (int)param_2;
      return (int)pbVar19 + ((int)uVar11 - local_60);
    }
    goto LAB_1414a1626;
  }
  lVar14 = (longlong)_Src - (longlong)pbVar19;
  do {
    *(undefined8 *)pbVar19 = *(undefined8 *)(pbVar19 + lVar14);
    pbVar19 = pbVar19 + 8;
  } while (pbVar19 < pbVar15);
  uVar11 = (ulonglong)*puVar10;
  _Src = puVar10 + 1;
  pbVar8 = pbVar15 + -uVar11;
  uVar17 = (ulonglong)(uVar16 & 0xf);
  if (uVar17 == 0xf) {
LAB_1414a14ab:
    uVar20 = uVar13;
    do {
      uVar7 = *_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      uVar20 = uVar20 + (byte)uVar7;
      if (pbVar12 + -4 < _Src) goto LAB_1414a1626;
    } while ((byte)uVar7 == 0xff);
    if ((uVar20 == 0xffffffffffffffff) || (uVar17 = uVar17 + uVar20, pbVar15 + uVar17 < pbVar15))
    goto LAB_1414a1626;
  }
LAB_1414a14e2:
  uVar17 = uVar17 + 4;
  goto LAB_1414a14e6;
}

// LZ4_decompress_safe_withSmallPrefix @ 1414a1650

int __cdecl
LZ4_decompress_safe_withSmallPrefix
          (char *param_1,char *param_2,int param_3,int param_4,ulong64 param_5)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort *_Src;
  ushort *puVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  uint uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulonglong uVar19;
  byte *pbVar20;
  byte local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  int local_60;
  
  pbVar20 = (byte *)(param_2 + -param_5);
  if ((param_1 == (char *)0x0) || (param_4 < 0)) {
    return -1;
  }
  pbVar11 = (byte *)(param_1 + param_3);
  pbVar2 = (byte *)(param_2 + param_4);
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == '\0')) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    uVar12 = 0;
    puVar9 = (ushort *)param_1;
    _Src = (ushort *)param_1;
    pbVar18 = (byte *)param_2;
    if ((ulonglong)(longlong)param_4 < 0x40) goto LAB_1414a19d6;
LAB_1414a1700:
    do {
      bVar3 = (byte)*puVar9;
      _Src = (ushort *)((longlong)puVar9 + 1);
      uVar10 = (ulonglong)(bVar3 >> 4);
      if (uVar10 == 0xf) {
        uVar10 = uVar12;
        if (pbVar11 + -0xf <= _Src) goto LAB_1414a1ca6;
        do {
          uVar6 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar10 = uVar10 + (byte)uVar6;
          if (pbVar11 + -0xf < _Src) goto LAB_1414a1ca6;
        } while ((byte)uVar6 == 0xff);
        if (uVar10 == 0xffffffffffffffff) goto LAB_1414a1ca6;
        uVar10 = uVar10 + 0xf;
        pbVar14 = pbVar18 + uVar10;
        if ((pbVar14 < pbVar18) || (puVar9 = (ushort *)(uVar10 + (longlong)_Src), puVar9 < _Src))
        goto LAB_1414a1ca6;
        uVar15 = (uint)bVar3;
        if (pbVar2 + -0x20 < pbVar14) goto LAB_1414a1ad2;
        uVar15 = (uint)bVar3;
        if (pbVar11 + -0x20 < puVar9) goto LAB_1414a1ad2;
        lVar13 = (longlong)pbVar18 - (longlong)_Src;
        do {
          uVar5 = *(undefined8 *)(_Src + 4);
          puVar1 = _Src + 0x10;
          *(undefined8 *)((longlong)_Src + lVar13) = *(undefined8 *)_Src;
          *(undefined8 *)((byte *)((longlong)_Src + lVar13) + 8) = uVar5;
          uVar5 = *(undefined8 *)(_Src + 0xc);
          pbVar18 = (byte *)((longlong)_Src + lVar13 + 0x10);
          *(undefined8 *)pbVar18 = *(undefined8 *)(_Src + 8);
          *(undefined8 *)(pbVar18 + 8) = uVar5;
          _Src = puVar1;
        } while ((byte *)(lVar13 + (longlong)puVar1) < pbVar14);
      }
      else {
        pbVar14 = pbVar18 + uVar10;
        uVar15 = (uint)bVar3;
        if (pbVar11 + -0x11 < _Src) goto LAB_1414a1ad2;
        uVar5 = *(undefined8 *)((longlong)puVar9 + 9);
        puVar9 = (ushort *)((longlong)_Src + uVar10);
        *(undefined8 *)pbVar18 = *(undefined8 *)_Src;
        *(undefined8 *)(pbVar18 + 8) = uVar5;
      }
      uVar10 = (ulonglong)*puVar9;
      pbVar7 = pbVar14 + -uVar10;
      _Src = puVar9 + 1;
      if ((ulonglong)(bVar3 & 0xf) == 0xf) {
        uVar16 = uVar12;
        do {
          uVar6 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar16 = uVar16 + (byte)uVar6;
          if (pbVar11 + -4 < _Src) goto LAB_1414a1ca6;
        } while ((byte)uVar6 == 0xff);
        if (uVar16 == 0xffffffffffffffff) goto LAB_1414a1ca6;
        uVar16 = uVar16 + 0x13;
        if ((pbVar14 + uVar16 < pbVar14) || (pbVar7 < pbVar20)) goto LAB_1414a1ca6;
        if (pbVar2 + -0x40 <= pbVar14 + uVar16) goto LAB_1414a1b6f;
LAB_1414a183a:
        pbVar18 = pbVar14 + uVar16;
        puVar9 = _Src;
        if (0xf < uVar10) {
          lVar13 = (longlong)pbVar14 - (longlong)pbVar7;
          do {
            uVar5 = *(undefined8 *)(pbVar7 + 8);
            pbVar14 = pbVar7 + 0x20;
            *(undefined8 *)(pbVar7 + lVar13) = *(undefined8 *)pbVar7;
            *(undefined8 *)(pbVar7 + lVar13 + 8) = uVar5;
            uVar5 = *(undefined8 *)(pbVar7 + 0x18);
            *(undefined8 *)(pbVar7 + lVar13 + 0x10) = *(undefined8 *)(pbVar7 + 0x10);
            *(undefined8 *)(pbVar7 + lVar13 + 0x10 + 8) = uVar5;
            pbVar7 = pbVar14;
          } while (pbVar14 + lVar13 < pbVar18);
          goto LAB_1414a1700;
        }
        if (uVar10 == 1) {
          bStack_64 = *pbVar7;
          bStack_63 = bStack_64;
          bStack_62 = bStack_64;
          bStack_61 = bStack_64;
        }
        else if (uVar10 == 2) {
          local_68 = (byte)*(undefined2 *)pbVar7;
          bStack_67 = (byte)((ushort)*(undefined2 *)pbVar7 >> 8);
          bStack_62 = local_68;
          bStack_61 = bStack_67;
          bStack_64 = local_68;
          bStack_63 = bStack_67;
        }
        else {
          if (uVar10 != 4) {
            if (uVar10 < 8) {
              pbVar14[0] = 0;
              pbVar14[1] = 0;
              pbVar14[2] = 0;
              pbVar14[3] = 0;
              *pbVar14 = *pbVar7;
              pbVar14[1] = pbVar7[1];
              pbVar14[2] = pbVar7[2];
              pbVar14[3] = pbVar7[3];
              uVar15 = inc32table[uVar10];
              *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar7 + uVar15);
              pbVar8 = pbVar7 + uVar15 + -(longlong)dec64table[uVar10];
            }
            else {
              pbVar8 = pbVar7 + 8;
              *(undefined8 *)pbVar14 = *(undefined8 *)pbVar7;
            }
            pbVar14 = pbVar14 + 8;
            lVar13 = (longlong)pbVar8 - (longlong)pbVar14;
            do {
              *(undefined8 *)pbVar14 = *(undefined8 *)(pbVar14 + lVar13);
              pbVar14 = pbVar14 + 8;
            } while (pbVar14 < pbVar18);
            goto LAB_1414a1700;
          }
          uVar4 = *(undefined4 *)pbVar7;
          local_68 = (byte)uVar4;
          bStack_67 = (byte)((uint)uVar4 >> 8);
          bStack_66 = (byte)((uint)uVar4 >> 0x10);
          bStack_65 = (byte)((uint)uVar4 >> 0x18);
          bStack_64 = local_68;
          bStack_63 = bStack_67;
          bStack_62 = bStack_66;
          bStack_61 = bStack_65;
        }
        uVar5 = CONCAT17(bStack_61,
                         CONCAT16(bStack_62,
                                  CONCAT15(bStack_63,
                                           CONCAT14(bStack_64,
                                                    CONCAT13(bStack_61,
                                                             CONCAT12(bStack_62,
                                                                      CONCAT11(bStack_63,bStack_64))
                                                            )))));
        *(undefined8 *)pbVar14 = uVar5;
        pbVar14 = pbVar14 + 8;
        uVar10 = (ulonglong)(pbVar18 + (7 - (longlong)pbVar14)) >> 3;
        if (pbVar18 < pbVar14) {
          uVar10 = uVar12;
        }
        if (uVar10 != 0) {
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined8 *)pbVar14 = uVar5;
            pbVar14 = pbVar14 + 8;
          }
        }
        goto LAB_1414a1700;
      }
      uVar16 = (ulonglong)(bVar3 & 0xf) + 4;
      if (pbVar2 + -0x40 <= pbVar14 + uVar16) goto LAB_1414a1b66;
      if (pbVar7 < pbVar20) goto LAB_1414a1ca6;
      if (uVar10 < 8) goto LAB_1414a183a;
      *(undefined8 *)pbVar14 = *(undefined8 *)pbVar7;
      *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar7 + 8);
      *(undefined2 *)(pbVar14 + 0x10) = *(undefined2 *)(pbVar7 + 0x10);
      puVar9 = _Src;
      pbVar18 = pbVar14 + uVar16;
    } while( true );
  }
  return -1;
LAB_1414a1b66:
  if (pbVar7 < pbVar20) {
LAB_1414a1ca6:
    return ((int)param_1 - (int)_Src) + -1;
  }
LAB_1414a1b6f:
  pbVar18 = pbVar14 + uVar16;
  if (uVar10 < 8) {
    pbVar14[0] = 0;
    pbVar14[1] = 0;
    pbVar14[2] = 0;
    pbVar14[3] = 0;
    *pbVar14 = *pbVar7;
    pbVar14[1] = pbVar7[1];
    pbVar14[2] = pbVar7[2];
    pbVar14[3] = pbVar7[3];
    uVar15 = inc32table[uVar10];
    *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar7 + uVar15);
    pbVar8 = pbVar7 + uVar15 + -(longlong)dec64table[uVar10];
  }
  else {
    pbVar8 = pbVar7 + 8;
    *(undefined8 *)pbVar14 = *(undefined8 *)pbVar7;
  }
  pbVar7 = pbVar14 + 8;
  if (pbVar2 + -0xc < pbVar18) {
    pbVar14 = pbVar2 + -7;
    if (pbVar2 + -5 < pbVar18) goto LAB_1414a1ca6;
    if (pbVar7 < pbVar14) {
      pbVar17 = pbVar7;
      do {
        *(undefined8 *)pbVar17 = *(undefined8 *)(pbVar17 + ((longlong)pbVar8 - (longlong)pbVar7));
        pbVar17 = pbVar17 + 8;
      } while (pbVar17 < pbVar14);
      pbVar8 = pbVar8 + ((longlong)pbVar14 - (longlong)pbVar7);
      pbVar7 = pbVar14;
    }
    for (; pbVar7 < pbVar18; pbVar7 = pbVar7 + 1) {
      bVar3 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      *pbVar7 = bVar3;
    }
  }
  else {
    *(undefined8 *)pbVar7 = *(undefined8 *)pbVar8;
    if (0x10 < uVar16) {
      pbVar7 = pbVar14 + 0x10;
      do {
        *(undefined8 *)pbVar7 =
             *(undefined8 *)(pbVar7 + (longlong)(pbVar8 + (8 - (longlong)(pbVar14 + 0x10))));
        pbVar7 = pbVar7 + 8;
      } while (pbVar7 < pbVar18);
    }
  }
LAB_1414a19d6:
  bVar3 = (byte)*_Src;
  _Src = (ushort *)((longlong)_Src + 1);
  while( true ) {
    uVar10 = (ulonglong)(bVar3 >> 4);
    if (uVar10 == 0xf) break;
    if (pbVar11 + -0x10 <= _Src || pbVar2 + -0x20 < pbVar18) goto LAB_1414a1ace;
    uVar5 = *(undefined8 *)(_Src + 4);
    puVar9 = (ushort *)((longlong)_Src + uVar10);
    uVar16 = (ulonglong)(bVar3 & 0xf);
    *(undefined8 *)pbVar18 = *(undefined8 *)_Src;
    *(undefined8 *)(pbVar18 + 8) = uVar5;
    pbVar14 = pbVar18 + uVar10;
    uVar10 = (ulonglong)*puVar9;
    pbVar7 = pbVar14 + -uVar10;
    _Src = puVar9 + 1;
    if (uVar16 == 0xf) goto LAB_1414a1b2b;
    if ((uVar10 < 8) || (pbVar7 < pbVar20)) goto LAB_1414a1b62;
    *(undefined8 *)pbVar14 = *(undefined8 *)pbVar7;
    *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar7 + 8);
    *(undefined2 *)(pbVar14 + 0x10) = *(undefined2 *)(pbVar7 + 0x10);
    pbVar18 = pbVar14 + uVar16 + 4;
    bVar3 = (byte)*_Src;
    _Src = (ushort *)((longlong)puVar9 + 3);
  }
  uVar10 = uVar12;
  if (pbVar11 + -0xf <= _Src) goto LAB_1414a1ca6;
  do {
    uVar6 = *_Src;
    _Src = (ushort *)((longlong)_Src + 1);
    uVar10 = uVar10 + (byte)uVar6;
    if (pbVar11 + -0xf < _Src) goto LAB_1414a1ca6;
  } while ((byte)uVar6 == 0xff);
  if (((uVar10 == 0xffffffffffffffff) || (uVar10 = uVar10 + 0xf, pbVar18 + uVar10 < pbVar18)) ||
     ((ushort *)(uVar10 + (longlong)_Src) < _Src)) goto LAB_1414a1ca6;
LAB_1414a1ace:
  pbVar14 = pbVar18 + uVar10;
  uVar15 = (uint)bVar3;
LAB_1414a1ad2:
  if ((pbVar2 + -0xc < pbVar14) ||
     (puVar9 = (ushort *)(uVar10 + (longlong)_Src), pbVar11 + -8 < puVar9)) {
    if (((byte *)(uVar10 + (longlong)_Src) == pbVar11) && (pbVar14 <= pbVar2)) {
      memmove(pbVar18,_Src,uVar10);
      local_60 = (int)param_2;
      return (int)pbVar18 + ((int)uVar10 - local_60);
    }
    goto LAB_1414a1ca6;
  }
  lVar13 = (longlong)_Src - (longlong)pbVar18;
  do {
    *(undefined8 *)pbVar18 = *(undefined8 *)(pbVar18 + lVar13);
    pbVar18 = pbVar18 + 8;
  } while (pbVar18 < pbVar14);
  uVar10 = (ulonglong)*puVar9;
  _Src = puVar9 + 1;
  pbVar7 = pbVar14 + -uVar10;
  uVar16 = (ulonglong)(uVar15 & 0xf);
  if (uVar16 == 0xf) {
LAB_1414a1b2b:
    uVar19 = uVar12;
    do {
      uVar6 = *_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      uVar19 = uVar19 + (byte)uVar6;
      if (pbVar11 + -4 < _Src) goto LAB_1414a1ca6;
    } while ((byte)uVar6 == 0xff);
    if ((uVar19 == 0xffffffffffffffff) || (uVar16 = uVar16 + uVar19, pbVar14 + uVar16 < pbVar14))
    goto LAB_1414a1ca6;
  }
LAB_1414a1b62:
  uVar16 = uVar16 + 4;
  goto LAB_1414a1b66;
}

// LZ4_renormDictT @ 1414a1cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl LZ4_renormDictT(LZ4_stream_t_internal *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  LZ4_stream_t_internal *pLVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar10 = _UNK_15060db2c;
  uVar9 = _UNK_15060db28;
  uVar8 = _UNK_15060db24;
  uVar11 = ___xmm_ffffffffffffffffffffffffffffffff;
  uVar15 = param_1->currentOffset;
  if (0x80000000 < uVar15 + param_2) {
    uVar15 = uVar15 - 0x10000;
    puVar1 = &param_1->dictSize;
    uVar2 = *puVar1;
    puVar3 = param_1->dictionary;
    if (__isa_available < 2) {
      lVar12 = 0x1000;
      pLVar14 = param_1;
      do {
        uVar11 = 0;
        if (uVar15 <= pLVar14->hashTable[0]) {
          uVar11 = pLVar14->hashTable[0] - uVar15;
        }
        pLVar14->hashTable[0] = uVar11;
        lVar12 = lVar12 + -1;
        pLVar14 = (LZ4_stream_t_internal *)(pLVar14->hashTable + 1);
      } while (lVar12 != 0);
    }
    else {
      lVar12 = 0x400;
      pLVar14 = param_1;
      do {
        uVar4 = pLVar14->hashTable[0];
        uVar5 = pLVar14->hashTable[1];
        uVar6 = pLVar14->hashTable[2];
        uVar7 = pLVar14->hashTable[3];
        uVar16 = ~-(uint)(((uVar4 < uVar15) * uVar15 | (uVar4 >= uVar15) * uVar4) == uVar4) & uVar11
        ;
        uVar17 = ~-(uint)(((uVar5 < uVar15) * uVar15 | (uVar5 >= uVar15) * uVar5) == uVar5) & uVar8;
        uVar18 = ~-(uint)(((uVar6 < uVar15) * uVar15 | (uVar6 >= uVar15) * uVar6) == uVar6) & uVar9;
        uVar19 = ~-(uint)(((uVar7 < uVar15) * uVar15 | (uVar7 >= uVar15) * uVar7) == uVar7) & uVar10
        ;
        pLVar14->hashTable[0] = ~uVar16 & (~uVar16 & uVar4) - uVar15 | ~uVar16 & uVar4 & uVar16;
        pLVar14->hashTable[1] = ~uVar17 & (~uVar17 & uVar5) - uVar15 | ~uVar17 & uVar5 & uVar17;
        pLVar14->hashTable[2] = ~uVar18 & (~uVar18 & uVar6) - uVar15 | ~uVar18 & uVar6 & uVar18;
        pLVar14->hashTable[3] = ~uVar19 & (~uVar19 & uVar7) - uVar15 | ~uVar19 & uVar7 & uVar19;
        lVar12 = lVar12 + -1;
        pLVar14 = (LZ4_stream_t_internal *)(pLVar14->hashTable + 4);
      } while (lVar12 != 0);
    }
    uVar13 = (ulonglong)*puVar1;
    param_1->currentOffset = 0x10000;
    if (0x10000 < *puVar1) {
      *puVar1 = 0x10000;
      uVar13 = 0x10000;
    }
    param_1->dictionary = puVar3 + (uVar2 - uVar13);
  }
  return;
}

// LZ4_resetStreamState @ 1414a1dd0

int __cdecl LZ4_resetStreamState(void *param_1,char *param_2)

{
  memset(param_1,0,0x4020);
  return 0;
}

// LZ4_sizeofStreamState @ 1414a1df0

int __cdecl LZ4_sizeofStreamState(void)

{
  return 0x4020;
}

// LZ4_slideInputBuffer @ 1414a1e00

char * __cdecl LZ4_slideInputBuffer(void *param_1)

{
  return *(char **)((longlong)param_1 + 0x4000);
}

// LZ4_uncompress @ 1414a1e10

int __cdecl LZ4_uncompress(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  char *pcVar5;
  char *_Src;
  byte *_Src_00;
  ushort *puVar6;
  ushort *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)param_3;
  pcVar1 = param_2 + uVar10;
  puVar7 = (ushort *)param_1;
  pcVar9 = param_2;
  while( true ) {
    uVar3 = *puVar7;
    _Src_00 = (byte *)((longlong)puVar7 + 1);
    uVar8 = (ulonglong)(byte)((byte)uVar3 >> 4);
    if (uVar8 == 0xf) {
      lVar4 = 0;
      do {
        bVar2 = *_Src_00;
        _Src_00 = _Src_00 + 1;
        lVar4 = lVar4 + (ulonglong)bVar2;
      } while ((ulonglong)bVar2 == 0xff);
      uVar8 = lVar4 + 0xf;
    }
    if (uVar10 < uVar8) {
      return -1;
    }
    memmove(pcVar9,_Src_00,uVar8);
    pcVar9 = pcVar9 + uVar8;
    puVar6 = (ushort *)(_Src_00 + uVar8);
    if ((ulonglong)((longlong)pcVar1 - (longlong)pcVar9) < 0xc) {
      if (pcVar9 != pcVar1) {
        return -1;
      }
      return (int)puVar6 - (int)param_1;
    }
    uVar10 = (ulonglong)((byte)uVar3 & 0xf);
    puVar7 = puVar6 + 1;
    if (uVar10 == 0xf) {
      lVar4 = 0;
      do {
        uVar3 = *puVar7;
        puVar7 = (ushort *)((longlong)puVar7 + 1);
        lVar4 = lVar4 + (ulonglong)(byte)uVar3;
      } while ((ulonglong)(byte)uVar3 == 0xff);
      uVar10 = lVar4 + 0xf;
    }
    uVar8 = uVar10 + 4;
    if ((ulonglong)((longlong)pcVar1 - (longlong)pcVar9) < uVar8) break;
    _Src = pcVar9 + -(ulonglong)*puVar6;
    if ((ulonglong)((longlong)pcVar9 - (longlong)param_2) < (ulonglong)*puVar6) {
      return -1;
    }
    if (uVar8 != 0) {
      if ((uVar8 < 0x10) || ((pcVar9 <= _Src + uVar10 + 3 && (_Src <= pcVar9 + uVar10 + 3)))) {
        pcVar5 = pcVar9;
        uVar10 = uVar8;
        do {
          *pcVar5 = pcVar5[(longlong)_Src - (longlong)pcVar9];
          pcVar5 = pcVar5 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      else {
        memcpy(pcVar9,_Src,uVar8);
      }
    }
    pcVar9 = pcVar9 + uVar8;
    uVar10 = (longlong)pcVar1 - (longlong)pcVar9;
    if (uVar10 < 5) {
      return -1;
    }
  }
  return -1;
}

// LZ4_uncompress_unknownOutputSize @ 1414a1e20

int __cdecl LZ4_uncompress_unknownOutputSize(char *param_1,char *param_2,int param_3,int param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort *_Src;
  ushort *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar13;
  uint uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulonglong uVar18;
  byte *pbVar19;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  
  if ((param_1 == (char *)0x0) || (param_4 < 0)) {
    return -1;
  }
  pbVar19 = (byte *)(param_1 + param_3);
  pbVar2 = (byte *)(param_2 + param_4);
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == '\0')) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    uVar11 = 0;
    puVar9 = (ushort *)param_1;
    _Src = (ushort *)param_1;
    pbVar17 = (byte *)param_2;
    if ((ulonglong)(longlong)param_4 < 0x40) goto LAB_1414c16c6;
LAB_1414c13f0:
    do {
      bVar3 = (byte)*puVar9;
      _Src = (ushort *)((longlong)puVar9 + 1);
      uVar10 = (ulonglong)(bVar3 >> 4);
      if (uVar10 == 0xf) {
        uVar10 = uVar11;
        if (pbVar19 + -0xf <= _Src) goto LAB_1414c1993;
        do {
          uVar6 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar10 = uVar10 + (byte)uVar6;
          if (pbVar19 + -0xf < _Src) goto LAB_1414c1993;
        } while ((byte)uVar6 == 0xff);
        if (uVar10 == 0xffffffffffffffff) goto LAB_1414c1993;
        uVar10 = uVar10 + 0xf;
        pbVar13 = pbVar17 + uVar10;
        if ((pbVar13 < pbVar17) || (puVar9 = (ushort *)(uVar10 + (longlong)_Src), puVar9 < _Src))
        goto LAB_1414c1993;
        uVar14 = (uint)bVar3;
        if (pbVar2 + -0x20 < pbVar13) goto LAB_1414c17c2;
        uVar14 = (uint)bVar3;
        if (pbVar19 + -0x20 < puVar9) goto LAB_1414c17c2;
        lVar12 = (longlong)pbVar17 - (longlong)_Src;
        do {
          uVar5 = *(undefined8 *)(_Src + 4);
          puVar1 = _Src + 0x10;
          *(undefined8 *)((longlong)_Src + lVar12) = *(undefined8 *)_Src;
          *(undefined8 *)((byte *)((longlong)_Src + lVar12) + 8) = uVar5;
          uVar5 = *(undefined8 *)(_Src + 0xc);
          pbVar17 = (byte *)((longlong)_Src + lVar12 + 0x10);
          *(undefined8 *)pbVar17 = *(undefined8 *)(_Src + 8);
          *(undefined8 *)(pbVar17 + 8) = uVar5;
          _Src = puVar1;
        } while ((byte *)(lVar12 + (longlong)puVar1) < pbVar13);
      }
      else {
        pbVar13 = pbVar17 + uVar10;
        uVar14 = (uint)bVar3;
        if (pbVar19 + -0x11 < _Src) goto LAB_1414c17c2;
        uVar5 = *(undefined8 *)((longlong)puVar9 + 9);
        puVar9 = (ushort *)((longlong)_Src + uVar10);
        *(undefined8 *)pbVar17 = *(undefined8 *)_Src;
        *(undefined8 *)(pbVar17 + 8) = uVar5;
      }
      uVar10 = (ulonglong)*puVar9;
      pbVar7 = pbVar13 + -uVar10;
      _Src = puVar9 + 1;
      if ((ulonglong)(bVar3 & 0xf) == 0xf) {
        uVar15 = uVar11;
        do {
          uVar6 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar15 = uVar15 + (byte)uVar6;
          if (pbVar19 + -4 < _Src) goto LAB_1414c1993;
        } while ((byte)uVar6 == 0xff);
        if (uVar15 == 0xffffffffffffffff) goto LAB_1414c1993;
        uVar15 = uVar15 + 0x13;
        if ((pbVar13 + uVar15 < pbVar13) || (pbVar7 < param_2)) goto LAB_1414c1993;
        if (pbVar2 + -0x40 <= pbVar13 + uVar15) goto LAB_1414c185f;
LAB_1414c152a:
        pbVar17 = pbVar13 + uVar15;
        puVar9 = _Src;
        if (0xf < uVar10) {
          lVar12 = (longlong)pbVar13 - (longlong)pbVar7;
          do {
            uVar5 = *(undefined8 *)(pbVar7 + 8);
            pbVar13 = pbVar7 + 0x20;
            *(undefined8 *)(pbVar7 + lVar12) = *(undefined8 *)pbVar7;
            *(undefined8 *)(pbVar7 + lVar12 + 8) = uVar5;
            uVar5 = *(undefined8 *)(pbVar7 + 0x18);
            *(undefined8 *)(pbVar7 + lVar12 + 0x10) = *(undefined8 *)(pbVar7 + 0x10);
            *(undefined8 *)(pbVar7 + lVar12 + 0x10 + 8) = uVar5;
            pbVar7 = pbVar13;
          } while (pbVar13 + lVar12 < pbVar17);
          goto LAB_1414c13f0;
        }
        if (uVar10 == 1) {
          bStack_64 = *pbVar7;
          bStack_63 = bStack_64;
          bStack_62 = bStack_64;
          bStack_61 = bStack_64;
        }
        else if (uVar10 == 2) {
          bStack_68 = (byte)*(undefined2 *)pbVar7;
          bStack_67 = (byte)((ushort)*(undefined2 *)pbVar7 >> 8);
          bStack_62 = bStack_68;
          bStack_61 = bStack_67;
          bStack_64 = bStack_68;
          bStack_63 = bStack_67;
        }
        else {
          if (uVar10 != 4) {
            if (uVar10 < 8) {
              pbVar13[0] = 0;
              pbVar13[1] = 0;
              pbVar13[2] = 0;
              pbVar13[3] = 0;
              *pbVar13 = *pbVar7;
              pbVar13[1] = pbVar7[1];
              pbVar13[2] = pbVar7[2];
              pbVar13[3] = pbVar7[3];
              uVar14 = inc32table[uVar10];
              *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar7 + uVar14);
              pbVar8 = pbVar7 + uVar14 + -(longlong)dec64table[uVar10];
            }
            else {
              pbVar8 = pbVar7 + 8;
              *(undefined8 *)pbVar13 = *(undefined8 *)pbVar7;
            }
            pbVar13 = pbVar13 + 8;
            lVar12 = (longlong)pbVar8 - (longlong)pbVar13;
            do {
              *(undefined8 *)pbVar13 = *(undefined8 *)(pbVar13 + lVar12);
              pbVar13 = pbVar13 + 8;
            } while (pbVar13 < pbVar17);
            goto LAB_1414c13f0;
          }
          uVar4 = *(undefined4 *)pbVar7;
          bStack_68 = (byte)uVar4;
          bStack_67 = (byte)((uint)uVar4 >> 8);
          bStack_66 = (byte)((uint)uVar4 >> 0x10);
          bStack_65 = (byte)((uint)uVar4 >> 0x18);
          bStack_64 = bStack_68;
          bStack_63 = bStack_67;
          bStack_62 = bStack_66;
          bStack_61 = bStack_65;
        }
        uVar5 = CONCAT17(bStack_61,
                         CONCAT16(bStack_62,
                                  CONCAT15(bStack_63,
                                           CONCAT14(bStack_64,
                                                    CONCAT13(bStack_61,
                                                             CONCAT12(bStack_62,
                                                                      CONCAT11(bStack_63,bStack_64))
                                                            )))));
        *(undefined8 *)pbVar13 = uVar5;
        pbVar13 = pbVar13 + 8;
        uVar10 = (ulonglong)(pbVar17 + (7 - (longlong)pbVar13)) >> 3;
        if (pbVar17 < pbVar13) {
          uVar10 = uVar11;
        }
        if (uVar10 != 0) {
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined8 *)pbVar13 = uVar5;
            pbVar13 = pbVar13 + 8;
          }
        }
        goto LAB_1414c13f0;
      }
      uVar15 = (ulonglong)(bVar3 & 0xf) + 4;
      if (pbVar2 + -0x40 <= pbVar13 + uVar15) goto LAB_1414c1856;
      if (pbVar7 < param_2) goto LAB_1414c1993;
      if (uVar10 < 8) goto LAB_1414c152a;
      *(undefined8 *)pbVar13 = *(undefined8 *)pbVar7;
      *(undefined8 *)(pbVar13 + 8) = *(undefined8 *)(pbVar7 + 8);
      *(undefined2 *)(pbVar13 + 0x10) = *(undefined2 *)(pbVar7 + 0x10);
      puVar9 = _Src;
      pbVar17 = pbVar13 + uVar15;
    } while( true );
  }
  return -1;
LAB_1414c1856:
  if (pbVar7 < param_2) {
LAB_1414c1993:
    return ((int)param_1 - (int)_Src) + -1;
  }
LAB_1414c185f:
  pbVar17 = pbVar13 + uVar15;
  if (uVar10 < 8) {
    pbVar13[0] = 0;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    *pbVar13 = *pbVar7;
    pbVar13[1] = pbVar7[1];
    pbVar13[2] = pbVar7[2];
    pbVar13[3] = pbVar7[3];
    uVar14 = inc32table[uVar10];
    *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar7 + uVar14);
    pbVar8 = pbVar7 + uVar14 + -(longlong)dec64table[uVar10];
  }
  else {
    pbVar8 = pbVar7 + 8;
    *(undefined8 *)pbVar13 = *(undefined8 *)pbVar7;
  }
  pbVar7 = pbVar13 + 8;
  if (pbVar2 + -0xc < pbVar17) {
    pbVar13 = pbVar2 + -7;
    if (pbVar2 + -5 < pbVar17) goto LAB_1414c1993;
    if (pbVar7 < pbVar13) {
      pbVar16 = pbVar7;
      do {
        *(undefined8 *)pbVar16 = *(undefined8 *)(pbVar16 + ((longlong)pbVar8 - (longlong)pbVar7));
        pbVar16 = pbVar16 + 8;
      } while (pbVar16 < pbVar13);
      pbVar8 = pbVar8 + ((longlong)pbVar13 - (longlong)pbVar7);
      pbVar7 = pbVar13;
    }
    for (; pbVar7 < pbVar17; pbVar7 = pbVar7 + 1) {
      bVar3 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      *pbVar7 = bVar3;
    }
  }
  else {
    *(undefined8 *)pbVar7 = *(undefined8 *)pbVar8;
    if (0x10 < uVar15) {
      pbVar7 = pbVar13 + 0x10;
      do {
        *(undefined8 *)pbVar7 =
             *(undefined8 *)(pbVar7 + (longlong)(pbVar8 + (8 - (longlong)(pbVar13 + 0x10))));
        pbVar7 = pbVar7 + 8;
      } while (pbVar7 < pbVar17);
    }
  }
LAB_1414c16c6:
  bVar3 = (byte)*_Src;
  _Src = (ushort *)((longlong)_Src + 1);
  while( true ) {
    uVar10 = (ulonglong)(bVar3 >> 4);
    if (uVar10 == 0xf) break;
    if (pbVar19 + -0x10 <= _Src || pbVar2 + -0x20 < pbVar17) goto LAB_1414c17be;
    uVar5 = *(undefined8 *)(_Src + 4);
    puVar9 = (ushort *)((longlong)_Src + uVar10);
    uVar15 = (ulonglong)(bVar3 & 0xf);
    *(undefined8 *)pbVar17 = *(undefined8 *)_Src;
    *(undefined8 *)(pbVar17 + 8) = uVar5;
    pbVar13 = pbVar17 + uVar10;
    uVar10 = (ulonglong)*puVar9;
    pbVar7 = pbVar13 + -uVar10;
    _Src = puVar9 + 1;
    if (uVar15 == 0xf) goto LAB_1414c181b;
    if ((uVar10 < 8) || (pbVar7 < param_2)) goto LAB_1414c1852;
    *(undefined8 *)pbVar13 = *(undefined8 *)pbVar7;
    *(undefined8 *)(pbVar13 + 8) = *(undefined8 *)(pbVar7 + 8);
    *(undefined2 *)(pbVar13 + 0x10) = *(undefined2 *)(pbVar7 + 0x10);
    pbVar17 = pbVar13 + uVar15 + 4;
    bVar3 = (byte)*_Src;
    _Src = (ushort *)((longlong)puVar9 + 3);
  }
  uVar10 = uVar11;
  if (pbVar19 + -0xf <= _Src) goto LAB_1414c1993;
  do {
    uVar6 = *_Src;
    _Src = (ushort *)((longlong)_Src + 1);
    uVar10 = uVar10 + (byte)uVar6;
    if (pbVar19 + -0xf < _Src) goto LAB_1414c1993;
  } while ((byte)uVar6 == 0xff);
  if (((uVar10 == 0xffffffffffffffff) || (uVar10 = uVar10 + 0xf, pbVar17 + uVar10 < pbVar17)) ||
     ((ushort *)(uVar10 + (longlong)_Src) < _Src)) goto LAB_1414c1993;
LAB_1414c17be:
  pbVar13 = pbVar17 + uVar10;
  uVar14 = (uint)bVar3;
LAB_1414c17c2:
  if ((pbVar2 + -0xc < pbVar13) ||
     (puVar9 = (ushort *)(uVar10 + (longlong)_Src), pbVar19 + -8 < puVar9)) {
    if (((byte *)(uVar10 + (longlong)_Src) == pbVar19) && (pbVar13 <= pbVar2)) {
      memmove(pbVar17,_Src,uVar10);
      return (int)pbVar17 + ((int)uVar10 - (int)param_2);
    }
    goto LAB_1414c1993;
  }
  lVar12 = (longlong)_Src - (longlong)pbVar17;
  do {
    *(undefined8 *)pbVar17 = *(undefined8 *)(pbVar17 + lVar12);
    pbVar17 = pbVar17 + 8;
  } while (pbVar17 < pbVar13);
  uVar10 = (ulonglong)*puVar9;
  _Src = puVar9 + 1;
  pbVar7 = pbVar13 + -uVar10;
  uVar15 = (ulonglong)(uVar14 & 0xf);
  if (uVar15 == 0xf) {
LAB_1414c181b:
    uVar18 = uVar11;
    do {
      uVar6 = *_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      uVar18 = uVar18 + (byte)uVar6;
      if (pbVar19 + -4 < _Src) goto LAB_1414c1993;
    } while ((byte)uVar6 == 0xff);
    if ((uVar18 == 0xffffffffffffffff) || (uVar15 = uVar15 + uVar18, pbVar13 + uVar15 < pbVar13))
    goto LAB_1414c1993;
  }
LAB_1414c1852:
  uVar15 = uVar15 + 4;
  goto LAB_1414c1856;
}

// Launched @ 1414a2360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TaskTrace::Launched(ulong64 param_1,wchar_t *param_2,bool param_3,Type param_4,ulong64 param_5)

{
  wchar_t wVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  FLogScope local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) {
    if ((param_1 == 0xffffffffffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TaskId != InvalidId",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                           ,0x80,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (-1 < TaskChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceLaunchedFields>
                ((TLogScope<1> *)&local_30);
      QueryPerformanceCounter(&local_38);
      pwVar5 = L"";
      if (param_2 != (wchar_t *)0x0) {
        pwVar5 = param_2;
      }
      iVar6 = 0;
      *(LARGE_INTEGER *)local_30.Ptr = local_38;
      ((LARGE_INTEGER *)((longlong)local_30.Ptr + 8))->QuadPart = param_1;
      wVar1 = *pwVar5;
      pwVar3 = pwVar5;
      while (wVar1 != L'\0') {
        pwVar3 = pwVar3 + 1;
        iVar6 = iVar6 + 1;
        wVar1 = *pwVar3;
      }
      UE::Trace::Private::Field_WriteStringWide(2,pwVar5,iVar6);
      *(bool *)((longlong)local_30.Ptr + 0x10) = param_3;
      *(Type *)((longlong)local_30.Ptr + 0x11) = param_4;
      *(ulong64 *)((longlong)local_30.Ptr + 0x15) = param_5;
      UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_30,&local_30);
    }
  }
  return;
}

// Scheduled @ 1414b03a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TaskTrace::Scheduled(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) {
    if (param_1 == 0xffffffffffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskId != InvalidId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                         ,0x95,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (-1 < TaskChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceScheduledFields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1].QuadPart = param_1;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// SetTaskThreadPriority @ 1414b0850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SetTaskThreadPriority(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FTaskGraphInterface *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  FStaticBasicLogRecord *pFVar8;
  EThreadPriority EVar9;
  wchar_t *pwVar10;
  
  pwVar10 = L"";
  EVar9 = TPri_Normal;
  if (param_1->ArrayNum == 0) {
LAB_1414b08f1:
    if (param_1->ArrayNum != 0) {
      if ((param_1->ArrayNum < 1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) != 0) {
        pwVar10 = *(wchar_t **)pFVar1;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar10,L"belownormal");
      if (iVar5 == 0) {
        EVar9 = TPri_BelowNormal;
        if ((byte)LogConsoleResponse._0_1_ < 4) goto LAB_1414b097c;
        pFVar8 = &LOG_Static;
        EVar9 = TPri_BelowNormal;
        goto LAB_1414b0970;
      }
    }
    if ((byte)LogConsoleResponse._0_1_ < 4) goto LAB_1414b097c;
    pFVar8 = &LOG_Static;
    EVar9 = TPri_Normal;
  }
  else {
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)pFVar1;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar7,L"abovenormal");
    if (iVar5 != 0) goto LAB_1414b08f1;
    EVar9 = TPri_AboveNormal;
    if ((byte)LogConsoleResponse._0_1_ < 4) goto LAB_1414b097c;
    pFVar8 = &LOG_Static;
    EVar9 = TPri_AboveNormal;
  }
LAB_1414b0970:
  UE::Logging::Private::BasicLog<4>(pFVar8,(FLogCategoryBase *)&LogConsoleResponse);
LAB_1414b097c:
  pFVar3 = TaskGraphImplementationSingleton;
  bVar4 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar4) {
    bVar4 = FForkProcessHelper::IsForkedMultithreadInstance();
    if (!bVar4) {
      return;
    }
    if (GAllowTaskGraphForkMultithreading == false) {
      return;
    }
  }
  iVar5 = *(int *)(pFVar3 + 4);
  iVar6 = iVar5;
  if (GNumForegroundWorkers < iVar5) {
    iVar6 = GNumForegroundWorkers;
  }
  iVar6 = iVar5 - iVar6;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  iVar5 = iVar5 - iVar6;
  *(int *)&pFVar3[4].field_0x4 = iVar6;
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  *(int *)(pFVar3 + 5) = iVar5;
  LowLevelTasks::FScheduler::StopWorkers(&LowLevelTasks::FScheduler::Singleton,true);
  bVar4 = FForkProcessHelper::IsForkedMultithreadInstance();
  LowLevelTasks::FScheduler::StartWorkers
            (&LowLevelTasks::FScheduler::Singleton,*(uint *)(pFVar3 + 5),
             *(uint *)&pFVar3[4].field_0x4,bVar4 ^ NonForkable,EVar9,TPri_BelowNormal,0,0);
  return;
}

// Started @ 1414b17e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TaskTrace::Started(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) {
    if (param_1 == 0xffffffffffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskId != InvalidId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                         ,0xbd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (-1 < TaskChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceStartedFields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1].QuadPart = param_1;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// SubsequentAdded @ 1414b20f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TaskTrace::SubsequentAdded(ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((-1 < TaskChannel->Enabled) && (bGTaskTraceInitialized)) {
    if (param_1 == 0xffffffffffffffff) {
      param_1 = GenerateTaskId();
    }
    if (param_2 == 0xffffffffffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubsequentId != InvalidId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                         ,0xac,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (-1 < TaskChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceSubsequentAddedFields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      local_20[1].QuadPart = param_1;
      local_20[2].QuadPart = param_2;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// TestAppliedColorTransforms @ 1414b2210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl TestAppliedColorTransforms(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  FColorSpace *pFVar5;
  FColorSpace *pFVar6;
  undefined4 *puVar7;
  FAutomationTestFramework *pFVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auStack_378 [32];
  FString local_358;
  TMatrix<double> local_348;
  FColorSpace local_2c8;
  FColorSpace local_178;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  pFVar5 = UE::Color::FColorSpace::FColorSpace(&local_2c8,ACESAP1);
  pFVar6 = UE::Color::FColorSpace::FColorSpace(&local_178,sRGB);
  UE::Color::CalcColorSpaceTransformMatrix(&local_348,pFVar6,pFVar5,Bradford);
  puVar7 = operator_new(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0x3f800000;
    *(undefined8 *)(puVar7 + 2) = 0x3f000000;
    puVar7[4] = 0x3f800000;
  }
  dVar3 = (double)(float)puVar7[1];
  dVar4 = (double)(float)puVar7[2];
  dVar10 = (double)(float)puVar7[3];
  dVar11 = (double)(float)puVar7[4];
  auVar9._8_4_ = SUB84(dVar4,0);
  auVar9._0_8_ = dVar4;
  auVar9._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  if ((((__real_322bcc77 <=
         (float)((uint)((float)(dVar4 * local_348.M[1][0] + dVar3 * local_348.M[0][0] +
                                dVar10 * local_348.M[2][0] + dVar11 * local_348.M[3][0]) -
                       ___real_3f486972) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <=
        (float)((uint)((float)(auVar9._8_8_ * local_348.M[1][1] + dVar3 * local_348.M[0][1] +
                               dVar10 * local_348.M[2][1] + dVar11 * local_348.M[3][1]) -
                      ___real_3f07434d) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
      (__real_322bcc77 <=
       (float)((uint)((float)(dVar4 * local_348.M[1][2] + dVar3 * local_348.M[0][2] +
                              dVar10 * local_348.M[2][2] + dVar11 * local_348.M[3][2]) -
                     ___real_3d9a6b91) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_322bcc77 <=
      (float)((uint)((float)(dVar4 * local_348.M[1][3] + dVar3 * local_348.M[0][3] +
                             dVar10 * local_348.M[2][3] + dVar11 * local_348.M[3][3]) -
                    __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString(&local_358,L"FLinearColor sRGB->AP1 color transform");
    (*pcVar2)(pFVar1,&local_358,0);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
  }
  operator_delete(puVar7,0x14);
  return;
}

// TestColorSpaceTransforms @ 1414b2980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TestColorSpaceTransforms(EChromaticAdaptationMethod param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  FColorSpace *pFVar7;
  longlong lVar8;
  FAutomationTestFramework *pFVar9;
  longlong lVar10;
  int iVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_4b8 [32];
  int local_498;
  FString local_488;
  double local_478 [4];
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  TMatrix<double> local_3f8;
  TMatrix<double> local_378;
  FColorSpace local_2f8;
  FColorSpace local_1a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  UE::Color::FColorSpace::FColorSpace(&local_2f8,ACESAP1);
  if (param_1 == None) {
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,sRGB);
    UE::Color::CalcColorSpaceTransformMatrix(&local_3f8,&local_2f8,pFVar7,None);
    uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar4 = _UNK_15061cbc8;
    dVar17 = ___xmm_3ff00000000000000000000000000000;
    dVar3 = __real_3e45798ee0000000;
    lVar13 = 0;
    local_478[0] = local_3f8.M[0][0];
    local_478[1] = local_3f8.M[0][1];
    local_478[2] = local_3f8.M[0][2];
    local_478[3] = local_3f8.M[0][3];
    local_458 = local_3f8.M[1][0];
    dStack_450 = local_3f8.M[1][1];
    local_448 = local_3f8.M[1][2];
    dStack_440 = local_3f8.M[1][3];
    local_438 = local_3f8.M[2][0];
    dStack_430 = local_3f8.M[2][1];
    local_428 = local_3f8.M[2][2];
    dStack_420 = local_3f8.M[2][3];
    local_418 = local_3f8.M[3][0];
    dStack_410 = local_3f8.M[3][1];
    local_408 = local_3f8.M[3][2];
    dStack_400 = local_3f8.M[3][3];
    local_3f8.M[2][2] = ___xmm_00000000000000003ff10cd956af1f79;
    local_3f8.M[2][3] = _UNK_15061c8b8;
    local_3f8.M[3][0] = 0.0;
    local_3f8.M[3][1] = 0.0;
    local_3f8.M[0][0] = ___xmm_bfc0d8e398e983233ffbb3373479ce30;
    local_3f8.M[0][1] = _UNK_15061cd98;
    local_3f8.M[0][2] = ___xmm_0000000000000000bf99286b85a4157a;
    local_3f8.M[0][3] = _UNK_15061c9a8;
    local_3f8.M[1][0] = ___xmm_3ff2284f91114fa9bfe354522b282be6;
    local_3f8.M[1][1] = _UNK_15061cc38;
    local_3f8.M[1][2] = ___xmm_0000000000000000bfc01896d8ec3f07;
    local_3f8.M[1][3] = _UNK_15061ca18;
    local_3f8.M[2][0] = ___xmm_bf81c685b7a98666bfb481f05620d3bb;
    local_3f8.M[2][1] = _UNK_15061ccd8;
    local_3f8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_3f8.M[3][3] = _UNK_15061cbc8;
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar16 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar15,uVar14) &&
            (double)CONCAT44(uVar15,uVar14) != __real_3e45798ee0000000) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,L"AP1->Rec709 without chromatic adaptation");
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          goto LAB_1414b2b5f;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
LAB_1414b2b5f:
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,Rec2020);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,None);
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[2][2] = ___xmm_00000000000000003fee7942e9f7377f;
    local_3f8.M[2][3] = _UNK_15061c7f8;
    local_3f8.M[3][0] = 0.0;
    local_3f8.M[3][1] = 0.0;
    local_3f8.M[0][0] = ___xmm_bf5b938ca012a6163ff0ab2d7140ccb1;
    local_3f8.M[0][1] = _UNK_15061cca8;
    local_3f8.M[0][2] = ___xmm_0000000000000000bf7556c0943b417e;
    local_3f8.M[0][3] = _UNK_15061c958;
    local_3f8.M[1][0] = ___xmm_3ff0017fd4fe9fdbbf85ffac24d0c044;
    local_3f8.M[1][1] = _UNK_15061cbd8;
    local_3f8.M[1][2] = ___xmm_0000000000000000bf972f51b2e4ad7b;
    local_3f8.M[1][3] = _UNK_15061c988;
    local_3f8.M[2][0] = ___xmm_bf571277098c9878bf7c840e1ba881aa;
    local_3f8.M[2][1] = _UNK_15061cc98;
    local_3f8.M[3][2] = dVar17;
    local_3f8.M[3][3] = dVar4;
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar16 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar16,0) & uVar5;
        uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & uVar6;
        if (dVar3 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar3) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,L"AP1->Rec709 without chromatic adaptation");
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          goto LAB_1414b2cdf;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
LAB_1414b2cdf:
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,ACESAP0);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,None);
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[2][2] = ___xmm_00000000000000003ff0062591a3c5b1;
    local_3f8.M[2][3] = _UNK_15061c828;
    local_3f8.M[3][0] = 0.0;
    local_3f8.M[3][1] = 0.0;
    local_3f8.M[0][0] = ___xmm_3fa6ef50214671e23fe641250f122341;
    local_3f8.M[0][1] = _UNK_15061ca88;
    local_3f8.M[0][2] = ___xmm_0000000000000000bf76a24ecde5dd52;
    local_3f8.M[0][3] = _UNK_15061c968;
    local_3f8.M[1][0] = ___xmm_3feb826d0160e8e13fc201c2704b1e16;
    local_3f8.M[1][1] = _UNK_15061cbb8;
    local_3f8.M[1][2] = ___xmm_00000000000000003f707cbd29fab368;
    local_3f8.M[1][3] = _UNK_15061c748;
    local_3f8.M[2][0] = ___xmm_3fb874efe45be0983fc4f9a953848558;
    local_3f8.M[2][1] = _UNK_15061cae8;
    local_3f8.M[3][2] = dVar17;
    local_3f8.M[3][3] = dVar4;
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar16 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar16,0) & uVar5;
        uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & uVar6;
        if (dVar3 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar3) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,L"AP1->Rec709 without chromatic adaptation");
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          goto LAB_1414b2e5f;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
LAB_1414b2e5f:
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,ACESAP1);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,None);
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_3f8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_3f8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_3f8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_3f8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_3f8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_3f8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_3f8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_3f8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_3f8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_3f8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_3f8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_3f8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    local_3f8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_3f8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    local_3f8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar16 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar16,0) & uVar5;
        uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & uVar6;
        if (dVar3 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar3) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,L"AP1->Rec709 without chromatic adaptation");
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          goto LAB_1414b2fdf;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
LAB_1414b2fdf:
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,P3DCI);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,None);
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[2][2] = ___xmm_00000000000000003ff1d3242e5ff330;
    local_3f8.M[2][3] = _UNK_15061c8c8;
    local_3f8.M[3][0] = 0.0;
    local_3f8.M[3][1] = 0.0;
    local_3f8.M[0][0] = ___xmm_bfb120089c8cb1ee3ff87e0b97a7edc0;
    local_3f8.M[0][1] = _UNK_15061cd48;
    local_3f8.M[0][2] = ___xmm_0000000000000000bf65e864605b20d6;
    local_3f8.M[0][3] = _UNK_15061c938;
    local_3f8.M[1][0] = ___xmm_3ff08556ff91534ebfd4a89900ea9482;
    local_3f8.M[1][1] = _UNK_15061cbf8;
    local_3f8.M[1][2] = ___xmm_0000000000000000bfa920d7cd94183e;
    local_3f8.M[1][3] = _UNK_15061c9f8;
    local_3f8.M[2][0] = ___xmm_bf85b1e51ca05658bfb2ddd19fbb331d;
    local_3f8.M[2][1] = _UNK_15061cd08;
    local_3f8.M[3][2] = dVar17;
    local_3f8.M[3][3] = dVar4;
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar16 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar16,0) & uVar5;
        uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & uVar6;
        if (dVar3 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar3) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,L"AP1->Rec709 without chromatic adaptation");
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          goto LAB_1414b315f;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
LAB_1414b315f:
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,P3D65);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,None);
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[2][2] = ___xmm_00000000000000003feefc34bdad6d0e;
    local_3f8.M[2][3] = _UNK_15061c808;
    local_3f8.M[3][0] = 0.0;
    local_3f8.M[3][1] = 0.0;
    local_3f8.M[0][0] = ___xmm_bfb1dd41bab52cb63ff6688ade0afccf;
    local_3f8.M[0][1] = _UNK_15061cd68;
    local_3f8.M[0][2] = ___xmm_0000000000000000bf630a9807de7dc4;
    local_3f8.M[0][3] = _UNK_15061c918;
    local_3f8.M[1][0] = ___xmm_3ff13be2d610ffc0bfd2e69a93c322c4;
    local_3f8.M[1][1] = _UNK_15061cc18;
    local_3f8.M[1][2] = ___xmm_0000000000000000bfa5d72c95baf233;
    local_3f8.M[1][3] = _UNK_15061c9c8;
    local_3f8.M[2][0] = ___xmm_bf86a19c8ae150e6bfb142dc8213d604;
    local_3f8.M[2][1] = _UNK_15061cd18;
    local_3f8.M[3][2] = dVar17;
    local_3f8.M[3][3] = dVar4;
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar17 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar17,0) & uVar5;
        uVar15 = (uint)((ulonglong)dVar17 >> 0x20) & uVar6;
        if (dVar3 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar3) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pwVar12 = L"AP1->Rec709 without chromatic adaptation";
LAB_1414b3bab:
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,pwVar12);
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_488.Data.AllocatorInstance.Data);
          return;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
  }
  else if (param_1 == Bradford) {
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,sRGB);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,Bradford);
    uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar4 = _UNK_15061cbc8;
    dVar17 = ___xmm_3ff00000000000000000000000000000;
    dVar3 = __real_3e45798ee0000000;
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[2][2] = ___xmm_00000000000000003ff272931dede95f;
    local_3f8.M[2][3] = _UNK_15061c8d8;
    local_3f8.M[3][0] = 0.0;
    local_3f8.M[3][1] = 0.0;
    local_3f8.M[0][0] = ___xmm_bfc0ac3e06a4b2283ffb47e38cb7cae6;
    local_3f8.M[0][1] = _UNK_15061cd88;
    local_3f8.M[0][2] = ___xmm_0000000000000000bf98945601e14168;
    local_3f8.M[0][3] = _UNK_15061c998;
    local_3f8.M[1][0] = ___xmm_3ff240bc77abba59bfe3e5b896e43bcf;
    local_3f8.M[1][1] = _UNK_15061cc48;
    local_3f8.M[1][2] = ___xmm_0000000000000000bfc0820e2f32ea83;
    local_3f8.M[1][3] = _UNK_15061ca28;
    local_3f8.M[2][0] = ___xmm_bf859a5b6b6993abbfb5507414589cf7;
    local_3f8.M[2][1] = _UNK_15061ccf8;
    local_3f8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_3f8.M[3][3] = _UNK_15061cbc8;
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar16 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar15,uVar14) &&
            (double)CONCAT44(uVar15,uVar14) != __real_3e45798ee0000000) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,L"AP1->Rec709 with Bradford chromatic adaptation");
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          goto LAB_1414b345f;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
LAB_1414b345f:
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,Rec2020);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,Bradford);
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[2][2] = ___xmm_00000000000000003ff07c1f713f1c72;
    local_3f8.M[2][3] = _UNK_15061c868;
    local_3f8.M[3][0] = 0.0;
    local_3f8.M[3][1] = 0.0;
    local_3f8.M[0][0] = ___xmm_bf624dd0007eebd83ff069c735eab8bd;
    local_3f8.M[0][1] = _UNK_15061ccb8;
    local_3f8.M[0][2] = ___xmm_0000000000000000bf7488e14994af74;
    local_3f8.M[0][3] = _UNK_15061c948;
    local_3f8.M[1][0] = ___xmm_3ff012c94bb9edf2bf9488d2db5272be;
    local_3f8.M[1][1] = _UNK_15061cbe8;
    local_3f8.M[1][2] = ___xmm_0000000000000000bf99e5a3fd5d0efe;
    local_3f8.M[1][3] = _UNK_15061c9b8;
    local_3f8.M[2][0] = ___xmm_bf6344c773277d5dbf77a3ea7d2893b9;
    local_3f8.M[2][1] = _UNK_15061ccc8;
    local_3f8.M[3][2] = dVar17;
    local_3f8.M[3][3] = dVar4;
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar16 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar16,0) & uVar5;
        uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & uVar6;
        if (dVar3 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar3) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,L"AP1->Rec709 with Bradford chromatic adaptation");
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          goto LAB_1414b35df;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
LAB_1414b35df:
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,ACESAP0);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,Bradford);
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[2][2] = ___xmm_00000000000000003ff0062591a3c5b1;
    local_3f8.M[2][3] = _UNK_15061c828;
    local_3f8.M[3][0] = 0.0;
    local_3f8.M[3][1] = 0.0;
    local_3f8.M[0][0] = ___xmm_3fa6ef50214671e23fe641250f122341;
    local_3f8.M[0][1] = _UNK_15061ca88;
    local_3f8.M[0][2] = ___xmm_0000000000000000bf76a24ecde5dd52;
    local_3f8.M[0][3] = _UNK_15061c968;
    local_3f8.M[1][0] = ___xmm_3feb826d0160e8e13fc201c2704b1e16;
    local_3f8.M[1][1] = _UNK_15061cbb8;
    local_3f8.M[1][2] = ___xmm_00000000000000003f707cbd29fab368;
    local_3f8.M[1][3] = _UNK_15061c748;
    local_3f8.M[2][0] = ___xmm_3fb874efe45be0983fc4f9a953848558;
    local_3f8.M[2][1] = _UNK_15061cae8;
    local_3f8.M[3][2] = dVar17;
    local_3f8.M[3][3] = dVar4;
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar16 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar16,0) & uVar5;
        uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & uVar6;
        if (dVar3 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar3) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,L"AP1->Rec709 with Bradford chromatic adaptation");
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          goto LAB_1414b375f;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
LAB_1414b375f:
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,ACESAP1);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,Bradford);
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_3f8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_3f8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_3f8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_3f8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_3f8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_3f8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_3f8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_3f8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_3f8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_3f8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_3f8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_3f8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    local_3f8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_3f8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    local_3f8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar16 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar16,0) & uVar5;
        uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & uVar6;
        if (dVar3 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar3) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,L"AP1->Rec709 with Bradford chromatic adaptation");
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          goto LAB_1414b38df;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
LAB_1414b38df:
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,P3DCI);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,Bradford);
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[2][2] = ___xmm_00000000000000003ff0cb16fb70d96f;
    local_3f8.M[2][3] = _UNK_15061c898;
    local_3f8.M[3][0] = 0.0;
    local_3f8.M[3][1] = 0.0;
    local_3f8.M[0][0] = ___xmm_bfb1049ad4e6d9f63ff76d0944a81dbc;
    local_3f8.M[0][1] = _UNK_15061cd38;
    local_3f8.M[0][2] = ___xmm_0000000000000000bf64e9bd2c6a05af;
    local_3f8.M[0][3] = _UNK_15061c928;
    local_3f8.M[1][0] = ___xmm_3ff13464e2ea85c4bfd92c452f206723;
    local_3f8.M[1][1] = _UNK_15061cc08;
    local_3f8.M[1][2] = ___xmm_0000000000000000bfa814439b53c879;
    local_3f8.M[1][3] = _UNK_15061c9e8;
    local_3f8.M[2][0] = ___xmm_bf820d9acdffab6abfb21f7f8e028e53;
    local_3f8.M[2][1] = _UNK_15061cce8;
    local_3f8.M[3][2] = dVar17;
    local_3f8.M[3][3] = dVar4;
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar16 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar16,0) & uVar5;
        uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & uVar6;
        if (dVar3 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar3) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pFVar1 = pFVar9->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          FString::FString(&local_488,L"AP1->Rec709 with Bradford chromatic adaptation");
          (*pcVar2)(pFVar1,&local_488,0);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          goto LAB_1414b3a5f;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
LAB_1414b3a5f:
    pFVar7 = UE::Color::FColorSpace::FColorSpace(&local_1a8,P3D65);
    UE::Color::CalcColorSpaceTransformMatrix(&local_378,&local_2f8,pFVar7,Bradford);
    lVar13 = 0;
    local_478[0] = local_378.M[0][0];
    local_478[1] = local_378.M[0][1];
    local_478[2] = local_378.M[0][2];
    local_478[3] = local_378.M[0][3];
    local_458 = local_378.M[1][0];
    dStack_450 = local_378.M[1][1];
    local_448 = local_378.M[1][2];
    dStack_440 = local_378.M[1][3];
    local_438 = local_378.M[2][0];
    dStack_430 = local_378.M[2][1];
    local_428 = local_378.M[2][2];
    dStack_420 = local_378.M[2][3];
    local_418 = local_378.M[3][0];
    dStack_410 = local_378.M[3][1];
    local_408 = local_378.M[3][2];
    dStack_400 = local_378.M[3][3];
    local_3f8.M[2][2] = ___xmm_00000000000000003ff0c30b714b9268;
    local_3f8.M[2][3] = _UNK_15061c888;
    local_3f8.M[3][0] = 0.0;
    local_3f8.M[3][1] = 0.0;
    local_3f8.M[0][0] = ___xmm_bfb1bfede5388d323ff61142d5703d07;
    local_3f8.M[0][1] = _UNK_15061cd58;
    local_3f8.M[0][2] = ___xmm_0000000000000000bf61afc56814c66a;
    local_3f8.M[0][3] = _UNK_15061c908;
    local_3f8.M[1][0] = ___xmm_3ff15116648a320cbfd3c46e1e1209b5;
    local_3f8.M[1][1] = _UNK_15061cc28;
    local_3f8.M[1][2] = ___xmm_0000000000000000bfa74671d2f2ea54;
    local_3f8.M[1][3] = _UNK_15061c9d8;
    local_3f8.M[2][0] = ___xmm_bf8a8bc31b69b8ecbfb20274debf9ef1;
    local_3f8.M[2][1] = _UNK_15061cd28;
    local_3f8.M[3][2] = dVar17;
    local_3f8.M[3][3] = dVar4;
    do {
      iVar11 = 0;
      lVar10 = 0;
      lVar8 = lVar13;
      do {
        dVar17 = *(double *)((longlong)local_478 + lVar8) -
                 *(double *)((longlong)local_3f8.M[0] + lVar8);
        uVar14 = SUB84(dVar17,0) & uVar5;
        uVar15 = (uint)((ulonglong)dVar17 >> 0x20) & uVar6;
        if (dVar3 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar3) {
          if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
            local_498 = iVar11;
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                       (FLogCategoryBase *)&LogUnrealColorManagementTest);
          }
          pFVar9 = FAutomationTestFramework::Get();
          pwVar12 = L"AP1->Rec709 with Bradford chromatic adaptation";
          goto LAB_1414b3bab;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar10 < 4);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 < 0x80);
  }
  return;
}

// TestLuminance @ 1414b3c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl TestLuminance(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  FColorSpace *pFVar5;
  FAutomationTestFramework *pFVar6;
  undefined1 auStack_1f8 [32];
  TVector<double>_u_0 local_1d8;
  FLinearColor_u_0 local_1b8;
  TVector<double>_u_0 local_1a8;
  FColorSpace local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar5 = UE::Color::FColorSpace::FColorSpace(&local_188,sRGB);
  local_1d8._s_0.X = (pFVar5->RgbToXYZ).M[0][1];
  local_1d8._s_0.Y = (pFVar5->RgbToXYZ).M[1][1];
  local_1d8._s_0.Z = (pFVar5->RgbToXYZ).M[2][1];
  FLinearColor::FLinearColor((FLinearColor *)&local_1b8._s_0,(TVector<double> *)&local_1d8._s_0);
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_322bcc77;
  if ((((__real_322bcc77 <=
         (float)((uint)(local_1b8._s_0.R - ___real_3e59be0a) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <=
        (float)((uint)(local_1b8._s_0.G - ___real_3f37154b) & __xmm_7fffffff7fffffff7fffffff7fffffff
               ))) ||
      (__real_322bcc77 <=
       (float)((uint)(local_1b8._s_0.B - ___real_3d93d991) & __xmm_7fffffff7fffffff7fffffff7fffffff)
      )) || (__real_322bcc77 <=
             (float)((uint)(local_1b8._s_0.A - __real_3f800000) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_1d8._s_0,L"sRGB luminance factors equality test");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((void *)local_1d8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_1d8._s_0.X);
    }
  }
  pFVar5 = UE::Color::FColorSpace::FColorSpace(&local_188,ACESAP1);
  local_1a8._s_0.X = (pFVar5->RgbToXYZ).M[0][1];
  local_1a8._s_0.Y = (pFVar5->RgbToXYZ).M[1][1];
  local_1a8._s_0.Z = (pFVar5->RgbToXYZ).M[2][1];
  FLinearColor::FLinearColor((FLinearColor *)&local_1d8._s_0,(TVector<double> *)&local_1a8._s_0);
  local_1b8._s_0.R = (float)local_1d8._0_4_;
  local_1b8._s_0.G = (float)local_1d8._4_4_;
  local_1b8._s_0.B = (float)local_1d8._8_4_;
  local_1b8._s_0.A = (float)local_1d8._12_4_;
  if (((fVar3 <= (float)((uint)((float)local_1d8._0_4_ - __real_3e8b6190) & uVar4)) ||
      (fVar3 <= (float)((uint)((float)local_1d8._4_4_ - __real_3f2c909f) & uVar4))) ||
     ((fVar3 <= (float)((uint)((float)local_1d8._8_4_ - __real_3d5be98a) & uVar4) ||
      (fVar3 <= (float)((uint)((float)local_1d8._12_4_ - __real_3f800000) & uVar4))))) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_1d8._s_0,L"ACESAP1 luminance factors equality test");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((void *)local_1d8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_1d8._s_0.X);
    }
  }
  pFVar5 = UE::Color::FColorSpace::FColorSpace(&local_188,Rec2020);
  local_1a8._s_0.X = (pFVar5->RgbToXYZ).M[0][1];
  local_1a8._s_0.Y = (pFVar5->RgbToXYZ).M[1][1];
  local_1a8._s_0.Z = (pFVar5->RgbToXYZ).M[2][1];
  FLinearColor::FLinearColor((FLinearColor *)&local_1d8._s_0,(TVector<double> *)&local_1a8._s_0);
  local_1b8._s_0.R = (float)local_1d8._0_4_;
  local_1b8._s_0.G = (float)local_1d8._4_4_;
  local_1b8._s_0.B = (float)local_1d8._8_4_;
  local_1b8._s_0.A = (float)local_1d8._12_4_;
  if (((fVar3 <= (float)((uint)((float)local_1d8._0_4_ - ___real_3e8680a4) & uVar4)) ||
      (fVar3 <= (float)((uint)((float)local_1d8._4_4_ - ___real_3f2d9148) & uVar4))) ||
     ((fVar3 <= (float)((uint)((float)local_1d8._8_4_ - ___real_3d72e65b) & uVar4) ||
      (fVar3 <= (float)((uint)((float)local_1d8._12_4_ - __real_3f800000) & uVar4))))) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FString::FString((FString *)&local_1d8._s_0,L"Rec2020 luminance factors equality test");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((void *)local_1d8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_1d8._s_0.X);
    }
  }
  return;
}

// TestRgbToXyzConversionMatrices @ 1414b3f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TestRgbToXyzConversionMatrices(void)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  FColorSpace *pFVar8;
  longlong lVar9;
  FAutomationTestFramework *pFVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auStack_2e8 [32];
  int local_2c8;
  FString local_2b8;
  double local_2a8 [4];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228 [5];
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  FColorSpace local_1a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  pFVar8 = UE::Color::FColorSpace::FColorSpace(&local_1a8,sRGB);
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = _UNK_15061cbc8;
  uVar4 = ___xmm_3ff00000000000000000000000000000;
  dVar3 = __real_3eb0c6f7a0b5ed8d;
  lVar13 = 0;
  local_2a8[0] = (pFVar8->RgbToXYZ).M[0][0];
  local_2a8[1] = (pFVar8->RgbToXYZ).M[0][1];
  local_288 = (pFVar8->RgbToXYZ).M[1][0];
  dStack_280 = (pFVar8->RgbToXYZ).M[1][1];
  local_2a8[2] = (pFVar8->RgbToXYZ).M[0][2];
  local_2a8[3] = (pFVar8->RgbToXYZ).M[0][3];
  local_268 = (pFVar8->RgbToXYZ).M[2][0];
  dStack_260 = (pFVar8->RgbToXYZ).M[2][1];
  local_278 = (pFVar8->RgbToXYZ).M[1][2];
  dStack_270 = (pFVar8->RgbToXYZ).M[1][3];
  local_248 = (pFVar8->RgbToXYZ).M[3][0];
  dStack_240 = (pFVar8->RgbToXYZ).M[3][1];
  local_258 = (pFVar8->RgbToXYZ).M[2][2];
  dStack_250 = (pFVar8->RgbToXYZ).M[2][3];
  local_228[0] = ___xmm_3fcb37c144097f1f3fda649c6101338a;
  local_228[1] = (double)_UNK_15061cb08;
  local_238 = (pFVar8->RgbToXYZ).M[3][2];
  dStack_230 = (pFVar8->RgbToXYZ).M[3][3];
  local_228[4] = (double)___xmm_3fe6e2a96ccdd3ae3fd6e2a96ccdd3ae;
  uStack_200 = _UNK_15061cb88;
  local_228[2] = (double)___xmm_00000000000000003f93cb7548c0edb1;
  local_228[3] = (double)_UNK_15061c778;
  local_1e8 = ___xmm_3fb27b32117f295e3fc719fe95df16e4;
  uStack_1e0 = _UNK_15061cac8;
  local_1f8 = ___xmm_00000000000000003fbe838c9112cd65;
  uStack_1f0 = _UNK_15061c7c8;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = ___xmm_00000000000000003fee6ac26776ba4f;
  uStack_1d0 = _UNK_15061c7e8;
  local_1b8 = ___xmm_3ff00000000000000000000000000000;
  uStack_1b0 = _UNK_15061cbc8;
  do {
    iVar12 = 0;
    lVar11 = 0;
    lVar9 = lVar13;
    do {
      dVar14 = *(double *)((longlong)local_2a8 + lVar9) - *(double *)((longlong)local_228 + lVar9);
      if (__real_3eb0c6f7a0b5ed8d <
          (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
          local_2c8 = iVar12;
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                     (FLogCategoryBase *)&LogUnrealColorManagementTest);
        }
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        FString::FString(&local_2b8,L"Rec709 RGB2XYZ Matrix Equality");
        (*pcVar2)(pFVar1,&local_2b8);
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        goto LAB_1414b40ff;
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar11 < 4);
    lVar13 = lVar13 + 0x20;
  } while (lVar13 < 0x80);
LAB_1414b40ff:
  pFVar8 = UE::Color::FColorSpace::FColorSpace(&local_1a8,Rec2020);
  lVar13 = 0;
  local_2a8[0] = (pFVar8->RgbToXYZ).M[0][0];
  local_2a8[1] = (pFVar8->RgbToXYZ).M[0][1];
  local_2a8[2] = (pFVar8->RgbToXYZ).M[0][2];
  local_2a8[3] = (pFVar8->RgbToXYZ).M[0][3];
  local_288 = (pFVar8->RgbToXYZ).M[1][0];
  dStack_280 = (pFVar8->RgbToXYZ).M[1][1];
  local_278 = (pFVar8->RgbToXYZ).M[1][2];
  dStack_270 = (pFVar8->RgbToXYZ).M[1][3];
  local_268 = (pFVar8->RgbToXYZ).M[2][0];
  dStack_260 = (pFVar8->RgbToXYZ).M[2][1];
  local_258 = (pFVar8->RgbToXYZ).M[2][2];
  dStack_250 = (pFVar8->RgbToXYZ).M[2][3];
  local_248 = (pFVar8->RgbToXYZ).M[3][0];
  dStack_240 = (pFVar8->RgbToXYZ).M[3][1];
  local_238 = (pFVar8->RgbToXYZ).M[3][2];
  dStack_230 = (pFVar8->RgbToXYZ).M[3][3];
  local_1d8 = ___xmm_00000000000000003ff0f9cb77c68bc4;
  uStack_1d0 = _UNK_15061c8a8;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_228[0] = ___xmm_3fd0d0148ccf54283fe461f5d84c0e9c;
  local_228[1] = (double)_UNK_15061cb28;
  local_228[2] = (double)___xmm_00000000000000003c8cca001eb3e536;
  local_228[3] = (double)_UNK_15061c728;
  local_228[4] = (double)___xmm_3fe5b22902fd9b073fc282ce83ace244;
  uStack_200 = _UNK_15061cb68;
  local_1f8 = ___xmm_00000000000000003f9cbf168a39e345;
  uStack_1f0 = _UNK_15061c788;
  local_1e8 = ___xmm_3fae5ccb69ab760e3fc59de44c9f7be3;
  uStack_1e0 = _UNK_15061caa8;
  local_1b8 = uVar4;
  uStack_1b0 = uVar5;
  do {
    iVar12 = 0;
    lVar11 = 0;
    lVar9 = lVar13;
    do {
      dVar14 = *(double *)((longlong)local_2a8 + lVar9) - *(double *)((longlong)local_228 + lVar9);
      if (dVar3 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar7,SUB84(dVar14,0) & uVar6
                                  )) {
        if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
          local_2c8 = iVar12;
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                     (FLogCategoryBase *)&LogUnrealColorManagementTest);
        }
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        FString::FString(&local_2b8,L"Rec2020 RGB2XYZ Matrix Equality");
        (*pcVar2)(pFVar1,&local_2b8);
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        goto LAB_1414b426f;
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar11 < 4);
    lVar13 = lVar13 + 0x20;
  } while (lVar13 < 0x80);
LAB_1414b426f:
  pFVar8 = UE::Color::FColorSpace::FColorSpace(&local_1a8,ACESAP0);
  lVar13 = 0;
  local_2a8[0] = (pFVar8->RgbToXYZ).M[0][0];
  local_2a8[1] = (pFVar8->RgbToXYZ).M[0][1];
  local_2a8[2] = (pFVar8->RgbToXYZ).M[0][2];
  local_2a8[3] = (pFVar8->RgbToXYZ).M[0][3];
  local_288 = (pFVar8->RgbToXYZ).M[1][0];
  dStack_280 = (pFVar8->RgbToXYZ).M[1][1];
  local_278 = (pFVar8->RgbToXYZ).M[1][2];
  dStack_270 = (pFVar8->RgbToXYZ).M[1][3];
  local_268 = (pFVar8->RgbToXYZ).M[2][0];
  dStack_260 = (pFVar8->RgbToXYZ).M[2][1];
  local_258 = (pFVar8->RgbToXYZ).M[2][2];
  dStack_250 = (pFVar8->RgbToXYZ).M[2][3];
  local_248 = (pFVar8->RgbToXYZ).M[3][0];
  dStack_240 = (pFVar8->RgbToXYZ).M[3][1];
  local_238 = (pFVar8->RgbToXYZ).M[3][2];
  dStack_230 = (pFVar8->RgbToXYZ).M[3][3];
  local_1d8 = ___xmm_00000000000000003ff02425e0661114;
  uStack_1d0 = _UNK_15061c838;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_228[0] = ___xmm_3fd6038bdb33fb823fee7b4f2983be02;
  local_228[1] = (double)_UNK_15061cb48;
  local_228[2] = 0.0;
  local_228[3] = 0.0;
  local_228[4] = (double)___xmm_3fe74d22fc5e7ec90000000000000000;
  uStack_200 = _UNK_15061cba8;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = ___xmm_bfb277474fc3e4503f188eaa17e525be;
  uStack_1e0 = _UNK_15061cd78;
  local_1b8 = uVar4;
  uStack_1b0 = uVar5;
  do {
    iVar12 = 0;
    lVar11 = 0;
    lVar9 = lVar13;
    do {
      dVar14 = *(double *)((longlong)local_2a8 + lVar9) - *(double *)((longlong)local_228 + lVar9);
      if (dVar3 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar7,SUB84(dVar14,0) & uVar6
                                  )) {
        if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
          local_2c8 = iVar12;
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                     (FLogCategoryBase *)&LogUnrealColorManagementTest);
        }
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        FString::FString(&local_2b8,L"AP0 RGB2XYZ Matrix Equality");
        (*pcVar2)(pFVar1,&local_2b8);
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        goto LAB_1414b43cf;
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar11 < 4);
    lVar13 = lVar13 + 0x20;
  } while (lVar13 < 0x80);
LAB_1414b43cf:
  pFVar8 = UE::Color::FColorSpace::FColorSpace(&local_1a8,ACESAP1);
  lVar13 = 0;
  local_2a8[0] = (pFVar8->RgbToXYZ).M[0][0];
  local_2a8[1] = (pFVar8->RgbToXYZ).M[0][1];
  local_2a8[2] = (pFVar8->RgbToXYZ).M[0][2];
  local_2a8[3] = (pFVar8->RgbToXYZ).M[0][3];
  local_288 = (pFVar8->RgbToXYZ).M[1][0];
  dStack_280 = (pFVar8->RgbToXYZ).M[1][1];
  local_278 = (pFVar8->RgbToXYZ).M[1][2];
  dStack_270 = (pFVar8->RgbToXYZ).M[1][3];
  local_268 = (pFVar8->RgbToXYZ).M[2][0];
  dStack_260 = (pFVar8->RgbToXYZ).M[2][1];
  local_258 = (pFVar8->RgbToXYZ).M[2][2];
  dStack_250 = (pFVar8->RgbToXYZ).M[2][3];
  local_248 = (pFVar8->RgbToXYZ).M[3][0];
  dStack_240 = (pFVar8->RgbToXYZ).M[3][1];
  local_238 = (pFVar8->RgbToXYZ).M[3][2];
  dStack_230 = (pFVar8->RgbToXYZ).M[3][3];
  local_1d8 = ___xmm_00000000000000003ff02a59551b3966;
  uStack_1d0 = _UNK_15061c848;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_228[0] = ___xmm_3fd16c31fee6cff03fe532d31c5ec58f;
  local_228[1] = (double)_UNK_15061cb38;
  local_228[2] = (double)___xmm_0000000000000000bf76d57193f75988;
  local_228[3] = (double)_UNK_15061c978;
  local_228[4] = (double)___xmm_3fe59213ec5f9f233fc1270cc220a245;
  uStack_200 = _UNK_15061cb58;
  local_1f8 = ___xmm_00000000000000003f70a1fcdb469d35;
  uStack_1f0 = _UNK_15061c758;
  local_1e8 = ___xmm_3fab7d3142cf56063fc3fdf547dcb7cd;
  uStack_1e0 = _UNK_15061ca98;
  local_1b8 = uVar4;
  uStack_1b0 = uVar5;
  do {
    iVar12 = 0;
    lVar11 = 0;
    lVar9 = lVar13;
    do {
      dVar14 = *(double *)((longlong)local_2a8 + lVar9) - *(double *)((longlong)local_228 + lVar9);
      if (dVar3 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar7,SUB84(dVar14,0) & uVar6
                                  )) {
        if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
          local_2c8 = iVar12;
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                     (FLogCategoryBase *)&LogUnrealColorManagementTest);
        }
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        FString::FString(&local_2b8,L"AP1 RGB2XYZ Matrix Equality");
        (*pcVar2)(pFVar1,&local_2b8);
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        goto LAB_1414b453f;
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar11 < 4);
    lVar13 = lVar13 + 0x20;
  } while (lVar13 < 0x80);
LAB_1414b453f:
  pFVar8 = UE::Color::FColorSpace::FColorSpace(&local_1a8,P3DCI);
  lVar13 = 0;
  local_2a8[0] = (pFVar8->RgbToXYZ).M[0][0];
  local_2a8[1] = (pFVar8->RgbToXYZ).M[0][1];
  local_2a8[2] = (pFVar8->RgbToXYZ).M[0][2];
  local_2a8[3] = (pFVar8->RgbToXYZ).M[0][3];
  local_288 = (pFVar8->RgbToXYZ).M[1][0];
  dStack_280 = (pFVar8->RgbToXYZ).M[1][1];
  local_278 = (pFVar8->RgbToXYZ).M[1][2];
  dStack_270 = (pFVar8->RgbToXYZ).M[1][3];
  local_268 = (pFVar8->RgbToXYZ).M[2][0];
  dStack_260 = (pFVar8->RgbToXYZ).M[2][1];
  local_258 = (pFVar8->RgbToXYZ).M[2][2];
  dStack_250 = (pFVar8->RgbToXYZ).M[2][3];
  local_248 = (pFVar8->RgbToXYZ).M[3][0];
  dStack_240 = (pFVar8->RgbToXYZ).M[3][1];
  local_238 = (pFVar8->RgbToXYZ).M[3][2];
  dStack_230 = (pFVar8->RgbToXYZ).M[3][3];
  local_1d8 = ___xmm_00000000000000003fed090e2e144981;
  uStack_1d0 = _UNK_15061c7d8;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_228[0] = ___xmm_3fcad09f90b5d2f63fdc7da989c1275a;
  local_228[1] = (double)_UNK_15061caf8;
  local_228[2] = (double)___xmm_0000000000000000bc84f2fca90df019;
  local_228[3] = (double)_UNK_15061c8e8;
  local_228[4] = (double)___xmm_3fe7174eee323fec3fd1bc91f608fb6f;
  uStack_200 = _UNK_15061cb98;
  local_1f8 = ___xmm_00000000000000003fa818525cba0c28;
  uStack_1f0 = _UNK_15061c7b8;
  local_1e8 = ___xmm_3fb1a4496d0293003fc60d5bc8437e1e;
  uStack_1e0 = _UNK_15061cab8;
  local_1b8 = uVar4;
  uStack_1b0 = uVar5;
  do {
    iVar12 = 0;
    lVar11 = 0;
    lVar9 = lVar13;
    do {
      dVar14 = *(double *)((longlong)local_2a8 + lVar9) - *(double *)((longlong)local_228 + lVar9);
      if (dVar3 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar7,SUB84(dVar14,0) & uVar6
                                  )) {
        if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
          local_2c8 = iVar12;
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                     (FLogCategoryBase *)&LogUnrealColorManagementTest);
        }
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        FString::FString(&local_2b8,L"P3DCI RGB2XYZ Matrix Equality");
        (*pcVar2)(pFVar1,&local_2b8);
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        goto LAB_1414b46af;
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar11 < 4);
    lVar13 = lVar13 + 0x20;
  } while (lVar13 < 0x80);
LAB_1414b46af:
  pFVar8 = UE::Color::FColorSpace::FColorSpace(&local_1a8,P3D65);
  lVar13 = 0;
  local_2a8[0] = (pFVar8->RgbToXYZ).M[0][0];
  local_2a8[1] = (pFVar8->RgbToXYZ).M[0][1];
  local_2a8[2] = (pFVar8->RgbToXYZ).M[0][2];
  local_2a8[3] = (pFVar8->RgbToXYZ).M[0][3];
  local_288 = (pFVar8->RgbToXYZ).M[1][0];
  dStack_280 = (pFVar8->RgbToXYZ).M[1][1];
  local_278 = (pFVar8->RgbToXYZ).M[1][2];
  dStack_270 = (pFVar8->RgbToXYZ).M[1][3];
  local_268 = (pFVar8->RgbToXYZ).M[2][0];
  dStack_260 = (pFVar8->RgbToXYZ).M[2][1];
  local_258 = (pFVar8->RgbToXYZ).M[2][2];
  dStack_250 = (pFVar8->RgbToXYZ).M[2][3];
  local_248 = (pFVar8->RgbToXYZ).M[3][0];
  dStack_240 = (pFVar8->RgbToXYZ).M[3][1];
  local_238 = (pFVar8->RgbToXYZ).M[3][2];
  dStack_230 = (pFVar8->RgbToXYZ).M[3][3];
  local_228[0] = ___xmm_3fcd4f09dc25f3ee3fdf23fa79e81e66;
  local_228[1] = (double)_UNK_15061cb18;
  local_1b8 = uVar4;
  uStack_1b0 = uVar5;
  local_1d8 = ___xmm_00000000000000003ff0b3ff02b44d40;
  uStack_1d0 = _UNK_15061c878;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_228[2] = (double)___xmm_0000000000000000bc86e5bfb3fd74d8;
  local_228[3] = (double)_UNK_15061c8f8;
  local_228[4] = (double)___xmm_3fe622b8d3158ba63fd100b31170ef7f;
  uStack_200 = _UNK_15061cb78;
  local_1f8 = ___xmm_00000000000000003fa71919e764519e;
  uStack_1f0 = _UNK_15061c7a8;
  local_1e8 = ___xmm_3fb44c25af087ffe3fc95f2f1aca7cce;
  uStack_1e0 = _UNK_15061cad8;
  do {
    iVar12 = 0;
    lVar11 = 0;
    lVar9 = lVar13;
    do {
      dVar14 = *(double *)((longlong)local_2a8 + lVar9) - *(double *)((longlong)local_228 + lVar9);
      if (dVar3 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar7,SUB84(dVar14,0) & uVar6
                                  )) {
        if (4 < (byte)LogUnrealColorManagementTest._0_1_) {
          local_2c8 = iVar12;
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Bad___8f__at____150618710,
                     (FLogCategoryBase *)&LogUnrealColorManagementTest);
        }
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        FString::FString(&local_2b8,L"P3D65 RGB2XYZ Matrix Equality");
        (*pcVar2)(pFVar1,&local_2b8,0);
        if (local_2b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        return;
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar11 < 4);
    lVar13 = lVar13 + 0x20;
    if (0x7f < lVar13) {
      return;
    }
  } while( true );
}

// ThreadSwitchForABTest @ 1414b48f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ThreadSwitchForABTest(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str;
  wchar_t *_Str_00;
  
  if (param_1->ArrayNum == 2) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    _Str_00 = L"";
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar4 = _wtoi(_Str);
    ENamedThreads::bHasHighPriorityThreads = (int)(iVar4 != 0);
    if (param_1->ArrayNum < 2) {
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
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 0x18) != 0) {
      _Str_00 = *(wchar_t **)(pFVar1 + 0x10);
    }
    iVar4 = _wtoi(_Str_00);
    ENamedThreads::bHasBackgroundThreads = (int)(iVar4 != 0);
  }
  else if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  return;
}

// WaitForAnyTaskCompleted @ 1414b8dc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __cdecl
WaitForAnyTaskCompleted
          (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *param_1,FTimespan param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  FMonotonicTimePoint FVar10;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar15;
  int iVar16;
  TReferenceControllerBase<1> *this;
  FTaskHandle FStackX_8;
  <lambda_1> a<Stack_68 [2];
  ulonglong uVar14;
  
  iVar8 = param_1->ArrayNum;
  if (iVar8 == 0) {
    return -1;
  }
  uVar15 = 0;
  uVar12 = uVar15;
  uVar14 = uVar15;
  if (0 < iVar8) {
    do {
      uVar13 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar13 < iVar8) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
      if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar11 = FVar3;
      }
      if ((*(longlong *)(uVar12 + (longlong)FVar11) != 0) &&
         (*(char *)(*(longlong *)(uVar12 + (longlong)FVar11) + 0xd0) != '\0')) {
        return uVar13;
      }
      iVar8 = param_1->ArrayNum;
      uVar12 = uVar12 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < iVar8);
  }
  pTVar9 = operator_new(0x18);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    this = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    this = pTVar9 + 1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSharedData__1____WaitAny_V__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA________Tasks_UE__YAHAEBV__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA_______UFTimespan___Z__00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = 0;
    if ((this == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
  }
  iVar8 = param_1->ArrayNum;
  iVar16 = -1;
  if (0 < iVar8) {
    do {
      uVar13 = (uint)uVar15;
      uVar7 = 0;
      if ((int)uVar13 < iVar8) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
      if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar11 = FVar3;
      }
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      FStackX_8.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
      a<Stack_68[0].SharedData.Object = (FSharedData *)this;
      a<Stack_68[0].SharedData.SharedReferenceCount.ReferenceController = pTVar9;
      a<Stack_68[0].Index = uVar13;
      UE::Tasks::Private::FTaskHandle::
      Launch<_UE::Tasks::WaitAny<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_::__l12::<lambda_1>,TRefCountPtr<FBaseGraphTask>_const_&>
                (&FStackX_8,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h(432)"
                 ,a<Stack_68,
                 (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar11 + (longlong)(int)uVar13 * 8),
                 Default,Inline,None);
      if (FStackX_8.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned_int> *)((longlong)FStackX_8.Pimpl.Reference + 0x30);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (*(code *)**(undefined8 **)FStackX_8.Pimpl.Reference)(FStackX_8.Pimpl.Reference,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (a<Stack_68[0].SharedData.SharedReferenceCount.ReferenceController);
      iVar8 = param_1->ArrayNum;
      uVar15 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < iVar8);
  }
  dVar5 = (double)param_2.Ticks * __real_3e7ad7f29abcaf49;
  if (dVar5 == 0.0) {
    bVar6 = (bool)((byte)this->_padding_ & 1);
  }
  else {
    FVar10 = UE::FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
    bVar6 = UE::FManualResetEvent::WaitUntil
                      ((FManualResetEvent *)this,(FMonotonicTimePoint)(dVar5 + *FVar10.Time));
  }
  if (bVar6 != false) {
    iVar16 = *(int *)((longlong)&this->_padding_ + 4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return iVar16;
}

// read_long_length_no_check @ 1414ba990

ulong64 __cdecl read_long_length_no_check(uchar **param_1)

{
  byte bVar1;
  ulong64 uVar2;
  byte *pbVar3;
  
  pbVar3 = *param_1;
  uVar2 = 0;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar2 = uVar2 + bVar1;
    *param_1 = pbVar3;
  } while ((ulonglong)bVar1 == 0xff);
  return uVar2;
}

// LZ4_attach_dictionary @ 1414ba9c0

void __cdecl LZ4_attach_dictionary(LZ4_stream_u *param_1,LZ4_stream_u *param_2)

{
  if (param_2 != (LZ4_stream_u *)0x0) {
    if ((param_1->internal_donotuse).currentOffset == 0) {
      (param_1->internal_donotuse).currentOffset = 0x10000;
    }
    if ((param_2->internal_donotuse).dictSize == 0) {
      param_2 = (LZ4_stream_u *)0x0;
    }
  }
  (param_1->internal_donotuse).dictCtx = (LZ4_stream_t_internal *)param_2;
  return;
}

// LZ4_compressBound @ 1414baa00

int __cdecl LZ4_compressBound(int param_1)

{
  if (0x7e000000 < (uint)param_1) {
    return 0;
  }
  return param_1 / 0xff + 0x10 + param_1;
}

// LZ4_compress_default @ 1414baa30

int __cdecl LZ4_compress_default(char *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LZ4_compress_fast(param_1,param_2,param_3,param_4,1);
  return iVar1;
}

// LZ4_compress_destSize @ 1414baa50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl LZ4_compress_destSize(char *param_1,char *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined1 auStackY_4068 [32];
  LZ4_stream_u local_4038;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x1414baa5a;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4068;
  iVar1 = LZ4_compress_destSize_extState(&local_4038,param_1,param_2,param_3,param_4);
  return iVar1;
}

// LZ4_compress_fast @ 1414baab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl LZ4_compress_fast(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 auStackY_4068 [32];
  undefined1 local_4038 [16416];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x1414baaba;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4068;
  iVar1 = LZ4_compress_fast_extState(local_4038,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}

// LZ4_compress_fast_continue @ 1414bab10

int __cdecl
LZ4_compress_fast_continue
          (LZ4_stream_u *param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  LZ4_stream_t_internal *_Src;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  char *pcVar9;
  char *pcVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  int iVar15;
  char *pcVar16;
  ulonglong *puVar17;
  undefined1 *puVar18;
  int *piVar19;
  int *piVar20;
  short *psVar21;
  char *pcVar22;
  short *psVar23;
  char *pcVar24;
  uint uVar25;
  ulonglong *puVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  longlong lVar31;
  int *piVar32;
  int *piVar33;
  int iVar34;
  longlong lVar35;
  longlong *plVar36;
  longlong *local_res10;
  int local_res18;
  int *local_60;
  
  piVar20 = (int *)0x0;
  iVar29 = 0;
  piVar32 = piVar20;
  if ((param_1->internal_donotuse).dictSize != 0) {
    piVar32 = (int *)((param_1->internal_donotuse).dictionary +
                     (param_1->internal_donotuse).dictSize);
  }
  LZ4_renormDictT(&param_1->internal_donotuse,param_4);
  iVar28 = 1;
  if (0 < param_6) {
    iVar28 = param_6;
  }
  if (0x10001 < iVar28) {
    iVar28 = 0x10001;
  }
  if (((((param_1->internal_donotuse).dictSize < 4) && (piVar32 != (int *)param_2)) && (0 < param_4)
      ) && ((param_1->internal_donotuse).dictCtx == (LZ4_stream_t_internal *)0x0)) {
    (param_1->internal_donotuse).dictSize = 0;
    (param_1->internal_donotuse).dictionary = (uchar *)param_2;
    piVar32 = (int *)param_2;
  }
  local_60 = (int *)(param_1->internal_donotuse).dictionary;
  piVar19 = (int *)(param_2 + param_4);
  if ((local_60 < piVar19) && (piVar19 < piVar32)) {
    uVar2 = (int)piVar32 - (int)piVar19;
    (param_1->internal_donotuse).dictSize = uVar2;
    if (uVar2 < 0x10001) {
      local_60 = (int *)(ulonglong)uVar2;
      if (uVar2 < 4) {
        (param_1->internal_donotuse).dictSize = 0;
        local_60 = piVar20;
      }
    }
    else {
      (param_1->internal_donotuse).dictSize = 0x10000;
      local_60 = (int *)&DAT_00010000;
    }
    local_60 = (int *)((longlong)piVar32 - (longlong)local_60);
    (param_1->internal_donotuse).dictionary = (uchar *)local_60;
  }
  iVar15 = (int)param_2;
  local_res18 = (int)param_3;
  if (piVar32 == (int *)param_2) {
    uVar2 = (param_1->internal_donotuse).dictSize;
    if (uVar2 < 0x10000) {
      uVar3 = (param_1->internal_donotuse).currentOffset;
      if (uVar2 < uVar3) {
        if (0x7e000000 < (uint)param_4) {
          return 0;
        }
        if (param_4 != 0) {
          (param_1->internal_donotuse).dictSize = uVar2 + param_4;
          pcVar16 = param_3 + param_5;
          lVar35 = (longlong)param_2 - (ulonglong)uVar3;
          (param_1->internal_donotuse).currentOffset = uVar3 + param_4;
          (param_1->internal_donotuse).tableType = 2;
          local_res10 = (longlong *)param_2;
          if (param_4 < 0xd) {
LAB_1414bb106:
            uVar7 = (longlong)piVar19 - (longlong)local_res10;
            if (pcVar16 < (char *)((longlong)param_3 + (uVar7 + 0xf0) / 0xff + uVar7 + 1)) {
              return 0;
            }
            if (uVar7 < 0xf) {
              *param_3 = (char)uVar7 << 4;
            }
            else {
              *param_3 = -0x10;
              uVar5 = uVar7 - 0xf;
              param_3 = (char *)((longlong)param_3 + 1);
              if (0xfe < uVar5) {
                memset(param_3,(int)CONCAT71((int7)(uVar5 / 0x1fe),0xff),uVar5 / 0xff);
                param_3 = (char *)((longlong)param_3 + uVar5 / 0xff);
                uVar5 = uVar5 % 0xff;
              }
              *param_3 = (char)uVar5;
            }
            memcpy((char *)((longlong)param_3 + 1),local_res10,uVar7);
            return (int)param_3 + 1 + ((int)uVar7 - local_res18);
          }
          plVar11 = (longlong *)(param_2 + 1);
          iVar29 = (int)lVar35;
          *(int *)((longlong)param_1 +
                  ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
               iVar15 - iVar29;
          lVar4 = *plVar11;
          local_res10 = (longlong *)param_2;
LAB_1414bad60:
          iVar27 = 1;
          iVar15 = iVar28 << 6;
          do {
            plVar36 = plVar11;
            uVar7 = (ulonglong)(lVar4 * -0x30e4432345000000) >> 0x34;
            lVar4 = (longlong)iVar27;
            uVar30 = *(uint *)((longlong)param_1 + uVar7 * 4);
            iVar27 = iVar15 >> 6;
            uVar25 = (int)plVar36 - iVar29;
            plVar11 = (longlong *)((longlong)plVar36 + lVar4);
            iVar15 = iVar15 + 1;
            if ((longlong *)((longlong)piVar19 + -0xb) < plVar11) goto LAB_1414bb106;
            lVar4 = *plVar11;
            piVar32 = (int *)((ulonglong)uVar30 + lVar35);
            *(uint *)((longlong)param_1 + uVar7 * 4) = uVar25;
          } while (((uVar30 < uVar3 - uVar2) || (uVar30 + 0xffff < uVar25)) ||
                  (*piVar32 != (int)*plVar36));
          if (param_2 + -(ulonglong)uVar2 < piVar32 && local_res10 < plVar36) {
            do {
              piVar20 = (int *)((longlong)piVar32 - 1);
              plVar11 = (longlong *)((longlong)plVar36 + -1);
              if (*(char *)((longlong)plVar36 + -1) != *(char *)((longlong)piVar32 - 1)) break;
              piVar32 = piVar20;
              plVar36 = plVar11;
            } while (param_2 + -(ulonglong)uVar2 < piVar20 && local_res10 < plVar11);
          }
          uVar30 = (int)plVar36 - (int)local_res10;
          uVar7 = (ulonglong)uVar30;
          psVar21 = (short *)((longlong)param_3 + 1);
          if (pcVar16 < (char *)(uVar7 / 0xff + 8 + uVar7 + (longlong)psVar21)) {
            return 0;
          }
          if (uVar30 < 0xf) {
            *param_3 = (char)uVar30 << 4;
          }
          else {
            uVar30 = uVar30 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar30) {
              uVar5 = (ulonglong)uVar30 / 0xff;
              memset(psVar21,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
              psVar21 = (short *)((longlong)psVar21 + uVar5);
              uVar30 = uVar30 + (int)uVar5 * -0xff;
            }
            *(char *)psVar21 = (char)uVar30;
            psVar21 = (short *)((longlong)psVar21 + 1);
          }
          psVar23 = (short *)(uVar7 + (longlong)psVar21);
          lVar4 = (longlong)local_res10 - (longlong)psVar21;
          do {
            *(undefined8 *)psVar21 = *(undefined8 *)((longlong)psVar21 + lVar4);
            psVar21 = psVar21 + 4;
          } while (psVar21 < psVar23);
          puVar13 = (ulonglong *)(piVar19 + -3);
          psVar21 = (short *)param_3;
          do {
            puVar8 = (ulonglong *)((longlong)plVar36 + 4);
            puVar12 = (ulonglong *)(piVar32 + 1);
            *psVar23 = (short)plVar36 - (short)piVar32;
            param_3 = (char *)(psVar23 + 1);
            iVar15 = (int)puVar8;
            if (puVar8 < puVar13) {
              uVar7 = *puVar8 ^ *puVar12;
              if (uVar7 == 0) {
                puVar8 = (ulonglong *)((longlong)plVar36 + 0xc);
                puVar12 = (ulonglong *)(piVar32 + 3);
                if (puVar8 < puVar13) {
LAB_1414baf30:
                  uVar7 = *puVar8 ^ *puVar12;
                  if (uVar7 == 0) goto code_r0x0001414baf3c;
                  uVar30 = 0;
                  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                    uVar30 = uVar30 + 1;
                  }
                  uVar30 = (int)puVar8 + ((uVar30 >> 3) - iVar15);
                  goto LAB_1414baf8e;
                }
                goto LAB_1414baf49;
              }
              uVar30 = 0;
              for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                uVar30 = uVar30 + 1;
              }
              uVar30 = uVar30 >> 3;
            }
            else {
LAB_1414baf49:
              if ((puVar8 < piVar19 + -2) && ((int)*puVar12 == (int)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                puVar12 = (ulonglong *)((longlong)puVar12 + 4);
              }
              if ((puVar8 < (ulonglong *)((longlong)piVar19 + -6)) &&
                 ((short)*puVar12 == (short)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                puVar12 = (ulonglong *)((longlong)puVar12 + 2);
              }
              if ((puVar8 < (ulonglong *)((longlong)piVar19 + -5)) &&
                 ((char)*puVar12 == (char)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 1);
              }
              uVar30 = (int)puVar8 - iVar15;
            }
LAB_1414baf8e:
            plVar36 = (longlong *)((longlong)plVar36 + (ulonglong)uVar30 + 4);
            if (pcVar16 < (char *)((ulonglong)(uVar30 + 0xf0) / 0xff + 6 + (longlong)param_3)) {
              return 0;
            }
            if (uVar30 < 0xf) {
              *(char *)psVar21 = (char)uVar30 + (char)*psVar21;
            }
            else {
              uVar30 = uVar30 - 0xf;
              uVar7 = (ulonglong)uVar30;
              *(char *)psVar21 = (char)*psVar21 + '\x0f';
              *(short *)((longlong)param_3 + 0) = -1;
              *(short *)((longlong)param_3 + 2) = -1;
              if (0x3fb < uVar30) {
                uVar5 = (ulonglong)uVar30 / 0x3fc;
                do {
                  param_3 = (char *)((longlong)param_3 + 4);
                  uVar7 = (ulonglong)((int)uVar7 - 0x3fc);
                  *(short *)((longlong)param_3 + 0) = -1;
                  *(short *)((longlong)param_3 + 2) = -1;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
              pcVar22 = (char *)((longlong)param_3 + uVar7 / 0xff);
              *pcVar22 = (char)uVar7 + (char)(uVar7 / 0xff);
              param_3 = pcVar22 + 1;
            }
            local_res10 = plVar36;
            if ((longlong *)((longlong)piVar19 + -0xb) <= plVar36) goto LAB_1414bb106;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)plVar36 + -2) * -0x30e4432345000000) >>
                    0x34) * 4) = ((int)plVar36 + -2) - iVar29;
            uVar25 = (int)plVar36 - iVar29;
            uVar7 = (ulonglong)(*plVar36 * -0x30e4432345000000) >> 0x34;
            uVar30 = *(uint *)((longlong)param_1 + uVar7 * 4);
            *(uint *)((longlong)param_1 + uVar7 * 4) = uVar25;
            piVar32 = (int *)((ulonglong)uVar30 + lVar35);
            if (((uVar30 < uVar3 - uVar2) || (uVar30 + 0xffff < uVar25)) ||
               (*piVar32 != (int)*plVar36)) goto LAB_1414bb0c0;
            psVar23 = (short *)((longlong)param_3 + 1);
            *param_3 = '\0';
            psVar21 = (short *)param_3;
          } while( true );
        }
        if (param_5 < 1) {
          return 0;
        }
        goto LAB_1414bac94;
      }
    }
    if ((uint)param_4 < 0x7e000001) {
      if (param_4 == 0) {
        if (0 < param_5) {
LAB_1414bac94:
          *param_3 = '\0';
          return 1;
        }
      }
      else {
        pcVar16 = param_3 + param_5;
        (param_1->internal_donotuse).dictSize = uVar2 + param_4;
        lVar35 = (longlong)param_2 - (ulonglong)(param_1->internal_donotuse).currentOffset;
        (param_1->internal_donotuse).currentOffset =
             (param_1->internal_donotuse).currentOffset + param_4;
        (param_1->internal_donotuse).tableType = 2;
        local_res10 = (longlong *)param_2;
        if (0xc < param_4) {
          plVar11 = (longlong *)(param_2 + 1);
          iVar29 = (int)lVar35;
          *(int *)((longlong)param_1 +
                  ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
               iVar15 - iVar29;
          lVar4 = *plVar11;
          local_res10 = (longlong *)param_2;
LAB_1414bb2a0:
          iVar27 = 1;
          iVar15 = iVar28 << 6;
          do {
            plVar36 = plVar11;
            uVar7 = (ulonglong)(lVar4 * -0x30e4432345000000) >> 0x34;
            uVar3 = *(uint *)((longlong)param_1 + uVar7 * 4);
            uVar30 = (int)plVar36 - iVar29;
            lVar4 = (longlong)iVar27;
            iVar27 = iVar15 >> 6;
            plVar11 = (longlong *)(lVar4 + (longlong)plVar36);
            iVar15 = iVar15 + 1;
            if (param_2 + (longlong)param_4 + -0xb < plVar11) goto LAB_1414bb622;
            lVar4 = *plVar11;
            piVar32 = (int *)((ulonglong)uVar3 + lVar35);
            *(uint *)((longlong)param_1 + uVar7 * 4) = uVar30;
          } while ((uVar3 + 0xffff < uVar30) || (*piVar32 != (int)*plVar36));
          if (param_2 + -(ulonglong)uVar2 < piVar32 && local_res10 < plVar36) {
            do {
              piVar20 = (int *)((longlong)piVar32 - 1);
              plVar11 = (longlong *)((longlong)plVar36 - 1);
              if (*(char *)((longlong)plVar36 - 1) != *(char *)((longlong)piVar32 - 1)) break;
              piVar32 = piVar20;
              plVar36 = plVar11;
            } while (local_res10 < plVar11 && param_2 + -(ulonglong)uVar2 < piVar20);
          }
          uVar3 = (int)plVar36 - (int)local_res10;
          pcVar22 = (char *)((longlong)param_3 + 1);
          uVar7 = (ulonglong)uVar3;
          if (pcVar16 < pcVar22 + uVar7 + uVar7 / 0xff + 8) {
            return 0;
          }
          if (uVar3 < 0xf) {
            *param_3 = (char)uVar3 << 4;
          }
          else {
            uVar3 = uVar3 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar3) {
              uVar5 = (ulonglong)uVar3 / 0xff;
              memset(pcVar22,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
              pcVar22 = pcVar22 + uVar5;
              uVar3 = uVar3 + (int)uVar5 * -0xff;
            }
            *pcVar22 = (char)uVar3;
            pcVar22 = pcVar22 + 1;
          }
          pcVar9 = pcVar22;
          do {
            *(undefined8 *)pcVar9 =
                 *(undefined8 *)(pcVar9 + ((longlong)local_res10 - (longlong)pcVar22));
            pcVar9 = pcVar9 + 8;
          } while (pcVar9 < pcVar22 + uVar7);
          puVar13 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
          psVar23 = (short *)(pcVar22 + uVar7);
          psVar21 = (short *)param_3;
          do {
            puVar8 = (ulonglong *)(piVar32 + 1);
            *psVar23 = (short)plVar36 - (short)piVar32;
            puVar12 = (ulonglong *)((longlong)plVar36 + 4);
            param_3 = (char *)(psVar23 + 1);
            iVar15 = (int)puVar12;
            if (puVar12 < puVar13) {
              uVar7 = *puVar12 ^ *puVar8;
              if (uVar7 == 0) {
                puVar12 = (ulonglong *)((longlong)plVar36 + 0xc);
                puVar8 = (ulonglong *)(piVar32 + 3);
                if (puVar12 < puVar13) {
LAB_1414bb470:
                  uVar7 = *puVar12 ^ *puVar8;
                  if (uVar7 == 0) goto code_r0x0001414bb47c;
                  uVar3 = 0;
                  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                    uVar3 = uVar3 + 1;
                  }
                  uVar3 = (int)puVar12 + ((uVar3 >> 3) - iVar15);
                  goto LAB_1414bb4d0;
                }
                goto LAB_1414bb489;
              }
              uVar3 = 0;
              for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                uVar3 = uVar3 + 1;
              }
              uVar3 = uVar3 >> 3;
            }
            else {
LAB_1414bb489:
              if ((puVar12 < param_2 + (longlong)param_4 + -8) && ((int)*puVar8 == (int)*puVar12)) {
                puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                puVar8 = (ulonglong *)((longlong)puVar8 + 4);
              }
              if ((puVar12 < param_2 + (longlong)param_4 + -6) &&
                 ((short)*puVar8 == (short)*puVar12)) {
                puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                puVar8 = (ulonglong *)((longlong)puVar8 + 2);
              }
              if ((puVar12 < param_2 + (longlong)param_4 + -5) && ((char)*puVar8 == (char)*puVar12))
              {
                puVar12 = (ulonglong *)((longlong)puVar12 + 1);
              }
              uVar3 = (int)puVar12 - iVar15;
            }
LAB_1414bb4d0:
            plVar36 = (longlong *)((longlong)plVar36 + (ulonglong)uVar3 + 4);
            if (pcVar16 < (char *)((ulonglong)(uVar3 + 0xf0) / 0xff + 6 + (longlong)param_3)) {
              return 0;
            }
            if (uVar3 < 0xf) {
              *(char *)psVar21 = (char)*psVar21 + (char)uVar3;
            }
            else {
              uVar3 = uVar3 - 0xf;
              uVar7 = (ulonglong)uVar3;
              *(char *)psVar21 = (char)*psVar21 + '\x0f';
              *(short *)((longlong)param_3 + 0) = -1;
              *(short *)((longlong)param_3 + 2) = -1;
              if (0x3fb < uVar3) {
                uVar5 = (ulonglong)uVar3 / 0x3fc;
                do {
                  param_3 = (char *)((longlong)param_3 + 4);
                  uVar7 = (ulonglong)((int)uVar7 - 0x3fc);
                  *(short *)((longlong)param_3 + 0) = -1;
                  *(short *)((longlong)param_3 + 2) = -1;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
              pcVar22 = (char *)((longlong)param_3 + uVar7 / 0xff);
              *pcVar22 = (char)uVar7 + (char)(uVar7 / 0xff);
              param_3 = pcVar22 + 1;
            }
            local_res10 = plVar36;
            if (param_2 + (longlong)param_4 + -0xb <= plVar36) break;
            uVar30 = (int)plVar36 - iVar29;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)plVar36 + -2) * -0x30e4432345000000) >>
                    0x34) * 4) = ((int)plVar36 + -2) - iVar29;
            uVar7 = (ulonglong)(*plVar36 * -0x30e4432345000000) >> 0x34;
            uVar3 = *(uint *)((longlong)param_1 + uVar7 * 4);
            *(uint *)((longlong)param_1 + uVar7 * 4) = uVar30;
            piVar32 = (int *)((ulonglong)uVar3 + lVar35);
            if ((uVar3 + 0xffff < uVar30) || (*piVar32 != (int)*plVar36)) goto LAB_1414bb5f4;
            psVar23 = (short *)((longlong)param_3 + 1);
            *param_3 = '\0';
            psVar21 = (short *)param_3;
          } while( true );
        }
LAB_1414bb622:
        pcVar22 = param_2 + ((longlong)param_4 - (longlong)local_res10);
        if ((char *)((longlong)param_3 +
                    (longlong)(pcVar22 + (ulonglong)(pcVar22 + 0xf0) / 0xff + 1)) <= pcVar16) {
          if (pcVar22 < (char *)0xf) {
            *param_3 = (char)pcVar22 << 4;
          }
          else {
            *param_3 = -0x10;
            pcVar16 = pcVar22 + -0xf;
            param_3 = (char *)((longlong)param_3 + 1);
            if ((char *)0xfe < pcVar16) {
              memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar16 / 0x1fe),0xff),
                     (ulonglong)pcVar16 / 0xff);
              param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar16 / 0xff);
              pcVar16 = (char *)((ulonglong)pcVar16 % 0xff);
            }
            *param_3 = (char)pcVar16;
          }
          memcpy((char *)((longlong)param_3 + 1),local_res10,(size_t)pcVar22);
          return (int)param_3 + 1 + ((int)pcVar22 - local_res18);
        }
      }
    }
    return 0;
  }
  _Src = (param_1->internal_donotuse).dictCtx;
  if (_Src == (LZ4_stream_t_internal *)0x0) {
    uVar2 = (param_1->internal_donotuse).dictSize;
    uVar7 = (ulonglong)uVar2;
    if (uVar2 < 0x10000) {
      uVar3 = (param_1->internal_donotuse).currentOffset;
      if (uVar3 <= uVar2) goto LAB_1414bcce0;
      if (0x7e000000 < (uint)param_4) goto LAB_1414bcce9;
      if (param_4 == 0) goto LAB_1414bccf6;
      pcVar16 = param_2 + -(ulonglong)uVar3;
      puVar13 = (ulonglong *)(param_2 + (longlong)param_4 + -5);
      if (local_60 == (int *)0x0) {
        pcVar22 = (char *)0x0;
        puVar18 = (undefined1 *)0x0;
      }
      else {
        pcVar22 = (char *)(((ulonglong)uVar2 - (ulonglong)uVar3) + (longlong)local_60);
        puVar18 = (undefined1 *)(uVar7 + (longlong)local_60);
      }
      pcVar9 = param_3 + param_5;
      (param_1->internal_donotuse).dictSize = uVar2 + param_4;
      (param_1->internal_donotuse).currentOffset = uVar3 + param_4;
      (param_1->internal_donotuse).tableType = 2;
      puVar8 = (ulonglong *)param_2;
      if (0xc < param_4) {
        iVar27 = (int)pcVar16;
        puVar12 = (ulonglong *)(param_2 + 1);
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
             iVar15 - iVar27;
        uVar7 = *puVar12;
LAB_1414bc692:
        iVar15 = 1;
        iVar29 = iVar28 << 6;
        do {
          puVar17 = puVar12;
          uVar5 = uVar7 * -0x30e4432345000000 >> 0x34;
          uVar30 = *(uint *)((longlong)param_1 + uVar5 * 4);
          uVar25 = (int)puVar17 - iVar27;
          lVar35 = (longlong)iVar15;
          iVar15 = iVar29 >> 6;
          puVar12 = (ulonglong *)((longlong)puVar17 + lVar35);
          iVar29 = iVar29 + 1;
          if (param_2 + (longlong)param_4 + -0xb < puVar12) goto LAB_1414bcc32;
          piVar32 = (int *)param_2;
          pcVar24 = pcVar16;
          if (uVar30 < uVar3) {
            piVar32 = local_60;
            pcVar24 = pcVar22;
          }
          piVar20 = (int *)(pcVar24 + uVar30);
          uVar7 = *puVar12;
          *(uint *)((longlong)param_1 + uVar5 * 4) = uVar25;
        } while (((uVar30 < uVar3 - uVar2) || (uVar30 + 0xffff < uVar25)) ||
                (*piVar20 != (int)*puVar17));
        iVar29 = 0;
        iVar15 = uVar25 - uVar30;
        if (puVar8 < puVar17 && piVar32 < piVar20) {
          do {
            piVar19 = (int *)((longlong)piVar20 + -1);
            puVar12 = (ulonglong *)((longlong)puVar17 - 1);
            if (*(char *)((longlong)puVar17 - 1) != *(char *)((longlong)piVar20 + -1)) break;
            piVar20 = piVar19;
            puVar17 = puVar12;
          } while (puVar8 < puVar12 && piVar32 < piVar19);
        }
        uVar30 = (int)puVar17 - (int)puVar8;
        uVar7 = (ulonglong)uVar30;
        pcVar24 = param_3 + 1;
        if (pcVar24 + uVar7 + uVar7 / 0xff + 8 <= pcVar9) {
          if (uVar30 < 0xf) {
            *param_3 = (char)uVar30 << 4;
          }
          else {
            uVar30 = uVar30 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar30) {
              uVar5 = (ulonglong)uVar30 / 0xff;
              memset(pcVar24,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
              pcVar24 = pcVar24 + uVar5;
              uVar30 = uVar30 + (int)uVar5 * -0xff;
            }
            *pcVar24 = (char)uVar30;
            pcVar24 = pcVar24 + 1;
          }
          pcVar10 = pcVar24;
          do {
            *(undefined8 *)pcVar10 =
                 *(undefined8 *)(pcVar10 + ((longlong)puVar8 - (longlong)pcVar24));
            pcVar10 = pcVar10 + 8;
          } while (pcVar10 < pcVar24 + uVar7);
          pcVar24 = pcVar24 + uVar7;
          pcVar10 = param_3;
          puVar8 = puVar17;
          do {
            *(short *)pcVar24 = (short)iVar15;
            puVar12 = (ulonglong *)(piVar20 + 1);
            param_3 = pcVar24 + 2;
            puVar17 = (ulonglong *)((longlong)puVar8 + 4);
            iVar29 = (int)puVar17;
            if (piVar32 == local_60) {
              puVar14 = (ulonglong *)((longlong)puVar8 + ((longlong)puVar18 - (longlong)piVar20));
              puVar26 = puVar13;
              if (puVar14 <= puVar13) {
                puVar26 = puVar14;
              }
              puVar14 = (ulonglong *)((longlong)puVar26 - 7);
              if (puVar17 < puVar14) {
                uVar7 = *puVar12 ^ *puVar17;
                if (uVar7 == 0) {
                  puVar17 = (ulonglong *)((longlong)puVar8 + 0xc);
                  puVar12 = (ulonglong *)(piVar20 + 3);
                  if (puVar17 < puVar14) {
LAB_1414bc8d2:
                    uVar7 = *puVar12 ^ *puVar17;
                    if (uVar7 == 0) goto code_r0x0001414bc8de;
                    uVar30 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      uVar30 = uVar30 + 1;
                    }
                    uVar30 = ((uVar30 >> 3) - iVar29) + (int)puVar17;
                    goto LAB_1414bc930;
                  }
                  goto LAB_1414bc8eb;
                }
                uVar30 = 0;
                for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                  uVar30 = uVar30 + 1;
                }
                uVar30 = uVar30 >> 3;
              }
              else {
LAB_1414bc8eb:
                if ((puVar17 < (ulonglong *)((longlong)puVar26 - 3U)) &&
                   ((int)*puVar12 == (int)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                }
                if ((puVar17 < (ulonglong *)((longlong)puVar26 - 1U)) &&
                   ((short)*puVar12 == (short)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                }
                if ((puVar17 < puVar26) && ((char)*puVar12 == (char)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 1);
                }
                uVar30 = (int)puVar17 - iVar29;
              }
LAB_1414bc930:
              puVar8 = (ulonglong *)((longlong)puVar8 + (ulonglong)uVar30 + 4);
              if (puVar8 == puVar26) {
                puVar12 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
                puVar17 = puVar26;
                puVar14 = (ulonglong *)param_2;
                if (puVar26 < puVar12) {
                  uVar7 = *(ulonglong *)param_2 ^ *puVar26;
                  if (uVar7 != 0) {
                    uVar25 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      uVar25 = uVar25 + 1;
                    }
                    uVar30 = uVar30 + (uVar25 >> 3);
                    uVar25 = uVar25 >> 3;
                    goto LAB_1414bcaac;
                  }
                  puVar17 = puVar26 + 1;
                  puVar14 = (ulonglong *)(param_2 + 8);
                }
                if (puVar17 < puVar12) {
LAB_1414bc973:
                  uVar7 = *puVar14 ^ *puVar17;
                  if (uVar7 == 0) goto code_r0x0001414bc97f;
                  uVar25 = 0;
                  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                    uVar25 = uVar25 + 1;
                  }
                  uVar25 = (int)puVar17 + ((uVar25 >> 3) - (int)puVar26);
                  uVar30 = uVar30 + uVar25;
                  goto LAB_1414bcaac;
                }
LAB_1414bc98c:
                if ((puVar17 < param_2 + (longlong)param_4 + -8) && ((int)*puVar14 == (int)*puVar17)
                   ) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                  puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                }
                if ((puVar17 < param_2 + (longlong)param_4 + -6) &&
                   ((short)*puVar14 == (short)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                  puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                }
                if ((puVar17 < puVar13) && ((char)*puVar14 == (char)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 1);
                }
                uVar25 = (int)puVar17 - (int)puVar26;
                uVar30 = uVar30 + uVar25;
                goto LAB_1414bcaac;
              }
            }
            else {
              puVar26 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
              if (puVar17 < puVar26) {
                uVar7 = *puVar17 ^ *puVar12;
                if (uVar7 == 0) {
                  puVar17 = (ulonglong *)((longlong)puVar8 + 0xc);
                  puVar12 = (ulonglong *)(piVar20 + 3);
                  if (puVar17 < puVar26) {
LAB_1414bca42:
                    uVar7 = *puVar17 ^ *puVar12;
                    if (uVar7 == 0) goto code_r0x0001414bca4e;
                    uVar30 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      uVar30 = uVar30 + 1;
                    }
                    uVar30 = (int)puVar17 + ((uVar30 >> 3) - iVar29);
                    goto LAB_1414bca9d;
                  }
                  goto LAB_1414bca5b;
                }
                uVar30 = 0;
                for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                  uVar30 = uVar30 + 1;
                }
                uVar30 = uVar30 >> 3;
              }
              else {
LAB_1414bca5b:
                if ((puVar17 < param_2 + (longlong)param_4 + -8) && ((int)*puVar12 == (int)*puVar17)
                   ) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                }
                if ((puVar17 < param_2 + (longlong)param_4 + -6) &&
                   ((short)*puVar12 == (short)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                }
                if ((puVar17 < puVar13) && ((char)*puVar12 == (char)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 1);
                }
                uVar30 = (int)puVar17 - iVar29;
              }
LAB_1414bca9d:
              puVar8 = (ulonglong *)((longlong)puVar8 + 4);
              uVar25 = uVar30;
LAB_1414bcaac:
              puVar8 = (ulonglong *)((longlong)puVar8 + (ulonglong)uVar25);
            }
            if (pcVar9 < param_3 + (ulonglong)(uVar30 + 0xf0) / 0xff + 6) goto LAB_1414bd3e6;
            if (uVar30 < 0xf) {
              *pcVar10 = *pcVar10 + (char)uVar30;
            }
            else {
              uVar30 = uVar30 - 0xf;
              *pcVar10 = *pcVar10 + '\x0f';
              param_3[0] = -1;
              param_3[1] = -1;
              param_3[2] = -1;
              param_3[3] = -1;
              if (0x3fb < uVar30) {
                uVar7 = (ulonglong)uVar30 / 0x3fc;
                do {
                  param_3 = param_3 + 4;
                  uVar30 = uVar30 - 0x3fc;
                  param_3[0] = -1;
                  param_3[1] = -1;
                  param_3[2] = -1;
                  param_3[3] = -1;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              param_3[(ulonglong)uVar30 / 0xff] = (char)uVar30 + (char)((ulonglong)uVar30 / 0xff);
              param_3 = param_3 + (ulonglong)uVar30 / 0xff + 1;
            }
            if (param_2 + (longlong)param_4 + -0xb <= puVar8) goto LAB_1414bcc32;
            uVar25 = (int)puVar8 - iVar27;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)puVar8 + -2) * -0x30e4432345000000) >> 0x34
                    ) * 4) = ((int)puVar8 + -2) - iVar27;
            uVar7 = *puVar8 * -0x30e4432345000000 >> 0x34;
            uVar30 = *(uint *)((longlong)param_1 + uVar7 * 4);
            piVar32 = (int *)param_2;
            pcVar24 = pcVar16;
            if (uVar30 < uVar3) {
              piVar32 = local_60;
              pcVar24 = pcVar22;
            }
            piVar20 = (int *)(pcVar24 + uVar30);
            *(uint *)((longlong)param_1 + uVar7 * 4) = uVar25;
            if (((uVar30 < uVar3 - uVar2) || (uVar30 + 0xffff < uVar25)) ||
               (*piVar20 != (int)*puVar8)) goto LAB_1414bcbfe;
            pcVar24 = param_3 + 1;
            iVar15 = uVar25 - uVar30;
            *param_3 = '\0';
            pcVar10 = param_3;
          } while( true );
        }
        goto LAB_1414bd4ac;
      }
LAB_1414bcc32:
      pcVar16 = param_2 + ((longlong)param_4 - (longlong)puVar8);
      if (param_3 + (longlong)(pcVar16 + (ulonglong)(pcVar16 + 0xf0) / 0xff + 1) <= pcVar9) {
        if (pcVar16 < (char *)0xf) {
          *param_3 = (char)pcVar16 << 4;
        }
        else {
          *param_3 = -0x10;
          pcVar22 = pcVar16 + -0xf;
          param_3 = param_3 + 1;
          if ((char *)0xfe < pcVar22) {
            memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar22 / 0x1fe),0xff),
                   (ulonglong)pcVar22 / 0xff);
            param_3 = param_3 + (ulonglong)pcVar22 / 0xff;
            pcVar22 = (char *)((ulonglong)pcVar22 % 0xff);
          }
          *param_3 = (char)pcVar22;
        }
        memcpy(param_3 + 1,puVar8,(size_t)pcVar16);
        iVar29 = (int)param_3 + 1 + ((int)pcVar16 - local_res18);
        goto LAB_1414bd4ac;
      }
    }
    else {
LAB_1414bcce0:
      if (0x7e000000 < (uint)param_4) goto LAB_1414bcce9;
      if (param_4 == 0) goto LAB_1414bccf6;
      uVar3 = (param_1->internal_donotuse).currentOffset;
      piVar32 = (int *)(param_2 + -(ulonglong)uVar3);
      puVar13 = (ulonglong *)(param_2 + (longlong)param_4 + -5);
      if (local_60 == (int *)0x0) {
        puVar18 = (undefined1 *)0x0;
      }
      else {
        puVar18 = (undefined1 *)(uVar7 + (longlong)local_60);
        piVar20 = (int *)((uVar7 - uVar3) + (longlong)local_60);
      }
      pcVar16 = param_3 + param_5;
      (param_1->internal_donotuse).dictSize = uVar2 + param_4;
      (param_1->internal_donotuse).currentOffset = uVar3 + param_4;
      (param_1->internal_donotuse).tableType = 2;
      puVar8 = (ulonglong *)param_2;
      if (0xc < param_4) {
        iVar27 = (int)piVar32;
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
             iVar15 - iVar27;
        puVar12 = (ulonglong *)(param_2 + 1);
        uVar7 = *puVar12;
LAB_1414bce20:
        iVar15 = 1;
        iVar29 = iVar28 << 6;
        do {
          puVar17 = puVar12;
          uVar5 = uVar7 * -0x30e4432345000000 >> 0x34;
          uVar2 = *(uint *)((longlong)param_1 + uVar5 * 4);
          lVar35 = (longlong)iVar15;
          uVar30 = (int)puVar17 - iVar27;
          iVar15 = iVar29 >> 6;
          iVar29 = iVar29 + 1;
          puVar12 = (ulonglong *)((longlong)puVar17 + lVar35);
          if (param_2 + (longlong)param_4 + -0xb < puVar12) goto LAB_1414bd3ee;
          piVar33 = (int *)param_2;
          piVar19 = piVar32;
          if (uVar2 < uVar3) {
            piVar33 = local_60;
            piVar19 = piVar20;
          }
          piVar19 = (int *)((longlong)piVar19 + (ulonglong)uVar2);
          uVar7 = *puVar12;
          *(uint *)((longlong)param_1 + uVar5 * 4) = uVar30;
        } while ((uVar2 + 0xffff < uVar30) || (*piVar19 != (int)*puVar17));
        iVar29 = 0;
        iVar15 = uVar30 - uVar2;
        if (puVar8 < puVar17 && piVar33 < piVar19) {
          do {
            piVar1 = (int *)((longlong)piVar19 + -1);
            puVar12 = (ulonglong *)((longlong)puVar17 - 1);
            if (*(char *)((longlong)puVar17 - 1) != *(char *)((longlong)piVar19 + -1)) break;
            piVar19 = piVar1;
            puVar17 = puVar12;
          } while (puVar8 < puVar12 && piVar33 < piVar1);
        }
        uVar2 = (int)puVar17 - (int)puVar8;
        uVar7 = (ulonglong)uVar2;
        pcVar22 = param_3 + 1;
        if (pcVar22 + uVar7 + uVar7 / 0xff + 8 <= pcVar16) {
          if (uVar2 < 0xf) {
            *param_3 = (char)uVar2 << 4;
          }
          else {
            uVar2 = uVar2 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar2) {
              uVar5 = (ulonglong)uVar2 / 0xff;
              memset(pcVar22,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
              pcVar22 = pcVar22 + uVar5;
              uVar2 = uVar2 + (int)uVar5 * -0xff;
            }
            *pcVar22 = (char)uVar2;
            pcVar22 = pcVar22 + 1;
          }
          pcVar9 = pcVar22;
          do {
            *(undefined8 *)pcVar9 = *(undefined8 *)(pcVar9 + ((longlong)puVar8 - (longlong)pcVar22))
            ;
            pcVar9 = pcVar9 + 8;
          } while (pcVar9 < pcVar22 + uVar7);
          pcVar22 = pcVar22 + uVar7;
          pcVar9 = param_3;
          puVar8 = puVar17;
          do {
            *(short *)pcVar22 = (short)iVar15;
            puVar12 = (ulonglong *)(piVar19 + 1);
            param_3 = pcVar22 + 2;
            puVar17 = (ulonglong *)((longlong)puVar8 + 4);
            iVar29 = (int)puVar17;
            if (piVar33 == local_60) {
              puVar14 = (ulonglong *)(((longlong)puVar18 - (longlong)piVar19) + (longlong)puVar8);
              puVar26 = puVar13;
              if (puVar14 <= puVar13) {
                puVar26 = puVar14;
              }
              puVar14 = (ulonglong *)((longlong)puVar26 - 7);
              if (puVar17 < puVar14) {
                uVar7 = *puVar17 ^ *puVar12;
                if (uVar7 == 0) {
                  puVar17 = (ulonglong *)((longlong)puVar8 + 0xc);
                  puVar12 = (ulonglong *)(piVar19 + 3);
                  if (puVar17 < puVar14) {
LAB_1414bd080:
                    uVar7 = *puVar17 ^ *puVar12;
                    if (uVar7 == 0) goto code_r0x0001414bd08c;
                    uVar2 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      uVar2 = uVar2 + 1;
                    }
                    uVar2 = ((uVar2 >> 3) - iVar29) + (int)puVar17;
                    goto LAB_1414bd0de;
                  }
                  goto LAB_1414bd099;
                }
                uVar2 = 0;
                for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                  uVar2 = uVar2 + 1;
                }
                uVar2 = uVar2 >> 3;
              }
              else {
LAB_1414bd099:
                if ((puVar17 < (ulonglong *)((longlong)puVar26 - 3U)) &&
                   ((int)*puVar12 == (int)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                }
                if ((puVar17 < (ulonglong *)((longlong)puVar26 - 1U)) &&
                   ((short)*puVar12 == (short)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                }
                if ((puVar17 < puVar26) && ((char)*puVar12 == (char)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 1);
                }
                uVar2 = (int)puVar17 - iVar29;
              }
LAB_1414bd0de:
              puVar8 = (ulonglong *)((longlong)puVar8 + (ulonglong)uVar2 + 4);
              if (puVar8 == puVar26) {
                puVar12 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
                puVar17 = puVar26;
                puVar14 = (ulonglong *)param_2;
                if (puVar26 < puVar12) {
                  uVar7 = *(ulonglong *)param_2 ^ *puVar26;
                  if (uVar7 != 0) {
                    uVar30 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      uVar30 = uVar30 + 1;
                    }
                    uVar2 = uVar2 + (uVar30 >> 3);
                    uVar30 = uVar30 >> 3;
                    goto LAB_1414bd260;
                  }
                  puVar17 = puVar26 + 1;
                  puVar14 = (ulonglong *)(param_2 + 8);
                }
                if (puVar17 < puVar12) {
LAB_1414bd122:
                  uVar7 = *puVar17 ^ *puVar14;
                  if (uVar7 == 0) goto code_r0x0001414bd12e;
                  uVar30 = 0;
                  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                    uVar30 = uVar30 + 1;
                  }
                  uVar30 = (int)puVar17 + ((uVar30 >> 3) - (int)puVar26);
                  uVar2 = uVar2 + uVar30;
                  goto LAB_1414bd260;
                }
LAB_1414bd13b:
                if ((puVar17 < param_2 + (longlong)param_4 + -8) && ((int)*puVar14 == (int)*puVar17)
                   ) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                  puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                }
                if ((puVar17 < param_2 + (longlong)param_4 + -6) &&
                   ((short)*puVar14 == (short)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                  puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                }
                if ((puVar17 < puVar13) && ((char)*puVar14 == (char)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 1);
                }
                uVar30 = (int)puVar17 - (int)puVar26;
                uVar2 = uVar2 + uVar30;
                goto LAB_1414bd260;
              }
            }
            else {
              puVar26 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
              if (puVar17 < puVar26) {
                uVar7 = *puVar17 ^ *puVar12;
                if (uVar7 == 0) {
                  puVar17 = (ulonglong *)((longlong)puVar8 + 0xc);
                  puVar12 = (ulonglong *)(piVar19 + 3);
                  if (puVar17 < puVar26) {
LAB_1414bd1f1:
                    uVar7 = *puVar17 ^ *puVar12;
                    if (uVar7 == 0) goto code_r0x0001414bd1fd;
                    uVar2 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      uVar2 = uVar2 + 1;
                    }
                    uVar2 = (int)puVar17 + ((uVar2 >> 3) - iVar29);
                    goto LAB_1414bd24c;
                  }
                  goto LAB_1414bd20a;
                }
                uVar2 = 0;
                for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                  uVar2 = uVar2 + 1;
                }
                uVar2 = uVar2 >> 3;
              }
              else {
LAB_1414bd20a:
                if ((puVar17 < param_2 + (longlong)param_4 + -8) && ((int)*puVar12 == (int)*puVar17)
                   ) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                }
                if ((puVar17 < param_2 + (longlong)param_4 + -6) &&
                   ((short)*puVar12 == (short)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                }
                if ((puVar17 < puVar13) && ((char)*puVar12 == (char)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 1);
                }
                uVar2 = (int)puVar17 - iVar29;
              }
LAB_1414bd24c:
              puVar8 = (ulonglong *)((longlong)puVar8 + 4);
              uVar30 = uVar2;
LAB_1414bd260:
              puVar8 = (ulonglong *)((longlong)puVar8 + (ulonglong)uVar30);
            }
            if (pcVar16 < param_3 + (ulonglong)(uVar2 + 0xf0) / 0xff + 6) goto LAB_1414bd3e6;
            if (uVar2 < 0xf) {
              *pcVar9 = *pcVar9 + (char)uVar2;
            }
            else {
              uVar2 = uVar2 - 0xf;
              *pcVar9 = *pcVar9 + '\x0f';
              param_3[0] = -1;
              param_3[1] = -1;
              param_3[2] = -1;
              param_3[3] = -1;
              if (0x3fb < uVar2) {
                uVar7 = (ulonglong)uVar2 / 0x3fc;
                do {
                  param_3 = param_3 + 4;
                  uVar2 = uVar2 - 0x3fc;
                  param_3[0] = -1;
                  param_3[1] = -1;
                  param_3[2] = -1;
                  param_3[3] = -1;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              param_3[(ulonglong)uVar2 / 0xff] = (char)uVar2 + (char)((ulonglong)uVar2 / 0xff);
              param_3 = param_3 + (ulonglong)uVar2 / 0xff + 1;
            }
            if (param_2 + (longlong)param_4 + -0xb <= puVar8) goto LAB_1414bd3ee;
            uVar30 = (int)puVar8 - iVar27;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)puVar8 + -2) * -0x30e4432345000000) >> 0x34
                    ) * 4) = ((int)puVar8 + -2) - iVar27;
            uVar7 = *puVar8 * -0x30e4432345000000 >> 0x34;
            uVar2 = *(uint *)((longlong)param_1 + uVar7 * 4);
            piVar33 = (int *)param_2;
            piVar19 = piVar32;
            if (uVar2 < uVar3) {
              piVar33 = local_60;
              piVar19 = piVar20;
            }
            piVar19 = (int *)((longlong)piVar19 + (ulonglong)uVar2);
            *(uint *)((longlong)param_1 + uVar7 * 4) = uVar30;
            if ((uVar2 + 0xffff < uVar30) || (*piVar19 != (int)*puVar8)) goto LAB_1414bd3b3;
            pcVar22 = param_3 + 1;
            iVar15 = uVar30 - uVar2;
            *param_3 = '\0';
            pcVar9 = param_3;
          } while( true );
        }
        goto LAB_1414bd4ac;
      }
LAB_1414bd3ee:
      pcVar22 = param_2 + ((longlong)param_4 - (longlong)puVar8);
      if (param_3 + (longlong)(pcVar22 + (ulonglong)(pcVar22 + 0xf0) / 0xff + 1) <= pcVar16) {
        if (pcVar22 < (char *)0xf) {
          *param_3 = (char)pcVar22 << 4;
        }
        else {
          *param_3 = -0x10;
          pcVar16 = pcVar22 + -0xf;
          param_3 = param_3 + 1;
          if ((char *)0xfe < pcVar16) {
            memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar16 / 0x1fe),0xff),
                   (ulonglong)pcVar16 / 0xff);
            param_3 = param_3 + (ulonglong)pcVar16 / 0xff;
            pcVar16 = (char *)((ulonglong)pcVar16 % 0xff);
          }
          *param_3 = (char)pcVar16;
        }
        memcpy(param_3 + 1,puVar8,(size_t)pcVar22);
        iVar29 = (int)pcVar22 + (((int)param_3 + 1) - local_res18);
        goto LAB_1414bd4ac;
      }
    }
LAB_1414bd3e6:
    iVar29 = 0;
  }
  else {
    if (0x1000 < param_4) {
      memcpy(param_1,_Src,0x4020);
      if ((uint)param_4 < 0x7e000001) {
        piVar32 = (int *)(param_1->internal_donotuse).dictionary;
        uVar2 = (param_1->internal_donotuse).currentOffset;
        uVar3 = (param_1->internal_donotuse).dictSize;
        lVar4 = (longlong)param_2 - (ulonglong)uVar2;
        lVar35 = (longlong)piVar32 + (ulonglong)uVar3;
        if (piVar32 == (int *)0x0) {
          lVar35 = 0;
        }
        lVar31 = (longlong)piVar32 + ((ulonglong)uVar3 - (ulonglong)uVar2);
        if (piVar32 == (int *)0x0) {
          lVar31 = 0;
        }
        pcVar16 = param_3 + param_5;
        puVar13 = (ulonglong *)(param_2 + 1);
        (param_1->internal_donotuse).dictSize = uVar3 + param_4;
        iVar27 = (int)lVar4;
        (param_1->internal_donotuse).currentOffset = uVar2 + param_4;
        (param_1->internal_donotuse).tableType = 2;
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
             iVar15 - iVar27;
        uVar7 = *puVar13;
        puVar8 = (ulonglong *)param_2;
LAB_1414bb810:
        iVar15 = 1;
        iVar29 = iVar28 << 6;
        do {
          puVar17 = puVar13;
          uVar5 = uVar7 * -0x30e4432345000000 >> 0x34;
          lVar6 = (longlong)iVar15;
          uVar3 = *(uint *)((longlong)param_1 + uVar5 * 4);
          iVar15 = iVar29 >> 6;
          uVar30 = (int)puVar17 - iVar27;
          puVar13 = (ulonglong *)((longlong)puVar17 + lVar6);
          iVar29 = iVar29 + 1;
          puVar12 = puVar8;
          if (param_2 + (longlong)param_4 + -0xb < puVar13) goto LAB_1414bbd5f;
          piVar20 = (int *)param_2;
          lVar6 = lVar4;
          if (uVar3 < uVar2) {
            piVar20 = piVar32;
            lVar6 = lVar31;
          }
          piVar19 = (int *)(lVar6 + (ulonglong)uVar3);
          uVar7 = *puVar13;
          *(uint *)((longlong)param_1 + uVar5 * 4) = uVar30;
        } while ((uVar3 + 0xffff < uVar30) || (*piVar19 != (int)*puVar17));
        iVar29 = 0;
        iVar15 = uVar30 - uVar3;
        puVar12 = puVar17;
        if (puVar8 < puVar17 && piVar20 < piVar19) {
          do {
            piVar33 = (int *)((longlong)piVar19 - 1);
            puVar13 = (ulonglong *)((longlong)puVar17 - 1);
            puVar12 = puVar17;
            if (*(char *)((longlong)puVar17 - 1) != *(char *)((longlong)piVar19 - 1)) break;
            piVar19 = piVar33;
            puVar12 = puVar13;
            puVar17 = puVar13;
          } while (puVar8 < puVar13 && piVar20 < piVar33);
        }
        uVar3 = (int)puVar12 - (int)puVar8;
        uVar7 = (ulonglong)uVar3;
        pcVar22 = param_3 + 1;
        if (pcVar22 + uVar7 + uVar7 / 0xff + 8 <= pcVar16) {
          if (uVar3 < 0xf) {
            *param_3 = (char)uVar3 << 4;
          }
          else {
            uVar3 = uVar3 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar3) {
              uVar5 = (ulonglong)uVar3 / 0xff;
              memset(pcVar22,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
              pcVar22 = pcVar22 + uVar5;
              uVar3 = uVar3 + (int)uVar5 * -0xff;
            }
            *pcVar22 = (char)uVar3;
            pcVar22 = pcVar22 + 1;
          }
          pcVar9 = pcVar22;
          do {
            *(undefined8 *)pcVar9 = *(undefined8 *)(pcVar9 + ((longlong)puVar8 - (longlong)pcVar22))
            ;
            pcVar9 = pcVar9 + 8;
          } while (pcVar9 < pcVar22 + uVar7);
          pcVar22 = pcVar22 + uVar7;
          pcVar9 = param_3;
          do {
            puVar13 = (ulonglong *)(piVar19 + 1);
            *(short *)pcVar22 = (short)iVar15;
            puVar8 = (ulonglong *)((longlong)puVar12 + 4);
            puVar17 = (ulonglong *)(param_2 + (longlong)param_4 + -5);
            param_3 = pcVar22 + 2;
            iVar29 = (int)puVar8;
            if (piVar20 == piVar32) {
              puVar26 = (ulonglong *)((lVar35 - (longlong)piVar19) + (longlong)puVar12);
              if (puVar17 < puVar26) {
                puVar26 = puVar17;
              }
              puVar14 = (ulonglong *)((longlong)puVar26 - 7);
              if (puVar8 < puVar14) {
                uVar7 = *puVar8 ^ *puVar13;
                if (uVar7 == 0) {
                  puVar8 = (ulonglong *)((longlong)puVar12 + 0xc);
                  puVar13 = (ulonglong *)(piVar19 + 3);
                  if (puVar8 < puVar14) {
LAB_1414bba20:
                    uVar7 = *puVar8 ^ *puVar13;
                    if (uVar7 == 0) goto code_r0x0001414bba2c;
                    uVar3 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      uVar3 = uVar3 + 1;
                    }
                    uVar3 = ((uVar3 >> 3) - iVar29) + (int)puVar8;
                    goto LAB_1414bba7e;
                  }
                  goto LAB_1414bba39;
                }
                uVar3 = 0;
                for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                  uVar3 = uVar3 + 1;
                }
                uVar3 = uVar3 >> 3;
              }
              else {
LAB_1414bba39:
                if ((puVar8 < (ulonglong *)((longlong)puVar26 - 3U)) &&
                   ((int)*puVar13 == (int)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                  puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                }
                if ((puVar8 < (ulonglong *)((longlong)puVar26 - 1U)) &&
                   ((short)*puVar13 == (short)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                  puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                }
                if ((puVar8 < puVar26) && ((char)*puVar13 == (char)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 1);
                }
                uVar3 = (int)puVar8 - iVar29;
              }
LAB_1414bba7e:
              puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar3 + 4);
              if (puVar12 == puVar26) {
                puVar13 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
                puVar8 = puVar26;
                puVar14 = (ulonglong *)param_2;
                if (puVar26 < puVar13) {
                  uVar7 = *(ulonglong *)param_2 ^ *puVar26;
                  if (uVar7 == 0) {
                    puVar8 = puVar26 + 1;
                    puVar14 = (ulonglong *)(param_2 + 8);
                    goto LAB_1414bbabd;
                  }
                  uVar30 = 0;
                  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                    uVar30 = uVar30 + 1;
                  }
                  uVar30 = uVar30 >> 3;
                }
                else {
LAB_1414bbabd:
                  if (puVar8 < puVar13) {
LAB_1414bbac2:
                    uVar7 = *puVar8 ^ *puVar14;
                    if (uVar7 == 0) goto code_r0x0001414bbace;
                    uVar30 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      uVar30 = uVar30 + 1;
                    }
                    uVar30 = (int)puVar8 + ((uVar30 >> 3) - (int)puVar26);
                    goto LAB_1414bbb1d;
                  }
LAB_1414bbadb:
                  if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar14 == (int)*puVar8)
                     ) {
                    puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                    puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                  }
                  if ((puVar8 < param_2 + (longlong)param_4 + -6) &&
                     ((short)*puVar14 == (short)*puVar8)) {
                    puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                    puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                  }
                  if ((puVar8 < puVar17) && ((char)*puVar14 == (char)*puVar8)) {
                    puVar8 = (ulonglong *)((longlong)puVar8 + 1);
                  }
                  uVar30 = (int)puVar8 - (int)puVar26;
                }
LAB_1414bbb1d:
                uVar3 = uVar3 + uVar30;
                puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar30);
              }
            }
            else {
              puVar26 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
              if (puVar8 < puVar26) {
                uVar7 = *puVar13 ^ *puVar8;
                if (uVar7 == 0) {
                  puVar8 = (ulonglong *)((longlong)puVar12 + 0xc);
                  puVar13 = (ulonglong *)(piVar19 + 3);
                  if (puVar8 < puVar26) {
LAB_1414bbc18:
                    uVar7 = *puVar13 ^ *puVar8;
                    if (uVar7 == 0) goto code_r0x0001414bbc20;
                    uVar3 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      uVar3 = uVar3 + 1;
                    }
                    uVar3 = (int)puVar8 + ((uVar3 >> 3) - iVar29);
                    goto LAB_1414bbc6f;
                  }
                  goto LAB_1414bbc2d;
                }
                uVar3 = 0;
                for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                  uVar3 = uVar3 + 1;
                }
                uVar3 = uVar3 >> 3;
              }
              else {
LAB_1414bbc2d:
                if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar13 == (int)*puVar8))
                {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                  puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                }
                if ((puVar8 < param_2 + (longlong)param_4 + -6) &&
                   ((short)*puVar13 == (short)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                  puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                }
                if ((puVar8 < puVar17) && ((char)*puVar13 == (char)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 1);
                }
                uVar3 = (int)puVar8 - iVar29;
              }
LAB_1414bbc6f:
              puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar3 + 4);
            }
            if (pcVar16 < param_3 + (ulonglong)(uVar3 + 0xf0) / 0xff + 6) goto LAB_1414bbd57;
            if (uVar3 < 0xf) {
              *pcVar9 = *pcVar9 + (char)uVar3;
            }
            else {
              uVar3 = uVar3 - 0xf;
              *pcVar9 = *pcVar9 + '\x0f';
              param_3[0] = -1;
              param_3[1] = -1;
              param_3[2] = -1;
              param_3[3] = -1;
              if (0x3fb < uVar3) {
                uVar7 = (ulonglong)uVar3 / 0x3fc;
                do {
                  param_3 = param_3 + 4;
                  uVar3 = uVar3 - 0x3fc;
                  param_3[0] = -1;
                  param_3[1] = -1;
                  param_3[2] = -1;
                  param_3[3] = -1;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              param_3[(ulonglong)uVar3 / 0xff] = (char)((ulonglong)uVar3 / 0xff) + (char)uVar3;
              param_3 = param_3 + (ulonglong)uVar3 / 0xff + 1;
            }
            if (param_2 + (longlong)param_4 + -0xb <= puVar12) goto LAB_1414bbd5f;
            uVar30 = (int)puVar12 - iVar27;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)puVar12 + -2) * -0x30e4432345000000) >>
                    0x34) * 4) = ((int)puVar12 + -2) - iVar27;
            uVar7 = *puVar12 * -0x30e4432345000000 >> 0x34;
            uVar3 = *(uint *)((longlong)param_1 + uVar7 * 4);
            piVar20 = (int *)param_2;
            lVar6 = lVar4;
            if (uVar3 < uVar2) {
              piVar20 = piVar32;
              lVar6 = lVar31;
            }
            piVar19 = (int *)(lVar6 + (ulonglong)uVar3);
            *(uint *)((longlong)param_1 + uVar7 * 4) = uVar30;
            if ((uVar3 + 0xffff < uVar30) || (*piVar19 != (int)*puVar12)) goto LAB_1414bbd31;
            pcVar22 = param_3 + 1;
            iVar15 = uVar30 - uVar3;
            *param_3 = '\0';
            pcVar9 = param_3;
          } while( true );
        }
      }
      goto LAB_1414bd4ac;
    }
    if ((uint)param_4 < 0x7e000001) {
      if (param_4 != 0) {
        piVar32 = (int *)_Src->dictionary;
        uVar2 = (param_1->internal_donotuse).currentOffset;
        iVar27 = uVar2 - _Src->currentOffset;
        lVar4 = (longlong)param_2 - (ulonglong)uVar2;
        lVar35 = (ulonglong)_Src->dictSize + (longlong)piVar32;
        if (piVar32 == (int *)0x0) {
          lVar31 = 0;
          lVar35 = 0;
        }
        else {
          lVar31 = ((ulonglong)_Src->dictSize - (ulonglong)_Src->currentOffset) + (longlong)piVar32;
        }
        pcVar16 = param_3 + param_5;
        (param_1->internal_donotuse).dictCtx = (LZ4_stream_t_internal *)0x0;
        (param_1->internal_donotuse).dictSize = param_4;
        (param_1->internal_donotuse).currentOffset = uVar2 + param_4;
        (param_1->internal_donotuse).tableType = 2;
        puVar13 = (ulonglong *)param_2;
        if (0xc < param_4) {
          puVar8 = (ulonglong *)(param_2 + 1);
          iVar34 = (int)lVar4;
          *(int *)((longlong)param_1 +
                  ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
               iVar15 - iVar34;
          uVar7 = *puVar8;
LAB_1414bbf40:
          iVar15 = 1;
          iVar29 = iVar28 << 6;
          do {
            puVar12 = puVar8;
            uVar5 = uVar7 * -0x30e4432345000000 >> 0x34;
            uVar3 = *(uint *)((longlong)param_1 + uVar5 * 4);
            puVar8 = (ulonglong *)((longlong)puVar12 + (longlong)iVar15);
            uVar30 = (int)puVar12 - iVar34;
            iVar15 = iVar29 >> 6;
            iVar29 = iVar29 + 1;
            if (param_2 + (longlong)param_4 + -0xb < puVar8) goto LAB_1414bc4b7;
            if (uVar3 < uVar2) {
              uVar3 = iVar27 + _Src->hashTable[uVar5];
              piVar20 = (int *)(lVar31 + (ulonglong)_Src->hashTable[uVar5]);
              piVar19 = piVar32;
            }
            else {
              piVar20 = (int *)((ulonglong)uVar3 + lVar4);
              piVar19 = (int *)param_2;
            }
            uVar7 = *puVar8;
            *(uint *)((longlong)param_1 + uVar5 * 4) = uVar30;
          } while ((uVar3 + 0xffff < uVar30) || (*piVar20 != (int)*puVar12));
          iVar29 = 0;
          iVar15 = uVar30 - uVar3;
          if (puVar13 < puVar12 && piVar19 < piVar20) {
            do {
              piVar33 = (int *)((longlong)piVar20 - 1);
              puVar8 = (ulonglong *)((longlong)puVar12 - 1);
              if (*(char *)((longlong)puVar12 - 1) != *(char *)((longlong)piVar20 - 1)) break;
              piVar20 = piVar33;
              puVar12 = puVar8;
            } while (puVar13 < puVar8 && piVar19 < piVar33);
          }
          uVar3 = (int)puVar12 - (int)puVar13;
          uVar7 = (ulonglong)uVar3;
          pcVar22 = param_3 + 1;
          if (pcVar22 + uVar7 / 0xff + 8 + uVar7 <= pcVar16) {
            if (uVar3 < 0xf) {
              *param_3 = (char)uVar3 << 4;
            }
            else {
              uVar3 = uVar3 - 0xf;
              *param_3 = -0x10;
              if (0xfe < (int)uVar3) {
                uVar5 = (ulonglong)uVar3 / 0xff;
                memset(pcVar22,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
                pcVar22 = pcVar22 + uVar5;
                uVar3 = uVar3 + (int)uVar5 * -0xff;
              }
              *pcVar22 = (char)uVar3;
              pcVar22 = pcVar22 + 1;
            }
            pcVar9 = pcVar22;
            do {
              *(undefined8 *)pcVar9 =
                   *(undefined8 *)(pcVar9 + ((longlong)puVar13 - (longlong)pcVar22));
              pcVar9 = pcVar9 + 8;
            } while (pcVar9 < pcVar22 + uVar7);
            pcVar22 = pcVar22 + uVar7;
            pcVar9 = param_3;
            do {
              *(short *)pcVar22 = (short)iVar15;
              puVar13 = (ulonglong *)(piVar20 + 1);
              puVar17 = (ulonglong *)((longlong)puVar12 + 4);
              param_3 = pcVar22 + 2;
              puVar8 = (ulonglong *)(param_2 + (longlong)param_4 + -5);
              iVar29 = (int)puVar17;
              if (piVar19 == piVar32) {
                puVar26 = (ulonglong *)((lVar35 - (longlong)piVar20) + (longlong)puVar12);
                if (puVar8 < puVar26) {
                  puVar26 = puVar8;
                }
                puVar14 = (ulonglong *)((longlong)puVar26 - 7);
                if (puVar17 < puVar14) {
                  uVar7 = *puVar17 ^ *puVar13;
                  if (uVar7 == 0) {
                    puVar17 = (ulonglong *)((longlong)puVar12 + 0xc);
                    puVar13 = (ulonglong *)(piVar20 + 3);
                    if (puVar17 < puVar14) {
LAB_1414bc160:
                      uVar7 = *puVar17 ^ *puVar13;
                      if (uVar7 == 0) goto code_r0x0001414bc16c;
                      uVar3 = 0;
                      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                        uVar3 = uVar3 + 1;
                      }
                      uVar3 = ((uVar3 >> 3) - iVar29) + (int)puVar17;
                      goto LAB_1414bc1be;
                    }
                    goto LAB_1414bc179;
                  }
                  uVar3 = 0;
                  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                    uVar3 = uVar3 + 1;
                  }
                  uVar3 = uVar3 >> 3;
                }
                else {
LAB_1414bc179:
                  if ((puVar17 < (ulonglong *)((longlong)puVar26 - 3U)) &&
                     ((int)*puVar13 == (int)*puVar17)) {
                    puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                    puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                  }
                  if ((puVar17 < (ulonglong *)((longlong)puVar26 - 1U)) &&
                     ((short)*puVar13 == (short)*puVar17)) {
                    puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                    puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                  }
                  if ((puVar17 < puVar26) && ((char)*puVar13 == (char)*puVar17)) {
                    puVar17 = (ulonglong *)((longlong)puVar17 + 1);
                  }
                  uVar3 = (int)puVar17 - iVar29;
                }
LAB_1414bc1be:
                puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar3 + 4);
                if (puVar12 == puVar26) {
                  puVar13 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
                  puVar17 = puVar26;
                  puVar14 = (ulonglong *)param_2;
                  if (puVar26 < puVar13) {
                    uVar7 = *puVar26 ^ *(ulonglong *)param_2;
                    if (uVar7 == 0) {
                      puVar17 = puVar26 + 1;
                      puVar14 = (ulonglong *)(param_2 + 8);
                      goto LAB_1414bc1fc;
                    }
                    uVar30 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      uVar30 = uVar30 + 1;
                    }
                    uVar30 = uVar30 >> 3;
                  }
                  else {
LAB_1414bc1fc:
                    if (puVar17 < puVar13) {
LAB_1414bc201:
                      uVar7 = *puVar14 ^ *puVar17;
                      if (uVar7 == 0) goto code_r0x0001414bc20d;
                      uVar30 = 0;
                      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                        uVar30 = uVar30 + 1;
                      }
                      uVar30 = (int)puVar17 + ((uVar30 >> 3) - (int)puVar26);
                      goto LAB_1414bc25c;
                    }
LAB_1414bc21a:
                    if ((puVar17 < param_2 + (longlong)param_4 + -8) &&
                       ((int)*puVar14 == (int)*puVar17)) {
                      puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                      puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                    }
                    if ((puVar17 < param_2 + (longlong)param_4 + -6) &&
                       ((short)*puVar14 == (short)*puVar17)) {
                      puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                      puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                    }
                    if ((puVar17 < puVar8) && ((char)*puVar14 == (char)*puVar17)) {
                      puVar17 = (ulonglong *)((longlong)puVar17 + 1);
                    }
                    uVar30 = (int)puVar17 - (int)puVar26;
                  }
LAB_1414bc25c:
                  uVar3 = uVar3 + uVar30;
                  puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar30);
                }
              }
              else {
                puVar26 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
                if (puVar17 < puVar26) {
                  uVar7 = *puVar17 ^ *puVar13;
                  if (uVar7 == 0) {
                    puVar17 = (ulonglong *)((longlong)puVar12 + 0xc);
                    puVar13 = (ulonglong *)(piVar20 + 3);
                    if (puVar17 < puVar26) {
LAB_1414bc360:
                      uVar7 = *puVar17 ^ *puVar13;
                      if (uVar7 == 0) goto code_r0x0001414bc368;
                      uVar3 = 0;
                      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                        uVar3 = uVar3 + 1;
                      }
                      uVar3 = (int)puVar17 + ((uVar3 >> 3) - iVar29);
                      goto LAB_1414bc3b7;
                    }
                    goto LAB_1414bc375;
                  }
                  uVar3 = 0;
                  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                    uVar3 = uVar3 + 1;
                  }
                  uVar3 = uVar3 >> 3;
                }
                else {
LAB_1414bc375:
                  if ((puVar17 < param_2 + (longlong)param_4 + -8) &&
                     ((int)*puVar13 == (int)*puVar17)) {
                    puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                    puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                  }
                  if ((puVar17 < param_2 + (longlong)param_4 + -6) &&
                     ((short)*puVar13 == (short)*puVar17)) {
                    puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                    puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                  }
                  if ((puVar17 < puVar8) && ((char)*puVar13 == (char)*puVar17)) {
                    puVar17 = (ulonglong *)((longlong)puVar17 + 1);
                  }
                  uVar3 = (int)puVar17 - iVar29;
                }
LAB_1414bc3b7:
                puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar3 + 4);
              }
              if (pcVar16 < param_3 + (ulonglong)(uVar3 + 0xf0) / 0xff + 6) goto LAB_1414bd3e6;
              if (uVar3 < 0xf) {
                *pcVar9 = (char)uVar3 + *pcVar9;
              }
              else {
                uVar3 = uVar3 - 0xf;
                *pcVar9 = *pcVar9 + '\x0f';
                param_3[0] = -1;
                param_3[1] = -1;
                param_3[2] = -1;
                param_3[3] = -1;
                if (0x3fb < uVar3) {
                  uVar7 = (ulonglong)uVar3 / 0x3fc;
                  do {
                    param_3 = param_3 + 4;
                    uVar3 = uVar3 - 0x3fc;
                    param_3[0] = -1;
                    param_3[1] = -1;
                    param_3[2] = -1;
                    param_3[3] = -1;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                param_3[(ulonglong)uVar3 / 0xff] = (char)uVar3 + (char)((ulonglong)uVar3 / 0xff);
                param_3 = param_3 + (ulonglong)uVar3 / 0xff + 1;
              }
              puVar13 = puVar12;
              if (param_2 + (longlong)param_4 + -0xb <= puVar12) goto LAB_1414bc4b7;
              uVar30 = (int)puVar12 - iVar34;
              *(int *)((longlong)param_1 +
                      ((ulonglong)(*(longlong *)((longlong)puVar12 + -2) * -0x30e4432345000000) >>
                      0x34) * 4) = ((int)puVar12 + -2) - iVar34;
              uVar7 = *puVar12 * -0x30e4432345000000 >> 0x34;
              uVar3 = *(uint *)((longlong)param_1 + uVar7 * 4);
              if (uVar3 < uVar2) {
                piVar20 = (int *)((ulonglong)_Src->hashTable[uVar7] + lVar31);
                uVar3 = iVar27 + _Src->hashTable[uVar7];
                piVar19 = piVar32;
              }
              else {
                piVar20 = (int *)((ulonglong)uVar3 + lVar4);
                piVar19 = (int *)param_2;
              }
              *(uint *)((longlong)param_1 + uVar7 * 4) = uVar30;
              if ((uVar3 + 0xffff < uVar30) || (*piVar20 != (int)*puVar12)) goto LAB_1414bc48b;
              pcVar22 = param_3 + 1;
              iVar15 = uVar30 - uVar3;
              *param_3 = '\0';
              pcVar9 = param_3;
            } while( true );
          }
          goto LAB_1414bd4ac;
        }
LAB_1414bc4b7:
        iVar29 = 0;
        pcVar22 = param_2 + ((longlong)param_4 - (longlong)puVar13);
        if (param_3 + (longlong)(pcVar22 + (ulonglong)(pcVar22 + 0xf0) / 0xff + 1) <= pcVar16) {
          if (pcVar22 < (char *)0xf) {
            *param_3 = (char)pcVar22 << 4;
          }
          else {
            *param_3 = -0x10;
            pcVar16 = pcVar22 + -0xf;
            param_3 = param_3 + 1;
            if ((char *)0xfe < pcVar16) {
              memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar16 / 0x1fe),0xff),
                     (ulonglong)pcVar16 / 0xff);
              param_3 = param_3 + (ulonglong)pcVar16 / 0xff;
              pcVar16 = (char *)((ulonglong)pcVar16 % 0xff);
            }
            *param_3 = (char)pcVar16;
          }
          memcpy(param_3 + 1,puVar13,(size_t)pcVar22);
          iVar29 = (int)param_3 + 1 + ((int)pcVar22 - local_res18);
        }
        goto LAB_1414bd4ac;
      }
LAB_1414bccf6:
      if (0 < param_5) {
        *param_3 = '\0';
        iVar29 = 1;
        goto LAB_1414bd4ac;
      }
    }
LAB_1414bcce9:
    iVar29 = 0;
  }
LAB_1414bd4ac:
  (param_1->internal_donotuse).dictionary = (uchar *)param_2;
  (param_1->internal_donotuse).dictSize = param_4;
  return iVar29;
code_r0x0001414baf3c:
  puVar8 = puVar8 + 1;
  puVar12 = puVar12 + 1;
  if (puVar13 <= puVar8) goto LAB_1414baf49;
  goto LAB_1414baf30;
LAB_1414bb0c0:
  lVar4 = *(longlong *)((longlong)plVar36 + 1);
  plVar11 = (longlong *)((longlong)plVar36 + 1);
  goto LAB_1414bad60;
code_r0x0001414bb47c:
  puVar12 = puVar12 + 1;
  puVar8 = puVar8 + 1;
  if (puVar13 <= puVar12) goto LAB_1414bb489;
  goto LAB_1414bb470;
LAB_1414bb5f4:
  lVar4 = *(longlong *)((longlong)plVar36 + 1);
  plVar11 = (longlong *)((longlong)plVar36 + 1);
  goto LAB_1414bb2a0;
code_r0x0001414bd1fd:
  puVar17 = puVar17 + 1;
  puVar12 = puVar12 + 1;
  if (puVar26 <= puVar17) goto LAB_1414bd20a;
  goto LAB_1414bd1f1;
code_r0x0001414bd08c:
  puVar17 = puVar17 + 1;
  puVar12 = puVar12 + 1;
  if (puVar14 <= puVar17) goto LAB_1414bd099;
  goto LAB_1414bd080;
code_r0x0001414bd12e:
  puVar17 = puVar17 + 1;
  puVar14 = puVar14 + 1;
  if (puVar12 <= puVar17) goto LAB_1414bd13b;
  goto LAB_1414bd122;
LAB_1414bd3b3:
  uVar7 = *(ulonglong *)((longlong)puVar8 + 1);
  puVar12 = (ulonglong *)((longlong)puVar8 + 1);
  goto LAB_1414bce20;
code_r0x0001414bca4e:
  puVar17 = puVar17 + 1;
  puVar12 = puVar12 + 1;
  if (puVar26 <= puVar17) goto LAB_1414bca5b;
  goto LAB_1414bca42;
code_r0x0001414bc8de:
  puVar17 = puVar17 + 1;
  puVar12 = puVar12 + 1;
  if (puVar14 <= puVar17) goto LAB_1414bc8eb;
  goto LAB_1414bc8d2;
code_r0x0001414bc97f:
  puVar17 = puVar17 + 1;
  puVar14 = puVar14 + 1;
  if (puVar12 <= puVar17) goto LAB_1414bc98c;
  goto LAB_1414bc973;
LAB_1414bcbfe:
  uVar7 = *(ulonglong *)((longlong)puVar8 + 1);
  puVar12 = (ulonglong *)((longlong)puVar8 + 1);
  goto LAB_1414bc692;
code_r0x0001414bbc20:
  puVar8 = puVar8 + 1;
  puVar13 = puVar13 + 1;
  if (puVar26 <= puVar8) goto LAB_1414bbc2d;
  goto LAB_1414bbc18;
code_r0x0001414bba2c:
  puVar8 = puVar8 + 1;
  puVar13 = puVar13 + 1;
  if (puVar14 <= puVar8) goto LAB_1414bba39;
  goto LAB_1414bba20;
code_r0x0001414bbace:
  puVar8 = puVar8 + 1;
  puVar14 = puVar14 + 1;
  if (puVar13 <= puVar8) goto LAB_1414bbadb;
  goto LAB_1414bbac2;
LAB_1414bbd5f:
  pcVar22 = param_2 + ((longlong)param_4 - (longlong)puVar12);
  if (pcVar16 < param_3 + (longlong)(pcVar22 + (ulonglong)(pcVar22 + 0xf0) / 0xff + 1)) {
LAB_1414bbd57:
    iVar29 = 0;
  }
  else {
    if (pcVar22 < (char *)0xf) {
      *param_3 = (char)pcVar22 << 4;
    }
    else {
      *param_3 = -0x10;
      pcVar16 = pcVar22 + -0xf;
      param_3 = param_3 + 1;
      if ((char *)0xfe < pcVar16) {
        memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar16 / 0x1fe),0xff),
               (ulonglong)pcVar16 / 0xff);
        param_3 = param_3 + (ulonglong)pcVar16 / 0xff;
        pcVar16 = (char *)((ulonglong)pcVar16 % 0xff);
      }
      *param_3 = (char)pcVar16;
    }
    memcpy(param_3 + 1,puVar12,(size_t)pcVar22);
    iVar29 = (int)param_3 + 1 + ((int)pcVar22 - local_res18);
  }
  goto LAB_1414bd4ac;
LAB_1414bbd31:
  uVar7 = *(ulonglong *)((longlong)puVar12 + 1);
  puVar13 = (ulonglong *)((longlong)puVar12 + 1);
  puVar8 = puVar12;
  goto LAB_1414bb810;
code_r0x0001414bc368:
  puVar17 = puVar17 + 1;
  puVar13 = puVar13 + 1;
  if (puVar26 <= puVar17) goto LAB_1414bc375;
  goto LAB_1414bc360;
code_r0x0001414bc16c:
  puVar17 = puVar17 + 1;
  puVar13 = puVar13 + 1;
  if (puVar14 <= puVar17) goto LAB_1414bc179;
  goto LAB_1414bc160;
code_r0x0001414bc20d:
  puVar17 = puVar17 + 1;
  puVar14 = puVar14 + 1;
  if (puVar13 <= puVar17) goto LAB_1414bc21a;
  goto LAB_1414bc201;
LAB_1414bc48b:
  uVar7 = *(ulonglong *)((longlong)puVar12 + 1);
  puVar8 = (ulonglong *)((longlong)puVar12 + 1);
  goto LAB_1414bbf40;
}

// LZ4_compress_fast_extState @ 1414bd4f0

int __cdecl
LZ4_compress_fast_extState
          (void *param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  ulonglong *puVar2;
  ushort uVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  short *psVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  int *piVar16;
  short *psVar17;
  char *pcVar18;
  int iVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  short sVar23;
  uint uVar24;
  longlong lVar25;
  int *piVar26;
  uint uVar27;
  longlong *plVar28;
  longlong *plVar29;
  void *local_res8;
  int local_res18;
  
  if (param_1 == (void *)0x0) {
    local_res8 = (void *)0x0;
  }
  else if (((ulonglong)param_1 & 7) == 0) {
    memset(param_1,0,0x4020);
    local_res8 = param_1;
  }
  else {
    local_res8 = (void *)0x0;
  }
  iVar21 = 1;
  if (0 < param_6) {
    iVar21 = param_6;
  }
  if (0x10001 < iVar21) {
    iVar21 = 0x10001;
  }
  iVar4 = 0;
  if ((uint)param_4 < 0x7e000001) {
    iVar4 = param_4 / 0xff + 0x10 + param_4;
  }
  local_res18 = (int)param_3;
  if (param_5 < iVar4) {
    if (param_4 < 0x1000b) {
      if ((uint)param_4 < 0x7e000001) {
        if (param_4 == 0) {
          if (0 < param_5) {
            *param_3 = '\0';
            return 1;
          }
          return 0;
        }
        *(int *)((longlong)local_res8 + 0x4018) = *(int *)((longlong)local_res8 + 0x4018) + param_4;
        lVar25 = (longlong)param_2 - (ulonglong)*(uint *)((longlong)local_res8 + 0x4010);
        *(uint *)((longlong)local_res8 + 0x4010) =
             *(uint *)((longlong)local_res8 + 0x4010) + param_4;
        pcVar18 = param_3 + param_5;
        *(undefined4 *)((longlong)local_res8 + 0x4014) = 3;
        piVar14 = (int *)param_2;
        if (0xc < param_4) {
          piVar8 = (int *)(param_2 + 1);
          sVar23 = (short)lVar25;
          *(short *)((longlong)local_res8 +
                    (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) =
               (short)param_2 - sVar23;
          iVar4 = *piVar8;
LAB_1414bdf30:
          iVar19 = 1;
          iVar22 = iVar21 << 6;
          do {
            piVar26 = piVar8;
            lVar7 = (ulonglong)((uint)(iVar4 * -0x61c8864f) >> 0x13) * 2;
            lVar12 = (longlong)iVar19;
            iVar19 = iVar22 >> 6;
            piVar8 = (int *)(lVar12 + (longlong)piVar26);
            iVar22 = iVar22 + 1;
            if (param_2 + (longlong)param_4 + -0xb < piVar8) goto LAB_1414be2b5;
            iVar4 = *piVar8;
            uVar3 = *(ushort *)(lVar7 + (longlong)local_res8);
            *(short *)(lVar7 + (longlong)local_res8) = (short)piVar26 - sVar23;
            piVar16 = (int *)((ulonglong)uVar3 + lVar25);
          } while (*piVar16 != *piVar26);
          if (piVar14 < piVar26 && param_2 < piVar16) {
            do {
              piVar8 = (int *)((longlong)piVar16 - 1);
              piVar13 = (int *)((longlong)piVar26 - 1);
              if (*(char *)((longlong)piVar26 - 1) != *(char *)((longlong)piVar16 - 1)) break;
              piVar16 = piVar8;
              piVar26 = piVar13;
            } while (param_2 < piVar8 && piVar14 < piVar13);
          }
          uVar27 = (int)piVar26 - (int)piVar14;
          uVar10 = (ulonglong)uVar27;
          psVar17 = (short *)((longlong)param_3 + 1);
          if (pcVar18 < (char *)(uVar10 / 0xff + 8 + uVar10 + (longlong)psVar17)) {
            return 0;
          }
          if (uVar27 < 0xf) {
            *param_3 = (char)uVar27 << 4;
          }
          else {
            uVar27 = uVar27 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar27) {
              uVar6 = (ulonglong)uVar27 / 0xff;
              memset(psVar17,(int)CONCAT71((int7)(uVar6 >> 8),0xff),uVar6);
              psVar17 = (short *)((longlong)psVar17 + uVar6);
              uVar27 = uVar27 + (int)uVar6 * -0xff;
            }
            *(char *)psVar17 = (char)uVar27;
            psVar17 = (short *)((longlong)psVar17 + 1);
          }
          psVar9 = (short *)((longlong)psVar17 + uVar10);
          lVar7 = (longlong)piVar14 - (longlong)psVar17;
          do {
            *(undefined8 *)psVar17 = *(undefined8 *)((longlong)psVar17 + lVar7);
            psVar17 = psVar17 + 4;
          } while (psVar17 < psVar9);
          puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
          psVar17 = (short *)param_3;
          piVar14 = piVar26;
          do {
            puVar11 = (ulonglong *)(piVar14 + 1);
            puVar5 = (ulonglong *)(piVar16 + 1);
            *psVar9 = (short)piVar14 - (short)piVar16;
            param_3 = (char *)(psVar9 + 1);
            iVar4 = (int)puVar11;
            if (puVar11 < puVar2) {
              uVar10 = *puVar11 ^ *puVar5;
              if (uVar10 == 0) {
                puVar11 = (ulonglong *)(piVar14 + 3);
                puVar5 = (ulonglong *)(piVar16 + 3);
                if (puVar11 < puVar2) {
LAB_1414be100:
                  uVar10 = *puVar11 ^ *puVar5;
                  if (uVar10 == 0) goto code_r0x0001414be10c;
                  uVar27 = 0;
                  for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar27 = (int)puVar11 + ((uVar27 >> 3) - iVar4);
                  goto LAB_1414be15e;
                }
                goto LAB_1414be119;
              }
              uVar27 = 0;
              for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
                uVar27 = uVar27 + 1;
              }
              uVar27 = uVar27 >> 3;
            }
            else {
LAB_1414be119:
              if ((puVar11 < param_2 + (longlong)param_4 + -8) && ((int)*puVar5 == (int)*puVar11)) {
                puVar11 = (ulonglong *)((longlong)puVar11 + 4);
                puVar5 = (ulonglong *)((longlong)puVar5 + 4);
              }
              if ((puVar11 < param_2 + (longlong)param_4 + -6) &&
                 ((short)*puVar5 == (short)*puVar11)) {
                puVar11 = (ulonglong *)((longlong)puVar11 + 2);
                puVar5 = (ulonglong *)((longlong)puVar5 + 2);
              }
              if ((puVar11 < param_2 + (longlong)param_4 + -5) && ((char)*puVar5 == (char)*puVar11))
              {
                puVar11 = (ulonglong *)((longlong)puVar11 + 1);
              }
              uVar27 = (int)puVar11 - iVar4;
            }
LAB_1414be15e:
            piVar14 = (int *)((longlong)piVar14 + (ulonglong)uVar27 + 4);
            if (pcVar18 < (char *)((ulonglong)(uVar27 + 0xf0) / 0xff + 6 + (longlong)param_3)) {
              return 0;
            }
            if (uVar27 < 0xf) {
              *(char *)psVar17 = (char)uVar27 + (char)*psVar17;
            }
            else {
              uVar27 = uVar27 - 0xf;
              uVar10 = (ulonglong)uVar27;
              *(char *)psVar17 = (char)*psVar17 + '\x0f';
              *(short *)((longlong)param_3 + 0) = -1;
              *(short *)((longlong)param_3 + 2) = -1;
              if (0x3fb < uVar27) {
                uVar6 = (ulonglong)uVar27 / 0x3fc;
                do {
                  param_3 = (char *)((longlong)param_3 + 4);
                  uVar10 = (ulonglong)((int)uVar10 - 0x3fc);
                  *(short *)((longlong)param_3 + 0) = -1;
                  *(short *)((longlong)param_3 + 2) = -1;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              pcVar15 = (char *)((longlong)param_3 + uVar10 / 0xff);
              *pcVar15 = (char)(uVar10 / 0xff) + (char)uVar10;
              param_3 = pcVar15 + 1;
            }
            if (param_2 + (longlong)param_4 + -0xb <= piVar14) break;
            *(short *)((longlong)local_res8 +
                      (ulonglong)((uint)(*(int *)((longlong)piVar14 + -2) * -0x61c8864f) >> 0x13) *
                      2) = ((short)piVar14 + -2) - sVar23;
            uVar10 = (ulonglong)((uint)(*piVar14 * -0x61c8864f) >> 0x13);
            uVar3 = *(ushort *)((longlong)local_res8 + uVar10 * 2);
            *(short *)((longlong)local_res8 + uVar10 * 2) = (short)piVar14 - sVar23;
            piVar16 = (int *)((ulonglong)uVar3 + lVar25);
            if (*piVar16 != *piVar14) goto LAB_1414be27e;
            psVar9 = (short *)((longlong)param_3 + 1);
            *param_3 = '\0';
            psVar17 = (short *)param_3;
          } while( true );
        }
LAB_1414be2b5:
        pcVar15 = param_2 + ((longlong)param_4 - (longlong)piVar14);
        if ((char *)((longlong)param_3 +
                    (longlong)(pcVar15 + (ulonglong)(pcVar15 + 0xf0) / 0xff + 1)) <= pcVar18) {
          if (pcVar15 < (char *)0xf) {
            *param_3 = (char)pcVar15 << 4;
          }
          else {
            *param_3 = -0x10;
            pcVar18 = pcVar15 + -0xf;
            param_3 = (char *)((longlong)param_3 + 1);
            if ((char *)0xfe < pcVar18) {
              memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar18 / 0x1fe),0xff),
                     (ulonglong)pcVar18 / 0xff);
              param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar18 / 0xff);
              pcVar18 = (char *)((ulonglong)pcVar18 % 0xff);
            }
            *param_3 = (char)pcVar18;
          }
          memcpy((char *)((longlong)param_3 + 1),piVar14,(size_t)pcVar15);
          return (((int)param_3 + 1) - local_res18) + (int)pcVar15;
        }
      }
      return 0;
    }
    if (0x7e000000 < (uint)param_4) {
      return 0;
    }
    *(int *)((longlong)local_res8 + 0x4018) = *(int *)((longlong)local_res8 + 0x4018) + param_4;
    *(undefined4 *)((longlong)local_res8 + 0x4014) = 2;
    pcVar18 = param_3 + param_5;
    lVar7 = (longlong)param_2 - (ulonglong)*(uint *)((longlong)local_res8 + 0x4010);
    *(uint *)((longlong)local_res8 + 0x4010) = *(uint *)((longlong)local_res8 + 0x4010) + param_4;
    iVar4 = (int)lVar7;
    *(int *)((longlong)local_res8 +
            ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
         (int)param_2 - iVar4;
    plVar20 = (longlong *)(param_2 + 1);
    lVar25 = *plVar20;
    plVar28 = (longlong *)param_2;
LAB_1414be400:
    iVar19 = 1;
    iVar22 = iVar21 << 6;
    do {
      plVar29 = plVar20;
      uVar10 = (ulonglong)(lVar25 * -0x30e4432345000000) >> 0x34;
      uVar27 = *(uint *)((longlong)local_res8 + uVar10 * 4);
      uVar24 = (int)plVar29 - iVar4;
      lVar25 = (longlong)iVar19;
      iVar19 = iVar22 >> 6;
      plVar20 = (longlong *)(lVar25 + (longlong)plVar29);
      iVar22 = iVar22 + 1;
      if (param_2 + (longlong)param_4 + -0xb < plVar20) goto LAB_1414be767;
      lVar25 = *plVar20;
      piVar14 = (int *)(lVar7 + (ulonglong)uVar27);
      *(uint *)((longlong)local_res8 + uVar10 * 4) = uVar24;
    } while ((uVar27 + 0xffff < uVar24) || (*piVar14 != (int)*plVar29));
    if (plVar28 < plVar29 && param_2 < piVar14) {
      do {
        piVar8 = (int *)((longlong)piVar14 - 1);
        plVar20 = (longlong *)((longlong)plVar29 - 1);
        if (*(char *)((longlong)plVar29 - 1) != *(char *)((longlong)piVar14 - 1)) break;
        piVar14 = piVar8;
        plVar29 = plVar20;
      } while (plVar28 < plVar20 && param_2 < piVar8);
    }
    uVar27 = (int)plVar29 - (int)plVar28;
    uVar10 = (ulonglong)uVar27;
    psVar17 = (short *)((longlong)param_3 + 1);
    if (pcVar18 < (char *)(uVar10 / 0xff + 8 + uVar10 + (longlong)psVar17)) {
      return 0;
    }
    if (uVar27 < 0xf) {
      *param_3 = (char)uVar27 << 4;
    }
    else {
      uVar27 = uVar27 - 0xf;
      *param_3 = -0x10;
      if (0xfe < (int)uVar27) {
        uVar6 = (ulonglong)uVar27 / 0xff;
        memset(psVar17,(int)CONCAT71((int7)(uVar6 >> 8),0xff),uVar6);
        psVar17 = (short *)((longlong)psVar17 + uVar6);
        uVar27 = uVar27 + (int)uVar6 * -0xff;
      }
      *(char *)psVar17 = (char)uVar27;
      psVar17 = (short *)((longlong)psVar17 + 1);
    }
    psVar9 = (short *)(uVar10 + (longlong)psVar17);
    lVar25 = (longlong)plVar28 - (longlong)psVar17;
    do {
      *(undefined8 *)psVar17 = *(undefined8 *)(lVar25 + (longlong)psVar17);
      psVar17 = psVar17 + 4;
    } while (psVar17 < psVar9);
    puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
    psVar17 = (short *)param_3;
    plVar28 = plVar29;
    do {
      puVar11 = (ulonglong *)((longlong)plVar28 + 4);
      puVar5 = (ulonglong *)(piVar14 + 1);
      *psVar9 = (short)plVar28 - (short)piVar14;
      param_3 = (char *)(psVar9 + 1);
      iVar22 = (int)puVar11;
      if (puVar11 < puVar2) {
        uVar10 = *puVar11 ^ *puVar5;
        if (uVar10 == 0) {
          puVar11 = (ulonglong *)((longlong)plVar28 + 0xc);
          puVar5 = (ulonglong *)(piVar14 + 3);
          if (puVar11 < puVar2) {
LAB_1414be5b0:
            uVar10 = *puVar11 ^ *puVar5;
            if (uVar10 == 0) goto code_r0x0001414be5bc;
            uVar27 = 0;
            for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
              uVar27 = uVar27 + 1;
            }
            uVar27 = (int)puVar11 + ((uVar27 >> 3) - iVar22);
            goto LAB_1414be60e;
          }
          goto LAB_1414be5c9;
        }
        uVar27 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
          uVar27 = uVar27 + 1;
        }
        uVar27 = uVar27 >> 3;
      }
      else {
LAB_1414be5c9:
        if ((puVar11 < param_2 + (longlong)param_4 + -8) && ((int)*puVar5 == (int)*puVar11)) {
          puVar11 = (ulonglong *)((longlong)puVar11 + 4);
          puVar5 = (ulonglong *)((longlong)puVar5 + 4);
        }
        if ((puVar11 < param_2 + (longlong)param_4 + -6) && ((short)*puVar5 == (short)*puVar11)) {
          puVar11 = (ulonglong *)((longlong)puVar11 + 2);
          puVar5 = (ulonglong *)((longlong)puVar5 + 2);
        }
        if ((puVar11 < param_2 + (longlong)param_4 + -5) && ((char)*puVar5 == (char)*puVar11)) {
          puVar11 = (ulonglong *)((longlong)puVar11 + 1);
        }
        uVar27 = (int)puVar11 - iVar22;
      }
LAB_1414be60e:
      plVar28 = (longlong *)((longlong)plVar28 + (ulonglong)uVar27 + 4);
      if (pcVar18 < (char *)((ulonglong)(uVar27 + 0xf0) / 0xff + 6 + (longlong)param_3))
      goto LAB_1414be75a;
      if (uVar27 < 0xf) {
        *(char *)psVar17 = (char)*psVar17 + (char)uVar27;
      }
      else {
        uVar27 = uVar27 - 0xf;
        uVar10 = (ulonglong)uVar27;
        *(char *)psVar17 = (char)*psVar17 + '\x0f';
        *(short *)((longlong)param_3 + 0) = -1;
        *(short *)((longlong)param_3 + 2) = -1;
        if (0x3fb < uVar27) {
          uVar6 = (ulonglong)uVar27 / 0x3fc;
          do {
            param_3 = (char *)((longlong)param_3 + 4);
            uVar10 = (ulonglong)((int)uVar10 - 0x3fc);
            *(short *)((longlong)param_3 + 0) = -1;
            *(short *)((longlong)param_3 + 2) = -1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        pcVar15 = (char *)((longlong)param_3 + uVar10 / 0xff);
        *pcVar15 = (char)(uVar10 / 0xff) + (char)uVar10;
        param_3 = pcVar15 + 1;
      }
      if (param_2 + (longlong)param_4 + -0xb <= plVar28) goto LAB_1414be767;
      *(int *)((longlong)local_res8 +
              ((ulonglong)(*(longlong *)((longlong)plVar28 + -2) * -0x30e4432345000000) >> 0x34) * 4
              ) = ((int)plVar28 + -2) - iVar4;
      uVar24 = (int)plVar28 - iVar4;
      uVar10 = (ulonglong)(*plVar28 * -0x30e4432345000000) >> 0x34;
      uVar27 = *(uint *)((longlong)local_res8 + uVar10 * 4);
      *(uint *)((longlong)local_res8 + uVar10 * 4) = uVar24;
      piVar14 = (int *)(lVar7 + (ulonglong)uVar27);
      if ((uVar27 + 0xffff < uVar24) || (*piVar14 != (int)*plVar28)) goto LAB_1414be73a;
      psVar9 = (short *)((longlong)param_3 + 1);
      *param_3 = '\0';
      psVar17 = (short *)param_3;
    } while( true );
  }
  if (param_4 < 0x1000b) {
    if (0x7e000000 < (uint)param_4) {
      return 0;
    }
    if (param_4 == 0) {
      *param_3 = '\0';
      return 1;
    }
    *(int *)((longlong)local_res8 + 0x4018) = *(int *)((longlong)local_res8 + 0x4018) + param_4;
    lVar25 = (longlong)param_2 - (ulonglong)*(uint *)((longlong)local_res8 + 0x4010);
    *(uint *)((longlong)local_res8 + 0x4010) = *(uint *)((longlong)local_res8 + 0x4010) + param_4;
    *(undefined4 *)((longlong)local_res8 + 0x4014) = 3;
    piVar14 = (int *)param_2;
    if (param_4 < 0xd) {
LAB_1414bd98f:
      pcVar18 = param_2 + ((longlong)param_4 - (longlong)piVar14);
      if (pcVar18 < (char *)0xf) {
        *param_3 = (char)pcVar18 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar15 = pcVar18 + -0xf;
        param_3 = (char *)((longlong)param_3 + 1);
        if ((char *)0xfe < pcVar15) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar15 / 0x1fe),0xff),
                 (ulonglong)pcVar15 / 0xff);
          param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar15 / 0xff);
          pcVar15 = (char *)((ulonglong)pcVar15 % 0xff);
        }
        *param_3 = (char)pcVar15;
      }
      memcpy((char *)((longlong)param_3 + 1),piVar14,(size_t)pcVar18);
      return ((int)pcVar18 - local_res18) + (int)param_3 + 1;
    }
    piVar8 = (int *)(param_2 + 1);
    sVar23 = (short)lVar25;
    *(short *)((longlong)local_res8 + (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2
              ) = (short)param_2 - sVar23;
    iVar4 = *piVar8;
    piVar26 = (int *)param_2;
LAB_1414bd690:
    iVar19 = 1;
    iVar22 = iVar21 << 6;
    do {
      piVar16 = piVar8;
      uVar10 = (ulonglong)((uint)(iVar4 * -0x61c8864f) >> 0x13);
      lVar7 = (longlong)iVar19;
      iVar19 = iVar22 >> 6;
      piVar8 = (int *)(lVar7 + (longlong)piVar16);
      iVar22 = iVar22 + 1;
      piVar14 = piVar26;
      if (param_2 + (longlong)param_4 + -0xb < piVar8) goto LAB_1414bd98f;
      iVar4 = *piVar8;
      piVar13 = (int *)((ulonglong)*(ushort *)((longlong)local_res8 + uVar10 * 2) + lVar25);
      *(short *)((longlong)local_res8 + uVar10 * 2) = (short)piVar16 - sVar23;
    } while (*piVar13 != *piVar16);
    piVar14 = piVar16;
    if (param_2 < piVar13 && piVar26 < piVar16) {
      do {
        piVar8 = (int *)((longlong)piVar13 - 1);
        piVar1 = (int *)((longlong)piVar16 - 1);
        piVar14 = piVar16;
        if (*(char *)((longlong)piVar16 - 1) != *(char *)((longlong)piVar13 - 1)) break;
        piVar13 = piVar8;
        piVar14 = piVar1;
        piVar16 = piVar1;
      } while (piVar26 < piVar1 && param_2 < piVar8);
    }
    uVar27 = (int)piVar14 - (int)piVar26;
    psVar17 = (short *)((longlong)param_3 + 1);
    if (uVar27 < 0xf) {
      *param_3 = (char)uVar27 << 4;
    }
    else {
      uVar24 = uVar27 - 0xf;
      *param_3 = -0x10;
      if (0xfe < (int)uVar24) {
        uVar10 = (ulonglong)uVar24 / 0xff;
        memset(psVar17,(int)CONCAT71((int7)(uVar10 >> 8),0xff),uVar10);
        psVar17 = (short *)((longlong)psVar17 + uVar10);
        uVar24 = uVar24 + (int)uVar10 * -0xff;
      }
      *(char *)psVar17 = (char)uVar24;
      psVar17 = (short *)((longlong)psVar17 + 1);
    }
    psVar9 = (short *)((ulonglong)uVar27 + (longlong)psVar17);
    lVar7 = (longlong)piVar26 - (longlong)psVar17;
    do {
      *(undefined8 *)psVar17 = *(undefined8 *)((longlong)psVar17 + lVar7);
      psVar17 = psVar17 + 4;
    } while (psVar17 < psVar9);
    puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
    psVar17 = (short *)param_3;
    do {
      puVar11 = (ulonglong *)(piVar13 + 1);
      *psVar9 = (short)piVar14 - (short)piVar13;
      puVar5 = (ulonglong *)(piVar14 + 1);
      param_3 = (char *)(psVar9 + 1);
      iVar4 = (int)puVar5;
      if (puVar5 < puVar2) {
        uVar10 = *puVar5 ^ *puVar11;
        if (uVar10 == 0) {
          puVar5 = (ulonglong *)(piVar14 + 3);
          puVar11 = (ulonglong *)(piVar13 + 3);
          if (puVar5 < puVar2) {
LAB_1414bd820:
            uVar10 = *puVar5 ^ *puVar11;
            if (uVar10 == 0) goto code_r0x0001414bd82c;
            uVar27 = 0;
            for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
              uVar27 = uVar27 + 1;
            }
            uVar27 = ((uVar27 >> 3) - iVar4) + (int)puVar5;
            goto LAB_1414bd87d;
          }
          goto LAB_1414bd839;
        }
        uVar27 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
          uVar27 = uVar27 + 1;
        }
        uVar27 = uVar27 >> 3;
      }
      else {
LAB_1414bd839:
        if ((puVar5 < param_2 + (longlong)param_4 + -8) && ((int)*puVar11 == (int)*puVar5)) {
          puVar5 = (ulonglong *)((longlong)puVar5 + 4);
          puVar11 = (ulonglong *)((longlong)puVar11 + 4);
        }
        if ((puVar5 < param_2 + (longlong)param_4 + -6) && ((short)*puVar11 == (short)*puVar5)) {
          puVar5 = (ulonglong *)((longlong)puVar5 + 2);
          puVar11 = (ulonglong *)((longlong)puVar11 + 2);
        }
        if ((puVar5 < param_2 + (longlong)param_4 + -5) && ((char)*puVar11 == (char)*puVar5)) {
          puVar5 = (ulonglong *)((longlong)puVar5 + 1);
        }
        uVar27 = (int)puVar5 - iVar4;
      }
LAB_1414bd87d:
      piVar14 = (int *)((longlong)piVar14 + (ulonglong)uVar27 + 4);
      if (uVar27 < 0xf) {
        *(char *)psVar17 = (char)*psVar17 + (char)uVar27;
      }
      else {
        uVar27 = uVar27 - 0xf;
        *(char *)psVar17 = (char)*psVar17 + '\x0f';
        *(short *)((longlong)param_3 + 0) = -1;
        *(short *)((longlong)param_3 + 2) = -1;
        if (0x3fb < uVar27) {
          uVar10 = (ulonglong)uVar27 / 0x3fc;
          do {
            param_3 = (char *)((longlong)param_3 + 4);
            uVar27 = uVar27 - 0x3fc;
            *(short *)((longlong)param_3 + 0) = -1;
            *(short *)((longlong)param_3 + 2) = -1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        pcVar18 = (char *)((longlong)param_3 + (ulonglong)uVar27 / 0xff);
        *pcVar18 = (char)((ulonglong)uVar27 / 0xff) + (char)uVar27;
        param_3 = pcVar18 + 1;
      }
      if (param_2 + (longlong)param_4 + -0xb <= piVar14) goto LAB_1414bd98f;
      *(short *)((longlong)local_res8 +
                (ulonglong)((uint)(*(int *)((longlong)piVar14 + -2) * -0x61c8864f) >> 0x13) * 2) =
           ((short)piVar14 + -2) - sVar23;
      uVar10 = (ulonglong)((uint)(*piVar14 * -0x61c8864f) >> 0x13);
      uVar3 = *(ushort *)((longlong)local_res8 + uVar10 * 2);
      *(short *)((longlong)local_res8 + uVar10 * 2) = (short)piVar14 - sVar23;
      piVar13 = (int *)((ulonglong)uVar3 + lVar25);
      if (*piVar13 != *piVar14) goto LAB_1414bd970;
      psVar9 = (short *)((longlong)param_3 + 1);
      *param_3 = '\0';
      psVar17 = (short *)param_3;
    } while( true );
  }
  if (0x7e000000 < (uint)param_4) {
    return 0;
  }
  *(int *)((longlong)local_res8 + 0x4018) = *(int *)((longlong)local_res8 + 0x4018) + param_4;
  *(undefined4 *)((longlong)local_res8 + 0x4014) = 2;
  lVar7 = (longlong)param_2 - (ulonglong)*(uint *)((longlong)local_res8 + 0x4010);
  *(uint *)((longlong)local_res8 + 0x4010) = *(uint *)((longlong)local_res8 + 0x4010) + param_4;
  iVar4 = (int)lVar7;
  *(int *)((longlong)local_res8 +
          ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
       (int)param_2 - iVar4;
  plVar20 = (longlong *)(param_2 + 1);
  lVar25 = *plVar20;
  plVar28 = (longlong *)param_2;
LAB_1414bdab0:
  iVar19 = 1;
  iVar22 = iVar21 << 6;
  do {
    plVar29 = plVar20;
    uVar10 = (ulonglong)(lVar25 * -0x30e4432345000000) >> 0x34;
    uVar27 = *(uint *)((longlong)local_res8 + uVar10 * 4);
    uVar24 = (int)plVar29 - iVar4;
    plVar20 = (longlong *)((longlong)iVar19 + (longlong)plVar29);
    iVar19 = iVar22 >> 6;
    iVar22 = iVar22 + 1;
    if (param_2 + (longlong)param_4 + -0xb < plVar20) goto LAB_1414bddd1;
    lVar25 = *plVar20;
    piVar14 = (int *)((ulonglong)uVar27 + lVar7);
    *(uint *)((longlong)local_res8 + uVar10 * 4) = uVar24;
  } while ((uVar27 + 0xffff < uVar24) || (*piVar14 != (int)*plVar29));
  if (plVar28 < plVar29 && param_2 < piVar14) {
    do {
      piVar8 = (int *)((longlong)piVar14 - 1);
      plVar20 = (longlong *)((longlong)plVar29 - 1);
      if (*(char *)((longlong)plVar29 - 1) != *(char *)((longlong)piVar14 - 1)) break;
      piVar14 = piVar8;
      plVar29 = plVar20;
    } while (param_2 < piVar8 && plVar28 < plVar20);
  }
  uVar27 = (int)plVar29 - (int)plVar28;
  psVar17 = (short *)((longlong)param_3 + 1);
  if (uVar27 < 0xf) {
    *param_3 = (char)uVar27 << 4;
  }
  else {
    uVar24 = uVar27 - 0xf;
    *param_3 = -0x10;
    if (0xfe < (int)uVar24) {
      uVar10 = (ulonglong)uVar24 / 0xff;
      memset(psVar17,(int)CONCAT71((int7)(uVar10 >> 8),0xff),uVar10);
      psVar17 = (short *)((longlong)psVar17 + uVar10);
      uVar24 = uVar24 + (int)uVar10 * -0xff;
    }
    *(char *)psVar17 = (char)uVar24;
    psVar17 = (short *)((longlong)psVar17 + 1);
  }
  psVar9 = (short *)((ulonglong)uVar27 + (longlong)psVar17);
  lVar25 = (longlong)plVar28 - (longlong)psVar17;
  do {
    *(undefined8 *)psVar17 = *(undefined8 *)(lVar25 + (longlong)psVar17);
    psVar17 = psVar17 + 4;
  } while (psVar17 < psVar9);
  puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
  psVar17 = (short *)param_3;
  plVar28 = plVar29;
  do {
    puVar11 = (ulonglong *)((longlong)plVar28 + 4);
    puVar5 = (ulonglong *)(piVar14 + 1);
    *psVar9 = (short)plVar28 - (short)piVar14;
    param_3 = (char *)(psVar9 + 1);
    iVar22 = (int)puVar11;
    if (puVar11 < puVar2) {
      uVar10 = *puVar5 ^ *puVar11;
      if (uVar10 == 0) {
        puVar11 = (ulonglong *)((longlong)plVar28 + 0xc);
        puVar5 = (ulonglong *)(piVar14 + 3);
        if (puVar11 < puVar2) {
LAB_1414bdc50:
          uVar10 = *puVar5 ^ *puVar11;
          if (uVar10 == 0) goto code_r0x0001414bdc5c;
          uVar27 = 0;
          for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
            uVar27 = uVar27 + 1;
          }
          uVar27 = (int)puVar11 + ((uVar27 >> 3) - iVar22);
          goto LAB_1414bdcad;
        }
        goto LAB_1414bdc69;
      }
      uVar27 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
        uVar27 = uVar27 + 1;
      }
      uVar27 = uVar27 >> 3;
    }
    else {
LAB_1414bdc69:
      if ((puVar11 < param_2 + (longlong)param_4 + -8) && ((int)*puVar5 == (int)*puVar11)) {
        puVar11 = (ulonglong *)((longlong)puVar11 + 4);
        puVar5 = (ulonglong *)((longlong)puVar5 + 4);
      }
      if ((puVar11 < param_2 + (longlong)param_4 + -6) && ((short)*puVar5 == (short)*puVar11)) {
        puVar11 = (ulonglong *)((longlong)puVar11 + 2);
        puVar5 = (ulonglong *)((longlong)puVar5 + 2);
      }
      if ((puVar11 < param_2 + (longlong)param_4 + -5) && ((char)*puVar5 == (char)*puVar11)) {
        puVar11 = (ulonglong *)((longlong)puVar11 + 1);
      }
      uVar27 = (int)puVar11 - iVar22;
    }
LAB_1414bdcad:
    plVar28 = (longlong *)((longlong)plVar28 + (ulonglong)uVar27 + 4);
    if (uVar27 < 0xf) {
      *(char *)psVar17 = (char)*psVar17 + (char)uVar27;
    }
    else {
      uVar27 = uVar27 - 0xf;
      *(char *)psVar17 = (char)*psVar17 + '\x0f';
      *(short *)((longlong)param_3 + 0) = -1;
      *(short *)((longlong)param_3 + 2) = -1;
      if (0x3fb < uVar27) {
        uVar10 = (ulonglong)uVar27 / 0x3fc;
        do {
          param_3 = (char *)((longlong)param_3 + 4);
          uVar27 = uVar27 - 0x3fc;
          *(short *)((longlong)param_3 + 0) = -1;
          *(short *)((longlong)param_3 + 2) = -1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      pcVar18 = (char *)((longlong)param_3 + (ulonglong)uVar27 / 0xff);
      *pcVar18 = (char)((ulonglong)uVar27 / 0xff) + (char)uVar27;
      param_3 = pcVar18 + 1;
    }
    if (param_2 + (longlong)param_4 + -0xb <= plVar28) {
LAB_1414bddd1:
      pcVar18 = param_2 + ((longlong)param_4 - (longlong)plVar28);
      if (pcVar18 < (char *)0xf) {
        *param_3 = (char)pcVar18 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar15 = pcVar18 + -0xf;
        param_3 = (char *)((longlong)param_3 + 1);
        if ((char *)0xfe < pcVar15) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar15 / 0x1fe),0xff),
                 (ulonglong)pcVar15 / 0xff);
          param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar15 / 0xff);
          pcVar15 = (char *)((ulonglong)pcVar15 % 0xff);
        }
        *param_3 = (char)pcVar15;
      }
      memcpy((char *)((longlong)param_3 + 1),plVar28,(size_t)pcVar18);
      return (int)param_3 + 1 + ((int)pcVar18 - local_res18);
    }
    *(int *)((longlong)local_res8 +
            ((ulonglong)(*(longlong *)((longlong)plVar28 + -2) * -0x30e4432345000000) >> 0x34) * 4)
         = ((int)plVar28 + -2) - iVar4;
    uVar24 = (int)plVar28 - iVar4;
    uVar10 = (ulonglong)(*plVar28 * -0x30e4432345000000) >> 0x34;
    uVar27 = *(uint *)((longlong)local_res8 + uVar10 * 4);
    *(uint *)((longlong)local_res8 + uVar10 * 4) = uVar24;
    piVar14 = (int *)((ulonglong)uVar27 + lVar7);
    if ((uVar27 + 0xffff < uVar24) || (*piVar14 != (int)*plVar28)) goto LAB_1414bddb1;
    psVar9 = (short *)((longlong)param_3 + 1);
    *param_3 = '\0';
    psVar17 = (short *)param_3;
  } while( true );
code_r0x0001414be10c:
  puVar11 = puVar11 + 1;
  puVar5 = puVar5 + 1;
  if (puVar2 <= puVar11) goto LAB_1414be119;
  goto LAB_1414be100;
LAB_1414be27e:
  iVar4 = *(int *)((longlong)piVar14 + 1);
  piVar8 = (int *)((longlong)piVar14 + 1);
  goto LAB_1414bdf30;
code_r0x0001414be5bc:
  puVar11 = puVar11 + 1;
  puVar5 = puVar5 + 1;
  if (puVar2 <= puVar11) goto LAB_1414be5c9;
  goto LAB_1414be5b0;
LAB_1414be73a:
  lVar25 = *(longlong *)((longlong)plVar28 + 1);
  plVar20 = (longlong *)((longlong)plVar28 + 1);
  goto LAB_1414be400;
code_r0x0001414bd82c:
  puVar5 = puVar5 + 1;
  puVar11 = puVar11 + 1;
  if (puVar2 <= puVar5) goto LAB_1414bd839;
  goto LAB_1414bd820;
LAB_1414bd970:
  iVar4 = *(int *)((longlong)piVar14 + 1);
  piVar8 = (int *)((longlong)piVar14 + 1);
  piVar26 = piVar14;
  goto LAB_1414bd690;
code_r0x0001414bdc5c:
  puVar11 = puVar11 + 1;
  puVar5 = puVar5 + 1;
  if (puVar2 <= puVar11) goto LAB_1414bdc69;
  goto LAB_1414bdc50;
LAB_1414bddb1:
  lVar25 = *(longlong *)((longlong)plVar28 + 1);
  plVar20 = (longlong *)((longlong)plVar28 + 1);
  goto LAB_1414bdab0;
LAB_1414be767:
  pcVar15 = param_2 + ((longlong)param_4 - (longlong)plVar28);
  if (pcVar18 < (char *)((longlong)param_3 +
                        (longlong)(pcVar15 + (ulonglong)(pcVar15 + 0xf0) / 0xff + 1))) {
LAB_1414be75a:
    iVar21 = 0;
  }
  else {
    if (pcVar15 < (char *)0xf) {
      *param_3 = (char)pcVar15 << 4;
    }
    else {
      *param_3 = -0x10;
      pcVar18 = pcVar15 + -0xf;
      param_3 = (char *)((longlong)param_3 + 1);
      if ((char *)0xfe < pcVar18) {
        memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar18 / 0x1fe),0xff),
               (ulonglong)pcVar18 / 0xff);
        param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar18 / 0xff);
        pcVar18 = (char *)((ulonglong)pcVar18 % 0xff);
      }
      *param_3 = (char)pcVar18;
    }
    memcpy((char *)((longlong)param_3 + 1),plVar28,(size_t)pcVar15);
    iVar21 = (((int)param_3 + 1) - local_res18) + (int)pcVar15;
  }
  return iVar21;
}

// LZ4_compress_fast_extState_fastReset @ 1414be840

int __cdecl
LZ4_compress_fast_extState_fastReset
          (void *param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6)

{
  ulonglong *puVar1;
  int *piVar2;
  ushort *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  short *psVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int *piVar16;
  char *pcVar17;
  int *piVar18;
  int *piVar19;
  short *psVar20;
  char *pcVar21;
  short *psVar22;
  short sVar23;
  longlong *plVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  short sVar28;
  uint uVar29;
  int *piVar30;
  longlong *plVar31;
  longlong *plVar32;
  uint uVar33;
  int local_res18;
  char *local_60;
  
  iVar27 = 1;
  if (0 < param_6) {
    iVar27 = param_6;
  }
  if (0x10001 < iVar27) {
    iVar27 = 0x10001;
  }
  if ((uint)param_4 < 0x7e000001) {
    iVar13 = param_4 / 0xff + 0x10 + param_4;
  }
  else {
    iVar13 = 0;
  }
  lVar15 = (longlong)param_5;
  iVar25 = *(int *)((longlong)param_1 + 0x4014);
  sVar23 = (short)param_2;
  local_res18 = (int)param_3;
  if (param_5 < iVar13) {
    if (0x1000a < param_4) {
      if (iVar25 != 0) {
        memset(param_1,0,0x4000);
        *(undefined8 *)((longlong)param_1 + 0x4010) = 0;
      }
      if (*(int *)((longlong)param_1 + 0x4010) != 0) {
        *(int *)((longlong)param_1 + 0x4010) = *(int *)((longlong)param_1 + 0x4010) + 0x10000;
      }
      *(undefined8 *)((longlong)param_1 + 0x4008) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4000) = 0;
      *(undefined4 *)((longlong)param_1 + 0x4018) = 0;
      if (0x7e000000 < (uint)param_4) {
        return 0;
      }
      *(int *)((longlong)param_1 + 0x4018) = param_4;
      pcVar21 = param_3 + lVar15;
      lVar9 = (longlong)param_2 - (ulonglong)*(uint *)((longlong)param_1 + 0x4010);
      *(uint *)((longlong)param_1 + 0x4010) = *(uint *)((longlong)param_1 + 0x4010) + param_4;
      iVar13 = (int)lVar9;
      *(undefined4 *)((longlong)param_1 + 0x4014) = 2;
      plVar24 = (longlong *)(param_2 + 1);
      *(int *)((longlong)param_1 +
              ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
           (int)param_2 - iVar13;
      lVar15 = *plVar24;
      plVar32 = (longlong *)param_2;
LAB_1414c00c0:
      iVar26 = 1;
      iVar25 = iVar27 << 6;
      do {
        plVar31 = plVar24;
        uVar5 = (ulonglong)(lVar15 * -0x30e4432345000000) >> 0x34;
        uVar14 = *(uint *)((longlong)param_1 + uVar5 * 4);
        uVar33 = (int)plVar31 - iVar13;
        plVar24 = (longlong *)((longlong)iVar26 + (longlong)plVar31);
        iVar26 = iVar25 >> 6;
        iVar25 = iVar25 + 1;
        if (param_2 + (longlong)param_4 + -0xb < plVar24) goto LAB_1414c0449;
        lVar15 = *plVar24;
        piVar30 = (int *)((ulonglong)uVar14 + lVar9);
        *(uint *)((longlong)param_1 + uVar5 * 4) = uVar33;
      } while ((uVar14 + 0xffff < uVar33) || (*piVar30 != (int)*plVar31));
      if (param_2 < piVar30 && plVar32 < plVar31) {
        do {
          piVar10 = (int *)((longlong)piVar30 - 1);
          plVar24 = (longlong *)((longlong)plVar31 - 1);
          if (*(char *)((longlong)plVar31 - 1) != *(char *)((longlong)piVar30 - 1)) break;
          piVar30 = piVar10;
          plVar31 = plVar24;
        } while (param_2 < piVar10 && plVar32 < plVar24);
      }
      uVar14 = (int)plVar31 - (int)plVar32;
      uVar5 = (ulonglong)uVar14;
      psVar20 = (short *)((longlong)param_3 + 1);
      if (pcVar21 < (char *)((longlong)psVar20 + uVar5 + uVar5 / 0xff + 8)) {
        return 0;
      }
      if (uVar14 < 0xf) {
        *param_3 = (char)uVar14 << 4;
      }
      else {
        uVar14 = uVar14 - 0xf;
        *param_3 = -0x10;
        if (0xfe < (int)uVar14) {
          uVar6 = (ulonglong)uVar14 / 0xff;
          memset(psVar20,(int)CONCAT71((int7)(uVar6 >> 8),0xff),uVar6);
          psVar20 = (short *)((longlong)psVar20 + uVar6);
          uVar14 = uVar14 + (int)uVar6 * -0xff;
        }
        *(char *)psVar20 = (char)uVar14;
        psVar20 = (short *)((longlong)psVar20 + 1);
      }
      psVar7 = (short *)((longlong)psVar20 + uVar5);
      lVar15 = (longlong)plVar32 - (longlong)psVar20;
      do {
        *(undefined8 *)psVar20 = *(undefined8 *)(lVar15 + (longlong)psVar20);
        psVar20 = psVar20 + 4;
      } while (psVar20 < psVar7);
      puVar1 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
      psVar20 = (short *)param_3;
      plVar32 = plVar31;
      do {
        puVar8 = (ulonglong *)((longlong)plVar32 + 4);
        puVar11 = (ulonglong *)(piVar30 + 1);
        *psVar7 = (short)plVar32 - (short)piVar30;
        param_3 = (char *)(psVar7 + 1);
        iVar25 = (int)puVar8;
        if (puVar8 < puVar1) {
          uVar5 = *puVar11 ^ *puVar8;
          if (uVar5 == 0) {
            puVar8 = (ulonglong *)((longlong)plVar32 + 0xc);
            puVar11 = (ulonglong *)(piVar30 + 3);
            if (puVar8 < puVar1) {
LAB_1414c0290:
              uVar5 = *puVar11 ^ *puVar8;
              if (uVar5 == 0) goto code_r0x0001414c029c;
              uVar14 = 0;
              for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar14 = (int)puVar8 + ((uVar14 >> 3) - iVar25);
              goto LAB_1414c02f0;
            }
            goto LAB_1414c02a9;
          }
          uVar14 = 0;
          for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
            uVar14 = uVar14 + 1;
          }
          uVar14 = uVar14 >> 3;
        }
        else {
LAB_1414c02a9:
          if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar11 == (int)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 4);
            puVar11 = (ulonglong *)((longlong)puVar11 + 4);
          }
          if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar11 == (short)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 2);
            puVar11 = (ulonglong *)((longlong)puVar11 + 2);
          }
          if ((puVar8 < param_2 + (longlong)param_4 + -5) && ((char)*puVar11 == (char)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 1);
          }
          uVar14 = (int)puVar8 - iVar25;
        }
LAB_1414c02f0:
        plVar32 = (longlong *)((longlong)plVar32 + (ulonglong)uVar14 + 4);
        if (pcVar21 < (char *)((ulonglong)(uVar14 + 0xf0) / 0xff + 6 + (longlong)param_3))
        goto LAB_1414c0437;
        if (uVar14 < 0xf) {
          *(char *)psVar20 = (char)uVar14 + (char)*psVar20;
        }
        else {
          uVar14 = uVar14 - 0xf;
          uVar5 = (ulonglong)uVar14;
          *(char *)psVar20 = (char)*psVar20 + '\x0f';
          *(short *)((longlong)param_3 + 0) = -1;
          *(short *)((longlong)param_3 + 2) = -1;
          if (0x3fb < uVar14) {
            uVar6 = (ulonglong)uVar14 / 0x3fc;
            do {
              param_3 = (char *)((longlong)param_3 + 4);
              uVar5 = (ulonglong)((int)uVar5 - 0x3fc);
              *(short *)((longlong)param_3 + 0) = -1;
              *(short *)((longlong)param_3 + 2) = -1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          pcVar17 = (char *)((longlong)param_3 + uVar5 / 0xff);
          *pcVar17 = (char)(uVar5 / 0xff) + (char)uVar5;
          param_3 = pcVar17 + 1;
        }
        if (param_2 + (longlong)param_4 + -0xb <= plVar32) goto LAB_1414c0449;
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)((longlong)plVar32 + -2) * -0x30e4432345000000) >> 0x34) *
                4) = ((int)plVar32 + -2) - iVar13;
        uVar33 = (int)plVar32 - iVar13;
        uVar5 = (ulonglong)(*plVar32 * -0x30e4432345000000) >> 0x34;
        uVar14 = *(uint *)((longlong)param_1 + uVar5 * 4);
        *(uint *)((longlong)param_1 + uVar5 * 4) = uVar33;
        piVar30 = (int *)((ulonglong)uVar14 + lVar9);
        if ((uVar14 + 0xffff < uVar33) || (*piVar30 != (int)*plVar32)) goto LAB_1414c0412;
        psVar7 = (short *)((longlong)param_3 + 1);
        *param_3 = '\0';
        psVar20 = (short *)param_3;
      } while( true );
    }
    if ((iVar25 != 0) &&
       (((iVar25 != 3 || (0xfffe < (uint)(*(int *)((longlong)param_1 + 0x4010) + param_4))) ||
        (0xfff < param_4)))) {
      memset(param_1,0,0x4000);
      *(undefined8 *)((longlong)param_1 + 0x4010) = 0;
    }
    *(undefined8 *)((longlong)param_1 + 0x4008) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4000) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4018) = 0;
    uVar14 = *(uint *)((longlong)param_1 + 0x4010);
    piVar30 = (int *)param_2;
    psVar20 = (short *)param_3;
    if (uVar14 == 0) {
      if (0x7e000000 < (uint)param_4) {
        return 0;
      }
      if (param_4 != 0) {
        *(int *)((longlong)param_1 + 0x4018) = param_4;
        *(int *)((longlong)param_1 + 0x4010) = param_4;
        *(undefined4 *)((longlong)param_1 + 0x4014) = 3;
        if (0xc < param_4) {
          piVar10 = (int *)(param_2 + 1);
          *(undefined2 *)
           ((longlong)param_1 + (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) = 0;
          iVar13 = *piVar10;
LAB_1414bfc50:
          iVar25 = iVar27 << 6;
          local_60 = param_3 + lVar15;
          iVar26 = 1;
          do {
            piVar16 = piVar10;
            piVar10 = (int *)((longlong)iVar26 + (longlong)piVar16);
            iVar26 = iVar25 >> 6;
            iVar25 = iVar25 + 1;
            puVar3 = (ushort *)
                     ((longlong)param_1 + (ulonglong)((uint)(iVar13 * -0x61c8864f) >> 0x13) * 2);
            if (param_2 + (longlong)param_4 + -0xb < piVar10) goto LAB_1414bfb08;
            iVar13 = *piVar10;
            uVar4 = *puVar3;
            *puVar3 = (short)piVar16 - sVar23;
            piVar19 = (int *)(param_2 + uVar4);
          } while (*piVar19 != *piVar16);
          if (param_2 < piVar19 && piVar30 < piVar16) {
            do {
              piVar10 = (int *)((longlong)piVar19 - 1);
              piVar18 = (int *)((longlong)piVar16 - 1);
              if (*(char *)((longlong)piVar16 - 1) != *(char *)((longlong)piVar19 - 1)) break;
              piVar19 = piVar10;
              piVar16 = piVar18;
            } while (param_2 < piVar10 && piVar30 < piVar18);
          }
          uVar14 = (int)piVar16 - (int)piVar30;
          uVar5 = (ulonglong)uVar14;
          psVar7 = (short *)((longlong)psVar20 + 1);
          if (local_60 < (char *)((longlong)psVar7 + uVar5 + uVar5 / 0xff + 8)) {
            return 0;
          }
          if (uVar14 < 0xf) {
            *(char *)psVar20 = (char)uVar14 << 4;
          }
          else {
            uVar14 = uVar14 - 0xf;
            *(char *)psVar20 = -0x10;
            if (0xfe < (int)uVar14) {
              uVar6 = (ulonglong)uVar14 / 0xff;
              memset(psVar7,(int)CONCAT71((int7)(uVar6 >> 8),0xff),uVar6);
              psVar7 = (short *)((longlong)psVar7 + uVar6);
              uVar14 = uVar14 + (int)uVar6 * -0xff;
            }
            *(char *)psVar7 = (char)uVar14;
            psVar7 = (short *)((longlong)psVar7 + 1);
          }
          psVar22 = (short *)((longlong)psVar7 + uVar5);
          lVar9 = (longlong)piVar30 - (longlong)psVar7;
          do {
            *(undefined8 *)psVar7 = *(undefined8 *)((longlong)psVar7 + lVar9);
            psVar7 = psVar7 + 4;
          } while (psVar7 < psVar22);
          puVar1 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
          psVar7 = psVar20;
          piVar30 = piVar16;
          do {
            puVar8 = (ulonglong *)(piVar30 + 1);
            puVar11 = (ulonglong *)(piVar19 + 1);
            *psVar22 = (short)piVar30 - (short)piVar19;
            psVar20 = psVar22 + 1;
            iVar13 = (int)puVar8;
            if (puVar8 < puVar1) {
              uVar5 = *puVar8 ^ *puVar11;
              if (uVar5 == 0) {
                puVar8 = (ulonglong *)(piVar30 + 3);
                puVar11 = (ulonglong *)(piVar19 + 3);
                if (puVar8 < puVar1) {
LAB_1414bfe10:
                  uVar5 = *puVar8 ^ *puVar11;
                  if (uVar5 == 0) goto code_r0x0001414bfe1c;
                  uVar14 = 0;
                  for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                    uVar14 = uVar14 + 1;
                  }
                  uVar14 = (int)puVar8 + ((uVar14 >> 3) - iVar13);
                  goto LAB_1414bfe6e;
                }
                goto LAB_1414bfe29;
              }
              uVar14 = 0;
              for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar14 = uVar14 >> 3;
            }
            else {
LAB_1414bfe29:
              if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar11 == (int)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                puVar11 = (ulonglong *)((longlong)puVar11 + 4);
              }
              if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar11 == (short)*puVar8)
                 ) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                puVar11 = (ulonglong *)((longlong)puVar11 + 2);
              }
              if ((puVar8 < param_2 + (longlong)param_4 + -5) && ((char)*puVar11 == (char)*puVar8))
              {
                puVar8 = (ulonglong *)((longlong)puVar8 + 1);
              }
              uVar14 = (int)puVar8 - iVar13;
            }
LAB_1414bfe6e:
            piVar30 = (int *)((longlong)piVar30 + (ulonglong)uVar14 + 4);
            if (local_60 < (char *)((ulonglong)(uVar14 + 0xf0) / 0xff + 6 + (longlong)psVar20))
            goto LAB_1414c0437;
            if (uVar14 < 0xf) {
              *(char *)psVar7 = (char)*psVar7 + (char)uVar14;
            }
            else {
              uVar14 = uVar14 - 0xf;
              uVar5 = (ulonglong)uVar14;
              *(char *)psVar7 = (char)*psVar7 + '\x0f';
              psVar20[0] = -1;
              psVar20[1] = -1;
              if (0x3fb < uVar14) {
                uVar6 = (ulonglong)uVar14 / 0x3fc;
                do {
                  psVar20 = psVar20 + 2;
                  uVar5 = (ulonglong)((int)uVar5 - 0x3fc);
                  psVar20[0] = -1;
                  psVar20[1] = -1;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              pcVar21 = (char *)((longlong)psVar20 + uVar5 / 0xff);
              *pcVar21 = (char)(uVar5 / 0xff) + (char)uVar5;
              psVar20 = (short *)(pcVar21 + 1);
            }
            if (param_2 + (longlong)param_4 + -0xb <= piVar30) break;
            *(short *)((longlong)param_1 +
                      (ulonglong)((uint)(*(int *)((longlong)piVar30 + -2) * -0x61c8864f) >> 0x13) *
                      2) = ((short)piVar30 + -2) - sVar23;
            uVar5 = (ulonglong)((uint)(*piVar30 * -0x61c8864f) >> 0x13);
            uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
            *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar30 - sVar23;
            piVar19 = (int *)(param_2 + uVar4);
            if (*piVar19 != *piVar30) goto LAB_1414bff8a;
            psVar22 = (short *)((longlong)psVar20 + 1);
            *(char *)psVar20 = '\0';
            psVar7 = psVar20;
          } while( true );
        }
        goto LAB_1414bfb08;
      }
    }
    else {
      if (0x7e000000 < (uint)param_4) {
        return 0;
      }
      if (param_4 != 0) {
        *(int *)((longlong)param_1 + 0x4018) = param_4;
        lVar9 = (longlong)param_2 - (ulonglong)uVar14;
        *(uint *)((longlong)param_1 + 0x4010) = param_4 + uVar14;
        *(undefined4 *)((longlong)param_1 + 0x4014) = 3;
        if (0xc < param_4) {
          piVar10 = (int *)(param_2 + 1);
          sVar28 = (short)lVar9;
          *(short *)((longlong)param_1 +
                    (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) =
               sVar23 - sVar28;
          iVar13 = *piVar10;
LAB_1414bf780:
          uVar5 = (ulonglong)((uint)(iVar13 * -0x61c8864f) >> 0x13);
          iVar25 = 1;
          iVar13 = iVar27 << 6;
          do {
            piVar16 = piVar10;
            uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
            lVar12 = (longlong)iVar25;
            iVar25 = iVar13 >> 6;
            piVar10 = (int *)(lVar12 + (longlong)piVar16);
            iVar13 = iVar13 + 1;
            if (param_2 + (longlong)param_4 + -0xb < piVar10) goto LAB_1414bfb08;
            iVar26 = *piVar10;
            piVar19 = (int *)(lVar9 + (ulonglong)uVar4);
            *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar16 - sVar28;
            uVar5 = (ulonglong)((uint)(iVar26 * -0x61c8864f) >> 0x13);
          } while ((uVar4 < uVar14) || (*piVar19 != *piVar16));
          if (param_2 < piVar19 && piVar30 < piVar16) {
            do {
              piVar10 = (int *)((longlong)piVar19 - 1);
              piVar18 = (int *)((longlong)piVar16 - 1);
              if (*(char *)((longlong)piVar16 - 1) != *(char *)((longlong)piVar19 - 1)) break;
              piVar19 = piVar10;
              piVar16 = piVar18;
            } while (param_2 < piVar10 && piVar30 < piVar18);
          }
          uVar33 = (int)piVar16 - (int)piVar30;
          uVar5 = (ulonglong)uVar33;
          psVar7 = (short *)((longlong)psVar20 + 1);
          if (param_3 + lVar15 < (char *)((longlong)psVar7 + uVar5 + uVar5 / 0xff + 8)) {
            return 0;
          }
          if (uVar33 < 0xf) {
            *(char *)psVar20 = (char)uVar33 << 4;
          }
          else {
            uVar33 = uVar33 - 0xf;
            *(char *)psVar20 = -0x10;
            if (0xfe < (int)uVar33) {
              uVar6 = (ulonglong)uVar33 / 0xff;
              memset(psVar7,(int)CONCAT71((int7)(uVar6 >> 8),0xff),uVar6);
              psVar7 = (short *)((longlong)psVar7 + uVar6);
              uVar33 = uVar33 + (int)uVar6 * -0xff;
            }
            *(char *)psVar7 = (char)uVar33;
            psVar7 = (short *)((longlong)psVar7 + 1);
          }
          psVar22 = (short *)(uVar5 + (longlong)psVar7);
          lVar12 = (longlong)piVar30 - (longlong)psVar7;
          do {
            *(undefined8 *)psVar7 = *(undefined8 *)((longlong)psVar7 + lVar12);
            psVar7 = psVar7 + 4;
          } while (psVar7 < psVar22);
          puVar1 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
          psVar7 = psVar20;
          piVar30 = piVar16;
          do {
            puVar8 = (ulonglong *)(piVar30 + 1);
            puVar11 = (ulonglong *)(piVar19 + 1);
            *psVar22 = (short)piVar30 - (short)piVar19;
            psVar20 = psVar22 + 1;
            iVar13 = (int)puVar8;
            if (puVar8 < puVar1) {
              uVar5 = *puVar8 ^ *puVar11;
              if (uVar5 == 0) {
                puVar8 = (ulonglong *)(piVar30 + 3);
                puVar11 = (ulonglong *)(piVar19 + 3);
                if (puVar8 < puVar1) {
LAB_1414bf950:
                  uVar5 = *puVar8 ^ *puVar11;
                  if (uVar5 == 0) goto code_r0x0001414bf95c;
                  uVar33 = 0;
                  for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                    uVar33 = uVar33 + 1;
                  }
                  uVar33 = (int)puVar8 + ((uVar33 >> 3) - iVar13);
                  goto LAB_1414bf9ae;
                }
                goto LAB_1414bf969;
              }
              uVar33 = 0;
              for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                uVar33 = uVar33 + 1;
              }
              uVar33 = uVar33 >> 3;
            }
            else {
LAB_1414bf969:
              if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar11 == (int)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                puVar11 = (ulonglong *)((longlong)puVar11 + 4);
              }
              if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar11 == (short)*puVar8)
                 ) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                puVar11 = (ulonglong *)((longlong)puVar11 + 2);
              }
              if ((puVar8 < param_2 + (longlong)param_4 + -5) && ((char)*puVar11 == (char)*puVar8))
              {
                puVar8 = (ulonglong *)((longlong)puVar8 + 1);
              }
              uVar33 = (int)puVar8 - iVar13;
            }
LAB_1414bf9ae:
            piVar30 = (int *)((longlong)piVar30 + (ulonglong)uVar33 + 4);
            if (param_3 + lVar15 <
                (char *)((ulonglong)(uVar33 + 0xf0) / 0xff + 6 + (longlong)psVar20))
            goto LAB_1414c0437;
            if (uVar33 < 0xf) {
              *(char *)psVar7 = (char)*psVar7 + (char)uVar33;
            }
            else {
              uVar33 = uVar33 - 0xf;
              uVar5 = (ulonglong)uVar33;
              *(char *)psVar7 = (char)*psVar7 + '\x0f';
              psVar20[0] = -1;
              psVar20[1] = -1;
              if (0x3fb < uVar33) {
                uVar6 = (ulonglong)uVar33 / 0x3fc;
                do {
                  psVar20 = psVar20 + 2;
                  uVar5 = (ulonglong)((int)uVar5 - 0x3fc);
                  psVar20[0] = -1;
                  psVar20[1] = -1;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              pcVar21 = (char *)((longlong)psVar20 + uVar5 / 0xff);
              *pcVar21 = (char)(uVar5 / 0xff) + (char)uVar5;
              psVar20 = (short *)(pcVar21 + 1);
            }
            if (param_2 + (longlong)param_4 + -0xb <= piVar30) break;
            *(short *)((longlong)param_1 +
                      (ulonglong)((uint)(*(int *)((longlong)piVar30 + -2) * -0x61c8864f) >> 0x13) *
                      2) = ((short)piVar30 + -2) - sVar28;
            uVar5 = (ulonglong)((uint)(*piVar30 * -0x61c8864f) >> 0x13);
            uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
            *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar30 - sVar28;
            piVar19 = (int *)(lVar9 + (ulonglong)uVar4);
            if ((uVar4 < uVar14) || (*piVar19 != *piVar30)) goto LAB_1414bfad9;
            psVar22 = (short *)((longlong)psVar20 + 1);
            *(char *)psVar20 = '\0';
            psVar7 = psVar20;
          } while( true );
        }
LAB_1414bfb08:
        pcVar21 = param_2 + ((longlong)param_4 - (longlong)piVar30);
        if (param_3 + lVar15 <
            (char *)((longlong)psVar20 +
                    (longlong)(pcVar21 + (ulonglong)(pcVar21 + 0xf0) / 0xff + 1))) {
          return 0;
        }
        if (pcVar21 < (char *)0xf) {
          *(char *)psVar20 = (char)pcVar21 << 4;
        }
        else {
          *(char *)psVar20 = -0x10;
          pcVar17 = pcVar21 + -0xf;
          psVar20 = (short *)((longlong)psVar20 + 1);
          if ((char *)0xfe < pcVar17) {
            memset(psVar20,(int)CONCAT71((int7)((ulonglong)pcVar17 / 0x1fe),0xff),
                   (ulonglong)pcVar17 / 0xff);
            psVar20 = (short *)((longlong)psVar20 + (ulonglong)pcVar17 / 0xff);
            pcVar17 = (char *)((ulonglong)pcVar17 % 0xff);
          }
          *(char *)psVar20 = (char)pcVar17;
        }
        memcpy((char *)((longlong)psVar20 + 1),piVar30,(size_t)pcVar21);
        return (int)pcVar21 + (((int)psVar20 + 1) - local_res18);
      }
    }
    if (param_5 < 1) {
      return 0;
    }
  }
  else {
    if (0x1000a < param_4) {
      if (iVar25 != 0) {
        memset(param_1,0,0x4000);
        *(undefined8 *)((longlong)param_1 + 0x4010) = 0;
      }
      if (*(int *)((longlong)param_1 + 0x4010) != 0) {
        *(int *)((longlong)param_1 + 0x4010) = *(int *)((longlong)param_1 + 0x4010) + 0x10000;
      }
      *(undefined8 *)((longlong)param_1 + 0x4008) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4000) = 0;
      *(undefined4 *)((longlong)param_1 + 0x4018) = 0;
      if (0x7e000000 < (uint)param_4) {
        return 0;
      }
      *(int *)((longlong)param_1 + 0x4018) = param_4;
      lVar9 = (longlong)param_2 - (ulonglong)*(uint *)((longlong)param_1 + 0x4010);
      *(uint *)((longlong)param_1 + 0x4010) = *(uint *)((longlong)param_1 + 0x4010) + param_4;
      iVar13 = (int)lVar9;
      *(undefined4 *)((longlong)param_1 + 0x4014) = 2;
      plVar24 = (longlong *)(param_2 + 1);
      *(int *)((longlong)param_1 +
              ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
           (int)param_2 - iVar13;
      lVar15 = *plVar24;
      plVar32 = (longlong *)param_2;
LAB_1414bf2a0:
      iVar26 = 1;
      iVar25 = iVar27 << 6;
      do {
        plVar31 = plVar24;
        uVar5 = (ulonglong)(lVar15 * -0x30e4432345000000) >> 0x34;
        uVar14 = *(uint *)((longlong)param_1 + uVar5 * 4);
        uVar33 = (int)plVar31 - iVar13;
        plVar24 = (longlong *)((longlong)iVar26 + (longlong)plVar31);
        iVar26 = iVar25 >> 6;
        iVar25 = iVar25 + 1;
        if (param_2 + (longlong)param_4 + -0xb < plVar24) goto LAB_1414bf5c3;
        lVar15 = *plVar24;
        piVar30 = (int *)(lVar9 + (ulonglong)uVar14);
        *(uint *)((longlong)param_1 + uVar5 * 4) = uVar33;
      } while ((uVar14 + 0xffff < uVar33) || (*piVar30 != (int)*plVar31));
      if (plVar32 < plVar31 && param_2 < piVar30) {
        do {
          piVar10 = (int *)((longlong)piVar30 - 1);
          plVar24 = (longlong *)((longlong)plVar31 - 1);
          if (*(char *)((longlong)plVar31 - 1) != *(char *)((longlong)piVar30 - 1)) break;
          piVar30 = piVar10;
          plVar31 = plVar24;
        } while (plVar32 < plVar24 && param_2 < piVar10);
      }
      uVar14 = (int)plVar31 - (int)plVar32;
      psVar20 = (short *)((longlong)param_3 + 1);
      if (uVar14 < 0xf) {
        *param_3 = (char)uVar14 << 4;
      }
      else {
        uVar33 = uVar14 - 0xf;
        *param_3 = -0x10;
        if (0xfe < (int)uVar33) {
          uVar5 = (ulonglong)uVar33 / 0xff;
          memset(psVar20,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
          psVar20 = (short *)((longlong)psVar20 + uVar5);
          uVar33 = uVar33 + (int)uVar5 * -0xff;
        }
        *(char *)psVar20 = (char)uVar33;
        psVar20 = (short *)((longlong)psVar20 + 1);
      }
      psVar7 = (short *)((ulonglong)uVar14 + (longlong)psVar20);
      lVar15 = (longlong)plVar32 - (longlong)psVar20;
      do {
        *(undefined8 *)psVar20 = *(undefined8 *)((longlong)psVar20 + lVar15);
        psVar20 = psVar20 + 4;
      } while (psVar20 < psVar7);
      puVar1 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
      psVar20 = (short *)param_3;
      plVar32 = plVar31;
      do {
        puVar8 = (ulonglong *)((longlong)plVar32 + 4);
        puVar11 = (ulonglong *)(piVar30 + 1);
        *psVar7 = (short)plVar32 - (short)piVar30;
        param_3 = (char *)(psVar7 + 1);
        iVar25 = (int)puVar8;
        if (puVar8 < puVar1) {
          uVar5 = *puVar8 ^ *puVar11;
          if (uVar5 == 0) {
            puVar8 = (ulonglong *)((longlong)plVar32 + 0xc);
            puVar11 = (ulonglong *)(piVar30 + 3);
            if (puVar8 < puVar1) {
LAB_1414bf440:
              uVar5 = *puVar8 ^ *puVar11;
              if (uVar5 == 0) goto code_r0x0001414bf44c;
              uVar14 = 0;
              for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar14 = (int)puVar8 + ((uVar14 >> 3) - iVar25);
              goto LAB_1414bf49d;
            }
            goto LAB_1414bf459;
          }
          uVar14 = 0;
          for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
            uVar14 = uVar14 + 1;
          }
          uVar14 = uVar14 >> 3;
        }
        else {
LAB_1414bf459:
          if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar11 == (int)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 4);
            puVar11 = (ulonglong *)((longlong)puVar11 + 4);
          }
          if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar11 == (short)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 2);
            puVar11 = (ulonglong *)((longlong)puVar11 + 2);
          }
          if ((puVar8 < param_2 + (longlong)param_4 + -5) && ((char)*puVar11 == (char)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 1);
          }
          uVar14 = (int)puVar8 - iVar25;
        }
LAB_1414bf49d:
        plVar32 = (longlong *)((longlong)plVar32 + (ulonglong)uVar14 + 4);
        if (uVar14 < 0xf) {
          *(char *)psVar20 = (char)*psVar20 + (char)uVar14;
        }
        else {
          uVar14 = uVar14 - 0xf;
          *(char *)psVar20 = (char)*psVar20 + '\x0f';
          *(short *)((longlong)param_3 + 0) = -1;
          *(short *)((longlong)param_3 + 2) = -1;
          if (0x3fb < uVar14) {
            uVar5 = (ulonglong)uVar14 / 0x3fc;
            do {
              param_3 = (char *)((longlong)param_3 + 4);
              uVar14 = uVar14 - 0x3fc;
              *(short *)((longlong)param_3 + 0) = -1;
              *(short *)((longlong)param_3 + 2) = -1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          pcVar21 = (char *)((longlong)param_3 + (ulonglong)uVar14 / 0xff);
          *pcVar21 = (char)uVar14 + (char)((ulonglong)uVar14 / 0xff);
          param_3 = pcVar21 + 1;
        }
        if (param_2 + (longlong)param_4 + -0xb <= plVar32) {
LAB_1414bf5c3:
          pcVar21 = param_2 + ((longlong)param_4 - (longlong)plVar32);
          if (pcVar21 < (char *)0xf) {
            *param_3 = (char)pcVar21 << 4;
          }
          else {
            *param_3 = -0x10;
            pcVar17 = pcVar21 + -0xf;
            param_3 = (char *)((longlong)param_3 + 1);
            if ((char *)0xfe < pcVar17) {
              memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar17 / 0x1fe),0xff),
                     (ulonglong)pcVar17 / 0xff);
              param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar17 / 0xff);
              pcVar17 = (char *)((ulonglong)pcVar17 % 0xff);
            }
            *param_3 = (char)pcVar17;
          }
          memcpy((char *)((longlong)param_3 + 1),plVar32,(size_t)pcVar21);
          return (int)param_3 + 1 + ((int)pcVar21 - local_res18);
        }
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)((longlong)plVar32 + -2) * -0x30e4432345000000) >> 0x34) *
                4) = ((int)plVar32 + -2) - iVar13;
        uVar33 = (int)plVar32 - iVar13;
        uVar5 = (ulonglong)(*plVar32 * -0x30e4432345000000) >> 0x34;
        uVar14 = *(uint *)((longlong)param_1 + uVar5 * 4);
        *(uint *)((longlong)param_1 + uVar5 * 4) = uVar33;
        piVar30 = (int *)(lVar9 + (ulonglong)uVar14);
        if ((uVar14 + 0xffff < uVar33) || (*piVar30 != (int)*plVar32)) goto LAB_1414bf5a3;
        psVar7 = (short *)((longlong)param_3 + 1);
        *param_3 = '\0';
        psVar20 = (short *)param_3;
      } while( true );
    }
    if ((iVar25 != 0) &&
       (((iVar25 != 3 || (0xfffe < (uint)(*(int *)((longlong)param_1 + 0x4010) + param_4))) ||
        (0xfff < param_4)))) {
      memset(param_1,0,0x4000);
      *(undefined8 *)((longlong)param_1 + 0x4010) = 0;
    }
    *(undefined8 *)((longlong)param_1 + 0x4008) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4000) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4018) = 0;
    uVar14 = *(uint *)((longlong)param_1 + 0x4010);
    if (uVar14 == 0) {
      if (0x7e000000 < (uint)param_4) {
        return 0;
      }
      if (param_4 != 0) {
        *(int *)((longlong)param_1 + 0x4018) = param_4;
        *(int *)((longlong)param_1 + 0x4010) = param_4;
        *(undefined4 *)((longlong)param_1 + 0x4014) = 3;
        piVar30 = (int *)param_2;
        if (param_4 < 0xd) {
LAB_1414bf12b:
          pcVar21 = param_2 + ((longlong)param_4 - (longlong)piVar30);
          if (pcVar21 < (char *)0xf) {
            *param_3 = (char)pcVar21 << 4;
          }
          else {
            *param_3 = -0x10;
            pcVar17 = pcVar21 + -0xf;
            param_3 = (char *)((longlong)param_3 + 1);
            if ((char *)0xfe < pcVar17) {
              memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar17 / 0x1fe),0xff),
                     (ulonglong)pcVar17 / 0xff);
              param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar17 / 0xff);
              pcVar17 = (char *)((ulonglong)pcVar17 % 0xff);
            }
            *param_3 = (char)pcVar17;
          }
          memcpy((char *)((longlong)param_3 + 1),piVar30,(size_t)pcVar21);
          return ((int)pcVar21 - local_res18) + (int)param_3 + 1;
        }
        piVar10 = (int *)(param_2 + 1);
        *(undefined2 *)
         ((longlong)param_1 + (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) = 0;
        iVar13 = *piVar10;
        piVar16 = (int *)param_2;
LAB_1414bee26:
        iVar26 = 1;
        iVar25 = iVar27 << 6;
        do {
          piVar19 = piVar10;
          puVar3 = (ushort *)
                   ((longlong)param_1 + (ulonglong)((uint)(iVar13 * -0x61c8864f) >> 0x13) * 2);
          lVar15 = (longlong)iVar26;
          iVar26 = iVar25 >> 6;
          piVar10 = (int *)(lVar15 + (longlong)piVar19);
          iVar25 = iVar25 + 1;
          piVar30 = piVar16;
          if (param_2 + (longlong)param_4 + -0xb < piVar10) goto LAB_1414bf12b;
          iVar13 = *piVar10;
          uVar4 = *puVar3;
          *puVar3 = (short)piVar19 - sVar23;
          piVar18 = (int *)(param_2 + uVar4);
        } while (*piVar18 != *piVar19);
        piVar30 = piVar19;
        if (piVar16 < piVar19 && param_2 < piVar18) {
          do {
            piVar10 = (int *)((longlong)piVar18 - 1);
            piVar2 = (int *)((longlong)piVar19 - 1);
            piVar30 = piVar19;
            if (*(char *)((longlong)piVar19 - 1) != *(char *)((longlong)piVar18 - 1)) break;
            piVar18 = piVar10;
            piVar30 = piVar2;
            piVar19 = piVar2;
          } while (piVar16 < piVar2 && param_2 < piVar10);
        }
        uVar14 = (int)piVar30 - (int)piVar16;
        psVar20 = (short *)((longlong)param_3 + 1);
        if (uVar14 < 0xf) {
          *param_3 = (char)uVar14 << 4;
        }
        else {
          uVar33 = uVar14 - 0xf;
          *param_3 = -0x10;
          if (0xfe < (int)uVar33) {
            uVar5 = (ulonglong)uVar33 / 0xff;
            memset(psVar20,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
            psVar20 = (short *)((longlong)psVar20 + uVar5);
            uVar33 = uVar33 + (int)uVar5 * -0xff;
          }
          *(char *)psVar20 = (char)uVar33;
          psVar20 = (short *)((longlong)psVar20 + 1);
        }
        psVar7 = (short *)((ulonglong)uVar14 + (longlong)psVar20);
        lVar15 = (longlong)piVar16 - (longlong)psVar20;
        do {
          *(undefined8 *)psVar20 = *(undefined8 *)(lVar15 + (longlong)psVar20);
          psVar20 = psVar20 + 4;
        } while (psVar20 < psVar7);
        puVar1 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
        psVar20 = (short *)param_3;
        do {
          puVar8 = (ulonglong *)(piVar18 + 1);
          *psVar7 = (short)piVar30 - (short)piVar18;
          puVar11 = (ulonglong *)(piVar30 + 1);
          param_3 = (char *)(psVar7 + 1);
          iVar13 = (int)puVar11;
          if (puVar11 < puVar1) {
            uVar5 = *puVar8 ^ *puVar11;
            if (uVar5 == 0) {
              puVar11 = (ulonglong *)(piVar30 + 3);
              puVar8 = (ulonglong *)(piVar18 + 3);
              if (puVar11 < puVar1) {
LAB_1414befc0:
                uVar5 = *puVar8 ^ *puVar11;
                if (uVar5 == 0) goto code_r0x0001414befcc;
                uVar14 = 0;
                for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                  uVar14 = uVar14 + 1;
                }
                uVar14 = ((uVar14 >> 3) - iVar13) + (int)puVar11;
                goto LAB_1414bf01d;
              }
              goto LAB_1414befd9;
            }
            uVar14 = 0;
            for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
              uVar14 = uVar14 + 1;
            }
            uVar14 = uVar14 >> 3;
          }
          else {
LAB_1414befd9:
            if ((puVar11 < param_2 + (longlong)param_4 + -8) && ((int)*puVar8 == (int)*puVar11)) {
              puVar11 = (ulonglong *)((longlong)puVar11 + 4);
              puVar8 = (ulonglong *)((longlong)puVar8 + 4);
            }
            if ((puVar11 < param_2 + (longlong)param_4 + -6) && ((short)*puVar8 == (short)*puVar11))
            {
              puVar11 = (ulonglong *)((longlong)puVar11 + 2);
              puVar8 = (ulonglong *)((longlong)puVar8 + 2);
            }
            if ((puVar11 < param_2 + (longlong)param_4 + -5) && ((char)*puVar8 == (char)*puVar11)) {
              puVar11 = (ulonglong *)((longlong)puVar11 + 1);
            }
            uVar14 = (int)puVar11 - iVar13;
          }
LAB_1414bf01d:
          piVar30 = (int *)((longlong)piVar30 + (ulonglong)uVar14 + 4);
          if (uVar14 < 0xf) {
            *(char *)psVar20 = (char)*psVar20 + (char)uVar14;
          }
          else {
            uVar14 = uVar14 - 0xf;
            *(char *)psVar20 = (char)*psVar20 + '\x0f';
            *(short *)((longlong)param_3 + 0) = -1;
            *(short *)((longlong)param_3 + 2) = -1;
            if (0x3fb < uVar14) {
              uVar5 = (ulonglong)uVar14 / 0x3fc;
              do {
                param_3 = (char *)((longlong)param_3 + 4);
                uVar14 = uVar14 - 0x3fc;
                *(short *)((longlong)param_3 + 0) = -1;
                *(short *)((longlong)param_3 + 2) = -1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            pcVar21 = (char *)((longlong)param_3 + (ulonglong)uVar14 / 0xff);
            *pcVar21 = (char)uVar14 + (char)((ulonglong)uVar14 / 0xff);
            param_3 = pcVar21 + 1;
          }
          if (param_2 + (longlong)param_4 + -0xb <= piVar30) goto LAB_1414bf12b;
          *(short *)((longlong)param_1 +
                    (ulonglong)((uint)(*(int *)((longlong)piVar30 + -2) * -0x61c8864f) >> 0x13) * 2)
               = ((short)piVar30 + -2) - sVar23;
          uVar5 = (ulonglong)((uint)(*piVar30 * -0x61c8864f) >> 0x13);
          uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
          *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar30 - sVar23;
          piVar18 = (int *)(param_2 + uVar4);
          if (*piVar18 != *piVar30) goto LAB_1414bf113;
          psVar7 = (short *)((longlong)param_3 + 1);
          *param_3 = '\0';
          psVar20 = (short *)param_3;
        } while( true );
      }
    }
    else {
      if (0x7e000000 < (uint)param_4) {
        return 0;
      }
      if (param_4 != 0) {
        *(int *)((longlong)param_1 + 0x4018) = param_4;
        lVar15 = (longlong)param_2 - (ulonglong)uVar14;
        *(uint *)((longlong)param_1 + 0x4010) = uVar14 + param_4;
        *(undefined4 *)((longlong)param_1 + 0x4014) = 3;
        piVar30 = (int *)param_2;
        if (param_4 < 0xd) {
LAB_1414bed08:
          pcVar21 = param_2 + ((longlong)param_4 - (longlong)piVar30);
          if (pcVar21 < (char *)0xf) {
            *param_3 = (char)pcVar21 << 4;
          }
          else {
            *param_3 = -0x10;
            pcVar17 = pcVar21 + -0xf;
            param_3 = (char *)((longlong)param_3 + 1);
            if ((char *)0xfe < pcVar17) {
              memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar17 / 0x1fe),0xff),
                     (ulonglong)pcVar17 / 0xff);
              param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar17 / 0xff);
              pcVar17 = (char *)((ulonglong)pcVar17 % 0xff);
            }
            *param_3 = (char)pcVar17;
          }
          memcpy((char *)((longlong)param_3 + 1),piVar30,(size_t)pcVar21);
          return ((int)pcVar21 - local_res18) + (int)param_3 + 1;
        }
        piVar10 = (int *)(param_2 + 1);
        sVar28 = (short)lVar15;
        *(short *)((longlong)param_1 +
                  (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) = sVar23 - sVar28;
        iVar13 = *piVar10;
LAB_1414bea00:
        uVar5 = (ulonglong)((uint)(iVar13 * -0x61c8864f) >> 0x13);
        iVar25 = 1;
        iVar13 = iVar27 << 6;
        do {
          piVar16 = piVar10;
          uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
          lVar9 = (longlong)iVar25;
          iVar25 = iVar13 >> 6;
          piVar10 = (int *)(lVar9 + (longlong)piVar16);
          iVar13 = iVar13 + 1;
          if (param_2 + (longlong)param_4 + -0xb < piVar10) goto LAB_1414bed08;
          iVar26 = *piVar10;
          piVar19 = (int *)(lVar15 + (ulonglong)uVar4);
          *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar16 - sVar28;
          uVar5 = (ulonglong)((uint)(iVar26 * -0x61c8864f) >> 0x13);
        } while ((uVar4 < uVar14) || (*piVar19 != *piVar16));
        if (piVar30 < piVar16 && param_2 < piVar19) {
          do {
            piVar10 = (int *)((longlong)piVar19 - 1);
            piVar18 = (int *)((longlong)piVar16 - 1);
            if (*(char *)((longlong)piVar16 - 1) != *(char *)((longlong)piVar19 - 1)) break;
            piVar19 = piVar10;
            piVar16 = piVar18;
          } while (param_2 < piVar10 && piVar30 < piVar18);
        }
        uVar33 = (int)piVar16 - (int)piVar30;
        psVar20 = (short *)((longlong)param_3 + 1);
        if (uVar33 < 0xf) {
          *param_3 = (char)uVar33 << 4;
        }
        else {
          uVar29 = uVar33 - 0xf;
          *param_3 = -0x10;
          if (0xfe < (int)uVar29) {
            uVar5 = (ulonglong)uVar29 / 0xff;
            memset(psVar20,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
            psVar20 = (short *)((longlong)psVar20 + uVar5);
            uVar29 = uVar29 + (int)uVar5 * -0xff;
          }
          *(char *)psVar20 = (char)uVar29;
          psVar20 = (short *)((longlong)psVar20 + 1);
        }
        psVar7 = (short *)((ulonglong)uVar33 + (longlong)psVar20);
        lVar9 = (longlong)piVar30 - (longlong)psVar20;
        do {
          *(undefined8 *)psVar20 = *(undefined8 *)((longlong)psVar20 + lVar9);
          psVar20 = psVar20 + 4;
        } while (psVar20 < psVar7);
        puVar1 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
        psVar20 = (short *)param_3;
        do {
          puVar8 = (ulonglong *)(piVar16 + 1);
          puVar11 = (ulonglong *)(piVar19 + 1);
          *psVar7 = (short)piVar16 - (short)piVar19;
          param_3 = (char *)(psVar7 + 1);
          iVar13 = (int)puVar8;
          if (puVar8 < puVar1) {
            uVar5 = *puVar8 ^ *puVar11;
            if (uVar5 == 0) {
              puVar8 = (ulonglong *)(piVar16 + 3);
              puVar11 = (ulonglong *)(piVar19 + 3);
              if (puVar8 < puVar1) {
LAB_1414beb90:
                uVar5 = *puVar8 ^ *puVar11;
                if (uVar5 == 0) goto code_r0x0001414beb9c;
                uVar33 = 0;
                for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                  uVar33 = uVar33 + 1;
                }
                uVar33 = (int)puVar8 + ((uVar33 >> 3) - iVar13);
                goto LAB_1414bebeb;
              }
              goto LAB_1414beba9;
            }
            uVar33 = 0;
            for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
              uVar33 = uVar33 + 1;
            }
            uVar33 = uVar33 >> 3;
          }
          else {
LAB_1414beba9:
            if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar11 == (int)*puVar8)) {
              puVar8 = (ulonglong *)((longlong)puVar8 + 4);
              puVar11 = (ulonglong *)((longlong)puVar11 + 4);
            }
            if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar11 == (short)*puVar8))
            {
              puVar8 = (ulonglong *)((longlong)puVar8 + 2);
              puVar11 = (ulonglong *)((longlong)puVar11 + 2);
            }
            if ((puVar8 < param_2 + (longlong)param_4 + -5) && ((char)*puVar11 == (char)*puVar8)) {
              puVar8 = (ulonglong *)((longlong)puVar8 + 1);
            }
            uVar33 = (int)puVar8 - iVar13;
          }
LAB_1414bebeb:
          piVar16 = (int *)((longlong)piVar16 + (ulonglong)uVar33 + 4);
          if (uVar33 < 0xf) {
            *(char *)psVar20 = (char)*psVar20 + (char)uVar33;
          }
          else {
            uVar33 = uVar33 - 0xf;
            *(char *)psVar20 = (char)*psVar20 + '\x0f';
            *(short *)((longlong)param_3 + 0) = -1;
            *(short *)((longlong)param_3 + 2) = -1;
            if (0x3fb < uVar33) {
              uVar5 = (ulonglong)uVar33 / 0x3fc;
              do {
                param_3 = (char *)((longlong)param_3 + 4);
                uVar33 = uVar33 - 0x3fc;
                *(short *)((longlong)param_3 + 0) = -1;
                *(short *)((longlong)param_3 + 2) = -1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            pcVar21 = (char *)((longlong)param_3 + (ulonglong)uVar33 / 0xff);
            *pcVar21 = (char)((ulonglong)uVar33 / 0xff) + (char)uVar33;
            param_3 = pcVar21 + 1;
          }
          piVar30 = piVar16;
          if (param_2 + (longlong)param_4 + -0xb <= piVar16) goto LAB_1414bed08;
          *(short *)((longlong)param_1 +
                    (ulonglong)((uint)(*(int *)((longlong)piVar16 + -2) * -0x61c8864f) >> 0x13) * 2)
               = ((short)piVar16 + -2) - sVar28;
          uVar5 = (ulonglong)((uint)(*piVar16 * -0x61c8864f) >> 0x13);
          uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
          *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar16 - sVar28;
          piVar19 = (int *)(lVar15 + (ulonglong)uVar4);
          if ((uVar4 < uVar14) || (*piVar19 != *piVar16)) goto LAB_1414becea;
          psVar7 = (short *)((longlong)param_3 + 1);
          *param_3 = '\0';
          psVar20 = (short *)param_3;
        } while( true );
      }
    }
  }
  *param_3 = '\0';
  return 1;
code_r0x0001414bf44c:
  puVar8 = puVar8 + 1;
  puVar11 = puVar11 + 1;
  if (puVar1 <= puVar8) goto LAB_1414bf459;
  goto LAB_1414bf440;
LAB_1414bf5a3:
  lVar15 = *(longlong *)((longlong)plVar32 + 1);
  plVar24 = (longlong *)((longlong)plVar32 + 1);
  goto LAB_1414bf2a0;
code_r0x0001414befcc:
  puVar11 = puVar11 + 1;
  puVar8 = puVar8 + 1;
  if (puVar1 <= puVar11) goto LAB_1414befd9;
  goto LAB_1414befc0;
LAB_1414bf113:
  iVar13 = *(int *)((longlong)piVar30 + 1);
  piVar10 = (int *)((longlong)piVar30 + 1);
  piVar16 = piVar30;
  goto LAB_1414bee26;
code_r0x0001414beb9c:
  puVar8 = puVar8 + 1;
  puVar11 = puVar11 + 1;
  if (puVar1 <= puVar8) goto LAB_1414beba9;
  goto LAB_1414beb90;
LAB_1414becea:
  iVar13 = *(int *)((longlong)piVar16 + 1);
  piVar10 = (int *)((longlong)piVar16 + 1);
  goto LAB_1414bea00;
code_r0x0001414c029c:
  puVar8 = puVar8 + 1;
  puVar11 = puVar11 + 1;
  if (puVar1 <= puVar8) goto LAB_1414c02a9;
  goto LAB_1414c0290;
LAB_1414c0412:
  lVar15 = *(longlong *)((longlong)plVar32 + 1);
  plVar24 = (longlong *)((longlong)plVar32 + 1);
  goto LAB_1414c00c0;
code_r0x0001414bfe1c:
  puVar8 = puVar8 + 1;
  puVar11 = puVar11 + 1;
  if (puVar1 <= puVar8) goto LAB_1414bfe29;
  goto LAB_1414bfe10;
LAB_1414bff8a:
  iVar13 = *(int *)((longlong)piVar30 + 1);
  piVar10 = (int *)((longlong)piVar30 + 1);
  goto LAB_1414bfc50;
code_r0x0001414bf95c:
  puVar8 = puVar8 + 1;
  puVar11 = puVar11 + 1;
  if (puVar1 <= puVar8) goto LAB_1414bf969;
  goto LAB_1414bf950;
LAB_1414bfad9:
  iVar13 = *(int *)((longlong)piVar30 + 1);
  piVar10 = (int *)((longlong)piVar30 + 1);
  goto LAB_1414bf780;
LAB_1414c0449:
  pcVar17 = param_2 + ((longlong)param_4 - (longlong)plVar32);
  if (pcVar21 < (char *)((longlong)param_3 +
                        (longlong)(pcVar17 + (ulonglong)(pcVar17 + 0xf0) / 0xff + 1))) {
LAB_1414c0437:
    iVar27 = 0;
  }
  else {
    if (pcVar17 < (char *)0xf) {
      *param_3 = (char)pcVar17 << 4;
    }
    else {
      *param_3 = -0x10;
      pcVar21 = pcVar17 + -0xf;
      param_3 = (char *)((longlong)param_3 + 1);
      if ((char *)0xfe < pcVar21) {
        memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar21 / 0x1fe),0xff),
               (ulonglong)pcVar21 / 0xff);
        param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar21 / 0xff);
        pcVar21 = (char *)((ulonglong)pcVar21 % 0xff);
      }
      *param_3 = (char)pcVar21;
    }
    memcpy((char *)((longlong)param_3 + 1),plVar32,(size_t)pcVar17);
    iVar27 = (int)pcVar17 + (((int)param_3 + 1) - local_res18);
  }
  return iVar27;
}

// LZ4_compress_forceExtDict @ 1414c0520

int __cdecl LZ4_compress_forceExtDict(LZ4_stream_u *param_1,char *param_2,char *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  int iVar19;
  ulonglong *puVar20;
  int iVar21;
  char *pcVar22;
  ulonglong *puVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  int *piVar27;
  longlong lVar28;
  int local_res18;
  
  uVar17 = (ulonglong)param_4;
  LZ4_renormDictT(&param_1->internal_donotuse,param_4);
  puVar2 = &(param_1->internal_donotuse).dictSize;
  uVar25 = *puVar2;
  uVar5 = (ulonglong)uVar25;
  uVar24 = (uint)uVar17;
  local_res18 = (int)param_3;
  if (uVar25 < 0x10000) {
    uVar11 = (param_1->internal_donotuse).currentOffset;
    if (uVar11 <= uVar25) goto LAB_1414c0bf4;
    if (uVar24 < 0x7e000001) {
      if (uVar24 != 0) {
        piVar3 = (int *)(param_1->internal_donotuse).dictionary;
        lVar26 = (longlong)param_2 - (ulonglong)uVar11;
        (param_1->internal_donotuse).tableType = 2;
        lVar4 = (longlong)piVar3 + uVar5;
        if (piVar3 == (int *)0x0) {
          lVar4 = 0;
        }
        *puVar2 = uVar25 + uVar24;
        puVar23 = (ulonglong *)(param_2 + (uVar17 - 5));
        lVar12 = ((ulonglong)uVar25 - (ulonglong)uVar11) + (longlong)piVar3;
        if (piVar3 == (int *)0x0) {
          lVar12 = 0;
        }
        (param_1->internal_donotuse).currentOffset = uVar11 + uVar24;
        puVar10 = (ulonglong *)param_2;
        if (0xc < (int)uVar24) {
          puVar18 = (ulonglong *)(param_2 + 1);
          iVar15 = (int)lVar26;
          *(int *)((longlong)param_1 +
                  ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
               (int)param_2 - iVar15;
          uVar5 = *puVar18;
          puVar8 = (ulonglong *)param_2;
LAB_1414c0656:
          iVar19 = 1;
          iVar21 = 0x40;
          do {
            puVar20 = puVar18;
            uVar6 = uVar5 * -0x30e4432345000000 >> 0x34;
            uVar24 = *(uint *)((longlong)param_1 + uVar6 * 4);
            puVar18 = (ulonglong *)((longlong)puVar20 + (longlong)iVar19);
            iVar19 = iVar21 >> 6;
            uVar14 = (int)puVar20 - iVar15;
            iVar21 = iVar21 + 1;
            puVar10 = puVar8;
            if (param_2 + (uVar17 - 0xb) < puVar18) goto LAB_1414c0b65;
            piVar27 = (int *)param_2;
            lVar28 = lVar26;
            if (uVar24 < uVar11) {
              piVar27 = piVar3;
              lVar28 = lVar12;
            }
            piVar13 = (int *)(lVar28 + (ulonglong)uVar24);
            uVar5 = *puVar18;
            *(uint *)((longlong)param_1 + uVar6 * 4) = uVar14;
          } while (((uVar24 < uVar11 - uVar25) || (uVar24 + 0xffff < uVar14)) ||
                  (*piVar13 != (int)*puVar20));
          iVar19 = uVar14 - uVar24;
          puVar10 = puVar20;
          if (puVar8 < puVar20 && piVar27 < piVar13) {
            do {
              piVar1 = (int *)((longlong)piVar13 - 1);
              puVar18 = (ulonglong *)((longlong)puVar20 - 1);
              puVar10 = puVar20;
              if (*(char *)((longlong)puVar20 - 1) != *(char *)((longlong)piVar13 - 1)) break;
              puVar20 = puVar18;
              puVar10 = puVar18;
              piVar13 = piVar1;
            } while (piVar27 < piVar1 && puVar8 < puVar18);
          }
          uVar24 = (int)puVar10 - (int)puVar8;
          pcVar16 = param_3 + 1;
          if (uVar24 < 0xf) {
            *param_3 = (char)uVar24 << 4;
          }
          else {
            uVar14 = uVar24 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar14) {
              uVar5 = (ulonglong)uVar14 / 0xff;
              memset(pcVar16,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
              pcVar16 = pcVar16 + uVar5;
              uVar14 = uVar14 + (int)uVar5 * -0xff;
            }
            *pcVar16 = (char)uVar14;
            pcVar16 = pcVar16 + 1;
          }
          pcVar7 = pcVar16 + uVar24;
          lVar28 = (longlong)puVar8 - (longlong)pcVar16;
          do {
            *(undefined8 *)pcVar16 = *(undefined8 *)(pcVar16 + lVar28);
            pcVar16 = pcVar16 + 8;
            pcVar22 = param_3;
          } while (pcVar16 < pcVar7);
          do {
            *(short *)pcVar7 = (short)iVar19;
            puVar18 = (ulonglong *)((longlong)puVar10 + 4);
            param_3 = pcVar7 + 2;
            puVar8 = (ulonglong *)(piVar13 + 1);
            iVar19 = (int)puVar18;
            if (piVar27 == piVar3) {
              puVar20 = (ulonglong *)((lVar4 - (longlong)piVar13) + (longlong)puVar10);
              if (puVar23 < puVar20) {
                puVar20 = puVar23;
              }
              puVar9 = (ulonglong *)((longlong)puVar20 - 7);
              if (puVar18 < puVar9) {
                uVar5 = *puVar18 ^ *puVar8;
                if (uVar5 == 0) {
                  puVar18 = (ulonglong *)((longlong)puVar10 + 0xc);
                  puVar8 = (ulonglong *)(piVar13 + 3);
                  if (puVar18 < puVar9) {
LAB_1414c0840:
                    uVar5 = *puVar18 ^ *puVar8;
                    if (uVar5 == 0) goto code_r0x0001414c084c;
                    uVar24 = 0;
                    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                      uVar24 = uVar24 + 1;
                    }
                    uVar24 = ((uVar24 >> 3) - iVar19) + (int)puVar18;
                    goto LAB_1414c089e;
                  }
                  goto LAB_1414c0859;
                }
                uVar24 = 0;
                for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                  uVar24 = uVar24 + 1;
                }
                uVar24 = uVar24 >> 3;
              }
              else {
LAB_1414c0859:
                if ((puVar18 < (ulonglong *)((longlong)puVar20 - 3U)) &&
                   ((int)*puVar8 == (int)*puVar18)) {
                  puVar18 = (ulonglong *)((longlong)puVar18 + 4);
                  puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                }
                if ((puVar18 < (ulonglong *)((longlong)puVar20 - 1U)) &&
                   ((short)*puVar8 == (short)*puVar18)) {
                  puVar18 = (ulonglong *)((longlong)puVar18 + 2);
                  puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                }
                if ((puVar18 < puVar20) && ((char)*puVar8 == (char)*puVar18)) {
                  puVar18 = (ulonglong *)((longlong)puVar18 + 1);
                }
                uVar24 = (int)puVar18 - iVar19;
              }
LAB_1414c089e:
              puVar10 = (ulonglong *)((longlong)puVar10 + (ulonglong)uVar24 + 4);
              if (puVar10 == puVar20) {
                puVar8 = (ulonglong *)(param_2 + (uVar17 - 0xc));
                puVar18 = puVar20;
                puVar9 = (ulonglong *)param_2;
                if (puVar20 < puVar8) {
                  uVar5 = *(ulonglong *)param_2 ^ *puVar20;
                  if (uVar5 == 0) {
                    puVar18 = puVar20 + 1;
                    puVar9 = (ulonglong *)(param_2 + 8);
                    goto LAB_1414c08dd;
                  }
                  uVar14 = 0;
                  for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                    uVar14 = uVar14 + 1;
                  }
                  uVar14 = uVar14 >> 3;
                }
                else {
LAB_1414c08dd:
                  if (puVar18 < puVar8) {
LAB_1414c08e2:
                    uVar5 = *puVar18 ^ *puVar9;
                    if (uVar5 == 0) goto code_r0x0001414c08ee;
                    uVar14 = 0;
                    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                      uVar14 = uVar14 + 1;
                    }
                    uVar14 = (int)puVar18 + ((uVar14 >> 3) - (int)puVar20);
                    goto LAB_1414c093f;
                  }
LAB_1414c08fb:
                  if ((puVar18 < param_2 + (uVar17 - 8)) && ((int)*puVar9 == (int)*puVar18)) {
                    puVar18 = (ulonglong *)((longlong)puVar18 + 4);
                    puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                  }
                  if ((puVar18 < param_2 + (uVar17 - 6)) && ((short)*puVar9 == (short)*puVar18)) {
                    puVar18 = (ulonglong *)((longlong)puVar18 + 2);
                    puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                  }
                  if ((puVar18 < puVar23) && ((char)*puVar9 == (char)*puVar18)) {
                    puVar18 = (ulonglong *)((longlong)puVar18 + 1);
                  }
                  uVar14 = (int)puVar18 - (int)puVar20;
                }
LAB_1414c093f:
                uVar24 = uVar24 + uVar14;
                puVar10 = (ulonglong *)((longlong)puVar10 + (ulonglong)uVar14);
              }
            }
            else {
              puVar20 = (ulonglong *)(param_2 + (uVar17 - 0xc));
              if (puVar18 < puVar20) {
                uVar5 = *puVar8 ^ *puVar18;
                if (uVar5 == 0) {
                  puVar18 = (ulonglong *)((longlong)puVar10 + 0xc);
                  puVar8 = (ulonglong *)(piVar13 + 3);
                  if (puVar18 < puVar20) {
LAB_1414c0a18:
                    uVar5 = *puVar8 ^ *puVar18;
                    if (uVar5 == 0) goto code_r0x0001414c0a20;
                    uVar24 = 0;
                    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                      uVar24 = uVar24 + 1;
                    }
                    uVar24 = (int)puVar18 + ((uVar24 >> 3) - iVar19);
                    goto LAB_1414c0a71;
                  }
                  goto LAB_1414c0a2d;
                }
                uVar24 = 0;
                for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                  uVar24 = uVar24 + 1;
                }
                uVar24 = uVar24 >> 3;
              }
              else {
LAB_1414c0a2d:
                if ((puVar18 < param_2 + (uVar17 - 8)) && ((int)*puVar8 == (int)*puVar18)) {
                  puVar18 = (ulonglong *)((longlong)puVar18 + 4);
                  puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                }
                if ((puVar18 < param_2 + (uVar17 - 6)) && ((short)*puVar8 == (short)*puVar18)) {
                  puVar18 = (ulonglong *)((longlong)puVar18 + 2);
                  puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                }
                if ((puVar18 < puVar23) && ((char)*puVar8 == (char)*puVar18)) {
                  puVar18 = (ulonglong *)((longlong)puVar18 + 1);
                }
                uVar24 = (int)puVar18 - iVar19;
              }
LAB_1414c0a71:
              puVar10 = (ulonglong *)((longlong)puVar10 + (ulonglong)uVar24 + 4);
            }
            if (uVar24 < 0xf) {
              *pcVar22 = *pcVar22 + (char)uVar24;
            }
            else {
              uVar24 = uVar24 - 0xf;
              *pcVar22 = *pcVar22 + '\x0f';
              param_3[0] = -1;
              param_3[1] = -1;
              param_3[2] = -1;
              param_3[3] = -1;
              if (0x3fb < uVar24) {
                uVar5 = (ulonglong)uVar24 / 0x3fc;
                do {
                  param_3 = param_3 + 4;
                  uVar24 = uVar24 - 0x3fc;
                  param_3[0] = -1;
                  param_3[1] = -1;
                  param_3[2] = -1;
                  param_3[3] = -1;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
              param_3[(ulonglong)uVar24 / 0xff] = (char)((ulonglong)uVar24 / 0xff) + (char)uVar24;
              param_3 = param_3 + (ulonglong)uVar24 / 0xff + 1;
            }
            if (param_2 + (uVar17 - 0xb) <= puVar10) break;
            uVar14 = (int)puVar10 - iVar15;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)puVar10 + -2) * -0x30e4432345000000) >>
                    0x34) * 4) = ((int)puVar10 + -2) - iVar15;
            uVar5 = *puVar10 * -0x30e4432345000000 >> 0x34;
            uVar24 = *(uint *)((longlong)param_1 + uVar5 * 4);
            piVar27 = (int *)param_2;
            lVar28 = lVar26;
            if (uVar24 < uVar11) {
              piVar27 = piVar3;
              lVar28 = lVar12;
            }
            piVar13 = (int *)(lVar28 + (ulonglong)uVar24);
            *(uint *)((longlong)param_1 + uVar5 * 4) = uVar14;
            if (((uVar24 < uVar11 - uVar25) || (uVar24 + 0xffff < uVar14)) ||
               (*piVar13 != (int)*puVar10)) goto LAB_1414c0b3e;
            pcVar7 = param_3 + 1;
            iVar19 = uVar14 - uVar24;
            *param_3 = '\0';
            pcVar22 = param_3;
          } while( true );
        }
LAB_1414c0b65:
        pcVar16 = param_2 + (uVar17 - (longlong)puVar10);
        if (pcVar16 < (char *)0xf) {
          *param_3 = (char)pcVar16 << 4;
        }
        else {
          *param_3 = -0x10;
          pcVar7 = pcVar16 + -0xf;
          param_3 = param_3 + 1;
          if ((char *)0xfe < pcVar7) {
            memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar7 / 0x1fe),0xff),
                   (ulonglong)pcVar7 / 0xff);
            param_3 = param_3 + (ulonglong)pcVar7 / 0xff;
            pcVar7 = (char *)((ulonglong)pcVar7 % 0xff);
          }
          *param_3 = (char)pcVar7;
        }
        memcpy(param_3 + 1,puVar10,(size_t)pcVar16);
        iVar15 = (int)param_3 + 1 + ((int)pcVar16 - local_res18);
        goto LAB_1414c126d;
      }
      goto LAB_1414c0c09;
    }
  }
  else {
LAB_1414c0bf4:
    if (uVar24 < 0x7e000001) {
      if (uVar24 != 0) {
        piVar3 = (int *)(param_1->internal_donotuse).dictionary;
        uVar24 = (param_1->internal_donotuse).currentOffset;
        lVar26 = (longlong)param_2 - (ulonglong)uVar24;
        lVar4 = (longlong)piVar3 + uVar5;
        if (piVar3 == (int *)0x0) {
          lVar4 = 0;
        }
        (param_1->internal_donotuse).tableType = 2;
        *puVar2 = uVar25 + param_4;
        lVar12 = (longlong)piVar3 + (uVar5 - uVar24);
        if (piVar3 == (int *)0x0) {
          lVar12 = 0;
        }
        (param_1->internal_donotuse).currentOffset = uVar24 + param_4;
        puVar23 = (ulonglong *)param_2;
        if (0xc < param_4) {
          iVar15 = (int)lVar26;
          *(int *)((longlong)param_1 +
                  ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
               (int)param_2 - iVar15;
LAB_1414c0cc7:
          uVar5 = *(ulonglong *)((longlong)puVar23 + 1);
          iVar19 = 1;
          iVar21 = 0x40;
          puVar10 = (ulonglong *)((longlong)puVar23 + 1);
          do {
            puVar18 = puVar10;
            uVar17 = uVar5 * -0x30e4432345000000 >> 0x34;
            uVar25 = *(uint *)((longlong)param_1 + uVar17 * 4);
            lVar28 = (longlong)iVar19;
            iVar19 = iVar21 >> 6;
            uVar11 = (int)puVar18 - iVar15;
            puVar10 = (ulonglong *)((longlong)puVar18 + lVar28);
            iVar21 = iVar21 + 1;
            if (param_2 + (longlong)param_4 + -0xb < puVar10) goto LAB_1414c11f5;
            piVar27 = (int *)param_2;
            lVar28 = lVar26;
            if (uVar25 < uVar24) {
              piVar27 = piVar3;
              lVar28 = lVar12;
            }
            piVar13 = (int *)(lVar28 + (ulonglong)uVar25);
            uVar5 = *puVar10;
            *(uint *)((longlong)param_1 + uVar17 * 4) = uVar11;
          } while ((uVar25 + 0xffff < uVar11) || (*piVar13 != (int)*puVar18));
          iVar19 = uVar11 - uVar25;
          if (piVar27 < piVar13 && puVar23 < puVar18) {
            do {
              piVar1 = (int *)((longlong)piVar13 - 1);
              puVar10 = (ulonglong *)((longlong)puVar18 - 1);
              if (*(char *)((longlong)puVar18 - 1) != *(char *)((longlong)piVar13 - 1)) break;
              piVar13 = piVar1;
              puVar18 = puVar10;
            } while (piVar27 < piVar1 && puVar23 < puVar10);
          }
          uVar25 = (int)puVar18 - (int)puVar23;
          pcVar16 = param_3 + 1;
          if (uVar25 < 0xf) {
            *param_3 = (char)uVar25 << 4;
          }
          else {
            uVar11 = uVar25 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar11) {
              uVar5 = (ulonglong)uVar11 / 0xff;
              memset(pcVar16,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
              pcVar16 = pcVar16 + uVar5;
              uVar11 = uVar11 + (int)uVar5 * -0xff;
            }
            *pcVar16 = (char)uVar11;
            pcVar16 = pcVar16 + 1;
          }
          pcVar7 = pcVar16;
          do {
            *(undefined8 *)pcVar7 =
                 *(undefined8 *)(pcVar7 + ((longlong)puVar23 - (longlong)pcVar16));
            pcVar7 = pcVar7 + 8;
          } while (pcVar7 < pcVar16 + uVar25);
          pcVar16 = pcVar16 + uVar25;
          pcVar7 = param_3;
          puVar23 = puVar18;
          do {
            *(short *)pcVar16 = (short)iVar19;
            puVar10 = (ulonglong *)(piVar13 + 1);
            param_3 = pcVar16 + 2;
            puVar18 = (ulonglong *)(param_2 + (longlong)param_4 + -5);
            if (piVar27 == piVar3) {
              puVar8 = (ulonglong *)((longlong)puVar23 + 4);
              puVar20 = (ulonglong *)((longlong)puVar23 + (lVar4 - (longlong)piVar13));
              if (puVar18 < puVar20) {
                puVar20 = puVar18;
              }
              puVar9 = (ulonglong *)((longlong)puVar20 - 7);
              iVar19 = (int)puVar8;
              if (puVar8 < puVar9) {
                uVar5 = *puVar8 ^ *puVar10;
                if (uVar5 == 0) {
                  puVar8 = (ulonglong *)((longlong)puVar23 + 0xc);
                  puVar10 = (ulonglong *)(piVar13 + 3);
                  if (puVar8 < puVar9) {
LAB_1414c0ed0:
                    uVar5 = *puVar8 ^ *puVar10;
                    if (uVar5 == 0) goto code_r0x0001414c0edc;
                    uVar25 = 0;
                    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                      uVar25 = uVar25 + 1;
                    }
                    uVar25 = ((uVar25 >> 3) - iVar19) + (int)puVar8;
                    goto LAB_1414c0f2e;
                  }
                  goto LAB_1414c0ee9;
                }
                uVar25 = 0;
                for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                  uVar25 = uVar25 + 1;
                }
                uVar25 = uVar25 >> 3;
              }
              else {
LAB_1414c0ee9:
                if ((puVar8 < (ulonglong *)((longlong)puVar20 - 3U)) &&
                   ((int)*puVar10 == (int)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                  puVar10 = (ulonglong *)((longlong)puVar10 + 4);
                }
                if ((puVar8 < (ulonglong *)((longlong)puVar20 - 1U)) &&
                   ((short)*puVar10 == (short)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                  puVar10 = (ulonglong *)((longlong)puVar10 + 2);
                }
                if ((puVar8 < puVar20) && ((char)*puVar10 == (char)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 1);
                }
                uVar25 = (int)puVar8 - iVar19;
              }
LAB_1414c0f2e:
              puVar23 = (ulonglong *)((longlong)puVar23 + (ulonglong)uVar25 + 4);
              if (puVar23 == puVar20) {
                puVar10 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
                puVar8 = puVar20;
                puVar9 = (ulonglong *)param_2;
                if (puVar20 < puVar10) {
                  uVar5 = *puVar20 ^ *(ulonglong *)param_2;
                  if (uVar5 != 0) {
                    uVar11 = 0;
                    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                      uVar11 = uVar11 + 1;
                    }
                    uVar25 = uVar25 + (uVar11 >> 3);
                    uVar5 = (ulonglong)(uVar11 >> 3);
                    goto LAB_1414c10ba;
                  }
                  puVar8 = puVar20 + 1;
                  puVar9 = (ulonglong *)(param_2 + 8);
                }
                if (puVar8 < puVar10) {
LAB_1414c0f71:
                  uVar5 = *puVar8 ^ *puVar9;
                  if (uVar5 == 0) goto code_r0x0001414c0f7d;
                  uVar11 = 0;
                  for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                    uVar11 = uVar11 + 1;
                  }
                  uVar11 = (int)puVar8 + ((uVar11 >> 3) - (int)puVar20);
                  uVar25 = uVar25 + uVar11;
                  uVar5 = (ulonglong)uVar11;
                  goto LAB_1414c10ba;
                }
LAB_1414c0f8a:
                if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar9 == (int)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                }
                if ((puVar8 < param_2 + (longlong)param_4 + -6) &&
                   ((short)*puVar9 == (short)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                }
                if ((puVar8 < puVar18) && ((char)*puVar9 == (char)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 1);
                }
                uVar11 = (int)puVar8 - (int)puVar20;
                uVar25 = uVar25 + uVar11;
                uVar5 = (ulonglong)uVar11;
                goto LAB_1414c10ba;
              }
            }
            else {
              puVar20 = (ulonglong *)((longlong)puVar23 + 4);
              puVar8 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
              iVar19 = (int)puVar20;
              if (puVar20 < puVar8) {
                uVar5 = *puVar20 ^ *puVar10;
                if (uVar5 == 0) {
                  puVar20 = (ulonglong *)((longlong)puVar23 + 0xc);
                  puVar10 = (ulonglong *)(piVar13 + 3);
                  if (puVar20 < puVar8) {
LAB_1414c1050:
                    uVar5 = *puVar20 ^ *puVar10;
                    if (uVar5 == 0) goto code_r0x0001414c105c;
                    uVar25 = 0;
                    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                      uVar25 = uVar25 + 1;
                    }
                    uVar5 = (ulonglong)((int)puVar20 + ((uVar25 >> 3) - iVar19));
                    goto LAB_1414c10ab;
                  }
                  goto LAB_1414c1069;
                }
                uVar25 = 0;
                for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                  uVar25 = uVar25 + 1;
                }
                uVar5 = (ulonglong)(uVar25 >> 3);
              }
              else {
LAB_1414c1069:
                if ((puVar20 < param_2 + (longlong)param_4 + -8) && ((int)*puVar10 == (int)*puVar20)
                   ) {
                  puVar20 = (ulonglong *)((longlong)puVar20 + 4);
                  puVar10 = (ulonglong *)((longlong)puVar10 + 4);
                }
                if ((puVar20 < param_2 + (longlong)param_4 + -6) &&
                   ((short)*puVar10 == (short)*puVar20)) {
                  puVar20 = (ulonglong *)((longlong)puVar20 + 2);
                  puVar10 = (ulonglong *)((longlong)puVar10 + 2);
                }
                if ((puVar20 < puVar18) && ((char)*puVar10 == (char)*puVar20)) {
                  puVar20 = (ulonglong *)((longlong)puVar20 + 1);
                }
                uVar5 = (ulonglong)(uint)((int)puVar20 - iVar19);
              }
LAB_1414c10ab:
              uVar25 = (uint)uVar5;
              puVar23 = (ulonglong *)((longlong)puVar23 + 4);
LAB_1414c10ba:
              puVar23 = (ulonglong *)((longlong)puVar23 + uVar5);
            }
            if (uVar25 < 0xf) {
              *pcVar7 = *pcVar7 + (char)uVar25;
            }
            else {
              uVar25 = uVar25 - 0xf;
              *pcVar7 = *pcVar7 + '\x0f';
              param_3[0] = -1;
              param_3[1] = -1;
              param_3[2] = -1;
              param_3[3] = -1;
              if (0x3fb < uVar25) {
                uVar5 = (ulonglong)uVar25 / 0x3fc;
                do {
                  param_3 = param_3 + 4;
                  uVar25 = uVar25 - 0x3fc;
                  param_3[0] = -1;
                  param_3[1] = -1;
                  param_3[2] = -1;
                  param_3[3] = -1;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
              param_3[(ulonglong)uVar25 / 0xff] = (char)uVar25 + (char)((ulonglong)uVar25 / 0xff);
              param_3 = param_3 + (ulonglong)uVar25 / 0xff + 1;
            }
            if (param_2 + (longlong)param_4 + -0xb <= puVar23) break;
            uVar11 = (int)puVar23 - iVar15;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)puVar23 + -2) * -0x30e4432345000000) >>
                    0x34) * 4) = ((int)puVar23 + -2) - iVar15;
            uVar5 = *puVar23 * -0x30e4432345000000 >> 0x34;
            uVar25 = *(uint *)((longlong)param_1 + uVar5 * 4);
            piVar27 = (int *)param_2;
            lVar28 = lVar26;
            if (uVar25 < uVar24) {
              piVar27 = piVar3;
              lVar28 = lVar12;
            }
            piVar13 = (int *)(lVar28 + (ulonglong)uVar25);
            *(uint *)((longlong)param_1 + uVar5 * 4) = uVar11;
            if ((uVar25 + 0xffff < uVar11) || (*piVar13 != (int)*puVar23)) goto LAB_1414c0cc7;
            pcVar16 = param_3 + 1;
            iVar19 = uVar11 - uVar25;
            *param_3 = '\0';
            pcVar7 = param_3;
          } while( true );
        }
LAB_1414c11f5:
        pcVar16 = param_2 + ((longlong)param_4 - (longlong)puVar23);
        if (pcVar16 < (char *)0xf) {
          *param_3 = (char)pcVar16 << 4;
        }
        else {
          *param_3 = -0x10;
          pcVar7 = pcVar16 + -0xf;
          param_3 = param_3 + 1;
          if ((char *)0xfe < pcVar7) {
            memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar7 / 0x1fe),0xff),
                   (ulonglong)pcVar7 / 0xff);
            param_3 = param_3 + (ulonglong)pcVar7 / 0xff;
            pcVar7 = (char *)((ulonglong)pcVar7 % 0xff);
          }
          *param_3 = (char)pcVar7;
        }
        memcpy(param_3 + 1,puVar23,(size_t)pcVar16);
        iVar15 = (((int)param_3 + 1) - local_res18) + (int)pcVar16;
LAB_1414c126d:
        uVar17 = (ulonglong)(uint)param_4;
        goto LAB_1414c1284;
      }
LAB_1414c0c09:
      *param_3 = '\0';
      iVar15 = 1;
      goto LAB_1414c1284;
    }
  }
  iVar15 = 0;
LAB_1414c1284:
  (param_1->internal_donotuse).dictionary = (uchar *)param_2;
  (param_1->internal_donotuse).dictSize = (uint)uVar17;
  return iVar15;
code_r0x0001414c105c:
  puVar20 = puVar20 + 1;
  puVar10 = puVar10 + 1;
  if (puVar8 <= puVar20) goto LAB_1414c1069;
  goto LAB_1414c1050;
code_r0x0001414c0edc:
  puVar8 = puVar8 + 1;
  puVar10 = puVar10 + 1;
  if (puVar9 <= puVar8) goto LAB_1414c0ee9;
  goto LAB_1414c0ed0;
code_r0x0001414c0f7d:
  puVar8 = puVar8 + 1;
  puVar9 = puVar9 + 1;
  if (puVar10 <= puVar8) goto LAB_1414c0f8a;
  goto LAB_1414c0f71;
code_r0x0001414c0a20:
  puVar18 = puVar18 + 1;
  puVar8 = puVar8 + 1;
  if (puVar20 <= puVar18) goto LAB_1414c0a2d;
  goto LAB_1414c0a18;
code_r0x0001414c084c:
  puVar18 = puVar18 + 1;
  puVar8 = puVar8 + 1;
  if (puVar9 <= puVar18) goto LAB_1414c0859;
  goto LAB_1414c0840;
code_r0x0001414c08ee:
  puVar18 = puVar18 + 1;
  puVar9 = puVar9 + 1;
  if (puVar8 <= puVar18) goto LAB_1414c08fb;
  goto LAB_1414c08e2;
LAB_1414c0b3e:
  uVar5 = *(ulonglong *)((longlong)puVar10 + 1);
  puVar18 = (ulonglong *)((longlong)puVar10 + 1);
  puVar8 = puVar10;
  goto LAB_1414c0656;
}

// LZ4_createStream @ 1414c12b0

LZ4_stream_u * __cdecl LZ4_createStream(void)

{
  LZ4_stream_u *_Dst;
  
  _Dst = malloc(0x4020);
  if (_Dst == (LZ4_stream_u *)0x0) {
    return (LZ4_stream_u *)0x0;
  }
  if (((ulonglong)_Dst & 7) == 0) {
    memset(_Dst,0,0x4020);
  }
  return _Dst;
}

// LZ4_createStreamDecode @ 1414c1300

LZ4_streamDecode_u * __cdecl LZ4_createStreamDecode(void)

{
  LZ4_streamDecode_u *pLVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001414c130a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pLVar1 = calloc(1,0x20);
  return pLVar1;
}

// LZ4_decoderRingBufferSize @ 1414c1320

int __cdecl LZ4_decoderRingBufferSize(int param_1)

{
  int iVar1;
  
  if (0x7e000000 < (uint)param_1) {
    return 0;
  }
  iVar1 = 0x10;
  if (0xf < param_1) {
    iVar1 = param_1;
  }
  return iVar1 + 0x1000e;
}

// LZ4_decompress_safe @ 1414c1350

int __cdecl LZ4_decompress_safe(char *param_1,char *param_2,int param_3,int param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort *_Src;
  ushort *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar13;
  uint uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulonglong uVar18;
  byte *pbVar19;
  byte local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  
  if ((param_1 == (char *)0x0) || (param_4 < 0)) {
    return -1;
  }
  pbVar19 = (byte *)(param_1 + param_3);
  pbVar2 = (byte *)(param_2 + param_4);
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == '\0')) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    uVar11 = 0;
    puVar9 = (ushort *)param_1;
    _Src = (ushort *)param_1;
    pbVar17 = (byte *)param_2;
    if ((ulonglong)(longlong)param_4 < 0x40) goto LAB_1414c16c6;
LAB_1414c13f0:
    do {
      bVar3 = (byte)*puVar9;
      _Src = (ushort *)((longlong)puVar9 + 1);
      uVar10 = (ulonglong)(bVar3 >> 4);
      if (uVar10 == 0xf) {
        uVar10 = uVar11;
        if (pbVar19 + -0xf <= _Src) goto LAB_1414c1993;
        do {
          uVar6 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar10 = uVar10 + (byte)uVar6;
          if (pbVar19 + -0xf < _Src) goto LAB_1414c1993;
        } while ((byte)uVar6 == 0xff);
        if (uVar10 == 0xffffffffffffffff) goto LAB_1414c1993;
        uVar10 = uVar10 + 0xf;
        pbVar13 = pbVar17 + uVar10;
        if ((pbVar13 < pbVar17) || (puVar9 = (ushort *)(uVar10 + (longlong)_Src), puVar9 < _Src))
        goto LAB_1414c1993;
        uVar14 = (uint)bVar3;
        if (pbVar2 + -0x20 < pbVar13) goto LAB_1414c17c2;
        uVar14 = (uint)bVar3;
        if (pbVar19 + -0x20 < puVar9) goto LAB_1414c17c2;
        lVar12 = (longlong)pbVar17 - (longlong)_Src;
        do {
          uVar5 = *(undefined8 *)(_Src + 4);
          puVar1 = _Src + 0x10;
          *(undefined8 *)((longlong)_Src + lVar12) = *(undefined8 *)_Src;
          *(undefined8 *)((byte *)((longlong)_Src + lVar12) + 8) = uVar5;
          uVar5 = *(undefined8 *)(_Src + 0xc);
          pbVar17 = (byte *)((longlong)_Src + lVar12 + 0x10);
          *(undefined8 *)pbVar17 = *(undefined8 *)(_Src + 8);
          *(undefined8 *)(pbVar17 + 8) = uVar5;
          _Src = puVar1;
        } while ((byte *)(lVar12 + (longlong)puVar1) < pbVar13);
      }
      else {
        pbVar13 = pbVar17 + uVar10;
        uVar14 = (uint)bVar3;
        if (pbVar19 + -0x11 < _Src) goto LAB_1414c17c2;
        uVar5 = *(undefined8 *)((longlong)puVar9 + 9);
        puVar9 = (ushort *)((longlong)_Src + uVar10);
        *(undefined8 *)pbVar17 = *(undefined8 *)_Src;
        *(undefined8 *)(pbVar17 + 8) = uVar5;
      }
      uVar10 = (ulonglong)*puVar9;
      pbVar7 = pbVar13 + -uVar10;
      _Src = puVar9 + 1;
      if ((ulonglong)(bVar3 & 0xf) == 0xf) {
        uVar15 = uVar11;
        do {
          uVar6 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar15 = uVar15 + (byte)uVar6;
          if (pbVar19 + -4 < _Src) goto LAB_1414c1993;
        } while ((byte)uVar6 == 0xff);
        if (uVar15 == 0xffffffffffffffff) goto LAB_1414c1993;
        uVar15 = uVar15 + 0x13;
        if ((pbVar13 + uVar15 < pbVar13) || (pbVar7 < param_2)) goto LAB_1414c1993;
        if (pbVar2 + -0x40 <= pbVar13 + uVar15) goto LAB_1414c185f;
LAB_1414c152a:
        pbVar17 = pbVar13 + uVar15;
        puVar9 = _Src;
        if (0xf < uVar10) {
          lVar12 = (longlong)pbVar13 - (longlong)pbVar7;
          do {
            uVar5 = *(undefined8 *)(pbVar7 + 8);
            pbVar13 = pbVar7 + 0x20;
            *(undefined8 *)(pbVar7 + lVar12) = *(undefined8 *)pbVar7;
            *(undefined8 *)(pbVar7 + lVar12 + 8) = uVar5;
            uVar5 = *(undefined8 *)(pbVar7 + 0x18);
            *(undefined8 *)(pbVar7 + lVar12 + 0x10) = *(undefined8 *)(pbVar7 + 0x10);
            *(undefined8 *)(pbVar7 + lVar12 + 0x10 + 8) = uVar5;
            pbVar7 = pbVar13;
          } while (pbVar13 + lVar12 < pbVar17);
          goto LAB_1414c13f0;
        }
        if (uVar10 == 1) {
          bStack_64 = *pbVar7;
          bStack_63 = bStack_64;
          bStack_62 = bStack_64;
          bStack_61 = bStack_64;
        }
        else if (uVar10 == 2) {
          local_68 = (byte)*(undefined2 *)pbVar7;
          bStack_67 = (byte)((ushort)*(undefined2 *)pbVar7 >> 8);
          bStack_62 = local_68;
          bStack_61 = bStack_67;
          bStack_64 = local_68;
          bStack_63 = bStack_67;
        }
        else {
          if (uVar10 != 4) {
            if (uVar10 < 8) {
              pbVar13[0] = 0;
              pbVar13[1] = 0;
              pbVar13[2] = 0;
              pbVar13[3] = 0;
              *pbVar13 = *pbVar7;
              pbVar13[1] = pbVar7[1];
              pbVar13[2] = pbVar7[2];
              pbVar13[3] = pbVar7[3];
              uVar14 = inc32table[uVar10];
              *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar7 + uVar14);
              pbVar8 = pbVar7 + uVar14 + -(longlong)dec64table[uVar10];
            }
            else {
              pbVar8 = pbVar7 + 8;
              *(undefined8 *)pbVar13 = *(undefined8 *)pbVar7;
            }
            pbVar13 = pbVar13 + 8;
            lVar12 = (longlong)pbVar8 - (longlong)pbVar13;
            do {
              *(undefined8 *)pbVar13 = *(undefined8 *)(pbVar13 + lVar12);
              pbVar13 = pbVar13 + 8;
            } while (pbVar13 < pbVar17);
            goto LAB_1414c13f0;
          }
          uVar4 = *(undefined4 *)pbVar7;
          local_68 = (byte)uVar4;
          bStack_67 = (byte)((uint)uVar4 >> 8);
          bStack_66 = (byte)((uint)uVar4 >> 0x10);
          bStack_65 = (byte)((uint)uVar4 >> 0x18);
          bStack_64 = local_68;
          bStack_63 = bStack_67;
          bStack_62 = bStack_66;
          bStack_61 = bStack_65;
        }
        uVar5 = CONCAT17(bStack_61,
                         CONCAT16(bStack_62,
                                  CONCAT15(bStack_63,
                                           CONCAT14(bStack_64,
                                                    CONCAT13(bStack_61,
                                                             CONCAT12(bStack_62,
                                                                      CONCAT11(bStack_63,bStack_64))
                                                            )))));
        *(undefined8 *)pbVar13 = uVar5;
        pbVar13 = pbVar13 + 8;
        uVar10 = (ulonglong)(pbVar17 + (7 - (longlong)pbVar13)) >> 3;
        if (pbVar17 < pbVar13) {
          uVar10 = uVar11;
        }
        if (uVar10 != 0) {
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined8 *)pbVar13 = uVar5;
            pbVar13 = pbVar13 + 8;
          }
        }
        goto LAB_1414c13f0;
      }
      uVar15 = (ulonglong)(bVar3 & 0xf) + 4;
      if (pbVar2 + -0x40 <= pbVar13 + uVar15) goto LAB_1414c1856;
      if (pbVar7 < param_2) goto LAB_1414c1993;
      if (uVar10 < 8) goto LAB_1414c152a;
      *(undefined8 *)pbVar13 = *(undefined8 *)pbVar7;
      *(undefined8 *)(pbVar13 + 8) = *(undefined8 *)(pbVar7 + 8);
      *(undefined2 *)(pbVar13 + 0x10) = *(undefined2 *)(pbVar7 + 0x10);
      puVar9 = _Src;
      pbVar17 = pbVar13 + uVar15;
    } while( true );
  }
  return -1;
LAB_1414c1856:
  if (pbVar7 < param_2) {
LAB_1414c1993:
    return ((int)param_1 - (int)_Src) + -1;
  }
LAB_1414c185f:
  pbVar17 = pbVar13 + uVar15;
  if (uVar10 < 8) {
    pbVar13[0] = 0;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    *pbVar13 = *pbVar7;
    pbVar13[1] = pbVar7[1];
    pbVar13[2] = pbVar7[2];
    pbVar13[3] = pbVar7[3];
    uVar14 = inc32table[uVar10];
    *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar7 + uVar14);
    pbVar8 = pbVar7 + uVar14 + -(longlong)dec64table[uVar10];
  }
  else {
    pbVar8 = pbVar7 + 8;
    *(undefined8 *)pbVar13 = *(undefined8 *)pbVar7;
  }
  pbVar7 = pbVar13 + 8;
  if (pbVar2 + -0xc < pbVar17) {
    pbVar13 = pbVar2 + -7;
    if (pbVar2 + -5 < pbVar17) goto LAB_1414c1993;
    if (pbVar7 < pbVar13) {
      pbVar16 = pbVar7;
      do {
        *(undefined8 *)pbVar16 = *(undefined8 *)(pbVar16 + ((longlong)pbVar8 - (longlong)pbVar7));
        pbVar16 = pbVar16 + 8;
      } while (pbVar16 < pbVar13);
      pbVar8 = pbVar8 + ((longlong)pbVar13 - (longlong)pbVar7);
      pbVar7 = pbVar13;
    }
    for (; pbVar7 < pbVar17; pbVar7 = pbVar7 + 1) {
      bVar3 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      *pbVar7 = bVar3;
    }
  }
  else {
    *(undefined8 *)pbVar7 = *(undefined8 *)pbVar8;
    if (0x10 < uVar15) {
      pbVar7 = pbVar13 + 0x10;
      do {
        *(undefined8 *)pbVar7 =
             *(undefined8 *)(pbVar7 + (longlong)(pbVar8 + (8 - (longlong)(pbVar13 + 0x10))));
        pbVar7 = pbVar7 + 8;
      } while (pbVar7 < pbVar17);
    }
  }
LAB_1414c16c6:
  bVar3 = (byte)*_Src;
  _Src = (ushort *)((longlong)_Src + 1);
  while( true ) {
    uVar10 = (ulonglong)(bVar3 >> 4);
    if (uVar10 == 0xf) break;
    if (pbVar19 + -0x10 <= _Src || pbVar2 + -0x20 < pbVar17) goto LAB_1414c17be;
    uVar5 = *(undefined8 *)(_Src + 4);
    puVar9 = (ushort *)((longlong)_Src + uVar10);
    uVar15 = (ulonglong)(bVar3 & 0xf);
    *(undefined8 *)pbVar17 = *(undefined8 *)_Src;
    *(undefined8 *)(pbVar17 + 8) = uVar5;
    pbVar13 = pbVar17 + uVar10;
    uVar10 = (ulonglong)*puVar9;
    pbVar7 = pbVar13 + -uVar10;
    _Src = puVar9 + 1;
    if (uVar15 == 0xf) goto LAB_1414c181b;
    if ((uVar10 < 8) || (pbVar7 < param_2)) goto LAB_1414c1852;
    *(undefined8 *)pbVar13 = *(undefined8 *)pbVar7;
    *(undefined8 *)(pbVar13 + 8) = *(undefined8 *)(pbVar7 + 8);
    *(undefined2 *)(pbVar13 + 0x10) = *(undefined2 *)(pbVar7 + 0x10);
    pbVar17 = pbVar13 + uVar15 + 4;
    bVar3 = (byte)*_Src;
    _Src = (ushort *)((longlong)puVar9 + 3);
  }
  uVar10 = uVar11;
  if (pbVar19 + -0xf <= _Src) goto LAB_1414c1993;
  do {
    uVar6 = *_Src;
    _Src = (ushort *)((longlong)_Src + 1);
    uVar10 = uVar10 + (byte)uVar6;
    if (pbVar19 + -0xf < _Src) goto LAB_1414c1993;
  } while ((byte)uVar6 == 0xff);
  if (((uVar10 == 0xffffffffffffffff) || (uVar10 = uVar10 + 0xf, pbVar17 + uVar10 < pbVar17)) ||
     ((ushort *)(uVar10 + (longlong)_Src) < _Src)) goto LAB_1414c1993;
LAB_1414c17be:
  pbVar13 = pbVar17 + uVar10;
  uVar14 = (uint)bVar3;
LAB_1414c17c2:
  if ((pbVar2 + -0xc < pbVar13) ||
     (puVar9 = (ushort *)(uVar10 + (longlong)_Src), pbVar19 + -8 < puVar9)) {
    if (((byte *)(uVar10 + (longlong)_Src) == pbVar19) && (pbVar13 <= pbVar2)) {
      memmove(pbVar17,_Src,uVar10);
      return (int)pbVar17 + ((int)uVar10 - (int)param_2);
    }
    goto LAB_1414c1993;
  }
  lVar12 = (longlong)_Src - (longlong)pbVar17;
  do {
    *(undefined8 *)pbVar17 = *(undefined8 *)(pbVar17 + lVar12);
    pbVar17 = pbVar17 + 8;
  } while (pbVar17 < pbVar13);
  uVar10 = (ulonglong)*puVar9;
  _Src = puVar9 + 1;
  pbVar7 = pbVar13 + -uVar10;
  uVar15 = (ulonglong)(uVar14 & 0xf);
  if (uVar15 == 0xf) {
LAB_1414c181b:
    uVar18 = uVar11;
    do {
      uVar6 = *_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      uVar18 = uVar18 + (byte)uVar6;
      if (pbVar19 + -4 < _Src) goto LAB_1414c1993;
    } while ((byte)uVar6 == 0xff);
    if ((uVar18 == 0xffffffffffffffff) || (uVar15 = uVar15 + uVar18, pbVar13 + uVar15 < pbVar13))
    goto LAB_1414c1993;
  }
LAB_1414c1852:
  uVar15 = uVar15 + 4;
  goto LAB_1414c1856;
}

// LZ4_decompress_safe_continue @ 1414c19c0

/* WARNING: Type propagation algorithm not settling */

int __cdecl
LZ4_decompress_safe_continue
          (LZ4_streamDecode_u *param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uchar *puVar11;
  uchar *puVar12;
  ushort *_Src;
  ushort *puVar13;
  byte *pbVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uchar *puVar21;
  byte *_Src_00;
  uchar *puVar22;
  uchar *puVar23;
  byte local_98;
  byte bStack_97;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  int local_60;
  
  uVar15 = (param_1->internal_donotuse).prefixSize;
  if (uVar15 == 0) {
    iVar8 = LZ4_decompress_safe(param_2,param_3,param_4,param_5);
  }
  else {
    if ((param_1->internal_donotuse).prefixEnd == (uchar *)param_3) {
      if (uVar15 < 0xffff) {
        uVar5 = (param_1->internal_donotuse).extDictSize;
        if (uVar5 == 0) {
          iVar8 = LZ4_decompress_safe_withSmallPrefix(param_2,param_3,param_4,param_5,uVar15);
        }
        else {
          _Src_00 = (byte *)(param_3 + -uVar15);
          if ((param_2 != (char *)0x0) && (-1 < param_5)) {
            puVar21 = (uchar *)0x0;
            iVar8 = 0;
            pbVar2 = (byte *)(param_3 + param_5);
            puVar12 = (uchar *)(param_2 + param_4);
            puVar22 = puVar21;
            if ((param_1->internal_donotuse).externalDict != (uchar *)0x0) {
              puVar22 = (param_1->internal_donotuse).externalDict + uVar5;
            }
            if (param_5 == 0) {
              if ((param_4 == 1) && (*param_2 == '\0')) goto LAB_1414c1b18;
            }
            else if (param_4 != 0) {
              puVar13 = (ushort *)param_2;
              _Src = (ushort *)param_2;
              pbVar19 = (byte *)param_3;
              if ((ulonglong)(longlong)param_5 < 0x40) goto LAB_1414c1f27;
LAB_1414c1b60:
              do {
                bVar3 = (byte)*puVar13;
                uVar9 = (uint)bVar3;
                _Src = (ushort *)((longlong)puVar13 + 1);
                puVar23 = (uchar *)(ulonglong)(bVar3 >> 4);
                if (puVar23 == (uchar *)0xf) {
                  puVar23 = puVar21;
                  if (puVar12 + -0xf <= _Src) goto LAB_1414c2301;
                  do {
                    uVar7 = *_Src;
                    _Src = (ushort *)((longlong)_Src + 1);
                    puVar23 = puVar23 + (byte)uVar7;
                    if (puVar12 + -0xf < _Src) goto LAB_1414c2301;
                  } while ((byte)uVar7 == 0xff);
                  if (puVar23 == (uchar *)0xffffffffffffffff) goto LAB_1414c2301;
                  puVar23 = puVar23 + 0xf;
                  pbVar20 = pbVar19 + (longlong)puVar23;
                  if ((pbVar20 < pbVar19) ||
                     (puVar13 = (ushort *)(puVar23 + (longlong)_Src), puVar13 < _Src))
                  goto LAB_1414c2301;
                  if (pbVar2 + -0x20 < pbVar20) goto LAB_1414c2031;
                  if (puVar12 + -0x20 < puVar13) goto LAB_1414c2031;
                  lVar17 = (longlong)pbVar19 - (longlong)_Src;
                  do {
                    uVar6 = *(undefined8 *)(_Src + 4);
                    puVar1 = _Src + 0x10;
                    pbVar19 = (byte *)(lVar17 + -0x20 + (longlong)puVar1);
                    *(undefined8 *)pbVar19 = *(undefined8 *)_Src;
                    *(undefined8 *)(pbVar19 + 8) = uVar6;
                    uVar6 = *(undefined8 *)(_Src + 0xc);
                    pbVar19 = (byte *)(lVar17 + -0x10 + (longlong)puVar1);
                    *(undefined8 *)pbVar19 = *(undefined8 *)(_Src + 8);
                    *(undefined8 *)(pbVar19 + 8) = uVar6;
                    _Src = puVar1;
                  } while ((byte *)(lVar17 + (longlong)puVar1) < pbVar20);
                }
                else {
                  pbVar20 = pbVar19 + (longlong)puVar23;
                  if (puVar12 + -0x11 < _Src) goto LAB_1414c2031;
                  uVar6 = *(undefined8 *)((longlong)puVar13 + 9);
                  puVar13 = (ushort *)((longlong)_Src + (longlong)puVar23);
                  *(undefined8 *)pbVar19 = *(undefined8 *)_Src;
                  *(undefined8 *)(pbVar19 + 8) = uVar6;
                }
                uVar15 = (ulonglong)*puVar13;
                pbVar10 = pbVar20 + -uVar15;
                _Src = puVar13 + 1;
                if ((ulonglong)(bVar3 & 0xf) == 0xf) {
                  puVar23 = puVar21;
                  do {
                    uVar7 = *_Src;
                    _Src = (ushort *)((longlong)_Src + 1);
                    puVar23 = puVar23 + (byte)uVar7;
                    if (puVar12 + -4 < _Src) goto LAB_1414c2301;
                  } while ((byte)uVar7 == 0xff);
                  if (puVar23 == (uchar *)0xffffffffffffffff) goto LAB_1414c2301;
                  pbVar14 = puVar23 + 0x13;
                  if ((pbVar20 + (longlong)pbVar14 < pbVar20) ||
                     ((uVar5 < 0x10000 && (pbVar10 + uVar5 < _Src_00)))) goto LAB_1414c2301;
                  if (pbVar2 + -0x40 <= pbVar20 + (longlong)pbVar14) goto LAB_1414c20c4;
                }
                else {
                  pbVar14 = (byte *)((ulonglong)(bVar3 & 0xf) + 4);
                  pbVar19 = pbVar20 + (longlong)pbVar14;
                  if (pbVar2 + -0x40 <= pbVar19) goto LAB_1414c20c4;
                  if ((_Src_00 <= pbVar10) && (7 < uVar15)) {
                    *(undefined8 *)pbVar20 = *(undefined8 *)pbVar10;
                    *(undefined8 *)(pbVar20 + 8) = *(undefined8 *)(pbVar10 + 8);
                    *(undefined2 *)(pbVar20 + 0x10) = *(undefined2 *)(pbVar10 + 0x10);
                    puVar13 = _Src;
                    goto LAB_1414c1b60;
                  }
                }
                if ((uVar5 < 0x10000) && (pbVar10 + uVar5 < _Src_00)) goto LAB_1414c2301;
                pbVar19 = pbVar20 + (longlong)pbVar14;
                puVar13 = _Src;
                if (pbVar10 < _Src_00) {
                  if (pbVar2 + -5 < pbVar19) goto LAB_1414c2301;
                  pbVar18 = _Src_00 + -(longlong)pbVar10;
                  if (pbVar18 < pbVar14) {
                    uVar15 = (longlong)pbVar14 - (longlong)pbVar18;
                    memcpy(pbVar20,puVar22 + -(longlong)pbVar18,(size_t)pbVar18);
                    pbVar19 = pbVar20 + (longlong)pbVar18;
                    if ((ulonglong)((longlong)pbVar19 - (longlong)_Src_00) < uVar15) {
                      pbVar20 = pbVar19 + uVar15;
                      if (pbVar19 < pbVar20) {
                        lVar17 = (longlong)_Src_00 - (longlong)pbVar19;
                        do {
                          *pbVar19 = pbVar19[lVar17];
                          pbVar19 = pbVar19 + 1;
                        } while (pbVar19 < pbVar20);
                      }
                    }
                    else {
                      memcpy(pbVar19,_Src_00,uVar15);
                      pbVar19 = pbVar19 + uVar15;
                    }
                  }
                  else {
                    memmove(pbVar20,pbVar10 + ((longlong)puVar22 - (longlong)_Src_00),
                            (size_t)pbVar14);
                  }
                  goto LAB_1414c1b60;
                }
                if (uVar15 < 0x10) {
                  if (uVar15 == 1) {
                    bStack_94 = *pbVar10;
                    bStack_93 = bStack_94;
                    bStack_92 = bStack_94;
                    bStack_91 = bStack_94;
                  }
                  else if (uVar15 == 2) {
                    local_98 = (byte)*(undefined2 *)pbVar10;
                    bStack_97 = (byte)((ushort)*(undefined2 *)pbVar10 >> 8);
                    bStack_92 = local_98;
                    bStack_91 = bStack_97;
                    bStack_94 = local_98;
                    bStack_93 = bStack_97;
                  }
                  else {
                    if (uVar15 != 4) {
                      if (uVar15 < 8) {
                        pbVar20[0] = 0;
                        pbVar20[1] = 0;
                        pbVar20[2] = 0;
                        pbVar20[3] = 0;
                        *pbVar20 = *pbVar10;
                        pbVar20[1] = pbVar10[1];
                        pbVar20[2] = pbVar10[2];
                        pbVar20[3] = pbVar10[3];
                        uVar9 = inc32table[uVar15];
                        *(undefined4 *)(pbVar20 + 4) = *(undefined4 *)(pbVar10 + uVar9);
                        pbVar14 = pbVar10 + uVar9 + -(longlong)dec64table[uVar15];
                      }
                      else {
                        pbVar14 = pbVar10 + 8;
                        *(undefined8 *)pbVar20 = *(undefined8 *)pbVar10;
                      }
                      pbVar20 = pbVar20 + 8;
                      lVar17 = (longlong)pbVar14 - (longlong)pbVar20;
                      do {
                        *(undefined8 *)pbVar20 = *(undefined8 *)(pbVar20 + lVar17);
                        pbVar20 = pbVar20 + 8;
                      } while (pbVar20 < pbVar19);
                      goto LAB_1414c1b60;
                    }
                    uVar4 = *(undefined4 *)pbVar10;
                    local_98 = (byte)uVar4;
                    bStack_97 = (byte)((uint)uVar4 >> 8);
                    bStack_96 = (byte)((uint)uVar4 >> 0x10);
                    bStack_95 = (byte)((uint)uVar4 >> 0x18);
                    bStack_94 = local_98;
                    bStack_93 = bStack_97;
                    bStack_92 = bStack_96;
                    bStack_91 = bStack_95;
                  }
                  uVar6 = CONCAT17(bStack_91,
                                   CONCAT16(bStack_92,
                                            CONCAT15(bStack_93,
                                                     CONCAT14(bStack_94,
                                                              CONCAT13(bStack_91,
                                                                       CONCAT12(bStack_92,
                                                                                CONCAT11(bStack_93,
                                                                                         bStack_94))
                                                                      )))));
                  *(undefined8 *)pbVar20 = uVar6;
                  pbVar20 = pbVar20 + 8;
                  puVar23 = (uchar *)((ulonglong)(pbVar19 + (7 - (longlong)pbVar20)) >> 3);
                  if (pbVar19 < pbVar20) {
                    puVar23 = puVar21;
                  }
                  if (puVar23 != (uchar *)0x0) {
                    for (; puVar23 != (uchar *)0x0; puVar23 = puVar23 + -1) {
                      *(undefined8 *)pbVar20 = uVar6;
                      pbVar20 = pbVar20 + 8;
                    }
                  }
                  goto LAB_1414c1b60;
                }
                lVar17 = (longlong)pbVar20 - (longlong)pbVar10;
                do {
                  uVar6 = *(undefined8 *)(pbVar10 + 8);
                  pbVar20 = pbVar10 + 0x20;
                  *(undefined8 *)(pbVar20 + lVar17 + -0x20) = *(undefined8 *)pbVar10;
                  *(undefined8 *)(pbVar20 + lVar17 + -0x20 + 8) = uVar6;
                  uVar6 = *(undefined8 *)(pbVar10 + 0x18);
                  *(undefined8 *)(pbVar20 + lVar17 + -0x10) = *(undefined8 *)(pbVar10 + 0x10);
                  *(undefined8 *)(pbVar20 + lVar17 + -0x10 + 8) = uVar6;
                  pbVar10 = pbVar20;
                } while (pbVar20 + lVar17 < pbVar19);
              } while( true );
            }
          }
          iVar8 = -1;
        }
      }
      else {
        iVar8 = LZ4_decompress_safe_withPrefix64k(param_2,param_3,param_4,param_5);
      }
      goto LAB_1414c1b18;
    }
    puVar12 = (param_1->internal_donotuse).prefixEnd + -uVar15;
    (param_1->internal_donotuse).externalDict = puVar12;
    (param_1->internal_donotuse).extDictSize = uVar15;
    iVar8 = LZ4_decompress_safe_forceExtDict(param_2,param_3,param_4,param_5,puVar12,uVar15);
  }
  if (iVar8 < 1) {
    return iVar8;
  }
  (param_1->internal_donotuse).prefixSize = (longlong)iVar8;
  (param_1->internal_donotuse).prefixEnd = (uchar *)(param_3 + iVar8);
  return iVar8;
LAB_1414c20c4:
  if ((uVar5 < 0x10000) && (pbVar10 + uVar5 < _Src_00)) goto LAB_1414c2301;
  if (pbVar10 < _Src_00) {
    pbVar19 = pbVar20 + (longlong)pbVar14;
    if (pbVar2 + -5 < pbVar19) goto LAB_1414c2301;
    pbVar18 = _Src_00 + -(longlong)pbVar10;
    if (pbVar18 < pbVar14) {
      uVar15 = (longlong)pbVar14 - (longlong)pbVar18;
      memcpy(pbVar20,puVar22 + -(longlong)pbVar18,(size_t)pbVar18);
      pbVar19 = pbVar20 + (longlong)pbVar18;
      if ((ulonglong)((longlong)pbVar19 - (longlong)_Src_00) < uVar15) {
        pbVar10 = pbVar19 + uVar15;
        pbVar20 = _Src_00;
        for (; pbVar19 < pbVar10; pbVar19 = pbVar19 + 1) {
          bVar3 = *pbVar20;
          pbVar20 = pbVar20 + 1;
          *pbVar19 = bVar3;
        }
      }
      else {
        memcpy(pbVar19,_Src_00,uVar15);
        pbVar19 = pbVar19 + uVar15;
      }
    }
    else {
      memmove(pbVar20,pbVar10 + ((longlong)puVar22 - (longlong)_Src_00),(size_t)pbVar14);
    }
  }
  else {
    pbVar19 = pbVar20 + (longlong)pbVar14;
    if (uVar15 < 8) {
      pbVar20[0] = 0;
      pbVar20[1] = 0;
      pbVar20[2] = 0;
      pbVar20[3] = 0;
      *pbVar20 = *pbVar10;
      pbVar20[1] = pbVar10[1];
      pbVar20[2] = pbVar10[2];
      pbVar20[3] = pbVar10[3];
      uVar9 = inc32table[uVar15];
      *(undefined4 *)(pbVar20 + 4) = *(undefined4 *)(pbVar10 + uVar9);
      pbVar18 = pbVar10 + uVar9 + -(longlong)dec64table[uVar15];
    }
    else {
      pbVar18 = pbVar10 + 8;
      *(undefined8 *)pbVar20 = *(undefined8 *)pbVar10;
    }
    pbVar10 = pbVar20 + 8;
    if (pbVar2 + -0xc < pbVar19) {
      pbVar20 = pbVar2 + -7;
      if (pbVar2 + -5 < pbVar19) goto LAB_1414c2301;
      if (pbVar10 < pbVar20) {
        pbVar14 = pbVar10;
        do {
          *(undefined8 *)pbVar14 =
               *(undefined8 *)(pbVar14 + ((longlong)pbVar18 - (longlong)pbVar10));
          pbVar14 = pbVar14 + 8;
        } while (pbVar14 < pbVar20);
        pbVar18 = pbVar18 + ((longlong)pbVar20 - (longlong)pbVar10);
        pbVar10 = pbVar20;
      }
      for (; pbVar10 < pbVar19; pbVar10 = pbVar10 + 1) {
        bVar3 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        *pbVar10 = bVar3;
      }
    }
    else {
      *(undefined8 *)pbVar10 = *(undefined8 *)pbVar18;
      if ((byte *)0x10 < pbVar14) {
        pbVar10 = pbVar20 + 0x10;
        do {
          *(undefined8 *)pbVar10 =
               *(undefined8 *)(pbVar10 + (longlong)(pbVar18 + (8 - (longlong)(pbVar20 + 0x10))));
          pbVar10 = pbVar10 + 8;
        } while (pbVar10 < pbVar19);
      }
    }
  }
LAB_1414c1f27:
  bVar3 = (byte)*_Src;
  _Src = (ushort *)((longlong)_Src + 1);
  uVar9 = (uint)bVar3;
  puVar23 = (uchar *)(ulonglong)(bVar3 >> 4);
  if (puVar23 != (uchar *)0xf) {
    do {
      if (puVar12 + -0x10 <= _Src || pbVar2 + -0x20 < pbVar19) goto LAB_1414c202d;
      uVar6 = *(undefined8 *)(_Src + 4);
      puVar13 = (ushort *)((longlong)_Src + (longlong)puVar23);
      uVar16 = (ulonglong)(bVar3 & 0xf);
      *(undefined8 *)pbVar19 = *(undefined8 *)_Src;
      *(undefined8 *)(pbVar19 + 8) = uVar6;
      pbVar20 = pbVar19 + (longlong)puVar23;
      uVar15 = (ulonglong)*puVar13;
      pbVar10 = pbVar20 + -uVar15;
      _Src = puVar13 + 1;
      if (uVar16 == 0xf) goto LAB_1414c2089;
      if ((uVar15 < 8) || (pbVar10 < _Src_00)) goto LAB_1414c20c0;
      *(undefined8 *)pbVar20 = *(undefined8 *)pbVar10;
      *(undefined8 *)(pbVar20 + 8) = *(undefined8 *)(pbVar10 + 8);
      *(undefined2 *)(pbVar20 + 0x10) = *(undefined2 *)(pbVar10 + 0x10);
      pbVar19 = pbVar20 + uVar16 + 4;
      bVar3 = (byte)*_Src;
      _Src = (ushort *)((longlong)puVar13 + 3);
      uVar9 = (uint)bVar3;
      puVar23 = (uchar *)(ulonglong)(bVar3 >> 4);
    } while (puVar23 != (uchar *)0xf);
  }
  puVar11 = puVar21;
  if (puVar12 + -0xf <= _Src) goto LAB_1414c2301;
  do {
    uVar7 = *_Src;
    _Src = (ushort *)((longlong)_Src + 1);
    puVar11 = puVar11 + (byte)uVar7;
    if (puVar12 + -0xf < _Src) goto LAB_1414c2301;
  } while ((byte)uVar7 == 0xff);
  if (((puVar11 == (uchar *)0xffffffffffffffff) ||
      (puVar23 = puVar23 + (longlong)puVar11, pbVar19 + (longlong)puVar23 < pbVar19)) ||
     (puVar23 + (longlong)_Src < _Src)) goto LAB_1414c2301;
LAB_1414c202d:
  pbVar20 = pbVar19 + (longlong)puVar23;
LAB_1414c2031:
  if ((pbVar20 <= pbVar2 + -0xc) &&
     (puVar13 = (ushort *)(puVar23 + (longlong)_Src), puVar13 <= puVar12 + -8)) {
    lVar17 = (longlong)_Src - (longlong)pbVar19;
    do {
      *(undefined8 *)pbVar19 = *(undefined8 *)(pbVar19 + lVar17);
      pbVar19 = pbVar19 + 8;
    } while (pbVar19 < pbVar20);
    uVar15 = (ulonglong)*puVar13;
    _Src = puVar13 + 1;
    pbVar10 = pbVar20 + -uVar15;
    uVar16 = (ulonglong)(uVar9 & 0xf);
    if (uVar16 == 0xf) {
LAB_1414c2089:
      puVar23 = puVar21;
      do {
        uVar7 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        puVar23 = puVar23 + (byte)uVar7;
        if (puVar12 + -4 < _Src) goto LAB_1414c2301;
      } while ((byte)uVar7 == 0xff);
      if ((puVar23 == (uchar *)0xffffffffffffffff) ||
         (uVar16 = uVar16 + (longlong)puVar23, pbVar20 + uVar16 < pbVar20)) goto LAB_1414c2301;
    }
LAB_1414c20c0:
    pbVar14 = (byte *)(uVar16 + 4);
    goto LAB_1414c20c4;
  }
  if ((puVar23 + (longlong)_Src == puVar12) && (pbVar20 <= pbVar2)) {
    memmove(pbVar19,_Src,(size_t)puVar23);
    local_60 = (int)param_3;
    iVar8 = (int)pbVar19 + ((int)puVar23 - local_60);
    goto LAB_1414c1b18;
  }
LAB_1414c2301:
  iVar8 = ((int)param_2 - (int)_Src) + -1;
LAB_1414c1b18:
  if (iVar8 < 1) {
    return iVar8;
  }
  (param_1->internal_donotuse).prefixSize =
       (param_1->internal_donotuse).prefixSize + (longlong)iVar8;
  (param_1->internal_donotuse).prefixEnd = (param_1->internal_donotuse).prefixEnd + iVar8;
  return iVar8;
}

// LZ4_decompress_safe_forceExtDict @ 1414c2370

int __cdecl
LZ4_decompress_safe_forceExtDict
          (char *param_1,char *param_2,int param_3,int param_4,void *param_5,ulong64 param_6)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  byte *pbVar10;
  ushort *_Src;
  ushort *puVar11;
  uint uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte local_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  
  if ((param_1 == (char *)0x0) || (param_4 < 0)) {
    return -1;
  }
  pbVar16 = (byte *)(param_1 + param_3);
  pbVar2 = (byte *)(param_2 + param_4);
  lVar9 = 0;
  if (param_5 != (void *)0x0) {
    lVar9 = (longlong)param_5 + param_6;
  }
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == '\0')) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    puVar11 = (ushort *)param_1;
    _Src = (ushort *)param_1;
    pbVar14 = (byte *)param_2;
    if ((ulonglong)(longlong)param_4 < 0x40) goto LAB_1414c2847;
LAB_1414c2452:
    bVar3 = (byte)*puVar11;
    uVar12 = (uint)bVar3;
    _Src = (ushort *)((longlong)puVar11 + 1);
    uVar17 = (ulonglong)(bVar3 >> 4);
    if (uVar17 == 0xf) {
      lVar18 = 0;
      if (pbVar16 + -0xf <= _Src) goto LAB_1414c29e4;
      do {
        uVar6 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        lVar18 = lVar18 + (ulonglong)(byte)uVar6;
        if (pbVar16 + -0xf < _Src) goto LAB_1414c29e4;
      } while ((byte)uVar6 == 0xff);
      if (lVar18 == -1) goto LAB_1414c29e4;
      uVar17 = lVar18 + 0xf;
      pbVar15 = pbVar14 + uVar17;
      if ((pbVar15 < pbVar14) || (puVar11 = (ushort *)(uVar17 + (longlong)_Src), puVar11 < _Src))
      goto LAB_1414c29e4;
      if (pbVar2 + -0x20 < pbVar15) goto LAB_1414c2951;
      if (pbVar16 + -0x20 < puVar11) goto LAB_1414c2951;
      lVar18 = (longlong)pbVar14 - (longlong)_Src;
      do {
        uVar5 = *(undefined8 *)(_Src + 4);
        puVar1 = _Src + 0x10;
        pbVar14 = (byte *)(lVar18 + -0x20 + (longlong)puVar1);
        *(undefined8 *)pbVar14 = *(undefined8 *)_Src;
        *(undefined8 *)(pbVar14 + 8) = uVar5;
        uVar5 = *(undefined8 *)(_Src + 0xc);
        pbVar14 = (byte *)(lVar18 + -0x10 + (longlong)puVar1);
        *(undefined8 *)pbVar14 = *(undefined8 *)(_Src + 8);
        *(undefined8 *)(pbVar14 + 8) = uVar5;
        _Src = puVar1;
      } while ((byte *)((longlong)puVar1 + lVar18) < pbVar15);
    }
    else {
      pbVar15 = pbVar14 + uVar17;
      if (pbVar16 + -0x11 < _Src) goto LAB_1414c2951;
      uVar5 = *(undefined8 *)((longlong)puVar11 + 9);
      puVar11 = (ushort *)((longlong)_Src + uVar17);
      *(undefined8 *)pbVar14 = *(undefined8 *)_Src;
      *(undefined8 *)(pbVar14 + 8) = uVar5;
    }
    uVar17 = (ulonglong)*puVar11;
    pbVar7 = pbVar15 + -uVar17;
    _Src = puVar11 + 1;
    if ((ulonglong)(bVar3 & 0xf) == 0xf) {
      uVar13 = 0;
      do {
        uVar6 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar13 = uVar13 + (byte)uVar6;
        if (pbVar16 + -4 < _Src) goto LAB_1414c29e4;
      } while ((byte)uVar6 == 0xff);
      if (uVar13 == 0xffffffffffffffff) goto LAB_1414c29e4;
      uVar13 = uVar13 + 0x13;
      if ((pbVar15 + uVar13 < pbVar15) || ((param_6 < 0x10000 && (pbVar7 + param_6 < param_2))))
      goto LAB_1414c29e4;
      if (pbVar2 + -0x40 <= pbVar15 + uVar13) goto LAB_1414c29fe;
LAB_1414c2598:
      if ((param_6 < 0x10000) && (pbVar7 + param_6 < param_2)) goto LAB_1414c29e4;
      pbVar14 = pbVar15 + uVar13;
      puVar11 = _Src;
      if (pbVar7 < param_2) {
        if (pbVar2 + -5 < pbVar14) goto LAB_1414c29e4;
        uVar17 = (longlong)param_2 - (longlong)pbVar7;
        if (uVar17 < uVar13) {
          uVar13 = uVar13 - uVar17;
          memcpy(pbVar15,(void *)(lVar9 - uVar17),uVar17);
          pbVar14 = pbVar15 + uVar17;
          if ((ulonglong)((longlong)pbVar14 - (longlong)param_2) < uVar13) {
            pbVar15 = pbVar14 + uVar13;
            if (pbVar14 < pbVar15) {
              lVar18 = (longlong)param_2 - (longlong)pbVar14;
              do {
                *pbVar14 = pbVar14[lVar18];
                pbVar14 = pbVar14 + 1;
              } while (pbVar14 < pbVar15);
            }
          }
          else {
            memcpy(pbVar14,param_2,uVar13);
            pbVar14 = pbVar14 + uVar13;
          }
        }
        else {
          memmove(pbVar15,pbVar7 + (lVar9 - (longlong)param_2),uVar13);
        }
        goto LAB_1414c2452;
      }
      if (uVar17 < 0x10) {
        if (uVar17 == 1) {
          bStack_74 = *pbVar7;
          bStack_73 = bStack_74;
          bStack_72 = bStack_74;
          bStack_71 = bStack_74;
        }
        else if (uVar17 == 2) {
          local_78 = (byte)*(undefined2 *)pbVar7;
          bStack_77 = (byte)((ushort)*(undefined2 *)pbVar7 >> 8);
          bStack_72 = local_78;
          bStack_71 = bStack_77;
          bStack_74 = local_78;
          bStack_73 = bStack_77;
        }
        else {
          if (uVar17 != 4) {
            if (uVar17 < 8) {
              pbVar15[0] = 0;
              pbVar15[1] = 0;
              pbVar15[2] = 0;
              pbVar15[3] = 0;
              *pbVar15 = *pbVar7;
              pbVar15[1] = pbVar7[1];
              pbVar15[2] = pbVar7[2];
              pbVar15[3] = pbVar7[3];
              uVar12 = inc32table[uVar17];
              *(undefined4 *)(pbVar15 + 4) = *(undefined4 *)(pbVar7 + uVar12);
              pbVar8 = pbVar7 + uVar12 + -(longlong)dec64table[uVar17];
            }
            else {
              pbVar8 = pbVar7 + 8;
              *(undefined8 *)pbVar15 = *(undefined8 *)pbVar7;
            }
            pbVar15 = pbVar15 + 8;
            lVar18 = (longlong)pbVar8 - (longlong)pbVar15;
            do {
              *(undefined8 *)pbVar15 = *(undefined8 *)(pbVar15 + lVar18);
              pbVar15 = pbVar15 + 8;
            } while (pbVar15 < pbVar14);
            goto LAB_1414c2452;
          }
          uVar4 = *(undefined4 *)pbVar7;
          local_78 = (byte)uVar4;
          bStack_77 = (byte)((uint)uVar4 >> 8);
          bStack_76 = (byte)((uint)uVar4 >> 0x10);
          bStack_75 = (byte)((uint)uVar4 >> 0x18);
          bStack_74 = local_78;
          bStack_73 = bStack_77;
          bStack_72 = bStack_76;
          bStack_71 = bStack_75;
        }
        uVar5 = CONCAT17(bStack_71,
                         CONCAT16(bStack_72,
                                  CONCAT15(bStack_73,
                                           CONCAT14(bStack_74,
                                                    CONCAT13(bStack_71,
                                                             CONCAT12(bStack_72,
                                                                      CONCAT11(bStack_73,bStack_74))
                                                            )))));
        *(undefined8 *)pbVar15 = uVar5;
        pbVar15 = pbVar15 + 8;
        uVar17 = (ulonglong)(pbVar14 + (7 - (longlong)pbVar15)) >> 3;
        if (pbVar14 < pbVar15) {
          uVar17 = 0;
        }
        if (uVar17 != 0) {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined8 *)pbVar15 = uVar5;
            pbVar15 = pbVar15 + 8;
          }
        }
        goto LAB_1414c2452;
      }
      lVar18 = (longlong)pbVar15 - (longlong)pbVar7;
      do {
        uVar5 = *(undefined8 *)(pbVar7 + 8);
        pbVar15 = pbVar7 + 0x20;
        *(undefined8 *)(pbVar7 + lVar18) = *(undefined8 *)pbVar7;
        *(undefined8 *)(pbVar7 + lVar18 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pbVar7 + 0x18);
        *(undefined8 *)(pbVar7 + lVar18 + 0x10) = *(undefined8 *)(pbVar7 + 0x10);
        *(undefined8 *)(pbVar7 + lVar18 + 0x10 + 8) = uVar5;
        pbVar7 = pbVar15;
      } while (pbVar15 + lVar18 < pbVar14);
    }
    else {
      uVar13 = (ulonglong)(bVar3 & 0xf) + 4;
      pbVar14 = pbVar15 + uVar13;
      if (pbVar2 + -0x40 <= pbVar14) goto LAB_1414c29fe;
      if ((pbVar7 < param_2) || (uVar17 < 8)) goto LAB_1414c2598;
      *(undefined8 *)pbVar15 = *(undefined8 *)pbVar7;
      *(undefined8 *)(pbVar15 + 8) = *(undefined8 *)(pbVar7 + 8);
      *(undefined2 *)(pbVar15 + 0x10) = *(undefined2 *)(pbVar7 + 0x10);
      puVar11 = _Src;
    }
    goto LAB_1414c2452;
  }
  return -1;
LAB_1414c29fe:
  if ((param_6 < 0x10000) && (pbVar7 + param_6 < param_2)) goto LAB_1414c29e4;
  if (pbVar7 < param_2) {
    pbVar14 = pbVar15 + uVar13;
    if (pbVar2 + -5 < pbVar14) goto LAB_1414c29e4;
    uVar17 = (longlong)param_2 - (longlong)pbVar7;
    if (uVar17 < uVar13) {
      uVar13 = uVar13 - uVar17;
      memcpy(pbVar15,(void *)(lVar9 - uVar17),uVar17);
      pbVar14 = pbVar15 + uVar17;
      if ((ulonglong)((longlong)pbVar14 - (longlong)param_2) < uVar13) {
        pbVar7 = pbVar14 + uVar13;
        pbVar15 = (byte *)param_2;
        for (; pbVar14 < pbVar7; pbVar14 = pbVar14 + 1) {
          bVar3 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          *pbVar14 = bVar3;
        }
      }
      else {
        memcpy(pbVar14,param_2,uVar13);
        pbVar14 = pbVar14 + uVar13;
      }
    }
    else {
      memmove(pbVar15,pbVar7 + (lVar9 - (longlong)param_2),uVar13);
    }
  }
  else {
    pbVar14 = pbVar15 + uVar13;
    if (uVar17 < 8) {
      pbVar15[0] = 0;
      pbVar15[1] = 0;
      pbVar15[2] = 0;
      pbVar15[3] = 0;
      *pbVar15 = *pbVar7;
      pbVar15[1] = pbVar7[1];
      pbVar15[2] = pbVar7[2];
      pbVar15[3] = pbVar7[3];
      uVar12 = inc32table[uVar17];
      *(undefined4 *)(pbVar15 + 4) = *(undefined4 *)(pbVar7 + uVar12);
      pbVar8 = pbVar7 + uVar12 + -(longlong)dec64table[uVar17];
    }
    else {
      pbVar8 = pbVar7 + 8;
      *(undefined8 *)pbVar15 = *(undefined8 *)pbVar7;
    }
    pbVar7 = pbVar15 + 8;
    if (pbVar2 + -0xc < pbVar14) {
      pbVar15 = pbVar2 + -7;
      if (pbVar2 + -5 < pbVar14) goto LAB_1414c29e4;
      if (pbVar7 < pbVar15) {
        pbVar10 = pbVar7;
        do {
          *(undefined8 *)pbVar10 = *(undefined8 *)(pbVar10 + ((longlong)pbVar8 - (longlong)pbVar7));
          pbVar10 = pbVar10 + 8;
        } while (pbVar10 < pbVar15);
        pbVar8 = pbVar8 + ((longlong)pbVar15 - (longlong)pbVar7);
        pbVar7 = pbVar15;
      }
      for (; pbVar7 < pbVar14; pbVar7 = pbVar7 + 1) {
        bVar3 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        *pbVar7 = bVar3;
      }
    }
    else {
      *(undefined8 *)pbVar7 = *(undefined8 *)pbVar8;
      if (0x10 < uVar13) {
        pbVar7 = pbVar15 + 0x10;
        do {
          *(undefined8 *)pbVar7 =
               *(undefined8 *)(pbVar7 + (longlong)(pbVar8 + (8 - (longlong)(pbVar15 + 0x10))));
          pbVar7 = pbVar7 + 8;
        } while (pbVar7 < pbVar14);
      }
    }
  }
LAB_1414c2847:
  bVar3 = (byte)*_Src;
  lVar18 = 0;
  _Src = (ushort *)((longlong)_Src + 1);
  while( true ) {
    uVar17 = (ulonglong)(bVar3 >> 4);
    uVar12 = (uint)bVar3;
    if (uVar17 == 0xf) break;
    if (pbVar16 + -0x10 <= _Src || pbVar2 + -0x20 < pbVar14) goto LAB_1414c294d;
    uVar5 = *(undefined8 *)(_Src + 4);
    puVar11 = (ushort *)((longlong)_Src + uVar17);
    uVar13 = (ulonglong)(bVar3 & 0xf);
    *(undefined8 *)pbVar14 = *(undefined8 *)_Src;
    *(undefined8 *)(pbVar14 + 8) = uVar5;
    pbVar15 = pbVar14 + uVar17;
    uVar17 = (ulonglong)*puVar11;
    pbVar7 = pbVar15 + -uVar17;
    _Src = puVar11 + 1;
    if (uVar13 == 0xf) goto LAB_1414c29a9;
    if ((uVar17 < 8) || (pbVar7 < param_2)) goto LAB_1414c29f5;
    *(undefined8 *)pbVar15 = *(undefined8 *)pbVar7;
    *(undefined8 *)(pbVar15 + 8) = *(undefined8 *)(pbVar7 + 8);
    *(undefined2 *)(pbVar15 + 0x10) = *(undefined2 *)(pbVar7 + 0x10);
    pbVar14 = pbVar15 + uVar13 + 4;
    bVar3 = (byte)*_Src;
    _Src = (ushort *)((longlong)puVar11 + 3);
  }
  if (pbVar16 + -0xf <= _Src) goto LAB_1414c29e4;
  do {
    uVar6 = *_Src;
    _Src = (ushort *)((longlong)_Src + 1);
    lVar18 = lVar18 + (ulonglong)(byte)uVar6;
    if (pbVar16 + -0xf < _Src) goto LAB_1414c29e4;
  } while ((byte)uVar6 == 0xff);
  if (((lVar18 == -1) || (uVar17 = lVar18 + 0xf, pbVar14 + uVar17 < pbVar14)) ||
     ((ushort *)(uVar17 + (longlong)_Src) < _Src)) goto LAB_1414c29e4;
LAB_1414c294d:
  pbVar15 = pbVar14 + uVar17;
LAB_1414c2951:
  if ((pbVar2 + -0xc < pbVar15) ||
     (puVar11 = (ushort *)(uVar17 + (longlong)_Src), pbVar16 + -8 < puVar11)) {
    if (((byte *)(uVar17 + (longlong)_Src) == pbVar16) && (pbVar15 <= pbVar2)) {
      memmove(pbVar14,_Src,uVar17);
      return (int)pbVar14 + ((int)uVar17 - (int)param_2);
    }
LAB_1414c29e4:
    return ((int)param_1 - (int)_Src) + -1;
  }
  lVar18 = (longlong)_Src - (longlong)pbVar14;
  do {
    *(undefined8 *)pbVar14 = *(undefined8 *)(pbVar14 + lVar18);
    pbVar14 = pbVar14 + 8;
  } while (pbVar14 < pbVar15);
  uVar17 = (ulonglong)*puVar11;
  _Src = puVar11 + 1;
  pbVar7 = pbVar15 + -uVar17;
  uVar13 = (ulonglong)(uVar12 & 0xf);
  if (uVar13 == 0xf) {
LAB_1414c29a9:
    lVar18 = 0;
    do {
      uVar6 = *_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      lVar18 = lVar18 + (ulonglong)(byte)uVar6;
      if (pbVar16 + -4 < _Src) goto LAB_1414c29e4;
    } while ((byte)uVar6 == 0xff);
    if ((lVar18 == -1) || (uVar13 = uVar13 + lVar18, pbVar15 + uVar13 < pbVar15))
    goto LAB_1414c29e4;
  }
LAB_1414c29f5:
  uVar13 = uVar13 + 4;
  goto LAB_1414c29fe;
}

// LZ4_decompress_safe_partial @ 1414c2c30

int __cdecl
LZ4_decompress_safe_partial(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ushort *_Src;
  ushort *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  size_t _Size;
  ulonglong uVar15;
  byte *pbVar16;
  uint uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  byte local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  int local_60;
  
  if (param_4 < param_5) {
    param_5 = param_4;
  }
  if ((param_1 == (char *)0x0) || (param_5 < 0)) {
    return -1;
  }
  pbVar16 = (byte *)(param_1 + param_3);
  pbVar2 = (byte *)(param_2 + param_5);
  if (param_5 == 0) {
    iVar7 = 0;
  }
  else {
    if (param_3 != 0) {
      uVar12 = 0;
      puVar11 = (ushort *)param_1;
      _Src = (ushort *)param_1;
      pbVar19 = (byte *)param_2;
      pbVar9 = (byte *)param_2;
      if ((longlong)param_5 < 0x40) goto LAB_1414c2fb6;
LAB_1414c2ce0:
      do {
        bVar3 = (byte)*puVar11;
        _Src = (ushort *)((longlong)puVar11 + 1);
        uVar10 = (ulonglong)(bVar3 >> 4);
        if (uVar10 == 0xf) {
          uVar10 = uVar12;
          if (pbVar16 + -0xf <= _Src) goto LAB_1414c32d2;
          do {
            uVar6 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar10 = uVar10 + (byte)uVar6;
            if (pbVar16 + -0xf < _Src) goto LAB_1414c32d2;
          } while ((byte)uVar6 == 0xff);
          if (uVar10 == 0xffffffffffffffff) goto LAB_1414c32d2;
          uVar10 = uVar10 + 0xf;
          pbVar9 = pbVar19 + uVar10;
          if ((pbVar9 < pbVar19) || (puVar11 = (ushort *)(uVar10 + (longlong)_Src), puVar11 < _Src))
          goto LAB_1414c32d2;
          uVar17 = (uint)bVar3;
          if (pbVar2 + -0x20 < pbVar9) goto LAB_1414c30b1;
          uVar17 = (uint)bVar3;
          if (pbVar16 + -0x20 < puVar11) goto LAB_1414c30b1;
          lVar13 = (longlong)pbVar19 - (longlong)_Src;
          do {
            uVar5 = *(undefined8 *)(_Src + 4);
            puVar1 = _Src + 0x10;
            *(undefined8 *)((longlong)_Src + lVar13) = *(undefined8 *)_Src;
            *(undefined8 *)((byte *)((longlong)_Src + lVar13) + 8) = uVar5;
            uVar5 = *(undefined8 *)(_Src + 0xc);
            pbVar19 = (byte *)((longlong)_Src + lVar13 + 0x10);
            *(undefined8 *)pbVar19 = *(undefined8 *)(_Src + 8);
            *(undefined8 *)(pbVar19 + 8) = uVar5;
            _Src = puVar1;
            pbVar14 = pbVar9;
          } while ((byte *)(lVar13 + (longlong)puVar1) < pbVar9);
        }
        else {
          pbVar9 = pbVar19 + uVar10;
          uVar17 = (uint)bVar3;
          if (pbVar16 + -0x11 < _Src) goto LAB_1414c30b1;
          uVar5 = *(undefined8 *)((longlong)puVar11 + 9);
          puVar11 = (ushort *)((longlong)_Src + uVar10);
          *(undefined8 *)pbVar19 = *(undefined8 *)_Src;
          *(undefined8 *)(pbVar19 + 8) = uVar5;
          pbVar14 = pbVar9;
        }
        uVar10 = (ulonglong)*puVar11;
        pbVar8 = pbVar14 + -uVar10;
        _Src = puVar11 + 1;
        if ((ulonglong)(bVar3 & 0xf) == 0xf) {
          uVar18 = uVar12;
          do {
            uVar6 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar18 = uVar18 + (byte)uVar6;
            if (pbVar16 + -4 < _Src) goto LAB_1414c32d2;
          } while ((byte)uVar6 == 0xff);
          if (uVar18 == 0xffffffffffffffff) goto LAB_1414c32d2;
          uVar18 = uVar18 + 0x13;
          if ((pbVar14 + uVar18 < pbVar14) || (pbVar8 < param_2)) goto LAB_1414c32d2;
          if (pbVar2 + -0x40 <= pbVar14 + uVar18) goto LAB_1414c31b4;
LAB_1414c2e1a:
          pbVar19 = pbVar14 + uVar18;
          puVar11 = _Src;
          if (0xf < uVar10) {
            lVar13 = (longlong)pbVar14 - (longlong)pbVar8;
            do {
              uVar5 = *(undefined8 *)(pbVar8 + 8);
              pbVar9 = pbVar8 + 0x20;
              *(undefined8 *)(pbVar8 + lVar13) = *(undefined8 *)pbVar8;
              *(undefined8 *)(pbVar8 + lVar13 + 8) = uVar5;
              uVar5 = *(undefined8 *)(pbVar8 + 0x18);
              *(undefined8 *)(pbVar8 + lVar13 + 0x10) = *(undefined8 *)(pbVar8 + 0x10);
              *(undefined8 *)(pbVar8 + lVar13 + 0x10 + 8) = uVar5;
              pbVar8 = pbVar9;
            } while (pbVar9 + lVar13 < pbVar19);
            goto LAB_1414c2ce0;
          }
          if (uVar10 == 1) {
            bStack_64 = *pbVar8;
            bStack_63 = bStack_64;
            bStack_62 = bStack_64;
            bStack_61 = bStack_64;
          }
          else if (uVar10 == 2) {
            local_68 = (byte)*(undefined2 *)pbVar8;
            bStack_67 = (byte)((ushort)*(undefined2 *)pbVar8 >> 8);
            bStack_62 = local_68;
            bStack_61 = bStack_67;
            bStack_64 = local_68;
            bStack_63 = bStack_67;
          }
          else {
            if (uVar10 != 4) {
              if (uVar10 < 8) {
                pbVar14[0] = 0;
                pbVar14[1] = 0;
                pbVar14[2] = 0;
                pbVar14[3] = 0;
                *pbVar14 = *pbVar8;
                pbVar14[1] = pbVar8[1];
                pbVar14[2] = pbVar8[2];
                pbVar14[3] = pbVar8[3];
                uVar17 = inc32table[uVar10];
                *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar8 + uVar17);
                pbVar9 = pbVar8 + uVar17 + -(longlong)dec64table[uVar10];
              }
              else {
                pbVar9 = pbVar8 + 8;
                *(undefined8 *)pbVar14 = *(undefined8 *)pbVar8;
              }
              pbVar14 = pbVar14 + 8;
              lVar13 = (longlong)pbVar9 - (longlong)pbVar14;
              do {
                *(undefined8 *)pbVar14 = *(undefined8 *)(pbVar14 + lVar13);
                pbVar14 = pbVar14 + 8;
              } while (pbVar14 < pbVar19);
              goto LAB_1414c2ce0;
            }
            uVar4 = *(undefined4 *)pbVar8;
            local_68 = (byte)uVar4;
            bStack_67 = (byte)((uint)uVar4 >> 8);
            bStack_66 = (byte)((uint)uVar4 >> 0x10);
            bStack_65 = (byte)((uint)uVar4 >> 0x18);
            bStack_64 = local_68;
            bStack_63 = bStack_67;
            bStack_62 = bStack_66;
            bStack_61 = bStack_65;
          }
          uVar5 = CONCAT17(bStack_61,
                           CONCAT16(bStack_62,
                                    CONCAT15(bStack_63,
                                             CONCAT14(bStack_64,
                                                      CONCAT13(bStack_61,
                                                               CONCAT12(bStack_62,
                                                                        CONCAT11(bStack_63,bStack_64
                                                                                )))))));
          pbVar9 = pbVar14 + 8;
          *(undefined8 *)pbVar14 = uVar5;
          uVar10 = (ulonglong)(pbVar19 + (7 - (longlong)pbVar9)) >> 3;
          if (pbVar19 < pbVar9) {
            uVar10 = uVar12;
          }
          if (uVar10 != 0) {
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined8 *)pbVar9 = uVar5;
              pbVar9 = pbVar9 + 8;
            }
          }
          goto LAB_1414c2ce0;
        }
        uVar18 = (ulonglong)(bVar3 & 0xf) + 4;
        if (pbVar2 + -0x40 <= pbVar14 + uVar18) goto LAB_1414c31ab;
        if (pbVar8 < param_2) goto LAB_1414c32d2;
        if (uVar10 < 8) goto LAB_1414c2e1a;
        *(undefined8 *)pbVar14 = *(undefined8 *)pbVar8;
        *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar8 + 8);
        *(undefined2 *)(pbVar14 + 0x10) = *(undefined2 *)(pbVar8 + 0x10);
        puVar11 = _Src;
        pbVar19 = pbVar14 + uVar18;
      } while( true );
    }
    iVar7 = -1;
  }
  return iVar7;
LAB_1414c31ab:
  if (pbVar8 < param_2) {
LAB_1414c32d2:
    return ((int)param_1 - (int)_Src) + -1;
  }
LAB_1414c31b4:
  pbVar9 = pbVar14 + uVar18;
  if (pbVar2 + -0xc < pbVar9) {
    if ((ulonglong)((longlong)pbVar2 - (longlong)pbVar14) <= uVar18) {
      uVar18 = (longlong)pbVar2 - (longlong)pbVar14;
    }
    pbVar9 = pbVar14 + uVar18;
    if (pbVar14 < pbVar8 + uVar18) {
      for (; pbVar14 < pbVar9; pbVar14 = pbVar14 + 1) {
        bVar3 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        *pbVar14 = bVar3;
      }
    }
    else {
      memcpy(pbVar14,pbVar8,uVar18);
    }
    if (pbVar9 == pbVar2) goto LAB_1414c3299;
  }
  else {
    if (uVar10 < 8) {
      pbVar14[0] = 0;
      pbVar14[1] = 0;
      pbVar14[2] = 0;
      pbVar14[3] = 0;
      *pbVar14 = *pbVar8;
      pbVar14[1] = pbVar8[1];
      pbVar14[2] = pbVar8[2];
      pbVar14[3] = pbVar8[3];
      uVar17 = inc32table[uVar10];
      *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar8 + uVar17);
      pbVar19 = pbVar8 + uVar17 + -(longlong)dec64table[uVar10];
    }
    else {
      pbVar19 = pbVar8 + 8;
      *(undefined8 *)pbVar14 = *(undefined8 *)pbVar8;
    }
    *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)pbVar19;
    if (0x10 < uVar18) {
      pbVar8 = pbVar14 + 0x10;
      do {
        *(undefined8 *)pbVar8 =
             *(undefined8 *)(pbVar8 + (longlong)(pbVar19 + (8 - (longlong)(pbVar14 + 0x10))));
        pbVar8 = pbVar8 + 8;
      } while (pbVar8 < pbVar9);
    }
  }
LAB_1414c2fb6:
  bVar3 = (byte)*_Src;
  _Src = (ushort *)((longlong)_Src + 1);
  pbVar19 = pbVar9;
  while( true ) {
    uVar10 = (ulonglong)(bVar3 >> 4);
    if (uVar10 == 0xf) break;
    if (pbVar16 + -0x10 <= _Src || pbVar2 + -0x20 < pbVar19) goto LAB_1414c30ad;
    uVar5 = *(undefined8 *)(_Src + 4);
    puVar11 = (ushort *)((longlong)_Src + uVar10);
    uVar18 = (ulonglong)(bVar3 & 0xf);
    *(undefined8 *)pbVar19 = *(undefined8 *)_Src;
    *(undefined8 *)(pbVar19 + 8) = uVar5;
    pbVar9 = pbVar19 + uVar10;
    uVar10 = (ulonglong)*puVar11;
    pbVar8 = pbVar9 + -uVar10;
    _Src = puVar11 + 1;
    if (uVar18 == 0xf) goto LAB_1414c3161;
    if ((uVar10 < 8) || (pbVar8 < param_2)) goto LAB_1414c31a0;
    *(undefined8 *)pbVar9 = *(undefined8 *)pbVar8;
    *(undefined8 *)(pbVar9 + 8) = *(undefined8 *)(pbVar8 + 8);
    *(undefined2 *)(pbVar9 + 0x10) = *(undefined2 *)(pbVar8 + 0x10);
    pbVar19 = pbVar9 + uVar18 + 4;
    bVar3 = (byte)*_Src;
    _Src = (ushort *)((longlong)puVar11 + 3);
  }
  uVar10 = uVar12;
  if (pbVar16 + -0xf <= _Src) goto LAB_1414c32d2;
  do {
    uVar6 = *_Src;
    _Src = (ushort *)((longlong)_Src + 1);
    uVar10 = uVar10 + (byte)uVar6;
    if (pbVar16 + -0xf < _Src) goto LAB_1414c32d2;
  } while ((byte)uVar6 == 0xff);
  if (((uVar10 == 0xffffffffffffffff) || (uVar10 = uVar10 + 0xf, pbVar19 + uVar10 < pbVar19)) ||
     ((ushort *)(uVar10 + (longlong)_Src) < _Src)) goto LAB_1414c32d2;
LAB_1414c30ad:
  pbVar9 = pbVar19 + uVar10;
  uVar17 = (uint)bVar3;
LAB_1414c30b1:
  if ((pbVar2 + -0xc < pbVar9) ||
     (puVar11 = (ushort *)(uVar10 + (longlong)_Src), pbVar16 + -8 < puVar11)) {
    pbVar14 = pbVar9;
    if (pbVar16 < (byte *)(uVar10 + (longlong)_Src)) {
      uVar10 = (longlong)pbVar16 - (longlong)_Src;
      pbVar14 = pbVar19 + uVar10;
    }
    _Size = (longlong)pbVar2 - (longlong)pbVar19;
    if (pbVar14 <= pbVar2) {
      _Size = uVar10;
    }
    memmove(pbVar19,_Src,_Size);
    puVar11 = (ushort *)((longlong)_Src + _Size);
    pbVar9 = pbVar19 + _Size;
    pbVar19 = pbVar2;
    if (pbVar14 <= pbVar2) {
      pbVar19 = pbVar14;
    }
    if ((pbVar19 == pbVar2) || (pbVar16 + -2 <= puVar11)) {
LAB_1414c3299:
      local_60 = (int)param_2;
      return (int)pbVar9 - local_60;
    }
  }
  else {
    lVar13 = (longlong)_Src - (longlong)pbVar19;
    do {
      *(undefined8 *)pbVar19 = *(undefined8 *)(pbVar19 + lVar13);
      pbVar19 = pbVar19 + 8;
    } while (pbVar19 < pbVar9);
  }
  uVar10 = (ulonglong)*puVar11;
  pbVar8 = pbVar9 + -uVar10;
  _Src = puVar11 + 1;
  uVar18 = (ulonglong)(uVar17 & 0xf);
  if (uVar18 == 0xf) {
LAB_1414c3161:
    uVar15 = uVar12;
    do {
      uVar6 = *_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      uVar15 = uVar15 + (byte)uVar6;
      if (pbVar16 + -4 < _Src) goto LAB_1414c32d2;
    } while ((byte)uVar6 == 0xff);
    if ((uVar15 == 0xffffffffffffffff) || (uVar18 = uVar18 + uVar15, pbVar9 + uVar18 < pbVar9))
    goto LAB_1414c32d2;
  }
LAB_1414c31a0:
  uVar18 = uVar18 + 4;
  pbVar14 = pbVar9;
  goto LAB_1414c31ab;
}

// LZ4_decompress_safe_partial_forceExtDict @ 1414c32f0

int __cdecl
LZ4_decompress_safe_partial_forceExtDict
          (char *param_1,char *param_2,int param_3,int param_4,int param_5,void *param_6,
          ulong64 param_7)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  ushort *_Src;
  ushort *puVar11;
  ulonglong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte local_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  
  if (param_4 < param_5) {
    param_5 = param_4;
  }
  if ((param_1 == (char *)0x0) || (param_5 < 0)) {
    return -1;
  }
  pbVar2 = (byte *)(param_1 + param_3);
  pbVar3 = (byte *)(param_2 + param_5);
  lVar10 = 0;
  if (param_6 != (void *)0x0) {
    lVar10 = param_7 + (longlong)param_6;
  }
  if (param_5 == 0) {
    iVar9 = 0;
  }
  else {
    if (param_3 != 0) {
      puVar11 = (ushort *)param_1;
      _Src = (ushort *)param_1;
      pbVar13 = (byte *)param_2;
      pbVar16 = (byte *)param_2;
      if ((longlong)param_5 < 0x40) goto LAB_1414c37d2;
LAB_1414c33c0:
      while( true ) {
        lVar18 = 0;
        bVar4 = (byte)*puVar11;
        _Src = (ushort *)((longlong)puVar11 + 1);
        uVar17 = (ulonglong)(bVar4 >> 4);
        if (uVar17 == 0xf) {
          if (pbVar2 + -0xf <= _Src) goto LAB_1414c3bc9;
          do {
            uVar8 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            lVar18 = lVar18 + (ulonglong)(byte)uVar8;
            if (pbVar2 + -0xf < _Src) goto LAB_1414c3bc9;
          } while ((byte)uVar8 == 0xff);
          if (lVar18 == -1) goto LAB_1414c3bc9;
          uVar17 = lVar18 + 0xf;
          pbVar14 = pbVar13 + uVar17;
          if ((pbVar14 < pbVar13) || (puVar11 = (ushort *)(uVar17 + (longlong)_Src), puVar11 < _Src)
             ) goto LAB_1414c3bc9;
          pbVar16 = pbVar14;
          if (pbVar3 + -0x20 < pbVar14) goto LAB_1414c38da;
          if (pbVar2 + -0x20 < puVar11) goto LAB_1414c38da;
          lVar18 = (longlong)pbVar13 - (longlong)_Src;
          do {
            uVar7 = *(undefined8 *)(_Src + 4);
            puVar1 = _Src + 0x10;
            *(undefined8 *)((longlong)_Src + lVar18) = *(undefined8 *)_Src;
            *(undefined8 *)((byte *)((longlong)_Src + lVar18) + 8) = uVar7;
            uVar7 = *(undefined8 *)(_Src + 0xc);
            pbVar13 = (byte *)((longlong)_Src + lVar18 + 0x10);
            *(undefined8 *)pbVar13 = *(undefined8 *)(_Src + 8);
            *(undefined8 *)(pbVar13 + 8) = uVar7;
            _Src = puVar1;
          } while ((byte *)((longlong)puVar1 + lVar18) < pbVar14);
        }
        else {
          pbVar14 = pbVar13 + uVar17;
          pbVar16 = pbVar14;
          if (pbVar2 + -0x11 < _Src) goto LAB_1414c38da;
          uVar7 = *(undefined8 *)((longlong)puVar11 + 9);
          puVar11 = (ushort *)((longlong)_Src + uVar17);
          *(undefined8 *)pbVar13 = *(undefined8 *)_Src;
          *(undefined8 *)(pbVar13 + 8) = uVar7;
        }
        uVar17 = (ulonglong)*puVar11;
        pbVar15 = pbVar14 + -uVar17;
        _Src = puVar11 + 1;
        if ((ulonglong)(bVar4 & 0xf) == 0xf) break;
        uVar12 = (ulonglong)(bVar4 & 0xf) + 4;
        if (pbVar3 + -0x40 <= pbVar14 + uVar12) goto LAB_1414c39d1;
        if ((pbVar15 < param_2) || (uVar17 < 8)) goto LAB_1414c350a;
        *(undefined8 *)pbVar14 = *(undefined8 *)pbVar15;
        *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar15 + 8);
        *(undefined2 *)(pbVar14 + 0x10) = *(undefined2 *)(pbVar15 + 0x10);
        puVar11 = _Src;
        pbVar13 = pbVar14 + uVar12;
      }
      lVar18 = 0;
      do {
        uVar8 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        lVar18 = lVar18 + (ulonglong)(byte)uVar8;
        if (pbVar2 + -4 < _Src) goto LAB_1414c3bc9;
      } while ((byte)uVar8 == 0xff);
      if (lVar18 == -1) goto LAB_1414c3bc9;
      uVar12 = lVar18 + 0x13;
      if ((pbVar14 + uVar12 < pbVar14) || ((param_7 < 0x10000 && (pbVar15 + param_7 < param_2))))
      goto LAB_1414c3bc9;
      if (pbVar14 + uVar12 < pbVar3 + -0x40) {
LAB_1414c350a:
        if ((param_7 < 0x10000) && (pbVar15 + param_7 < param_2)) goto LAB_1414c3bc9;
        pbVar13 = pbVar14 + uVar12;
        puVar11 = _Src;
        if (pbVar15 < param_2) {
          if ((pbVar3 + -5 < pbVar13) &&
             ((ulonglong)((longlong)pbVar3 - (longlong)pbVar14) <= uVar12)) {
            uVar12 = (longlong)pbVar3 - (longlong)pbVar14;
          }
          uVar17 = (longlong)param_2 - (longlong)pbVar15;
          if (uVar17 < uVar12) {
            uVar12 = uVar12 - uVar17;
            memcpy(pbVar14,(void *)(lVar10 - uVar17),uVar17);
            pbVar13 = pbVar14 + uVar17;
            if ((ulonglong)((longlong)pbVar13 - (longlong)param_2) < uVar12) {
              pbVar16 = pbVar13 + uVar12;
              if (pbVar13 < pbVar16) {
                lVar18 = (longlong)param_2 - (longlong)pbVar13;
                do {
                  *pbVar13 = pbVar13[lVar18];
                  pbVar13 = pbVar13 + 1;
                } while (pbVar13 < pbVar16);
              }
            }
            else {
              memcpy(pbVar13,param_2,uVar12);
              pbVar13 = pbVar13 + uVar12;
            }
          }
          else {
            memmove(pbVar14,pbVar15 + (lVar10 - (longlong)param_2),uVar12);
            pbVar13 = pbVar14 + uVar12;
          }
          goto LAB_1414c33c0;
        }
        if (uVar17 < 0x10) {
          if (uVar17 == 1) {
            bStack_74 = *pbVar15;
            bStack_73 = bStack_74;
            bStack_72 = bStack_74;
            bStack_71 = bStack_74;
          }
          else if (uVar17 == 2) {
            local_78 = (byte)*(undefined2 *)pbVar15;
            bStack_77 = (byte)((ushort)*(undefined2 *)pbVar15 >> 8);
            bStack_72 = local_78;
            bStack_71 = bStack_77;
            bStack_74 = local_78;
            bStack_73 = bStack_77;
          }
          else {
            if (uVar17 != 4) {
              if (uVar17 < 8) {
                pbVar14[0] = 0;
                pbVar14[1] = 0;
                pbVar14[2] = 0;
                pbVar14[3] = 0;
                *pbVar14 = *pbVar15;
                pbVar14[1] = pbVar15[1];
                pbVar14[2] = pbVar15[2];
                pbVar14[3] = pbVar15[3];
                uVar5 = inc32table[uVar17];
                *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar15 + uVar5);
                pbVar16 = pbVar15 + uVar5 + -(longlong)dec64table[uVar17];
              }
              else {
                pbVar16 = pbVar15 + 8;
                *(undefined8 *)pbVar14 = *(undefined8 *)pbVar15;
              }
              pbVar14 = pbVar14 + 8;
              lVar18 = (longlong)pbVar16 - (longlong)pbVar14;
              do {
                *(undefined8 *)pbVar14 = *(undefined8 *)(pbVar14 + lVar18);
                pbVar14 = pbVar14 + 8;
              } while (pbVar14 < pbVar13);
              goto LAB_1414c33c0;
            }
            uVar6 = *(undefined4 *)pbVar15;
            local_78 = (byte)uVar6;
            bStack_77 = (byte)((uint)uVar6 >> 8);
            bStack_76 = (byte)((uint)uVar6 >> 0x10);
            bStack_75 = (byte)((uint)uVar6 >> 0x18);
            bStack_74 = local_78;
            bStack_73 = bStack_77;
            bStack_72 = bStack_76;
            bStack_71 = bStack_75;
          }
          uVar7 = CONCAT17(bStack_71,
                           CONCAT16(bStack_72,
                                    CONCAT15(bStack_73,
                                             CONCAT14(bStack_74,
                                                      CONCAT13(bStack_71,
                                                               CONCAT12(bStack_72,
                                                                        CONCAT11(bStack_73,bStack_74
                                                                                )))))));
          *(undefined8 *)pbVar14 = uVar7;
          pbVar14 = pbVar14 + 8;
          uVar17 = (ulonglong)(pbVar13 + (7 - (longlong)pbVar14)) >> 3;
          if (pbVar13 < pbVar14) {
            uVar17 = 0;
          }
          if (uVar17 != 0) {
            for (; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined8 *)pbVar14 = uVar7;
              pbVar14 = pbVar14 + 8;
            }
          }
          goto LAB_1414c33c0;
        }
        lVar18 = (longlong)pbVar14 - (longlong)pbVar15;
        do {
          uVar7 = *(undefined8 *)(pbVar15 + 8);
          pbVar16 = pbVar15 + 0x20;
          *(undefined8 *)(pbVar15 + lVar18) = *(undefined8 *)pbVar15;
          *(undefined8 *)(pbVar15 + lVar18 + 8) = uVar7;
          uVar7 = *(undefined8 *)(pbVar15 + 0x18);
          *(undefined8 *)(pbVar15 + lVar18 + 0x10) = *(undefined8 *)(pbVar15 + 0x10);
          *(undefined8 *)(pbVar15 + lVar18 + 0x10 + 8) = uVar7;
          pbVar15 = pbVar16;
        } while (pbVar16 + lVar18 < pbVar13);
        goto LAB_1414c33c0;
      }
LAB_1414c39d1:
      do {
        if ((param_7 < 0x10000) && (pbVar15 + param_7 < param_2)) goto LAB_1414c3bc9;
        if (pbVar15 < param_2) {
          if ((pbVar3 + -5 < pbVar14 + uVar12) &&
             ((ulonglong)((longlong)pbVar3 - (longlong)pbVar14) <= uVar12)) {
            uVar12 = (longlong)pbVar3 - (longlong)pbVar14;
          }
          uVar17 = (longlong)param_2 - (longlong)pbVar15;
          if (uVar17 < uVar12) {
            uVar12 = uVar12 - uVar17;
            memcpy(pbVar14,(void *)(lVar10 - uVar17),uVar17);
            pbVar16 = pbVar14 + uVar17;
            if ((ulonglong)((longlong)pbVar16 - (longlong)param_2) < uVar12) {
              pbVar14 = pbVar16 + uVar12;
              pbVar13 = (byte *)param_2;
              for (; pbVar16 < pbVar14; pbVar16 = pbVar16 + 1) {
                bVar4 = *pbVar13;
                pbVar13 = pbVar13 + 1;
                *pbVar16 = bVar4;
              }
            }
            else {
              memcpy(pbVar16,param_2,uVar12);
              pbVar16 = pbVar16 + uVar12;
            }
          }
          else {
            memmove(pbVar14,pbVar15 + (lVar10 - (longlong)param_2),uVar12);
            pbVar16 = pbVar14 + uVar12;
          }
        }
        else {
          pbVar16 = pbVar14 + uVar12;
          if (pbVar3 + -0xc < pbVar16) {
            if ((ulonglong)((longlong)pbVar3 - (longlong)pbVar14) <= uVar12) {
              uVar12 = (longlong)pbVar3 - (longlong)pbVar14;
            }
            pbVar16 = pbVar14 + uVar12;
            if (pbVar14 < pbVar15 + uVar12) {
              for (; pbVar14 < pbVar16; pbVar14 = pbVar14 + 1) {
                bVar4 = *pbVar15;
                pbVar15 = pbVar15 + 1;
                *pbVar14 = bVar4;
              }
            }
            else {
              memcpy(pbVar14,pbVar15,uVar12);
            }
            if (pbVar16 == pbVar3) goto LAB_1414c3b0e;
          }
          else {
            if (uVar17 < 8) {
              pbVar14[0] = 0;
              pbVar14[1] = 0;
              pbVar14[2] = 0;
              pbVar14[3] = 0;
              *pbVar14 = *pbVar15;
              pbVar14[1] = pbVar15[1];
              pbVar14[2] = pbVar15[2];
              pbVar14[3] = pbVar15[3];
              uVar5 = inc32table[uVar17];
              *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar15 + uVar5);
              pbVar13 = pbVar15 + uVar5 + -(longlong)dec64table[uVar17];
            }
            else {
              pbVar13 = pbVar15 + 8;
              *(undefined8 *)pbVar14 = *(undefined8 *)pbVar15;
            }
            *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)pbVar13;
            if (0x10 < uVar12) {
              pbVar15 = pbVar14 + 0x10;
              do {
                *(undefined8 *)pbVar15 =
                     *(undefined8 *)
                      (pbVar15 + (longlong)(pbVar13 + (8 - (longlong)(pbVar14 + 0x10))));
                pbVar15 = pbVar15 + 8;
              } while (pbVar15 < pbVar16);
            }
          }
        }
LAB_1414c37d2:
        lVar18 = 0;
        uVar8 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        bVar4 = (byte)uVar8;
        pbVar13 = pbVar16;
        while (uVar17 = (ulonglong)(bVar4 >> 4), uVar17 != 0xf) {
          if (pbVar2 + -0x10 <= _Src || pbVar3 + -0x20 < pbVar13) goto LAB_1414c38d0;
          uVar7 = *(undefined8 *)(_Src + 4);
          puVar11 = (ushort *)((longlong)_Src + uVar17);
          uVar12 = (ulonglong)(bVar4 & 0xf);
          *(undefined8 *)pbVar13 = *(undefined8 *)_Src;
          *(undefined8 *)(pbVar13 + 8) = uVar7;
          pbVar16 = pbVar13 + uVar17;
          uVar17 = (ulonglong)*puVar11;
          pbVar15 = pbVar16 + -uVar17;
          _Src = puVar11 + 1;
          if (uVar12 == 0xf) goto LAB_1414c3987;
          if ((uVar17 < 8) || (pbVar15 < param_2)) goto LAB_1414c39c0;
          *(undefined8 *)pbVar16 = *(undefined8 *)pbVar15;
          *(undefined8 *)(pbVar16 + 8) = *(undefined8 *)(pbVar15 + 8);
          *(undefined2 *)(pbVar16 + 0x10) = *(undefined2 *)(pbVar15 + 0x10);
          pbVar13 = pbVar16 + uVar12 + 4;
          uVar8 = *_Src;
          _Src = (ushort *)((longlong)puVar11 + 3);
          bVar4 = (byte)uVar8;
        }
        if (pbVar2 + -0xf <= _Src) {
LAB_1414c3bc9:
          return ((int)param_1 - (int)_Src) + -1;
        }
        do {
          uVar8 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          lVar18 = lVar18 + (ulonglong)(byte)uVar8;
          if (pbVar2 + -0xf < _Src) goto LAB_1414c3bc9;
        } while ((byte)uVar8 == 0xff);
        if (((lVar18 == -1) || (uVar17 = lVar18 + 0xf, pbVar13 + uVar17 < pbVar13)) ||
           ((ushort *)(uVar17 + (longlong)_Src) < _Src)) goto LAB_1414c3bc9;
LAB_1414c38d0:
        pbVar16 = pbVar13 + uVar17;
LAB_1414c38da:
        if ((pbVar3 + -0xc < pbVar16) ||
           (puVar11 = (ushort *)(uVar17 + (longlong)_Src), pbVar2 + -8 < puVar11)) {
          pbVar14 = pbVar16;
          if (pbVar2 < (byte *)(uVar17 + (longlong)_Src)) {
            uVar17 = (longlong)pbVar2 - (longlong)_Src;
            pbVar14 = pbVar13 + uVar17;
          }
          if (pbVar3 < pbVar14) {
            uVar17 = (longlong)pbVar3 - (longlong)pbVar13;
          }
          memmove(pbVar13,_Src,uVar17);
          puVar11 = (ushort *)((longlong)_Src + uVar17);
          pbVar16 = pbVar13 + uVar17;
          pbVar13 = pbVar3;
          if (pbVar14 <= pbVar3) {
            pbVar13 = pbVar14;
          }
          if ((pbVar13 == pbVar3) || (pbVar2 + -2 <= puVar11)) {
LAB_1414c3b0e:
            return (int)pbVar16 - (int)param_2;
          }
        }
        else {
          lVar18 = (longlong)_Src - (longlong)pbVar13;
          do {
            *(undefined8 *)pbVar13 = *(undefined8 *)(pbVar13 + lVar18);
            pbVar13 = pbVar13 + 8;
          } while (pbVar13 < pbVar16);
        }
        uVar17 = (ulonglong)*puVar11;
        pbVar15 = pbVar16 + -uVar17;
        _Src = puVar11 + 1;
        uVar12 = (ulonglong)(bVar4 & 0xf);
        if (uVar12 == 0xf) {
          uVar12 = 0xf;
LAB_1414c3987:
          lVar18 = 0;
          do {
            uVar8 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            lVar18 = lVar18 + (ulonglong)(byte)uVar8;
            if (pbVar2 + -4 < _Src) goto LAB_1414c3bc9;
          } while ((byte)uVar8 == 0xff);
          if ((lVar18 == -1) || (uVar12 = uVar12 + lVar18, pbVar16 + uVar12 < pbVar16))
          goto LAB_1414c3bc9;
        }
LAB_1414c39c0:
        uVar12 = uVar12 + 4;
        pbVar14 = pbVar16;
      } while( true );
    }
    iVar9 = -1;
  }
  return iVar9;
}

// LZ4_decompress_safe_partial_usingDict @ 1414c3bf0

int __cdecl
LZ4_decompress_safe_partial_usingDict
          (char *param_1,char *param_2,int param_3,int param_4,int param_5,char *param_6,int param_7
          )

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = (ulong64)param_7;
  if (param_7 == 0) {
    iVar1 = LZ4_decompress_safe_partial(param_1,param_2,param_3,param_4,param_5);
    return iVar1;
  }
  if (param_6 + uVar2 == param_2) {
    if (0xfffe < param_7) {
      iVar1 = LZ4_decompress_safe_partial_withPrefix64k(param_1,param_2,param_3,param_4,param_5);
      return iVar1;
    }
    iVar1 = LZ4_decompress_safe_partial_withSmallPrefix
                      (param_1,param_2,param_3,param_4,param_5,uVar2);
    return iVar1;
  }
  iVar1 = LZ4_decompress_safe_partial_forceExtDict
                    (param_1,param_2,param_3,param_4,param_5,param_6,uVar2);
  return iVar1;
}

// LZ4_decompress_safe_usingDict @ 1414c3c80

int __cdecl
LZ4_decompress_safe_usingDict
          (char *param_1,char *param_2,int param_3,int param_4,char *param_5,int param_6)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = (ulong64)param_6;
  if (param_6 == 0) {
    iVar1 = LZ4_decompress_safe(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (param_5 + uVar2 == param_2) {
    if (0xfffe < param_6) {
      iVar1 = LZ4_decompress_safe_withPrefix64k(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = LZ4_decompress_safe_withSmallPrefix(param_1,param_2,param_3,param_4,uVar2);
    return iVar1;
  }
  iVar1 = LZ4_decompress_safe_forceExtDict(param_1,param_2,param_3,param_4,param_5,uVar2);
  return iVar1;
}

// LZ4_freeStream @ 1414c3d00

int __cdecl LZ4_freeStream(LZ4_stream_u *param_1)

{
  if (param_1 != (LZ4_stream_u *)0x0) {
    free(param_1);
  }
  return 0;
}

// LZ4_freeStreamDecode @ 1414c3d20

int __cdecl LZ4_freeStreamDecode(LZ4_streamDecode_u *param_1)

{
  if (param_1 != (LZ4_streamDecode_u *)0x0) {
    free(param_1);
  }
  return 0;
}

// LZ4_initStream @ 1414c3d40

LZ4_stream_u * __cdecl LZ4_initStream(void *param_1,ulong64 param_2)

{
  if (((param_1 != (void *)0x0) && (0x401f < param_2)) && (((ulonglong)param_1 & 7) == 0)) {
    memset(param_1,0,0x4020);
    return param_1;
  }
  return (LZ4_stream_u *)0x0;
}

// LZ4_loadDict @ 1414c3d80

int __cdecl LZ4_loadDict(LZ4_stream_u *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = param_2 + param_3;
  memset(param_1,0,0x4020);
  (param_1->internal_donotuse).currentOffset = 0x10000;
  if (param_3 < 8) {
    uVar2 = 0;
  }
  else {
    (param_1->internal_donotuse).tableType = 2;
    if (0x10000 < (longlong)param_3) {
      param_2 = pcVar1 + -0x10000;
    }
    *(char **)(param_1->minStateSize + 0x4000) = param_2;
    (param_1->internal_donotuse).dictSize = (int)pcVar1 - (int)param_2;
    for (; param_2 <= pcVar1 + -8; param_2 = (char *)((longlong)param_2 + 3)) {
      *(int *)((longlong)param_1 +
              ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
           (int)param_2 - (int)(pcVar1 + -0x10000);
    }
    uVar2 = (param_1->internal_donotuse).dictSize;
  }
  return uVar2;
}

// LZ4_resetStream @ 1414c3e60

void __cdecl LZ4_resetStream(LZ4_stream_u *param_1)

{
  memset(param_1,0,0x4020);
  return;
}

// LZ4_resetStream_fast @ 1414c3e80

void __cdecl LZ4_resetStream_fast(LZ4_stream_u *param_1)

{
  if (((param_1->internal_donotuse).tableType != 0) &&
     (((param_1->internal_donotuse).tableType != 2 ||
      (0x40000000 < (param_1->internal_donotuse).currentOffset)))) {
    memset(param_1,0,0x4000);
    *(char *)((longlong)param_1 + 0x4010) = '\0';
    *(char *)((longlong)param_1 + 0x4011) = '\0';
    *(char *)((longlong)param_1 + 0x4012) = '\0';
    *(char *)((longlong)param_1 + 0x4013) = '\0';
    *(char *)((longlong)param_1 + 0x4014) = '\0';
    *(char *)((longlong)param_1 + 0x4015) = '\0';
    *(char *)((longlong)param_1 + 0x4016) = '\0';
    *(char *)((longlong)param_1 + 0x4017) = '\0';
  }
  if ((param_1->internal_donotuse).currentOffset != 0) {
    (param_1->internal_donotuse).currentOffset =
         (param_1->internal_donotuse).currentOffset + 0x10000;
  }
  (param_1->internal_donotuse).dictCtx = (LZ4_stream_t_internal *)0x0;
  (param_1->internal_donotuse).dictionary = (uchar *)0x0;
  (param_1->internal_donotuse).dictSize = 0;
  return;
}

// LZ4_saveDict @ 1414c3f10

int __cdecl LZ4_saveDict(LZ4_stream_u *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1->internal_donotuse).dictSize;
  uVar2 = 0x10000;
  if ((uint)param_3 < 0x10001) {
    uVar2 = param_3;
  }
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  if (0 < (int)uVar2) {
    memmove(param_2,(param_1->internal_donotuse).dictionary +
                    ((ulonglong)uVar1 - (longlong)(int)uVar2),(longlong)(int)uVar2);
  }
  (param_1->internal_donotuse).dictionary = (uchar *)param_2;
  (param_1->internal_donotuse).dictSize = uVar2;
  return uVar2;
}

// LZ4_setStreamDecode @ 1414c3f80

int __cdecl LZ4_setStreamDecode(LZ4_streamDecode_u *param_1,char *param_2,int param_3)

{
  uchar *puVar1;
  
  (param_1->internal_donotuse).prefixSize = (longlong)param_3;
  puVar1 = (uchar *)(param_2 + param_3);
  if (param_3 == 0) {
    puVar1 = (uchar *)param_2;
  }
  (param_1->internal_donotuse).prefixEnd = puVar1;
  (param_1->internal_donotuse).externalDict = (uchar *)0x0;
  (param_1->internal_donotuse).extDictSize = 0;
  return 1;
}

// LZ4_sizeofState @ 1414c3fb0

int __cdecl LZ4_sizeofState(void)

{
  return 0x4020;
}

// LZ4_versionNumber @ 1414c3fc0

int __cdecl LZ4_versionNumber(void)

{
  return 0x2a98;
}

// LZ4_versionString @ 1414c3fd0

char * __cdecl LZ4_versionString(void)

{
  return "1.9.4";
}

// NewTasks'' @ 1503372b0

void __cdecl `dynamic_atexit_destructor_for_'FTaskGraphCompatibilityImplementation::NewTasks__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x58);
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

// Null'' @ 1503372e0

void __cdecl `dynamic_atexit_destructor_for_'FCompressedBuffer::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer(&FCompressedBuffer::Null.CompressedData);
  return;
}

// PendingDeleteTlsValues'' @ 150337300

void __cdecl
`dynamic_atexit_destructor_for_'LowLevelTasks::FSchedulerTls::FImpl::PendingDeleteTlsValues__(void)

{
  atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
  aVar1;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar2;
  
  TVar2.Head = LowLevelTasks::FSchedulerTls::FImpl::PendingDeleteTlsValues.Head;
  if (LowLevelTasks::FSchedulerTls::FImpl::PendingDeleteTlsValues.Head !=
      (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
       )0x0) {
    LOCK();
    LowLevelTasks::FSchedulerTls::FImpl::PendingDeleteTlsValues.Head =
         (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
          )0x0;
    UNLOCK();
    while (TVar2.Head !=
           (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
            )0x0) {
                    /* WARNING: Load size is inaccurate */
      aVar1 = *TVar2.Head;
      AnsiFree((void *)TVar2.Head);
      TVar2.Head = aVar1;
    }
  }
  return;
}

// PendingInsertTlsValues'' @ 150337350

void __cdecl
`dynamic_atexit_destructor_for_'LowLevelTasks::FSchedulerTls::FImpl::PendingInsertTlsValues__(void)

{
  atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
  aVar1;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar2;
  
  TVar2.Head = LowLevelTasks::FSchedulerTls::FImpl::PendingInsertTlsValues.Head;
  if (LowLevelTasks::FSchedulerTls::FImpl::PendingInsertTlsValues.Head !=
      (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
       )0x0) {
    LOCK();
    LowLevelTasks::FSchedulerTls::FImpl::PendingInsertTlsValues.Head =
         (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
          )0x0;
    UNLOCK();
    while (TVar2.Head !=
           (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
            )0x0) {
                    /* WARNING: Load size is inaccurate */
      aVar1 = *TVar2.Head;
      AnsiFree((void *)TVar2.Head);
      TVar2.Head = aVar1;
    }
  }
  return;
}

// Singleton'' @ 1503373a0

void __cdecl `dynamic_atexit_destructor_for_'LowLevelTasks::FScheduler::Singleton__(void)

{
  TUniquePtr<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,TDefaultDelete<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue>_>
  TVar1;
  longlong *plVar2;
  
  LowLevelTasks::FScheduler::StopWorkers(&LowLevelTasks::FScheduler::Singleton,true);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             LowLevelTasks::FScheduler::Singleton.OversubscriptionLimitReachedEvent._40_8_,
             LowLevelTasks::FScheduler::Singleton.OversubscriptionLimitReachedEvent._48_4_);
  if (LowLevelTasks::FScheduler::Singleton.OversubscriptionLimitReachedEvent._40_8_ != 0) {
    FMemory::Free((void *)LowLevelTasks::FScheduler::Singleton.OversubscriptionLimitReachedEvent.
                          _40_8_);
  }
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &LowLevelTasks::FScheduler::Singleton.OversubscriptionLimitReachedEvent);
  TVar1 = LowLevelTasks::FScheduler::Singleton.GameThreadLocalQueue;
  if (LowLevelTasks::FScheduler::Singleton.GameThreadLocalQueue.Ptr != (TLocalQueue *)0x0) {
    LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::~TLocalQueue
              (LowLevelTasks::FScheduler::Singleton.GameThreadLocalQueue.Ptr);
    ::operator_delete(TVar1.Ptr,0xa0580,0x80);
  }
  DestructItems<LowLevelTasks::Private::FWaitEvent,int>
            ((FWaitEvent *)LowLevelTasks::FScheduler::Singleton.WorkerEvents.AllocatorInstance.Data,
             LowLevelTasks::FScheduler::Singleton.WorkerEvents.ArrayNum);
  if (LowLevelTasks::FScheduler::Singleton.WorkerEvents.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(LowLevelTasks::FScheduler::Singleton.WorkerEvents.AllocatorInstance.Data);
  }
  DestructItems<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,int>
            ((TLocalQueue *)
             LowLevelTasks::FScheduler::Singleton.WorkerLocalQueues.AllocatorInstance.Data,
             LowLevelTasks::FScheduler::Singleton.WorkerLocalQueues.ArrayNum);
  if (LowLevelTasks::FScheduler::Singleton.WorkerLocalQueues.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(LowLevelTasks::FScheduler::Singleton.WorkerLocalQueues.AllocatorInstance.Data);
  }
  operator_delete__(LowLevelTasks::FScheduler::Singleton.WorkerThreads.Ptr);
  DeleteCriticalSection((LPCRITICAL_SECTION)&LowLevelTasks::FScheduler::Singleton.WorkerThreadsCS);
  LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::~TLocalQueueRegistry<1024,1024>
            (&LowLevelTasks::FScheduler::Singleton.QueueRegistry);
  if (LowLevelTasks::FScheduler::Singleton.WaitingQueue[1].CreateThread._0_8_ != 0) {
    plVar2 = (longlong *)
             &LowLevelTasks::FScheduler::Singleton.WaitingQueue[1].CreateThread.field_0x10;
    if (LowLevelTasks::FScheduler::Singleton.WaitingQueue[1].CreateThread._40_8_ != 0) {
      plVar2 = (longlong *)LowLevelTasks::FScheduler::Singleton.WaitingQueue[1].CreateThread._40_8_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (LowLevelTasks::FScheduler::Singleton.WaitingQueue[0].CreateThread._0_8_ != 0) {
    plVar2 = (longlong *)
             &LowLevelTasks::FScheduler::Singleton.WaitingQueue[0].CreateThread.field_0x10;
    if (LowLevelTasks::FScheduler::Singleton.WaitingQueue[0].CreateThread._40_8_ != 0) {
      plVar2 = (longlong *)LowLevelTasks::FScheduler::Singleton.WaitingQueue[0].CreateThread._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x0001503374c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// TlsValuesHolder'' @ 1503374e0

/* WARNING: Removing unreachable block (ram,0x000150337529) */

void __cdecl `dynamic_atexit_destructor_for_'LowLevelTasks::FSchedulerTls::TlsValuesHolder__(void)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar3;
  bool bVar4;
  atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
  aVar5;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar6;
  atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
  *paVar7;
  
  paVar7 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
            *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x50
              );
  if ((*paVar7 !=
       (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
        )0x0) && (bVar4 = FGenericPlatformMallocCrash::IsActive(), !bVar4)) {
    if (((byte)LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State & 1) == 0) {
      LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State =
           LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State | 1;
      LOCK();
      UNLOCK();
      LowLevelTasks::FSchedulerTls::FImpl::ProcessPendingTlsValuesNoLock();
      aVar5 = *paVar7;
      if (*(longlong *)aVar5 != 0) {
        *(longlong *)(*(longlong *)aVar5 + 8) = *(longlong *)((longlong)aVar5 + 8);
      }
      if (*(longlong **)((longlong)aVar5 + 8) != (longlong *)0x0) {
        **(longlong **)((longlong)aVar5 + 8) = *(longlong *)aVar5;
      }
      *(longlong *)aVar5 = 0;
      *(longlong *)((longlong)aVar5 + 8) = 0;
      LOCK();
      aVar2 = LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State + -1;
      UNLOCK();
      bVar1 = (byte)LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State & 2;
      LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&LowLevelTasks::FSchedulerTls::FImpl::ThreadTlsValuesMutex);
      }
      AnsiFree((void *)*paVar7);
      *paVar7 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
                 )0x0;
      return;
    }
    aVar5 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
             )AnsiMalloc(0x10,8);
    *(atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
      *)aVar5 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
                 )0x0;
    *(atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
      *)((longlong)aVar5 + 8) = *paVar7;
    TVar6 = LowLevelTasks::FSchedulerTls::FImpl::PendingDeleteTlsValues;
    do {
      *(atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
        *)aVar5 = TVar6.Head;
      LOCK();
      bVar4 = TVar6.Head != LowLevelTasks::FSchedulerTls::FImpl::PendingDeleteTlsValues.Head;
      TVar3.Head = aVar5;
      if (bVar4) {
        TVar6 = LowLevelTasks::FSchedulerTls::FImpl::PendingDeleteTlsValues;
        TVar3 = LowLevelTasks::FSchedulerTls::FImpl::PendingDeleteTlsValues;
      }
      LowLevelTasks::FSchedulerTls::FImpl::PendingDeleteTlsValues.Head = TVar3.Head;
      UNLOCK();
    } while (bVar4);
    *paVar7 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
               )0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableForkedMultithreading'' @ 1503375f0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableForkedMultithreading__(void)

{
  CVarEnableForkedMultithreading._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableForkedMultithreading);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForkedProcessMaxWorkerThreads'' @ 150337610

void __cdecl _dynamic_atexit_destructor_for__CVarForkedProcessMaxWorkerThreads__(void)

{
  CVarForkedProcessMaxWorkerThreads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForkedProcessMaxWorkerThreads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnoreThreadToDoGatherOn'' @ 150337630

void __cdecl _dynamic_atexit_destructor_for__CVarIgnoreThreadToDoGatherOn__(void)

{
  CVarIgnoreThreadToDoGatherOn._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIgnoreThreadToDoGatherOn);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumForegroundWorkers'' @ 150337650

void __cdecl _dynamic_atexit_destructor_for__CVarNumForegroundWorkers__(void)

{
  CVarNumForegroundWorkers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNumForegroundWorkers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumWorkerThreadsToIgnore'' @ 150337670

void __cdecl _dynamic_atexit_destructor_for__CVarNumWorkerThreadsToIgnore__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNumWorkerThreadsToIgnore);
  return;
}

// `dynamic_atexit_destructor_for_'CVarParallelForBackgroundYieldingTimeout'' @ 150337690

void __cdecl _dynamic_atexit_destructor_for__CVarParallelForBackgroundYieldingTimeout__(void)

{
  CVarParallelForBackgroundYieldingTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarParallelForBackgroundYieldingTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarParallelForDisableOversubscription'' @ 1503376b0

void __cdecl _dynamic_atexit_destructor_for__CVarParallelForDisableOversubscription__(void)

{
  CVarParallelForDisableOversubscription._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarParallelForDisableOversubscription);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrintBroadcastWarnings'' @ 1503376d0

void __cdecl _dynamic_atexit_destructor_for__CVarPrintBroadcastWarnings__(void)

{
  CVarPrintBroadcastWarnings._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrintBroadcastWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTaskDynamicPrioritization'' @ 1503376f0

void __cdecl _dynamic_atexit_destructor_for__CVarTaskDynamicPrioritization__(void)

{
  CVarTaskDynamicPrioritization._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTaskDynamicPrioritization);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTaskDynamicThreadCreation'' @ 150337710

void __cdecl _dynamic_atexit_destructor_for__CVarTaskDynamicThreadCreation__(void)

{
  CVarTaskDynamicThreadCreation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTaskDynamicThreadCreation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTaskOversubscriptionRatio'' @ 150337730

void __cdecl _dynamic_atexit_destructor_for__CVarTaskOversubscriptionRatio__(void)

{
  CVarTaskOversubscriptionRatio._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTaskOversubscriptionRatio);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTestDontCompleteUntilForAlreadyComplete'' @ 150337750

void __cdecl _dynamic_atexit_destructor_for__CVarTestDontCompleteUntilForAlreadyComplete__(void)

{
  CVarTestDontCompleteUntilForAlreadyComplete._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTestDontCompleteUntilForAlreadyComplete);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseBackgroundThreads'' @ 150337770

void __cdecl _dynamic_atexit_destructor_for__CVarUseBackgroundThreads__(void)

{
  CVarUseBackgroundThreads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseBackgroundThreads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseHiPriThreads'' @ 150337790

void __cdecl _dynamic_atexit_destructor_for__CVarUseHiPriThreads__(void)

{
  CVarUseHiPriThreads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseHiPriThreads);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_GIoDispatcherDecompressOnIdle'' @ 1503377b0

void __cdecl _dynamic_atexit_destructor_for__CVar_GIoDispatcherDecompressOnIdle__(void)

{
  CVar_GIoDispatcherDecompressOnIdle._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_GIoDispatcherDecompressOnIdle)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherBufferAlignment'' @ 1503377d0

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherBufferAlignment__(void)

{
  CVar_IoDispatcherBufferAlignment._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IoDispatcherBufferAlignment);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherBufferMemoryMB'' @ 1503377f0

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherBufferMemoryMB__(void)

{
  CVar_IoDispatcherBufferMemoryMB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IoDispatcherBufferMemoryMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherBufferSizeKB'' @ 150337810

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherBufferSizeKB__(void)

{
  CVar_IoDispatcherBufferSizeKB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IoDispatcherBufferSizeKB);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherCacheSizeMB'' @ 150337830

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherCacheSizeMB__(void)

{
  CVar_IoDispatcherCacheSizeMB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IoDispatcherCacheSizeMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherCanDecompressOnStarvation'' @ 150337850

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherCanDecompressOnStarvation__(void)

{
  CVar_IoDispatcherCanDecompressOnStarvation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoDispatcherCanDecompressOnStarvation);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherDecompressionWorkerCount'' @ 150337870

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherDecompressionWorkerCount__(void)

{
  CVar_IoDispatcherDecompressionWorkerCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoDispatcherDecompressionWorkerCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherForceSynchronousScatter'' @ 150337890

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherForceSynchronousScatter__(void)

{
  CVar_IoDispatcherForceSynchronousScatter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoDispatcherForceSynchronousScatter);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherMaintainSortingOnPriorityChange'' @ 1503378b0

void __cdecl
_dynamic_atexit_destructor_for__CVar_IoDispatcherMaintainSortingOnPriorityChange__(void)

{
  CVar_IoDispatcherMaintainSortingOnPriorityChange._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoDispatcherMaintainSortingOnPriorityChange);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherMaxConsecutiveDecompressionJobs'' @ 1503378d0

void __cdecl
_dynamic_atexit_destructor_for__CVar_IoDispatcherMaxConsecutiveDecompressionJobs__(void)

{
  CVar_IoDispatcherMaxConsecutiveDecompressionJobs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoDispatcherMaxConsecutiveDecompressionJobs);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherMaxForwardSeekKB'' @ 1503378f0

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherMaxForwardSeekKB__(void)

{
  CVar_IoDispatcherMaxForwardSeekKB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IoDispatcherMaxForwardSeekKB);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherMaxResolveBatchSize'' @ 150337910

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherMaxResolveBatchSize__(void)

{
  CVar_IoDispatcherMaxResolveBatchSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoDispatcherMaxResolveBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherRequestLatencyCircuitBreakerMS'' @ 150337930

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherRequestLatencyCircuitBreakerMS__(void)

{
  CVar_IoDispatcherRequestLatencyCircuitBreakerMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoDispatcherRequestLatencyCircuitBreakerMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherSortRequestsByOffset'' @ 150337950

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherSortRequestsByOffset__(void)

{
  CVar_IoDispatcherSortRequestsByOffset._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoDispatcherSortRequestsByOffset);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherTocsEnablePerfectHashing'' @ 150337970

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherTocsEnablePerfectHashing__(void)

{
  CVar_IoDispatcherTocsEnablePerfectHashing._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoDispatcherTocsEnablePerfectHashing);
  return;
}

// `dynamic_atexit_destructor_for_'Cleanup'' @ 150337990

void __cdecl
`TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc'::__l12::
_dynamic_atexit_destructor_for__Cleanup__(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)(lVar2 + 0x90);
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x40) = lVar3 + 0x10000;
    puVar4 = *(uint **)(lVar2 + 0x90);
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar4 - ~puVar4[0x12];
    UNLOCK();
    if (uVar1 == ~puVar4[0x12]) {
      MemoryTrace_UnmarkAllocAsHeap(*(ulong64 *)(lVar2 + 0x90),0,0);
      uVar5 = *(undefined8 *)(lVar2 + 0x90);
      if ((*(uint *)(lVar2 + 0x84) & 1) == 0) {
        *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 1;
        __tlregdtor(`TBlockAllocationCache<65536,FAlignedAllocator>::SwapBlock'::__l2::
                    _dynamic_atexit_destructor_for__Tls__);
      }
      lVar3 = *(longlong *)(lVar2 + 0x68);
      *(undefined8 *)(lVar2 + 0x68) = uVar5;
      if (lVar3 != 0) {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
      }
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'Cleanup'' @ 150337a40

void __cdecl
`TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc'::__l12::
_dynamic_atexit_destructor_for__Cleanup__(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)(lVar2 + 0x30);
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x40) = lVar3 + 0x10000;
    puVar4 = *(uint **)(lVar2 + 0x30);
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar4 - ~puVar4[0x12];
    UNLOCK();
    if (uVar1 == ~puVar4[0x12]) {
      MemoryTrace_UnmarkAllocAsHeap(*(ulong64 *)(lVar2 + 0x30),0,0);
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
      if ((*(uint *)(lVar2 + 0x84) & 1) == 0) {
        *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 1;
        __tlregdtor(`TBlockAllocationCache<65536,FAlignedAllocator>::SwapBlock'::__l2::
                    _dynamic_atexit_destructor_for__Tls__);
      }
      lVar3 = *(longlong *)(lVar2 + 0x68);
      *(undefined8 *)(lVar2 + 0x68) = uVar5;
      if (lVar3 != 0) {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
      }
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'FColorSpaceTestInstance'' @ 150337af0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FColorSpaceTestInstance__(void)

{
  if (FColorSpaceTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FColorSpaceTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FColorSpaceTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksLocalGlobalPrioritiesAutomationTestInstance'' @ 150337b20

void __cdecl
Tasks2Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksLocalGlobalPrioritiesAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksLocalGlobalPrioritiesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksPerfTests2AutomationTestInstance'' @ 150337b40

void __cdecl
Tasks2Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksPerfTests2AutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksPerfTests2AutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTasksUnitTests2AutomationTestInstance'' @ 150337b60

void __cdecl
Tasks2Tests::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTasksUnitTests2AutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTasksUnitTests2AutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTransferFunctionsTestInstance'' @ 150337b80

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTransferFunctionsTestInstance__(void)

{
  if (FTransferFunctionsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FTransferFunctionsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FTransferFunctionsTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GChaosMode'' @ 150337bb0

void __cdecl _dynamic_atexit_destructor_for__GChaosMode__(void)

{
  if (GChaosMode.State != (atomic<FChaosMode::FState_*>)0x0) {
    operator_delete((void *)GChaosMode.State,0x2cb38);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GPlatformIoDispatcher'' @ 150337bd0

void __cdecl UE::_dynamic_atexit_destructor_for__GPlatformIoDispatcher__(void)

{
  if (GPlatformIoDispatcher.Ptr != (IPlatformIoDispatcher *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150337be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*GPlatformIoDispatcher.Ptr)(GPlatformIoDispatcher.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioCore'' @ 150337bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioCore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioCore);
  return;
}

// `dynamic_atexit_destructor_for_'LogPlatformIoDispatcher'' @ 150337c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPlatformIoDispatcher__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPlatformIoDispatcher);
  return;
}

// `dynamic_atexit_destructor_for_'LogTaskGraph'' @ 150337c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTaskGraph__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTaskGraph);
  return;
}

// `dynamic_atexit_destructor_for_'LogTransferFunctions'' @ 150337c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTransferFunctions__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTransferFunctions);
  return;
}

// `dynamic_atexit_destructor_for_'LogUnrealColorManagementTest'' @ 150337c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUnrealColorManagementTest__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUnrealColorManagementTest);
  return;
}

// `dynamic_atexit_destructor_for_'LowLevelTasks'' @ 150337c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LowLevelTasks::_dynamic_atexit_destructor_for__LowLevelTasks__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LowLevelTasks);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150337cb0

void __cdecl `GetGraphEventImplAllocator'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  TlsFree(::Singleton._0_4_);
  ::Singleton._0_4_ = 0xffffffff;
  FLockFreePointerListLIFOBase<void_*,64,1>::~FLockFreePointerListLIFOBase<void_*,64,1>
            ((FLockFreePointerListLIFOBase<void_*,64,1> *)&::Singleton.field_0x40);
  return;
}

// `dynamic_atexit_destructor_for_'TaskThreadPriorityCmd'' @ 150337ce0

void __cdecl _dynamic_atexit_destructor_for__TaskThreadPriorityCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TaskThreadPriorityCmd);
  return;
}

// `dynamic_atexit_destructor_for_'TestRandomizedThreadsCommand'' @ 150337d00

void __cdecl _dynamic_atexit_destructor_for__TestRandomizedThreadsCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TestRandomizedThreadsCommand);
  return;
}

// `dynamic_atexit_destructor_for_'ThreadLocalData'' @ 150337d20

void __cdecl
`UE::ParkingLot::Private::FThreadLocalData::Get'::__l2::
_dynamic_atexit_destructor_for__ThreadLocalData__(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar5 = (undefined8 *)(lVar3 + 0xa0);
  LOCK();
  UE::ParkingLot::Private::FThreadLocalData::ThreadCount =
       (atomic<unsigned_int>)((int)UE::ParkingLot::Private::FThreadLocalData::ThreadCount + -1);
  UNLOCK();
  pvVar4 = (void *)*puVar5;
  if (pvVar4 != (void *)0x0) {
    *puVar5 = 0;
    LOCK();
    piVar1 = (int *)((longlong)pvVar4 + 0x1c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ::operator_delete(pvVar4,0x40,0x40);
    }
  }
  *(undefined1 *)(lVar3 + 0xa8) = 1;
  pvVar4 = (void *)*puVar5;
  if (pvVar4 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)pvVar4 + 0x1c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ::operator_delete(pvVar4,0x40,0x40);
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'ThreadLocalSharedLocks'' @ 150337db0

void __cdecl UE::Core::Private::_dynamic_atexit_destructor_for__ThreadLocalSharedLocks__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x48) != 0)
  {
    GetCurrentThreadId();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Top",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\SharedRecursiveMutex.cpp"
                       ,0x14,
                       L"Thread %u destroyed while holding a shared lock on the FSharedRecursiveMutex at 0x%p."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'ThreadSwitchForABTestCommand'' @ 150337e20

void __cdecl _dynamic_atexit_destructor_for__ThreadSwitchForABTestCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ThreadSwitchForABTestCommand);
  return;
}

// `dynamic_atexit_destructor_for_'Tls'' @ 150337e40

void __cdecl
`TBlockAllocationCache<65536,FAlignedAllocator>::SwapBlock'::__l2::
_dynamic_atexit_destructor_for__Tls__(void)

{
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x68) != 0)
  {
                    /* WARNING: Could not recover jumptable at 0x000150337e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_IoDispatcherFileBackend'' @ 150337e80

void __cdecl UE::_dynamic_atexit_destructor_for___GCsvCategory_IoDispatcherFileBackend__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_IoDispatcherFileBackend.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_IoDispatcherFileBackend.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_IoDispatcherFileBackend.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*Private::GMalloc + 0x48))(Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_IoDispatcherFileBackendVerbose'' @ 150337ea0

void __cdecl
UE::_dynamic_atexit_destructor_for___GCsvCategory_IoDispatcherFileBackendVerbose__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_IoDispatcherFileBackendVerbose.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_IoDispatcherFileBackendVerbose.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_IoDispatcherFileBackendVerbose.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*Private::GMalloc + 0x48))(Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Scheduler'' @ 150337ec0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Scheduler__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Scheduler.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Scheduler.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Scheduler.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// ??_C@_1FO@PJNFAJHF@?$AAA?$AAr?$AAr?$AAa?$AAy?$AA?5?$AAh?$AAa?$AAs?$AA?5?$AAc?$AAh?$AAa?$AAn?$AAg@ @ 1506136c0

/* WARNING: Control flow encountered bad instruction data */
/* Array has chang */

void ___C__1FO_PJNFAJHF___AAA__AAr__AAr__AAa__AAy__AA_5__AAh__AAa__AAs__AA_5__AAc__AAh__AAa__AAn__AAg_
               (void)

{
  char unaff_SIL;
  char *in_R10;
  
  *in_R10 = *in_R10 + unaff_SIL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

