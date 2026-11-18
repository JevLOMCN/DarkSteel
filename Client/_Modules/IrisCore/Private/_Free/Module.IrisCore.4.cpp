// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 313

// NameTokenStoreName'' @ 140f83db0

void __cdecl `dynamic_initializer_for_'UE::Net::FNameTokenStore::NameTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FNameTokenStore::NameTokenStoreName,L"NameTokenStore");
  return;
}

// StringTokenStoreName'' @ 140f83dd0

void __cdecl `dynamic_initializer_for_'UE::Net::FStringTokenStore::StringTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FStringTokenStore::StringTokenStoreName,L"StringTokenStore");
  return;
}

// `dynamic_initializer_for_'CVarAllowDestroyToCancelFlushAndTearOff'' @ 140f83df0

void __cdecl _dynamic_initializer_for__CVarAllowDestroyToCancelFlushAndTearOff__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowDestroyToCancelFlushAndTearOff,
             L"net.Iris.AllowDestroyToCancelFlushAndTearOff",&bAllowDestroyToCancelFlushAndTearOff,
             L"When true issuing a EndReplication on an object that is already Tear-off or pending endreplication will cancel destroy/flush and destroy the replicated objects."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowDestroyToCancelFlushAndTearOff__);
  return;
}

// `dynamic_initializer_for_'CVarColdResolvingRetryTimeMS'' @ 140f83e40

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarColdResolvingRetryTimeMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarColdResolvingRetryTimeMS,L"net.Iris.ColdResolvingRetryTimeMS",
             &ColdResolvingRetryTimeMS,
             L"Resolve unresolved cold references after this many milliseconds.",0);
  atexit(_dynamic_atexit_destructor_for__CVarColdResolvingRetryTimeMS__);
  return;
}

// `dynamic_initializer_for_'CVarDeferEndReplication'' @ 140f83e90

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarDeferEndReplication__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDeferEndReplication,L"net.Iris.DeferEndReplication",&bDeferEndReplication,
             L"if true calls to EndReplication will be defered until after we have applied statedata. Default is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDeferEndReplication__);
  return;
}

// `dynamic_initializer_for_'CVarEnableFlushReliableRPCOnDestroy'' @ 140f83ee0

void __cdecl _dynamic_initializer_for__CVarEnableFlushReliableRPCOnDestroy__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableFlushReliableRPCOnDestroy,L"net.Iris.EnableFlushReliableRPCOnDestroy",
             &bEnableFlushReliableRPCOnDestroy,
             L"When true EEndReplicationFlags::Flush flag will be appended in EndReplication if we have pending unprocessed attachments/RPC:s when destroying a replicated object."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableFlushReliableRPCOnDestroy__);
  return;
}

// `dynamic_initializer_for_'CVarEnableVerbosePollProfiling'' @ 140f83f30

void __cdecl
UE::Net::Private::CVars::_dynamic_initializer_for__CVarEnableVerbosePollProfiling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableVerbosePollProfiling,L"net.Iris.Poll.EnableVerboseProfiling",
             &bEnableVerbosePollProfiling,
             L"Enable conditional profiler scopes for polling. Useful to see exactly what properties gets polled in cpu profiler.."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableVerbosePollProfiling__);
  return;
}

// `dynamic_initializer_for_'CVarExecuteReliableRPCsBeforeApplyState'' @ 140f83f80

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarExecuteReliableRPCsBeforeApplyState__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarExecuteReliableRPCsBeforeApplyState,
             L"net.Iris.ExecuteReliableRPCsBeforeApplyState",&bExecuteReliableRPCsBeforeApplyState,
             L"If true and Iris runs in backwards compatibility mode then reliable RPCs will be executed before we apply state data on the target object unless we first need to spawn the object."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarExecuteReliableRPCsBeforeApplyState__);
  return;
}

// `dynamic_initializer_for_'CVarFilterOutNonDirtyPushBasedObjects'' @ 140f83fd0

void __cdecl
UE::Net::Private::CVars::_dynamic_initializer_for__CVarFilterOutNonDirtyPushBasedObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFilterOutNonDirtyPushBasedObjects,
             L"net.Iris.Poll.FilterOutNonDirtyPushBasedObjects",&bFilterOutNonDirtyPushBasedObjects,
             L"When true fully push based objects that are not considered to require polling are masked off before the poll loop."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFilterOutNonDirtyPushBasedObjects__);
  return;
}

// `dynamic_initializer_for_'CVarForceFullCopyAndQuantize'' @ 140f84020

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarForceFullCopyAndQuantize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceFullCopyAndQuantize,L"net.iris.ForceFullCopyAndQuantize",
             &bCVarForceFullCopyAndQuantize,
             L"When enabled a full copy and quantize will be used, if disabled we will only copy and quantize dirty state data."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceFullCopyAndQuantize__);
  return;
}

// `dynamic_initializer_for_'CVarForceObjectsToStall'' @ 140f84070

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarForceObjectsToStall__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceObjectsToStall,L"net.Iris.AsyncLoading.ForceObjectsToStall",
             &bForceObjectsToStall,
             L"Force objects in the DebugObjectsForcedToStall list to never resolve their reference and simulate long async loading delays."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceObjectsToStall__);
  return;
}

// `dynamic_initializer_for_'CVarHotResolvingLifetimeMS'' @ 140f840c0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarHotResolvingLifetimeMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHotResolvingLifetimeMS,L"net.Iris.HotResolvingLifetimeMS",&HotResolvingLifetimeMS,
             L"An unresolved reference is considered hot if it was created within this many milliseconds, and cold otherwise."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHotResolvingLifetimeMS__);
  return;
}

// `dynamic_initializer_for_'CVarImmediateDispatchEndReplicationForSubObjects'' @ 140f84110

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarImmediateDispatchEndReplicationForSubObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarImmediateDispatchEndReplicationForSubObjects,
             L"net.Iris.ImmediateDispatchEndReplicationForSubObjects",
             &bImmediateDispatchEndReplicationForSubObjects,
             L"if true replicated calls to EndReplication for SubObjects will dispatched immediately. Default is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarImmediateDispatchEndReplicationForSubObjects__);
  return;
}

// `dynamic_initializer_for_'CVarIrisLogReplicationProtocols'' @ 140f84160

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisLogReplicationProtocols__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisLogReplicationProtocols,L"net.Iris.LogReplicationProtocols",
             &bIrisLogReplicationProtocols,L"If true, log all created replication protocols.",0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisLogReplicationProtocols__);
  return;
}

// `dynamic_initializer_for_'CVarMaxMustBeMappedHandleArray'' @ 140f841b0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarMaxMustBeMappedHandleArray__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxMustBeMappedHandleArray,L"net.Iris.QueuedBatch.MaxMustBeMappedHandleArray",
             &MaxMustBeMappedHandleArray,
             L"Maximum number of unresolved references that will be included with the QueuedBatch timeout error message."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxMustBeMappedHandleArray__);
  return;
}

// `dynamic_initializer_for_'CVarQueuedBatchTimeoutSeconds'' @ 140f84200

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarQueuedBatchTimeoutSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarQueuedBatchTimeoutSeconds,L"net.Iris.QueuedBatch.TimeoutSeconds",
             &QueuedBatchTimeoutSeconds,
             L"Time in seconds to wait for queued batches to flush before logging a warning.",0);
  atexit(_dynamic_atexit_destructor_for__CVarQueuedBatchTimeoutSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarQueuedBatchTimeoutWarningInterval'' @ 140f84250

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarQueuedBatchTimeoutWarningInterval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarQueuedBatchTimeoutWarningInterval,L"net.Iris.QueuedBatch.TimeoutWarningInterval",
             &QueuedBatchTimeoutWarningInterval,
             L"Number of ticks between checks for queuedbatches timeout.",0);
  atexit(_dynamic_atexit_destructor_for__CVarQueuedBatchTimeoutWarningInterval__);
  return;
}

// `dynamic_initializer_for_'CVarQueuedBatchWarningRepeatTime'' @ 140f842a0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarQueuedBatchWarningRepeatTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarQueuedBatchWarningRepeatTime,L"net.Iris.QueuedBatch.WarningRepeatTime",
             &QueuedBatchWarningRepeatTime,L"How long to wait before warning again.",0);
  atexit(_dynamic_atexit_destructor_for__CVarQueuedBatchWarningRepeatTime__);
  return;
}

// `dynamic_initializer_for_'CVarUseOptObjectRefTracking'' @ 140f842f0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarUseOptObjectRefTracking__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseOptObjectRefTracking,L"net.Iris.UseOptObjectRefTracking",
             &bUseOptObjectRefTracking,
             L"Use a more optimized version of FReplicationReader::UpdateObjectReferenceTracking()."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseOptObjectRefTracking__);
  return;
}

// `dynamic_initializer_for_'CVarUsePrevReceivedStateForOnReps'' @ 140f84340

void __cdecl UE::Net::_dynamic_initializer_for__CVarUsePrevReceivedStateForOnReps__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUsePrevReceivedStateForOnReps,L"net.Iris.UsePrevReceivedStateForOnReps",
             &bUsePrevReceivedStateForOnReps,
             L"If true OnReps will use the previous received state when doing onreps and not do any compares, if set to false we will copy the local state and do a compare before issuing onreps"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUsePrevReceivedStateForOnReps__);
  return;
}

// `dynamic_initializer_for_'CVarUseResolvingHandleCache'' @ 140f84390

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarUseResolvingHandleCache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseResolvingHandleCache,L"net.Iris.UseResolvingHandleCache",
             &bUseResolvingHandleCache,
             L"Enable the use of a hot and cold cache when resolving unresolved caches to reduce the time spent resolving references."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseResolvingHandleCache__);
  return;
}

// `dynamic_initializer_for_'CVarbDeltaCompressInitialState'' @ 140f843e0

void __cdecl UE::Net::_dynamic_initializer_for__CVarbDeltaCompressInitialState__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarbDeltaCompressInitialState,L"net.Iris.DeltaCompressInitialState",
             &bDeltaCompressInitialState,
             L"if true we compare with default state when serializing inital state.",0);
  atexit(_dynamic_atexit_destructor_for__CVarbDeltaCompressInitialState__);
  return;
}

// `dynamic_initializer_for_'CVarbOnlyQuantizeDirtyMembers'' @ 140f84430

void __cdecl UE::Net::_dynamic_initializer_for__CVarbOnlyQuantizeDirtyMembers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarbOnlyQuantizeDirtyMembers,L"net.Iris.OnlyQuantizeDirtyMembers",
             &bOnlyQuantizeDirtyMembers,
             L"if true we only quantize members marked as dirty unless this is a new object.",0);
  atexit(_dynamic_atexit_destructor_for__CVarbOnlyQuantizeDirtyMembers__);
  return;
}

// `dynamic_initializer_for_'CvarDispatchUnresolvedPreviouslyReceivedChanges'' @ 140f84480

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CvarDispatchUnresolvedPreviouslyReceivedChanges__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarDispatchUnresolvedPreviouslyReceivedChanges,
             L"net.Iris.DispatchUnresolvedPreviouslyReceivedChanges",
             &bDispatchUnresolvedPreviouslyReceivedChanges,
             L"Whether to include previously received changes with unresolved object references to data received this frame when applying state data. This can call rep notify functions to be called despite being unchanged. Default is false."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarDispatchUnresolvedPreviouslyReceivedChanges__);
  return;
}

// `dynamic_initializer_for_'CvarGracefullyHandleReachingEndOfBitstream'' @ 140f844d0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CvarGracefullyHandleReachingEndOfBitstream__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarGracefullyHandleReachingEndOfBitstream,
             L"net.Iris.ReplicationReader.GracefullyHandleReachingEndOfBitstream",
             &bGracefullyHandleReachingEndOfBitstream,
             L"Gracefully handle reaching end of the ReplicationReader bitstream prior to reading as many object batches as expected. Default is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarGracefullyHandleReachingEndOfBitstream__);
  return;
}

// `dynamic_initializer_for_'CvarNumPollingTasks'' @ 140f84520

void __cdecl UE::Net::Private::CVars::_dynamic_initializer_for__CvarNumPollingTasks__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarNumPollingTasks,L"net.Iris.NumPollingTasks",&GNumPollingTasks,
             L"Number of Tasks that will be created to poll dirty objects in a single frame. Setting to 0 will run Polling Synchronously instead."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarNumPollingTasks__);
  return;
}

// `dynamic_initializer_for_'CvarNumWordsToInterleave'' @ 140f84570

void __cdecl UE::Net::Private::CVars::_dynamic_initializer_for__CvarNumWordsToInterleave__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarNumWordsToInterleave,L"net.Iris.NumWordsToInterleave",&GNumWordsPerChunk,
             L"Number of words in a row to interleave before queuing to the next task",0);
  atexit(_dynamic_atexit_destructor_for__CvarNumWordsToInterleave__);
  return;
}

// `dynamic_initializer_for_'CvarRemapDynamicObjects'' @ 140f845c0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CvarRemapDynamicObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarRemapDynamicObjects,L"net.Iris.RemapDynamicObjects",&bRemapDynamicObjects,
             L"Allow remapping of dynamic objects on the receiving end. This allows properties previously pointing to a particular object to be updated if the object is re-created. Default is true."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarRemapDynamicObjects__);
  return;
}

// `dynamic_initializer_for_'CvarResolvedObjectsDispatchDebugging'' @ 140f84610

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CvarResolvedObjectsDispatchDebugging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarResolvedObjectsDispatchDebugging,L"net.Iris.ResolvedObjectsDispatchDebugging",
             &bResolvedObjectsDispatchDebugging,
             L"Debug logging of resolved object state dispatching. Default is false.",0);
  atexit(_dynamic_atexit_destructor_for__CvarResolvedObjectsDispatchDebugging__);
  return;
}

// `dynamic_initializer_for_'NAME_DefaultPrioritizer'' @ 140f84660

void __cdecl UE::Net::Private::_dynamic_initializer_for__NAME_DefaultPrioritizer__(void)

{
  ::FName::FName(&NAME_DefaultPrioritizer,L"DefaultPrioritizer");
  return;
}

// `dynamic_initializer_for_'NetError_FailedToFindAttachmentQueue'' @ 140f84680

void __cdecl
UE::Net::Private::_dynamic_initializer_for__NetError_FailedToFindAttachmentQueue__(void)

{
  ::FName::FName(&NetError_FailedToFindAttachmentQueue,"Failed to find attachment queue");
  return;
}

// `dynamic_initializer_for_'ObjectBridgePrintAlwaysRelevantObjects'' @ 140f846a0

void __cdecl _dynamic_initializer_for__ObjectBridgePrintAlwaysRelevantObjects__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_9>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ObjectBridgePrintAlwaysRelevantObjects,L"Net.Iris.PrintAlwaysRelevantObjects",
             L"Prints the list of netobjects always relevant to every connection",
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
  atexit(_dynamic_atexit_destructor_for__ObjectBridgePrintAlwaysRelevantObjects__);
  return;
}

// `dynamic_initializer_for_'ObjectBridgePrintDynamicFilterConfig'' @ 140f847d0

void __cdecl _dynamic_initializer_for__ObjectBridgePrintDynamicFilterConfig__(void)

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
            (&ObjectBridgePrintDynamicFilterConfig,L"Net.Iris.PrintDynamicFilterClassConfig",
             L"Prints the dynamic filter configured to be assigned to specific classes.",
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
  atexit(_dynamic_atexit_destructor_for__ObjectBridgePrintDynamicFilterConfig__);
  return;
}

// `dynamic_initializer_for_'ObjectBridgePrintDynamicFilterConfigIssues'' @ 140f84900

void __cdecl _dynamic_initializer_for__ObjectBridgePrintDynamicFilterConfigIssues__(void)

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
            (&ObjectBridgePrintDynamicFilterConfigIssues,
             L"Net.Iris.PrintDynamicFilterClassConfigIssues",
             L"Prints potential issues with the class filter config. Optional argument SkipBPIssueDetection will ignore blueprint classes. Optional argument SkipActorChildIssueDetection will ignore issues related to classes whose nearest configured super class is Actor."
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
  atexit(_dynamic_atexit_destructor_for__ObjectBridgePrintDynamicFilterConfigIssues__);
  return;
}

// `dynamic_initializer_for_'ObjectBridgePrintNetCullDistances'' @ 140f84a30

void __cdecl _dynamic_initializer_for__ObjectBridgePrintNetCullDistances__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_11>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ObjectBridgePrintNetCullDistances,L"Net.Iris.PrintNetCullDistances",
             L"Prints the list of replicated objects and their current netculldistance. Add -NumClasses=X to limit the printing to the X classes with the largest net cull distances."
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
  atexit(_dynamic_atexit_destructor_for__ObjectBridgePrintNetCullDistances__);
  return;
}

// `dynamic_initializer_for_'ObjectBridgePrintNetInfoOfObject'' @ 140f84b60

void __cdecl _dynamic_initializer_for__ObjectBridgePrintNetInfoOfObject__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_13>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ObjectBridgePrintNetInfoOfObject,L"Net.Iris.PrintNetInfoOfObject",
             L"Prints all relevant information about replicated objects and their relevancy status for clients in the session."
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
  atexit(_dynamic_atexit_destructor_for__ObjectBridgePrintNetInfoOfObject__);
  return;
}

// `dynamic_initializer_for_'ObjectBridgePrintPushBasedStatuses'' @ 140f84c90

void __cdecl _dynamic_initializer_for__ObjectBridgePrintPushBasedStatuses__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_12>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ObjectBridgePrintPushBasedStatuses,L"Net.Iris.PrintPushBasedStatuses",
             L"Prints the push-based statuses of all classes.",
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
  atexit(_dynamic_atexit_destructor_for__ObjectBridgePrintPushBasedStatuses__);
  return;
}

// `dynamic_initializer_for_'ObjectBridgePrintRelevantObjects'' @ 140f84dc0

void __cdecl _dynamic_initializer_for__ObjectBridgePrintRelevantObjects__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_8>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ObjectBridgePrintRelevantObjects,L"Net.Iris.PrintRelevantObjects",
             L"Prints the list of netobjects currently relevant to any connection",
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
  atexit(_dynamic_atexit_destructor_for__ObjectBridgePrintRelevantObjects__);
  return;
}

// `dynamic_initializer_for_'ObjectBridgePrintRelevantObjectsToConnection'' @ 140f84ef0

void __cdecl _dynamic_initializer_for__ObjectBridgePrintRelevantObjectsToConnection__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_10>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ObjectBridgePrintRelevantObjectsToConnection,
             L"Net.Iris.PrintRelevantObjectsToConnection",
             L"Prints the list of replicated objects relevant to a specific connection. OptionalParams: WithFilter"
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
  atexit(_dynamic_atexit_destructor_for__ObjectBridgePrintRelevantObjectsToConnection__);
  return;
}

// `dynamic_initializer_for_'ObjectBridgePrintReplicatedObjects'' @ 140f85020

void __cdecl _dynamic_initializer_for__ObjectBridgePrintReplicatedObjects__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_7>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ObjectBridgePrintReplicatedObjects,L"Net.Iris.PrintReplicatedObjects",
             L"Prints the list of replicated objects registered for replication in Iris",
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
  atexit(_dynamic_atexit_destructor_for__ObjectBridgePrintReplicatedObjects__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h__Script_IrisCore_3842744025'' @ 140f85150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h__Script_IrisCore_3842744025__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h__Script_IrisCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h__Script_IrisCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_ReplicationDataStream_h__Script_IrisCore_2387524817'' @ 140f851a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_ReplicationDataStream_h__Script_IrisCore_2387524817__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_ReplicationDataStream_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h__Script_IrisCore_1827045986'' @ 140f851e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h__Script_IrisCore_1827045986__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h__Script_IrisCore_4005849140'' @ 140f85220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h__Script_IrisCore_4005849140__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h__Script_IrisCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ObjectReplicationBridgeConfig_h__Script_IrisCore_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h__Script_IrisCore_2104510488'' @ 140f85270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h__Script_IrisCore_2104510488__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h__Script_IrisCore_1448812315'' @ 140f852b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h__Script_IrisCore_1448812315__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h__Script_IrisCore_1675748936'' @ 140f852f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h__Script_IrisCore_1675748936__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h__Script_IrisCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h__Script_IrisCore_2969241821'' @ 140f85340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h__Script_IrisCore_2969241821__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h__Script_IrisCore_4274470395'' @ 140f85380

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h__Script_IrisCore_4274470395__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereWithOwnerBoostNetObjectPrioritizer_h__Script_IrisCore_1509477705'' @ 140f853c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereWithOwnerBoostNetObjectPrioritizer_h__Script_IrisCore_1509477705__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereWithOwnerBoostNetObjectPrioritizer_h__Script_IrisCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ReplicationBridge_h__Script_IrisCore_3238368697'' @ 140f85400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ReplicationBridge_h__Script_IrisCore_3238368697__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/IrisCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_ReplicationBridge_h__Script_IrisCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UReplicationDataStream @ 14429e3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UReplicationDataStream(void)

{
  if (Z_Registration_Info_UClass_UReplicationDataStream.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UReplicationDataStream.OuterSingleton,
               &Z_Construct_UClass_UReplicationDataStream_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UReplicationDataStream.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14429e7e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_12>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_12>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14429eac0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_13>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_13>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_USphereNetObjectPrioritizer @ 14429eaf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USphereNetObjectPrioritizer(void)

{
  if (Z_Registration_Info_UClass_USphereNetObjectPrioritizer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USphereNetObjectPrioritizer.OuterSingleton,
               &Z_Construct_UClass_USphereNetObjectPrioritizer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USphereNetObjectPrioritizer.OuterSingleton;
}

// Z_Construct_UClass_USphereNetObjectPrioritizerConfig @ 14429eb30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USphereNetObjectPrioritizerConfig(void)

{
  if (Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.OuterSingleton,
               &Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.OuterSingleton;
}

// Z_Construct_UClass_UObjectReplicationBridgeConfig @ 14429ebf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectReplicationBridgeConfig(void)

{
  if (Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.OuterSingleton,
               &Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.OuterSingleton;
}

// Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig @ 14429ec30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FObjectReplicationBridgeAsyncLoadingClassConfig @ 14429ecb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgeAsyncLoadingClassConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeAsyncLoadingClassConfig.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeAsyncLoadingClassConfig.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FObjectReplicationBridgeAsyncLoadingClassConfig_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeAsyncLoadingClassConfig.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeAsyncLoadingClassConfig.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig @ 14429ed30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig @ 14429edb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeFilterConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeFilterConfig.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeFilterConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeFilterConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig @ 14429ee30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgePollConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FObjectReplicationBridgePollConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgePollConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FObjectReplicationBridgePollConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig @ 14429eeb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgePrioritizerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FObjectReplicationBridgePrioritizerConfig.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgePrioritizerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FObjectReplicationBridgePrioritizerConfig.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig @ 14429ef30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig.InnerSingleton;
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

// NewProp_bIncludeSubclasses_SetBit @ 14429efb0

void __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::
NewProp_bIncludeSubclasses_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 14429efc0

void * __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgePollConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FObjectReplicationBridgePollConfig,&UE::CoreUObject::Private::Construct<FObjectReplicationBridgePollConfig>,&UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgePollConfig>,&UE::CoreUObject::Private::Destruct<FObjectReplicationBridgePollConfig>,&UE::CoreUObject::Private::Copy<FObjectReplicationBridgePollConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bForceEnableOnAllInstances_SetBit @ 14429f000

void __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::
NewProp_bForceEnableOnAllInstances_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14429f010

void * __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgeFilterConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FObjectReplicationBridgeFilterConfig,&UE::CoreUObject::Private::Construct<FObjectReplicationBridgeFilterConfig>,&UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgeFilterConfig>,&UE::CoreUObject::Private::Destruct<FObjectReplicationBridgeFilterConfig>,&UE::CoreUObject::Private::Copy<FObjectReplicationBridgeFilterConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNetObjectCountLimiter @ 14429f050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectCountLimiter(void)

{
  if (Z_Registration_Info_UClass_UNetObjectCountLimiter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectCountLimiter.OuterSingleton,
               &Z_Construct_UClass_UNetObjectCountLimiter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectCountLimiter.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectCountLimiterConfig @ 14429f090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectCountLimiterConfig(void)

{
  if (Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton,
               &Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton;
}

// Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode @ 14429f0d0

UEnum * __cdecl Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode(void)

{
  if (Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.InnerSingleton,
               &Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.InnerSingleton;
}

// ENetObjectCountLimiterMode_StaticEnum @ 14429f110

UEnum * __cdecl ENetObjectCountLimiterMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode,(UObject *)pUVar1,
                       L"ENetObjectCountLimiterMode");
  }
  return Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton;
}

// NewProp_bForceEnableOnAllInstances_SetBit @ 14429f150

void __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::
NewProp_bForceEnableOnAllInstances_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14429f180

void * __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgePrioritizerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FObjectReplicationBridgePrioritizerConfig,&UE::CoreUObject::Private::Construct<FObjectReplicationBridgePrioritizerConfig>,&UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgePrioritizerConfig>,&UE::CoreUObject::Private::Destruct<FObjectReplicationBridgePrioritizerConfig>,&UE::CoreUObject::Private::Copy<FObjectReplicationBridgePrioritizerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableOwnedObjectsFastLane_SetBit @ 14429f220

void __cdecl
Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bEnableDeltaCompression_SetBit @ 14429f230

void __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::
NewProp_bEnableDeltaCompression_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14429f240

void * __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgeDeltaCompressionConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FObjectReplicationBridgeDeltaCompressionConfig,&UE::CoreUObject::Private::Construct<FObjectReplicationBridgeDeltaCompressionConfig>,&UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgeDeltaCompressionConfig>,&UE::CoreUObject::Private::Destruct<FObjectReplicationBridgeDeltaCompressionConfig>,&UE::CoreUObject::Private::Copy<FObjectReplicationBridgeDeltaCompressionConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDisconnectOnProtocolMismatch_SetBit @ 14429f280

void __cdecl
Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::
NewProp_bDisconnectOnProtocolMismatch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14429f290

void * __cdecl
Z_Construct_UScriptStruct_FObjectReplicatedBridgeCriticalClassConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FObjectReplicatedBridgeCriticalClassConfig,&UE::CoreUObject::Private::Construct<FObjectReplicatedBridgeCriticalClassConfig>,&UE::CoreUObject::Private::ConstructForTests<FObjectReplicatedBridgeCriticalClassConfig>,&UE::CoreUObject::Private::Destruct<FObjectReplicatedBridgeCriticalClassConfig>,&UE::CoreUObject::Private::Copy<FObjectReplicatedBridgeCriticalClassConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14429f2d0

void * __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgeAsyncLoadingClassConfig_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FObjectReplicationBridgeAsyncLoadingClassConfig,&UE::CoreUObject::Private::Construct<FObjectReplicationBridgeAsyncLoadingClassConfig>,&UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgeAsyncLoadingClassConfig>,&UE::CoreUObject::Private::Destruct<FObjectReplicationBridgeAsyncLoadingClassConfig>,&UE::CoreUObject::Private::Copy<FObjectReplicationBridgeAsyncLoadingClassConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIncludeInMinimalCSVStats_SetBit @ 14429f3a0

void __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::
NewProp_bIncludeInMinimalCSVStats_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14429f3b0

void * __cdecl
Z_Construct_UScriptStruct_FObjectReplicationBridgeTypeStatsConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FObjectReplicationBridgeTypeStatsConfig,&UE::CoreUObject::Private::Construct<FObjectReplicationBridgeTypeStatsConfig>,&UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgeTypeStatsConfig>,&UE::CoreUObject::Private::Destruct<FObjectReplicationBridgeTypeStatsConfig>,&UE::CoreUObject::Private::Copy<FObjectReplicationBridgeTypeStatsConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAllClassesCritical_SetBit @ 14429f3f0

void __cdecl
Z_Construct_UClass_UObjectReplicationBridgeConfig_Statics::NewProp_bAllClassesCritical_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer @ 14429f870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer(void)

{
  if (Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.OuterSingleton,
               &Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.OuterSingleton;
}

// Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig @ 14429f8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig(void)

{
  if (Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.
                OuterSingleton,
               &Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.OuterSingleton;
}

// Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer @ 14429fba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer(void)

{
  if (Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.OuterSingleton,
               &Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.OuterSingleton;
}

// Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig @ 14429fbe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig(void)

{
  if (Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.OuterSingleton,
               &Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.OuterSingleton;
}

// Z_Construct_UClass_ULocationBasedNetObjectPrioritizer @ 14429fc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULocationBasedNetObjectPrioritizer(void)

{
  if (Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.OuterSingleton,
               &Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectPrioritizerConfig @ 14429fc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectPrioritizerConfig(void)

{
  if (Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.OuterSingleton,
               &Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectPrioritizerDefinitions @ 14429fca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectPrioritizerDefinitions(void)

{
  if (Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.OuterSingleton,
               &Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition @ 14429fce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetObjectPrioritizerDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetObjectPrioritizerDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetObjectPrioritizerDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetObjectPrioritizerDefinition.InnerSingleton;
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

// NewStructOps @ 14429fd60

void * __cdecl Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetObjectPrioritizerDefinition,&UE::CoreUObject::Private::Construct<FNetObjectPrioritizerDefinition>,&UE::CoreUObject::Private::ConstructForTests<FNetObjectPrioritizerDefinition>,&UE::CoreUObject::Private::Destruct<FNetObjectPrioritizerDefinition>,&UE::CoreUObject::Private::Copy<FNetObjectPrioritizerDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UReplicationBridge @ 14429fda0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UReplicationBridge(void)

{
  if (Z_Registration_Info_UClass_UReplicationBridge.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UReplicationBridge.OuterSingleton,
               &Z_Construct_UClass_UReplicationBridge_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UReplicationBridge.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectPrioritizer @ 1442a0050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectPrioritizer(void)

{
  if (Z_Registration_Info_UClass_UNetObjectPrioritizer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectPrioritizer.OuterSingleton,
               &Z_Construct_UClass_UNetObjectPrioritizer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizer.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectConnectionFilter @ 1442a0320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectConnectionFilter(void)

{
  if (Z_Registration_Info_UClass_UNetObjectConnectionFilter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectConnectionFilter.OuterSingleton,
               &Z_Construct_UClass_UNetObjectConnectionFilter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectConnectionFilter.OuterSingleton;
}

// Z_Construct_UClass_UNetObjectConnectionFilterConfig @ 1442a0360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetObjectConnectionFilterConfig(void)

{
  if (Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.OuterSingleton,
               &Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1442a0590

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

// `scalar_deleting_destructor' @ 1442a07b0

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

// `scalar_deleting_destructor' @ 1442a09d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_7>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_7>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442a0c80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_8>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_8>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442a0ea0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_9>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_9>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442a1180

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_10>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_10>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442a13c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_11>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_11>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// operator<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>_TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo> @ 1442a1570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo>
* __thiscall
TKeyInitializer<UClass_*_const_&>::
operator<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>
          (TKeyInitializer<UClass_*_const_&> *this,
          TTuple<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo>
          *__return_storage_ptr__)

{
  ulonglong uVar1;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [16];
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_58.MaxBits = 0x80;
  local_78._0_8_ = (UClass *)0x0;
  local_30 = 0;
  local_20 = 0;
  local_58.AllocatorInstance.InlineData[0] = '\0';
  local_58.AllocatorInstance.InlineData[1] = '\0';
  local_58.AllocatorInstance.InlineData[2] = '\0';
  local_58.AllocatorInstance.InlineData[3] = '\0';
  local_58.AllocatorInstance.InlineData[4] = '\0';
  local_58.AllocatorInstance.InlineData[5] = '\0';
  local_58.AllocatorInstance.InlineData[6] = '\0';
  local_58.AllocatorInstance.InlineData[7] = '\0';
  local_58.AllocatorInstance.InlineData[8] = '\0';
  local_58.AllocatorInstance.InlineData[9] = '\0';
  local_58.AllocatorInstance.InlineData[10] = '\0';
  local_58.AllocatorInstance.InlineData[0xb] = '\0';
  local_58.AllocatorInstance.InlineData[0xc] = '\0';
  local_58.AllocatorInstance.InlineData[0xd] = '\0';
  local_58.AllocatorInstance.InlineData[0xe] = '\0';
  local_58.AllocatorInstance.InlineData[0xf] = '\0';
  local_78._8_4_ = 0;
  local_78._12_4_ = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  *(UClass **)__return_storage_ptr__ = *this->Key;
  `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::FCullDistanceInfo
            (&__return_storage_ptr__->field_0x8,(FCullDistanceInfo *)local_78);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar1 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return __return_storage_ptr__;
}

// CastChecked<UFieldOfViewNetObjectPrioritizerConfig,UNetObjectPrioritizerConfig> @ 1442a1ba0

UFieldOfViewNetObjectPrioritizerConfig * __cdecl
CastChecked<UFieldOfViewNetObjectPrioritizerConfig,UNetObjectPrioritizerConfig>
          (UNetObjectPrioritizerConfig *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNetObjectPrioritizerConfig *)0x0) {
    pFVar3 = GetTypeName<UFieldOfViewNetObjectPrioritizerConfig>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UFieldOfViewNetObjectPrioritizerConfig::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UFieldOfViewNetObjectPrioritizerConfig *)param_1;
  }
  pFVar3 = GetTypeName<UFieldOfViewNetObjectPrioritizerConfig>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNetObjectPrioritizerConfig>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNetObjectConnectionFilterConfig,UNetObjectFilterConfig> @ 1442a1c60

UNetObjectConnectionFilterConfig * __cdecl
CastChecked<UNetObjectConnectionFilterConfig,UNetObjectFilterConfig>
          (UNetObjectFilterConfig *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNetObjectFilterConfig *)0x0) {
    pFVar3 = GetTypeName<UNetObjectConnectionFilterConfig>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNetObjectConnectionFilterConfig::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNetObjectConnectionFilterConfig *)param_1;
  }
  pFVar3 = GetTypeName<UNetObjectConnectionFilterConfig>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNetObjectFilterConfig>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNetObjectCountLimiterConfig,UNetObjectPrioritizerConfig> @ 1442a1d20

UNetObjectCountLimiterConfig * __cdecl
CastChecked<UNetObjectCountLimiterConfig,UNetObjectPrioritizerConfig>
          (UNetObjectPrioritizerConfig *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNetObjectPrioritizerConfig *)0x0) {
    pFVar3 = GetTypeName<UNetObjectCountLimiterConfig>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNetObjectCountLimiterConfig::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNetObjectCountLimiterConfig *)param_1;
  }
  pFVar3 = GetTypeName<UNetObjectCountLimiterConfig>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNetObjectPrioritizerConfig>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<USphereNetObjectPrioritizerConfig,UNetObjectPrioritizerConfig> @ 1442a1de0

USphereNetObjectPrioritizerConfig * __cdecl
CastChecked<USphereNetObjectPrioritizerConfig,UNetObjectPrioritizerConfig>
          (UNetObjectPrioritizerConfig *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNetObjectPrioritizerConfig *)0x0) {
    pFVar3 = GetTypeName<USphereNetObjectPrioritizerConfig>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = USphereNetObjectPrioritizerConfig::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (USphereNetObjectPrioritizerConfig *)param_1;
  }
  pFVar3 = GetTypeName<USphereNetObjectPrioritizerConfig>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNetObjectPrioritizerConfig>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<USphereWithOwnerBoostNetObjectPrioritizerConfig,UNetObjectPrioritizerConfig> @ 1442a1ea0

USphereWithOwnerBoostNetObjectPrioritizerConfig * __cdecl
CastChecked<USphereWithOwnerBoostNetObjectPrioritizerConfig,UNetObjectPrioritizerConfig>
          (UNetObjectPrioritizerConfig *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNetObjectPrioritizerConfig *)0x0) {
    pFVar3 = GetTypeName<USphereWithOwnerBoostNetObjectPrioritizerConfig>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (USphereWithOwnerBoostNetObjectPrioritizerConfig *)param_1;
  }
  pFVar3 = GetTypeName<USphereWithOwnerBoostNetObjectPrioritizerConfig>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNetObjectPrioritizerConfig>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// DefaultConstructItems<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,int> @ 1442a2050

void __cdecl
DefaultConstructItems<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xfffffffe;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UNetObjectConnectionFilter::FPerConnectionInfo,int> @ 1442a2080

void __cdecl
DefaultConstructItems<UNetObjectConnectionFilter::FPerConnectionInfo,int>(void *param_1,int param_2)

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

// DefaultConstructItems<UNetObjectCountLimiter::FPerConnectionInfo,int> @ 1442a20b0

void __cdecl
DefaultConstructItems<UNetObjectCountLimiter::FPerConnectionInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo,int> @ 1442a20e0

void __cdecl
DefaultConstructItems<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0xc);
    do {
      *(undefined8 *)((longlong)puVar1 + -0xc) = 0;
      *puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + -4) = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,int> @ 1442a2110

void __cdecl
DefaultConstructItems<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,int>
          (void *param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 != 0) {
    for (uVar1 = (ulonglong)(uint)param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)param_1 = 0xffff;
      param_1 = (undefined2 *)((longlong)param_1 + 2);
    }
  }
  return;
}

// DefaultConstructItems<TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>,int> @ 1442a2140

void __cdecl
DefaultConstructItems<TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x108);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x80;
      puVar1 = puVar1 + 0x44;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,int> @ 1442a2170

void __cdecl
DestructItems<UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo,int>
          (FPerConnectionInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Priorities).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UNetObjectConnectionFilter::FPerConnectionInfo,int> @ 1442a21b0

void __cdecl
DestructItems<UNetObjectConnectionFilter::FPerConnectionInfo,int>
          (FPerConnectionInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ReplicationEnabledObjects).Storage.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UNetObjectCountLimiter::FPerConnectionInfo,int> @ 1442a21f0

void __cdecl
DestructItems<UNetObjectCountLimiter::FPerConnectionInfo,int>
          (FPerConnectionInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->LastConsiderFrames).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo,int> @ 1442a2230

void __cdecl
DestructItems<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo,int>
          (FPerPrioritizerInfo *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::
    ~TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              ((TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
                *)param_1);
    param_1 = (FPerPrioritizerInfo *)((longlong)param_1 + 0x18);
  }
  return;
}

// DestructItems<TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>,int> @ 1442a2270

void __cdecl
DestructItems<TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>,int>
          (TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x22;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_1>_> @ 1442a45e0

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UObjectReplicationBridge::PrintRelevantObjectsForConnections_::__l2::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"WithFilter",10,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs'::__l3::<lambda_1>_> @ 1442a4670

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs_::__l3::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"Config",6,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg'::__l3::<lambda_1>_> @ 1442a4700

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg_::__l3::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"FindByClass=",0xc,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs'::__l3::<lambda_1>_> @ 1442a4790

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs_::__l3::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"WithSubObjects",0xe,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg'::__l3::<lambda_1>_> @ 1442a4820

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"RepSystemId=",0xc,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UObjectReplicationBridge::PrintNetCullDistances'::__l3::<lambda_1>_> @ 1442a48b0

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UObjectReplicationBridge::PrintNetCullDistances_::__l3::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"NumClasses=",0xb,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs'::__l6::<lambda_2>_> @ 1442a4940

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs_::__l6::<lambda_2>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_2> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"IssueDetection",0xe,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs'::__l6::<lambda_2>_> @ 1442a49d0

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs_::__l6::<lambda_2>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_2> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"SortByClass",0xb,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg'::__l18::<lambda_2>_> @ 1442a4a60

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg_::__l18::<lambda_2>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_2> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"FindByName=",0xb,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs'::__l9::<lambda_3>_> @ 1442a4af0

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs_::__l9::<lambda_3>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_3> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"SkipBPIssueDetection",0x14,IgnoreCase,FromStart,-1)
    ;
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs'::__l10::<lambda_3>_> @ 1442a4b80

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs_::__l10::<lambda_3>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_3> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"SortByNetRefHandle",0x12,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg'::__l38::<lambda_3>_> @ 1442a4c10

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg_::__l38::<lambda_3>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_3> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"FindById=",9,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs'::__l12::<lambda_4>_> @ 1442a4ca0

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs_::__l12::<lambda_4>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_4> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"SkipActorChildIssueDetection",0x1c,IgnoreCase,
                            FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// ForAllExclusiveBitsByPredicate<TFunction<void___cdecl(unsigned_int)>_&,`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_1>_&,`UE::Net::FNetBitArrayHelper::ForAllExclusiveBits<TFunction<void___cdecl(unsigned_int)>_&,`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_1>_&>'::__l2::<lambda_1>_const_&> @ 1442a4ea0

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllExclusiveBitsByPredicate<TFunction<void___cdecl(unsigned_int)>_&,_UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects_::__l2::<lambda_1>_&,_UE::Net::FNetBitArrayHelper::ForAllExclusiveBits<TFunction<void___cdecl(unsigned_int)>_&,_UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects_::__l2::<lambda_1>_&>_::__l2::<lambda_1>_const_&>
          (uint *param_1,uint *param_2,uint param_3,uint param_4,
          TFunction<void___cdecl(unsigned_int)> *param_5,<lambda_1> *param_6,<lambda_1> *param_7)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  FReplicationPrioritization *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint local_68;
  uint local_64;
  uint local_60 [2];
  uint local_58;
  uint local_54;
  
  local_68 = 0;
  uVar12 = param_3 - 1;
  uVar13 = 0xffffffff >> (-(char)param_4 & 0x1fU);
  local_64 = 0;
  if (param_3 != 0) {
    lVar14 = (longlong)param_1 - (longlong)param_2;
    local_58 = uVar13;
    local_54 = uVar12;
    do {
      uVar15 = *(uint *)((longlong)param_2 + lVar14);
      uVar16 = 0xffffffff;
      if (local_68 == uVar12) {
        uVar16 = uVar13;
      }
      uVar11 = local_64;
      for (uVar16 = uVar16 & (uVar15 ^ *param_2); uVar16 != 0; uVar16 = uVar16 >> 1) {
        if ((uVar16 & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            uVar13 = ~uVar11 >> 0x1f;
            pFVar3 = param_6->__this;
            uVar12 = 0;
            if ((int)uVar11 < (pFVar3->ObjectIndexToPrioritizer).ArrayNum) {
              uVar12 = uVar13;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar4 = (pFVar3->ObjectIndexToPrioritizer).AllocatorInstance.Data;
            lVar10 = (longlong)(int)uVar11;
            FVar1 = pFVar4[lVar10];
            uVar9 = (ulonglong)(byte)FVar1;
            if (FVar1 != (FScriptContainerElement)0xff) {
              pFVar3 = param_6->__this;
              if (((pFVar3->PrioritizerInfos).ArrayNum <= (int)(uint)(byte)FVar1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar5 = (pFVar3->PrioritizerInfos).AllocatorInstance.Data;
              *(int *)(pFVar5 + uVar9 * 0x18 + 0x10) = *(int *)(pFVar5 + uVar9 * 0x18 + 0x10) + -1;
              if ((*(longlong *)(pFVar5 + uVar9 * 0x18) == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                     ,0x67,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              plVar8 = *(longlong **)(pFVar5 + uVar9 * 0x18);
              pFVar3 = param_6->__this;
              pcVar2 = *(code **)(*plVar8 + 0x2e0);
              uVar12 = 0;
              if ((int)uVar11 < (pFVar3->NetObjectPrioritizationInfos).ArrayNum) {
                uVar12 = uVar13;
              }
              if ((uVar12 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (*pcVar2)(plVar8,uVar11,
                        (pFVar3->NetObjectPrioritizationInfos).AllocatorInstance.Data + lVar10 * 8);
            }
            pFVar4[lVar10] = (FScriptContainerElement)0xff;
            pFVar3 = param_6->__this;
            uVar12 = 0;
            if ((int)uVar11 < (pFVar3->DefaultPriorities).ArrayNum) {
              uVar12 = uVar13;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)((pFVar3->DefaultPriorities).AllocatorInstance.Data + lVar10 * 4) =
                 0x3f800000;
          }
          else {
            local_60[0] = uVar11;
            Core::Private::Function::CheckCallable(*(void **)param_5);
            pcVar2 = *(code **)param_5;
            plVar8 = *(longlong **)&param_5->field_0x28;
            if (*(longlong **)&param_5->field_0x28 == (longlong *)0x0) {
              plVar8 = (longlong *)&param_5->field_0x10;
            }
            uVar7 = (**(code **)(*plVar8 + 8))();
            (*pcVar2)(uVar7,local_60);
          }
        }
        uVar15 = uVar15 >> 1;
        uVar11 = uVar11 + 1;
        uVar12 = local_54;
        uVar13 = local_58;
      }
      param_2 = param_2 + 1;
      local_68 = local_68 + 1;
      local_64 = local_64 + 0x20;
    } while (local_68 < param_3);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking'::__l3::<lambda_1>_&> @ 1442a5200

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<_UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking_::__l3::<lambda_1>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_1> *param_4)

{
  FReplicatedObjectInfo *pFVar1;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *pTVar2;
  uint uVar3;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *pTVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_res18 [2];
  uint local_88;
  FNetRefHandle_u_0 local_78;
  undefined8 local_70;
  uint uStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  int iStack_4c;
  
  local_88 = 0;
  uVar9 = 0;
  if (param_2 != 0) {
    do {
      uVar10 = 0xffffffff;
      if (uVar9 == param_2 - 1) {
        uVar10 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar8 = local_88;
      for (uVar10 = uVar10 & *param_1; uVar10 != 0; uVar10 = uVar10 >> 1) {
        if ((uVar10 & 1) != 0) {
          pFVar1 = param_4->ReplicationInfo;
          local_res18[0] = uVar8;
          if (*(int *)&(pFVar1->UnresolvedObjectReferences).field_0x8 !=
              *(int *)&(pFVar1->UnresolvedObjectReferences).field_0x34) {
            TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                        *)&pFVar1->UnresolvedObjectReferences,uVar8,local_res18);
          }
          uVar3 = local_res18[0];
          pTVar2 = param_4->NewUnresolvedReferences;
          iStack_64 = -1;
          if (*(int *)&pTVar2->field_0x48 == 0) {
            local_60 = 0xffffffff;
            iVar7 = -1;
          }
          else {
            puVar5 = &pTVar2->field_0x38;
            if (*(undefined1 **)&pTVar2->field_0x40 != (undefined1 *)0x0) {
              puVar5 = *(undefined1 **)&pTVar2->field_0x40;
            }
            iVar7 = *(int *)(puVar5 + ((longlong)*(int *)&pTVar2->field_0x48 - 1U &
                                      (longlong)(int)local_res18[0]) * 4);
            iStack_64 = iVar7;
            if (iVar7 != -1) {
              do {
                iVar7 = *(int *)(*(longlong *)pTVar2 + 0x10 + (longlong)iStack_64 * 0x18);
                if (*(uint *)(*(longlong *)pTVar2 + (longlong)iStack_64 * 0x18) == local_res18[0])
                break;
                iStack_64 = iVar7;
              } while (iVar7 != -1);
            }
          }
          local_70._0_4_ = SUB84(pTVar2,0);
          local_70._4_4_ = (undefined4)((ulonglong)pTVar2 >> 0x20);
          pTVar4 = pTVar2;
          local_58 = (undefined4)local_70;
          uStack_54 = local_70._4_4_;
          iStack_4c = iStack_64;
          uStack_68 = local_res18[0];
          uStack_50 = local_res18[0];
          iVar6 = iStack_64;
joined_r0x0001442a5366:
          local_70 = pTVar4;
          if (iVar6 != -1) {
            local_78 = *(FNetRefHandle_u_0 *)(*(longlong *)pTVar2 + 8 + (longlong)iVar6 * 0x18);
            TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
            ::EmplaceByHash<unsigned_int_const_&,UE::Net::FNetRefHandle_const_&>
                      ((TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                        *)&pFVar1->UnresolvedObjectReferences,uVar8,local_res18,
                       (FNetRefHandle *)&local_78._s_0);
            pTVar4 = local_70;
            iVar6 = iVar7;
            if (iVar7 != -1) {
              do {
                iVar7 = *(int *)(*(longlong *)pTVar2 + 0x10 + (longlong)iVar6 * 0x18);
                if (*(uint *)(*(longlong *)pTVar2 + (longlong)iVar6 * 0x18) == uVar3) break;
                iVar6 = iVar7;
              } while (iVar7 != -1);
            }
            goto joined_r0x0001442a5366;
          }
        }
        uVar8 = uVar8 + 1;
      }
      param_1 = param_1 + 1;
      local_88 = local_88 + 0x20;
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_2);
  }
  return;
}

// ForAllSetBits<`UObjectReplicationBridge::PrintNetCullDistances'::__l2::<lambda_2>_&> @ 1442a5470

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<_UObjectReplicationBridge::PrintNetCullDistances_::__l2::<lambda_2>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_2> *param_4)

{
  TMap<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>_>
  *this;
  FWorldLocations *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  UObject *pUVar9;
  FObjectInfo *pFVar10;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined1 *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_res18;
  uint local_98;
  int local_94;
  float local_90 [2];
  int local_88;
  uint local_84;
  uint local_80;
  ulonglong local_78;
  ulonglong *local_70;
  float *local_68;
  float *local_60;
  ulonglong uVar11;
  
  fVar4 = __real_7f7fffff;
  uVar11 = 0;
  local_res18 = 0;
  uVar19 = 0xffffffff >> (-(char)param_3 & 0x1fU);
  local_98 = 0;
  local_80 = param_2 - 1;
  uVar14 = uVar11;
  local_84 = uVar19;
  uVar12 = local_80;
  if (param_2 != 0) {
    do {
      uVar20 = 0xffffffff;
      if ((uint)uVar11 == uVar12) {
        uVar20 = uVar19;
      }
      uVar20 = uVar20 & *param_1;
      uVar8 = (uint)uVar11;
      uVar13 = (uint)uVar14;
      if (uVar20 != 0) {
        uVar21 = 1;
        do {
          uVar19 = (uint)uVar14;
          if (((uVar20 & 1) != 0) &&
             (pUVar9 = Net::Private::FNetRefHandleManager::GetReplicatedObjectInstance
                                 ((FNetRefHandleManager *)param_4->__this->_padding_,uVar19),
             pUVar9 != (UObject *)0x0)) {
            local_78 = *(ulonglong *)&pUVar9->field_0x10;
            this = param_4->ClassCullDistanceMap;
            uVar12 = ((uint)(local_78 >> 0x14) & 0xffff ^ (uint)(local_78 >> 4)) * -0x7a143595;
            uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
            uVar12 = uVar12 >> 0x10 ^ uVar12;
            if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
              puVar16 = &this->field_0x38;
              if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
                puVar16 = *(undefined1 **)&this->field_0x40;
              }
              iVar6 = *(int *)(puVar16 + (ulonglong)(*(int *)&this->field_0x48 - 1U & uVar12) * 4);
              if (iVar6 != -1) {
                do {
                  puVar18 = (ulonglong *)((longlong)iVar6 * 0x70 + *(longlong *)this);
                  if (*puVar18 == local_78) {
                    if (puVar18 != (ulonglong *)0x0) goto LAB_1442a5602;
                    break;
                  }
                  iVar6 = (int)puVar18[0xd];
                } while (iVar6 != -1);
              }
            }
            local_70 = &local_78;
            TSet<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
                      (this,(uint)&local_94,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)uVar12,
                       (bool *)&local_70);
            puVar18 = (ulonglong *)((longlong)local_94 * 0x70 + *(longlong *)this);
LAB_1442a5602:
            *(int *)(puVar18 + 2) = (int)puVar18[2] + 1;
            puVar18[1] = local_78;
            pFVar1 = param_4->WorldLocations;
            pFVar2 = (pFVar1->ValidInfoIndexes).Storage.AllocatorInstance.Data;
            if (((pFVar1->ValidInfoIndexes).BitCount <= uVar19) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((*(uint *)(pFVar2 + (uVar14 >> 5) * 4) & uVar21) != 0) &&
               (pFVar10 = FWorldLocations::GetObjectInfo(pFVar1,uVar19),
               fVar4 != pFVar10->CullDistanceOverride)) {
              *(int *)((longlong)puVar18 + 0x14) = *(int *)((longlong)puVar18 + 0x14) + 1;
            }
            pFVar1 = param_4->WorldLocations;
            pFVar2 = (pFVar1->ValidInfoIndexes).Storage.AllocatorInstance.Data;
            if (((pFVar1->ValidInfoIndexes).BitCount <= uVar19) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2c1,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((*(uint *)(pFVar2 + (uVar14 >> 5) * 4) & uVar21) == 0) {
              local_90[0] = 0.0;
            }
            else {
              pFVar10 = FWorldLocations::GetObjectInfo(pFVar1,uVar19);
              local_90[0] = pFVar10->CullDistanceOverride;
              if (local_90[0] == fVar4) {
                local_90[0] = pFVar10->CullDistance;
              }
            }
            local_90[1] = 0.0;
            if ((int)puVar18[4] != *(int *)((longlong)puVar18 + 0x4c)) {
              puVar17 = puVar18 + 10;
              if ((ulonglong *)puVar18[0xb] != (ulonglong *)0x0) {
                puVar17 = (ulonglong *)puVar18[0xb];
              }
              fVar7 = *(float *)((longlong)puVar17 +
                                (ulonglong)((int)puVar18[0xc] - 1U & (uint)local_90[0]) * 4);
              if (fVar7 != -NAN) {
                do {
                  pfVar15 = (float *)((longlong)(int)fVar7 * 0x10 + puVar18[3]);
                  if (local_90[0] == *pfVar15) {
                    if (pfVar15 != (float *)0x0) goto LAB_1442a5757;
                    break;
                  }
                  fVar7 = pfVar15[2];
                } while (fVar7 != -NAN);
              }
            }
            local_68 = local_90;
            local_60 = local_90 + 1;
            TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TPairInitializer<float_const_&,unsigned_int_&&>_>
                      ((TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>
                        *)(puVar18 + 3),(uint)&local_88,
                       (TPairInitializer<float_const_&,unsigned_int_&&> *)
                       (ulonglong)(uint)local_90[0],(bool *)&local_68);
            pfVar15 = (float *)((longlong)local_88 * 0x10 + puVar18[3]);
LAB_1442a5757:
            pfVar15[1] = (float)((int)pfVar15[1] + 1);
          }
          uVar14 = (ulonglong)(uVar19 + 1);
          uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
          uVar20 = uVar20 >> 1;
          uVar19 = local_84;
          uVar8 = local_res18;
          uVar13 = local_98;
          uVar12 = local_80;
        } while (uVar20 != 0);
      }
      local_res18 = uVar8 + 1;
      uVar11 = (ulonglong)local_res18;
      param_1 = param_1 + 1;
      local_98 = uVar13 + 0x20;
      uVar14 = (ulonglong)local_98;
    } while (local_res18 < param_2);
  }
  return;
}

// ForAllSetBits<`UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking'::__l67::<lambda_2>_&> @ 1442a5810

void __cdecl
UE::Net::FNetBitArrayHelper::
ForAllSetBits<_UE::Net::Private::FReplicationReader::UpdateObjectReferenceTracking_::__l67::<lambda_2>_&>
          (uint *param_1,uint param_2,uint param_3,<lambda_2> *param_4)

{
  FReplicatedObjectInfo *pFVar1;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *pTVar2;
  uint uVar3;
  TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
  *pTVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_res18 [2];
  uint local_88;
  FNetRefHandle_u_0 local_78;
  undefined8 local_70;
  uint uStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  int iStack_4c;
  
  local_88 = 0;
  uVar9 = 0;
  if (param_2 != 0) {
    do {
      uVar10 = 0xffffffff;
      if (uVar9 == param_2 - 1) {
        uVar10 = 0xffffffff >> (-(char)param_3 & 0x1fU);
      }
      uVar8 = local_88;
      for (uVar10 = uVar10 & *param_1; uVar10 != 0; uVar10 = uVar10 >> 1) {
        if ((uVar10 & 1) != 0) {
          pFVar1 = param_4->ReplicationInfo;
          local_res18[0] = uVar8;
          if (*(int *)&(pFVar1->ResolvedDynamicObjectReferences).field_0x8 !=
              *(int *)&(pFVar1->ResolvedDynamicObjectReferences).field_0x34) {
            TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
                        *)&pFVar1->ResolvedDynamicObjectReferences,uVar8,local_res18);
          }
          uVar3 = local_res18[0];
          pTVar2 = param_4->NewMappedDynamicReferences;
          iStack_64 = -1;
          if (*(int *)&pTVar2->field_0x48 == 0) {
            local_60 = 0xffffffff;
            iVar7 = -1;
          }
          else {
            puVar5 = &pTVar2->field_0x38;
            if (*(undefined1 **)&pTVar2->field_0x40 != (undefined1 *)0x0) {
              puVar5 = *(undefined1 **)&pTVar2->field_0x40;
            }
            iVar7 = *(int *)(puVar5 + ((longlong)*(int *)&pTVar2->field_0x48 - 1U &
                                      (longlong)(int)local_res18[0]) * 4);
            iStack_64 = iVar7;
            if (iVar7 != -1) {
              do {
                iVar7 = *(int *)(*(longlong *)pTVar2 + 0x10 + (longlong)iStack_64 * 0x18);
                if (*(uint *)(*(longlong *)pTVar2 + (longlong)iStack_64 * 0x18) == local_res18[0])
                break;
                iStack_64 = iVar7;
              } while (iVar7 != -1);
            }
          }
          local_70._0_4_ = SUB84(pTVar2,0);
          local_70._4_4_ = (undefined4)((ulonglong)pTVar2 >> 0x20);
          pTVar4 = pTVar2;
          local_58 = (undefined4)local_70;
          uStack_54 = local_70._4_4_;
          iStack_4c = iStack_64;
          uStack_68 = local_res18[0];
          uStack_50 = local_res18[0];
          iVar6 = iStack_64;
joined_r0x0001442a5976:
          local_70 = pTVar4;
          if (iVar6 != -1) {
            local_78 = *(FNetRefHandle_u_0 *)(*(longlong *)pTVar2 + 8 + (longlong)iVar6 * 0x18);
            TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
            ::EmplaceByHash<unsigned_int_const_&,UE::Net::FNetRefHandle_const_&>
                      ((TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
                        *)&pFVar1->ResolvedDynamicObjectReferences,uVar8,local_res18,
                       (FNetRefHandle *)&local_78._s_0);
            pTVar4 = local_70;
            iVar6 = iVar7;
            if (iVar7 != -1) {
              do {
                iVar7 = *(int *)(*(longlong *)pTVar2 + 0x10 + (longlong)iVar6 * 0x18);
                if (*(uint *)(*(longlong *)pTVar2 + (longlong)iVar6 * 0x18) == uVar3) break;
                iVar6 = iVar7;
              } while (iVar7 != -1);
            }
            goto joined_r0x0001442a5976;
          }
        }
        uVar8 = uVar8 + 1;
      }
      param_1 = param_1 + 1;
      local_88 = local_88 + 0x20;
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_2);
  }
  return;
}

// GetFullNameForCastLogError<UNetObjectPrioritizerConfig> @ 1442a5c10

FString * __cdecl
GetFullNameForCastLogError<UNetObjectPrioritizerConfig>
          (FString *__return_storage_ptr__,UNetObjectPrioritizerConfig *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UFieldOfViewNetObjectPrioritizerConfig> @ 1442a5c40

FString * __cdecl
GetTypeName<UFieldOfViewNetObjectPrioritizerConfig>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UFieldOfViewNetObjectPrioritizerConfig::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNetObjectConnectionFilterConfig> @ 1442a5c80

FString * __cdecl GetTypeName<UNetObjectConnectionFilterConfig>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNetObjectConnectionFilterConfig::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNetObjectCountLimiterConfig> @ 1442a5cc0

FString * __cdecl GetTypeName<UNetObjectCountLimiterConfig>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNetObjectCountLimiterConfig::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<USphereNetObjectPrioritizerConfig> @ 1442a5d00

FString * __cdecl GetTypeName<USphereNetObjectPrioritizerConfig>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = USphereNetObjectPrioritizerConfig::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<USphereWithOwnerBoostNetObjectPrioritizerConfig> @ 1442a5d40

FString * __cdecl
GetTypeName<USphereWithOwnerBoostNetObjectPrioritizerConfig>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<float,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<`UObjectReplicationBridge::PrintNetCullDistances'::__l51::<lambda_5>_>_>_>_> @ 1442a5d80

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<float,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l51::<lambda_5>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_51_::<lambda_5>_>_>_>
          param_4)

{
  code *pcVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar2;
  undefined8 uVar3;
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
LAB_1442a5e73:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar3 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
            iVar10 = 0;
            TVar2 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar12->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar3;
            pTVar12->_s_1 = TVar2;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if (*(float *)(param_1 + iVar6) <= *(float *)(param_1 + (longlong)iVar11 + 2)) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (*(float *)(param_1 + iVar10) <= *(float *)(param_1 + iVar6) &&
                    *(float *)(param_1 + iVar6) != *(float *)(param_1 + iVar10)) break;
                TVar2 = param_1[iVar10]._s_1;
                uVar3 = *(undefined8 *)(param_1[iVar10].ElementData.Pad + 8);
                uVar4 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
                param_1[iVar10]._s_1 = param_1[iVar6]._s_1;
                *(undefined8 *)((longlong)param_1[iVar10].ElementData.Pad + 8) = uVar4;
                param_1[iVar6]._s_1 = TVar2;
                *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar3;
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
      if (*(float *)(param_1 + iVar8) <= *(float *)(param_1 + (longlong)iVar7 + 2)) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if (*(float *)(param_1 + iVar6) <= *(float *)(param_1 + iVar8) &&
        *(float *)(param_1 + iVar8) != *(float *)(param_1 + iVar6)) goto LAB_1442a5e73;
    TVar2 = param_1[iVar6]._s_1;
    uVar3 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
    uVar4 = *(undefined8 *)(param_1[iVar8].ElementData.Pad + 8);
    param_1[iVar6]._s_1 = param_1[iVar8]._s_1;
    *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar4;
    iVar7 = iVar8 * 2 + 1;
    param_1[iVar8]._s_1 = TVar2;
    *(undefined8 *)((longlong)param_1[iVar8].ElementData.Pad + 8) = uVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>_>::FKeyComparisonClass<`UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>_>_>_>_> @ 1442a5f50

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l13::<lambda_4>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>_>::FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_13_::<lambda_4>_>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>_s_1 TVar3;
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
  bool bVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar23;
  int iVar24;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar25;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar26;
  
  if (param_2 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar17) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar17) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar18 = (param_2 + -2) / 2;
  iVar19 = iVar18 * 2 + 1;
  iVar24 = iVar19;
  iVar22 = iVar18;
  do {
    while (param_2 <= iVar19) {
LAB_1442a612a:
      if (iVar22 == 0) {
        iVar19 = param_2 + -1;
        lVar20 = (longlong)iVar19;
        if (0 < iVar19) {
          pTVar23 = param_1 + lVar20;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8);
            iVar24 = 0;
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
            param_1->_s_1 = pTVar23->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38);
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30);
            *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48);
            *(undefined8 *)((param_1->ElementData).Pad + 0x40) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40);
            *(undefined8 *)((param_1->ElementData).Pad + 0x48) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x58);
            *(undefined8 *)((param_1->ElementData).Pad + 0x50) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x50);
            *(undefined8 *)((param_1->ElementData).Pad + 0x58) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x68);
            *(undefined8 *)((param_1->ElementData).Pad + 0x60) =
                 *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x60);
            *(undefined8 *)((param_1->ElementData).Pad + 0x68) = uVar2;
            pTVar23->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18) = uVar6;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20) = uVar7;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28) = uVar8;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30) = uVar9;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38) = uVar10;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40) = uVar11;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48) = uVar12;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x50) = uVar13;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x58) = uVar14;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x60) = uVar15;
            *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x68) = uVar16;
            if (1 < iVar19) {
              do {
                iVar22 = iVar24 * 2;
                iVar18 = iVar22 + 1;
                if (iVar22 + 2 < iVar19) {
                  bVar17 = `UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>::
                           operator()(((((param_4.Predicate)->Predicate).Predicate)->Predicate).
                                      Predicate,(UClass *)param_1[(longlong)iVar22 + 2]._s_1,
                                      (UClass *)param_1[iVar18]._s_1);
                  if (bVar17) {
                    iVar18 = iVar22;
                  }
                  iVar18 = iVar18 + 1;
                }
                pTVar25 = param_1 + iVar18;
                pTVar26 = param_1 + iVar24;
                bVar17 = `UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>::
                         operator()(((((param_4.Predicate)->Predicate).Predicate)->Predicate).
                                    Predicate,(UClass *)pTVar26->_s_1,(UClass *)pTVar25->_s_1);
                if (!bVar17) break;
                uVar2 = *(undefined8 *)((pTVar25->ElementData).Pad + 8);
                TVar3 = pTVar26->_s_1;
                uVar4 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 8);
                uVar5 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x10);
                uVar6 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x18);
                uVar7 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x20);
                uVar8 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x28);
                uVar9 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x30);
                uVar10 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x38);
                uVar11 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x40);
                uVar12 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x48);
                uVar13 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x50);
                uVar14 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x58);
                uVar15 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x60);
                uVar16 = *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x68);
                pTVar26->_s_1 = pTVar25->_s_1;
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 8) = uVar2;
                uVar2 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x18);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar25->ElementData).Pad + 0x10);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x18) = uVar2;
                uVar2 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x28);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x20) =
                     *(undefined8 *)((pTVar25->ElementData).Pad + 0x20);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x28) = uVar2;
                uVar2 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x38);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x30) =
                     *(undefined8 *)((pTVar25->ElementData).Pad + 0x30);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x38) = uVar2;
                uVar2 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x48);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x40) =
                     *(undefined8 *)((pTVar25->ElementData).Pad + 0x40);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x48) = uVar2;
                uVar2 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x58);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x50) =
                     *(undefined8 *)((pTVar25->ElementData).Pad + 0x50);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x58) = uVar2;
                uVar2 = *(undefined8 *)((pTVar25->ElementData).Pad + 0x68);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x60) =
                     *(undefined8 *)((pTVar25->ElementData).Pad + 0x60);
                *(undefined8 *)((longlong)(pTVar26->ElementData).Pad + 0x68) = uVar2;
                pTVar25->_s_1 = TVar3;
                *(undefined8 *)((pTVar25->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x10) = uVar5;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x18) = uVar6;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x20) = uVar7;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x28) = uVar8;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x30) = uVar9;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x38) = uVar10;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x40) = uVar11;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x48) = uVar12;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x50) = uVar13;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x58) = uVar14;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x60) = uVar15;
                *(undefined8 *)((pTVar25->ElementData).Pad + 0x68) = uVar16;
                iVar24 = iVar18;
              } while (iVar18 * 2 + 1 < iVar19);
            }
            lVar20 = lVar20 + -1;
            iVar19 = iVar19 + -1;
            pTVar23 = pTVar23 + -1;
          } while (0 < lVar20);
        }
        return;
      }
      iVar18 = iVar22 + -1;
      iVar19 = iVar24 + -2;
      iVar24 = iVar19;
      iVar22 = iVar18;
    }
    iVar19 = iVar18 * 2;
    iVar21 = iVar19 + 1;
    if (iVar19 + 2 < param_2) {
      bVar17 = `UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>::operator()
                         (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                          (UClass *)param_1[(longlong)iVar19 + 2]._s_1,
                          (UClass *)param_1[iVar21]._s_1);
      if (bVar17) {
        iVar21 = iVar19;
      }
      iVar21 = iVar21 + 1;
    }
    pTVar23 = param_1 + iVar21;
    pTVar25 = param_1 + iVar18;
    bVar17 = `UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>::operator()
                       (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                        (UClass *)pTVar25->_s_1,(UClass *)pTVar23->_s_1);
    if (!bVar17) goto LAB_1442a612a;
    uVar2 = *(undefined8 *)((pTVar23->ElementData).Pad + 8);
    iVar19 = iVar21 * 2 + 1;
    TVar3 = pTVar25->_s_1;
    uVar4 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 8);
    uVar5 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x10);
    uVar6 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x18);
    uVar7 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x20);
    uVar8 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x28);
    uVar9 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x30);
    uVar10 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x38);
    uVar11 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x40);
    uVar12 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x48);
    uVar13 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x50);
    uVar14 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x58);
    uVar15 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x60);
    uVar16 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x68);
    pTVar25->_s_1 = pTVar23->_s_1;
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x18);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar23->ElementData).Pad + 0x10);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x18) = uVar2;
    uVar2 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x28);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x20) =
         *(undefined8 *)((pTVar23->ElementData).Pad + 0x20);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x28) = uVar2;
    uVar2 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x38);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x30) =
         *(undefined8 *)((pTVar23->ElementData).Pad + 0x30);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x38) = uVar2;
    uVar2 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x48);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x40) =
         *(undefined8 *)((pTVar23->ElementData).Pad + 0x40);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x48) = uVar2;
    uVar2 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x58);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x50) =
         *(undefined8 *)((pTVar23->ElementData).Pad + 0x50);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x58) = uVar2;
    uVar2 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x68);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x60) =
         *(undefined8 *)((pTVar23->ElementData).Pad + 0x60);
    *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x68) = uVar2;
    pTVar23->_s_1 = TVar3;
    *(undefined8 *)((pTVar23->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x10) = uVar5;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x18) = uVar6;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x20) = uVar7;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x28) = uVar8;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x30) = uVar9;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x38) = uVar10;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x40) = uVar11;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x48) = uVar12;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x50) = uVar13;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x58) = uVar14;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x60) = uVar15;
    *(undefined8 *)((pTVar23->ElementData).Pad + 0x68) = uVar16;
    iVar18 = iVar21;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>_>::FValueComparisonClass<`UObjectReplicationBridge::PrintNetCullDistances'::__l9::<lambda_3>_>_>_>_> @ 1442a6360

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>_>::FValueComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l9::<lambda_3>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>_>::FValueComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_9_::<lambda_3>_>_>_>
          param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>_s_1 TVar5;
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
  bool bVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  
  if (param_2 < 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar20 = (param_2 + -2) / 2;
  iVar21 = iVar20 * 2 + 1;
  iVar30 = iVar21;
  iVar28 = iVar20;
  do {
    while (param_2 <= iVar21) {
LAB_1442a652e:
      if (iVar28 == 0) {
        iVar21 = param_2 + -1;
        lVar22 = (longlong)iVar21;
        if (0 < iVar21) {
          pTVar29 = param_1 + lVar22;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 8);
            iVar30 = 0;
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            uVar11 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
            uVar12 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
            uVar13 = *(undefined8 *)((param_1->ElementData).Pad + 0x40);
            uVar14 = *(undefined8 *)((param_1->ElementData).Pad + 0x48);
            uVar15 = *(undefined8 *)((param_1->ElementData).Pad + 0x50);
            uVar16 = *(undefined8 *)((param_1->ElementData).Pad + 0x58);
            uVar17 = *(undefined8 *)((param_1->ElementData).Pad + 0x60);
            uVar18 = *(undefined8 *)((param_1->ElementData).Pad + 0x68);
            param_1->_s_1 = pTVar29->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x38);
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x30);
            *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x48);
            *(undefined8 *)((param_1->ElementData).Pad + 0x40) =
                 *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x40);
            *(undefined8 *)((param_1->ElementData).Pad + 0x48) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x58);
            *(undefined8 *)((param_1->ElementData).Pad + 0x50) =
                 *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x50);
            *(undefined8 *)((param_1->ElementData).Pad + 0x58) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x68);
            *(undefined8 *)((param_1->ElementData).Pad + 0x60) =
                 *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x60);
            *(undefined8 *)((param_1->ElementData).Pad + 0x68) = uVar4;
            pTVar29->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x10) = uVar7;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x18) = uVar8;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x20) = uVar9;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x28) = uVar10;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x30) = uVar11;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x38) = uVar12;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x40) = uVar13;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x48) = uVar14;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x50) = uVar15;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x58) = uVar16;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x60) = uVar17;
            *(undefined8 *)((longlong)(pTVar29->ElementData).Pad + 0x68) = uVar18;
            if (1 < iVar21) {
              do {
                iVar28 = iVar30 * 2;
                iVar20 = iVar28 + 1;
                if (iVar28 + 2 < iVar21) {
                  fVar31 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::
                           FCullDistanceInfo::FindMostUsedCullDistance
                                     ((void *)((longlong)(iVar28 + 2) * 0x70 + 8 + (longlong)param_1
                                              ));
                  fVar32 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::
                           FCullDistanceInfo::FindMostUsedCullDistance
                                     ((void *)((longlong)iVar20 * 0x70 + 8 + (longlong)param_1));
                  if (fVar32 <= fVar31) {
                    iVar20 = iVar28;
                  }
                  iVar20 = iVar20 + 1;
                }
                lVar23 = (longlong)iVar30;
                lVar26 = lVar23 * 0x70;
                fVar31 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo
                         ::FindMostUsedCullDistance((void *)((longlong)param_1 + lVar26 + 8));
                lVar24 = (longlong)iVar20;
                lVar25 = lVar24 * 0x70;
                fVar32 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo
                         ::FindMostUsedCullDistance((void *)((longlong)param_1 + lVar25 + 8));
                if (fVar31 < fVar32) break;
                uVar4 = *(undefined8 *)(param_1[lVar24].ElementData.Pad + 8);
                TVar5 = param_1[lVar23]._s_1;
                uVar6 = *(undefined8 *)(param_1[lVar23].ElementData.Pad + 8);
                puVar1 = (undefined8 *)(lVar26 + 0x10 + (longlong)param_1);
                uVar7 = *puVar1;
                uVar8 = puVar1[1];
                puVar1 = (undefined8 *)(lVar26 + 0x20 + (longlong)param_1);
                uVar9 = *puVar1;
                uVar10 = puVar1[1];
                puVar1 = (undefined8 *)(lVar26 + 0x30 + (longlong)param_1);
                uVar11 = *puVar1;
                uVar12 = puVar1[1];
                puVar1 = (undefined8 *)(lVar26 + 0x40 + (longlong)param_1);
                uVar13 = *puVar1;
                uVar14 = puVar1[1];
                puVar1 = (undefined8 *)(lVar26 + 0x50 + (longlong)param_1);
                uVar15 = *puVar1;
                uVar16 = puVar1[1];
                puVar1 = (undefined8 *)(lVar26 + 0x60 + (longlong)param_1);
                uVar17 = *puVar1;
                uVar18 = puVar1[1];
                param_1[lVar23]._s_1 = param_1[lVar24]._s_1;
                *(undefined8 *)((longlong)param_1[lVar23].ElementData.Pad + 8) = uVar4;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x10);
                uVar4 = puVar1[1];
                puVar2 = (undefined8 *)(lVar26 + 0x10 + (longlong)param_1);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x20);
                uVar4 = puVar1[1];
                puVar2 = (undefined8 *)(lVar26 + 0x20 + (longlong)param_1);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x30);
                uVar4 = puVar1[1];
                puVar2 = (undefined8 *)(lVar26 + 0x30 + (longlong)param_1);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x40);
                uVar4 = puVar1[1];
                puVar2 = (undefined8 *)(lVar26 + 0x40 + (longlong)param_1);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x50);
                uVar4 = puVar1[1];
                puVar2 = (undefined8 *)(lVar26 + 0x50 + (longlong)param_1);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x60);
                uVar4 = puVar1[1];
                puVar2 = (undefined8 *)(lVar26 + 0x60 + (longlong)param_1);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                param_1[lVar24]._s_1 = TVar5;
                *(undefined8 *)((longlong)param_1[lVar24].ElementData.Pad + 8) = uVar6;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x10);
                *puVar1 = uVar7;
                puVar1[1] = uVar8;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x20);
                *puVar1 = uVar9;
                puVar1[1] = uVar10;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x30);
                *puVar1 = uVar11;
                puVar1[1] = uVar12;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x40);
                *puVar1 = uVar13;
                puVar1[1] = uVar14;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x50);
                *puVar1 = uVar15;
                puVar1[1] = uVar16;
                puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x60);
                *puVar1 = uVar17;
                puVar1[1] = uVar18;
                iVar30 = iVar20;
              } while (iVar20 * 2 + 1 < iVar21);
            }
            iVar21 = iVar21 + -1;
            lVar22 = lVar22 + -1;
            pTVar29 = pTVar29 + -1;
          } while (0 < lVar22);
        }
        return;
      }
      iVar20 = iVar28 + -1;
      iVar21 = iVar30 + -2;
      iVar30 = iVar21;
      iVar28 = iVar20;
    }
    iVar21 = iVar20 * 2;
    iVar27 = iVar21 + 1;
    if (iVar21 + 2 < param_2) {
      fVar31 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
               FindMostUsedCullDistance
                         ((void *)((longlong)(iVar21 + 2) * 0x70 + 8 + (longlong)param_1));
      fVar32 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
               FindMostUsedCullDistance((void *)((longlong)iVar27 * 0x70 + 8 + (longlong)param_1));
      if (fVar32 <= fVar31) {
        iVar27 = iVar21;
      }
      iVar27 = iVar27 + 1;
    }
    lVar22 = (longlong)iVar20;
    lVar25 = lVar22 * 0x70;
    fVar31 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
             FindMostUsedCullDistance((void *)((longlong)param_1 + lVar25 + 8));
    lVar23 = (longlong)iVar27;
    lVar24 = lVar23 * 0x70;
    fVar32 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
             FindMostUsedCullDistance((void *)((longlong)param_1 + lVar24 + 8));
    if (fVar31 < fVar32) goto LAB_1442a652e;
    uVar4 = *(undefined8 *)(param_1[lVar23].ElementData.Pad + 8);
    iVar21 = iVar27 * 2 + 1;
    TVar5 = param_1[lVar22]._s_1;
    uVar6 = *(undefined8 *)(param_1[lVar22].ElementData.Pad + 8);
    puVar1 = (undefined8 *)(lVar25 + 0x10 + (longlong)param_1);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    puVar1 = (undefined8 *)(lVar25 + 0x20 + (longlong)param_1);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    puVar1 = (undefined8 *)(lVar25 + 0x30 + (longlong)param_1);
    uVar11 = *puVar1;
    uVar12 = puVar1[1];
    puVar1 = (undefined8 *)(lVar25 + 0x40 + (longlong)param_1);
    uVar13 = *puVar1;
    uVar14 = puVar1[1];
    puVar1 = (undefined8 *)(lVar25 + 0x50 + (longlong)param_1);
    uVar15 = *puVar1;
    uVar16 = puVar1[1];
    puVar1 = (undefined8 *)(lVar25 + 0x60 + (longlong)param_1);
    uVar17 = *puVar1;
    uVar18 = puVar1[1];
    param_1[lVar22]._s_1 = param_1[lVar23]._s_1;
    *(undefined8 *)((longlong)param_1[lVar22].ElementData.Pad + 8) = uVar4;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x10);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar25 + 0x10 + (longlong)param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x20);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar25 + 0x20 + (longlong)param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x30);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar25 + 0x30 + (longlong)param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x40);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar25 + 0x40 + (longlong)param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x50);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar25 + 0x50 + (longlong)param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x60);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar25 + 0x60 + (longlong)param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    param_1[lVar23]._s_1 = TVar5;
    *(undefined8 *)((longlong)param_1[lVar23].ElementData.Pad + 8) = uVar6;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x10);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x20);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x30);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x40);
    *puVar1 = uVar13;
    puVar1[1] = uVar14;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x50);
    *puVar1 = uVar15;
    puVar1[1] = uVar16;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar24 + 0x60);
    *puVar1 = uVar17;
    puVar1[1] = uVar18;
    iVar20 = iVar27;
  } while( true );
}

// HeapSortInternal<`UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::FPushBasedInfo,int,FIdentityFunctor,`UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::<lambda_2>_> @ 1442a6760

void __cdecl
AlgoImpl::
HeapSortInternal<_UObjectReplicationBridge::PrintPushBasedStatuses_::__l2::FPushBasedInfo,int,FIdentityFunctor,_UObjectReplicationBridge::PrintPushBasedStatuses_::__l2::<lambda_2>_>
          (FPushBasedInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  code *pcVar1;
  UClass *pUVar2;
  undefined3 uVar3;
  int iVar4;
  bool bVar5;
  undefined3 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FPushBasedInfo *pFVar12;
  longlong lVar13;
  int iVar14;
  FPushBasedInfo *pFVar15;
  FPushBasedInfo *pFVar16;
  <lambda_2> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar11 = iVar9;
  iVar14 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_1442a6889:
      if (iVar14 == 0) {
        iVar9 = param_2 + -1;
        lVar13 = (longlong)iVar9;
        if (0 < iVar9) {
          pFVar16 = param_1 + lVar13;
          do {
            iVar11 = pFVar16->RefCount;
            bVar7 = pFVar16->bIsFullyPushBased;
            uVar3 = *(undefined3 *)&pFVar16->field_0xd;
            iVar14 = 0;
            pUVar2 = param_1->Class;
            iVar8 = param_1->RefCount;
            bVar5 = param_1->bIsFullyPushBased;
            uVar6 = *(undefined3 *)&param_1->field_0xd;
            param_1->Class = pFVar16->Class;
            param_1->RefCount = iVar11;
            param_1->bIsFullyPushBased = bVar7;
            *(undefined3 *)&param_1->field_0xd = uVar3;
            pFVar16->Class = pUVar2;
            pFVar16->RefCount = iVar8;
            pFVar16->bIsFullyPushBased = bVar5;
            *(undefined3 *)&pFVar16->field_0xd = uVar6;
            if (1 < iVar9) {
              do {
                iVar8 = iVar14 * 2;
                iVar11 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  bVar7 = `UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::<lambda_2>::
                          operator()(local_res20,param_1 + (iVar8 + 2),param_1 + iVar11);
                  if (bVar7) {
                    iVar11 = iVar8;
                  }
                  iVar11 = iVar11 + 1;
                }
                pFVar12 = param_1 + iVar11;
                pFVar15 = param_1 + iVar14;
                bVar7 = `UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::<lambda_2>::
                        operator()(local_res20,pFVar15,pFVar12);
                if (!bVar7) break;
                pUVar2 = pFVar15->Class;
                iVar14 = pFVar15->RefCount;
                bVar5 = pFVar15->bIsFullyPushBased;
                uVar6 = *(undefined3 *)&pFVar15->field_0xd;
                iVar8 = pFVar12->RefCount;
                bVar7 = pFVar12->bIsFullyPushBased;
                uVar3 = *(undefined3 *)&pFVar12->field_0xd;
                pFVar15->Class = pFVar12->Class;
                pFVar15->RefCount = iVar8;
                pFVar15->bIsFullyPushBased = bVar7;
                *(undefined3 *)&pFVar15->field_0xd = uVar3;
                pFVar12->Class = pUVar2;
                pFVar12->RefCount = iVar14;
                pFVar12->bIsFullyPushBased = bVar5;
                *(undefined3 *)&pFVar12->field_0xd = uVar6;
                iVar14 = iVar11;
              } while (iVar11 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar13 = lVar13 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar8 = iVar14 + -1;
      iVar9 = iVar11 + -2;
      iVar11 = iVar9;
      iVar14 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      bVar7 = `UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::<lambda_2>::operator()
                        (local_res20,param_1 + (iVar9 + 2),param_1 + iVar10);
      if (bVar7) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar12 = param_1 + iVar10;
    pFVar16 = param_1 + iVar8;
    bVar7 = `UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::<lambda_2>::operator()
                      (local_res20,pFVar16,pFVar12);
    if (!bVar7) goto LAB_1442a6889;
    iVar8 = pFVar12->RefCount;
    bVar7 = pFVar12->bIsFullyPushBased;
    uVar3 = *(undefined3 *)&pFVar12->field_0xd;
    iVar9 = iVar10 * 2 + 1;
    pUVar2 = pFVar16->Class;
    iVar4 = pFVar16->RefCount;
    bVar5 = pFVar16->bIsFullyPushBased;
    uVar6 = *(undefined3 *)&pFVar16->field_0xd;
    pFVar16->Class = pFVar12->Class;
    pFVar16->RefCount = iVar8;
    pFVar16->bIsFullyPushBased = bVar7;
    *(undefined3 *)&pFVar16->field_0xd = uVar3;
    pFVar12->Class = pUVar2;
    pFVar12->RefCount = iVar4;
    pFVar12->bIsFullyPushBased = bVar5;
    *(undefined3 *)&pFVar12->field_0xd = uVar6;
    iVar8 = iVar10;
  } while( true );
}

// HeapSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,`UE::Net::Private::ObjectBridgeDebugging::SortByClassName'::__l2::<lambda_1>_> @ 1442a6990

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByClassName_::__l2::<lambda_1>_>
          (FRootObjectData *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  code *pcVar1;
  FNetRefHandle_u_0 FVar2;
  FNetRefHandle_u_0 FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FRootObjectData *pFVar15;
  FRootObjectData *pFVar16;
  longlong lVar17;
  FRootObjectData *pFVar18;
  int iVar19;
  <lambda_1> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar19 = iVar12;
  iVar14 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_1442a6acd:
      if (iVar14 == 0) {
        iVar12 = param_2 + -1;
        lVar17 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar18 = param_1 + lVar17;
          do {
            uVar7 = *(undefined4 *)&pFVar18->field_0x4;
            FVar2 = (pFVar18->NetHandle).field0_0x0;
            uVar8 = param_1->ObjectIndex;
            uVar9 = *(undefined4 *)&param_1->field_0x4;
            FVar3 = (param_1->NetHandle).field0_0x0;
            pUVar4 = param_1->Instance;
            pUVar5 = param_1->Class;
            param_1->ObjectIndex = pFVar18->ObjectIndex;
            *(undefined4 *)&param_1->field_0x4 = uVar7;
            (param_1->NetHandle).field0_0x0 = FVar2;
            pUVar6 = pFVar18->Class;
            param_1->Instance = pFVar18->Instance;
            param_1->Class = pUVar6;
            pFVar18->ObjectIndex = uVar8;
            *(undefined4 *)&pFVar18->field_0x4 = uVar9;
            (pFVar18->NetHandle).field0_0x0 = FVar3;
            pFVar18->Instance = pUVar4;
            pFVar18->Class = pUVar5;
            iVar19 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar19 * 2;
                iVar14 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  bVar10 = `UE::Net::Private::ObjectBridgeDebugging::SortByClassName'::__l2::
                           <lambda_1>::operator()
                                     (local_res20,param_1 + (iVar11 + 2),param_1 + iVar14);
                  if (bVar10) {
                    iVar14 = iVar11;
                  }
                  iVar14 = iVar14 + 1;
                }
                pFVar16 = param_1 + iVar14;
                pFVar15 = param_1 + iVar19;
                bVar10 = `UE::Net::Private::ObjectBridgeDebugging::SortByClassName'::__l2::
                         <lambda_1>::operator()(local_res20,pFVar15,pFVar16);
                if (!bVar10) break;
                uVar7 = *(undefined4 *)&pFVar16->field_0x4;
                FVar2 = (pFVar16->NetHandle).field0_0x0;
                uVar8 = pFVar15->ObjectIndex;
                uVar9 = *(undefined4 *)&pFVar15->field_0x4;
                FVar3 = (pFVar15->NetHandle).field0_0x0;
                pUVar4 = pFVar15->Instance;
                pUVar5 = pFVar15->Class;
                pFVar15->ObjectIndex = pFVar16->ObjectIndex;
                *(undefined4 *)&pFVar15->field_0x4 = uVar7;
                (pFVar15->NetHandle).field0_0x0 = FVar2;
                pUVar6 = pFVar16->Class;
                pFVar15->Instance = pFVar16->Instance;
                pFVar15->Class = pUVar6;
                pFVar16->ObjectIndex = uVar8;
                *(undefined4 *)&pFVar16->field_0x4 = uVar9;
                (pFVar16->NetHandle).field0_0x0 = FVar3;
                pFVar16->Instance = pUVar4;
                pFVar16->Class = pUVar5;
                iVar19 = iVar14;
              } while (iVar14 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar17 = lVar17 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar11 = iVar14 + -1;
      iVar12 = iVar19 + -2;
      iVar19 = iVar12;
      iVar14 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar13 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      bVar10 = `UE::Net::Private::ObjectBridgeDebugging::SortByClassName'::__l2::<lambda_1>::
               operator()(local_res20,param_1 + (iVar12 + 2),param_1 + iVar13);
      if (bVar10) {
        iVar13 = iVar12;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar15 = param_1 + iVar13;
    pFVar18 = param_1 + iVar11;
    bVar10 = `UE::Net::Private::ObjectBridgeDebugging::SortByClassName'::__l2::<lambda_1>::
             operator()(local_res20,pFVar18,pFVar15);
    if (!bVar10) goto LAB_1442a6acd;
    uVar7 = *(undefined4 *)&pFVar15->field_0x4;
    FVar2 = (pFVar15->NetHandle).field0_0x0;
    iVar12 = iVar13 * 2 + 1;
    uVar8 = pFVar18->ObjectIndex;
    uVar9 = *(undefined4 *)&pFVar18->field_0x4;
    FVar3 = (pFVar18->NetHandle).field0_0x0;
    pUVar4 = pFVar18->Instance;
    pUVar5 = pFVar18->Class;
    pFVar18->ObjectIndex = pFVar15->ObjectIndex;
    *(undefined4 *)&pFVar18->field_0x4 = uVar7;
    (pFVar18->NetHandle).field0_0x0 = FVar2;
    pUVar6 = pFVar15->Class;
    pFVar18->Instance = pFVar15->Instance;
    pFVar18->Class = pUVar6;
    pFVar15->ObjectIndex = uVar8;
    *(undefined4 *)&pFVar15->field_0x4 = uVar9;
    (pFVar15->NetHandle).field0_0x0 = FVar3;
    pFVar15->Instance = pUVar4;
    pFVar15->Class = pUVar5;
    iVar11 = iVar13;
  } while( true );
}

// HeapSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,`UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle'::__l2::<lambda_1>_> @ 1442a6c00

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>
          (FRootObjectData *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FRootObjectData *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  int iVar5;
  FNetRefHandle_u_0 FVar6;
  FNetRefHandle_u_0 FVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  FRootObjectData *pFVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  FRootObjectData *pFVar19;
  <lambda_1> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,TReversePredicate<_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>_>
            (param_1,param_2,param_3,(<lambda_1> *)local_res20);
  iVar17 = param_2 + -1;
  lVar16 = (longlong)iVar17;
  if (0 < iVar17) {
    pFVar19 = param_1 + lVar16;
    do {
      uVar11 = *(undefined4 *)&pFVar19->field_0x4;
      FVar6 = (pFVar19->NetHandle).field0_0x0;
      uVar12 = param_1->ObjectIndex;
      uVar13 = *(undefined4 *)&param_1->field_0x4;
      FVar7 = (param_1->NetHandle).field0_0x0;
      pUVar8 = param_1->Instance;
      pUVar9 = param_1->Class;
      param_1->ObjectIndex = pFVar19->ObjectIndex;
      *(undefined4 *)&param_1->field_0x4 = uVar11;
      (param_1->NetHandle).field0_0x0 = FVar6;
      pUVar10 = pFVar19->Class;
      param_1->Instance = pFVar19->Instance;
      param_1->Class = pUVar10;
      pFVar19->ObjectIndex = uVar12;
      *(undefined4 *)&pFVar19->field_0x4 = uVar13;
      (pFVar19->NetHandle).field0_0x0 = FVar7;
      pFVar19->Instance = pUVar8;
      pFVar19->Class = pUVar9;
      iVar18 = 0;
      if (1 < iVar17) {
        do {
          iVar5 = iVar18 * 2;
          if (iVar5 + 2 < iVar17) {
            uVar2 = param_1[(longlong)iVar5 + 2].NetHandle.field0_0x0.Value;
            uVar3 = param_1[(longlong)iVar5 + 1].NetHandle.field0_0x0.Value;
            if ((uVar2 & 0x3fffffffffffff) == (uVar3 & 0x3fffffffffffff)) {
              bVar14 = false;
            }
            else if (uVar2 == 0) {
              bVar14 = false;
            }
            else if (uVar3 == 0) {
              bVar14 = true;
            }
            else if (((uVar2 & 1) == 0) || ((uVar3 & 1) != 0)) {
              if (((uVar2 & 1) == 0) && ((uVar3 & 1) != 0)) {
                bVar14 = true;
              }
              else {
                bVar14 = (uVar2 & 0x3fffffffffffff) < (uVar3 & 0x3fffffffffffff);
              }
            }
            else {
              bVar14 = false;
            }
            iVar5 = iVar18 * 2 + 1;
            if (bVar14) {
              iVar5 = iVar18 * 2;
            }
          }
          iVar5 = iVar5 + 1;
          uVar2 = param_1[iVar18].NetHandle.field0_0x0.Value;
          uVar3 = param_1[iVar5].NetHandle.field0_0x0.Value;
          if (((((uVar3 ^ uVar2) & 0x3fffffffffffff) == 0) || (uVar2 == 0)) ||
             ((uVar3 != 0 &&
              ((((uVar2 & 1) != 0 && ((uVar3 & 1) == 0)) ||
               ((((uVar2 & 1) != 0 || ((uVar3 & 1) == 0)) &&
                ((uVar3 & 0x3fffffffffffff) <= (uVar2 & 0x3fffffffffffff))))))))) break;
          pFVar15 = param_1 + iVar5;
          pFVar1 = param_1 + iVar18;
          uVar12 = pFVar1->ObjectIndex;
          uVar13 = *(undefined4 *)&pFVar1->field_0x4;
          FVar6 = (pFVar1->NetHandle).field0_0x0;
          pUVar8 = param_1[iVar18].Instance;
          pUVar9 = (UClass *)(&param_1[iVar18].Instance)[1];
          uVar11 = *(undefined4 *)&pFVar15->field_0x4;
          FVar7 = (pFVar15->NetHandle).field0_0x0;
          pFVar1 = param_1 + iVar18;
          pFVar1->ObjectIndex = pFVar15->ObjectIndex;
          *(undefined4 *)&pFVar1->field_0x4 = uVar11;
          (pFVar1->NetHandle).field0_0x0 = FVar7;
          pUVar10 = pFVar15->Class;
          param_1[iVar18].Instance = pFVar15->Instance;
          (&param_1[iVar18].Instance)[1] = (UObject *)pUVar10;
          pFVar15->ObjectIndex = uVar12;
          *(undefined4 *)&pFVar15->field_0x4 = uVar13;
          (pFVar15->NetHandle).field0_0x0 = FVar6;
          pFVar15->Instance = pUVar8;
          pFVar15->Class = pUVar9;
          iVar18 = iVar5;
        } while (iVar5 * 2 + 1 < iVar17);
      }
      iVar17 = iVar17 + -1;
      lVar16 = lVar16 + -1;
      pFVar19 = pFVar19 + -1;
    } while (0 < lVar16);
  }
  return;
}

// HeapSortInternal<`UNetObjectCountLimiter::PrioritizeForFill'::__l2::FSortInfo,int,FIdentityFunctor,`UNetObjectCountLimiter::PrioritizeForFill'::__l14::<lambda_2>_> @ 1442a6e00

void __cdecl
AlgoImpl::
HeapSortInternal<_UNetObjectCountLimiter::PrioritizeForFill_::__l2::FSortInfo,int,FIdentityFunctor,_UNetObjectCountLimiter::PrioritizeForFill_::__l14::<lambda_2>_>
          (FSortInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined3 uVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  FSortInfo *pFVar15;
  int iVar16;
  longlong lVar17;
  FSortInfo *pFVar18;
  FSortInfo *pFVar19;
  int iVar20;
  char cVar21;
  <lambda_2> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<_UNetObjectCountLimiter::PrioritizeForFill_::__l2::FSortInfo,int,FIdentityFunctor,TReversePredicate<_UNetObjectCountLimiter::PrioritizeForFill_::__l14::<lambda_2>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar16 = param_2 + -1;
  lVar17 = (longlong)iVar16;
  if (0 < iVar16) {
    pFVar18 = param_1 + lVar17;
    do {
      uVar4 = pFVar18->InternalIndex;
      uVar5 = pFVar18->FrameCountSinceConsidered;
      bVar12 = pFVar18->bIsOwnedByConnection;
      uVar6 = *(undefined3 *)&pFVar18->field_0xd;
      uVar7 = param_1->ObjectIndex;
      uVar8 = param_1->InternalIndex;
      uVar9 = param_1->FrameCountSinceConsidered;
      bVar10 = param_1->bIsOwnedByConnection;
      uVar11 = *(undefined3 *)&param_1->field_0xd;
      param_1->ObjectIndex = pFVar18->ObjectIndex;
      param_1->InternalIndex = uVar4;
      param_1->FrameCountSinceConsidered = uVar5;
      param_1->bIsOwnedByConnection = bVar12;
      *(undefined3 *)&param_1->field_0xd = uVar6;
      pFVar18->ObjectIndex = uVar7;
      pFVar18->InternalIndex = uVar8;
      pFVar18->FrameCountSinceConsidered = uVar9;
      pFVar18->bIsOwnedByConnection = bVar10;
      *(undefined3 *)&pFVar18->field_0xd = uVar11;
      iVar20 = 0;
      if (1 < iVar16) {
        do {
          iVar3 = iVar20 * 2;
          iVar13 = iVar3 + 1;
          if (iVar3 + 2 < iVar16) {
            lVar1 = (longlong)iVar3 + 2;
            lVar14 = (longlong)iVar3 + 1;
            cVar21 = param_1[lVar1].bIsOwnedByConnection;
            if (((bool)cVar21 == param_1[lVar14].bIsOwnedByConnection) &&
               (cVar21 = param_1[lVar14].FrameCountSinceConsidered <=
                         param_1[lVar1].FrameCountSinceConsidered,
               param_1[lVar1].FrameCountSinceConsidered == param_1[lVar14].FrameCountSinceConsidered
               )) {
              cVar21 = param_1[lVar1].InternalIndex < param_1[lVar14].InternalIndex;
            }
            if (cVar21 != '\0') {
              iVar13 = iVar3;
            }
            iVar13 = iVar13 + 1;
          }
          pFVar19 = param_1 + iVar20;
          pFVar15 = param_1 + iVar13;
          cVar21 = pFVar19->bIsOwnedByConnection;
          if (((bool)cVar21 == pFVar15->bIsOwnedByConnection) &&
             (cVar21 = pFVar15->FrameCountSinceConsidered <= pFVar19->FrameCountSinceConsidered,
             pFVar19->FrameCountSinceConsidered == pFVar15->FrameCountSinceConsidered)) {
            cVar21 = pFVar19->InternalIndex < pFVar15->InternalIndex;
          }
          if (cVar21 == '\0') break;
          uVar4 = pFVar15->InternalIndex;
          uVar5 = pFVar15->FrameCountSinceConsidered;
          bVar12 = pFVar15->bIsOwnedByConnection;
          uVar6 = *(undefined3 *)&pFVar15->field_0xd;
          uVar7 = pFVar19->ObjectIndex;
          uVar8 = pFVar19->InternalIndex;
          uVar9 = pFVar19->FrameCountSinceConsidered;
          bVar10 = pFVar19->bIsOwnedByConnection;
          uVar11 = *(undefined3 *)&pFVar19->field_0xd;
          pFVar19->ObjectIndex = pFVar15->ObjectIndex;
          pFVar19->InternalIndex = uVar4;
          pFVar19->FrameCountSinceConsidered = uVar5;
          pFVar19->bIsOwnedByConnection = bVar12;
          *(undefined3 *)&pFVar19->field_0xd = uVar6;
          pFVar15->ObjectIndex = uVar7;
          pFVar15->InternalIndex = uVar8;
          pFVar15->FrameCountSinceConsidered = uVar9;
          pFVar15->bIsOwnedByConnection = bVar10;
          *(undefined3 *)&pFVar15->field_0xd = uVar11;
          iVar20 = iVar13;
        } while (iVar13 * 2 + 1 < iVar16);
      }
      iVar16 = iVar16 + -1;
      lVar17 = lVar17 + -1;
      pFVar18 = pFVar18 + -1;
    } while (0 < lVar17);
  }
  return;
}

// HeapSortInternal<`UNetObjectCountLimiter::PrioritizeForFill'::__l2::FSortInfo,int,FIdentityFunctor,`UNetObjectCountLimiter::PrioritizeForFill'::__l23::<lambda_3>_> @ 1442a6f80

void __cdecl
AlgoImpl::
HeapSortInternal<_UNetObjectCountLimiter::PrioritizeForFill_::__l2::FSortInfo,int,FIdentityFunctor,_UNetObjectCountLimiter::PrioritizeForFill_::__l23::<lambda_3>_>
          (FSortInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_3> param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined3 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FSortInfo *pFVar17;
  int iVar18;
  FSortInfo *pFVar19;
  FSortInfo *pFVar20;
  longlong lVar21;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
LAB_1442a70bb:
      if (iVar16 == 0) {
        iVar14 = param_2 + -1;
        lVar21 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar17 = param_1 + lVar21;
          do {
            uVar4 = pFVar17->InternalIndex;
            uVar5 = pFVar17->FrameCountSinceConsidered;
            bVar12 = pFVar17->bIsOwnedByConnection;
            uVar6 = *(undefined3 *)&pFVar17->field_0xd;
            uVar7 = param_1->ObjectIndex;
            uVar8 = param_1->InternalIndex;
            uVar9 = param_1->FrameCountSinceConsidered;
            bVar10 = param_1->bIsOwnedByConnection;
            uVar11 = *(undefined3 *)&param_1->field_0xd;
            param_1->ObjectIndex = pFVar17->ObjectIndex;
            param_1->InternalIndex = uVar4;
            param_1->FrameCountSinceConsidered = uVar5;
            param_1->bIsOwnedByConnection = bVar12;
            *(undefined3 *)&param_1->field_0xd = uVar6;
            pFVar17->ObjectIndex = uVar7;
            pFVar17->InternalIndex = uVar8;
            pFVar17->FrameCountSinceConsidered = uVar9;
            pFVar17->bIsOwnedByConnection = bVar10;
            *(undefined3 *)&pFVar17->field_0xd = uVar11;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar16 = iVar18 * 2;
                iVar13 = iVar16 + 1;
                if (iVar16 + 2 < iVar14) {
                  lVar1 = (longlong)iVar16 + 2;
                  lVar2 = (longlong)iVar16 + 1;
                  bVar12 = param_1[lVar2].FrameCountSinceConsidered <=
                           param_1[lVar1].FrameCountSinceConsidered;
                  if (param_1[lVar1].FrameCountSinceConsidered ==
                      param_1[lVar2].FrameCountSinceConsidered) {
                    bVar12 = param_1[lVar1].InternalIndex < param_1[lVar2].InternalIndex;
                  }
                  if (bVar12) {
                    iVar13 = iVar16;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar19 = param_1 + iVar13;
                pFVar20 = param_1 + iVar18;
                bVar12 = pFVar19->FrameCountSinceConsidered <= pFVar20->FrameCountSinceConsidered;
                if (pFVar20->FrameCountSinceConsidered == pFVar19->FrameCountSinceConsidered) {
                  bVar12 = pFVar20->InternalIndex < pFVar19->InternalIndex;
                }
                if (!bVar12) break;
                uVar4 = pFVar19->InternalIndex;
                uVar5 = pFVar19->FrameCountSinceConsidered;
                bVar12 = pFVar19->bIsOwnedByConnection;
                uVar6 = *(undefined3 *)&pFVar19->field_0xd;
                uVar7 = pFVar20->ObjectIndex;
                uVar8 = pFVar20->InternalIndex;
                uVar9 = pFVar20->FrameCountSinceConsidered;
                bVar10 = pFVar20->bIsOwnedByConnection;
                uVar11 = *(undefined3 *)&pFVar20->field_0xd;
                pFVar20->ObjectIndex = pFVar19->ObjectIndex;
                pFVar20->InternalIndex = uVar4;
                pFVar20->FrameCountSinceConsidered = uVar5;
                pFVar20->bIsOwnedByConnection = bVar12;
                *(undefined3 *)&pFVar20->field_0xd = uVar6;
                pFVar19->ObjectIndex = uVar7;
                pFVar19->InternalIndex = uVar8;
                pFVar19->FrameCountSinceConsidered = uVar9;
                pFVar19->bIsOwnedByConnection = bVar10;
                *(undefined3 *)&pFVar19->field_0xd = uVar11;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar21 = lVar21 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar21);
        }
        return;
      }
      iVar13 = iVar16 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar16 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar15 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      lVar21 = (longlong)iVar14 + 2;
      lVar1 = (longlong)iVar14 + 1;
      bVar12 = param_1[lVar1].FrameCountSinceConsidered <= param_1[lVar21].FrameCountSinceConsidered
      ;
      if (param_1[lVar21].FrameCountSinceConsidered == param_1[lVar1].FrameCountSinceConsidered) {
        bVar12 = param_1[lVar21].InternalIndex < param_1[lVar1].InternalIndex;
      }
      if (bVar12) {
        iVar15 = iVar14;
      }
      iVar15 = iVar15 + 1;
    }
    pFVar17 = param_1 + iVar15;
    pFVar19 = param_1 + iVar13;
    bVar12 = pFVar17->FrameCountSinceConsidered <= pFVar19->FrameCountSinceConsidered;
    if (pFVar19->FrameCountSinceConsidered == pFVar17->FrameCountSinceConsidered) {
      bVar12 = pFVar19->InternalIndex < pFVar17->InternalIndex;
    }
    if (!bVar12) goto LAB_1442a70bb;
    uVar4 = pFVar17->InternalIndex;
    uVar5 = pFVar17->FrameCountSinceConsidered;
    bVar12 = pFVar17->bIsOwnedByConnection;
    uVar6 = *(undefined3 *)&pFVar17->field_0xd;
    iVar14 = iVar15 * 2 + 1;
    uVar7 = pFVar19->ObjectIndex;
    uVar8 = pFVar19->InternalIndex;
    uVar9 = pFVar19->FrameCountSinceConsidered;
    bVar10 = pFVar19->bIsOwnedByConnection;
    uVar11 = *(undefined3 *)&pFVar19->field_0xd;
    pFVar19->ObjectIndex = pFVar17->ObjectIndex;
    pFVar19->InternalIndex = uVar4;
    pFVar19->FrameCountSinceConsidered = uVar5;
    pFVar19->bIsOwnedByConnection = bVar12;
    *(undefined3 *)&pFVar19->field_0xd = uVar6;
    pFVar17->ObjectIndex = uVar7;
    pFVar17->InternalIndex = uVar8;
    pFVar17->FrameCountSinceConsidered = uVar9;
    pFVar17->bIsOwnedByConnection = bVar10;
    *(undefined3 *)&pFVar17->field_0xd = uVar11;
    iVar13 = iVar15;
  } while( true );
}

// HeapifyInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,TReversePredicate<`UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle'::__l2::<lambda_1>_>_> @ 1442a71e0

void __cdecl
AlgoImpl::
HeapifyInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,TReversePredicate<_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>_>
          (FRootObjectData *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_void___cdecl_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle(TArray<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  FRootObjectData *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  FNetRefHandle_u_0 FVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FNetRefHandle_u_0 FVar10;
  UClass *pUVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  FRootObjectData *pFVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar16 = (param_2 + -2) / 2;
  iVar17 = iVar16 * 2 + 1;
  iVar5 = iVar17;
  iVar19 = iVar16;
  do {
    while (param_2 <= iVar17) {
LAB_1442a736a:
      if (iVar19 == 0) {
        return;
      }
      iVar16 = iVar19 + -1;
      iVar17 = iVar5 + -2;
      iVar5 = iVar17;
      iVar19 = iVar16;
    }
    iVar6 = iVar16 * 2;
    if (iVar6 + 2 < param_2) {
      uVar2 = param_1[(longlong)iVar6 + 2].NetHandle.field0_0x0.Value;
      uVar3 = param_1[(longlong)iVar6 + 1].NetHandle.field0_0x0.Value;
      if ((uVar2 & 0x3fffffffffffff) == (uVar3 & 0x3fffffffffffff)) {
        bVar15 = false;
      }
      else if (uVar2 == 0) {
        bVar15 = false;
      }
      else if (uVar3 == 0) {
        bVar15 = true;
      }
      else if (((uVar2 & 1) == 0) || ((uVar3 & 1) != 0)) {
        if (((uVar2 & 1) == 0) && ((uVar3 & 1) != 0)) {
          bVar15 = true;
        }
        else {
          bVar15 = (uVar2 & 0x3fffffffffffff) < (uVar3 & 0x3fffffffffffff);
        }
      }
      else {
        bVar15 = false;
      }
      iVar6 = iVar16 * 2 + 1;
      if (bVar15) {
        iVar6 = iVar16 * 2;
      }
    }
    iVar6 = iVar6 + 1;
    uVar2 = param_1[iVar16].NetHandle.field0_0x0.Value;
    uVar3 = param_1[iVar6].NetHandle.field0_0x0.Value;
    if ((((uVar3 ^ uVar2) & 0x3fffffffffffff) == 0) || (uVar2 == 0)) goto LAB_1442a736a;
    if (uVar3 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) != 0) goto LAB_1442a7327;
      }
      else if ((uVar3 & 1) == 0) goto LAB_1442a736a;
      if ((uVar3 & 0x3fffffffffffff) <= (uVar2 & 0x3fffffffffffff)) goto LAB_1442a736a;
    }
LAB_1442a7327:
    pFVar18 = param_1 + iVar6;
    pFVar1 = param_1 + iVar16;
    uVar13 = pFVar1->ObjectIndex;
    uVar14 = *(undefined4 *)&pFVar1->field_0x4;
    FVar7 = (pFVar1->NetHandle).field0_0x0;
    pUVar8 = param_1[iVar16].Instance;
    pUVar9 = (UClass *)(&param_1[iVar16].Instance)[1];
    uVar12 = *(undefined4 *)&pFVar18->field_0x4;
    FVar10 = (pFVar18->NetHandle).field0_0x0;
    pFVar1 = param_1 + iVar16;
    pFVar1->ObjectIndex = pFVar18->ObjectIndex;
    *(undefined4 *)&pFVar1->field_0x4 = uVar12;
    (pFVar1->NetHandle).field0_0x0 = FVar10;
    pUVar11 = pFVar18->Class;
    param_1[iVar16].Instance = pFVar18->Instance;
    (&param_1[iVar16].Instance)[1] = (UObject *)pUVar11;
    iVar17 = iVar6 * 2 + 1;
    pFVar18->ObjectIndex = uVar13;
    *(undefined4 *)&pFVar18->field_0x4 = uVar14;
    (pFVar18->NetHandle).field0_0x0 = FVar7;
    pFVar18->Instance = pUVar8;
    pFVar18->Class = pUVar9;
    iVar16 = iVar6;
  } while( true );
}

// HeapifyInternal<`UNetObjectCountLimiter::PrioritizeForFill'::__l2::FSortInfo,int,FIdentityFunctor,TReversePredicate<`UNetObjectCountLimiter::PrioritizeForFill'::__l14::<lambda_2>_>_> @ 1442a73a0

void __cdecl
AlgoImpl::
HeapifyInternal<_UNetObjectCountLimiter::PrioritizeForFill_::__l2::FSortInfo,int,FIdentityFunctor,TReversePredicate<_UNetObjectCountLimiter::PrioritizeForFill_::__l14::<lambda_2>_>_>
          (FSortInfo *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_private:_void___cdecl_UNetObjectCountLimiter::PrioritizeForFill(FNetObjectPrioritizationParams_&)_::_14_::<lambda_2>_>
          param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined3 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  FSortInfo *pFVar17;
  int iVar18;
  FSortInfo *pFVar19;
  char cVar20;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar15 = iVar13 * 2 + 1;
  iVar3 = iVar15;
  iVar18 = iVar13;
  do {
    while (param_2 <= iVar15) {
LAB_1442a74ba:
      if (iVar18 == 0) {
        return;
      }
      iVar13 = iVar18 + -1;
      iVar15 = iVar3 + -2;
      iVar3 = iVar15;
      iVar18 = iVar13;
    }
    iVar15 = iVar13 * 2;
    iVar14 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      lVar1 = (longlong)iVar15 + 2;
      lVar16 = (longlong)iVar15 + 1;
      cVar20 = param_1[lVar1].bIsOwnedByConnection;
      if (((bool)cVar20 == param_1[lVar16].bIsOwnedByConnection) &&
         (cVar20 = param_1[lVar16].FrameCountSinceConsidered <=
                   param_1[lVar1].FrameCountSinceConsidered,
         param_1[lVar1].FrameCountSinceConsidered == param_1[lVar16].FrameCountSinceConsidered)) {
        cVar20 = param_1[lVar1].InternalIndex < param_1[lVar16].InternalIndex;
      }
      if (cVar20 != '\0') {
        iVar14 = iVar15;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar19 = param_1 + iVar13;
    pFVar17 = param_1 + iVar14;
    cVar20 = pFVar19->bIsOwnedByConnection;
    if (((bool)cVar20 == pFVar17->bIsOwnedByConnection) &&
       (cVar20 = pFVar17->FrameCountSinceConsidered <= pFVar19->FrameCountSinceConsidered,
       pFVar19->FrameCountSinceConsidered == pFVar17->FrameCountSinceConsidered)) {
      cVar20 = pFVar19->InternalIndex < pFVar17->InternalIndex;
    }
    if (cVar20 == '\0') goto LAB_1442a74ba;
    uVar4 = pFVar17->InternalIndex;
    uVar5 = pFVar17->FrameCountSinceConsidered;
    bVar12 = pFVar17->bIsOwnedByConnection;
    uVar6 = *(undefined3 *)&pFVar17->field_0xd;
    iVar15 = iVar14 * 2 + 1;
    uVar7 = pFVar19->ObjectIndex;
    uVar8 = pFVar19->InternalIndex;
    uVar9 = pFVar19->FrameCountSinceConsidered;
    bVar10 = pFVar19->bIsOwnedByConnection;
    uVar11 = *(undefined3 *)&pFVar19->field_0xd;
    pFVar19->ObjectIndex = pFVar17->ObjectIndex;
    pFVar19->InternalIndex = uVar4;
    pFVar19->FrameCountSinceConsidered = uVar5;
    pFVar19->bIsOwnedByConnection = bVar12;
    *(undefined3 *)&pFVar19->field_0xd = uVar6;
    pFVar17->ObjectIndex = uVar7;
    pFVar17->InternalIndex = uVar8;
    pFVar17->FrameCountSinceConsidered = uVar9;
    pFVar17->bIsOwnedByConnection = bVar10;
    *(undefined3 *)&pFVar17->field_0xd = uVar11;
    iVar13 = iVar14;
  } while( true );
}

// InternalConstructor<UFieldOfViewNetObjectPrioritizer> @ 1442a74f0

void __cdecl InternalConstructor<UFieldOfViewNetObjectPrioritizer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULocationBasedNetObjectPrioritizer__6B_;
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
              ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)(this + 1),
               0);
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined ***)this = &___7UFieldOfViewNetObjectPrioritizer__6B_;
    *(undefined8 *)&this[2].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UFieldOfViewNetObjectPrioritizerConfig> @ 1442a7550

void __cdecl
InternalConstructor<UFieldOfViewNetObjectPrioritizerConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0x453b8000;
    *(undefined ***)this = &___7UFieldOfViewNetObjectPrioritizerConfig__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x8 = 0x461c4000;
    *(undefined4 *)&this[1].field_0xc = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x10 = 0x42340000;
    *(undefined4 *)&this[1].field_0x14 = 0x453b8000;
    *(undefined4 *)&this[1].field_0x18 = 0x469c4000;
    *(undefined4 *)&this[1].field_0x1c = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x20 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x24 = 0x43480000;
    *(undefined4 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x4 = 0x3dcccccd;
  }
  return;
}

// InternalConstructor<ULocationBasedNetObjectPrioritizer> @ 1442a75e0

void __cdecl InternalConstructor<ULocationBasedNetObjectPrioritizer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULocationBasedNetObjectPrioritizer__6B_;
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
              ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)(this + 1),
               0);
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UNetObjectConnectionFilter> @ 1442a7630

void __cdecl InternalConstructor<UNetObjectConnectionFilter>(FObjectInitializer *param_1)

{
  UNetObjectFilter *this;
  
  this = (UNetObjectFilter *)param_1->Obj;
  if (this != (UNetObjectFilter *)0x0) {
    UNetObjectFilter::UNetObjectFilter(this);
    this->_padding_ = (longlong)&___7UNetObjectConnectionFilter__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].FilteredObjects.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].FilteredObjects.Storage.ArrayNum = 0;
    this[1].FilteredObjects.Storage.ArrayMax = 0;
    this[1].FilteredObjects.BitCount = 0;
    *(undefined4 *)&this[1].NetRefHandleManager = 0;
    *(undefined1 *)((longlong)&this[1].NetRefHandleManager + 4) = 0;
  }
  return;
}

// InternalConstructor<UNetObjectConnectionFilterConfig> @ 1442a76a0

void __cdecl InternalConstructor<UNetObjectConnectionFilterConfig>(FObjectInitializer *param_1)

{
  UNetObjectFilterConfig *this;
  
  this = (UNetObjectFilterConfig *)param_1->Obj;
  if (this != (UNetObjectFilterConfig *)0x0) {
    UNetObjectFilterConfig::UNetObjectFilterConfig(this,param_1);
    *(undefined2 *)(this + 1) = 0x1000;
    *(undefined ***)this = &___7UNetObjectConnectionFilterConfig__6B_;
  }
  return;
}

// InternalConstructor<UNetObjectCountLimiter> @ 1442a76e0

void __cdecl InternalConstructor<UNetObjectCountLimiter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined4 *)&this[3].field_0x14 = 0xffffffff;
    *(undefined ***)this = &___7UNetObjectCountLimiter__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined2 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UNetObjectCountLimiterConfig> @ 1442a7750

void __cdecl InternalConstructor<UNetObjectCountLimiterConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0;
    *(undefined ***)this = &___7UNetObjectCountLimiterConfig__6B_;
    *(undefined4 *)&this[1].field_0x4 = 2;
    *(undefined4 *)&this[1].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[1].field_0xc = 0x3f800000;
    this[1].field_0x10 = 1;
  }
  return;
}

// InternalConstructor<UNetObjectPrioritizer> @ 1442a77a0

void __cdecl InternalConstructor<UNetObjectPrioritizer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UNetObjectPrioritizer__6B_;
  }
  return;
}

// InternalConstructor<UNetObjectPrioritizerConfig> @ 1442a77d0

void __cdecl InternalConstructor<UNetObjectPrioritizerConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNetObjectPrioritizerConfig__6B_;
  }
  return;
}

// InternalConstructor<UNetObjectPrioritizerDefinitions> @ 1442a7800

void __cdecl InternalConstructor<UNetObjectPrioritizerDefinitions>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNetObjectPrioritizerDefinitions__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UObjectReplicationBridgeConfig> @ 1442a7840

void __cdecl InternalConstructor<UObjectReplicationBridgeConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UObjectReplicationBridgeConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined1 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UReplicationBridge> @ 1442a78e0

void __cdecl InternalConstructor<UReplicationBridge>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UReplicationBridge__6B_;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0xc = 0x80;
    *(undefined4 *)&this[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x14 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    *(undefined4 *)&this[5].field_0x14 = 0x80;
    *(undefined4 *)&this[5].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[5].field_0x1c = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined4 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UReplicationDataStream> @ 1442a79c0

void __cdecl InternalConstructor<UReplicationDataStream>(FObjectInitializer *param_1)

{
  UDataStream *this;
  FObjectInitializer *pFVar1;
  
  this = (UDataStream *)param_1->Obj;
  if (this != (UDataStream *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UDataStream::UDataStream(this,pFVar1);
    this->_padding_ = (longlong)&___7UReplicationDataStream__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USphereNetObjectPrioritizer> @ 1442a7a00

void __cdecl InternalConstructor<USphereNetObjectPrioritizer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULocationBasedNetObjectPrioritizer__6B_;
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
              ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)(this + 1),
               0);
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined ***)this = &___7USphereNetObjectPrioritizer__6B_;
    *(undefined8 *)&this[2].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<USphereNetObjectPrioritizerConfig> @ 1442a7a60

void __cdecl InternalConstructor<USphereNetObjectPrioritizerConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0x44fa0000;
    *(undefined ***)this = &___7USphereNetObjectPrioritizerConfig__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x461c4000;
    *(undefined4 *)&this[1].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[1].field_0xc = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x10 = 0x3dcccccd;
  }
  return;
}

// InternalConstructor<USphereWithOwnerBoostNetObjectPrioritizer> @ 1442a7ac0

void __cdecl
InternalConstructor<USphereWithOwnerBoostNetObjectPrioritizer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7ULocationBasedNetObjectPrioritizer__6B_;
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
              ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)(this + 1),
               0);
    *(undefined ***)this = &___7USphereWithOwnerBoostNetObjectPrioritizer__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::
    TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>
              ((TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_> *)&this[2].field_0x18
               ,0);
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<USphereWithOwnerBoostNetObjectPrioritizerConfig> @ 1442a7b50

void __cdecl
InternalConstructor<USphereWithOwnerBoostNetObjectPrioritizerConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0x44fa0000;
    *(undefined ***)this = &___7USphereWithOwnerBoostNetObjectPrioritizerConfig__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x461c4000;
    *(undefined4 *)&this[1].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[1].field_0xc = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x10 = 0x3dcccccd;
    *(undefined4 *)&this[1].field_0x18 = 0x40000000;
  }
  return;
}

// InternalVTableHelperCtorCaller<UFieldOfViewNetObjectPrioritizer> @ 1442a7bb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFieldOfViewNetObjectPrioritizer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFieldOfViewNetObjectPrioritizer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULocationBasedNetObjectPrioritizer__6B_;
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
              ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
               (pUVar1 + 1),0);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7UFieldOfViewNetObjectPrioritizer__6B_;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFieldOfViewNetObjectPrioritizerConfig> @ 1442a7c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFieldOfViewNetObjectPrioritizerConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFieldOfViewNetObjectPrioritizerConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x453b8000;
    *(undefined ***)pUVar1 = &___7UFieldOfViewNetObjectPrioritizerConfig__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x461c4000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x3e4ccccd;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x42340000;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0x453b8000;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0x469c4000;
    *(undefined4 *)&pUVar1[1].field_0x1c = 0x3e4ccccd;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x24 = 0x43480000;
    *(undefined4 *)(pUVar1 + 2) = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x3dcccccd;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULocationBasedNetObjectPrioritizer> @ 1442a7d90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULocationBasedNetObjectPrioritizer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULocationBasedNetObjectPrioritizer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULocationBasedNetObjectPrioritizer__6B_;
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
              ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
               (pUVar1 + 1),0);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectConnectionFilter> @ 1442a7e60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetObjectConnectionFilter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetObjectFilter *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectConnectionFilter::GetPrivateStaticClass();
  this = (UNetObjectFilter *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetObjectFilter *)0x0) {
    UNetObjectFilter::UNetObjectFilter(this,param_1);
    *(undefined4 *)&this[1].NetRefHandleManager = 0;
    this->_padding_ = (longlong)&___7UNetObjectConnectionFilter__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].FilteredObjects.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].FilteredObjects.Storage.ArrayNum = 0;
    this[1].FilteredObjects.Storage.ArrayMax = 0;
    this[1].FilteredObjects.BitCount = 0;
    *(undefined1 *)((longlong)&this[1].NetRefHandleManager + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectConnectionFilterConfig> @ 1442a7f50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetObjectConnectionFilterConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectConnectionFilterConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UNetObjectFilterConfig::UNetObjectFilterConfig((UNetObjectFilterConfig *)pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0x1000;
    *(undefined ***)pUVar1 = &___7UNetObjectConnectionFilterConfig__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectCountLimiter> @ 1442a8000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetObjectCountLimiter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectCountLimiter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetObjectCountLimiter__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined2 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectCountLimiterConfig> @ 1442a80e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetObjectCountLimiterConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectCountLimiterConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNetObjectCountLimiterConfig__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 2;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x3f800000;
    pUVar1[1].field_0x10 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectPrioritizer> @ 1442a81b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetObjectPrioritizer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectPrioritizer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetObjectPrioritizer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectPrioritizerConfig> @ 1442a8260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetObjectPrioritizerConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectPrioritizerConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetObjectPrioritizerConfig__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetObjectPrioritizerDefinitions> @ 1442a8310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetObjectPrioritizerDefinitions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetObjectPrioritizerDefinitions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetObjectPrioritizerDefinitions__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectReplicationBridgeConfig> @ 1442a83d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UObjectReplicationBridgeConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectReplicationBridgeConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 3) = 0;
    *(undefined ***)pUVar1 = &___7UObjectReplicationBridgeConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UReplicationBridge> @ 1442a84f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UReplicationBridge>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UReplicationBridge::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UReplicationBridge__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x14 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0;
    *(undefined4 *)&pUVar1[5].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined4 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UReplicationDataStream> @ 1442a8630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UReplicationDataStream>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataStream *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UReplicationDataStream::GetPrivateStaticClass();
  this = (UDataStream *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataStream *)0x0) {
    UDataStream::UDataStream(this,param_1);
    this->_padding_ = (longlong)&___7UReplicationDataStream__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USphereNetObjectPrioritizer> @ 1442a86e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USphereNetObjectPrioritizer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USphereNetObjectPrioritizer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULocationBasedNetObjectPrioritizer__6B_;
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
              ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
               (pUVar1 + 1),0);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7USphereNetObjectPrioritizer__6B_;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USphereNetObjectPrioritizerConfig> @ 1442a87c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USphereNetObjectPrioritizerConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USphereNetObjectPrioritizerConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x44fa0000;
    *(undefined ***)pUVar1 = &___7USphereNetObjectPrioritizerConfig__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x461c4000;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x3e4ccccd;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x3dcccccd;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USphereWithOwnerBoostNetObjectPrioritizer> @ 1442a8890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USphereWithOwnerBoostNetObjectPrioritizer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USphereWithOwnerBoostNetObjectPrioritizer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULocationBasedNetObjectPrioritizer__6B_;
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
    TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
              ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
               (pUVar1 + 1),0);
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined ***)pUVar1 = &___7USphereWithOwnerBoostNetObjectPrioritizer__6B_;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::
    TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>
              ((TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_> *)
               &pUVar1[2].field_0x18,0);
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USphereWithOwnerBoostNetObjectPrioritizerConfig> @ 1442a8990

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USphereWithOwnerBoostNetObjectPrioritizerConfig>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USphereWithOwnerBoostNetObjectPrioritizerConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x44fa0000;
    *(undefined ***)pUVar1 = &___7USphereWithOwnerBoostNetObjectPrioritizerConfig__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x461c4000;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x3e4ccccd;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x3dcccccd;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0x40000000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<float,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<`UObjectReplicationBridge::PrintNetCullDistances'::__l51::<lambda_5>_>_>_>_> @ 1442a8a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<float,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l51::<lambda_5>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_51_::<lambda_5>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  int iVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **ppTVar9;
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
    ppTVar9 = &local_328;
    do {
      pTVar11 = ppTVar9[1];
      pTVar6 = *ppTVar9;
      pTVar1 = ppTVar9[2];
      iVar5 = (int)((longlong)pTVar11 - (longlong)pTVar6 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar12 = pTVar6;
      if ((int)local_338 != 0) {
LAB_1442a8b20:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar8 = pTVar11 + 1;
          TVar3 = pTVar12[iVar5 / 2]._s_1;
          uVar4 = *(undefined8 *)((longlong)pTVar12[iVar5 / 2].ElementData.Pad + 8);
          pTVar12[iVar5 / 2]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[iVar5 / 2].ElementData.Pad + 8) = uVar2;
          pTVar12->_s_1 = TVar3;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
          pTVar6 = pTVar12;
LAB_1442a8b50:
          pTVar7 = pTVar6;
          pTVar6 = pTVar7 + 1;
          if (pTVar6 <= pTVar11) goto code_r0x0001442a8b59;
          goto LAB_1442a8b63;
        }
        if (pTVar12 < pTVar11) {
          pTVar1 = pTVar12 + 1;
          do {
            pTVar6 = pTVar12;
            if (pTVar1 <= pTVar11) {
              pTVar8 = pTVar1;
              if (0x3f < ((longlong)pTVar11 + (0x10 - (longlong)pTVar1) & 0xfffffffffffffff0U)) {
                do {
                  fVar13 = *(float *)pTVar6;
                  if (*(float *)pTVar8 <= *(float *)pTVar6) {
                    pTVar6 = pTVar8;
                    fVar13 = *(float *)pTVar8;
                  }
                  if (*(float *)(pTVar8 + 1) <= fVar13) {
                    pTVar6 = pTVar8 + 1;
                  }
                  fVar13 = *(float *)pTVar6;
                  if (*(float *)(pTVar8 + 2) <= *(float *)pTVar6) {
                    pTVar6 = pTVar8 + 2;
                    fVar13 = *(float *)(pTVar8 + 2);
                  }
                  if (*(float *)(pTVar8 + 3) <= fVar13) {
                    pTVar6 = pTVar8 + 3;
                  }
                  pTVar8 = pTVar8 + 4;
                } while (pTVar8 <= pTVar11 + -3);
              }
              for (; pTVar8 <= pTVar11; pTVar8 = pTVar8 + 1) {
                if (*(float *)pTVar8 < *(float *)pTVar6 || *(float *)pTVar8 == *(float *)pTVar6) {
                  pTVar6 = pTVar8;
                }
              }
            }
            TVar3 = pTVar6->_s_1;
            uVar2 = *(undefined8 *)((pTVar6->ElementData).Pad + 8);
            pTVar8 = pTVar11 + -1;
            uVar4 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
            pTVar6->_s_1 = pTVar11->_s_1;
            *(undefined8 *)((pTVar6->ElementData).Pad + 8) = uVar4;
            pTVar11->_s_1 = TVar3;
            *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar2;
            pTVar11 = pTVar8;
          } while (pTVar12 < pTVar8);
        }
        goto LAB_1442a8c25;
      }
LAB_1442a8c14:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<float,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l51::<lambda_5>_>_>_>_>
                (pTVar6,iVar5,param_3,param_4);
LAB_1442a8c25:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_328 <= ppTVar9);
  }
  return;
code_r0x0001442a8b59:
  if (*(float *)pTVar12 <= *(float *)pTVar6 && *(float *)pTVar6 != *(float *)pTVar12)
  goto LAB_1442a8b50;
LAB_1442a8b63:
  do {
    pTVar10 = pTVar8;
    pTVar8 = pTVar10 + -1;
    if (pTVar8 <= pTVar12) break;
  } while (*(float *)pTVar8 <= *(float *)pTVar12 && *(float *)pTVar12 != *(float *)pTVar8);
  uVar2 = *(undefined8 *)((longlong)pTVar10 + -8);
  if (pTVar6 <= pTVar8) {
    TVar3 = pTVar6->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar7 + 0x18);
    pTVar6->_s_1 = pTVar8->_s_1;
    *(undefined8 *)((longlong)pTVar7 + 0x18) = uVar2;
    pTVar8->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar10 + -8) = uVar4;
    goto LAB_1442a8b50;
  }
  TVar3 = pTVar12->_s_1;
  uVar4 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  local_338._0_4_ = (int)local_338 + -1;
  pTVar12->_s_1 = pTVar8->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
  pTVar8->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar10 + -8) = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar12) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar11 - (longlong)pTVar6 & 0xfffffffffffffff0U)) {
    if (pTVar6 < pTVar11) {
      *ppTVar9 = pTVar6;
      ppTVar9[1] = pTVar11;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar8 <= pTVar12 + 1) goto LAB_1442a8c25;
    pTVar11 = pTVar10 + -2;
    pTVar6 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar8) {
      *ppTVar9 = pTVar12;
      ppTVar9[1] = pTVar10 + -2;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar11 <= pTVar6) goto LAB_1442a8c25;
  }
  iVar5 = (int)((longlong)pTVar11 - (longlong)pTVar6 >> 4) + 1;
  pTVar12 = pTVar6;
  if ((int)local_338 == 0) goto LAB_1442a8c14;
  goto LAB_1442a8b20;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>_>::FKeyComparisonClass<`UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>_>_>_>_> @ 1442a8d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l13::<lambda_4>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>_>::FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_13_::<lambda_4>_>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>_s_1 TVar2;
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
  bool bVar16;
  int iVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> **ppTVar20;
  int iVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar23;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar24;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar25;
  float fVar26;
  undefined1 auStack_3b8 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *local_388;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *local_378;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar26 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar26;
    memset(local_360,0,0x2e8);
    ppTVar20 = &local_378;
    do {
      pTVar18 = ppTVar20[1];
      pTVar25 = *ppTVar20;
      local_388 = ppTVar20[2];
      iVar17 = (int)(((longlong)pTVar18 - (longlong)pTVar25) / 0x70) + 1;
      pTVar24 = pTVar25;
      iVar21 = (int)local_388;
      if ((int)local_388 != 0) {
LAB_1442a8e00:
        if (8 < iVar17) {
          uVar1 = *(undefined8 *)((pTVar24->ElementData).Pad + 8);
          pTVar22 = pTVar18 + 1;
          pTVar25 = pTVar24 + iVar17 / 2;
          TVar2 = pTVar25->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x28);
          uVar8 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x30);
          uVar9 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x38);
          uVar10 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x40);
          uVar11 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x48);
          uVar12 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x50);
          uVar13 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x58);
          uVar14 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x60);
          uVar15 = *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x68);
          pTVar25->_s_1 = pTVar24->_s_1;
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x18) = uVar1;
          uVar1 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x28) = uVar1;
          uVar1 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x38) = uVar1;
          uVar1 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x48) = uVar1;
          uVar1 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x58) = uVar1;
          uVar1 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar25->ElementData).Pad + 0x68) = uVar1;
          pTVar24->_s_1 = TVar2;
          *(undefined8 *)((pTVar24->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x18) = uVar5;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x20) = uVar6;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x28) = uVar7;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x30) = uVar8;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x38) = uVar9;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x40) = uVar10;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x48) = uVar11;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x50) = uVar12;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x58) = uVar13;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x60) = uVar14;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x68) = uVar15;
          pTVar25 = pTVar24;
LAB_1442a8ea0:
          pTVar19 = pTVar25;
          pTVar25 = pTVar19 + 1;
          if (pTVar25 <= pTVar18) goto code_r0x0001442a8ea9;
          goto LAB_1442a8ec0;
        }
        for (; pTVar22 = pTVar24, pTVar25 = pTVar24, pTVar24 < pTVar18; pTVar18 = pTVar18 + -1) {
          while (pTVar19 = pTVar22, pTVar25 = pTVar25 + 1, pTVar25 <= pTVar18) {
            bVar16 = `UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>::
                     operator()(((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                                (UClass *)pTVar19->_s_1,(UClass *)pTVar25->_s_1);
            pTVar22 = pTVar25;
            if (!bVar16) {
              pTVar22 = pTVar19;
            }
          }
          TVar2 = pTVar19->_s_1;
          uVar1 = *(undefined8 *)((pTVar19->ElementData).Pad + 8);
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x10);
          uVar4 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x18);
          uVar5 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x20);
          uVar6 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x28);
          uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 8);
          uVar8 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x30);
          uVar9 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x38);
          uVar10 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x40);
          uVar11 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x48);
          uVar12 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x50);
          uVar13 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x58);
          uVar14 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x60);
          uVar15 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x68);
          pTVar19->_s_1 = pTVar18->_s_1;
          *(undefined8 *)((pTVar19->ElementData).Pad + 8) = uVar7;
          uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x18) = uVar7;
          uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x28);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x20);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x28) = uVar7;
          uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x38);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x30);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x38) = uVar7;
          uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x48);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x40);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x48) = uVar7;
          uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x58);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x50);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x58) = uVar7;
          uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x68);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar18->ElementData).Pad + 0x60);
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x68) = uVar7;
          pTVar18->_s_1 = TVar2;
          *(undefined8 *)((pTVar18->ElementData).Pad + 8) = uVar1;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x10) = uVar3;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x18) = uVar4;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x20) = uVar5;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x28) = uVar6;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x30) = uVar8;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x38) = uVar9;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x40) = uVar10;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x48) = uVar11;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x50) = uVar12;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x58) = uVar13;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x60) = uVar14;
          *(undefined8 *)((pTVar18->ElementData).Pad + 0x68) = uVar15;
        }
        goto LAB_1442a90bf;
      }
LAB_1442a90a6:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l13::<lambda_4>_>_>_>_>
                (pTVar25,iVar17,param_3,param_4);
LAB_1442a90bf:
      ppTVar20 = ppTVar20 + -3;
    } while (&local_378 <= ppTVar20);
  }
  return;
code_r0x0001442a8ea9:
  bVar16 = `UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>::operator()
                     (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                      (UClass *)pTVar24->_s_1,(UClass *)pTVar25->_s_1);
  if (!bVar16) goto LAB_1442a8ea0;
LAB_1442a8ec0:
  do {
    pTVar23 = pTVar22;
    pTVar22 = pTVar23 + -1;
    if (pTVar22 <= pTVar24) break;
    bVar16 = `UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>::operator()
                       (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                        (UClass *)pTVar22->_s_1,(UClass *)pTVar24->_s_1);
  } while (!bVar16);
  uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x68);
  if (pTVar25 <= pTVar22) {
    TVar2 = pTVar25->_s_1;
    uVar3 = *(undefined8 *)((longlong)pTVar19 + 0x78);
    uVar4 = *(undefined8 *)((longlong)pTVar19 + 0x80);
    uVar5 = *(undefined8 *)((longlong)pTVar19 + 0x88);
    uVar6 = *(undefined8 *)((longlong)pTVar19 + 0x90);
    uVar7 = *(undefined8 *)((longlong)pTVar19 + 0x98);
    uVar8 = *(undefined8 *)((longlong)pTVar19 + 0xa0);
    uVar9 = *(undefined8 *)((longlong)pTVar19 + 0xa8);
    uVar10 = *(undefined8 *)((longlong)pTVar19 + 0xb0);
    uVar11 = *(undefined8 *)((longlong)pTVar19 + 0xb8);
    uVar12 = *(undefined8 *)((longlong)pTVar19 + 0xc0);
    uVar13 = *(undefined8 *)((longlong)pTVar19 + 200);
    uVar14 = *(undefined8 *)((longlong)pTVar19 + 0xd0);
    uVar15 = *(undefined8 *)((longlong)pTVar19 + 0xd8);
    pTVar25->_s_1 = pTVar22->_s_1;
    *(undefined8 *)((longlong)pTVar19 + 0x78) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x58);
    *(undefined8 *)((longlong)pTVar19 + 0x80) = *(undefined8 *)((longlong)pTVar23 + -0x60);
    *(undefined8 *)((longlong)pTVar19 + 0x88) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x48);
    *(undefined8 *)((longlong)pTVar19 + 0x90) = *(undefined8 *)((longlong)pTVar23 + -0x50);
    *(undefined8 *)((longlong)pTVar19 + 0x98) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x38);
    *(undefined8 *)((longlong)pTVar19 + 0xa0) = *(undefined8 *)((longlong)pTVar23 + -0x40);
    *(undefined8 *)((longlong)pTVar19 + 0xa8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x28);
    *(undefined8 *)((longlong)pTVar19 + 0xb0) = *(undefined8 *)((longlong)pTVar23 + -0x30);
    *(undefined8 *)((longlong)pTVar19 + 0xb8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x18);
    *(undefined8 *)((longlong)pTVar19 + 0xc0) = *(undefined8 *)((longlong)pTVar23 + -0x20);
    *(undefined8 *)((longlong)pTVar19 + 200) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar23 + -8);
    *(undefined8 *)((longlong)pTVar19 + 0xd0) = *(undefined8 *)((longlong)pTVar23 + -0x10);
    *(undefined8 *)((longlong)pTVar19 + 0xd8) = uVar1;
    pTVar22->_s_1 = TVar2;
    *(undefined8 *)((longlong)pTVar23 + -0x68) = uVar3;
    *(undefined8 *)((longlong)pTVar23 + -0x60) = uVar4;
    *(undefined8 *)((longlong)pTVar23 + -0x58) = uVar5;
    *(undefined8 *)((longlong)pTVar23 + -0x50) = uVar6;
    *(undefined8 *)((longlong)pTVar23 + -0x48) = uVar7;
    *(undefined8 *)((longlong)pTVar23 + -0x40) = uVar8;
    *(undefined8 *)((longlong)pTVar23 + -0x38) = uVar9;
    *(undefined8 *)((longlong)pTVar23 + -0x30) = uVar10;
    *(undefined8 *)((longlong)pTVar23 + -0x28) = uVar11;
    *(undefined8 *)((longlong)pTVar23 + -0x20) = uVar12;
    *(undefined8 *)((longlong)pTVar23 + -0x18) = uVar13;
    *(undefined8 *)((longlong)pTVar23 + -0x10) = uVar14;
    *(undefined8 *)((longlong)pTVar23 + -8) = uVar15;
    goto LAB_1442a8ea0;
  }
  TVar2 = pTVar24->_s_1;
  uVar3 = *(undefined8 *)((pTVar24->ElementData).Pad + 8);
  uVar4 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x10);
  uVar5 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x18);
  uVar6 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x20);
  uVar7 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x28);
  iVar21 = iVar21 + -1;
  uVar8 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x30);
  uVar9 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x38);
  uVar10 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x40);
  uVar11 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x48);
  uVar12 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x50);
  uVar13 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x58);
  uVar14 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x60);
  uVar15 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x68);
  pTVar24->_s_1 = pTVar22->_s_1;
  *(undefined8 *)((pTVar24->ElementData).Pad + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x58);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar23 + -0x60);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x48);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar23 + -0x50);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x38);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar23 + -0x40);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x38) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x28);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x40) = *(undefined8 *)((longlong)pTVar23 + -0x30);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x48) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar23 + -0x18);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x50) = *(undefined8 *)((longlong)pTVar23 + -0x20);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x58) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar23 + -8);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x60) = *(undefined8 *)((longlong)pTVar23 + -0x10);
  *(undefined8 *)((pTVar24->ElementData).Pad + 0x68) = uVar1;
  pTVar22->_s_1 = TVar2;
  *(undefined8 *)((longlong)pTVar23 + -0x68) = uVar3;
  *(undefined8 *)((longlong)pTVar23 + -0x60) = uVar4;
  *(undefined8 *)((longlong)pTVar23 + -0x58) = uVar5;
  *(undefined8 *)((longlong)pTVar23 + -0x50) = uVar6;
  *(undefined8 *)((longlong)pTVar23 + -0x48) = uVar7;
  *(undefined8 *)((longlong)pTVar23 + -0x40) = uVar8;
  *(undefined8 *)((longlong)pTVar23 + -0x38) = uVar9;
  *(undefined8 *)((longlong)pTVar23 + -0x30) = uVar10;
  *(undefined8 *)((longlong)pTVar23 + -0x28) = uVar11;
  *(undefined8 *)((longlong)pTVar23 + -0x20) = uVar12;
  *(undefined8 *)((longlong)pTVar23 + -0x18) = uVar13;
  *(undefined8 *)((longlong)pTVar23 + -0x10) = uVar14;
  *(undefined8 *)((longlong)pTVar23 + -8) = uVar15;
  if (((longlong)pTVar22 + (-0x70 - (longlong)pTVar24)) / 0x70 <
      ((longlong)pTVar18 - (longlong)pTVar25) / 0x70) {
    if (pTVar25 < pTVar18) {
      *ppTVar20 = pTVar25;
      ppTVar20[1] = pTVar18;
      *(int *)(ppTVar20 + 2) = iVar21;
      ppTVar20 = ppTVar20 + 3;
    }
    if (pTVar22 <= pTVar24 + 1) goto LAB_1442a90bf;
    pTVar18 = pTVar23 + -2;
    pTVar25 = pTVar24;
  }
  else {
    if (pTVar24 + 1 < pTVar22) {
      *ppTVar20 = pTVar24;
      ppTVar20[1] = pTVar23 + -2;
      *(int *)(ppTVar20 + 2) = iVar21;
      ppTVar20 = ppTVar20 + 3;
    }
    if (pTVar18 <= pTVar25) goto LAB_1442a90bf;
  }
  iVar17 = (int)(((longlong)pTVar18 - (longlong)pTVar25) / 0x70) + 1;
  pTVar24 = pTVar25;
  if (iVar21 == 0) goto LAB_1442a90a6;
  goto LAB_1442a8e00;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>_>::FValueComparisonClass<`UObjectReplicationBridge::PrintNetCullDistances'::__l9::<lambda_3>_>_>_>_> @ 1442a9210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>_>::FValueComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l9::<lambda_3>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>_>::FValueComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_9_::<lambda_3>_>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>_s_1 TVar2;
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
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> **ppTVar20;
  int iVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar23;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_3b8 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *local_388;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *local_378;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar25 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar25;
    memset(local_360,0,0x2e8);
    ppTVar20 = &local_378;
    do {
      pTVar24 = ppTVar20[1];
      pTVar23 = *ppTVar20;
      local_388 = ppTVar20[2];
      iVar16 = (int)(((longlong)pTVar24 - (longlong)pTVar23) / 0x70) + 1;
      pTVar22 = pTVar23;
      iVar21 = (int)local_388;
      if ((int)local_388 != 0) {
LAB_1442a9300:
        if (8 < iVar16) {
          uVar1 = *(undefined8 *)((pTVar22->ElementData).Pad + 8);
          pTVar17 = pTVar24 + 1;
          pTVar23 = pTVar22 + iVar16 / 2;
          TVar2 = pTVar23->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28);
          uVar8 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30);
          uVar9 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38);
          uVar10 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40);
          uVar11 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48);
          uVar12 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x50);
          uVar13 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x58);
          uVar14 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x60);
          uVar15 = *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x68);
          pTVar23->_s_1 = pTVar22->_s_1;
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x18) = uVar1;
          uVar1 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x28) = uVar1;
          uVar1 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x38) = uVar1;
          uVar1 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x48) = uVar1;
          uVar1 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x58) = uVar1;
          uVar1 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar22->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar23->ElementData).Pad + 0x68) = uVar1;
          pTVar22->_s_1 = TVar2;
          *(undefined8 *)((pTVar22->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x18) = uVar5;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x20) = uVar6;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x28) = uVar7;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x30) = uVar8;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x38) = uVar9;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x40) = uVar10;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x48) = uVar11;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x50) = uVar12;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x58) = uVar13;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x60) = uVar14;
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x68) = uVar15;
          pTVar23 = pTVar22;
LAB_1442a93a0:
          pTVar19 = pTVar23;
          pTVar23 = pTVar19 + 1;
          if (pTVar23 <= pTVar24) goto code_r0x0001442a93a9;
          goto LAB_1442a93c3;
        }
        for (; pTVar17 = pTVar22, pTVar23 = pTVar22, pTVar22 < pTVar24; pTVar24 = pTVar24 + -1) {
          while (pTVar23 = pTVar23 + 1, pTVar23 <= pTVar24) {
            fVar25 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
                     FindMostUsedCullDistance((pTVar17->ElementData).Pad + 8);
            fVar26 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
                     FindMostUsedCullDistance((pTVar23->ElementData).Pad + 8);
            if (fVar26 <= fVar25) {
              pTVar17 = pTVar23;
            }
          }
          TVar2 = pTVar17->_s_1;
          uVar1 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
          uVar3 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
          uVar4 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
          uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
          uVar6 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x28);
          uVar7 = *(undefined8 *)((pTVar24->ElementData).Pad + 8);
          uVar8 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x30);
          uVar9 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x38);
          uVar10 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x40);
          uVar11 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x48);
          uVar12 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x50);
          uVar13 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x58);
          uVar14 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x60);
          uVar15 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x68);
          pTVar17->_s_1 = pTVar24->_s_1;
          *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar7;
          uVar7 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar7;
          uVar7 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x28);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x20);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x28) = uVar7;
          uVar7 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x38);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x30);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x38) = uVar7;
          uVar7 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x48);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x40);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x48) = uVar7;
          uVar7 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x58);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x50);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x58) = uVar7;
          uVar7 = *(undefined8 *)((pTVar24->ElementData).Pad + 0x68);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar24->ElementData).Pad + 0x60);
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x68) = uVar7;
          pTVar24->_s_1 = TVar2;
          *(undefined8 *)((pTVar24->ElementData).Pad + 8) = uVar1;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x10) = uVar3;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x18) = uVar4;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x20) = uVar5;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x28) = uVar6;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x30) = uVar8;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x38) = uVar9;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x40) = uVar10;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x48) = uVar11;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x50) = uVar12;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x58) = uVar13;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x60) = uVar14;
          *(undefined8 *)((pTVar24->ElementData).Pad + 0x68) = uVar15;
        }
        goto LAB_1442a95b1;
      }
LAB_1442a9598:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>_>::FValueComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l9::<lambda_3>_>_>_>_>
                (pTVar23,iVar16,param_3,param_4);
LAB_1442a95b1:
      ppTVar20 = ppTVar20 + -3;
    } while (&local_378 <= ppTVar20);
  }
  return;
code_r0x0001442a93a9:
  fVar25 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
           FindMostUsedCullDistance((pTVar22->ElementData).Pad + 8);
  fVar26 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
           FindMostUsedCullDistance((undefined8 *)((longlong)pTVar19 + 0x78));
  if (fVar25 < fVar26) goto LAB_1442a93a0;
LAB_1442a93c3:
  do {
    pTVar18 = pTVar17;
    pTVar17 = pTVar18 + -1;
    if (pTVar17 <= pTVar22) break;
    fVar25 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
             FindMostUsedCullDistance((undefined8 *)((longlong)pTVar18 + -0x68));
    fVar26 = `UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::
             FindMostUsedCullDistance((pTVar22->ElementData).Pad + 8);
  } while (fVar25 < fVar26);
  uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x68);
  if (pTVar23 <= pTVar17) {
    TVar2 = pTVar23->_s_1;
    uVar3 = *(undefined8 *)((longlong)pTVar19 + 0x78);
    uVar4 = *(undefined8 *)((longlong)pTVar19 + 0x80);
    uVar5 = *(undefined8 *)((longlong)pTVar19 + 0x88);
    uVar6 = *(undefined8 *)((longlong)pTVar19 + 0x90);
    uVar7 = *(undefined8 *)((longlong)pTVar19 + 0x98);
    uVar8 = *(undefined8 *)((longlong)pTVar19 + 0xa0);
    uVar9 = *(undefined8 *)((longlong)pTVar19 + 0xa8);
    uVar10 = *(undefined8 *)((longlong)pTVar19 + 0xb0);
    uVar11 = *(undefined8 *)((longlong)pTVar19 + 0xb8);
    uVar12 = *(undefined8 *)((longlong)pTVar19 + 0xc0);
    uVar13 = *(undefined8 *)((longlong)pTVar19 + 200);
    uVar14 = *(undefined8 *)((longlong)pTVar19 + 0xd0);
    uVar15 = *(undefined8 *)((longlong)pTVar19 + 0xd8);
    pTVar23->_s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)pTVar19 + 0x78) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x58);
    *(undefined8 *)((longlong)pTVar19 + 0x80) = *(undefined8 *)((longlong)pTVar18 + -0x60);
    *(undefined8 *)((longlong)pTVar19 + 0x88) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x48);
    *(undefined8 *)((longlong)pTVar19 + 0x90) = *(undefined8 *)((longlong)pTVar18 + -0x50);
    *(undefined8 *)((longlong)pTVar19 + 0x98) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x38);
    *(undefined8 *)((longlong)pTVar19 + 0xa0) = *(undefined8 *)((longlong)pTVar18 + -0x40);
    *(undefined8 *)((longlong)pTVar19 + 0xa8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x28);
    *(undefined8 *)((longlong)pTVar19 + 0xb0) = *(undefined8 *)((longlong)pTVar18 + -0x30);
    *(undefined8 *)((longlong)pTVar19 + 0xb8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x18);
    *(undefined8 *)((longlong)pTVar19 + 0xc0) = *(undefined8 *)((longlong)pTVar18 + -0x20);
    *(undefined8 *)((longlong)pTVar19 + 200) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar18 + -8);
    *(undefined8 *)((longlong)pTVar19 + 0xd0) = *(undefined8 *)((longlong)pTVar18 + -0x10);
    *(undefined8 *)((longlong)pTVar19 + 0xd8) = uVar1;
    pTVar17->_s_1 = TVar2;
    *(undefined8 *)((longlong)pTVar18 + -0x68) = uVar3;
    *(undefined8 *)((longlong)pTVar18 + -0x60) = uVar4;
    *(undefined8 *)((longlong)pTVar18 + -0x58) = uVar5;
    *(undefined8 *)((longlong)pTVar18 + -0x50) = uVar6;
    *(undefined8 *)((longlong)pTVar18 + -0x48) = uVar7;
    *(undefined8 *)((longlong)pTVar18 + -0x40) = uVar8;
    *(undefined8 *)((longlong)pTVar18 + -0x38) = uVar9;
    *(undefined8 *)((longlong)pTVar18 + -0x30) = uVar10;
    *(undefined8 *)((longlong)pTVar18 + -0x28) = uVar11;
    *(undefined8 *)((longlong)pTVar18 + -0x20) = uVar12;
    *(undefined8 *)((longlong)pTVar18 + -0x18) = uVar13;
    *(undefined8 *)((longlong)pTVar18 + -0x10) = uVar14;
    *(undefined8 *)((longlong)pTVar18 + -8) = uVar15;
    goto LAB_1442a93a0;
  }
  TVar2 = pTVar22->_s_1;
  uVar3 = *(undefined8 *)((pTVar22->ElementData).Pad + 8);
  uVar4 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x10);
  uVar5 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x18);
  uVar6 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x20);
  uVar7 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x28);
  iVar21 = iVar21 + -1;
  uVar8 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x30);
  uVar9 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x38);
  uVar10 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x40);
  uVar11 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x48);
  uVar12 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x50);
  uVar13 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x58);
  uVar14 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x60);
  uVar15 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x68);
  pTVar22->_s_1 = pTVar17->_s_1;
  *(undefined8 *)((pTVar22->ElementData).Pad + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x58);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar18 + -0x60);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x48);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar18 + -0x50);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x38);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar18 + -0x40);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x38) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x28);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x40) = *(undefined8 *)((longlong)pTVar18 + -0x30);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x48) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar18 + -0x18);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x50) = *(undefined8 *)((longlong)pTVar18 + -0x20);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x58) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar18 + -8);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x60) = *(undefined8 *)((longlong)pTVar18 + -0x10);
  *(undefined8 *)((pTVar22->ElementData).Pad + 0x68) = uVar1;
  pTVar17->_s_1 = TVar2;
  *(undefined8 *)((longlong)pTVar18 + -0x68) = uVar3;
  *(undefined8 *)((longlong)pTVar18 + -0x60) = uVar4;
  *(undefined8 *)((longlong)pTVar18 + -0x58) = uVar5;
  *(undefined8 *)((longlong)pTVar18 + -0x50) = uVar6;
  *(undefined8 *)((longlong)pTVar18 + -0x48) = uVar7;
  *(undefined8 *)((longlong)pTVar18 + -0x40) = uVar8;
  *(undefined8 *)((longlong)pTVar18 + -0x38) = uVar9;
  *(undefined8 *)((longlong)pTVar18 + -0x30) = uVar10;
  *(undefined8 *)((longlong)pTVar18 + -0x28) = uVar11;
  *(undefined8 *)((longlong)pTVar18 + -0x20) = uVar12;
  *(undefined8 *)((longlong)pTVar18 + -0x18) = uVar13;
  *(undefined8 *)((longlong)pTVar18 + -0x10) = uVar14;
  *(undefined8 *)((longlong)pTVar18 + -8) = uVar15;
  if (((longlong)pTVar17 + (-0x70 - (longlong)pTVar22)) / 0x70 <
      ((longlong)pTVar24 - (longlong)pTVar23) / 0x70) {
    if (pTVar23 < pTVar24) {
      *ppTVar20 = pTVar23;
      ppTVar20[1] = pTVar24;
      *(int *)(ppTVar20 + 2) = iVar21;
      ppTVar20 = ppTVar20 + 3;
    }
    if (pTVar17 <= pTVar22 + 1) goto LAB_1442a95b1;
    pTVar24 = pTVar18 + -2;
    pTVar23 = pTVar22;
  }
  else {
    if (pTVar22 + 1 < pTVar17) {
      *ppTVar20 = pTVar22;
      ppTVar20[1] = pTVar18 + -2;
      *(int *)(ppTVar20 + 2) = iVar21;
      ppTVar20 = ppTVar20 + 3;
    }
    if (pTVar24 <= pTVar23) goto LAB_1442a95b1;
  }
  iVar16 = (int)(((longlong)pTVar24 - (longlong)pTVar23) / 0x70) + 1;
  pTVar22 = pTVar23;
  if (iVar21 == 0) goto LAB_1442a9598;
  goto LAB_1442a9300;
}

// IntroSortInternal<`UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::FPushBasedInfo,int,FIdentityFunctor,`UObjectReplicationBridge::PrintPushBasedStatuses'::__l2::<lambda_2>_> @ 1442a96f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UObjectReplicationBridge::PrintPushBasedStatuses_::__l2::FPushBasedInfo,int,FIdentityFunctor,_UObjectReplicationBridge::PrintPushBasedStatuses_::__l2::<lambda_2>_>
          (FPushBasedInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  UClass *pUVar4;
  int iVar5;
  bool bVar6;
  undefined3 uVar7;
  int iVar8;
  bool bVar9;
  undefined3 uVar10;
  int iVar11;
  FPushBasedInfo *pFVar12;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  FPushBasedInfo *pFVar15;
  FPushBasedInfo *pFVar16;
  FPushBasedInfo *pFVar17;
  FPushBasedInfo **ppFVar18;
  byte bVar19;
  FPushBasedInfo *pFVar20;
  float fVar21;
  undefined1 auStack_408 [32];
  FName local_3e8;
  FPushBasedInfo *local_3e0;
  int local_3d8;
  FPushBasedInfo **local_3d0;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378 [2];
  FPushBasedInfo *local_358;
  FPushBasedInfo *local_348;
  FPushBasedInfo *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_408;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar21;
    memset(local_330,0,0x2e8);
    ppFVar18 = &local_348;
    do {
      local_3e0 = ppFVar18[1];
      pFVar12 = *ppFVar18;
      local_358 = ppFVar18[2];
      iVar11 = (int)((longlong)local_3e0 - (longlong)pFVar12 >> 4) + 1;
      local_3d8 = (int)local_358;
      pFVar15 = pFVar12;
      local_3d0 = ppFVar18;
      if ((int)local_358 != 0) {
LAB_1442a97b5:
        if (8 < iVar11) {
          iVar5 = pFVar15->RefCount;
          bVar6 = pFVar15->bIsFullyPushBased;
          uVar7 = *(undefined3 *)&pFVar15->field_0xd;
          pFVar17 = local_3e0 + 1;
          pFVar12 = pFVar15 + iVar11 / 2;
          pUVar4 = pFVar12->Class;
          iVar8 = pFVar12->RefCount;
          bVar9 = pFVar12->bIsFullyPushBased;
          uVar10 = *(undefined3 *)&pFVar12->field_0xd;
          pFVar12 = pFVar15 + iVar11 / 2;
          pFVar12->Class = pFVar15->Class;
          pFVar12->RefCount = iVar5;
          pFVar12->bIsFullyPushBased = bVar6;
          *(undefined3 *)&pFVar12->field_0xd = uVar7;
          pFVar15->Class = pUVar4;
          pFVar15->RefCount = iVar8;
          pFVar15->bIsFullyPushBased = bVar9;
          *(undefined3 *)&pFVar15->field_0xd = uVar10;
          pFVar16 = local_3e0;
          pFVar12 = pFVar15;
LAB_1442a97e0:
          pFVar20 = pFVar12;
          pFVar12 = pFVar20 + 1;
          if (pFVar12 <= pFVar16) goto code_r0x0001442a97f0;
          goto LAB_1442a98b0;
        }
        if (pFVar15 < local_3e0) {
          do {
            pFVar17 = local_3e0;
            pFVar16 = pFVar15 + 1;
            pFVar20 = pFVar15;
            pFVar12 = pFVar15;
            if (pFVar15 + 1 <= local_3e0) {
              do {
                bVar19 = pFVar16->bIsFullyPushBased;
                if (pFVar20->bIsFullyPushBased == (bool)bVar19) {
                  if (pFVar20->RefCount == pFVar16->RefCount) {
                    local_3e8 = (FName)pFVar16->Class->_padding_;
                    ::FName::ToString(&local_3e8,local_378);
                    local_3e8 = (FName)pFVar20->Class->_padding_;
                    ::FName::ToString(&local_3e8,&local_388);
                    FVar14.Data = (FScriptContainerElement *)L"";
                    if (local_378[0].Data.ArrayNum != 0) {
                      FVar14.Data = local_378[0].Data.AllocatorInstance.Data;
                    }
                    FVar13.Data = (FScriptContainerElement *)L"";
                    if (local_388.Data.ArrayNum != 0) {
                      FVar13.Data = local_388.Data.AllocatorInstance.Data;
                    }
                    iVar11 = FGenericPlatformStricmp::Stricmp
                                       ((wchar_t *)FVar13.Data,(wchar_t *)FVar14.Data);
                    bVar19 = (byte)((uint)iVar11 >> 0x1f);
                    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_388.Data.AllocatorInstance.Data);
                    }
                    pFVar17 = local_3e0;
                    if (local_378[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                    {
                      FMemory::Free(local_378[0].Data.AllocatorInstance.Data);
                      pFVar17 = local_3e0;
                    }
                  }
                  else {
                    bVar19 = pFVar16->RefCount <= pFVar20->RefCount;
                  }
                }
                pFVar12 = pFVar16;
                if (bVar19 == 0) {
                  pFVar12 = pFVar20;
                }
                pFVar16 = pFVar16 + 1;
                pFVar20 = pFVar12;
              } while (pFVar16 <= pFVar17);
            }
            pUVar4 = pFVar12->Class;
            iVar5 = pFVar12->RefCount;
            bVar9 = pFVar12->bIsFullyPushBased;
            uVar10 = *(undefined3 *)&pFVar12->field_0xd;
            local_3e0 = pFVar17 + -1;
            iVar11 = pFVar17->RefCount;
            bVar6 = pFVar17->bIsFullyPushBased;
            uVar7 = *(undefined3 *)&pFVar17->field_0xd;
            pFVar12->Class = pFVar17->Class;
            pFVar12->RefCount = iVar11;
            pFVar12->bIsFullyPushBased = bVar6;
            *(undefined3 *)&pFVar12->field_0xd = uVar7;
            pFVar17->Class = pUVar4;
            pFVar17->RefCount = iVar5;
            pFVar17->bIsFullyPushBased = bVar9;
            *(undefined3 *)&pFVar17->field_0xd = uVar10;
            ppFVar18 = local_3d0;
          } while (pFVar15 < local_3e0);
        }
        goto LAB_1442a9a3d;
      }
LAB_1442a9a2b:
      HeapSortInternal<_UObjectReplicationBridge::PrintPushBasedStatuses_::__l2::FPushBasedInfo,int,FIdentityFunctor,_UObjectReplicationBridge::PrintPushBasedStatuses_::__l2::<lambda_2>_>
                (pFVar12,iVar11,param_3,param_4);
LAB_1442a9a3d:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_348 <= ppFVar18);
  }
  return;
code_r0x0001442a97f0:
  bVar19 = pFVar20[1].bIsFullyPushBased;
  if (pFVar15->bIsFullyPushBased == (bool)bVar19) {
    if (pFVar15->RefCount == pFVar20[1].RefCount) {
      local_3e8 = (FName)pFVar12->Class->_padding_;
      ::FName::ToString(&local_3e8,&local_3b8);
      local_3e8 = (FName)pFVar15->Class->_padding_;
      ::FName::ToString(&local_3e8,&local_3c8);
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_3b8.Data.ArrayNum != 0) {
        FVar14.Data = local_3b8.Data.AllocatorInstance.Data;
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_3c8.Data.ArrayNum != 0) {
        FVar13.Data = local_3c8.Data.AllocatorInstance.Data;
      }
      iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,(wchar_t *)FVar14.Data);
      bVar19 = (byte)((uint)iVar11 >> 0x1f);
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
      pFVar16 = local_3e0;
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        pFVar16 = local_3e0;
      }
    }
    else {
      bVar19 = pFVar20[1].RefCount <= pFVar15->RefCount;
    }
  }
  if (bVar19 == 0) goto LAB_1442a97e0;
LAB_1442a98b0:
  do {
    pFVar16 = pFVar17;
    pFVar17 = pFVar16 + -1;
    if (pFVar17 <= pFVar15) break;
    bVar19 = pFVar15->bIsFullyPushBased;
    if (pFVar16[-1].bIsFullyPushBased == (bool)bVar19) {
      if (pFVar16[-1].RefCount == pFVar15->RefCount) {
        local_3e8 = (FName)pFVar15->Class->_padding_;
        ::FName::ToString(&local_3e8,&local_398);
        local_3e8 = (FName)pFVar17->Class->_padding_;
        ::FName::ToString(&local_3e8,&local_3a8);
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_398.Data.ArrayNum != 0) {
          FVar14.Data = local_398.Data.AllocatorInstance.Data;
        }
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_3a8.Data.ArrayNum != 0) {
          FVar13.Data = local_3a8.Data.AllocatorInstance.Data;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,(wchar_t *)FVar14.Data);
        bVar19 = (byte)((uint)iVar11 >> 0x1f);
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
      }
      else {
        bVar19 = pFVar15->RefCount <= pFVar16[-1].RefCount;
      }
    }
  } while (bVar19 == 0);
  uVar1 = pFVar16[-1].RefCount;
  uVar2 = pFVar16[-1].bIsFullyPushBased;
  uVar3 = *(undefined3 *)&pFVar16[-1].field_0xd;
  if (pFVar12 <= pFVar17) {
    pUVar4 = pFVar12->Class;
    iVar11 = pFVar20[1].RefCount;
    bVar6 = pFVar20[1].bIsFullyPushBased;
    uVar7 = *(undefined3 *)&pFVar20[1].field_0xd;
    pFVar12->Class = pFVar17->Class;
    pFVar20[1].RefCount = uVar1;
    pFVar20[1].bIsFullyPushBased = (bool)uVar2;
    *(undefined3 *)&pFVar20[1].field_0xd = uVar3;
    pFVar17->Class = pUVar4;
    pFVar16[-1].RefCount = iVar11;
    pFVar16[-1].bIsFullyPushBased = bVar6;
    *(undefined3 *)&pFVar16[-1].field_0xd = uVar7;
    pFVar16 = local_3e0;
    goto LAB_1442a97e0;
  }
  pUVar4 = pFVar15->Class;
  iVar11 = pFVar15->RefCount;
  bVar6 = pFVar15->bIsFullyPushBased;
  uVar7 = *(undefined3 *)&pFVar15->field_0xd;
  local_3d8 = local_3d8 + -1;
  pFVar15->Class = pFVar17->Class;
  pFVar15->RefCount = uVar1;
  pFVar15->bIsFullyPushBased = (bool)uVar2;
  *(undefined3 *)&pFVar15->field_0xd = uVar3;
  pFVar17->Class = pUVar4;
  pFVar16[-1].RefCount = iVar11;
  pFVar16[-1].bIsFullyPushBased = bVar6;
  *(undefined3 *)&pFVar16[-1].field_0xd = uVar7;
  if ((longlong)((longlong)pFVar17 + (-0x10 - (longlong)pFVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)local_3e0 - (longlong)pFVar12 & 0xfffffffffffffff0U)) {
    if (pFVar12 < local_3e0) {
      *ppFVar18 = pFVar12;
      ppFVar18[1] = local_3e0;
      *(int *)(ppFVar18 + 2) = local_3d8;
      ppFVar18 = ppFVar18 + 3;
      local_3d0 = ppFVar18;
    }
    if (pFVar17 <= pFVar15 + 1) goto LAB_1442a9a3d;
    local_3e0 = pFVar16 + -2;
    pFVar12 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar17) {
      *ppFVar18 = pFVar15;
      ppFVar18[1] = pFVar16 + -2;
      *(int *)(ppFVar18 + 2) = local_3d8;
      ppFVar18 = ppFVar18 + 3;
      local_3d0 = ppFVar18;
    }
    if (local_3e0 <= pFVar12) goto LAB_1442a9a3d;
  }
  iVar11 = (int)((longlong)local_3e0 - (longlong)pFVar12 >> 4) + 1;
  pFVar15 = pFVar12;
  if (local_3d8 == 0) goto LAB_1442a9a2b;
  goto LAB_1442a97b5;
}

// IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,`UE::Net::Private::ObjectBridgeDebugging::SortByClassName'::__l2::<lambda_1>_> @ 1442a9ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByClassName_::__l2::<lambda_1>_>
          (FRootObjectData *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  UClass *pUVar1;
  FNetRefHandle_u_0 FVar2;
  FNetRefHandle_u_0 FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  FRootObjectData *pFVar9;
  int iVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  byte bVar13;
  FRootObjectData *pFVar14;
  FRootObjectData *pFVar15;
  FRootObjectData *pFVar16;
  FRootObjectData *pFVar17;
  FRootObjectData *pFVar18;
  float fVar19;
  undefined1 auStack_408 [32];
  <lambda_1> local_3e8;
  FName local_3e4;
  FRootObjectData **local_3d8;
  int local_3d0;
  FRootObjectData *local_3c8;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370 [2];
  FRootObjectData *local_350;
  FRootObjectData *local_348;
  FRootObjectData *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_408;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_3e8 = param_4;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    local_3d8 = &local_348;
    do {
      local_3c8 = local_3d8[1];
      pFVar18 = *local_3d8;
      local_350 = local_3d8[2];
      iVar10 = (int)((longlong)local_3c8 - (longlong)pFVar18 >> 5) + 1;
      local_3d0 = (int)local_350;
      pFVar17 = pFVar18;
      if ((int)local_350 != 0) {
LAB_1442a9c71:
        pFVar9 = local_3c8;
        pFVar18 = local_3c8;
        if (8 < iVar10) {
          uVar6 = *(undefined4 *)&pFVar17->field_0x4;
          FVar2 = (pFVar17->NetHandle).field0_0x0;
          pFVar14 = local_3c8 + 1;
          pFVar18 = pFVar17 + iVar10 / 2;
          uVar7 = pFVar18->ObjectIndex;
          uVar8 = *(undefined4 *)&pFVar18->field_0x4;
          FVar3 = (pFVar18->NetHandle).field0_0x0;
          pUVar4 = pFVar18->Instance;
          pUVar1 = pFVar18->Class;
          pFVar18->ObjectIndex = pFVar17->ObjectIndex;
          *(undefined4 *)&pFVar18->field_0x4 = uVar6;
          (pFVar18->NetHandle).field0_0x0 = FVar2;
          pUVar5 = pFVar17->Class;
          pFVar18->Instance = pFVar17->Instance;
          pFVar18->Class = pUVar5;
          pFVar17->ObjectIndex = uVar7;
          *(undefined4 *)&pFVar17->field_0x4 = uVar8;
          (pFVar17->NetHandle).field0_0x0 = FVar3;
          pFVar17->Instance = pUVar4;
          pFVar17->Class = pUVar1;
          pFVar18 = pFVar17;
LAB_1442a9cc0:
          pFVar16 = pFVar18;
          pFVar18 = pFVar16 + 1;
          if (pFVar18 <= pFVar9) goto code_r0x0001442a9ccd;
          goto LAB_1442a9d80;
        }
        for (; pFVar9 = pFVar17, pFVar14 = pFVar17, pFVar17 < pFVar18; pFVar18 = pFVar18 + -1) {
          while (pFVar16 = pFVar9, pFVar9 = pFVar14 + 1, pFVar9 <= pFVar18) {
            pUVar1 = pFVar14[1].Class;
            if (pFVar16->Class == pUVar1) {
              bVar13 = 0;
            }
            else if (pFVar16->Class == (UClass *)0x0) {
              bVar13 = 0;
            }
            else if (pUVar1 == (UClass *)0x0) {
              bVar13 = 1;
            }
            else {
              local_3e4 = (FName)pUVar1->_padding_;
              ::FName::ToString(&local_3e4,local_370);
              local_3e4 = (FName)pFVar16->Class->_padding_;
              ::FName::ToString(&local_3e4,&local_380);
              FVar12.Data = (FScriptContainerElement *)L"";
              if (local_370[0].Data.ArrayNum != 0) {
                FVar12.Data = local_370[0].Data.AllocatorInstance.Data;
              }
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_380.Data.ArrayNum != 0) {
                FVar11.Data = local_380.Data.AllocatorInstance.Data;
              }
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)FVar11.Data,(wchar_t *)FVar12.Data);
              bVar13 = (byte)((uint)iVar10 >> 0x1f);
              if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_380.Data.AllocatorInstance.Data);
              }
              if (local_370[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_370[0].Data.AllocatorInstance.Data);
              }
            }
            pFVar14 = pFVar9;
            if (bVar13 == 0) {
              pFVar9 = pFVar16;
            }
          }
          uVar7 = pFVar16->ObjectIndex;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          FVar3 = (pFVar16->NetHandle).field0_0x0;
          pUVar4 = pFVar16->Instance;
          pUVar1 = pFVar16->Class;
          uVar6 = *(undefined4 *)&pFVar18->field_0x4;
          FVar2 = (pFVar18->NetHandle).field0_0x0;
          pFVar16->ObjectIndex = pFVar18->ObjectIndex;
          *(undefined4 *)&pFVar16->field_0x4 = uVar6;
          (pFVar16->NetHandle).field0_0x0 = FVar2;
          pUVar5 = pFVar18->Class;
          pFVar16->Instance = pFVar18->Instance;
          pFVar16->Class = pUVar5;
          pFVar18->ObjectIndex = uVar7;
          *(undefined4 *)&pFVar18->field_0x4 = uVar8;
          (pFVar18->NetHandle).field0_0x0 = FVar3;
          pFVar18->Instance = pUVar4;
          pFVar18->Class = pUVar1;
          param_4 = local_3e8;
        }
        goto LAB_1442a9f3b;
      }
LAB_1442a9f24:
      HeapSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByClassName_::__l2::<lambda_1>_>
                (pFVar18,iVar10,param_3,param_4);
LAB_1442a9f3b:
      local_3d8 = local_3d8 + -3;
    } while (&local_348 <= local_3d8);
  }
  return;
code_r0x0001442a9ccd:
  pUVar1 = pFVar16[1].Class;
  if ((pFVar17->Class == pUVar1) || (pFVar17->Class == (UClass *)0x0)) goto LAB_1442a9cc0;
  if (pUVar1 != (UClass *)0x0) {
    local_3e4 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_3e4,&local_3b0);
    local_3e4 = (FName)pFVar17->Class->_padding_;
    ::FName::ToString(&local_3e4,&local_3c0);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_3b0.Data.ArrayNum != 0) {
      FVar12.Data = local_3b0.Data.AllocatorInstance.Data;
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_3c0.Data.ArrayNum != 0) {
      FVar11.Data = local_3c0.Data.AllocatorInstance.Data;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,(wchar_t *)FVar12.Data);
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    }
    if (-1 < iVar10) goto LAB_1442a9cc0;
  }
LAB_1442a9d80:
  do {
    do {
      pFVar15 = pFVar14;
      pFVar14 = pFVar15 + -1;
      if (pFVar14 <= pFVar17) goto LAB_1442a9e35;
      pUVar1 = pFVar17->Class;
    } while ((pFVar15[-1].Class == pUVar1) || (pFVar15[-1].Class == (UClass *)0x0));
    if (pUVar1 == (UClass *)0x0) break;
    local_3e4 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_3e4,&local_390);
    local_3e4 = (FName)(pFVar15[-1].Class)->_padding_;
    ::FName::ToString(&local_3e4,&local_3a0);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_390.Data.ArrayNum != 0) {
      FVar12.Data = local_390.Data.AllocatorInstance.Data;
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_3a0.Data.ArrayNum != 0) {
      FVar11.Data = local_3a0.Data.AllocatorInstance.Data;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,(wchar_t *)FVar12.Data);
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
    if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
  } while (-1 < iVar10);
LAB_1442a9e35:
  FVar2 = pFVar15[-1].NetHandle.field0_0x0;
  if (pFVar18 <= pFVar14) {
    uVar7 = pFVar18->ObjectIndex;
    uVar6 = *(undefined4 *)&pFVar18->field_0x4;
    FVar3 = pFVar16[1].NetHandle.field0_0x0;
    pUVar4 = pFVar16[1].Instance;
    pUVar1 = pFVar16[1].Class;
    *(undefined8 *)pFVar18 = *(undefined8 *)pFVar14;
    pFVar16[1].NetHandle.field0_0x0 = FVar2;
    pUVar5 = pFVar15[-1].Class;
    pFVar16[1].Instance = pFVar15[-1].Instance;
    pFVar16[1].Class = pUVar5;
    pFVar14->ObjectIndex = uVar7;
    *(undefined4 *)&pFVar14->field_0x4 = uVar6;
    pFVar15[-1].NetHandle.field0_0x0 = FVar3;
    pFVar15[-1].Instance = pUVar4;
    pFVar15[-1].Class = pUVar1;
    goto LAB_1442a9cc0;
  }
  uVar6 = *(undefined4 *)&pFVar17->field_0x4;
  FVar3 = (pFVar17->NetHandle).field0_0x0;
  pUVar4 = pFVar17->Instance;
  pUVar1 = pFVar17->Class;
  *(undefined8 *)pFVar17 = *(undefined8 *)pFVar14;
  (pFVar17->NetHandle).field0_0x0 = FVar2;
  local_3d0 = local_3d0 + -1;
  pUVar5 = pFVar15[-1].Class;
  pFVar17->Instance = pFVar15[-1].Instance;
  pFVar17->Class = pUVar5;
  pFVar14->ObjectIndex = pFVar17->ObjectIndex;
  *(undefined4 *)&pFVar14->field_0x4 = uVar6;
  pFVar15[-1].NetHandle.field0_0x0 = FVar3;
  pFVar15[-1].Instance = pUVar4;
  pFVar15[-1].Class = pUVar1;
  param_4 = local_3e8;
  if ((longlong)((longlong)pFVar14 + (-0x20 - (longlong)pFVar17) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar9 - (longlong)pFVar18 & 0xffffffffffffffe0U)) {
    if (pFVar18 < local_3c8) {
      *local_3d8 = pFVar18;
      local_3d8[1] = local_3c8;
      *(int *)(local_3d8 + 2) = local_3d0;
      local_3d8 = local_3d8 + 3;
    }
    if (pFVar14 <= pFVar17 + 1) goto LAB_1442a9f3b;
    local_3c8 = pFVar15 + -2;
    pFVar18 = pFVar17;
  }
  else {
    if (pFVar17 + 1 < pFVar14) {
      *local_3d8 = pFVar17;
      local_3d8[1] = pFVar15 + -2;
      *(int *)(local_3d8 + 2) = local_3d0;
      local_3d8 = local_3d8 + 3;
    }
    if (local_3c8 <= pFVar18) goto LAB_1442a9f3b;
  }
  iVar10 = (int)((longlong)local_3c8 - (longlong)pFVar18 >> 5) + 1;
  pFVar17 = pFVar18;
  if (local_3d0 == 0) goto LAB_1442a9f24;
  goto LAB_1442a9c71;
}

// IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,`UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle'::__l2::<lambda_1>_> @ 1442aa0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>
          (FRootObjectData *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FRootObjectData *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  FNetRefHandle_u_0 FVar4;
  FNetRefHandle_u_0 FVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  FRootObjectData *pFVar13;
  FRootObjectData *pFVar14;
  FRootObjectData *pFVar15;
  FRootObjectData *pFVar16;
  FRootObjectData *pFVar17;
  FRootObjectData *pFVar18;
  FRootObjectData **ppFVar19;
  float fVar20;
  undefined1 auStack_378 [48];
  FRootObjectData *local_348;
  FRootObjectData *local_338;
  FRootObjectData *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar20;
    memset(local_320,0,0x2e8);
    ppFVar19 = &local_338;
    do {
      pFVar15 = ppFVar19[1];
      pFVar18 = *ppFVar19;
      pFVar1 = ppFVar19[2];
      iVar12 = (int)((longlong)pFVar15 - (longlong)pFVar18 >> 5) + 1;
      local_348._0_4_ = (int)pFVar1;
      pFVar17 = pFVar18;
      if ((int)local_348 != 0) {
LAB_1442aa180:
        if (8 < iVar12) {
          uVar9 = *(undefined4 *)&pFVar17->field_0x4;
          FVar4 = (pFVar17->NetHandle).field0_0x0;
          pFVar13 = pFVar15 + 1;
          pFVar18 = pFVar17 + iVar12 / 2;
          uVar10 = pFVar18->ObjectIndex;
          uVar11 = *(undefined4 *)&pFVar18->field_0x4;
          FVar5 = (pFVar18->NetHandle).field0_0x0;
          pUVar6 = pFVar18->Instance;
          pUVar7 = pFVar18->Class;
          pFVar18->ObjectIndex = pFVar17->ObjectIndex;
          *(undefined4 *)&pFVar18->field_0x4 = uVar9;
          (pFVar18->NetHandle).field0_0x0 = FVar4;
          pUVar8 = pFVar17->Class;
          pFVar18->Instance = pFVar17->Instance;
          pFVar18->Class = pUVar8;
          pFVar17->ObjectIndex = uVar10;
          *(undefined4 *)&pFVar17->field_0x4 = uVar11;
          (pFVar17->NetHandle).field0_0x0 = FVar5;
          pFVar17->Instance = pUVar6;
          pFVar17->Class = pUVar7;
          pFVar18 = pFVar17;
LAB_1442aa1c0:
          pFVar16 = pFVar18;
          pFVar18 = pFVar16 + 1;
          if (pFVar18 <= pFVar15) goto code_r0x0001442aa1c9;
          goto LAB_1442aa203;
        }
        for (; pFVar18 = pFVar17, pFVar1 = pFVar17, pFVar17 < pFVar15; pFVar15 = pFVar15 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar15) {
            uVar2 = (pFVar18->NetHandle).field0_0x0.Value;
            uVar3 = (pFVar1->NetHandle).field0_0x0.Value;
            if ((((uVar2 & 0x3fffffffffffff) != (uVar3 & 0x3fffffffffffff)) && (uVar2 != 0)) &&
               ((uVar3 == 0 ||
                ((((uVar2 & 1) == 0 || ((uVar3 & 1) != 0)) &&
                 ((((uVar2 & 1) == 0 && ((uVar3 & 1) != 0)) ||
                  ((uVar2 & 0x3fffffffffffff) < (uVar3 & 0x3fffffffffffff))))))))) {
              pFVar18 = pFVar1;
            }
          }
          uVar10 = pFVar18->ObjectIndex;
          uVar11 = *(undefined4 *)&pFVar18->field_0x4;
          FVar4 = (pFVar18->NetHandle).field0_0x0;
          pUVar6 = pFVar18->Instance;
          pUVar7 = pFVar18->Class;
          uVar9 = *(undefined4 *)&pFVar15->field_0x4;
          FVar5 = (pFVar15->NetHandle).field0_0x0;
          pFVar18->ObjectIndex = pFVar15->ObjectIndex;
          *(undefined4 *)&pFVar18->field_0x4 = uVar9;
          (pFVar18->NetHandle).field0_0x0 = FVar5;
          pUVar8 = pFVar15->Class;
          pFVar18->Instance = pFVar15->Instance;
          pFVar18->Class = pUVar8;
          pFVar15->ObjectIndex = uVar10;
          *(undefined4 *)&pFVar15->field_0x4 = uVar11;
          (pFVar15->NetHandle).field0_0x0 = FVar4;
          pFVar15->Instance = pUVar6;
          pFVar15->Class = pUVar7;
        }
        goto LAB_1442aa319;
      }
LAB_1442aa307:
      local_348 = pFVar1;
      HeapSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>
                (pFVar18,iVar12,param_3,param_4);
LAB_1442aa319:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_338 <= ppFVar19);
  }
  return;
code_r0x0001442aa1c9:
  uVar2 = (pFVar17->NetHandle).field0_0x0.Value;
  uVar3 = pFVar16[1].NetHandle.field0_0x0.Value;
  if ((((uVar2 & 0x3fffffffffffff) == (uVar3 & 0x3fffffffffffff)) || (uVar2 == 0)) ||
     ((uVar3 != 0 &&
      ((((uVar2 & 1) != 0 && ((uVar3 & 1) == 0)) ||
       ((((uVar2 & 1) != 0 || ((uVar3 & 1) == 0)) &&
        ((uVar3 & 0x3fffffffffffff) <= (uVar2 & 0x3fffffffffffff))))))))) goto LAB_1442aa1c0;
LAB_1442aa203:
  while (pFVar14 = pFVar13, pFVar13 = pFVar14 + -1, pFVar17 < pFVar13) {
    uVar2 = pFVar14[-1].NetHandle.field0_0x0.Value;
    uVar3 = (pFVar17->NetHandle).field0_0x0.Value;
    if ((((uVar2 & 0x3fffffffffffff) != (uVar3 & 0x3fffffffffffff)) && (uVar2 != 0)) &&
       ((uVar3 == 0 ||
        ((((uVar2 & 1) == 0 || ((uVar3 & 1) != 0)) &&
         ((((uVar2 & 1) == 0 && ((uVar3 & 1) != 0)) ||
          ((uVar2 & 0x3fffffffffffff) < (uVar3 & 0x3fffffffffffff))))))))) break;
  }
  FVar4 = pFVar14[-1].NetHandle.field0_0x0;
  if (pFVar18 <= pFVar13) {
    uVar10 = pFVar18->ObjectIndex;
    uVar9 = *(undefined4 *)&pFVar18->field_0x4;
    FVar5 = pFVar16[1].NetHandle.field0_0x0;
    pUVar6 = pFVar16[1].Instance;
    pUVar7 = pFVar16[1].Class;
    *(undefined8 *)pFVar18 = *(undefined8 *)pFVar13;
    pFVar16[1].NetHandle.field0_0x0 = FVar4;
    pUVar8 = pFVar14[-1].Class;
    pFVar16[1].Instance = pFVar14[-1].Instance;
    pFVar16[1].Class = pUVar8;
    pFVar13->ObjectIndex = uVar10;
    *(undefined4 *)&pFVar13->field_0x4 = uVar9;
    pFVar14[-1].NetHandle.field0_0x0 = FVar5;
    pFVar14[-1].Instance = pUVar6;
    pFVar14[-1].Class = pUVar7;
    goto LAB_1442aa1c0;
  }
  uVar9 = *(undefined4 *)&pFVar17->field_0x4;
  FVar5 = (pFVar17->NetHandle).field0_0x0;
  pUVar6 = pFVar17->Instance;
  pUVar7 = pFVar17->Class;
  *(undefined8 *)pFVar17 = *(undefined8 *)pFVar13;
  (pFVar17->NetHandle).field0_0x0 = FVar4;
  local_348._0_4_ = (int)local_348 + -1;
  pUVar8 = pFVar14[-1].Class;
  pFVar17->Instance = pFVar14[-1].Instance;
  pFVar17->Class = pUVar8;
  pFVar13->ObjectIndex = pFVar17->ObjectIndex;
  *(undefined4 *)&pFVar13->field_0x4 = uVar9;
  pFVar14[-1].NetHandle.field0_0x0 = FVar5;
  pFVar14[-1].Instance = pUVar6;
  pFVar14[-1].Class = pUVar7;
  if ((longlong)((longlong)pFVar13 + (-0x20 - (longlong)pFVar17) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar15 - (longlong)pFVar18 & 0xffffffffffffffe0U)) {
    if (pFVar18 < pFVar15) {
      *ppFVar19 = pFVar18;
      ppFVar19[1] = pFVar15;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar13 <= pFVar17 + 1) goto LAB_1442aa319;
    pFVar15 = pFVar14 + -2;
    pFVar18 = pFVar17;
  }
  else {
    if (pFVar17 + 1 < pFVar13) {
      *ppFVar19 = pFVar17;
      ppFVar19[1] = pFVar14 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar15 <= pFVar18) goto LAB_1442aa319;
  }
  iVar12 = (int)((longlong)pFVar15 - (longlong)pFVar18 >> 5) + 1;
  pFVar17 = pFVar18;
  if ((int)local_348 == 0) goto LAB_1442aa307;
  goto LAB_1442aa180;
}

// IntroSortInternal<`UNetObjectCountLimiter::PrioritizeForFill'::__l2::FSortInfo,int,FIdentityFunctor,`UNetObjectCountLimiter::PrioritizeForFill'::__l14::<lambda_2>_> @ 1442aa410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UNetObjectCountLimiter::PrioritizeForFill_::__l2::FSortInfo,int,FIdentityFunctor,_UNetObjectCountLimiter::PrioritizeForFill_::__l14::<lambda_2>_>
          (FSortInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  FSortInfo *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined3 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined3 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined3 uVar15;
  int iVar16;
  FSortInfo *pFVar17;
  FSortInfo *pFVar18;
  FSortInfo *pFVar19;
  FSortInfo *pFVar20;
  FSortInfo *pFVar21;
  FSortInfo *pFVar22;
  FSortInfo **ppFVar23;
  char cVar24;
  float fVar25;
  undefined1 auStack_368 [48];
  FSortInfo *local_338;
  FSortInfo *local_328;
  FSortInfo *local_320;
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
    ppFVar23 = &local_328;
    do {
      pFVar22 = ppFVar23[1];
      pFVar21 = *ppFVar23;
      pFVar1 = ppFVar23[2];
      iVar16 = (int)((longlong)pFVar22 - (longlong)pFVar21 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar20 = pFVar21;
      if ((int)local_338 != 0) {
LAB_1442aa4c0:
        if (8 < iVar16) {
          uVar7 = pFVar20->InternalIndex;
          uVar8 = pFVar20->FrameCountSinceConsidered;
          bVar9 = pFVar20->bIsOwnedByConnection;
          uVar10 = *(undefined3 *)&pFVar20->field_0xd;
          pFVar18 = pFVar22 + 1;
          pFVar21 = pFVar20 + iVar16 / 2;
          uVar11 = pFVar21->ObjectIndex;
          uVar12 = pFVar21->InternalIndex;
          uVar13 = pFVar21->FrameCountSinceConsidered;
          bVar14 = pFVar21->bIsOwnedByConnection;
          uVar15 = *(undefined3 *)&pFVar21->field_0xd;
          pFVar21 = pFVar20 + iVar16 / 2;
          pFVar21->ObjectIndex = pFVar20->ObjectIndex;
          pFVar21->InternalIndex = uVar7;
          pFVar21->FrameCountSinceConsidered = uVar8;
          pFVar21->bIsOwnedByConnection = bVar9;
          *(undefined3 *)&pFVar21->field_0xd = uVar10;
          pFVar20->ObjectIndex = uVar11;
          pFVar20->InternalIndex = uVar12;
          pFVar20->FrameCountSinceConsidered = uVar13;
          pFVar20->bIsOwnedByConnection = bVar14;
          *(undefined3 *)&pFVar20->field_0xd = uVar15;
          pFVar21 = pFVar20;
LAB_1442aa4f0:
          pFVar17 = pFVar21;
          pFVar21 = pFVar17 + 1;
          if (pFVar21 <= pFVar22) goto code_r0x0001442aa4fc;
          goto LAB_1442aa522;
        }
        for (; pFVar21 = pFVar20, pFVar1 = pFVar20, pFVar20 < pFVar22; pFVar22 = pFVar22 + -1) {
          while (pFVar18 = pFVar21, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar22) {
            cVar24 = pFVar18->bIsOwnedByConnection;
            if (((bool)cVar24 == pFVar1->bIsOwnedByConnection) &&
               (cVar24 = pFVar1->FrameCountSinceConsidered <= pFVar18->FrameCountSinceConsidered,
               pFVar18->FrameCountSinceConsidered == pFVar1->FrameCountSinceConsidered)) {
              cVar24 = pFVar18->InternalIndex < pFVar1->InternalIndex;
            }
            pFVar21 = pFVar1;
            if (cVar24 == '\0') {
              pFVar21 = pFVar18;
            }
          }
          uVar11 = pFVar18->ObjectIndex;
          uVar12 = pFVar18->InternalIndex;
          uVar13 = pFVar18->FrameCountSinceConsidered;
          bVar14 = pFVar18->bIsOwnedByConnection;
          uVar15 = *(undefined3 *)&pFVar18->field_0xd;
          uVar7 = pFVar22->InternalIndex;
          uVar8 = pFVar22->FrameCountSinceConsidered;
          bVar9 = pFVar22->bIsOwnedByConnection;
          uVar10 = *(undefined3 *)&pFVar22->field_0xd;
          pFVar18->ObjectIndex = pFVar22->ObjectIndex;
          pFVar18->InternalIndex = uVar7;
          pFVar18->FrameCountSinceConsidered = uVar8;
          pFVar18->bIsOwnedByConnection = bVar9;
          *(undefined3 *)&pFVar18->field_0xd = uVar10;
          pFVar22->ObjectIndex = uVar11;
          pFVar22->InternalIndex = uVar12;
          pFVar22->FrameCountSinceConsidered = uVar13;
          pFVar22->bIsOwnedByConnection = bVar14;
          *(undefined3 *)&pFVar22->field_0xd = uVar15;
        }
        goto LAB_1442aa601;
      }
LAB_1442aa5ef:
      local_338 = pFVar1;
      HeapSortInternal<_UNetObjectCountLimiter::PrioritizeForFill_::__l2::FSortInfo,int,FIdentityFunctor,_UNetObjectCountLimiter::PrioritizeForFill_::__l14::<lambda_2>_>
                (pFVar21,iVar16,param_3,param_4);
LAB_1442aa601:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_328 <= ppFVar23);
  }
  return;
code_r0x0001442aa4fc:
  cVar24 = pFVar20->bIsOwnedByConnection;
  if (((bool)cVar24 == pFVar17[1].bIsOwnedByConnection) &&
     (cVar24 = pFVar17[1].FrameCountSinceConsidered <= pFVar20->FrameCountSinceConsidered,
     pFVar20->FrameCountSinceConsidered == pFVar17[1].FrameCountSinceConsidered)) {
    cVar24 = pFVar20->InternalIndex < pFVar17[1].InternalIndex;
  }
  if (cVar24 == '\0') goto LAB_1442aa4f0;
LAB_1442aa522:
  do {
    pFVar19 = pFVar18;
    pFVar18 = pFVar19 + -1;
    if (pFVar18 <= pFVar20) break;
    cVar24 = pFVar19[-1].bIsOwnedByConnection;
    if (((bool)cVar24 == pFVar20->bIsOwnedByConnection) &&
       (cVar24 = pFVar20->FrameCountSinceConsidered <= pFVar19[-1].FrameCountSinceConsidered,
       pFVar19[-1].FrameCountSinceConsidered == pFVar20->FrameCountSinceConsidered)) {
      cVar24 = pFVar19[-1].InternalIndex < pFVar20->InternalIndex;
    }
  } while (cVar24 == '\0');
  uVar2 = pFVar18->ObjectIndex;
  uVar3 = pFVar18->InternalIndex;
  uVar4 = pFVar19[-1].FrameCountSinceConsidered;
  uVar5 = pFVar19[-1].bIsOwnedByConnection;
  uVar6 = *(undefined3 *)&pFVar19[-1].field_0xd;
  if (pFVar21 <= pFVar18) {
    uVar7 = pFVar21->ObjectIndex;
    uVar8 = pFVar21->InternalIndex;
    uVar11 = pFVar17[1].FrameCountSinceConsidered;
    bVar9 = pFVar17[1].bIsOwnedByConnection;
    uVar10 = *(undefined3 *)&pFVar17[1].field_0xd;
    pFVar21->ObjectIndex = uVar2;
    pFVar21->InternalIndex = uVar3;
    pFVar17[1].FrameCountSinceConsidered = uVar4;
    pFVar17[1].bIsOwnedByConnection = (bool)uVar5;
    *(undefined3 *)&pFVar17[1].field_0xd = uVar6;
    pFVar18->ObjectIndex = uVar7;
    pFVar18->InternalIndex = uVar8;
    pFVar19[-1].FrameCountSinceConsidered = uVar11;
    pFVar19[-1].bIsOwnedByConnection = bVar9;
    *(undefined3 *)&pFVar19[-1].field_0xd = uVar10;
    goto LAB_1442aa4f0;
  }
  uVar7 = pFVar20->ObjectIndex;
  uVar8 = pFVar20->InternalIndex;
  uVar11 = pFVar20->FrameCountSinceConsidered;
  bVar9 = pFVar20->bIsOwnedByConnection;
  uVar10 = *(undefined3 *)&pFVar20->field_0xd;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar20->ObjectIndex = uVar2;
  pFVar20->InternalIndex = uVar3;
  pFVar20->FrameCountSinceConsidered = uVar4;
  pFVar20->bIsOwnedByConnection = (bool)uVar5;
  *(undefined3 *)&pFVar20->field_0xd = uVar6;
  pFVar18->ObjectIndex = uVar7;
  pFVar18->InternalIndex = uVar8;
  pFVar19[-1].FrameCountSinceConsidered = uVar11;
  pFVar19[-1].bIsOwnedByConnection = bVar9;
  *(undefined3 *)&pFVar19[-1].field_0xd = uVar10;
  if ((longlong)((longlong)pFVar18 + (-0x10 - (longlong)pFVar20) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar22 - (longlong)pFVar21 & 0xfffffffffffffff0U)) {
    if (pFVar21 < pFVar22) {
      *ppFVar23 = pFVar21;
      ppFVar23[1] = pFVar22;
      *(int *)(ppFVar23 + 2) = (int)local_338;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar18 <= pFVar20 + 1) goto LAB_1442aa601;
    pFVar22 = pFVar19 + -2;
    pFVar21 = pFVar20;
  }
  else {
    if (pFVar20 + 1 < pFVar18) {
      *ppFVar23 = pFVar20;
      ppFVar23[1] = pFVar19 + -2;
      *(int *)(ppFVar23 + 2) = (int)local_338;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar22 <= pFVar21) goto LAB_1442aa601;
  }
  iVar16 = (int)((longlong)pFVar22 - (longlong)pFVar21 >> 4) + 1;
  pFVar20 = pFVar21;
  if ((int)local_338 == 0) goto LAB_1442aa5ef;
  goto LAB_1442aa4c0;
}

// IntroSortInternal<`UNetObjectCountLimiter::PrioritizeForFill'::__l2::FSortInfo,int,FIdentityFunctor,`UNetObjectCountLimiter::PrioritizeForFill'::__l23::<lambda_3>_> @ 1442aa6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UNetObjectCountLimiter::PrioritizeForFill_::__l2::FSortInfo,int,FIdentityFunctor,_UNetObjectCountLimiter::PrioritizeForFill_::__l23::<lambda_3>_>
          (FSortInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_3> param_4)

{
  FSortInfo *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined3 uVar6;
  uint uVar7;
  uint uVar8;
  undefined3 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined3 uVar14;
  int iVar15;
  FSortInfo *pFVar16;
  FSortInfo *pFVar17;
  FSortInfo *pFVar18;
  FSortInfo *pFVar19;
  FSortInfo *pFVar20;
  FSortInfo *pFVar21;
  FSortInfo **ppFVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_368 [48];
  FSortInfo *local_338;
  FSortInfo *local_328;
  FSortInfo *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar24 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar24;
    memset(local_310,0,0x2e8);
    ppFVar22 = &local_328;
    do {
      pFVar21 = ppFVar22[1];
      pFVar20 = *ppFVar22;
      pFVar1 = ppFVar22[2];
      iVar15 = (int)((longlong)pFVar21 - (longlong)pFVar20 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar19 = pFVar20;
      if ((int)local_338 != 0) {
LAB_1442aa770:
        if (8 < iVar15) {
          uVar7 = pFVar19->InternalIndex;
          uVar8 = pFVar19->FrameCountSinceConsidered;
          bVar23 = pFVar19->bIsOwnedByConnection;
          uVar9 = *(undefined3 *)&pFVar19->field_0xd;
          pFVar17 = pFVar21 + 1;
          pFVar20 = pFVar19 + iVar15 / 2;
          uVar10 = pFVar20->ObjectIndex;
          uVar11 = pFVar20->InternalIndex;
          uVar12 = pFVar20->FrameCountSinceConsidered;
          bVar13 = pFVar20->bIsOwnedByConnection;
          uVar14 = *(undefined3 *)&pFVar20->field_0xd;
          pFVar20 = pFVar19 + iVar15 / 2;
          pFVar20->ObjectIndex = pFVar19->ObjectIndex;
          pFVar20->InternalIndex = uVar7;
          pFVar20->FrameCountSinceConsidered = uVar8;
          pFVar20->bIsOwnedByConnection = bVar23;
          *(undefined3 *)&pFVar20->field_0xd = uVar9;
          pFVar19->ObjectIndex = uVar10;
          pFVar19->InternalIndex = uVar11;
          pFVar19->FrameCountSinceConsidered = uVar12;
          pFVar19->bIsOwnedByConnection = bVar13;
          *(undefined3 *)&pFVar19->field_0xd = uVar14;
          pFVar20 = pFVar19;
LAB_1442aa7a0:
          pFVar16 = pFVar20;
          pFVar20 = pFVar16 + 1;
          if (pFVar20 <= pFVar21) goto code_r0x0001442aa7ac;
          goto LAB_1442aa7d0;
        }
        for (; pFVar20 = pFVar19, pFVar1 = pFVar19, pFVar19 < pFVar21; pFVar21 = pFVar21 + -1) {
          while (pFVar17 = pFVar20, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar21) {
            bVar23 = pFVar1->FrameCountSinceConsidered <= pFVar17->FrameCountSinceConsidered;
            if (pFVar17->FrameCountSinceConsidered == pFVar1->FrameCountSinceConsidered) {
              bVar23 = pFVar17->InternalIndex < pFVar1->InternalIndex;
            }
            pFVar20 = pFVar1;
            if (!bVar23) {
              pFVar20 = pFVar17;
            }
          }
          uVar10 = pFVar17->ObjectIndex;
          uVar11 = pFVar17->InternalIndex;
          uVar12 = pFVar17->FrameCountSinceConsidered;
          bVar13 = pFVar17->bIsOwnedByConnection;
          uVar14 = *(undefined3 *)&pFVar17->field_0xd;
          uVar7 = pFVar21->InternalIndex;
          uVar8 = pFVar21->FrameCountSinceConsidered;
          bVar23 = pFVar21->bIsOwnedByConnection;
          uVar9 = *(undefined3 *)&pFVar21->field_0xd;
          pFVar17->ObjectIndex = pFVar21->ObjectIndex;
          pFVar17->InternalIndex = uVar7;
          pFVar17->FrameCountSinceConsidered = uVar8;
          pFVar17->bIsOwnedByConnection = bVar23;
          *(undefined3 *)&pFVar17->field_0xd = uVar9;
          pFVar21->ObjectIndex = uVar10;
          pFVar21->InternalIndex = uVar11;
          pFVar21->FrameCountSinceConsidered = uVar12;
          pFVar21->bIsOwnedByConnection = bVar13;
          *(undefined3 *)&pFVar21->field_0xd = uVar14;
        }
        goto LAB_1442aa8a5;
      }
LAB_1442aa893:
      local_338 = pFVar1;
      HeapSortInternal<_UNetObjectCountLimiter::PrioritizeForFill_::__l2::FSortInfo,int,FIdentityFunctor,_UNetObjectCountLimiter::PrioritizeForFill_::__l23::<lambda_3>_>
                (pFVar20,iVar15,param_3,param_4);
LAB_1442aa8a5:
      ppFVar22 = ppFVar22 + -3;
    } while (&local_328 <= ppFVar22);
  }
  return;
code_r0x0001442aa7ac:
  bVar23 = pFVar16[1].FrameCountSinceConsidered <= pFVar19->FrameCountSinceConsidered;
  if (pFVar19->FrameCountSinceConsidered == pFVar16[1].FrameCountSinceConsidered) {
    bVar23 = pFVar19->InternalIndex < pFVar16[1].InternalIndex;
  }
  if (!bVar23) goto LAB_1442aa7a0;
LAB_1442aa7d0:
  do {
    pFVar18 = pFVar17;
    pFVar17 = pFVar18 + -1;
    if (pFVar17 <= pFVar19) break;
    bVar23 = pFVar19->FrameCountSinceConsidered <= pFVar18[-1].FrameCountSinceConsidered;
    if (pFVar18[-1].FrameCountSinceConsidered == pFVar19->FrameCountSinceConsidered) {
      bVar23 = pFVar18[-1].InternalIndex < pFVar19->InternalIndex;
    }
  } while (!bVar23);
  uVar2 = pFVar17->ObjectIndex;
  uVar3 = pFVar17->InternalIndex;
  uVar4 = pFVar18[-1].FrameCountSinceConsidered;
  uVar5 = pFVar18[-1].bIsOwnedByConnection;
  uVar6 = *(undefined3 *)&pFVar18[-1].field_0xd;
  if (pFVar20 <= pFVar17) {
    uVar7 = pFVar20->ObjectIndex;
    uVar8 = pFVar20->InternalIndex;
    uVar10 = pFVar16[1].FrameCountSinceConsidered;
    bVar23 = pFVar16[1].bIsOwnedByConnection;
    uVar9 = *(undefined3 *)&pFVar16[1].field_0xd;
    pFVar20->ObjectIndex = uVar2;
    pFVar20->InternalIndex = uVar3;
    pFVar16[1].FrameCountSinceConsidered = uVar4;
    pFVar16[1].bIsOwnedByConnection = (bool)uVar5;
    *(undefined3 *)&pFVar16[1].field_0xd = uVar6;
    pFVar17->ObjectIndex = uVar7;
    pFVar17->InternalIndex = uVar8;
    pFVar18[-1].FrameCountSinceConsidered = uVar10;
    pFVar18[-1].bIsOwnedByConnection = bVar23;
    *(undefined3 *)&pFVar18[-1].field_0xd = uVar9;
    goto LAB_1442aa7a0;
  }
  uVar7 = pFVar19->ObjectIndex;
  uVar8 = pFVar19->InternalIndex;
  uVar10 = pFVar19->FrameCountSinceConsidered;
  bVar23 = pFVar19->bIsOwnedByConnection;
  uVar9 = *(undefined3 *)&pFVar19->field_0xd;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar19->ObjectIndex = uVar2;
  pFVar19->InternalIndex = uVar3;
  pFVar19->FrameCountSinceConsidered = uVar4;
  pFVar19->bIsOwnedByConnection = (bool)uVar5;
  *(undefined3 *)&pFVar19->field_0xd = uVar6;
  pFVar17->ObjectIndex = uVar7;
  pFVar17->InternalIndex = uVar8;
  pFVar18[-1].FrameCountSinceConsidered = uVar10;
  pFVar18[-1].bIsOwnedByConnection = bVar23;
  *(undefined3 *)&pFVar18[-1].field_0xd = uVar9;
  if ((longlong)((longlong)pFVar17 + (-0x10 - (longlong)pFVar19) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar21 - (longlong)pFVar20 & 0xfffffffffffffff0U)) {
    if (pFVar20 < pFVar21) {
      *ppFVar22 = pFVar20;
      ppFVar22[1] = pFVar21;
      *(int *)(ppFVar22 + 2) = (int)local_338;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar17 <= pFVar19 + 1) goto LAB_1442aa8a5;
    pFVar21 = pFVar18 + -2;
    pFVar20 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar17) {
      *ppFVar22 = pFVar19;
      ppFVar22[1] = pFVar18 + -2;
      *(int *)(ppFVar22 + 2) = (int)local_338;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar21 <= pFVar20) goto LAB_1442aa8a5;
  }
  iVar15 = (int)((longlong)pFVar21 - (longlong)pFVar20 >> 4) + 1;
  pFVar19 = pFVar20;
  if ((int)local_338 == 0) goto LAB_1442aa893;
  goto LAB_1442aa770;
}

// Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<`UObjectReplicationBridge::PrintDynamicFilterClassConfig'::__l42::<lambda_1>_>_>_>_> @ 1442aa950

void __cdecl
AlgoImpl::
Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintDynamicFilterClassConfig_::__l42::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,
          FElementCompareClass<TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintDynamicFilterClassConfig(unsigned_int)_::_42_::<lambda_1>_>_>_>
          param_5)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FName local_48;
  FName local_40;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar9;
  
  if (0 < param_2) {
    iVar11 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar7 = 0;
      if (0 < param_2 - iVar11) {
        uVar16 = param_2 - iVar11;
        do {
          iVar15 = (uVar16 >> 1) + iVar7;
          local_48.ComparisonIndex.Value = *(int *)(param_1 + (longlong)iVar15 + (longlong)iVar11);
          local_48.Number = *(int *)((longlong)(param_1 + (longlong)iVar15 + (longlong)iVar11) + 4);
          local_40.ComparisonIndex.Value = *(int *)(param_1 + param_2);
          local_40.Number = *(int *)((longlong)(param_1 + param_2) + 4);
          iVar6 = ::FName::Compare(&local_40,&local_48);
          if (-1 < iVar6) {
            iVar7 = iVar15 + (uVar16 & 1);
          }
          uVar17 = uVar16 >> 1;
          uVar16 = uVar16 >> 1;
        } while (uVar17 != 0);
      }
      iVar11 = iVar11 + iVar7;
      if (param_2 <= iVar11) {
        return;
      }
      iVar7 = 0;
      iVar15 = 0;
      pTVar12 = param_1 + iVar11;
      uVar16 = param_3 - param_2;
      if (0 < (int)uVar16) {
        do {
          local_40.ComparisonIndex.Value = *(int *)pTVar12;
          local_40.Number = *(int *)((longlong)pTVar12 + 4);
          uVar17 = uVar16 >> 1;
          local_48.ComparisonIndex.Value =
               *(int *)(param_1 + (longlong)(int)(uVar17 + iVar7) + (longlong)param_2);
          local_48.Number =
               *(int *)((longlong)(param_1 + (longlong)(int)(uVar17 + iVar7) + (longlong)param_2) +
                       4);
          iVar6 = ::FName::Compare(&local_48,&local_40);
          iVar15 = iVar7;
          if (iVar6 < 0) {
            iVar15 = uVar17 + iVar7 + (uVar16 & 1);
          }
          uVar16 = uVar17;
          iVar7 = iVar15;
        } while (uVar17 != 0);
      }
      iVar6 = (iVar15 - iVar11) + param_2;
      iVar7 = param_2 - iVar11;
      if ((iVar7 != 0) && (iVar7 < iVar6)) {
        pTVar8 = pTVar12 + iVar7;
        pTVar13 = pTVar12;
        pTVar9 = pTVar12 + iVar7;
        do {
          while( true ) {
            pTVar10 = pTVar8 + 1;
            pTVar14 = pTVar13 + 1;
            uVar1 = *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 8);
            TVar2 = pTVar13->_s_1;
            uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
            uVar4 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
            uVar5 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
            pTVar13->_s_1 = pTVar8->_s_1;
            *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar1;
            uVar1 = *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x18);
            *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x10);
            *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar1;
            pTVar8->_s_1 = TVar2;
            *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 8) = uVar3;
            *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x10) = uVar4;
            *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 0x18) = uVar5;
            pTVar13 = pTVar14;
            if (pTVar10 == pTVar12 + iVar6) break;
            pTVar8 = pTVar10;
            if (pTVar14 == pTVar9) {
              pTVar9 = pTVar10;
            }
          }
          pTVar8 = pTVar9;
        } while (pTVar14 != pTVar9);
      }
      param_2 = param_2 + iVar15;
      iVar11 = iVar11 + 1 + iVar15;
    } while (iVar11 < param_2);
  }
  return;
}

// NewObject<UNetObjectPrioritizer> @ 1442aad50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetObjectPrioritizer * __cdecl
NewObject<UNetObjectPrioritizer>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UNetObjectPrioritizer::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UNetObjectPrioritizer *)pUVar2;
}

// NewObject<UNetObjectPrioritizerConfig> @ 1442aae50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetObjectPrioritizerConfig * __cdecl
NewObject<UNetObjectPrioritizerConfig>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UNetObjectPrioritizerConfig::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UNetObjectPrioritizerConfig *)pUVar2;
}

// NewObject<UNetObjectPrioritizerDefinitions> @ 1442aaf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetObjectPrioritizerDefinitions * __cdecl
NewObject<UNetObjectPrioritizerDefinitions>(UObject *param_1)

{
  UClass *pUVar1;
  UNetObjectPrioritizerDefinitions *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNetObjectPrioritizerDefinitions::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNetObjectPrioritizerDefinitions *)
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

// Reverse<unsigned_int> @ 1442ace40

void __cdecl AlgoImpl::Reverse<unsigned_int>(uint *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    puVar2 = param_1 + (param_2 + -1);
    do {
      uVar1 = param_1[lVar3];
      param_1[lVar3] = *puVar2;
      lVar3 = lVar3 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// RotateInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>_> @ 1442ace90

int __cdecl
AlgoImpl::RotateInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar7;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar6 = param_1 + param_3;
    pTVar9 = param_1;
    pTVar7 = param_1 + param_3;
    do {
      while( true ) {
        pTVar8 = pTVar6 + 1;
        pTVar10 = pTVar9 + 1;
        uVar1 = *(undefined8 *)((longlong)(pTVar6->ElementData).Pad + 8);
        TVar2 = pTVar9->_s_1;
        uVar3 = *(undefined8 *)((pTVar9->ElementData).Pad + 8);
        uVar4 = *(undefined8 *)((pTVar9->ElementData).Pad + 0x10);
        uVar5 = *(undefined8 *)((pTVar9->ElementData).Pad + 0x18);
        pTVar9->_s_1 = pTVar6->_s_1;
        *(undefined8 *)((pTVar9->ElementData).Pad + 8) = uVar1;
        uVar1 = *(undefined8 *)((longlong)(pTVar6->ElementData).Pad + 0x18);
        *(undefined8 *)((pTVar9->ElementData).Pad + 0x10) =
             *(undefined8 *)((longlong)(pTVar6->ElementData).Pad + 0x10);
        *(undefined8 *)((pTVar9->ElementData).Pad + 0x18) = uVar1;
        pTVar6->_s_1 = TVar2;
        *(undefined8 *)((longlong)(pTVar6->ElementData).Pad + 8) = uVar3;
        *(undefined8 *)((longlong)(pTVar6->ElementData).Pad + 0x10) = uVar4;
        *(undefined8 *)((longlong)(pTVar6->ElementData).Pad + 0x18) = uVar5;
        pTVar9 = pTVar10;
        if (pTVar8 == param_1 + param_2) break;
        pTVar6 = pTVar8;
        if (pTVar10 == pTVar7) {
          pTVar7 = pTVar8;
        }
      }
      pTVar6 = pTVar7;
    } while (pTVar10 != pTVar7);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// Sort<TSortableMapBase<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>_>::FKeyComparisonClass<`UObjectReplicationBridge::PrintNetCullDistances'::__l13::<lambda_4>_>_> @ 1442acf30

void __thiscall
TSet<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l13::<lambda_4>_>_>
          (void *this,
          FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_13_::<lambda_4>_>
          *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_13_::<lambda_4>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34)) {
    TSparseArrayBase<112,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact(this);
    iVar4 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_> **)this;
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
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l13::<lambda_4>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FCullDistanceInfo,0>_>::FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_13_::<lambda_4>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// Sort<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<`UObjectReplicationBridge::PrintNetCullDistances'::__l51::<lambda_5>_>_> @ 1442acfc0

void __thiscall
TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l51::<lambda_5>_>_>
          (TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>
           *this,FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_51_::<lambda_5>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_51_::<lambda_5>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **)&this->Elements;
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
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<float,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<float,unsigned_int>,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintNetCullDistances_::__l51::<lambda_5>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>::FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintNetCullDistances(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_51_::<lambda_5>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// StableSort<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<`UObjectReplicationBridge::PrintDynamicFilterClassConfig'::__l42::<lambda_1>_>_> @ 1442ad050

void __thiscall
TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
::
StableSort<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintDynamicFilterClassConfig_::__l42::<lambda_1>_>_>
          (TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>
           *this,FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintDynamicFilterClassConfig(unsigned_int)_::_42_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintDynamicFilterClassConfig(unsigned_int)_::_42_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::CompactStable(&this->Elements);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> **)&this->Elements;
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
    StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintDynamicFilterClassConfig_::__l42::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintDynamicFilterClassConfig(unsigned_int)_::_42_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<`UObjectReplicationBridge::PrintDynamicFilterClassConfig'::__l42::<lambda_1>_>_>_>_> @ 1442ad0e0

void __cdecl
AlgoImpl::
StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintDynamicFilterClassConfig_::__l42::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<_public:_void___cdecl_UObjectReplicationBridge::PrintDynamicFilterClassConfig(unsigned_int)_::_42_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>_s_1 TVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_> *pTVar10;
  int iVar11;
  longlong lVar12;
  FName local_38;
  FName local_30;
  
  if (0 < param_2) {
    iVar7 = 1;
    lVar12 = ((longlong)param_2 - 1U >> 1) + 1;
    pTVar10 = param_1;
    do {
      if (iVar7 < param_2) {
        local_38.ComparisonIndex.Value = *(int *)pTVar10;
        local_38.Number = *(int *)((longlong)pTVar10 + 4);
        local_30.ComparisonIndex.Value = *(int *)(pTVar10 + 1);
        local_30.Number = *(int *)((longlong)(pTVar10 + 1) + 4);
        iVar6 = ::FName::Compare(&local_30,&local_38);
        if (iVar6 < 0) {
          TVar1 = pTVar10->_s_1;
          uVar2 = *(undefined8 *)((pTVar10->ElementData).Pad + 8);
          uVar3 = *(undefined8 *)((pTVar10->ElementData).Pad + 0x10);
          uVar4 = *(undefined8 *)((pTVar10->ElementData).Pad + 0x18);
          pTVar10->_s_1 = pTVar10[1]._s_1;
          *(undefined8 *)((pTVar10->ElementData).Pad + 8) =
               *(undefined8 *)((longlong)pTVar10 + 0x28);
          uVar5 = *(undefined8 *)((longlong)pTVar10 + 0x38);
          *(undefined8 *)((pTVar10->ElementData).Pad + 0x10) =
               *(undefined8 *)((longlong)pTVar10 + 0x30);
          *(undefined8 *)((pTVar10->ElementData).Pad + 0x18) = uVar5;
          pTVar10[1]._s_1 = TVar1;
          *(undefined8 *)((longlong)pTVar10 + 0x28) = uVar2;
          *(undefined8 *)((longlong)pTVar10 + 0x30) = uVar3;
          *(undefined8 *)((longlong)pTVar10 + 0x38) = uVar4;
        }
      }
      iVar7 = iVar7 + 2;
      pTVar10 = pTVar10 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  iVar7 = 2;
  if (2 < param_2) {
    do {
      iVar6 = iVar7 * 2;
      iVar8 = 0;
      iVar9 = param_2;
      do {
        iVar11 = iVar9;
        if (iVar6 <= iVar9) {
          iVar11 = iVar6;
        }
        Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,4>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,UObjectReplicationBridge::FClassFilterInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>::FKeyComparisonClass<_UObjectReplicationBridge::PrintDynamicFilterClassConfig_::__l42::<lambda_1>_>_>_>_>
                  (param_1 + iVar8,iVar7,iVar11,param_3,param_4);
        iVar8 = iVar8 + iVar6;
        iVar9 = iVar9 + iVar7 * -2;
      } while (iVar8 < param_2);
      iVar7 = iVar6;
    } while (iVar6 < param_2);
  }
  return;
}

// StaticEnum<enum_ENetObjectCountLimiterMode> @ 1442ad210

UEnum * __cdecl StaticEnum<enum_ENetObjectCountLimiterMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode,(UObject *)pUVar1,
                       L"ENetObjectCountLimiterMode");
  }
  return Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton;
}

// ~TFunction_OwnedObject<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0> @ 1442af8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UObjectReplicationBridge::PrintRelevantObjectsForConnections_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_1>,0,0> @ 1442af8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Net::Private::FReplicationPollTask::DoTask_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__DoTask_FReplicationPollTask_Private_Net_UE__QEBAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UObjectReplicationBridge::PrintReplicatedObjects'::__l2::<lambda_1>,0,0> @ 1442af8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UObjectReplicationBridge::PrintReplicatedObjects'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UObjectReplicationBridge::PrintReplicatedObjects_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UObjectReplicationBridge::PrintReplicatedObjects'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_2>,0,0> @ 1442af900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::Net::Private::FReplicationPollTask::DoTask_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__DoTask_FReplicationPollTask_Private_Net_UE__QEBAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_3>,0,0> @ 1442af920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1442afd70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UClass_*,`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UClass_*,_UObjectReplicationBridge::PrintNetCullDistances_::__l2::FCullDistanceInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,this,0,(int *)((longlong)this + 0xc));
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

// operator() @ 1442b1350

void __thiscall
<lambda_10>::operator()(<lambda_10> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FString *pFVar1;
  UReplicationSystem *this_00;
  UObjectReplicationBridge *this_01;
  wchar_t *pwVar2;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  pFVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
                     (param_1,(<lambda_1>)0x0);
  if (pFVar1 != (FString *)0x0) {
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar2,L"RepSystemId=",local_res18);
  }
  this_00 = UE::Net::GetReplicationSystem(local_res18[0]);
  if ((this_00 != (UReplicationSystem *)0x0) &&
     (this_01 = UReplicationSystem::GetReplicationBridge(this_00),
     this_01 != (UObjectReplicationBridge *)0x0)) {
    UReplicationSystem::GetReplicationSystemInternal(this_00);
    UObjectReplicationBridge::PrintRelevantObjectsForConnections(this_01,param_1);
  }
  return;
}

// operator() @ 1442b13f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_12>::operator()(<lambda_12> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FString *pFVar1;
  UReplicationSystem *this_00;
  UObjectReplicationBridge *this_01;
  wchar_t *pwVar2;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  pFVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
                     (param_1,(<lambda_1>)0x0);
  if (pFVar1 != (FString *)0x0) {
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar2,L"RepSystemId=",local_res18);
  }
  this_00 = UE::Net::GetReplicationSystem(local_res18[0]);
  if (this_00 == (UReplicationSystem *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      return;
    }
  }
  else {
    this_01 = UReplicationSystem::GetReplicationBridge(this_00);
    if (this_01 != (UObjectReplicationBridge *)0x0) {
      UObjectReplicationBridge::PrintPushBasedStatuses(this_01);
      return;
    }
    if (1 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      return;
    }
  }
  return;
}

// operator() @ 1442b14b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_13>::operator()(<lambda_13> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FString *pFVar1;
  UReplicationSystem *this_00;
  UObjectReplicationBridge *this_01;
  wchar_t *pwVar2;
  uint local_res18 [4];
  TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18[0] = 0;
  pFVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
                     (param_1,(<lambda_1>)0x0);
  if (pFVar1 != (FString *)0x0) {
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar2,L"RepSystemId=",local_res18);
  }
  this_00 = UE::Net::GetReplicationSystem(local_res18[0]);
  if (this_00 == (UReplicationSystem *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      return;
    }
  }
  else {
    this_01 = UReplicationSystem::GetReplicationBridge(this_00);
    if (this_01 == (UObjectReplicationBridge *)0x0) {
      if (1 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        return;
      }
    }
    else {
      UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg(&local_18,this_00,param_1);
      UObjectReplicationBridge::PrintDebugInfoForNetRefHandlesAndConnections
                (this_01,&local_18,param_1,Default);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 1442b3e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_5>::operator()(<lambda_5> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  EDynamicFilterPrintTraits EVar1;
  FString *pFVar2;
  UReplicationSystem *this_00;
  UObjectReplicationBridge *this_01;
  wchar_t *pwVar3;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  pFVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
                     (param_1,(<lambda_1>)0x0);
  if (pFVar2 != (FString *)0x0) {
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar3,L"RepSystemId=",local_res18);
  }
  this_00 = UE::Net::GetReplicationSystem(local_res18[0]);
  if (this_00 == (UReplicationSystem *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      return;
    }
  }
  else {
    this_01 = UReplicationSystem::GetReplicationBridge(this_00);
    if (this_01 == (UObjectReplicationBridge *)0x0) {
      if (1 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        return;
      }
    }
    else {
      EVar1 = UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs(param_1)
      ;
      UObjectReplicationBridge::PrintDynamicFilterClassConfig(this_01,EVar1 | Config);
    }
  }
  return;
}

// operator() @ 1442b3f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_6>::operator()(<lambda_6> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  EDynamicFilterPrintTraits EVar1;
  FString *pFVar2;
  UReplicationSystem *this_00;
  UObjectReplicationBridge *this_01;
  wchar_t *pwVar3;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  pFVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
                     (param_1,(<lambda_1>)0x0);
  if (pFVar2 != (FString *)0x0) {
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar3,L"RepSystemId=",local_res18);
  }
  this_00 = UE::Net::GetReplicationSystem(local_res18[0]);
  if (this_00 == (UReplicationSystem *)0x0) {
    if (1 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      return;
    }
  }
  else {
    this_01 = UReplicationSystem::GetReplicationBridge(this_00);
    if (this_01 == (UObjectReplicationBridge *)0x0) {
      if (1 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        return;
      }
    }
    else {
      EVar1 = UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs(param_1)
      ;
      UObjectReplicationBridge::PrintDynamicFilterClassConfig(this_01,EVar1 | IssueDetection);
    }
  }
  return;
}

// operator() @ 1442b4010

/* WARNING: Enum "EPrintTraits": Some values do not have unique names */

void __thiscall
<lambda_7>::operator()(<lambda_7> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  EPrintTraits EVar1;
  FString *pFVar2;
  UReplicationSystem *this_00;
  UObjectReplicationBridge *this_01;
  wchar_t *pwVar3;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  pFVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
                     (param_1,(<lambda_1>)0x0);
  if (pFVar2 != (FString *)0x0) {
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar3,L"RepSystemId=",local_res18);
  }
  this_00 = UE::Net::GetReplicationSystem(local_res18[0]);
  if ((this_00 != (UReplicationSystem *)0x0) &&
     (this_01 = UReplicationSystem::GetReplicationBridge(this_00),
     this_01 != (UObjectReplicationBridge *)0x0)) {
    EVar1 = UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs(param_1);
    UObjectReplicationBridge::PrintReplicatedObjects(this_01,EVar1);
  }
  return;
}

// operator() @ 1442b40a0

/* WARNING: Enum "EPrintTraits": Some values do not have unique names */

void __thiscall
<lambda_8>::operator()(<lambda_8> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  EPrintTraits EVar1;
  FString *pFVar2;
  UReplicationSystem *this_00;
  UObjectReplicationBridge *this_01;
  wchar_t *pwVar3;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  pFVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
                     (param_1,(<lambda_1>)0x0);
  if (pFVar2 != (FString *)0x0) {
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar3,L"RepSystemId=",local_res18);
  }
  this_00 = UE::Net::GetReplicationSystem(local_res18[0]);
  if ((this_00 != (UReplicationSystem *)0x0) &&
     (this_01 = UReplicationSystem::GetReplicationBridge(this_00),
     this_01 != (UObjectReplicationBridge *)0x0)) {
    EVar1 = UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs(param_1);
    UObjectReplicationBridge::PrintRelevantObjects(this_01,EVar1);
  }
  return;
}

// operator() @ 1442b4130

/* WARNING: Enum "EPrintTraits": Some values do not have unique names */

void __thiscall
<lambda_9>::operator()(<lambda_9> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  EPrintTraits EVar1;
  FString *pFVar2;
  UReplicationSystem *this_00;
  UObjectReplicationBridge *this_01;
  wchar_t *pwVar3;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  pFVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
                     (param_1,(<lambda_1>)0x0);
  if (pFVar2 != (FString *)0x0) {
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar3,L"RepSystemId=",local_res18);
  }
  this_00 = UE::Net::GetReplicationSystem(local_res18[0]);
  if ((this_00 != (UReplicationSystem *)0x0) &&
     (this_01 = UReplicationSystem::GetReplicationBridge(this_00),
     this_01 != (UObjectReplicationBridge *)0x0)) {
    EVar1 = UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs(param_1);
    UObjectReplicationBridge::PrintAlwaysRelevantObjects(this_01,EVar1);
  }
  return;
}

// `scalar_deleting_destructor' @ 1442b41c0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Net::Private::FObjectPoller::PollAndCopyObjects'::__l13::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 1442b4230

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Net::Private::FObjectPoller::PollAndCopyObjects'::__l13::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4270

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXI_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b42b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b42f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__DoTask_FReplicationPollTask_Private_Net_UE__QEBAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UObjectReplicationBridge::PrintReplicatedObjects'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UObjectReplicationBridge::PrintReplicatedObjects'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__DoTask_FReplicationPollTask_Private_Net_UE__QEBAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b43b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b43f0

void * __thiscall
UE::Net::FPropertyReplicationFragment::_scalar_deleting_destructor_
          (FPropertyReplicationFragment *this,uint param_1)

{
  FReplicationStateDescriptor *this_00;
  FPropertyReplicationState *pFVar1;
  
  this->_padding_ = (longlong)&___7FPropertyReplicationFragment_Net_UE__6B_;
  this_00 = (this->ReplicationStateDescriptor).Reference;
  if (this_00 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(this_00);
  }
  pFVar1 = (this->PrevReplicationState).Ptr;
  if (pFVar1 != (FPropertyReplicationState *)0x0) {
    FPropertyReplicationState::~FPropertyReplicationState(pFVar1);
    ::operator_delete(pFVar1,0x18);
  }
  pFVar1 = (this->SrcReplicationState).Ptr;
  if (pFVar1 != (FPropertyReplicationState *)0x0) {
    FPropertyReplicationState::~FPropertyReplicationState(pFVar1);
    ::operator_delete(pFVar1,0x18);
  }
  this->_padding_ = (longlong)&___7FReplicationFragment_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4490

void * __thiscall
UFieldOfViewNetObjectPrioritizer::_scalar_deleting_destructor_
          (UFieldOfViewNetObjectPrioritizer *this,uint param_1)

{
  UObject *pUVar1;
  
  this->_padding_ = (longlong)&___7UFieldOfViewNetObjectPrioritizer__6B_;
  pUVar1 = (this->Config).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Config).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)&this->_padding_);
  this->_padding_ = (longlong)&___7UNetObjectPrioritizer__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4540

void * __thiscall
UFieldOfViewNetObjectPrioritizerConfig::_scalar_deleting_destructor_
          (UFieldOfViewNetObjectPrioritizerConfig *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerConfig__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b45a0

void * __thiscall
ULocationBasedNetObjectPrioritizer::_scalar_deleting_destructor_
          (ULocationBasedNetObjectPrioritizer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  pFVar1 = (this->AssignedLocationIndices).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            (&(this->Locations).Chunks);
  this->_padding_ = (longlong)&___7UNetObjectPrioritizer__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4630

void * __thiscall
UNetObjectConnectionFilter::_scalar_deleting_destructor_
          (UNetObjectConnectionFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  this->_padding_ = (longlong)&___7UNetObjectConnectionFilter__6B_;
  pFVar1 = (this->UsedLocalInfoIndices).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UNetObjectConnectionFilter::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)(this->PerConnectionInfos).AllocatorInstance.Data,
             (this->PerConnectionInfos).ArrayNum);
  pFVar1 = (this->PerConnectionInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocalToNetRefIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pUVar2 = (this->Config).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Config).Object = (UObject *)0x0;
  }
  UNetObjectFilter::~UNetObjectFilter((UNetObjectFilter *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b46f0

void * __thiscall
UNetObjectConnectionFilterConfig::_scalar_deleting_destructor_
          (UNetObjectConnectionFilterConfig *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetObjectConnectionFilterConfig__6B_;
  UNetObjectFilterConfig::~UNetObjectFilterConfig((UNetObjectFilterConfig *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4750

void * __thiscall
UNetObjectCountLimiter::_scalar_deleting_destructor_(UNetObjectCountLimiter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  this->_padding_ = (longlong)&___7UNetObjectCountLimiter__6B_;
  pFVar1 = (this->RoundRobinState).InternalObjectIndices.Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InternalObjectIndices).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UNetObjectCountLimiter::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)(this->PerConnectionInfos).AllocatorInstance.Data,
             (this->PerConnectionInfos).ArrayNum);
  pFVar1 = (this->PerConnectionInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pUVar2 = (this->Config).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Config).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7UNetObjectPrioritizer__6B_;
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

// `scalar_deleting_destructor' @ 1442b4810

void * __thiscall
UNetObjectCountLimiterConfig::_scalar_deleting_destructor_
          (UNetObjectCountLimiterConfig *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerConfig__6B_;
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

// `scalar_deleting_destructor' @ 1442b4870

void * __thiscall
UNetObjectPrioritizer::_scalar_deleting_destructor_(UNetObjectPrioritizer *this,uint param_1)

{
  *(undefined ***)this = &___7UNetObjectPrioritizer__6B_;
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

// `scalar_deleting_destructor' @ 1442b48d0

void * __thiscall
UNetObjectPrioritizerConfig::_scalar_deleting_destructor_
          (UNetObjectPrioritizerConfig *this,uint param_1)

{
  *(undefined ***)this = &___7UNetObjectPrioritizerConfig__6B_;
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

// `scalar_deleting_destructor' @ 1442b4930

void * __thiscall
UNetObjectPrioritizerDefinitions::_scalar_deleting_destructor_
          (UNetObjectPrioritizerDefinitions *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerDefinitions__6B_;
  pFVar1 = (this->NetObjectPrioritizerDefinitions).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 1442b49a0

void * __thiscall
UObjectReplicationBridgeConfig::_scalar_deleting_destructor_
          (UObjectReplicationBridgeConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UObjectReplicationBridgeConfig__6B_;
  pFVar1 = (this->CriticalActorClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AsyncLoadingClassConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TypeStatsConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CriticalClassConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeltaCompressionConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrioritizerConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilterConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PollConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4a80

void * __thiscall
UReplicationBridge::_scalar_deleting_destructor_(UReplicationBridge *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UReplicationBridge__6B_;
  pFVar1 = (this->HandlesPendingEndReplication).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->HandlesToStopReplicating).field_0x48 = 0;
  pvVar2 = *(void **)&(this->HandlesToStopReplicating).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,enum_EEndReplicationFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,enum_EEndReplicationFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->HandlesToStopReplicating);
  *(undefined4 *)&(this->LevelGroups).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LevelGroups).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetObjectGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LevelGroups);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4b50

void * __thiscall
UReplicationDataStream::_scalar_deleting_destructor_(UReplicationDataStream *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UReplicationDataStream__6B_;
  UDataStream::~UDataStream((UDataStream *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4bb0

void * __thiscall
USphereNetObjectPrioritizer::_scalar_deleting_destructor_
          (USphereNetObjectPrioritizer *this,uint param_1)

{
  ~USphereNetObjectPrioritizer(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4c10

void * __thiscall
USphereNetObjectPrioritizerConfig::_scalar_deleting_destructor_
          (USphereNetObjectPrioritizerConfig *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerConfig__6B_;
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

// `scalar_deleting_destructor' @ 1442b4c70

void * __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::_scalar_deleting_destructor_
          (USphereWithOwnerBoostNetObjectPrioritizer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USphereWithOwnerBoostNetObjectPrioritizer__6B_;
  pFVar1 = (this->AssignedOwningConnectionIndices).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            (&(this->OwningConnections).Chunks);
  USphereNetObjectPrioritizer::~USphereNetObjectPrioritizer((USphereNetObjectPrioritizer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1442b4cf0

void * __thiscall
USphereWithOwnerBoostNetObjectPrioritizerConfig::_scalar_deleting_destructor_
          (USphereWithOwnerBoostNetObjectPrioritizerConfig *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetObjectPrioritizerConfig__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeFieldOfViewNetObjectPrioritizer @ 1442bf850

void __cdecl EmptyLinkFunctionForGeneratedCodeFieldOfViewNetObjectPrioritizer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocationBasedNetObjectPrioritizer @ 1442bf860

void __cdecl EmptyLinkFunctionForGeneratedCodeLocationBasedNetObjectPrioritizer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetObjectConnectionFilter @ 1442bf870

void __cdecl EmptyLinkFunctionForGeneratedCodeNetObjectConnectionFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetObjectCountLimiter @ 1442bf880

void __cdecl EmptyLinkFunctionForGeneratedCodeNetObjectCountLimiter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetObjectPrioritizer @ 1442bf890

void __cdecl EmptyLinkFunctionForGeneratedCodeNetObjectPrioritizer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetObjectPrioritizerDefinitions @ 1442bf8a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNetObjectPrioritizerDefinitions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectReplicationBridgeConfig @ 1442bf8b0

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectReplicationBridgeConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeReplicationBridge @ 1442bf8c0

void __cdecl EmptyLinkFunctionForGeneratedCodeReplicationBridge(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeReplicationDataStream @ 1442bf8d0

void __cdecl EmptyLinkFunctionForGeneratedCodeReplicationDataStream(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSphereNetObjectPrioritizer @ 1442bf8e0

void __cdecl EmptyLinkFunctionForGeneratedCodeSphereNetObjectPrioritizer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSphereWithOwnerBoostNetObjectPrioritizer @ 1442bf8f0

void __cdecl EmptyLinkFunctionForGeneratedCodeSphereWithOwnerBoostNetObjectPrioritizer(void)

{
  return;
}

// LexToString @ 1442c7440

FString * __cdecl LexToString(FString *__return_storage_ptr__,EEndReplicationFlags param_1)

{
  int iVar1;
  FString local_18;
  
  if (param_1 == None) {
    FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  iVar1 = 0;
  if ((param_1 & Destroy) != None) {
    FString::AppendChars(&local_18,L"Destroy",7);
    iVar1 = local_18.Data.ArrayNum;
  }
  if ((param_1 & TearOff) != None) {
    if (1 < iVar1) {
      FString::AppendChar(&local_18,L',');
    }
    FString::AppendChars(&local_18,L"TearOff",7);
    iVar1 = local_18.Data.ArrayNum;
  }
  if ((param_1 & Flush) != None) {
    if (1 < iVar1) {
      FString::AppendChar(&local_18,L',');
    }
    FString::AppendChars(&local_18,L"Flush",5);
    iVar1 = local_18.Data.ArrayNum;
  }
  if ((param_1 & DestroyNetHandle) != None) {
    if (1 < iVar1) {
      FString::AppendChar(&local_18,L',');
    }
    FString::AppendChars(&local_18,L"DestroyNetHandle",0x10);
    iVar1 = local_18.Data.ArrayNum;
  }
  if ((param_1 & ClearNetPushId) != None) {
    if (1 < iVar1) {
      FString::AppendChar(&local_18,L',');
    }
    FString::AppendChars(&local_18,L"ClearNetPushId",0xe);
    iVar1 = local_18.Data.ArrayNum;
  }
  if ((param_1 & SkipPendingEndReplicationValidation) != None) {
    if (1 < iVar1) {
      FString::AppendChar(&local_18,L',');
    }
    FString::AppendChars(&local_18,L"SkipPendingEndReplicationValidation",0x23);
    iVar1 = local_18.Data.ArrayNum;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// LexToString @ 1442c75d0

wchar_t * __cdecl LexToString(EReplicationBridgeDestroyInstanceFlags param_1)

{
  if (param_1 == None) {
    return L"None";
  }
  if (param_1 != AllowDestroyInstanceFromRemote) {
    return L"[Invalid]";
  }
  return L"AllowDestroyInstanceFromRemote";
}

// LexToString @ 1442c7600

wchar_t * __cdecl LexToString(EReplicationBridgeDestroyInstanceReason param_1)

{
  if (param_1 == DoNotDestroy) {
    return L"DoNotDestroy";
  }
  if (param_1 != TearOff) {
    if (param_1 != Destroy) {
      return L"[Invalid]";
    }
    return L"Destroy";
  }
  return L"TearOff";
}

// Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_NoRegister @ 1442eca70

UClass * __cdecl Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FieldOfViewNetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.InnerSingleton,
               UFieldOfViewNetObjectPrioritizerConfig::
               StaticRegisterNativesUFieldOfViewNetObjectPrioritizerConfig,0x58,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFieldOfViewNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<UFieldOfViewNetObjectPrioritizerConfig>,local_res8,
               UNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.InnerSingleton;
}

// Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_NoRegister @ 1442ecb30

UClass * __cdecl Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FieldOfViewNetObjectPrioritizer",
               &Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.InnerSingleton,
               UFieldOfViewNetObjectPrioritizer::
               StaticRegisterNativesUFieldOfViewNetObjectPrioritizer,0x68,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UFieldOfViewNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<UFieldOfViewNetObjectPrioritizer>,local_res8,
               ULocationBasedNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.InnerSingleton;
}

// Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_NoRegister @ 1442ecbf0

UClass * __cdecl Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"LocationBasedNetObjectPrioritizer",
               &Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.InnerSingleton,
               ULocationBasedNetObjectPrioritizer::
               StaticRegisterNativesULocationBasedNetObjectPrioritizer,0x60,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocationBasedNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<ULocationBasedNetObjectPrioritizer>,local_res8,
               UNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectConnectionFilterConfig_NoRegister @ 1442eccb0

UClass * __cdecl Z_Construct_UClass_UNetObjectConnectionFilterConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectConnectionFilterConfig",
               &Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.InnerSingleton,
               UNetObjectConnectionFilterConfig::
               StaticRegisterNativesUNetObjectConnectionFilterConfig,0x30,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectConnectionFilterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectConnectionFilterConfig>,local_res8,
               UNetObjectFilterConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectConnectionFilterConfig.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectConnectionFilter_NoRegister @ 1442ecd70

UClass * __cdecl Z_Construct_UClass_UNetObjectConnectionFilter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectConnectionFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectConnectionFilter",
               &Z_Registration_Info_UClass_UNetObjectConnectionFilter.InnerSingleton,
               UNetObjectConnectionFilter::StaticRegisterNativesUNetObjectConnectionFilter,0xa8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectConnectionFilter>,
               InternalVTableHelperCtorCaller<UNetObjectConnectionFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectConnectionFilter.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectCountLimiterConfig_NoRegister @ 1442ece30

UClass * __cdecl Z_Construct_UClass_UNetObjectCountLimiterConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectCountLimiterConfig",
               &Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.InnerSingleton,
               UNetObjectCountLimiterConfig::StaticRegisterNativesUNetObjectCountLimiterConfig,0x40,
               8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectCountLimiterConfig>,
               InternalVTableHelperCtorCaller<UNetObjectCountLimiterConfig>,local_res8,
               UNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectCountLimiter_NoRegister @ 1442ecef0

UClass * __cdecl Z_Construct_UClass_UNetObjectCountLimiter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectCountLimiter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectCountLimiter",
               &Z_Registration_Info_UClass_UNetObjectCountLimiter.InnerSingleton,
               UNetObjectCountLimiter::StaticRegisterNativesUNetObjectCountLimiter,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectCountLimiter>,
               InternalVTableHelperCtorCaller<UNetObjectCountLimiter>,local_res8,
               UNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectCountLimiter.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectPrioritizerConfig_NoRegister @ 1442ecfb0

UClass * __cdecl Z_Construct_UClass_UNetObjectPrioritizerConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton,
               UNetObjectPrioritizerConfig::StaticRegisterNativesUNetObjectPrioritizerConfig,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<UNetObjectPrioritizerConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectPrioritizerDefinitions_NoRegister @ 1442ed060

UClass * __cdecl Z_Construct_UClass_UNetObjectPrioritizerDefinitions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectPrioritizerDefinitions",
               &Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.InnerSingleton,
               UNetObjectPrioritizerDefinitions::
               StaticRegisterNativesUNetObjectPrioritizerDefinitions,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectPrioritizerDefinitions>,
               InternalVTableHelperCtorCaller<UNetObjectPrioritizerDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizerDefinitions.InnerSingleton;
}

// Z_Construct_UClass_UNetObjectPrioritizer_NoRegister @ 1442ed110

UClass * __cdecl Z_Construct_UClass_UNetObjectPrioritizer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectPrioritizer",
               &Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton,
               UNetObjectPrioritizer::StaticRegisterNativesUNetObjectPrioritizer,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<UNetObjectPrioritizer>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectPrioritizer.InnerSingleton;
}

// Z_Construct_UClass_UObjectReplicationBridgeConfig_NoRegister @ 1442ed1c0

UClass * __cdecl Z_Construct_UClass_UObjectReplicationBridgeConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ObjectReplicationBridgeConfig",
               &Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.InnerSingleton,
               UObjectReplicationBridgeConfig::StaticRegisterNativesUObjectReplicationBridgeConfig,
               0xc0,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectReplicationBridgeConfig>,
               InternalVTableHelperCtorCaller<UObjectReplicationBridgeConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReplicationBridgeConfig.InnerSingleton;
}

// Z_Construct_UClass_UReplicationBridge_NoRegister @ 1442ed270

UClass * __cdecl Z_Construct_UClass_UReplicationBridge_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationBridge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationBridge",
               &Z_Registration_Info_UClass_UReplicationBridge.InnerSingleton,
               UReplicationBridge::StaticRegisterNativesUReplicationBridge,0x110,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationBridge>,
               InternalVTableHelperCtorCaller<UReplicationBridge>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationBridge.InnerSingleton;
}

// Z_Construct_UClass_UReplicationDataStream_NoRegister @ 1442ed320

UClass * __cdecl Z_Construct_UClass_UReplicationDataStream_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationDataStream",
               &Z_Registration_Info_UClass_UReplicationDataStream.InnerSingleton,
               UReplicationDataStream::StaticRegisterNativesUReplicationDataStream,0x60,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicationDataStream>,
               InternalVTableHelperCtorCaller<UReplicationDataStream>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationDataStream.InnerSingleton;
}

// Z_Construct_UClass_USphereNetObjectPrioritizerConfig_NoRegister @ 1442ed3e0

UClass * __cdecl Z_Construct_UClass_USphereNetObjectPrioritizerConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereNetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.InnerSingleton,
               USphereNetObjectPrioritizerConfig::
               StaticRegisterNativesUSphereNetObjectPrioritizerConfig,0x40,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<USphereNetObjectPrioritizerConfig>,local_res8,
               UNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.InnerSingleton;
}

// Z_Construct_UClass_USphereNetObjectPrioritizer_NoRegister @ 1442ed4a0

UClass * __cdecl Z_Construct_UClass_USphereNetObjectPrioritizer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereNetObjectPrioritizer",
               &Z_Registration_Info_UClass_USphereNetObjectPrioritizer.InnerSingleton,
               USphereNetObjectPrioritizer::StaticRegisterNativesUSphereNetObjectPrioritizer,0x68,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<USphereNetObjectPrioritizer>,local_res8,
               ULocationBasedNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereNetObjectPrioritizer.InnerSingleton;
}

// Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_NoRegister @ 1442ed560

UClass * __cdecl Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereWithOwnerBoostNetObjectPrioritizerConfig",
               &Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.
                InnerSingleton,
               USphereWithOwnerBoostNetObjectPrioritizerConfig::
               StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizerConfig,0x48,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereWithOwnerBoostNetObjectPrioritizerConfig>,
               InternalVTableHelperCtorCaller<USphereWithOwnerBoostNetObjectPrioritizerConfig>,
               local_res8,USphereNetObjectPrioritizerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.InnerSingleton;
}

// Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_NoRegister @ 1442ed620

UClass * __cdecl Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereWithOwnerBoostNetObjectPrioritizer",
               &Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.InnerSingleton,
               USphereWithOwnerBoostNetObjectPrioritizer::
               StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizer,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereWithOwnerBoostNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<USphereWithOwnerBoostNetObjectPrioritizer>,local_res8,
               USphereNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'CVarAllowDestroyToCancelFlushAndTearOff'' @ 15036a4c0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowDestroyToCancelFlushAndTearOff__(void)

{
  CVarAllowDestroyToCancelFlushAndTearOff._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowDestroyToCancelFlushAndTearOff);
  return;
}

// `dynamic_atexit_destructor_for_'CVarColdResolvingRetryTimeMS'' @ 15036a4e0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarColdResolvingRetryTimeMS__(void)

{
  CVarColdResolvingRetryTimeMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarColdResolvingRetryTimeMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeferEndReplication'' @ 15036a500

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarDeferEndReplication__(void)

{
  CVarDeferEndReplication._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDeferEndReplication);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableFlushReliableRPCOnDestroy'' @ 15036a520

void __cdecl _dynamic_atexit_destructor_for__CVarEnableFlushReliableRPCOnDestroy__(void)

{
  CVarEnableFlushReliableRPCOnDestroy._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableFlushReliableRPCOnDestroy);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableVerbosePollProfiling'' @ 15036a540

void __cdecl
UE::Net::Private::CVars::_dynamic_atexit_destructor_for__CVarEnableVerbosePollProfiling__(void)

{
  CVarEnableVerbosePollProfiling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableVerbosePollProfiling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarExecuteReliableRPCsBeforeApplyState'' @ 15036a560

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarExecuteReliableRPCsBeforeApplyState__(void)

{
  CVarExecuteReliableRPCsBeforeApplyState._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarExecuteReliableRPCsBeforeApplyState);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFilterOutNonDirtyPushBasedObjects'' @ 15036a580

void __cdecl
UE::Net::Private::CVars::_dynamic_atexit_destructor_for__CVarFilterOutNonDirtyPushBasedObjects__
          (void)

{
  CVarFilterOutNonDirtyPushBasedObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarFilterOutNonDirtyPushBasedObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceFullCopyAndQuantize'' @ 15036a5a0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarForceFullCopyAndQuantize__(void)

{
  CVarForceFullCopyAndQuantize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceFullCopyAndQuantize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceObjectsToStall'' @ 15036a5c0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarForceObjectsToStall__(void)

{
  CVarForceObjectsToStall._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceObjectsToStall);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHotResolvingLifetimeMS'' @ 15036a5e0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarHotResolvingLifetimeMS__(void)

{
  CVarHotResolvingLifetimeMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHotResolvingLifetimeMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImmediateDispatchEndReplicationForSubObjects'' @ 15036a600

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarImmediateDispatchEndReplicationForSubObjects__
          (void)

{
  CVarImmediateDispatchEndReplicationForSubObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarImmediateDispatchEndReplicationForSubObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisLogReplicationProtocols'' @ 15036a620

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisLogReplicationProtocols__(void)

{
  CVarIrisLogReplicationProtocols._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIrisLogReplicationProtocols);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxMustBeMappedHandleArray'' @ 15036a640

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarMaxMustBeMappedHandleArray__(void)

{
  CVarMaxMustBeMappedHandleArray._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxMustBeMappedHandleArray);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQueuedBatchTimeoutSeconds'' @ 15036a660

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarQueuedBatchTimeoutSeconds__(void)

{
  CVarQueuedBatchTimeoutSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarQueuedBatchTimeoutSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQueuedBatchTimeoutWarningInterval'' @ 15036a680

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarQueuedBatchTimeoutWarningInterval__(void)

{
  CVarQueuedBatchTimeoutWarningInterval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarQueuedBatchTimeoutWarningInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQueuedBatchWarningRepeatTime'' @ 15036a6a0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarQueuedBatchWarningRepeatTime__(void)

{
  CVarQueuedBatchWarningRepeatTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarQueuedBatchWarningRepeatTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseOptObjectRefTracking'' @ 15036a6c0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarUseOptObjectRefTracking__(void)

{
  CVarUseOptObjectRefTracking._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseOptObjectRefTracking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUsePrevReceivedStateForOnReps'' @ 15036a6e0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarUsePrevReceivedStateForOnReps__(void)

{
  CVarUsePrevReceivedStateForOnReps._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUsePrevReceivedStateForOnReps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseResolvingHandleCache'' @ 15036a700

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarUseResolvingHandleCache__(void)

{
  CVarUseResolvingHandleCache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseResolvingHandleCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarbDeltaCompressInitialState'' @ 15036a720

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarbDeltaCompressInitialState__(void)

{
  CVarbDeltaCompressInitialState._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarbDeltaCompressInitialState);
  return;
}

// `dynamic_atexit_destructor_for_'CVarbOnlyQuantizeDirtyMembers'' @ 15036a740

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarbOnlyQuantizeDirtyMembers__(void)

{
  CVarbOnlyQuantizeDirtyMembers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarbOnlyQuantizeDirtyMembers);
  return;
}

// `dynamic_atexit_destructor_for_'CvarDispatchUnresolvedPreviouslyReceivedChanges'' @ 15036a760

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CvarDispatchUnresolvedPreviouslyReceivedChanges__
          (void)

{
  CvarDispatchUnresolvedPreviouslyReceivedChanges._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CvarDispatchUnresolvedPreviouslyReceivedChanges);
  return;
}

// `dynamic_atexit_destructor_for_'CvarGracefullyHandleReachingEndOfBitstream'' @ 15036a780

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CvarGracefullyHandleReachingEndOfBitstream__(void)

{
  CvarGracefullyHandleReachingEndOfBitstream._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CvarGracefullyHandleReachingEndOfBitstream);
  return;
}

// `dynamic_atexit_destructor_for_'CvarNumPollingTasks'' @ 15036a7a0

void __cdecl UE::Net::Private::CVars::_dynamic_atexit_destructor_for__CvarNumPollingTasks__(void)

{
  CvarNumPollingTasks._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CvarNumPollingTasks);
  return;
}

// `dynamic_atexit_destructor_for_'CvarNumWordsToInterleave'' @ 15036a7c0

void __cdecl
UE::Net::Private::CVars::_dynamic_atexit_destructor_for__CvarNumWordsToInterleave__(void)

{
  CvarNumWordsToInterleave._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CvarNumWordsToInterleave);
  return;
}

// `dynamic_atexit_destructor_for_'CvarRemapDynamicObjects'' @ 15036a7e0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CvarRemapDynamicObjects__(void)

{
  CvarRemapDynamicObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CvarRemapDynamicObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CvarResolvedObjectsDispatchDebugging'' @ 15036a800

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CvarResolvedObjectsDispatchDebugging__(void)

{
  CvarResolvedObjectsDispatchDebugging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CvarResolvedObjectsDispatchDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'ObjectBridgePrintAlwaysRelevantObjects'' @ 15036a820

void __cdecl _dynamic_atexit_destructor_for__ObjectBridgePrintAlwaysRelevantObjects__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&ObjectBridgePrintAlwaysRelevantObjects);
  return;
}

// `dynamic_atexit_destructor_for_'ObjectBridgePrintDynamicFilterConfig'' @ 15036a840

void __cdecl _dynamic_atexit_destructor_for__ObjectBridgePrintDynamicFilterConfig__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&ObjectBridgePrintDynamicFilterConfig);
  return;
}

// `dynamic_atexit_destructor_for_'ObjectBridgePrintDynamicFilterConfigIssues'' @ 15036a860

void __cdecl _dynamic_atexit_destructor_for__ObjectBridgePrintDynamicFilterConfigIssues__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&ObjectBridgePrintDynamicFilterConfigIssues);
  return;
}

// `dynamic_atexit_destructor_for_'ObjectBridgePrintNetCullDistances'' @ 15036a880

void __cdecl _dynamic_atexit_destructor_for__ObjectBridgePrintNetCullDistances__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ObjectBridgePrintNetCullDistances);
  return;
}

// `dynamic_atexit_destructor_for_'ObjectBridgePrintNetInfoOfObject'' @ 15036a8a0

void __cdecl _dynamic_atexit_destructor_for__ObjectBridgePrintNetInfoOfObject__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ObjectBridgePrintNetInfoOfObject);
  return;
}

// `dynamic_atexit_destructor_for_'ObjectBridgePrintPushBasedStatuses'' @ 15036a8c0

void __cdecl _dynamic_atexit_destructor_for__ObjectBridgePrintPushBasedStatuses__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ObjectBridgePrintPushBasedStatuses)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'ObjectBridgePrintRelevantObjects'' @ 15036a8e0

void __cdecl _dynamic_atexit_destructor_for__ObjectBridgePrintRelevantObjects__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ObjectBridgePrintRelevantObjects);
  return;
}

// `dynamic_atexit_destructor_for_'ObjectBridgePrintRelevantObjectsToConnection'' @ 15036a900

void __cdecl _dynamic_atexit_destructor_for__ObjectBridgePrintRelevantObjectsToConnection__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&ObjectBridgePrintRelevantObjectsToConnection);
  return;
}

// `dynamic_atexit_destructor_for_'ObjectBridgePrintReplicatedObjects'' @ 15036a920

void __cdecl _dynamic_atexit_destructor_for__ObjectBridgePrintReplicatedObjects__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ObjectBridgePrintReplicatedObjects)
  ;
  return;
}

