// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 61

// FPCGGraphExecutor @ 149ca2e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGraphExecutor * __thiscall
FPCGGraphExecutor::FPCGGraphExecutor(FPCGGraphExecutor *this,UWorld *param_1)

{
  FPCGGraphCache *this_00;
  TSharedPtr<FPCGGraphExecutor::FGameThreadHandler,1> *pTVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGameThreadHandler *local_38;
  FSharedReferencer<1> FStack_30;
  TSharedRef<FPCGGraphExecutor::FGameThreadHandler,1> local_28;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7FPCGGraphExecutor__6B_;
  this_00 = &this->GraphCache;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PerExecutionCache).Lock.bFlag = (atomic<bool>)0x0;
  *(undefined8 *)&(this->PerExecutionCache).Entries = 0;
  *(undefined8 *)&(this->PerExecutionCache).Entries.field_0x8 = 0;
  *(undefined8 *)&(this->PerExecutionCache).Entries.field_0x20 = 0;
  *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x28 = 0;
  *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x2c = 0x80;
  *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x34 = 0;
  *(undefined8 *)&(this->PerExecutionCache).Entries.field_0x40 = 0;
  *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x48 = 0;
  (this->GraphCompiler).Cache.GraphToTaskMapLock.Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&(this->GraphCompiler).Cache.GraphToTaskMap = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.GraphToTaskMap.field_0x8 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.GraphToTaskMap.field_0x20 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.GraphToTaskMap.field_0x28 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.GraphToTaskMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphCompiler).Cache.GraphToTaskMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphCompiler).Cache.GraphToTaskMap.field_0x34 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.GraphToTaskMap.field_0x40 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.GraphToTaskMap.field_0x48 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.GraphToStackContextMap = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.GraphToStackContextMap.field_0x8 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.GraphToStackContextMap.field_0x20 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.GraphToStackContextMap.field_0x28 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.GraphToStackContextMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphCompiler).Cache.GraphToStackContextMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphCompiler).Cache.GraphToStackContextMap.field_0x34 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.GraphToStackContextMap.field_0x40 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.GraphToStackContextMap.field_0x48 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToTaskMap = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToTaskMap.field_0x8 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToTaskMap.field_0x20 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToTaskMap.field_0x28 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToTaskMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToTaskMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToTaskMap.field_0x34 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToTaskMap.field_0x40 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToTaskMap.field_0x48 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToStackContextMap = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToStackContextMap.field_0x8 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToStackContextMap.field_0x20 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToStackContextMap.field_0x28 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToStackContextMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToStackContextMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToStackContextMap.field_0x34 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToStackContextMap.field_0x40 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToStackContextMap.field_0x48 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToComputeGraphMap = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToComputeGraphMap.field_0x8 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToComputeGraphMap.field_0x20 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToComputeGraphMap.field_0x28 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToComputeGraphMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToComputeGraphMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToComputeGraphMap.field_0x34 = 0;
  *(undefined8 *)&(this->GraphCompiler).Cache.TopGraphToComputeGraphMap.field_0x40 = 0;
  *(undefined4 *)&(this->GraphCompiler).Cache.TopGraphToComputeGraphMap.field_0x48 = 0;
  (this->GraphCompiler).bIsCooking = false;
  (this->GraphCompiler).SharedTrivialElement.Object = (IPCGElement *)0x0;
  (this->GraphCompiler).SharedTrivialElement.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GraphCompiler).SharedTrivialElementLock.Mutex.Mutex.Ptr = (void *)0x0;
  (this->GraphCompiler).SharedTrivialPostGraphElement.Object = (IPCGElement *)0x0;
  (this->GraphCompiler).SharedTrivialPostGraphElement.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GraphCompiler).SharedTrivialPostGraphElementLock.Mutex.Mutex.Ptr = (void *)0x0;
  (this->GraphCompiler).SharedGatherElement.Object = (IPCGElement *)0x0;
  (this->GraphCompiler).SharedGatherElement.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GraphCompiler).SharedGatherElementLock.Mutex.Mutex.Ptr = (void *)0x0;
  if ((param_1 == (UWorld *)0x0) || (bVar2 = UWorld::IsGameWorld(param_1), !bVar2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  this_00->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&(this->GraphCache)._padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)this_00);
  *(undefined8 *)&(this->GraphCache).CacheData.LookupSet.Elements = 0;
  *(undefined8 *)&(this->GraphCache).CacheData.LookupSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GraphCache).CacheData.LookupSet.Elements.field_0x20 = 0;
  this_00->_padding_ = (longlong)&FPCGGraphCache::_vftable__for__FGCObject__;
  (this->GraphCache)._padding_ = (longlong)&FPCGGraphCache::_vftable__for__IPCGGraphCache__;
  *(undefined4 *)&(this->GraphCache).CacheData.LookupSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GraphCache).CacheData.LookupSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphCache).CacheData.LookupSet.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphCache).CacheData.LookupSet.Elements.field_0x34 = 0;
  (this->GraphCache).CacheData.LookupSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GraphCache).CacheData.LookupSet.HashSize = 0;
  (this->GraphCache).CacheData.LeastRecent = (FCacheEntry *)0x0;
  (this->GraphCache).CacheData.MostRecent = (FCacheEntry *)0x0;
  (this->GraphCache).CacheData.MaxNumElements = 0;
  *(undefined8 *)&(this->GraphCache).ElementToCacheEntryKeys = 0;
  *(undefined8 *)&(this->GraphCache).ElementToCacheEntryKeys.field_0x8 = 0;
  *(undefined8 *)&(this->GraphCache).ElementToCacheEntryKeys.field_0x20 = 0;
  *(undefined4 *)&(this->GraphCache).ElementToCacheEntryKeys.field_0x28 = 0;
  *(undefined4 *)&(this->GraphCache).ElementToCacheEntryKeys.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphCache).ElementToCacheEntryKeys.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphCache).ElementToCacheEntryKeys.field_0x34 = 0;
  *(undefined8 *)&(this->GraphCache).ElementToCacheEntryKeys.field_0x40 = 0;
  *(undefined4 *)&(this->GraphCache).ElementToCacheEntryKeys.field_0x48 = 0;
  *(undefined8 *)&(this->GraphCache).MemoryRecords = 0;
  *(undefined8 *)&(this->GraphCache).MemoryRecords.field_0x8 = 0;
  *(undefined8 *)&(this->GraphCache).MemoryRecords.field_0x20 = 0;
  *(undefined4 *)&(this->GraphCache).MemoryRecords.field_0x28 = 0;
  *(undefined4 *)&(this->GraphCache).MemoryRecords.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphCache).MemoryRecords.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphCache).MemoryRecords.field_0x34 = 0;
  *(undefined8 *)&(this->GraphCache).MemoryRecords.field_0x40 = 0;
  *(undefined4 *)&(this->GraphCache).MemoryRecords.field_0x48 = 0;
  (this->GraphCache).TotalMemoryUsed = 0;
  (this->GraphCache).bIsGameWorld = bVar2;
  (this->GraphCache).CacheLock.bFlag = (atomic<bool>)0x0;
  bVar2 = FPCGGraphCache::IsEnabled(this_00);
  TLruCache<FPCGCacheEntryKey,FPCGDataCollection,DefaultKeyComparer<FPCGCacheEntryKey>_>::Empty
            (&(this->GraphCache).CacheData,(uint)bVar2 << 0x10);
  (this->FetchInputElementPtr).Object = (IPCGElement *)0x0;
  (this->FetchInputElementPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreGraphElementPtr).Object = (IPCGElement *)0x0;
  (this->PreGraphElementPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ScheduleLock).bFlag = (atomic<bool>)0x0;
  (this->ScheduledTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduledTasks).ArrayNum = 0;
  (this->ScheduledTasks).ArrayMax = 0;
  this->SchedulingDisabled = (atomic<bool>)0x0;
  this->TasksLock = (atomic<bool>)0x0;
  *(undefined8 *)&this->Tasks = 0;
  *(undefined8 *)&(this->Tasks).field_0x8 = 0;
  *(undefined8 *)&(this->Tasks).field_0x20 = 0;
  *(undefined4 *)&(this->Tasks).field_0x28 = 0;
  *(undefined4 *)&(this->Tasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->Tasks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Tasks).field_0x34 = 0;
  *(undefined8 *)&(this->Tasks).field_0x40 = 0;
  *(undefined4 *)&(this->Tasks).field_0x48 = 0;
  *(undefined8 *)&this->TaskSuccessors = 0;
  *(undefined8 *)&(this->TaskSuccessors).field_0x8 = 0;
  *(undefined8 *)&(this->TaskSuccessors).field_0x20 = 0;
  *(undefined4 *)&(this->TaskSuccessors).field_0x28 = 0;
  *(undefined4 *)&(this->TaskSuccessors).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaskSuccessors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaskSuccessors).field_0x34 = 0;
  *(undefined8 *)&(this->TaskSuccessors).field_0x40 = 0;
  *(undefined4 *)&(this->TaskSuccessors).field_0x48 = 0;
  (this->LiveTasksLock).bFlag = (atomic<bool>)0x0;
  (this->ReadyTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadyTasks).ArrayNum = 0;
  (this->ReadyTasks).ArrayMax = 0;
  (this->ActiveTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTasks).ArrayNum = 0;
  (this->ActiveTasks).ArrayMax = 0;
  (this->ActiveTasksGameThreadOnly).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTasksGameThreadOnly).ArrayNum = 0;
  (this->ActiveTasksGameThreadOnly).ArrayMax = 0;
  (this->PausedTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PausedTasks).ArrayNum = 0;
  (this->PausedTasks).ArrayMax = 0;
  *(undefined8 *)&(this->CollectGCReferenceTasks).Elements = 0;
  *(undefined8 *)&(this->CollectGCReferenceTasks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CollectGCReferenceTasks).Elements.field_0x20 = 0;
  this->bNeedToCheckPausedTasks = false;
  this->CollectGCReferenceTasksLock = (atomic<bool>)0x0;
  *(undefined4 *)&(this->CollectGCReferenceTasks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CollectGCReferenceTasks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CollectGCReferenceTasks).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollectGCReferenceTasks).Elements.field_0x34 = 0;
  (this->CollectGCReferenceTasks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CollectGCReferenceTasks).HashSize = 0;
  (this->PausedTaskSuccessorsLock).bFlag = (atomic<bool>)0x0;
  *(undefined8 *)&this->PausedTaskSuccessors = 0;
  *(undefined8 *)&(this->PausedTaskSuccessors).field_0x8 = 0;
  *(undefined8 *)&(this->PausedTaskSuccessors).field_0x20 = 0;
  *(undefined4 *)&(this->PausedTaskSuccessors).field_0x28 = 0;
  *(undefined4 *)&(this->PausedTaskSuccessors).field_0x2c = 0x80;
  *(undefined4 *)&(this->PausedTaskSuccessors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PausedTaskSuccessors).field_0x34 = 0;
  *(undefined8 *)&(this->PausedTaskSuccessors).field_0x40 = 0;
  *(undefined4 *)&(this->PausedTaskSuccessors).field_0x48 = 0;
  (this->CachingResultsLock).bFlag = (atomic<bool>)0x0;
  *(undefined8 *)&this->CachingResultsForGC = 0;
  *(undefined8 *)&(this->CachingResultsForGC).field_0x8 = 0;
  *(undefined8 *)&(this->CachingResultsForGC).field_0x20 = 0;
  *(undefined4 *)&(this->CachingResultsForGC).field_0x28 = 0;
  *(undefined4 *)&(this->CachingResultsForGC).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachingResultsForGC).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachingResultsForGC).field_0x34 = 0;
  *(undefined8 *)&(this->CachingResultsForGC).field_0x40 = 0;
  *(undefined4 *)&(this->CachingResultsForGC).field_0x48 = 0;
  (this->ReleasedContextLock).bFlag = (atomic<bool>)0x0;
  *(undefined8 *)&(this->ReleasedContextsForGC).Elements = 0;
  *(undefined8 *)&(this->ReleasedContextsForGC).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReleasedContextsForGC).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReleasedContextsForGC).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReleasedContextsForGC).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReleasedContextsForGC).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReleasedContextsForGC).Elements.field_0x34 = 0;
  (this->ReleasedContextsForGC).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReleasedContextsForGC).HashSize = 0;
  (this->TaskOutputsLock).bFlag = (atomic<bool>)0x0;
  *(undefined8 *)&this->TaskOutputs = 0;
  *(undefined8 *)&(this->TaskOutputs).field_0x8 = 0;
  *(undefined8 *)&(this->TaskOutputs).field_0x20 = 0;
  *(undefined4 *)&(this->TaskOutputs).field_0x28 = 0;
  *(undefined4 *)&(this->TaskOutputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaskOutputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaskOutputs).field_0x34 = 0;
  *(undefined8 *)&(this->TaskOutputs).field_0x40 = 0;
  *(undefined4 *)&(this->TaskOutputs).field_0x48 = 0;
  this->NextTaskId = 0;
  this->bNeedToExecuteTasksEnded = (atomic<bool>)0x0;
  this->NewReadyTaskCount = (atomic<int>)0x0;
  (this->World).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar1 = &this->GameThreadHandler;
  this->LastSchedulingErrorCheck = 0.0;
  pTVar1->Object = (FGameThreadHandler *)0x0;
  (this->GameThreadHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = ::operator_new(0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGameThreadHandler_FPCGGraphExecutor___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = (longlong)this;
    pTVar4 = pTVar3;
  }
  TSharedRef<FPCGGraphExecutor::FGameThreadHandler,1>::
  TSharedRef<FPCGGraphExecutor::FGameThreadHandler,1>
            (&local_28,(FGameThreadHandler *)(pTVar4 + 1),pTVar4);
  local_38 = local_28.Object;
  FStack_30.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<FPCGGraphExecutor::FGameThreadHandler,1> *)&local_38) {
    pTVar1->Object = local_28.Object;
    local_38 = (FGameThreadHandler *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GameThreadHandler).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return this;
}

// FPCGGraphExecutor @ 149ca34e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGraphExecutor * __thiscall FPCGGraphExecutor::FPCGGraphExecutor(FPCGGraphExecutor *this)

{
  FPCGGraphExecutor(this,(UWorld *)0x0);
  this->_padding_ = (longlong)&___7FPCGGraphExecutor__6B_;
  return this;
}

// ~FPCGGraphExecutor @ 149ca6340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::~FPCGGraphExecutor(FPCGGraphExecutor *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7FPCGGraphExecutor__6B_;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->GameThreadHandler != (TSharedPtr<FPCGGraphExecutor::FGameThreadHandler,1> *)&local_18)
  {
    (this->GameThreadHandler).Object = (FGameThreadHandler *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GameThreadHandler).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  FPCGGraphCache::ClearCache(&this->GraphCache);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameThreadHandler).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->TaskOutputs).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TaskOutputs).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TaskOutputs);
  (this->ReleasedContextsForGC).HashSize = 0;
  FVar4 = (this->ReleasedContextsForGC).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FPCGContext_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPCGContext_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReleasedContextsForGC).Elements);
  *(undefined4 *)&(this->CachingResultsForGC).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CachingResultsForGC).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachingResultsForGC);
  *(undefined4 *)&(this->PausedTaskSuccessors).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PausedTaskSuccessors).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PausedTaskSuccessors);
  (this->CollectGCReferenceTasks).HashSize = 0;
  FVar4 = (this->CollectGCReferenceTasks).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FPCGGraphActiveTask,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FPCGGraphActiveTask,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CollectGCReferenceTasks).Elements);
  DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>
            ((TSharedPtr<FPCGGraphActiveTask,1> *)(this->PausedTasks).AllocatorInstance.Data,
             (this->PausedTasks).ArrayNum);
  pFVar5 = (this->PausedTasks).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>
            ((TSharedPtr<FPCGGraphActiveTask,1> *)
             (this->ActiveTasksGameThreadOnly).AllocatorInstance.Data,
             (this->ActiveTasksGameThreadOnly).ArrayNum);
  pFVar5 = (this->ActiveTasksGameThreadOnly).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>
            ((TSharedPtr<FPCGGraphActiveTask,1> *)(this->ActiveTasks).AllocatorInstance.Data,
             (this->ActiveTasks).ArrayNum);
  pFVar5 = (this->ActiveTasks).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FPCGGraphTask,int>
            ((FPCGGraphTask *)(this->ReadyTasks).AllocatorInstance.Data,(this->ReadyTasks).ArrayNum)
  ;
  pFVar5 = (this->ReadyTasks).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->TaskSuccessors).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TaskSuccessors).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TaskSuccessors);
  *(undefined4 *)&(this->Tasks).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Tasks).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGGraphTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGGraphTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGGraphTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Tasks);
  DestructItems<FPCGGraphScheduleTask,int>
            ((FPCGGraphScheduleTask *)(this->ScheduledTasks).AllocatorInstance.Data,
             (this->ScheduledTasks).ArrayNum);
  pFVar5 = (this->ScheduledTasks).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreGraphElementPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FetchInputElementPtr).SharedReferenceCount.ReferenceController);
  FPCGGraphCache::~FPCGGraphCache(&this->GraphCache);
  FPCGGraphCompiler::~FPCGGraphCompiler(&this->GraphCompiler);
  *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerExecutionCache).Entries.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PerExecutionCache).Entries);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 149ca7090

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
`FPCGGraphExecutor::BuildTaskInput'::__l2::<lambda_1>::operator()
          (void *this,TOptional<FPCGPinProperties> *param_1)

{
  UPCGNode *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UPCGSettings *pUVar6;
  FString *pFVar7;
  FText *this_01;
  longlong *plVar8;
  FString local_58;
  void *local_48 [2];
  FText local_38;
  FString local_28;
  
  bVar3 = false;
  if (((*(FPCGContext **)(*(longlong *)this + 0xa0) == (FPCGContext *)0x0) ||
      (pUVar6 = FPCGContext::GetOriginalSettings<UPCGSettings>
                          (*(FPCGContext **)(*(longlong *)this + 0xa0)),
      pUVar6 == (UPCGSettings *)0x0)) ||
     (pUVar6 = FPCGContext::GetOriginalSettings<UPCGSettings>
                         (*(FPCGContext **)(*(longlong *)this + 0xa0)),
     (char)pUVar6->_padding_ != '\0')) {
    if (param_1->bIsSet != false) {
      pFVar7 = ::FName::ToString((FName *)param_1,&local_28);
      if ((pFVar7->Data).ArrayNum == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    this_00 = *(UPCGNode **)(*(longlong *)this + 0x98);
    if (this_00 != (UPCGNode *)0x0) {
      this_01 = UPCGNode::GetNodeTitle(this_00,&local_38,ListView);
      FText::ToString(this_01);
    }
    bVar5 = false;
    lVar1 = *(longlong *)this;
    if (((*(longlong *)(lVar1 + 0x90) != 0) &&
        (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x88)), bVar4)) &&
       (*(longlong *)(lVar1 + 0x90) != 0)) {
      lVar1 = *(longlong *)this;
      if (((*(longlong *)(lVar1 + 0x90) == 0) ||
          (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x88)), !bVar5)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                             ,0x8d,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar8 = (longlong *)(**(code **)(**(longlong **)(lVar1 + 0x90) + 0x18))();
      bVar5 = true;
      (**(code **)(*plVar8 + 0x18))(plVar8,local_48);
    }
    ::FString::PrintfImpl
              (&local_58,
               L"[%s] %s - BuildTaskInput - too many data items arriving on single data pin \'%s\', only first data item will be used"
              );
    if ((bVar5) && (local_48[0] != (void *)0x0)) {
      FMemory::Free(local_48[0]);
    }
    if ((this_00 != (UPCGNode *)0x0) && (local_38.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 149ca81a0

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
`FPCGGraphExecutor::AddReferencedObjects'::__l8::<lambda_2>::operator()
          (void *this,TSharedPtr<FPCGGraphActiveTask,1> *param_1)

{
  FPCGGraphActiveTask *pFVar1;
  longlong *plVar2;
  FPCGContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if (param_1->Object == (FPCGGraphActiveTask *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = param_1->Object;
  if (pFVar1->bIsExecutingTask == false) {
    if (pFVar1 == (FPCGGraphActiveTask *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((param_1->Object->Context).Ptr != (FPCGContext *)0x0) {
      if (param_1->Object == (FPCGGraphActiveTask *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FPCGContext::AddStructReferencedObjects
                ((param_1->Object->Context).Ptr,*(FReferenceCollector **)this);
    }
  }
  else {
    plVar2 = *(longlong **)this;
    if (pFVar1 == (FPCGGraphActiveTask *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*plVar2 + 0x90))
              (plVar2,(param_1->Object->ExecutingReferences).AllocatorInstance.Data,
               (param_1->Object->ExecutingReferences).ArrayNum,0,0);
    if (param_1->Object == (FPCGGraphActiveTask *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((param_1->Object->Context).Ptr != (FPCGContext *)0x0) {
      if (param_1->Object == (FPCGGraphActiveTask *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (param_1->Object->Context).Ptr;
                    /* WARNING: Could not recover jumptable at 0x000149ca82c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3,*(undefined8 *)this);
      return;
    }
  }
  return;
}

// operator() @ 149ca8350

void __thiscall
`FPCGGraphExecutor::Cancel'::__l18::<lambda_2>::operator()
          (void *this,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  IPCGGraphExecutionSource *local_res18;
  undefined8 local_res20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  do {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FPCGGraphActiveTask,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) {
      return;
    }
    if (*(longlong *)pFVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(longlong *)(*(longlong *)pFVar7 + 0x38) != 0) {
      puVar2 = *(undefined8 **)this;
      if (*(longlong *)pFVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar3 = *(longlong *)(*(longlong *)pFVar7 + 0x38);
      local_48 = *(undefined4 *)(lVar3 + 0x68);
      uStack_44 = *(undefined4 *)(lVar3 + 0x6c);
      uStack_40 = *(undefined4 *)(lVar3 + 0x70);
      uStack_3c = *(undefined4 *)(lVar3 + 0x74);
      cVar6 = (*(code *)*puVar2)(puVar2[1],&local_48);
      if (cVar6 != '\0') {
        this_00 = *(TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                    **)((longlong)this + 8);
        if (*(longlong *)pFVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar3 = *(longlong *)(*(longlong *)pFVar7 + 0x38);
        if (*(longlong *)(lVar3 + 0x70) == 0) {
LAB_149ca8479:
          local_res20 = 0;
        }
        else {
          bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar3 + 0x68));
          if (!bVar5) goto LAB_149ca8479;
          local_res20 = *(undefined8 *)(lVar3 + 0x70);
        }
        TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
        ::Emplace<IPCGGraphExecutionSource_*>(this_00,&local_res18,(bool *)&local_res20);
      }
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// operator() @ 149ca8570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall `FPCGGraphExecutor::ExecuteScheduling'::__l110::<lambda_2>::operator()(void *this)

{
  IPCGElement *this_00;
  FPCGGraphExecutor *this_01;
  code *pcVar1;
  double dVar2;
  double dVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  FLLMScope local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_78;
  FMemScope local_70;
  TSharedPtr<FPCGGraphActiveTask,1> local_68 [4];
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1745,"FPCGGraphExecutor::ExecuteAsyncTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x6d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1745);
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_70,&local_res10,true);
  pTVar4 = FPCGAsync::ConsoleVar::CVarAsyncOutOfTickBudgetInMilliseconds.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 4;
  }
  fVar10 = *(float *)((longlong)pTVar4->ShadowedValue + lVar8);
  if (fVar10 <= __real_3f800000) {
    fVar10 = __real_3f800000;
  }
  QueryPerformanceCounter(&local_res18);
  dVar3 = __real_4170000000000000;
  fVar10 = fVar10 * __real_3a83126f;
  dVar2 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if ((*(longlong *)((longlong)this + 8) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  *(double *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x38) + 0x88) =
       dVar2 + (double)fVar10;
  if ((*(longlong *)((longlong)this + 8) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x48) == '\0') {
    if ((*(longlong *)((longlong)this + 8) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    lVar8 = *(longlong *)((longlong)this + 8);
    if ((*(longlong *)(lVar8 + 0x28) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    this_00 = *(IPCGElement **)(lVar8 + 0x28);
    if ((*(longlong *)((longlong)this + 8) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    bVar5 = IPCGElement::Execute
                      (this_00,*(FPCGContext **)(*(longlong *)((longlong)this + 8) + 0x38));
    if (!bVar5) {
      bVar5 = false;
      goto LAB_149ca87ae;
    }
  }
  bVar5 = true;
LAB_149ca87ae:
  if ((*(longlong *)((longlong)this + 8) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  local_68[0].Object = *(FPCGGraphActiveTask **)((longlong)this + 8);
  this_01 = *(FPCGGraphExecutor **)this;
  bVar7 = (((local_68[0].Object)->Context).Ptr)->bIsPaused;
  local_68[0].SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (local_68[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPCGGraphExecutor::PostTaskExecute(this_01,local_68,bVar5);
  if ((bVar5 != false) || (bVar7 != false)) {
    QueryPerformanceCounter(&local_res20);
    dVar2 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            *(double *)((longlong)this + 0x18) + dVar3;
    if (bVar7 != false) {
      FPCGGraphExecutor::ProcessScheduledTasks(*(FPCGGraphExecutor **)this,dVar2);
    }
    QueryPerformanceCounter(&local_78);
    if ((double)local_78.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3 < dVar2) {
      FPCGGraphExecutor::ExecuteScheduling
                (*(FPCGGraphExecutor **)this,dVar2,(TSharedPtr<FPCGGraphActiveTask,1> *)0x0,bVar7);
    }
  }
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// operator() @ 149ca88e0

void __thiscall
`FPCGGraphExecutor::Cancel'::__l48::<lambda_5>::operator()
          (void *this,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ForAnyElementType *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  longlong local_38;
  
  uVar15 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar15) {
    lVar14 = (longlong)(int)uVar15 << 4;
    do {
      uVar11 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar14 + 8);
      lVar4 = *(longlong *)(pFVar2 + lVar14);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar4 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *(longlong *)(lVar4 + 0x38);
      if (lVar5 != 0) {
        plVar6 = *(longlong **)this;
        if ((*(longlong *)(lVar5 + 0x70) == 0) ||
           (bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar5 + 0x68)), !bVar9)) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(ulonglong *)(lVar5 + 0x70);
        }
        uVar11 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
          plVar12 = plVar6 + 7;
          if ((longlong *)plVar6[8] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar6[8];
          }
          iVar10 = *(int *)((longlong)plVar12 +
                           (ulonglong)((int)plVar6[9] - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(ulonglong *)(*plVar6 + (longlong)iVar10 * 0x10) == uVar13) {
                local_38 = *(longlong *)(lVar4 + 0x60);
                if (local_38 != 0) {
                  LOCK();
                  *(int *)(local_38 + 0x30) = *(int *)(local_38 + 0x30) + 1;
                  UNLOCK();
                }
                LOCK();
                *(undefined1 *)(lVar4 + 0x48) = 1;
                UNLOCK();
                pFVar7 = *(ForAnyElementType **)((longlong)this + 8);
                if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_48 = lVar4;
                local_40 = pTVar3;
                if (((pFVar7->Data <= (FScriptContainerElement *)&local_48) &&
                    ((FScriptContainerElement *)&local_48 <
                     pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 0x18)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar10 = *(int *)&pFVar7[1].Data;
                piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
                if (iVar10 == *piVar1) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,pFVar7,piVar1);
                }
                *(int *)&pFVar7[1].Data = iVar10 + 1;
                pFVar2 = pFVar7->Data + (longlong)iVar10 * 0x18;
                *(longlong *)pFVar2 = local_48;
                *(TReferenceControllerBase<1> **)(pFVar2 + 8) = local_40;
                local_40 = (TReferenceControllerBase<1> *)0x0;
                local_48 = 0;
                *(longlong *)(pFVar2 + 0x10) = 0;
                *(longlong *)(pFVar2 + 0x10) = local_38;
                local_38 = 0;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                if ((*(uint *)(lVar4 + 0x6c) != uVar15) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ActiveTask->TaskIndex == ActiveTaskIndex",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                       ,0x222,L""), bVar9)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(param_1,uVar15);
                *(undefined4 *)(lVar4 + 0x6c) = 0xffffffff;
                break;
              }
              iVar10 = *(int *)(*plVar6 + 8 + (longlong)iVar10 * 0x10);
            } while (iVar10 != -1);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      lVar14 = lVar14 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  return;
}

// AddReferencedObjects @ 149cab450

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
FPCGGraphExecutor::AddReferencedObjects(FPCGGraphExecutor *this,FReferenceCollector *param_1)

{
  FSpinLock *pFVar1;
  ulonglong uVar2;
  atomic<bool> aVar3;
  uint uVar4;
  FPCGContext *this_00;
  code *pcVar5;
  <lambda_3> <Var6;
  <lambda_3> <Var7;
  TMap<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar20;
  bool bVar21;
  undefined1 local_res8 [8];
  <lambda_3> local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8;
  undefined1 local_f7 [3];
  int local_f4;
  int local_f0;
  FReferenceCollector *local_e8;
  FReferenceCollector *local_e0;
  FReferenceCollector *local_d8;
  TMap<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  bVar21 = -1 < CpuChannel->Enabled;
  local_res10.Collector = param_1;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2616,"FPCGGraphExecutor::AddReferencedObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0xa38);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2616);
  }
  pFVar1 = &this->TaskOutputsLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  aVar3 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar3 != (atomic<bool>)0x0) {
    aVar3 = pFVar1->bFlag;
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
    }
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  iStack_c8 = 0;
  local_c0 = &(this->TaskOutputs).field_0x10;
  iVar12 = *(int *)&(this->TaskOutputs).field_0x28;
  local_d0 = &this->TaskOutputs;
  uStack_c4 = 1;
  local_b0 = 0;
  iVar11 = 0;
  iStack_b4 = 0;
  if (iVar12 != 0) {
    puVar16 = *(uint **)&(this->TaskOutputs).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_c0;
    }
    uVar18 = *puVar16;
    while (uVar18 == 0) {
      lVar10 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) {
        iVar11 = *(int *)&(this->TaskOutputs).field_0x28;
        iStack_b4 = iVar12;
        goto LAB_149cab5a6;
      }
      uVar18 = puVar16[lVar10 + 1];
    }
    iVar11 = *(int *)&(this->TaskOutputs).field_0x28;
    uStack_c4 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_f4 = (int)lVar10;
    iStack_b4 = local_b0 + -1 + local_f4;
    if (iVar11 < iStack_b4) {
      iStack_b4 = iVar12;
    }
  }
LAB_149cab5a6:
  uVar18 = *(uint *)&(this->TaskOutputs).field_0x28;
  uStack_ac = local_54;
  iStack_a8 = *(int *)&(this->TaskOutputs).field_0x8 - *(int *)&(this->TaskOutputs).field_0x34;
  uVar17 = uVar18 & 0xffffffe0;
  uStack_b8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar18 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_a0 = local_d0;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
  if ((((int)uVar18 < 0) || (iVar11 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  <Var6.Collector = local_res10.Collector;
  uVar4 = *(uint *)&(this->TaskOutputs).field_0x28;
  if (uVar18 != uVar4) {
    puVar15 = *(undefined1 **)&(this->TaskOutputs).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->TaskOutputs).field_0x10;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_149cab6c3;
      uVar18 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_f0 = (int)lVar10;
    uVar18 = local_f0 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_149cab6c3:
  while( true ) {
    pTVar8 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar18) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->TaskOutputs).field_0x10)
        ) && (pTVar8 == &this->TaskOutputs)) break;
    FPCGDataCollection::AddReferences
              ((FPCGDataCollection *)
               ((longlong)TStack_98.CurrentBitIndex * 0x50 + *(longlong *)pTVar8 + 8),
               <Var6.Collector);
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  if (&this->TaskOutputsLock != (FSpinLock *)0x0) {
    (this->TaskOutputsLock).bFlag = (atomic<bool>)0x0;
  }
  pFVar1 = &this->LiveTasksLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  <Var6.Collector = local_res10.Collector;
  LOCK();
  aVar3 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar3 != (atomic<bool>)0x0) {
    aVar3 = pFVar1->bFlag;
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
    }
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  iVar12 = (this->ReadyTasks).ArrayNum;
  pFVar13 = (this->ReadyTasks).AllocatorInstance.Data;
  pFVar19 = pFVar13 + (longlong)iVar12 * 0x148;
  while( true ) {
    if ((this->ReadyTasks).ArrayNum != iVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    <Var7.Collector = local_res10.Collector;
    if (pFVar13 == pFVar19) break;
    this_00 = *(FPCGContext **)(pFVar13 + 0xa0);
    if (pFVar13[0x140] == (FScriptContainerElement)0x0) {
      if ((this_00 != (FPCGContext *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Task.Context",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                             ,0xa49,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FPCGDataCollection::AddReferences((FPCGDataCollection *)(pFVar13 + 0xc0),<Var6.Collector);
      pFVar13 = pFVar13 + 0x148;
    }
    else {
      if (this_00 != (FPCGContext *)0x0) {
        FPCGContext::AddStructReferencedObjects(this_00,<Var6.Collector);
      }
      pFVar13 = pFVar13 + 0x148;
    }
  }
  iVar12 = (this->ActiveTasks).ArrayNum;
  pTVar14 = (TSharedPtr<FPCGGraphActiveTask,1> *)(this->ActiveTasks).AllocatorInstance.Data;
  pTVar20 = pTVar14 + iVar12;
  local_e8 = local_res10.Collector;
  while( true ) {
    if ((this->ActiveTasks).ArrayNum != iVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FPCGGraphActiveTask,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pTVar14 == pTVar20) break;
    `FPCGGraphExecutor::AddReferencedObjects'::__l8::<lambda_2>::operator()(&local_e8,pTVar14);
    pTVar14 = pTVar14 + 1;
  }
  iVar12 = (this->ActiveTasksGameThreadOnly).ArrayNum;
  pTVar14 = (TSharedPtr<FPCGGraphActiveTask,1> *)
            (this->ActiveTasksGameThreadOnly).AllocatorInstance.Data;
  pTVar20 = pTVar14 + iVar12;
  local_e0 = <Var7.Collector;
  while( true ) {
    if ((this->ActiveTasksGameThreadOnly).ArrayNum != iVar12) {
      local_f8 = 0;
      `TCheckedPointerIterator<TSharedPtr<FPCGGraphActiveTask,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_f8);
    }
    if (pTVar14 == pTVar20) break;
    `FPCGGraphExecutor::AddReferencedObjects'::__l8::<lambda_2>::operator()(&local_e0,pTVar14);
    pTVar14 = pTVar14 + 1;
  }
  iVar12 = (this->PausedTasks).ArrayNum;
  pTVar14 = (TSharedPtr<FPCGGraphActiveTask,1> *)(this->PausedTasks).AllocatorInstance.Data;
  pTVar20 = pTVar14 + iVar12;
  local_d8 = <Var7.Collector;
  while( true ) {
    if ((this->PausedTasks).ArrayNum != iVar12) {
      local_f7[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FPCGGraphActiveTask,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_f7);
    }
    if (pTVar14 == pTVar20) break;
    `FPCGGraphExecutor::AddReferencedObjects'::__l8::<lambda_2>::operator()(&local_d8,pTVar14);
    pTVar14 = pTVar14 + 1;
  }
  if (&this->LiveTasksLock != (FSpinLock *)0x0) {
    (this->LiveTasksLock).bFlag = (atomic<bool>)0x0;
  }
  pFVar1 = &this->CachingResultsLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  aVar3 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar3 != (atomic<bool>)0x0) {
    aVar3 = pFVar1->bFlag;
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
    }
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  Algo::
  ForEach<TMap<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,0>_>_&,_FPCGGraphExecutor::AddReferencedObjects_::__l9::<lambda_3>_>
            (&this->CachingResultsForGC,<Var7);
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  pFVar1 = &this->CollectGCReferenceTasksLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  aVar3 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar3 != (atomic<bool>)0x0) {
    aVar3 = pFVar1->bFlag;
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
    }
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  Algo::
  ForEach<TSet<TSharedPtr<FPCGGraphActiveTask,1>,DefaultKeyFuncs<TSharedPtr<FPCGGraphActiveTask,1>,0>,FDefaultSetAllocator>_&,_FPCGGraphExecutor::AddReferencedObjects_::__l10::<lambda_4>_>
            (&this->CollectGCReferenceTasks,(<lambda_4>)<Var7.Collector);
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  FPCGPerExecutionCache::AddStructReferencedObjects(&this->PerExecutionCache,<Var7.Collector);
  pFVar1 = &this->ReleasedContextLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  aVar3 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar3 != (atomic<bool>)0x0) {
    aVar3 = pFVar1->bFlag;
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
    }
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  Algo::
  ForEach<TSet<FPCGContext_*,DefaultKeyFuncs<FPCGContext_*,0>,FDefaultSetAllocator>_&,_FPCGGraphExecutor::AddReferencedObjects_::__l11::<lambda_5>_>
            (&this->ReleasedContextsForGC,(<lambda_5>)<Var7.Collector);
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  FPCGGraphCompiler::AddReferencedObjects(&this->GraphCompiler,<Var7.Collector);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddReleasedContextForGC @ 149cabb00

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
FPCGGraphExecutor::AddReleasedContextForGC(FPCGGraphExecutor *this,FPCGContext *param_1)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  code *pcVar3;
  bool bVar4;
  FPCGContext *local_res8;
  FPCGContext *local_res10;
  
  pFVar1 = &this->ReleasedContextLock;
  local_res10 = param_1;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  if (aVar2 == (atomic<bool>)0x0) {
    TSet<FPCGContext_*,DefaultKeyFuncs<FPCGContext_*,0>,FDefaultSetAllocator>::
    Emplace<FPCGContext_*_const_&>(&this->ReleasedContextsForGC,&local_res8,(bool *)&local_res10);
    if (pFVar1 != (FSpinLock *)0x0) {
      pFVar1->bFlag = (atomic<bool>)0x0;
    }
    return;
  }
  do {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  } while (aVar2 != (atomic<bool>)0x0);
  TSet<FPCGContext_*,DefaultKeyFuncs<FPCGContext_*,0>,FDefaultSetAllocator>::
  Emplace<FPCGContext_*_const_&>(&this->ReleasedContextsForGC,&local_res8,(bool *)&local_res10);
  pFVar1->bFlag = (atomic<bool>)0x0;
  return;
}

// BuildTaskInput @ 149cae040

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGGraphExecutor::BuildTaskInput
          (FPCGGraphExecutor *this,FPCGGraphTask *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FSpinLock *pFVar1;
  FPCGDataCollection *this_00;
  atomic<bool> aVar2;
  ushort uVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ulonglong uVar7;
  FPCGGraphTask *pFVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  ForElementType<FPCGTaggedData> FVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ulonglong *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  ForElementType<FPCGCrc> FVar23;
  bool bVar24;
  undefined1 auStackY_918 [32];
  FScriptContainerElement local_8e8;
  undefined1 local_8e6 [2];
  uint local_8e4;
  FPCGGraphTask *local_8e0;
  FPCGGraphExecutor *local_8d8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_8d0;
  uint local_8c8;
  FPCGGraphTask *local_8c0;
  TArrayView<FPCGCrc_const_,int> local_8b8;
  TArrayView<FPCGTaggedData_const_,int> local_8a8;
  TArrayView<FPCGCrc_const_,int> local_898;
  TArrayView<FPCGTaggedData_const_,int> local_888;
  FString local_878;
  TArray<FPCGCrc,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_868;
  TArray<FPCGTaggedData,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_7d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_918;
  local_8e4 = 0;
  bVar24 = -1 < CpuChannel->Enabled;
  local_8e0 = param_1;
  local_8d8 = this;
  local_8d0 = param_2;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2182,"FPCGGraphExecutor::BuildTaskInput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x886);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2182);
  }
  local_7d8.AllocatorInstance.SecondaryData = (ForElementType<FPCGTaggedData>)0x0;
  local_7d8.ArrayNum = 0;
  local_7d8.ArrayMax = 0x10;
  local_868.AllocatorInstance.SecondaryData = (ForElementType<FPCGCrc>)0x0;
  local_868.ArrayNum = 0;
  local_868.ArrayMax = 0x10;
  local_8c0 = param_1;
  if (0 < (param_1->Inputs).ArrayNum) {
    pFVar1 = &this->TaskOutputsLock;
    if ((pFVar1 == (FSpinLock *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                           ,0xb4,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
      while (aVar2 != (atomic<bool>)0x0) {
        aVar2 = pFVar1->bFlag;
      }
      LOCK();
      aVar2 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    local_8c8 = (param_1->Inputs).ArrayNum;
    uVar11 = (ulonglong)(int)local_8c8;
    pFVar17 = (param_1->Inputs).AllocatorInstance.Data;
    pFVar16 = pFVar17 + uVar11 * 0x80;
    uVar20 = 0;
    while( true ) {
      if ((param_1->Inputs).ArrayNum != (int)uVar11) {
        local_8e6[0] = 0;
        `TCheckedPointerIterator<FPCGGraphTaskInput,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_8e6);
      }
      if (pFVar17 == pFVar16) break;
      uVar11 = *(ulonglong *)pFVar17;
      if (*(int *)&(this->TaskOutputs).field_0x8 != *(int *)&(this->TaskOutputs).field_0x34) {
        puVar4 = *(undefined1 **)&(this->TaskOutputs).field_0x40;
        puVar15 = &(this->TaskOutputs).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar15 = puVar4;
        }
        iVar10 = *(int *)(puVar15 +
                         ((ulonglong)(*(int *)&(this->TaskOutputs).field_0x48 - 1) &
                         (uVar11 >> 0x20) * 0x17 + uVar11) * 4);
        if (iVar10 != -1) {
          do {
            puVar18 = (ulonglong *)((longlong)iVar10 * 0x50 + *(longlong *)&this->TaskOutputs);
            if (*puVar18 == uVar11) {
              if (puVar18 != (ulonglong *)0x0) goto LAB_149cae246;
              goto LAB_149cae220;
            }
            iVar10 = (int)puVar18[9];
          } while (iVar10 != -1);
        }
      }
      puVar18 = (ulonglong *)0x0;
LAB_149cae220:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_149cae246:
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
                (param_2,(ulong64 *)pFVar17);
      if (((char)puVar18[8] == '\0') && (pFVar17[0x78] != (FScriptContainerElement)0x0)) {
        if (pFVar17[0x70] == (FScriptContainerElement)0x0) {
          local_8e8 = (FScriptContainerElement)0x1;
          uVar19 = 0xf422f;
        }
        else {
          if (pFVar17[0x48] == (FScriptContainerElement)0x3) goto LAB_149cae729;
          local_8e8 = pFVar17[0x68];
          uVar20 = uVar20 | 1;
          local_8e4 = uVar20;
          pFVar12 = ::FName::ToString((FName *)(pFVar17 + 0x40),&local_878);
          if ((pFVar12->Data).ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
          }
          uVar11 = 0xffffffff;
          uVar19 = 0xffffffff;
          uVar3 = *pwVar13;
          while (uVar3 != 0) {
            pwVar13 = (wchar_t *)((longlong)pwVar13 + 2);
            uVar19 = FCrc::CRCTablesSB8[1][uVar11 >> 0x10 & 0xff] ^
                     FCrc::CRCTablesSB8[2][(uVar3 ^ uVar11) >> 8 & 0xff] ^
                     FCrc::CRCTablesSB8[0][uVar11 >> 0x18] ^
                     FCrc::CRCTablesSB8[3][(uVar3 ^ uVar11) & 0xff];
            uVar11 = (ulonglong)uVar19;
            uVar3 = *pwVar13;
          }
          uVar19 = ~uVar19;
        }
        if (((uVar20 & 1) != 0) &&
           (uVar20 = uVar20 & 0xfffffffe, local_8e4 = uVar20,
           local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_878.Data.AllocatorInstance.Data);
        }
        pFVar8 = local_8e0;
        if (((pFVar17[0x70] == (FScriptContainerElement)0x0) ||
            (local_8e8 != (FScriptContainerElement)0x0)) ||
           (iVar10 = FPCGDataCollection::GetInputCountByPin
                               (&local_8e0->TaskInput,(FName *)(pFVar17 + 0x40)), iVar10 < 1)) {
          this_00 = &pFVar8->TaskInput;
          (pFVar8->TaskInput).bCancelExecution =
               (bool)((pFVar8->TaskInput).bCancelExecution | *(byte *)((longlong)puVar18 + 0x19));
          iVar10 = (pFVar8->TaskInput).TaggedData.ArrayNum;
          uVar11 = (ulonglong)iVar10;
          if (pFVar17[0x38] == (FScriptContainerElement)0x0) {
            local_898.DataPtr = (FPCGCrc *)puVar18[4];
            iVar21 = (int)puVar18[5];
            if ((iVar21 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_888.DataPtr =
                 (FPCGTaggedData *)
                 (((FPCGDataCollection *)(puVar18 + 1))->TaggedData).AllocatorInstance.Data;
            uVar7 = puVar18[2];
            local_898.ArrayNum = iVar21;
            if (((int)uVar7 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_888.ArrayNum = (int)uVar7;
            FPCGDataCollection::AddData(this_00,&local_888,&local_898);
          }
          else {
            if (local_7d8.ArrayMax < 0) {
              FVar14 = (ForElementType<FPCGTaggedData>)&local_7d8;
              if (local_7d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGTaggedData>)0x0)
              {
                FVar14 = local_7d8.AllocatorInstance.SecondaryData;
              }
              DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)FVar14,local_7d8.ArrayNum);
              local_7d8.ArrayNum = 0;
              if (local_7d8.ArrayMax != 0) {
                UE::Core::Private::
                ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>_>
                          (0x78,8,0,&local_7d8.AllocatorInstance,0,&local_7d8.ArrayMax);
              }
            }
            else {
              FVar14 = (ForElementType<FPCGTaggedData>)&local_7d8;
              if (local_7d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGTaggedData>)0x0)
              {
                FVar14 = local_7d8.AllocatorInstance.SecondaryData;
              }
              DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)FVar14,local_7d8.ArrayNum);
              local_7d8.ArrayNum = 0;
            }
            local_868.ArrayNum = 0;
            if ((local_868.ArrayMax < 0) && (local_868.ArrayMax != 0)) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_>
                        (8,4,0,&local_868.AllocatorInstance,0,&local_868.ArrayMax);
            }
            if ((pFVar17[0x38] == (FScriptContainerElement)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FPCGDataCollection::
            GetInputsAndCrcsByPin<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                      ((FPCGDataCollection *)(puVar18 + 1),(FName *)(pFVar17 + 8),&local_7d8,
                       &local_868);
            if (local_7d8.ArrayNum != 0) {
              if (local_7d8.ArrayNum != local_868.ArrayNum) {
                bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<834425404453292253>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                   ,0x8dd,"InputDataOnPin.Num() == InputDataCrcsOnPin.Num()");
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                TArray<FPCGCrc,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
                SetNumZeroed(&local_868,local_7d8.ArrayNum,Default);
              }
              iVar21 = 1;
              if (local_8e8 != (FScriptContainerElement)0x0) {
                iVar21 = local_7d8.ArrayNum;
              }
              FVar23 = (ForElementType<FPCGCrc>)&local_868;
              if (local_868.AllocatorInstance.SecondaryData != (ForElementType<FPCGCrc>)0x0) {
                FVar23 = local_868.AllocatorInstance.SecondaryData;
              }
              if ((iVar21 < 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar14 = (ForElementType<FPCGTaggedData>)&local_7d8;
              if (local_7d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGTaggedData>)0x0)
              {
                FVar14 = local_7d8.AllocatorInstance.SecondaryData;
              }
              local_8b8.DataPtr = (FPCGCrc *)FVar23;
              local_8b8.ArrayNum = iVar21;
              if ((iVar21 < 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_8a8.DataPtr = (FPCGTaggedData *)FVar14;
              local_8a8.ArrayNum = iVar21;
              FPCGDataCollection::AddDataForPin(this_00,&local_8a8,&local_8b8,uVar19);
              if (iVar21 < local_7d8.ArrayNum) {
                `FPCGGraphExecutor::BuildTaskInput'::__l2::<lambda_1>::operator()
                          (&local_8c0,(TOptional<FPCGPinProperties> *)(pFVar17 + 0x40));
              }
            }
          }
          param_1 = local_8e0;
          if (((pFVar17[0x70] != (FScriptContainerElement)0x0) ||
              (pFVar17[0x79] != (FScriptContainerElement)0x0)) &&
             (iVar10 < (local_8e0->TaskInput).TaggedData.ArrayNum)) {
            lVar22 = uVar11 * 0x78;
            do {
              uVar19 = (uint)uVar11;
              uVar20 = 0;
              if ((int)uVar19 < (pFVar8->TaskInput).TaggedData.ArrayNum) {
                uVar20 = ~uVar19 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar5 = (this_00->TaggedData).AllocatorInstance.Data;
              if (pFVar17[0x70] != (FScriptContainerElement)0x0) {
                *(undefined8 *)(pFVar5 + lVar22 + 0x60) = *(undefined8 *)(pFVar17 + 0x40);
              }
              uVar11 = (ulonglong)(uVar19 + 1);
              pFVar5 = pFVar5 + lVar22 + 0x69;
              *pFVar5 = (FScriptContainerElement)((byte)*pFVar5 | (byte)pFVar17[0x79]);
              lVar22 = lVar22 + 0x78;
            } while ((int)(uVar19 + 1) < (param_1->TaskInput).TaggedData.ArrayNum);
          }
          pFVar17 = pFVar17 + 0x80;
          uVar11 = (ulonglong)local_8c8;
          param_2 = local_8d0;
          this = local_8d8;
          uVar20 = local_8e4;
        }
        else {
          `FPCGGraphExecutor::BuildTaskInput'::__l2::<lambda_1>::operator()
                    (&local_8c0,(TOptional<FPCGPinProperties> *)(pFVar17 + 0x40));
          uVar11 = (ulonglong)local_8c8;
          pFVar17 = pFVar17 + 0x80;
          param_2 = local_8d0;
          this = local_8d8;
          param_1 = pFVar8;
        }
      }
      else {
LAB_149cae729:
        pFVar17 = pFVar17 + 0x80;
        uVar11 = (ulonglong)local_8c8;
        param_1 = local_8e0;
      }
    }
    if (&this->TaskOutputsLock != (FSpinLock *)0x0) {
      (this->TaskOutputsLock).bFlag = (atomic<bool>)0x0;
    }
  }
  CombineParams(this,param_1);
  if (local_868.AllocatorInstance.SecondaryData != (ForElementType<FPCGCrc>)0x0) {
    FMemory::Free((void *)local_868.AllocatorInstance.SecondaryData);
  }
  FVar14 = (ForElementType<FPCGTaggedData>)&local_7d8;
  if (local_7d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGTaggedData>)0x0) {
    FVar14 = local_7d8.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)FVar14,local_7d8.ArrayNum);
  if (local_7d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGTaggedData>)0x0) {
    FMemory::Free((void *)local_7d8.AllocatorInstance.SecondaryData);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Cancel @ 149cb0c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
* __thiscall
FPCGGraphExecutor::Cancel
          (FPCGGraphExecutor *this,
          TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,
          TFunctionRef<bool___cdecl(TWeakInterfacePtr<IPCGGraphExecutionSource>)> *param_1)

{
  atomic<unsigned_int> *paVar1;
  FSpinLock *pFVar2;
  TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_> *pTVar3;
  atomic<bool> aVar4;
  atomic<unsigned_int> aVar5;
  FTaskBase *this_00;
  TReferenceControllerBase<1> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  ulong64 uVar8;
  FPCGContext *pFVar9;
  uint *puVar10;
  undefined1 *puVar11;
  FPCGGraphActiveTask *pFVar12;
  IPCGElement *this_01;
  code *pcVar13;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  *pTVar20;
  FWeakObjectPtr FVar21;
  longlong *plVar22;
  uint uVar23;
  IPCGGraphExecutionSource *pIVar24;
  ulonglong *puVar25;
  ForElementType<FSetElementId> FVar26;
  FWeakObjectPtr *pFVar27;
  longlong lVar28;
  ulonglong *puVar29;
  ulonglong uVar30;
  ForAnyElementType FVar31;
  FScriptContainerElement *pFVar32;
  ulonglong uVar33;
  IPCGGraphExecutionSource *pIVar34;
  undefined1 *puVar35;
  uint *puVar36;
  uint uVar37;
  int iVar38;
  ulonglong uVar39;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar40;
  FWeakObjectPtr FVar41;
  TBitArray<FDefaultBitArrayAllocator> *pTVar42;
  int iVar43;
  longlong lVar44;
  longlong lVar45;
  longlong *plVar46;
  TArray<FPCGGraphScheduleTask,TSizedDefaultAllocator<32>_> *pTVar47;
  TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_> *pTVar48;
  FPCGGraphTask *pFVar49;
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar50;
  FScriptContainerElement *pFVar51;
  undefined1 local_res20 [8];
  uint local_1e8;
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1cf;
  undefined1 local_1ce;
  undefined1 local_1cd;
  undefined1 local_1cc;
  undefined1 local_1cb;
  undefined1 local_1ca;
  undefined1 local_1c9;
  TSharedPtr<FPCGGraphActiveTask,1> local_1c8;
  longlong local_1b8;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  longlong local_190;
  TArray<FPCGGraphScheduleTask,TSizedDefaultAllocator<32>_> *local_188;
  TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_> *local_180;
  undefined8 local_178;
  longlong *local_170;
  IPCGGraphExecutionSource *local_168;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  *local_160;
  TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_> **local_158;
  TFunctionRef<bool___cdecl(TWeakInterfacePtr<IPCGGraphExecutionSource>)> *local_150;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  *local_148;
  IPCGGraphExecutionSource *local_140;
  IPCGGraphExecutionSource *local_138;
  ulonglong *local_130;
  ulonglong local_128;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_118;
  undefined1 local_110 [8];
  int local_108;
  int local_104;
  FWeakObjectPtr local_100;
  FWeakObjectPtr local_f8;
  IPCGGraphExecutionSource *local_f0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 local_4c;
  
  FVar41.ObjectIndex = 0;
  FVar41.ObjectSerialNumber = 0;
  bVar15 = IsInGameThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,400,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
               *)(*pcVar13)();
    return pTVar20;
  }
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  pFVar2 = &this->ScheduleLock;
  LOCK();
  this->SchedulingDisabled = (atomic<bool>)0x1;
  UNLOCK();
  if ((pFVar2 == (FSpinLock *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0xb4,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
               *)(*pcVar13)();
    return pTVar20;
  }
  LOCK();
  aVar4 = pFVar2->bFlag;
  pFVar2->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar4 != (atomic<bool>)0x0) {
    aVar4 = pFVar2->bFlag;
    while (aVar4 != (atomic<bool>)0x0) {
      aVar4 = pFVar2->bFlag;
    }
    LOCK();
    aVar4 = pFVar2->bFlag;
    pFVar2->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar32 = (this->ScheduledTasks).AllocatorInstance.Data;
  local_188 = &this->ScheduledTasks;
  iVar18 = (this->ScheduledTasks).ArrayNum;
  pFVar27 = (FWeakObjectPtr *)(pFVar32 + 0x10);
  pFVar51 = pFVar32 + (longlong)iVar18 * 0x30;
  while( true ) {
    if ((this->ScheduledTasks).ArrayNum != iVar18) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FPCGGraphScheduleTask,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar32 == pFVar51) break;
    local_78 = pFVar27->ObjectIndex;
    iStack_74 = pFVar27->ObjectSerialNumber;
    iStack_70 = pFVar27[1].ObjectIndex;
    iStack_6c = pFVar27[1].ObjectSerialNumber;
    cVar16 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_78);
    if (cVar16 != '\0') {
      FVar21 = FVar41;
      if ((pFVar27[1] != (FWeakObjectPtr)0x0) && (bVar15 = FWeakObjectPtr::IsValid(pFVar27), bVar15)
         ) {
        FVar21 = pFVar27[1];
      }
      local_100 = FVar21;
      TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
      ::Emplace<IPCGGraphExecutionSource_*>(__return_storage_ptr__,&local_140,(bool *)&local_100);
    }
    pFVar32 = pFVar32 + 0x30;
    pFVar27 = pFVar27 + 6;
  }
  if (&this->ScheduleLock != (FSpinLock *)0x0) {
    (this->ScheduleLock).bFlag = (atomic<bool>)0x0;
  }
  pFVar2 = &this->LiveTasksLock;
  if ((pFVar2 == (FSpinLock *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0xb4,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
               *)(*pcVar13)();
    return pTVar20;
  }
  LOCK();
  aVar4 = pFVar2->bFlag;
  pFVar2->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar4 != (atomic<bool>)0x0) {
    aVar4 = pFVar2->bFlag;
    while (aVar4 != (atomic<bool>)0x0) {
      aVar4 = pFVar2->bFlag;
    }
    LOCK();
    aVar4 = pFVar2->bFlag;
    pFVar2->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar32 = (this->ReadyTasks).AllocatorInstance.Data;
  iVar18 = (this->ReadyTasks).ArrayNum;
  pFVar27 = (FWeakObjectPtr *)(pFVar32 + 0x88);
  pFVar51 = pFVar32 + (longlong)iVar18 * 0x148;
  while( true ) {
    if ((this->ReadyTasks).ArrayNum != iVar18) {
      local_1d0 = 0;
      `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1d0);
    }
    if (pFVar32 == pFVar51) break;
    local_88 = pFVar27->ObjectIndex;
    iStack_84 = pFVar27->ObjectSerialNumber;
    iStack_80 = pFVar27[1].ObjectIndex;
    iStack_7c = pFVar27[1].ObjectSerialNumber;
    cVar16 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_88);
    if (cVar16 != '\0') {
      FVar21 = FVar41;
      if ((pFVar27[1] != (FWeakObjectPtr)0x0) && (bVar15 = FWeakObjectPtr::IsValid(pFVar27), bVar15)
         ) {
        FVar21 = pFVar27[1];
      }
      local_f8 = FVar21;
      TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
      ::Emplace<IPCGGraphExecutionSource_*>
                (__return_storage_ptr__,(IPCGGraphExecutionSource **)local_110,(bool *)&local_f8);
    }
    pFVar32 = pFVar32 + 0x148;
    pFVar27 = pFVar27 + 0x29;
  }
  local_150 = param_1;
  local_148 = __return_storage_ptr__;
  `FPCGGraphExecutor::Cancel'::__l18::<lambda_2>::operator()(&local_150,&this->ActiveTasks);
  `FPCGGraphExecutor::Cancel'::__l18::<lambda_2>::operator()
            (&local_150,&this->ActiveTasksGameThreadOnly);
  `FPCGGraphExecutor::Cancel'::__l18::<lambda_2>::operator()(&local_150,&this->PausedTasks);
  if (&this->LiveTasksLock != (FSpinLock *)0x0) {
    (this->LiveTasksLock).bFlag = (atomic<bool>)0x0;
  }
  iVar18 = TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
           ::Remove(__return_storage_ptr__,(IPCGGraphExecutionSource *)0x0);
  if ((iVar18 != 0) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<834425404453290437>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0x1c5,"CancelledExecutionSources.Remove(nullptr) == 0"), bVar15)) {
    pcVar13 = (code *)swi(3);
    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
               *)(*pcVar13)();
    return pTVar20;
  }
  if (*(int *)&(__return_storage_ptr__->Elements).field_0x8 !=
      *(int *)&(__return_storage_ptr__->Elements).field_0x34) {
    PCGGraphExecutionLogging::LogExecutionSourceCancellation(__return_storage_ptr__);
    local_1e0.Data = (FScriptContainerElement *)0x0;
    local_1d8 = 0;
    do {
      pFVar2 = &this->ScheduleLock;
      bVar15 = true;
      if ((pFVar2 == (FSpinLock *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                              ,0xb4,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                   *)(*pcVar13)();
        return pTVar20;
      }
      pTVar47 = local_188;
      LOCK();
      aVar4 = pFVar2->bFlag;
      pFVar2->bFlag = (atomic<bool>)0x1;
      UNLOCK();
      while (aVar4 != (atomic<bool>)0x0) {
        aVar4 = pFVar2->bFlag;
        while (aVar4 != (atomic<bool>)0x0) {
          aVar4 = pFVar2->bFlag;
        }
        LOCK();
        aVar4 = pFVar2->bFlag;
        pFVar2->bFlag = (atomic<bool>)0x1;
        UNLOCK();
      }
      uVar37 = (this->ScheduledTasks).ArrayNum - 1;
      if (-1 < (int)uVar37) {
        lVar44 = (longlong)(int)uVar37 * 0x30;
        do {
          pIVar24 = (IPCGGraphExecutionSource *)0x0;
          uVar23 = 0;
          if ((int)uVar37 < pTVar47->ArrayNum) {
            uVar23 = ~uVar37 >> 0x1f;
          }
          local_1b8 = lVar44;
          if ((uVar23 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                       *)(*pcVar13)();
            return pTVar20;
          }
          pFVar32 = (pTVar47->AllocatorInstance).Data + lVar44;
          if ((*(longlong *)(pFVar32 + 0x18) != 0) &&
             (bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar32 + 0x10)), bVar17)) {
            pIVar24 = *(IPCGGraphExecutionSource **)(pFVar32 + 0x18);
          }
          uVar23 = ((uint)((ulonglong)pIVar24 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar24 >> 4)) *
                   -0x7a143595;
          uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
          local_f0 = pIVar24;
          iVar18 = TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<IPCGGraphExecutionSource_const_*>
                             (__return_storage_ptr__,uVar23 >> 0x10 ^ uVar23,&local_f0);
          if (iVar18 != -1) {
            uVar23 = *(uint *)(pFVar32 + 0x24);
            uVar19 = 0;
            if ((int)uVar23 < *(int *)(pFVar32 + 8)) {
              uVar19 = ~uVar23 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                         *)(*pcVar13)();
              return pTVar20;
            }
            pFVar51 = (FScriptContainerElement *)
                      (*(longlong *)pFVar32 + 0x48 + (longlong)(int)uVar23 * 0x148);
            if (((local_1e0.Data <= pFVar51) &&
                (pFVar51 < local_1e0.Data + (longlong)(int)local_1d8._4_4_ * 8)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar13 = (code *)swi(3);
              pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                         *)(*pcVar13)();
              return pTVar20;
            }
            iVar18 = (int)local_1d8;
            if ((int)local_1d8 == local_1d8._4_4_) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1e0,(int *)((longlong)&local_1d8 + 4));
            }
            local_1d8 = CONCAT44(local_1d8._4_4_,iVar18 + 1);
            *(undefined8 *)(local_1e0.Data + (longlong)iVar18 * 8) = *(undefined8 *)pFVar51;
            if (pFVar32[0x28] != (FScriptContainerElement)0x0) {
              iVar18 = *(int *)(pFVar32 + 8);
              lVar28 = *(longlong *)pFVar32;
              lVar45 = (longlong)iVar18 * 0x148 + lVar28;
              while( true ) {
                if (*(int *)(pFVar32 + 8) != iVar18) {
                  local_1cf = 0;
                  `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_1cf);
                }
                lVar44 = local_1b8;
                if (lVar28 == lVar45) break;
                if (*(IPCGElement **)(lVar28 + 0x78) != (IPCGElement *)0x0) {
                  IPCGElement::Abort(*(IPCGElement **)(lVar28 + 0x78),
                                     *(FPCGContext **)(lVar28 + 0xa0));
                }
                lVar28 = lVar28 + 0x148;
              }
            }
            uVar23 = 0;
            if ((int)uVar37 < pTVar47->ArrayNum) {
              uVar23 = ~uVar37 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                         *)(*pcVar13)();
              return pTVar20;
            }
            TArray<FPCGGraphScheduleTask,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (pTVar47,uVar37);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,&pTVar47->AllocatorInstance,pTVar47->ArrayNum,&pTVar47->ArrayMax);
          }
          lVar44 = lVar44 + -0x30;
          uVar37 = uVar37 - 1;
          local_1b8 = lVar44;
        } while (-1 < (int)uVar37);
      }
      local_1e8 = 0;
      if (0 < (int)local_1d8) {
        local_190 = 0;
        iVar18 = (int)local_1d8;
        do {
          lVar44 = local_190;
          uVar37 = 0;
          if ((int)local_1e8 < iVar18) {
            uVar37 = ~local_1e8 >> 0x1f;
          }
          if (uVar37 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar13 = (code *)swi(3);
              pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                         *)(*pcVar13)();
              return pTVar20;
            }
            iVar18 = (int)local_1d8;
          }
          uVar37 = (this->ScheduledTasks).ArrayNum - 1;
          local_170 = *(longlong **)(local_1e0.Data + lVar44);
          if (-1 < (int)uVar37) {
            lVar28 = (longlong)(int)uVar37 * 0x30;
            pTVar47 = local_188;
            do {
              uVar23 = 0;
              if ((int)uVar37 < pTVar47->ArrayNum) {
                uVar23 = ~uVar37 >> 0x1f;
              }
              local_1b8 = lVar28;
              if ((uVar23 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                           *)(*pcVar13)();
                return pTVar20;
              }
              pFVar32 = (pTVar47->AllocatorInstance).Data + lVar28;
              uVar23 = *(uint *)(pFVar32 + 0x20);
              uVar19 = 0;
              if ((int)uVar23 < *(int *)(pFVar32 + 8)) {
                uVar19 = ~uVar23 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                           *)(*pcVar13)();
                return pTVar20;
              }
              plVar46 = (longlong *)((longlong)(int)uVar23 * 0x148 + *(longlong *)pFVar32);
              lVar44 = plVar46[1];
              puVar25 = (ulonglong *)*plVar46;
              puVar29 = puVar25 + (longlong)(int)lVar44 * 0x10;
              while( true ) {
                if ((int)plVar46[1] != (int)lVar44) {
                  local_1ce = 0;
                  `TCheckedPointerIterator<FPCGGraphTaskInput_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_1ce);
                }
                pTVar47 = local_188;
                if (puVar25 == puVar29) goto LAB_149cb16e5;
                if ((longlong *)*puVar25 == local_170) break;
                puVar25 = puVar25 + 0x10;
              }
              if ((*(longlong *)(pFVar32 + 0x18) == 0) ||
                 (bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar32 + 0x10)), !bVar17)) {
                local_168 = (IPCGGraphExecutionSource *)0x0;
              }
              else {
                local_168 = *(IPCGGraphExecutionSource **)(pFVar32 + 0x18);
                if ((local_168 != (IPCGGraphExecutionSource *)0x0) &&
                   (uVar23 = ((uint)((ulonglong)local_168 >> 0x14) & 0xffff ^
                             (uint)((ulonglong)local_168 >> 4)) * -0x7a143595,
                   uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb, local_138 = local_168,
                   iVar18 = TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                            ::FindIndexByHash<IPCGGraphExecutionSource_const_*>
                                      (__return_storage_ptr__,uVar23 >> 0x10 ^ uVar23,&local_138),
                   iVar18 == -1)) {
                  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                  ::Emplace<IPCGGraphExecutionSource_*_const_&>
                            (__return_storage_ptr__,(IPCGGraphExecutionSource **)(local_110 + 4),
                             (bool *)&local_168);
                  bVar15 = false;
                }
              }
              uVar23 = *(uint *)(pFVar32 + 0x24);
              uVar19 = 0;
              if ((int)uVar23 < *(int *)(pFVar32 + 8)) {
                uVar19 = ~uVar23 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                           *)(*pcVar13)();
                return pTVar20;
              }
              pFVar51 = (FScriptContainerElement *)
                        (*(longlong *)pFVar32 + 0x48 + (longlong)(int)uVar23 * 0x148);
              if (((local_1e0.Data <= pFVar51) &&
                  (pFVar51 < local_1e0.Data + (longlong)(int)local_1d8._4_4_ * 8)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar13 = (code *)swi(3);
                pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                           *)(*pcVar13)();
                return pTVar20;
              }
              iVar18 = (int)local_1d8;
              if ((int)local_1d8 == local_1d8._4_4_) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_1e0,(int *)((longlong)&local_1d8 + 4));
              }
              local_1d8 = CONCAT44(local_1d8._4_4_,iVar18 + 1);
              *(undefined8 *)(local_1e0.Data + (longlong)iVar18 * 8) = *(undefined8 *)pFVar51;
              if (pFVar32[0x28] != (FScriptContainerElement)0x0) {
                iVar18 = *(int *)(pFVar32 + 8);
                lVar44 = *(longlong *)pFVar32;
                lVar28 = (longlong)iVar18 * 0x148 + lVar44;
                while( true ) {
                  if (*(int *)(pFVar32 + 8) != iVar18) {
                    local_1cd = 0;
                    `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_1cd);
                  }
                  if (lVar44 == lVar28) break;
                  if (*(IPCGElement **)(lVar44 + 0x78) != (IPCGElement *)0x0) {
                    IPCGElement::Abort(*(IPCGElement **)(lVar44 + 0x78),
                                       *(FPCGContext **)(lVar44 + 0xa0));
                  }
                  lVar44 = lVar44 + 0x148;
                }
              }
              pTVar47 = local_188;
              uVar23 = 0;
              if ((int)uVar37 < local_188->ArrayNum) {
                uVar23 = ~uVar37 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                           *)(*pcVar13)();
                return pTVar20;
              }
              TArray<FPCGGraphScheduleTask,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                        (pTVar47,uVar37);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,&pTVar47->AllocatorInstance,pTVar47->ArrayNum,&pTVar47->ArrayMax);
LAB_149cb16e5:
              lVar28 = local_1b8 + -0x30;
              uVar37 = uVar37 - 1;
            } while (-1 < (int)uVar37);
            lVar44 = local_190;
            iVar18 = (int)local_1d8;
            local_1b8 = lVar28;
          }
          local_1e8 = local_1e8 + 1;
          local_190 = lVar44 + 8;
        } while ((int)local_1e8 < iVar18);
      }
      lVar44 = local_1d8;
      uVar37 = local_1d8._4_4_;
      local_1d8 = (ulonglong)local_1d8._4_4_ << 0x20;
      if ((lVar44 < 0) && (uVar37 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_1e0,0,(int *)((longlong)&local_1d8 + 4));
      }
      if (&this->ScheduleLock != (FSpinLock *)0x0) {
        (this->ScheduleLock).bFlag = (atomic<bool>)0x0;
      }
      pFVar2 = &this->LiveTasksLock;
      local_158 = &local_180;
      local_180 = (TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_> *)0x0;
      local_178 = 0;
      local_160 = __return_storage_ptr__;
      if ((pFVar2 == (FSpinLock *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                              ,0xb4,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                   *)(*pcVar13)();
        return pTVar20;
      }
      LOCK();
      aVar4 = pFVar2->bFlag;
      pFVar2->bFlag = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar4 == (atomic<bool>)0x0) {
        `FPCGGraphExecutor::Cancel'::__l48::<lambda_5>::operator()(&local_160,&this->ActiveTasks);
        `FPCGGraphExecutor::Cancel'::__l48::<lambda_5>::operator()
                  (&local_160,&this->ActiveTasksGameThreadOnly);
        if (pFVar2 != (FSpinLock *)0x0) goto code_r0x000149cb1833;
      }
      else {
        do {
          aVar4 = pFVar2->bFlag;
          while (aVar4 != (atomic<bool>)0x0) {
            aVar4 = pFVar2->bFlag;
          }
          LOCK();
          aVar4 = pFVar2->bFlag;
          pFVar2->bFlag = (atomic<bool>)0x1;
          UNLOCK();
        } while (aVar4 != (atomic<bool>)0x0);
        `FPCGGraphExecutor::Cancel'::__l48::<lambda_5>::operator()(&local_160,&this->ActiveTasks);
        `FPCGGraphExecutor::Cancel'::__l48::<lambda_5>::operator()
                  (&local_160,&this->ActiveTasksGameThreadOnly);
code_r0x000149cb1833:
        pFVar2->bFlag = (atomic<bool>)0x0;
      }
      iVar18 = (int)local_178;
      pTVar3 = local_180 + (int)local_178;
      pTVar48 = local_180;
      while( true ) {
        if ((int)local_178 != iVar18) {
          local_1cc = 0;
          `TCheckedPointerIterator<TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_1cc);
        }
        if (pTVar48 == pTVar3) break;
        this_00 = *(FTaskBase **)&pTVar48->field_0x10;
        if (this_00 != (FTaskBase *)0x0) {
          LOCK();
          this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::Wait(this_00);
        }
        pTVar6 = *(TReferenceControllerBase<1> **)&pTVar48->field_0x8;
        lVar44 = *(longlong *)pTVar48;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((lVar44 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        if (*(longlong *)(lVar44 + 0x28) == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActiveTask->Element",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                              ,0x235,L"");
          if (bVar17) {
            pcVar13 = (code *)swi(3);
            pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                       *)(*pcVar13)();
            return pTVar20;
          }
          if ((*(longlong *)(lVar44 + 0x28) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                       *)(*pcVar13)();
            return pTVar20;
          }
        }
        IPCGElement::Abort(*(IPCGElement **)(lVar44 + 0x28),*(FPCGContext **)(lVar44 + 0x38));
        bVar17 = CancelNextTasks(this,*(ulong64 *)(lVar44 + 0x40),__return_storage_ptr__);
        bVar15 = (bool)(bVar15 & !bVar17);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        if (this_00 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &this_00->RefCount;
          aVar5 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar5 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_00->_padding_)(this_00,1);
          }
        }
        pTVar48 = pTVar48 + 1;
      }
      DestructItems<TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_>,int>
                (local_180,(int)local_178);
      if (local_180 != (TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_> *)0x0) {
        FMemory::Free(local_180);
      }
      pFVar2 = &this->LiveTasksLock;
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = 0;
      if ((pFVar2 == (FSpinLock *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                              ,0xb4,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                   *)(*pcVar13)();
        return pTVar20;
      }
      LOCK();
      aVar4 = pFVar2->bFlag;
      pFVar2->bFlag = (atomic<bool>)0x1;
      UNLOCK();
      while (aVar4 != (atomic<bool>)0x0) {
        aVar4 = pFVar2->bFlag;
        while (aVar4 != (atomic<bool>)0x0) {
          aVar4 = pFVar2->bFlag;
        }
        LOCK();
        aVar4 = pFVar2->bFlag;
        pFVar2->bFlag = (atomic<bool>)0x1;
        UNLOCK();
      }
      uVar37 = (this->ReadyTasks).ArrayNum - 1;
      if (-1 < (int)uVar37) {
        lVar44 = (longlong)(int)uVar37 * 0x148;
        do {
          uVar23 = 0;
          if ((int)uVar37 < (this->ReadyTasks).ArrayNum) {
            uVar23 = ~uVar37 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                       *)(*pcVar13)();
            return pTVar20;
          }
          pFVar49 = (FPCGGraphTask *)((this->ReadyTasks).AllocatorInstance.Data + lVar44);
          pIVar24 = (IPCGGraphExecutionSource *)0x0;
          if (((pFVar49->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
             (bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar49->ExecutionSource), bVar17)
             ) {
            pIVar24 = (pFVar49->ExecutionSource).InterfaceInstance;
          }
          uVar23 = ((uint)((ulonglong)pIVar24 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar24 >> 4)) *
                   -0x7a143595;
          uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
          if (*(int *)&(__return_storage_ptr__->Elements).field_0x8 !=
              *(int *)&(__return_storage_ptr__->Elements).field_0x34) {
            FVar7 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar26 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar7 != (ForElementType<FSetElementId>)0x0) {
              FVar26 = FVar7;
            }
            iVar18 = *(int *)((longlong)FVar26 +
                             (ulonglong)
                             (__return_storage_ptr__->HashSize - 1U & (uVar23 >> 0x10 ^ uVar23)) * 4
                             );
            if (iVar18 != -1) {
              do {
                if (*(IPCGGraphExecutionSource **)
                     (*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar18 * 0x10) ==
                    pIVar24) {
                  if (((local_1b0.Data <= pFVar49) &&
                      (pFVar49 < (FPCGGraphTask *)
                                 (local_1b0.Data + (longlong)local_1a8._4_4_ * 0x148))) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                               *)(*pcVar13)();
                    return pTVar20;
                  }
                  iVar18 = (int)local_1a8;
                  if ((int)local_1a8 == local_1a8._4_4_) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x148,8,&local_1b0,(int *)((longlong)&local_1a8 + 4));
                  }
                  local_1a8 = CONCAT44(local_1a8._4_4_,iVar18 + 1);
                  FPCGGraphTask::FPCGGraphTask
                            ((FPCGGraphTask *)(local_1b0.Data + (longlong)iVar18 * 0x148),pFVar49);
                  uVar23 = 0;
                  if ((int)uVar37 < (this->ReadyTasks).ArrayNum) {
                    uVar23 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                               *)(*pcVar13)();
                    return pTVar20;
                  }
                  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                            (&this->ReadyTasks,uVar37);
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x148,8,&(this->ReadyTasks).AllocatorInstance,
                             (this->ReadyTasks).ArrayNum,&(this->ReadyTasks).ArrayMax);
                  break;
                }
                iVar18 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 8 +
                                 (longlong)iVar18 * 0x10);
              } while (iVar18 != -1);
            }
          }
          lVar44 = lVar44 + -0x148;
          uVar37 = uVar37 - 1;
        } while (-1 < (int)uVar37);
      }
      if (&this->LiveTasksLock != (FSpinLock *)0x0) {
        (this->LiveTasksLock).bFlag = (atomic<bool>)0x0;
      }
      iVar18 = (int)local_1a8;
      pFVar32 = local_1b0.Data + 0x78;
      pFVar49 = (FPCGGraphTask *)(local_1b0.Data + (longlong)(int)local_1a8 * 0x148);
      while( true ) {
        if ((int)local_1a8 != iVar18) {
          local_1cb = 0;
          `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1cb);
        }
        if ((FPCGGraphTask *)(pFVar32 + -0x78) == pFVar49) break;
        if (*(IPCGElement **)pFVar32 != (IPCGElement *)0x0) {
          IPCGElement::Abort(*(IPCGElement **)pFVar32,*(FPCGContext **)(pFVar32 + 0x28));
        }
        uVar8 = *(ulong64 *)(pFVar32 + -0x30);
        RemoveTaskFromInputSuccessors
                  (this,uVar8,
                   (TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *)(pFVar32 + -0x78));
        FPCGContext::Release(*(FPCGContext **)(pFVar32 + 0x28));
        bVar17 = CancelNextTasks(this,uVar8,__return_storage_ptr__);
        bVar15 = (bool)(bVar15 & !bVar17);
        pFVar32 = pFVar32 + 0x148;
      }
      DestructItems<FPCGGraphTask,int>((FPCGGraphTask *)local_1b0.Data,(int)local_1a8);
      if ((FPCGGraphTask *)local_1b0.Data != (FPCGGraphTask *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      pFVar2 = &this->LiveTasksLock;
      local_1a0.Data = (FScriptContainerElement *)0x0;
      local_198 = 0;
      if ((pFVar2 == (FSpinLock *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                              ,0xb4,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                   *)(*pcVar13)();
        return pTVar20;
      }
      LOCK();
      aVar4 = pFVar2->bFlag;
      pFVar2->bFlag = (atomic<bool>)0x1;
      UNLOCK();
      while (aVar4 != (atomic<bool>)0x0) {
        aVar4 = pFVar2->bFlag;
        while (aVar4 != (atomic<bool>)0x0) {
          aVar4 = pFVar2->bFlag;
        }
        LOCK();
        aVar4 = pFVar2->bFlag;
        pFVar2->bFlag = (atomic<bool>)0x1;
        UNLOCK();
      }
      pFVar2 = &this->PausedTaskSuccessorsLock;
      if ((pFVar2 == (FSpinLock *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                              ,0xb4,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                   *)(*pcVar13)();
        return pTVar20;
      }
      LOCK();
      aVar4 = pFVar2->bFlag;
      pFVar2->bFlag = (atomic<bool>)0x1;
      UNLOCK();
      while (aVar4 != (atomic<bool>)0x0) {
        aVar4 = pFVar2->bFlag;
        while (aVar4 != (atomic<bool>)0x0) {
          aVar4 = pFVar2->bFlag;
        }
        LOCK();
        aVar4 = pFVar2->bFlag;
        pFVar2->bFlag = (atomic<bool>)0x1;
        UNLOCK();
      }
      uVar37 = (this->PausedTasks).ArrayNum - 1;
      local_1b8 = CONCAT44(local_1b8._4_4_,uVar37);
      if (-1 < (int)uVar37) {
        lVar44 = (longlong)(int)uVar37 << 4;
LAB_149cb1de0:
        pIVar24 = (IPCGGraphExecutionSource *)0x0;
        uVar23 = 0;
        if ((int)uVar37 < (this->PausedTasks).ArrayNum) {
          uVar23 = ~uVar37 >> 0x1f;
        }
        local_190 = lVar44;
        if ((uVar23 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        pFVar32 = (this->PausedTasks).AllocatorInstance.Data;
        local_1c8.Object = *(FPCGGraphActiveTask **)(pFVar32 + lVar44);
        local_1c8.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar32 + lVar44 + 8);
        if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_1c8.Object == (FPCGGraphActiveTask *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        pFVar9 = ((local_1c8.Object)->Context).Ptr;
        if (pFVar9 != (FPCGContext *)0x0) {
          pIVar34 = pIVar24;
          if (((pFVar9->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
             (bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar9->ExecutionSource), bVar17))
          {
            pIVar34 = (pFVar9->ExecutionSource).InterfaceInstance;
          }
          uVar23 = ((uint)((ulonglong)pIVar34 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar34 >> 4)) *
                   -0x7a143595;
          uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
          if (*(int *)&(__return_storage_ptr__->Elements).field_0x8 !=
              *(int *)&(__return_storage_ptr__->Elements).field_0x34) {
            FVar7 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar26 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar7 != (ForElementType<FSetElementId>)0x0) {
              FVar26 = FVar7;
            }
            iVar18 = *(int *)((longlong)FVar26 +
                             (ulonglong)
                             (__return_storage_ptr__->HashSize - 1U & (uVar23 >> 0x10 ^ uVar23)) * 4
                             );
            if (iVar18 != -1) {
              do {
                if (*(IPCGGraphExecutionSource **)
                     (*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar18 * 0x10) ==
                    pIVar34) {
                  if ((local_1c8.Object == (FPCGGraphActiveTask *)0x0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                               *)(*pcVar13)();
                    return pTVar20;
                  }
                  if (((local_1c8.Object)->TaskIndex != uVar37) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Task->TaskIndex == PausedTaskIndex",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                          ,0x267,L""), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                               *)(*pcVar13)();
                    return pTVar20;
                  }
                  if (((local_1a0.Data <= &local_1c8) &&
                      (&local_1c8 <
                       (TSharedPtr<FPCGGraphActiveTask,1> *)
                       (local_1a0.Data + (longlong)local_198._4_4_ * 0x10))) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                               *)(*pcVar13)();
                    return pTVar20;
                  }
                  iVar18 = (int)local_198;
                  if ((int)local_198 == local_198._4_4_) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_1a0,(int *)((longlong)&local_198 + 4));
                  }
                  local_198 = CONCAT44(local_198._4_4_,iVar18 + 1);
                  *(FPCGGraphActiveTask **)&local_1a0.Data[(longlong)iVar18 * 0x10].field_0x0 =
                       local_1c8.Object;
                  *(TReferenceControllerBase<1> **)(local_1a0.Data + (longlong)iVar18 * 0x10 + 8) =
                       local_1c8.SharedReferenceCount.ReferenceController;
                  if (local_1c8.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_1c8.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(&this->PausedTasks,uVar37);
                  if ((local_1c8.Object == (FPCGGraphActiveTask *)0x0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                               *)(*pcVar13)();
                    return pTVar20;
                  }
                  (local_1c8.Object)->TaskIndex = -1;
                  if ((local_1c8.Object == (FPCGGraphActiveTask *)0x0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                               *)(*pcVar13)();
                    return pTVar20;
                  }
                  pFVar9 = ((local_1c8.Object)->Context).Ptr;
                  if (*(int *)&(pFVar9->DynamicDependencies).Elements.field_0x8 !=
                      *(int *)&(pFVar9->DynamicDependencies).Elements.field_0x34) {
                    local_d8 = &(pFVar9->DynamicDependencies).Elements.field_0x10;
                    uVar37 = *(uint *)&(pFVar9->DynamicDependencies).Elements.field_0x28;
                    pTVar40 = &pFVar9->DynamicDependencies;
                    uStack_dc = 1;
                    local_c8 = 0;
                    uStack_cc = 0;
                    if (uVar37 == 0) goto LAB_149cb216d;
                    puVar10 = *(uint **)&(pFVar9->DynamicDependencies).Elements.field_0x20;
                    puVar36 = (uint *)local_d8;
                    if (puVar10 != (uint *)0x0) {
                      puVar36 = puVar10;
                    }
                    uVar23 = *puVar36;
                    pIVar34 = pIVar24;
                    if (uVar23 != 0) goto LAB_149cb2148;
                    goto LAB_149cb2130;
                  }
                  break;
                }
                iVar18 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 8 +
                                 (longlong)iVar18 * 0x10);
              } while (iVar18 != -1);
            }
          }
        }
        goto LAB_149cb268e;
      }
LAB_149cb26be:
      if (&this->PausedTaskSuccessorsLock != (FSpinLock *)0x0) {
        (this->PausedTaskSuccessorsLock).bFlag = (atomic<bool>)0x0;
      }
      if (&this->LiveTasksLock != (FSpinLock *)0x0) {
        (this->LiveTasksLock).bFlag = (atomic<bool>)0x0;
      }
      iVar18 = (int)local_198;
      pTVar50 = (TSharedPtr<FPCGGraphActiveTask,1> *)
                (local_1a0.Data + (longlong)(int)local_198 * 0x10);
      FVar31.Data = local_1a0.Data;
      while( true ) {
        if ((int)local_198 != iVar18) {
          local_1c9 = 0;
          `TCheckedPointerIterator<TSharedPtr<FPCGGraphActiveTask,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_1c9);
        }
        if ((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data == pTVar50) break;
        if ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data)->Object ==
             (FPCGGraphActiveTask *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        if (((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data)->Object->Element).Object ==
             (IPCGElement *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("CancelledPausedTask->Element",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                ,0x285,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        if ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data)->Object ==
             (FPCGGraphActiveTask *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        pFVar12 = ((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data)->Object;
        if (((pFVar12->Element).Object == (IPCGElement *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        this_01 = (pFVar12->Element).Object;
        if ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data)->Object ==
             (FPCGGraphActiveTask *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        IPCGElement::Abort(this_01,(((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data)->Object->
                                   Context).Ptr);
        if ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data)->Object ==
             (FPCGGraphActiveTask *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        uVar8 = ((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data)->Object->NodeId;
        if ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data)->Object ==
             (FPCGGraphActiveTask *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        RemoveTaskFromInputSuccessors
                  (this,uVar8,&((TSharedPtr<FPCGGraphActiveTask,1> *)FVar31.Data)->Object->Inputs);
        bVar17 = CancelNextTasks(this,uVar8,__return_storage_ptr__);
        bVar15 = (bool)(bVar15 & !bVar17);
        FVar31.Data = FVar31.Data + 0x10;
      }
      DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>
                ((TSharedPtr<FPCGGraphActiveTask,1> *)local_1a0.Data,(int)local_198);
      if ((TSharedPtr<FPCGGraphActiveTask,1> *)local_1a0.Data !=
          (TSharedPtr<FPCGGraphActiveTask,1> *)0x0) {
        FMemory::Free(local_1a0.Data);
      }
    } while (!bVar15);
    if (local_1e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data);
    }
  }
  LOCK();
  this->SchedulingDisabled = (atomic<bool>)0x0;
  UNLOCK();
  return __return_storage_ptr__;
  while (uVar23 = puVar36[(longlong)iVar18 + 1], uVar23 == 0) {
LAB_149cb2130:
    iVar18 = (int)pIVar24;
    local_c8 = (int)pIVar34 + 0x20;
    pIVar34 = (IPCGGraphExecutionSource *)(ulonglong)local_c8;
    uVar23 = iVar18 + 1;
    pIVar24 = (IPCGGraphExecutionSource *)(ulonglong)uVar23;
    uStack_cc = uVar37;
    if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
    goto LAB_149cb216d;
  }
LAB_149cb2148:
  local_c8 = (uint)pIVar34;
  uStack_dc = -uVar23 & uVar23;
  uVar33 = (ulonglong)uStack_dc * 2 + 1;
  lVar44 = 0x3f;
  if (uVar33 != 0) {
    for (; uVar33 >> lVar44 == 0; lVar44 = lVar44 + -1) {
    }
  }
  local_108 = (int)lVar44;
  uStack_cc = local_108 + -1 + local_c8;
  if ((int)uVar37 < (int)uStack_cc) {
    uStack_cc = uVar37;
  }
LAB_149cb216d:
  pTVar42 = (TBitArray<FDefaultBitArrayAllocator> *)
            &(pFVar9->DynamicDependencies).Elements.field_0x10;
  uStack_c4 = local_4c;
  iStack_c0 = *(int *)&(pFVar9->DynamicDependencies).Elements.field_0x8 -
              *(int *)&(pFVar9->DynamicDependencies).Elements.field_0x34;
  uVar37 = *(uint *)&(pFVar9->DynamicDependencies).Elements.field_0x28;
  uStack_e0 = SUB84(pIVar24,0);
  TStack_b0._padding_ = CONCAT44(uStack_dc,uStack_e0);
  uVar23 = uVar37 & 0xffffffe0;
  uStack_d0 = 0xffffffff;
  TStack_b0.CurrentBitIndex = uStack_cc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar37 >> 5;
  TStack_b0._28_4_ = local_4c;
  TStack_b0.BaseBitIndex = local_c8;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  local_120 = pTVar42;
  local_118 = pTVar40;
  local_e8 = pTVar40;
  local_b8 = pTVar40;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
  if (((int)uVar37 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
               *)(*pcVar13)();
    return pTVar20;
  }
  uVar19 = *(uint *)&(pFVar9->DynamicDependencies).Elements.field_0x28;
  local_1e8 = uVar37;
  if (uVar37 != uVar19) {
    puVar11 = *(undefined1 **)&(pFVar9->DynamicDependencies).Elements.field_0x20;
    puVar35 = (undefined1 *)pTVar42;
    if (puVar11 != (undefined1 *)0x0) {
      puVar35 = puVar11;
    }
    uVar37 = -1 << ((byte)uVar37 & 0x1f) & *(uint *)(puVar35 + (longlong)iVar18 * 4);
    while (uVar37 == 0) {
      lVar44 = (longlong)iVar18;
      uVar23 = uVar23 + 0x20;
      iVar18 = iVar18 + 1;
      uVar37 = uVar19;
      local_1e8 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_149cb22a3;
      uVar37 = *(uint *)(puVar35 + lVar44 * 4 + 4);
    }
    uVar33 = (ulonglong)(-uVar37 & uVar37) * 2 + 1;
    lVar44 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar44 == 0; lVar44 = lVar44 + -1) {
      }
    }
    local_104 = (int)lVar44;
    uVar37 = local_104 + -1 + uVar23;
    local_1e8 = uVar37;
    if ((int)uVar19 < (int)uVar37) {
      uVar37 = uVar19;
      local_1e8 = uVar19;
    }
  }
LAB_149cb22a3:
  while( true ) {
    pTVar14 = local_b8;
    if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
        (int)uStack_90) {
      local_1ca = 0;
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1ca);
    }
    if (((TStack_b0.CurrentBitIndex == uVar37) && (TStack_b0.Array == pTVar42)) &&
       (pTVar14 == pTVar40)) break;
    uVar33 = *(ulonglong *)
              (*(longlong *)&pTVar14->Elements + (longlong)TStack_b0.CurrentBitIndex * 0x10);
    local_128 = uVar33;
    if (*(int *)&(this->PausedTaskSuccessors).field_0x8 !=
        *(int *)&(this->PausedTaskSuccessors).field_0x34) {
      puVar11 = *(undefined1 **)&(this->PausedTaskSuccessors).field_0x40;
      puVar35 = &(this->PausedTaskSuccessors).field_0x38;
      if (puVar11 != (undefined1 *)0x0) {
        puVar35 = puVar11;
      }
      iVar18 = *(int *)(puVar35 +
                       ((uVar33 >> 0x20) * 0x17 + uVar33 &
                       (ulonglong)(*(int *)&(this->PausedTaskSuccessors).field_0x48 - 1)) * 4);
      if (iVar18 != -1) {
LAB_149cb2350:
        puVar25 = (ulonglong *)((longlong)iVar18 * 0x20 + *(longlong *)&this->PausedTaskSuccessors);
        if (*puVar25 != uVar33) goto code_r0x000149cb235f;
        puVar29 = puVar25 + 1;
        if (puVar25 == (ulonglong *)0x0) {
          puVar29 = (ulonglong *)0x0;
        }
        local_130 = puVar29;
        if (puVar29 == (ulonglong *)0x0) goto LAB_149cb2564;
        if ((((TSharedPtr<FPCGGraphActiveTask,1> *)*puVar29 <= &local_1c8) &&
            (&local_1c8 <
             (TSharedPtr<FPCGGraphActiveTask,1> *)*puVar29 + *(int *)((longlong)puVar29 + 0xc))) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
                     *)(*pcVar13)();
          return pTVar20;
        }
        uVar30 = 0;
        lVar44 = (longlong)(int)puVar29[1];
        if ((int)puVar29[1] != 0) {
          plVar46 = (longlong *)*puVar29;
          bVar17 = (FPCGGraphActiveTask *)*plVar46 != local_1c8.Object;
          uVar33 = uVar30;
          uVar39 = uVar30;
          local_170 = plVar46;
          do {
            iVar18 = (int)uVar33;
            uVar30 = uVar30 + 1;
            uVar33 = (ulonglong)(iVar18 + 1);
            if ((longlong)uVar30 < lVar44) {
              plVar22 = plVar46 + uVar30 * 2;
              do {
                plVar46 = local_170;
                if (bVar17 != ((FPCGGraphActiveTask *)*plVar22 != local_1c8.Object)) break;
                uVar33 = (ulonglong)((int)uVar33 + 1);
                uVar30 = uVar30 + 1;
                plVar22 = plVar22 + 2;
              } while ((longlong)uVar30 < lVar44);
            }
            iVar43 = (int)uVar33 - iVar18;
            if (bVar17 == false) {
              DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>
                        ((TSharedPtr<FPCGGraphActiveTask,1> *)(plVar46 + (longlong)iVar18 * 2),
                         iVar43);
            }
            else {
              iVar38 = (int)uVar39;
              if (iVar38 != iVar18) {
                memmove(plVar46 + (longlong)iVar38 * 2,plVar46 + (longlong)iVar18 * 2,
                        (longlong)iVar43 << 4);
              }
              uVar39 = (ulonglong)(uint)(iVar38 + iVar43);
            }
            bVar17 = (bool)(bVar17 ^ 1);
          } while ((longlong)uVar30 < lVar44);
          *(int *)(local_130 + 1) = (int)uVar39;
          uVar33 = local_128;
          pTVar40 = local_118;
          pTVar42 = local_120;
          uVar37 = local_1e8;
          if ((int)uVar39 != 0) goto LAB_149cb2564;
        }
        if (*(int *)&(this->PausedTaskSuccessors).field_0x8 !=
            *(int *)&(this->PausedTaskSuccessors).field_0x34) {
          puVar11 = *(undefined1 **)&(this->PausedTaskSuccessors).field_0x40;
          puVar35 = &(this->PausedTaskSuccessors).field_0x38;
          if (puVar11 != (undefined1 *)0x0) {
            puVar35 = puVar11;
          }
          iVar18 = *(int *)(puVar35 +
                           ((longlong)*(int *)&(this->PausedTaskSuccessors).field_0x48 - 1U &
                           (longlong)((int)(uVar33 >> 0x20) * 0x17 + (int)uVar33)) * 4);
          if (iVar18 != -1) {
            do {
              if (*(ulonglong *)((longlong)iVar18 * 0x20 + *(longlong *)&this->PausedTaskSuccessors)
                  == uVar33) {
                TSet<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                 *)&this->PausedTaskSuccessors,iVar18);
                break;
              }
              iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 +
                               *(longlong *)&this->PausedTaskSuccessors);
            } while (iVar18 != -1);
          }
        }
      }
    }
LAB_149cb2564:
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  if ((local_1c8.Object == (FPCGGraphActiveTask *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
               *)(*pcVar13)();
    return pTVar20;
  }
  ((((local_1c8.Object)->Context).Ptr)->OutputData).bCancelExecution = true;
  if ((local_1c8.Object == (FPCGGraphActiveTask *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    pTVar20 = (TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
               *)(*pcVar13)();
    return pTVar20;
  }
  pFVar9 = ((local_1c8.Object)->Context).Ptr;
  pTVar40 = &pFVar9->DynamicDependencies;
  bVar17 = 1 < (pFVar9->DynamicDependencies).HashSize;
  if (!bVar17) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::UnhashElements
              (pTVar40);
  }
  puVar11 = &(pFVar9->DynamicDependencies).Elements.field_0xc;
  *(undefined4 *)&(pFVar9->DynamicDependencies).Elements.field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pTVar40,0,(int *)puVar11);
  }
  *(undefined4 *)&(pFVar9->DynamicDependencies).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar9->DynamicDependencies).Elements.field_0x34 = 0;
  iVar18 = *(int *)&(pFVar9->DynamicDependencies).Elements.field_0x2c;
  *(undefined4 *)&(pFVar9->DynamicDependencies).Elements.field_0x28 = 0;
  if ((iVar18 < 0) || (0x80 < iVar18)) {
    *(undefined4 *)&(pFVar9->DynamicDependencies).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(pFVar9->DynamicDependencies).Elements.field_0x10,0);
  }
  if (bVar17) {
    (pFVar9->DynamicDependencies).HashSize = 1;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Rehash(pTVar40)
    ;
  }
  uVar37 = (uint)local_1b8;
LAB_149cb268e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  uVar37 = uVar37 - 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,uVar37);
  lVar44 = local_190 + -0x10;
  local_190 = lVar44;
  if ((int)uVar37 < 0) goto LAB_149cb26be;
  goto LAB_149cb1de0;
code_r0x000149cb235f:
  iVar18 = (int)puVar25[3];
  if (iVar18 == -1) goto LAB_149cb2564;
  goto LAB_149cb2350;
}

// Cancel @ 149cb2900

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

TArray<IPCGGraphExecutionSource_*,TSizedDefaultAllocator<32>_> * __thiscall
FPCGGraphExecutor::Cancel
          (FPCGGraphExecutor *this,
          TArray<IPCGGraphExecutionSource_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          IPCGGraphExecutionSource *param_1)

{
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 auStack_a8 [32];
  IPCGGraphExecutionSource *local_88;
  code *local_80;
  IPCGGraphExecutionSource **local_78;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = &local_88;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGGraphExecutor::Cancel'::__l2::<lambda_1>,bool,TWeakInterfacePtr<IPCGGraphExecutionSource>_>
             ::Call;
  local_88 = param_1;
  this_00 = Cancel(this,&local_68,
                   (TFunctionRef<bool___cdecl(TWeakInterfacePtr<IPCGGraphExecutionSource>)> *)
                   &local_80);
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  ::Array(this_00,__return_storage_ptr__);
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<IPCGGraphExecutionSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IPCGGraphExecutionSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return __return_storage_ptr__;
}

// Cancel @ 149cb29a0

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
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TArray<IPCGGraphExecutionSource_*,TSizedDefaultAllocator<32>_> * __thiscall
FPCGGraphExecutor::Cancel
          (FPCGGraphExecutor *this,
          TArray<IPCGGraphExecutionSource_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPCGGraph *param_1)

{
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 auStack_a8 [32];
  UPCGGraph *local_88;
  code *local_80;
  UPCGGraph **local_78;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = &local_88;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGGraphExecutor::Cancel'::__l2::<lambda_1>,bool,TWeakInterfacePtr<IPCGGraphExecutionSource>_>
             ::Call;
  local_88 = param_1;
  this_00 = Cancel(this,&local_68,
                   (TFunctionRef<bool___cdecl(TWeakInterfacePtr<IPCGGraphExecutionSource>)> *)
                   &local_80);
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  ::Array(this_00,__return_storage_ptr__);
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<IPCGGraphExecutionSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IPCGGraphExecutionSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return __return_storage_ptr__;
}

// CancelAll @ 149cb2a40

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

TArray<IPCGGraphExecutionSource_*,TSizedDefaultAllocator<32>_> * __thiscall
FPCGGraphExecutor::CancelAll
          (FPCGGraphExecutor *this,
          TArray<IPCGGraphExecutionSource_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  code *local_80;
  undefined1 *local_78;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = local_88;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGGraphExecutor::CancelAll'::__l2::<lambda_1>,bool,TWeakInterfacePtr<IPCGGraphExecutionSource>_>
             ::Call;
  this_00 = Cancel(this,&local_68,
                   (TFunctionRef<bool___cdecl(TWeakInterfacePtr<IPCGGraphExecutionSource>)> *)
                   &local_80);
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  ::Array(this_00,__return_storage_ptr__);
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<IPCGGraphExecutionSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IPCGGraphExecutionSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return __return_storage_ptr__;
}

// CancelNextTasks @ 149cb2ae0

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

bool __thiscall
FPCGGraphExecutor::CancelNextTasks
          (FPCGGraphExecutor *this,ulong64 param_1,
          TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  undefined1 *puVar3;
  ForElementType<FSetElementId> FVar4;
  ulong64 uVar5;
  FPCGContext *pFVar6;
  code *pcVar7;
  FPCGGraphExecutor *this_00;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar11;
  ulonglong *puVar12;
  FScriptContainerElement *pFVar13;
  IPCGGraphExecutionSource *pIVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ForElementType<FSetElementId> FVar17;
  int iVar18;
  TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *pTVar19;
  IPCGGraphExecutionSource *pIVar20;
  atomic<bool> *paVar21;
  ulong64 *puVar22;
  FScriptContainerElement *pFVar23;
  byte bVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  uint *puVar27;
  ulonglong uVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar32;
  ulong64 *puVar33;
  longlong *plVar34;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  byte local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5;
  undefined1 local_1e4;
  undefined1 local_1e3 [3];
  atomic<bool> *local_1e0;
  FPCGGraphExecutor *local_1d8;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  *local_1d0;
  TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> local_1c8;
  longlong *local_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  TBitArray<FDefaultBitArrayAllocator> *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  uint local_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  ulong64 local_188;
  int local_180;
  int local_17c;
  undefined8 local_178;
  int local_170;
  undefined1 local_16c [12];
  FScriptContainerElement *local_160;
  ulonglong local_158;
  IPCGGraphExecutionSource *local_150;
  longlong local_148;
  atomic<bool> *local_140;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  undefined4 local_bc;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1d8 = this;
  local_1d0 = param_2;
  local_188 = param_1;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0x824,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  local_6c = 0x80;
  local_98._0_8_ = 0;
  paVar21 = &(this->TasksLock).bFlag;
  local_1e8 = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar26 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_1e0 = paVar21;
  if ((paVar21 == (atomic<bool> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  LOCK();
  aVar2 = ((FSpinLock *)paVar21)->bFlag;
  ((FSpinLock *)paVar21)->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = ((FSpinLock *)paVar21)->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = ((FSpinLock *)paVar21)->bFlag;
    }
    LOCK();
    aVar2 = ((FSpinLock *)paVar21)->bFlag;
    ((FSpinLock *)paVar21)->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pTVar11 = TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
            ::Find((TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
                    *)&this->TaskSuccessors,param_1);
  if (pTVar11 !=
      (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)0x0) {
    if ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)local_98
        != pTVar11) {
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Move<TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>
                ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 local_98,pTVar11);
    }
    TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
    ::Remove((TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
              *)&this->TaskSuccessors,param_1);
    uVar29 = local_70;
    uStack_1ac = 1;
    local_198 = 0;
    uStack_19c = local_198;
    if (local_70 != 0) {
      puVar27 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar27 = local_78;
      }
      uVar31 = *puVar27;
      local_198 = 0;
      uVar26 = 0;
      while (uVar31 == 0) {
        lVar15 = (longlong)(int)uVar26;
        local_198 = local_198 + 0x20;
        uVar26 = uVar26 + 1;
        uStack_19c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
        goto LAB_149cb2cd0;
        uVar31 = puVar27[lVar15 + 1];
      }
      uStack_1ac = -uVar31 & uVar31;
      uVar28 = (ulonglong)uStack_1ac * 2 + 1;
      lVar15 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_180 = (int)lVar15;
      uStack_19c = local_180 + -1 + local_198;
      if ((int)local_70 < (int)uStack_19c) {
        uStack_19c = local_70;
      }
    }
LAB_149cb2cd0:
    local_1b8 = (longlong *)local_98;
    uStack_194 = local_bc;
    local_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar31 = local_70 & 0xffffffe0;
    iStack_190 = local_98._8_4_ - local_64;
    TStack_130._padding_ = CONCAT44(uStack_1ac,uVar26);
    uStack_1a0 = 0xffffffff;
    TStack_130.CurrentBitIndex = uStack_19c;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)local_70 >> 5;
    TStack_130._28_4_ = local_bc;
    TStack_130.BaseBitIndex = local_198;
    uStack_110 = CONCAT44(uStack_18c,iStack_190);
    bVar24 = (byte)local_70;
    uStack_1b0 = uVar26;
    local_138 = local_1b8;
    TStack_130.Array = local_1a8;
    if (((int)local_70 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    param_2 = local_1d0;
    this_00 = local_1d8;
    if (uVar29 != local_70) {
      puVar27 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar27 = local_78;
      }
      uVar26 = -1 << (bVar24 & 0x1f) & puVar27[iVar18];
      while (uVar26 == 0) {
        lVar15 = (longlong)iVar18;
        uVar31 = uVar31 + 0x20;
        iVar18 = iVar18 + 1;
        uVar29 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_149cb2df1;
        uVar26 = puVar27[lVar15 + 1];
      }
      uVar28 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_17c = (int)lVar15;
      uVar29 = local_17c + -1 + uVar31;
      if ((int)local_70 < (int)uVar29) {
        uVar29 = local_70;
      }
    }
LAB_149cb2df1:
LAB_149cb2e10:
    plVar34 = local_138;
    if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
      local_1e7 = 0;
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1e7);
    }
    if (((TStack_130.CurrentBitIndex != uVar29) ||
        (TStack_130.Array != (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) ||
       (paVar21 = local_1e0, this = local_1d8, plVar34 != (longlong *)local_98)) {
      uVar28 = *(ulonglong *)(*plVar34 + (longlong)TStack_130.CurrentBitIndex * 0x10);
      if (*(int *)&(this_00->Tasks).field_0x8 != *(int *)&(this_00->Tasks).field_0x34) {
        puVar3 = *(undefined1 **)&(this_00->Tasks).field_0x40;
        puVar16 = &(this_00->Tasks).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar16 = puVar3;
        }
        iVar18 = *(int *)(puVar16 +
                         ((ulonglong)(*(int *)&(this_00->Tasks).field_0x48 - 1) &
                         (uVar28 >> 0x20) * 0x17 + uVar28) * 4);
        if (iVar18 != -1) {
          do {
            puVar12 = (ulonglong *)((longlong)iVar18 * 0x158 + *(longlong *)&this_00->Tasks);
            if (*puVar12 == uVar28) {
              pTVar19 = (TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *)(puVar12 + 1);
              if (puVar12 == (ulonglong *)0x0) {
                pTVar19 = (TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *)0x0;
              }
              if (pTVar19 != (TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *)0x0) {
                if ((pTVar19[9].AllocatorInstance.Data == (FScriptContainerElement *)0x0) ||
                   (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pTVar19[8].ArrayNum), !bVar8)
                   ) {
                  pFVar13 = (FScriptContainerElement *)0x0;
                }
                else {
                  pFVar13 = pTVar19[9].AllocatorInstance.Data;
                }
                uVar26 = ((uint)((ulonglong)pFVar13 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pFVar13 >> 4)) * -0x7a143595;
                uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
                if (*(int *)&(param_2->Elements).field_0x8 ==
                    *(int *)&(param_2->Elements).field_0x34) goto LAB_149cb2f94;
                FVar4 = (param_2->Hash).SecondaryData;
                FVar17 = (ForElementType<FSetElementId>)&param_2->Hash;
                if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                  FVar17 = FVar4;
                }
                iVar18 = *(int *)((longlong)FVar17 +
                                 (ulonglong)(param_2->HashSize - 1U & (uVar26 >> 0x10 ^ uVar26)) * 4
                                 );
                if (iVar18 == -1) goto LAB_149cb2f94;
                goto LAB_149cb2f80;
              }
              break;
            }
            iVar18 = (int)puVar12[0x2a];
          } while (iVar18 != -1);
        }
      }
      goto LAB_149cb301e;
    }
  }
  uVar26 = local_70;
  if (paVar21 != (atomic<bool> *)0x0) {
    *paVar21 = (atomic<bool>)0x0;
  }
  uStack_1b0 = 0;
  local_198 = 0;
  uStack_1ac = 1;
  uStack_19c = 0;
  if (local_70 != 0) {
    puVar27 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar27 = local_78;
    }
    uVar29 = *puVar27;
    local_198 = 0;
    uStack_1b0 = 0;
    while (uVar29 == 0) {
      lVar15 = (longlong)(int)uStack_1b0;
      local_198 = local_198 + 0x20;
      uStack_1b0 = uStack_1b0 + 1;
      uStack_19c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1b0)
      goto LAB_149cb30e0;
      uVar29 = puVar27[lVar15 + 1];
    }
    uStack_1ac = -uVar29 & uVar29;
    uVar28 = (ulonglong)uStack_1ac * 2 + 1;
    lVar15 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_178._4_4_ = (int)lVar15;
    uStack_19c = local_198 + -1 + local_178._4_4_;
    if ((int)local_70 < (int)uStack_19c) {
      uStack_19c = local_70;
    }
  }
LAB_149cb30e0:
  local_1b8 = (longlong *)local_98;
  uVar29 = local_70 & 0xffffffe0;
  uStack_194 = local_9c;
  local_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_190 = local_98._8_4_ - local_64;
  uStack_1a0 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_19c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_1ac,uStack_1b0);
  iVar18 = (int)local_70 >> 5;
  TStack_100._28_4_ = local_9c;
  TStack_100.BaseBitIndex = local_198;
  uStack_e0 = CONCAT44(uStack_18c,iStack_190);
  bVar24 = (byte)local_70;
  local_108 = local_1b8;
  TStack_100.Array = local_1a8;
  if (((int)local_70 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if (uVar26 != local_70) {
    puVar27 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar27 = local_78;
    }
    uVar26 = -1 << (bVar24 & 0x1f) & puVar27[iVar18];
    while (uVar26 == 0) {
      lVar15 = (longlong)iVar18;
      uVar29 = uVar29 + 0x20;
      iVar18 = iVar18 + 1;
      uVar26 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_149cb31f5;
      uVar26 = puVar27[lVar15 + 1];
    }
    uVar28 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_170 = (int)lVar15;
    uVar26 = (uVar29 - 1) + local_170;
    if ((int)local_70 < (int)uVar26) {
      uVar26 = local_70;
    }
  }
LAB_149cb31f5:
  bVar24 = local_1e8;
  while( true ) {
    plVar34 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      local_1e6 = 0;
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1e6);
    }
    if (((TStack_100.CurrentBitIndex == uVar26) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar34 == (longlong *)local_98)) break;
    bVar8 = CancelNextTasks(this,*(ulong64 *)
                                  (*plVar34 + (longlong)TStack_100.CurrentBitIndex * 0x10),param_2);
    bVar24 = bVar24 | bVar8;
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  paVar21 = &(this->PausedTaskSuccessorsLock).bFlag;
  local_1e8 = bVar24;
  local_1e0 = paVar21;
  if ((paVar21 == (atomic<bool> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  LOCK();
  aVar2 = ((FSpinLock *)paVar21)->bFlag;
  ((FSpinLock *)paVar21)->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = ((FSpinLock *)paVar21)->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = ((FSpinLock *)paVar21)->bFlag;
    }
    LOCK();
    aVar2 = ((FSpinLock *)paVar21)->bFlag;
    ((FSpinLock *)paVar21)->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  bVar8 = TMap<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>_>
          ::RemoveAndCopyValue(&this->PausedTaskSuccessors,local_188,&local_1c8);
  if (bVar8) {
    iVar18 = local_1c8.ArrayNum;
    pTVar32 = (TSharedPtr<FPCGGraphActiveTask,1> *)
              (local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayNum * 0x10);
    pIVar20 = (IPCGGraphExecutionSource *)0x0;
    FVar25.Data = local_1c8.AllocatorInstance.Data;
    while( true ) {
      if (local_1c8.ArrayNum != iVar18) {
        local_1e5 = 0;
        `TCheckedPointerIterator<TSharedPtr<FPCGGraphActiveTask,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1e5);
      }
      paVar21 = local_1e0;
      this = local_1d8;
      if ((TSharedPtr<FPCGGraphActiveTask,1> *)FVar25.Data == pTVar32) break;
      if ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar25.Data)->Object == (FPCGGraphActiveTask *)0x0)
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar6 = (((TSharedPtr<FPCGGraphActiveTask,1> *)FVar25.Data)->Object->Context).Ptr;
      pIVar14 = pIVar20;
      if (((pFVar6->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar6->ExecutionSource), bVar8)) {
        pIVar14 = (pFVar6->ExecutionSource).InterfaceInstance;
      }
      uVar26 = ((uint)((ulonglong)pIVar14 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar14 >> 4)) *
               -0x7a143595;
      uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
      if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
        FVar4 = (param_2->Hash).SecondaryData;
        FVar17 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar17 = FVar4;
        }
        iVar10 = *(int *)((longlong)FVar17 +
                         (ulonglong)(param_2->HashSize - 1U & (uVar26 >> 0x10 ^ uVar26)) * 4);
        if (iVar10 != -1) {
          do {
            if (*(IPCGGraphExecutionSource **)
                 (*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x10) == pIVar14)
            goto LAB_149cb3463;
            iVar10 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar10 * 0x10);
          } while (iVar10 != -1);
        }
      }
      if ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar25.Data)->Object == (FPCGGraphActiveTask *)0x0)
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar6 = (((TSharedPtr<FPCGGraphActiveTask,1> *)FVar25.Data)->Object->Context).Ptr;
      pIVar14 = pIVar20;
      if (((pFVar6->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar6->ExecutionSource), bVar8)) {
        pIVar14 = (pFVar6->ExecutionSource).InterfaceInstance;
      }
      local_150 = pIVar14;
      TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
      ::Emplace<IPCGGraphExecutionSource_*>
                (param_2,(IPCGGraphExecutionSource **)local_16c,(bool *)&local_150);
      local_1e8 = 1;
LAB_149cb3463:
      FVar25.Data = FVar25.Data + 0x10;
    }
  }
  FVar25.Data = local_1c8.AllocatorInstance.Data;
  DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>
            ((TSharedPtr<FPCGGraphActiveTask,1> *)local_1c8.AllocatorInstance.Data,
             local_1c8.ArrayNum);
  if ((TSharedPtr<FPCGGraphActiveTask,1> *)FVar25.Data != (TSharedPtr<FPCGGraphActiveTask,1> *)0x0)
  {
    FMemory::Free(FVar25.Data);
  }
  if (paVar21 != (atomic<bool> *)0x0) {
    *paVar21 = (atomic<bool>)0x0;
  }
  pFVar1 = &this->ScheduleLock;
  local_140 = &pFVar1->bFlag;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar30 = (this->ScheduledTasks).AllocatorInstance.Data;
  iVar18 = (this->ScheduledTasks).ArrayNum;
  pFVar13 = pFVar30 + 0x18;
  pFVar23 = pFVar30 + (longlong)iVar18 * 0x30;
  local_1e0 = (atomic<bool> *)pFVar23;
  do {
    uVar28 = 0;
    if ((this->ScheduledTasks).ArrayNum != iVar18) {
      local_1e4 = 0;
      `TCheckedPointerIterator<FPCGGraphScheduleTask,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1e4);
    }
    if (pFVar30 == pFVar23) {
      if (local_140 != (atomic<bool> *)0x0) {
        *local_140 = (atomic<bool>)0x0;
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return (bool)local_1e8;
    }
    if ((*(longlong *)pFVar13 != 0) &&
       (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar13 + -8)), bVar8)) {
      uVar28 = *(ulonglong *)pFVar13;
    }
    uVar26 = ((uint)(uVar28 >> 0x14) & 0xffff ^ (uint)(uVar28 >> 4)) * -0x7a143595;
    uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
    if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
      FVar4 = (param_2->Hash).SecondaryData;
      FVar17 = (ForElementType<FSetElementId>)&param_2->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = FVar4;
      }
      iVar10 = *(int *)((longlong)FVar17 +
                       (ulonglong)(param_2->HashSize - 1U & (uVar26 >> 0x10 ^ uVar26)) * 4);
      if (iVar10 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x10) == uVar28)
          goto LAB_149cb36c5;
          iVar10 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar10 * 0x10);
        } while (iVar10 != -1);
      }
    }
    uVar26 = *(uint *)(pFVar13 + 8);
    uVar29 = 0;
    if ((int)uVar26 < *(int *)(pFVar13 + -0x10)) {
      uVar29 = ~uVar26 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (local_1f8 = (longlong)(int)uVar26, local_1f0 = (longlong)*(int *)(pFVar13 + -0x10),
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    plVar34 = (longlong *)((longlong)(int)uVar26 * 0x148 + *(longlong *)pFVar30);
    lVar15 = plVar34[1];
    puVar22 = (ulong64 *)*plVar34;
    puVar33 = puVar22 + (longlong)(int)lVar15 * 0x10;
    while( true ) {
      if ((int)plVar34[1] != (int)lVar15) {
        local_1e3[0] = 0;
        `TCheckedPointerIterator<FPCGGraphTaskInput_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1e3);
      }
      pFVar23 = (FScriptContainerElement *)local_1e0;
      param_2 = local_1d0;
      this = local_1d8;
      if (puVar22 == puVar33) goto LAB_149cb36c5;
      if (*puVar22 == local_188) break;
      puVar22 = puVar22 + 0x10;
    }
    if ((*(longlong *)pFVar13 == 0) ||
       (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar13 + -8)), !bVar8)) {
      local_148 = 0;
    }
    else {
      local_148 = *(longlong *)pFVar13;
    }
    param_2 = local_1d0;
    TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
    ::Emplace<IPCGGraphExecutionSource_*>
              (local_1d0,(IPCGGraphExecutionSource **)(local_16c + 4),(bool *)&local_148);
    local_1e8 = 1;
    pFVar23 = (FScriptContainerElement *)local_1e0;
    this = local_1d8;
LAB_149cb36c5:
    pFVar30 = pFVar30 + 0x30;
    pFVar13 = pFVar13 + 0x30;
  } while( true );
  while (iVar18 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar18 * 0x10),
        iVar18 != -1) {
LAB_149cb2f80:
    if (*(FScriptContainerElement **)(*(longlong *)&param_2->Elements + (longlong)iVar18 * 0x10) ==
        pFVar13) goto LAB_149cb2fcb;
  }
LAB_149cb2f94:
  if ((pTVar19[9].AllocatorInstance.Data == (FScriptContainerElement *)0x0) ||
     (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pTVar19[8].ArrayNum), !bVar8)) {
    local_160 = (FScriptContainerElement *)0x0;
  }
  else {
    local_160 = pTVar19[9].AllocatorInstance.Data;
  }
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  ::Emplace<IPCGGraphExecutionSource_*>
            (param_2,(IPCGGraphExecutionSource **)&local_178,(bool *)&local_160);
  local_1e8 = 1;
LAB_149cb2fcb:
  if (*(IPCGElement **)&pTVar19[7].ArrayNum != (IPCGElement *)0x0) {
    IPCGElement::Abort(*(IPCGElement **)&pTVar19[7].ArrayNum,
                       (FPCGContext *)pTVar19[10].AllocatorInstance.Data);
  }
  uVar5._0_4_ = pTVar19[4].ArrayNum;
  uVar5._4_4_ = pTVar19[4].ArrayMax;
  RemoveTaskFromInputSuccessorsNoLock(this_00,uVar5,pTVar19);
  local_158 = uVar28;
  if (*(int *)&(this_00->Tasks).field_0x8 != *(int *)&(this_00->Tasks).field_0x34) {
    TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
                *)&this_00->Tasks,(int)(uVar28 >> 0x20) * 0x17 + (int)uVar28,&local_158);
  }
LAB_149cb301e:
  TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  goto LAB_149cb2e10;
}

// CheckState @ 149cb3740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::CheckState(FPCGGraphExecutor *this,bool param_1)

{
  FSpinLock *pFVar1;
  FSpinLock *pFVar2;
  FSpinLock *pFVar3;
  FSpinLock *pFVar4;
  FSpinLock *pFVar5;
  atomic<bool> aVar6;
  int iVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  LARGE_INTEGER local_res18 [2];
  
  if (!param_1) {
    return;
  }
  if ((this->ScheduledTasks).ArrayNum != 0) {
    return;
  }
  QueryPerformanceCounter(local_res18);
  dVar10 = (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  dVar9 = dVar10 - this->LastSchedulingErrorCheck;
  if (dVar9 < __real_3ff0000000000000) {
    return;
  }
  pFVar1 = &this->ScheduleLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0xb4,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar11 = __real_4008000000000000 <= dVar9;
  LOCK();
  aVar6 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  if (bVar11) {
    while (aVar6 != (atomic<bool>)0x0) {
      aVar6 = pFVar1->bFlag;
      while (aVar6 != (atomic<bool>)0x0) {
        aVar6 = pFVar1->bFlag;
      }
      LOCK();
      aVar6 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    bVar11 = true;
LAB_149cb3839:
    iVar7 = (this->ScheduledTasks).ArrayNum;
    this->LastSchedulingErrorCheck = dVar10;
    if (iVar7 != 0) goto LAB_149cb3a88;
    pFVar2 = &this->TasksLock;
    if ((pFVar2 == (FSpinLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0xb4,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    LOCK();
    aVar6 = pFVar2->bFlag;
    pFVar2->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar6 != (atomic<bool>)0x0) {
      aVar6 = pFVar2->bFlag;
      while (aVar6 != (atomic<bool>)0x0) {
        aVar6 = pFVar2->bFlag;
      }
      LOCK();
      aVar6 = pFVar2->bFlag;
      pFVar2->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    pFVar3 = &this->LiveTasksLock;
    if ((pFVar3 == (FSpinLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0xb4,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    LOCK();
    aVar6 = pFVar3->bFlag;
    pFVar3->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar6 != (atomic<bool>)0x0) {
      aVar6 = pFVar3->bFlag;
      while (aVar6 != (atomic<bool>)0x0) {
        aVar6 = pFVar3->bFlag;
      }
      LOCK();
      aVar6 = pFVar3->bFlag;
      pFVar3->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    pFVar4 = &this->PausedTaskSuccessorsLock;
    if ((pFVar4 == (FSpinLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0xb4,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    LOCK();
    aVar6 = pFVar4->bFlag;
    pFVar4->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar6 != (atomic<bool>)0x0) {
      aVar6 = pFVar4->bFlag;
      while (aVar6 != (atomic<bool>)0x0) {
        aVar6 = pFVar4->bFlag;
      }
      LOCK();
      aVar6 = pFVar4->bFlag;
      pFVar4->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    pFVar5 = &this->CachingResultsLock;
    if ((pFVar5 == (FSpinLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0xb4,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    LOCK();
    aVar6 = pFVar5->bFlag;
    pFVar5->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar6 != (atomic<bool>)0x0) {
      aVar6 = pFVar5->bFlag;
      while (aVar6 != (atomic<bool>)0x0) {
        aVar6 = pFVar5->bFlag;
      }
      LOCK();
      aVar6 = pFVar5->bFlag;
      pFVar5->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    if ((((*(int *)&(this->CachingResultsForGC).field_0x8 ==
           *(int *)&(this->CachingResultsForGC).field_0x34) && ((this->ReadyTasks).ArrayNum == 0))
        && ((this->ActiveTasks).ArrayNum == 0)) &&
       ((((this->ActiveTasksGameThreadOnly).ArrayNum == 0 && ((this->PausedTasks).ArrayNum == 0)) &&
        (0 < *(int *)&(this->Tasks).field_0x8 - *(int *)&(this->Tasks).field_0x34)))) {
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      ClearAllTasks(this);
    }
    if (pFVar5 != (FSpinLock *)0x0) {
      pFVar5->bFlag = (atomic<bool>)0x0;
    }
    if (pFVar4 != (FSpinLock *)0x0) {
      pFVar4->bFlag = (atomic<bool>)0x0;
    }
    if (pFVar3 != (FSpinLock *)0x0) {
      pFVar3->bFlag = (atomic<bool>)0x0;
    }
    if (pFVar2 != (FSpinLock *)0x0) {
      pFVar2->bFlag = (atomic<bool>)0x0;
    }
  }
  else {
    bVar11 = aVar6 == (atomic<bool>)0x0;
    if (aVar6 == (atomic<bool>)0x0) goto LAB_149cb3839;
  }
  if (!bVar11) {
    return;
  }
LAB_149cb3a88:
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  return;
}

// ClearAllTasks @ 149cb4880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::ClearAllTasks(FPCGGraphExecutor *this)

{
  int *piVar1;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FPCGGraphTask *pFVar4;
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
           *)&this->Tasks);
  TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)&this->TaskSuccessors);
  pTVar2 = &this->ReadyTasks;
  iVar3 = (this->ReadyTasks).ArrayNum;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar3 * 0x148;
  while( true ) {
    if ((this->ReadyTasks).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) break;
    FPCGContext::Release(*(FPCGContext **)(pFVar6 + 0xa0));
    pFVar6 = pFVar6 + 0x148;
  }
  piVar1 = &(this->ReadyTasks).ArrayMax;
  pFVar4 = (FPCGGraphTask *)(pTVar2->AllocatorInstance).Data;
  iVar3 = (this->ReadyTasks).ArrayNum;
  if ((this->ReadyTasks).ArrayMax < 0) {
    DestructItems<FPCGGraphTask,int>(pFVar4,iVar3);
    (this->ReadyTasks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x148,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPCGGraphTask,int>(pFVar4,iVar3);
    (this->ReadyTasks).ArrayNum = 0;
  }
  piVar1 = &(this->ActiveTasks).ArrayMax;
  pTVar5 = (TSharedPtr<FPCGGraphActiveTask,1> *)(this->ActiveTasks).AllocatorInstance.Data;
  iVar3 = (this->ActiveTasks).ArrayNum;
  if ((this->ActiveTasks).ArrayMax < 0) {
    DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>(pTVar5,iVar3);
    (this->ActiveTasks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ActiveTasks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>(pTVar5,iVar3);
    (this->ActiveTasks).ArrayNum = 0;
  }
  piVar1 = &(this->ActiveTasksGameThreadOnly).ArrayMax;
  pTVar5 = (TSharedPtr<FPCGGraphActiveTask,1> *)
           (this->ActiveTasksGameThreadOnly).AllocatorInstance.Data;
  iVar3 = (this->ActiveTasksGameThreadOnly).ArrayNum;
  if ((this->ActiveTasksGameThreadOnly).ArrayMax < 0) {
    DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>(pTVar5,iVar3);
    (this->ActiveTasksGameThreadOnly).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ActiveTasksGameThreadOnly).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>(pTVar5,iVar3);
    (this->ActiveTasksGameThreadOnly).ArrayNum = 0;
  }
  piVar1 = &(this->PausedTasks).ArrayMax;
  pTVar5 = (TSharedPtr<FPCGGraphActiveTask,1> *)(this->PausedTasks).AllocatorInstance.Data;
  iVar3 = (this->PausedTasks).ArrayNum;
  if ((this->PausedTasks).ArrayMax < 0) {
    DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>(pTVar5,iVar3);
    (this->PausedTasks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PausedTasks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>(pTVar5,iVar3);
    (this->PausedTasks).ArrayNum = 0;
  }
  TSet<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->PausedTaskSuccessors);
  return;
}

// ClearOutputData @ 149cb5020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::ClearOutputData(FPCGGraphExecutor *this,ulong64 param_1)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  code *pcVar3;
  bool bVar4;
  FOutputDataInfo *pFVar5;
  bool bVar6;
  ulong64 local_res8;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId843,"FPCGGraphExecutor::ClearOutputData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x34b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId843);
  }
  pFVar1 = &this->TaskOutputsLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar5 = TMapBase<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
           ::Find((TMapBase<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
                   *)&this->TaskOutputs,param_1);
  if (pFVar5 != (FOutputDataInfo *)0x0) {
    if (pFVar5->bNeedsManualClear == false) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<834425404453290829>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0x34d,"OutputDataInfo->bNeedsManualClear");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      local_res8 = param_1;
      if (*(int *)&(this->TaskOutputs).field_0x8 != *(int *)&(this->TaskOutputs).field_0x34) {
        TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned___int64>
                  ((TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
                    *)&this->TaskOutputs,(int)(param_1 >> 0x20) * 0x17 + (int)param_1,&local_res8);
      }
    }
  }
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ClearResults @ 149cb5190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::ClearResults(FPCGGraphExecutor *this)

{
  FPCGPerExecutionCache *pFVar1;
  FSpinLock *pFVar2;
  TMap<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
  *pTVar3;
  ulonglong uVar4;
  atomic<bool> aVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
  *local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  uVar10 = 1;
  iVar14 = 0;
  if ((this->ScheduledTasks).ArrayNum == 0) {
    pFVar1 = &this->PerExecutionCache;
    this->NextTaskId = 0;
    if ((pFVar1 == (FPCGPerExecutionCache *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    LOCK();
    aVar5 = (pFVar1->Lock).bFlag;
    (pFVar1->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar5 != (atomic<bool>)0x0) {
      aVar5 = (pFVar1->Lock).bFlag;
      while (aVar5 != (atomic<bool>)0x0) {
        aVar5 = (pFVar1->Lock).bFlag;
      }
      LOCK();
      aVar5 = (pFVar1->Lock).bFlag;
      (pFVar1->Lock).bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    bVar9 = 1 < *(int *)&(this->PerExecutionCache).Entries.field_0x48;
    if (!bVar9) {
      TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
                        *)&(this->PerExecutionCache).Entries);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&(this->PerExecutionCache).Entries,0,
                      *(int *)&(this->PerExecutionCache).Entries.field_0x8);
    puVar19 = &(this->PerExecutionCache).Entries.field_0xc;
    *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x8 = 0;
    if (*(int *)puVar19 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,0,(ForAnyElementType *)&(this->PerExecutionCache).Entries,0,(int *)puVar19);
    }
    *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x34 = 0;
    iVar6 = *(int *)&(this->PerExecutionCache).Entries.field_0x2c;
    *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x28 = 0;
    if ((iVar6 < 0) || (0x80 < iVar6)) {
      *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->PerExecutionCache).Entries.field_0x10,0);
    }
    if (bVar9) {
      *(undefined4 *)&(this->PerExecutionCache).Entries.field_0x48 = 1;
      TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGPerExecutionCacheEntry,0>,FDefaultSetAllocator>
                *)&(this->PerExecutionCache).Entries);
    }
    if (pFVar1 != (FPCGPerExecutionCache *)0x0) {
      (pFVar1->Lock).bFlag = (atomic<bool>)0x0;
    }
  }
  pFVar2 = &this->TaskOutputsLock;
  if ((pFVar2 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  LOCK();
  aVar5 = pFVar2->bFlag;
  pFVar2->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar5 != (atomic<bool>)0x0) {
    aVar5 = pFVar2->bFlag;
    while (aVar5 != (atomic<bool>)0x0) {
      aVar5 = pFVar2->bFlag;
    }
    LOCK();
    aVar5 = pFVar2->bFlag;
    pFVar2->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pTVar3 = &this->TaskOutputs;
  iVar6 = *(int *)&(this->TaskOutputs).field_0x28;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TaskOutputs).field_0x10;
  iVar16 = 0;
  iVar11 = iVar14;
  if (iVar6 != 0) {
    puVar18 = *(uint **)&(this->TaskOutputs).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_98.Array;
    }
    uVar15 = *puVar18;
    iVar16 = 0;
    iVar14 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149cb538f;
      uVar15 = puVar18[lVar12 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar11 = iVar16 + -1 + local_res18;
    if (iVar6 < iVar11) {
      iVar11 = iVar6;
    }
  }
LAB_149cb538f:
  puVar19 = &(this->TaskOutputs).field_0x10;
  uVar15 = *(uint *)&(this->TaskOutputs).field_0x28;
  TStack_98._padding_ = CONCAT44(uVar10,iVar14);
  uVar10 = uVar15 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iVar11;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar16;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(this->TaskOutputs).field_0x8 -
                       *(int *)&(this->TaskOutputs).field_0x34);
  local_res20 = (TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
                 *)pTVar3;
  if ((((int)uVar15 < 0) || (iVar6 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = local_res20;
  uVar7 = *(uint *)&(this->TaskOutputs).field_0x28;
  if (uVar15 != uVar7) {
    puVar17 = *(undefined1 **)&(this->TaskOutputs).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar19;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar14;
      uVar10 = uVar10 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149cb54a0;
      uVar15 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
    }
  }
LAB_149cb54a0:
  while( true ) {
    if (*(int *)&(this->TaskOutputs).field_0x8 - *(int *)&(this->TaskOutputs).field_0x34 !=
        (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar15) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar19)) &&
       ((TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
         *)pTVar3 == this_00)) break;
    lVar12 = (longlong)TStack_98.CurrentBitIndex * 0x50 + *(longlong *)&pTVar3->field_0x0;
    iVar14 = *(int *)(lVar12 + 0x10);
    puVar13 = *(undefined8 **)(lVar12 + 8);
    puVar20 = puVar13 + (longlong)iVar14 * 0xf;
    while( true ) {
      if (*(int *)(lVar12 + 0x10) != iVar14) {
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar13 == puVar20) break;
      if ((UPCGData *)*puVar13 != (UPCGData *)0x0) {
        UPCGData::ClearUsage((UPCGData *)*puVar13,GraphExecutorTaskOutput);
      }
      puVar13 = puVar13 + 0xf;
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  if (pFVar2 != (FSpinLock *)0x0) {
    pFVar2->bFlag = (atomic<bool>)0x0;
  }
  return;
}

// CombineParams @ 149cb5a80

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

void __thiscall FPCGGraphExecutor::CombineParams(FPCGGraphExecutor *this,FPCGGraphTask *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TObjectPtr<UPCGData_const_>_u_0 TVar3;
  FPCGDataCollection *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGData *pUVar9;
  ForAnyElementType FVar10;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar11;
  uint uVar12;
  FPCGTaggedData *pFVar13;
  FPCGDataPtrWrapper *pFVar14;
  byte bVar15;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar16;
  bool bVar17;
  undefined1 auStackY_448 [32];
  ForAnyElementType local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8;
  undefined1 local_3e7 [7];
  TObjectPtr<UPCGData_const_>_u_0 local_3e0;
  FPCGTaggedData *local_3d8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_3d0;
  FPCGGraphTask *local_3c0;
  FPCGDataCollection *local_3b8;
  FPCGMetadataDomainID *local_3b0;
  FPCGMetadataDomainID *local_3a8;
  undefined1 local_3a0 [8];
  initializer_list<TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>_>
  local_398;
  FObjectPtr_u_0 local_388;
  UPCGData *local_380;
  undefined1 local_378 [72];
  undefined4 local_330;
  undefined8 local_328;
  TObjectPtr<UPCGData_const_>_u_0 local_318;
  undefined8 local_310;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_308;
  TObjectPtr<UPCGData_const_>_u_0 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  FPCGContext local_298;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_448;
  bVar17 = -1 < CpuChannel->Enabled;
  local_3c0 = param_1;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2317,"FPCGGraphExecutor::CombineParams",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x90d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2317);
  }
  local_3b8 = &param_1->TaskInput;
  FPCGDataCollection::GetParamsByPin(local_3b8,&local_3d0,&PCGPinConstants::DefaultParamsLabel);
  iVar7 = local_3d0.ArrayNum;
  if (1 < local_3d0.ArrayNum) {
    pUVar9 = (UPCGData *)0x0;
    bVar15 = 1;
    local_3d8 = (FPCGTaggedData *)
                (local_3d0.AllocatorInstance.Data + (longlong)local_3d0.ArrayNum * 0x78);
    FVar10.Data = local_3d0.AllocatorInstance.Data;
    pFVar13 = local_3d8;
    while( true ) {
      if (local_3d0.ArrayNum != iVar7) {
        local_3e8 = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3e8);
      }
      pFVar4 = local_3b8;
      if ((FPCGTaggedData *)FVar10.Data == pFVar13) break;
      local_3e0 = (TObjectPtr<UPCGData_const_>_u_0)
                  (((FPCGTaggedData *)FVar10.Data)->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149cb5b9c:
        if (local_3e0.DebugPtr == (UPCGData *)0x0) goto LAB_149cb5ca6;
        pUVar8 = Z_Construct_UClass_UPCGParamData_NoRegister();
        bVar5 = FObjectPtr::IsA(&local_3e0.ObjectPtr,pUVar8);
        TVar3 = local_3e0;
        if ((!bVar5) || (pFVar13 = local_3d8, local_3e0.DebugPtr == (UPCGData *)0x0))
        goto LAB_149cb5ca6;
        if (pUVar9 != (UPCGData *)0x0) {
          local_398._First =
               (TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&> *)
               &local_3b0;
          local_388.Handle = (UObject *)local_3e0;
          local_398._Last =
               (TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&> *)
               local_3a0;
          local_3b0 = &PCGMetadataDomainID::Default;
          local_3a8 = &PCGMetadataDomainID::Default;
          local_380 = pUVar9;
          TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
          ::
          TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
                    ((TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
                      *)local_378,
                     (initializer_list<TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>_>
                      *)(local_3a0 + 8));
          local_328 = 0;
          bVar5 = PCGMetadataHelpers::CopyAllAttributes((FPCGCopyAllAttributesParams *)&local_388);
          bVar15 = bVar15 & bVar5;
          local_330 = 0;
          if ((void *)local_378._64_8_ != (void *)0x0) {
            FMemory::Free((void *)local_378._64_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_378);
          pFVar13 = local_3d8;
          goto LAB_149cb5ca6;
        }
        FPCGContext::FPCGContext(&local_298);
        local_298.AsyncState.bIsRunningOnMainThread = IsInGameThread();
        pUVar9 = (UPCGData *)
                 (**(code **)((TVar3.DebugPtr)->_padding_ + 0x310))(TVar3.DebugPtr,&local_298,1);
        if ((local_298.AsyncState.bIsRunningOnMainThread == false) &&
           (&local_3c0->CombineParamsAsyncObjects != &local_298.AsyncObjects)) {
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Move<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
                    (&local_3c0->CombineParamsAsyncObjects,&local_298.AsyncObjects);
        }
        FPCGContext::~FPCGContext(&local_298);
        FVar10.Data = FVar10.Data + 0x78;
        pFVar13 = local_3d8;
      }
      else {
        if (local_3e0.DebugPtr != (UPCGData *)0x0) {
          UE::GC::MarkAsReachable((UObject *)local_3e0.DebugPtr);
          goto LAB_149cb5b9c;
        }
LAB_149cb5ca6:
        FVar10.Data = FVar10.Data + 0x78;
      }
    }
    if (bVar15 != 0) {
      uVar12 = ((uint)(pUVar9 != (UPCGData *)0x0) + (local_3c0->TaskInput).TaggedData.ArrayNum) -
               local_3d0.ArrayNum;
      if (((int)uVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewNumberOfInputs >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                             ,0x939,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_3f8.Data = (FScriptContainerElement *)0x0;
      local_3f0 = 0;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,uVar12,&local_3f8,0,(int *)((longlong)&local_3f0 + 4));
      }
      iVar7 = (pFVar4->TaggedData).ArrayNum;
      pTVar11 = (TObjectPtr<UPCGData_const_>_u_0 *)(pFVar4->TaggedData).AllocatorInstance.Data;
      pTVar16 = pTVar11 + (longlong)iVar7 * 0xf;
      while( true ) {
        if ((pFVar4->TaggedData).ArrayNum != iVar7) {
          local_3e7[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_3e7);
        }
        if (pTVar11 == pTVar16) break;
        if ((FName)pTVar11[0xc].DebugPtr != PCGPinConstants::DefaultParamsLabel) {
          if (((local_3f8.Data <= pTVar11) &&
              (pTVar11 < (TObjectPtr<UPCGData_const_>_u_0 *)
                         (local_3f8.Data + (longlong)local_3f0._4_4_ * 0x78))) &&
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
          if ((int)local_3f0 == local_3f0._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,&local_3f8,(int *)((longlong)&local_3f0 + 4));
            local_3f0 = CONCAT44(local_3f0._4_4_,iVar6);
          }
          pFVar14 = (FPCGDataPtrWrapper *)(local_3f8.Data + (longlong)(int)local_3f0 * 0x78);
          local_3f0 = CONCAT44(local_3f0._4_4_,(int)local_3f0 + 1);
          FPCGDataPtrWrapper::FPCGDataPtrWrapper(pFVar14,(FPCGDataPtrWrapper *)&pTVar11->ObjectPtr);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar14 + 1),
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &pTVar11[2].ObjectPtr);
          pFVar14[6].Data.field0_0x0 = pTVar11[0xc];
          *(undefined1 *)&pFVar14[6].WeakData.WeakPtr.ObjectIndex = *(undefined1 *)(pTVar11 + 0xd);
          *(undefined1 *)((longlong)&pFVar14[6].WeakData.WeakPtr.ObjectIndex + 1) =
               *(undefined1 *)((longlong)pTVar11 + 0x69);
          *(undefined8 *)&pFVar14[6].WeakData.WeakPtr.ObjectSerialNumber =
               *(undefined8 *)((longlong)pTVar11 + 0x6c);
          *(undefined4 *)((longlong)&pFVar14[7].Data.field0_0x0 + 4) =
               *(undefined4 *)((longlong)pTVar11 + 0x74);
        }
        pTVar11 = pTVar11 + 0xf;
      }
      if (pUVar9 != (UPCGData *)0x0) {
        local_318.DebugPtr = (UPCGData *)0x0;
        local_308.Elements._0_8_ = 0;
        local_308.Hash.InlineData[0] = '\0';
        local_308.Hash.InlineData[1] = '\0';
        local_308.Hash.InlineData[2] = '\0';
        local_308.Hash.InlineData[3] = '\0';
        local_308.Hash._padding_ = 0;
        local_308.Elements._8_8_ = 0;
        local_308.Elements._32_8_ = 0;
        local_308.Elements._40_8_ = 0x8000000000;
        local_308.Elements._48_8_ = 0xffffffff;
        local_308.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_308._72_8_ = 0;
        local_310 = 0;
        local_308.Elements._16_8_ = 0;
        local_308.Elements._24_8_ = 0;
        local_2b8 = (TObjectPtr<UPCGData_const_>_u_0)0x0;
        local_2b0 = 0x100;
        local_2ac = 0;
        local_2a4 = 0xffffffff;
        FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)&local_318.ObjectPtr,pUVar9);
        local_2b8.ObjectPtr.field0_0x0 = (FObjectPtr)(FObjectPtr)PCGPinConstants::DefaultParamsLabel
        ;
        if (((local_3f8.Data <= &local_318) &&
            (&local_318 <
             (TObjectPtr<UPCGData_const_>_u_0 *)(local_3f8.Data + (longlong)local_3f0._4_4_ * 0x78))
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = (int)local_3f0;
        if ((int)local_3f0 == local_3f0._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,&local_3f8,(int *)((longlong)&local_3f0 + 4));
        }
        local_3f0 = CONCAT44(local_3f0._4_4_,iVar7 + 1);
        pFVar14 = (FPCGDataPtrWrapper *)(local_3f8.Data + (longlong)iVar7 * 0x78);
        FPCGDataPtrWrapper::FPCGDataPtrWrapper(pFVar14,(FPCGDataPtrWrapper *)&local_318.ObjectPtr);
        *(undefined8 *)
         &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar14 + 1))->Elements
             = 0;
        pFVar14[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        pFVar14[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar14[3].WeakData.WeakPtr.ObjectIndex = 0;
        pFVar14[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&pFVar14[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar14[4].Data.field0_0x0 + 4) = 0;
        pFVar14[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        pFVar14[5].WeakData.WeakPtr.ObjectIndex = 0;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar14 + 1),
                   &local_308);
        pFVar14[6].Data.field0_0x0 = local_2b8;
        *(undefined1 *)&pFVar14[6].WeakData.WeakPtr.ObjectIndex = (undefined1)local_2b0;
        *(undefined1 *)((longlong)&pFVar14[6].WeakData.WeakPtr.ObjectIndex + 1) = local_2b0._1_1_;
        *(undefined8 *)&pFVar14[6].WeakData.WeakPtr.ObjectSerialNumber = local_2ac;
        *(undefined4 *)((longlong)&pFVar14[7].Data.field0_0x0 + 4) = local_2a4;
        local_308._72_8_ = local_308._72_8_ & 0xffffffff00000000;
        if (local_308.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_308.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_308.Elements);
        FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_318.ObjectPtr);
      }
      if (pFVar4 != (FPCGDataCollection *)&local_3f8) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)(pFVar4->TaggedData).AllocatorInstance.Data,
                   (pFVar4->TaggedData).ArrayNum);
        pFVar1 = (pFVar4->TaggedData).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar4->TaggedData).AllocatorInstance.Data = local_3f8.Data;
        (pFVar4->TaggedData).ArrayNum = (int)local_3f0;
        (pFVar4->TaggedData).ArrayMax = local_3f0._4_4_;
        local_3f0 = 0;
        local_3f8.Data = (FScriptContainerElement *)0x0;
      }
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_3f8.Data,(int)local_3f0);
      if ((TObjectPtr<UPCGData_const_>_u_0 *)local_3f8.Data !=
          (TObjectPtr<UPCGData_const_>_u_0 *)0x0) {
        FMemory::Free(local_3f8.Data);
      }
    }
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_3d0.AllocatorInstance.Data,local_3d0.ArrayNum);
  if ((FPCGTaggedData *)local_3d0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_3d0.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Compile @ 149cb6370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::Compile(FPCGGraphExecutor *this,UPCGGraph *param_1)

{
  FPCGGraphCompiler::Compile(&this->GraphCompiler,param_1);
  return;
}

// CullInactiveDownstreamNodes @ 149cbaa00

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
FPCGGraphExecutor::CullInactiveDownstreamNodes
          (FPCGGraphExecutor *this,ulong64 param_1,ulong64 param_2)

{
  FSpinLock *pFVar1;
  ForElementType<unsigned___int64> FVar2;
  atomic<bool> aVar3;
  ulong64 uVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  undefined8 uVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  undefined8 uVar9;
  ulong64 *puVar10;
  longlong *plVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar18;
  TTuple<unsigned___int64,FPCGGraphTask> *pTVar19;
  FPCGGraphTask *pFVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  byte bVar23;
  undefined1 *puVar24;
  ForAnyElementType FVar25;
  ulonglong uVar26;
  ForElementType<FSetElementId> FVar27;
  longlong lVar28;
  ForElementType<unsigned___int64> FVar29;
  uint uVar30;
  int iVar31;
  atomic<bool> *paVar32;
  undefined1 *puVar33;
  ForElementType<unsigned_int> FVar34;
  ulonglong uVar35;
  ForElementType<unsigned_int> FVar36;
  undefined8 *puVar37;
  TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar38;
  longlong lVar39;
  ulong64 *puVar40;
  TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *this_01;
  TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
  *this_02;
  bool bVar41;
  undefined1 auStackY_5f8 [32];
  undefined1 local_5c7;
  bool local_5c6;
  undefined1 local_5c5;
  undefined1 local_5c4;
  undefined1 local_5c3 [3];
  FPCGGraphExecutor *local_5c0;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_5b8;
  undefined1 local_5a8 [4];
  uint local_5a4;
  ulong64 *local_5a0;
  undefined8 uStack_598;
  ForElementType<unsigned_int> local_590;
  uint uStack_588;
  uint uStack_584;
  int local_580;
  undefined4 uStack_57c;
  int iStack_578;
  undefined4 uStack_574;
  uint local_570;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_568;
  int local_558;
  uint uStack_554;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_550;
  undefined4 local_548;
  uint uStack_544;
  int iStack_540;
  undefined4 uStack_53c;
  ulong64 *local_538;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_530;
  undefined8 local_510;
  ulong64 local_508;
  ulong64 *local_500;
  ForElementType<unsigned___int64> local_4f8;
  TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *local_4f0;
  ForElementType<unsigned_int> local_4e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4c0;
  FPCGTaggedData *local_498;
  undefined8 local_490;
  undefined2 local_488;
  void *local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined1 local_468;
  undefined4 local_464;
  undefined1 local_460;
  int local_458;
  int local_454;
  undefined4 local_450;
  int local_44c;
  ulong64 local_448;
  ulong64 local_440;
  ForElementType<unsigned___int64> local_438;
  atomic<bool> *local_430;
  undefined8 local_428;
  ulong64 local_420;
  TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
  *local_418;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_410;
  ulong64 local_400;
  longlong *local_3f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f0;
  int local_3d0;
  undefined1 local_3cc [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c0;
  undefined8 uStack_3a0;
  ulong64 *local_398;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_390;
  undefined8 uStack_370;
  longlong *local_368;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_360;
  undefined8 uStack_340;
  undefined8 *local_338;
  FPCGTaggedData **local_330;
  undefined4 local_30c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_308;
  undefined4 local_2cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c8;
  undefined1 local_2a8 [32];
  ForElementType<unsigned_int> local_288;
  uint local_280;
  int local_27c;
  int local_278;
  int local_274;
  FScriptContainerElement local_270 [8];
  ForAnyElementType local_268;
  uint local_260;
  TArray<unsigned___int64,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> local_258;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  bVar41 = -1 < CpuChannel->Enabled;
  local_5c0 = this;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2459,"FPCGGraphExecutor::CullInactiveDownstreamNodes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x99b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2459);
  }
  local_5b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5b8.ArrayNum = 0;
  local_5b8.ArrayMax = 0;
  GetPinIdsToDeactivate(param_1,param_2,&local_5b8);
  if ((local_5b8.ArrayNum == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!PinIdsToDeactivate.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0x99f,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  PCGGraphExecutionLogging::LogTaskCullingBegin(param_1,param_2,&local_5b8);
  local_27c = 0x80;
  local_2a8._0_8_ = (FScriptContainerElement *)0x0;
  local_2a8._8_8_ = 0;
  local_288 = (ForElementType<unsigned_int>)0x0;
  local_280 = 0;
  local_278 = -1;
  local_274 = 0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_258.AllocatorInstance.SecondaryData = (ForElementType<unsigned___int64>)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0x40;
  if (0 < local_5b8.ArrayNum) {
    paVar32 = &(this->TasksLock).bFlag;
    local_430 = paVar32;
    if ((paVar32 == (atomic<bool> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0xb4,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    aVar3 = ((FSpinLock *)paVar32)->bFlag;
    ((FSpinLock *)paVar32)->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = ((FSpinLock *)paVar32)->bFlag;
      while (aVar3 != (atomic<bool>)0x0) {
        aVar3 = ((FSpinLock *)paVar32)->bFlag;
      }
      LOCK();
      aVar3 = ((FSpinLock *)paVar32)->bFlag;
      ((FSpinLock *)paVar32)->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    if (local_5b8.ArrayNum != 0) {
      this_00 = (TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)&this->TaskSuccessors;
      bVar12 = local_5b8.ArrayNum == 0;
      local_4f0 = this_00;
      do {
        iVar14 = local_5b8.ArrayNum;
        if (bVar12 || local_5b8.ArrayNum < 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = local_5b8.ArrayNum;
        }
        iVar31 = iVar14 + -1;
        uVar4 = *(ulong64 *)(local_5b8.AllocatorInstance.Data + (longlong)iVar31 * 8);
        iVar13 = (iVar14 - iVar31) + -1;
        if (iVar13 != 0) {
          memmove(local_5b8.AllocatorInstance.Data + (longlong)iVar31 * 8,
                  local_5b8.AllocatorInstance.Data + (longlong)iVar31 * 8 + 8,(longlong)iVar13 << 3)
          ;
          iVar14 = local_5b8.ArrayNum;
        }
        local_5b8.ArrayNum = iVar14 + -1;
        uVar16 = PCGPinIdHelpers::GetNodeIdFromPinId(uVar4);
        uVar17 = PCGPinIdHelpers::GetPinIndexFromPinId(uVar4);
        PCGGraphExecutionLogging::LogTaskCullingBeginLoop(uVar16,uVar17,&local_5b8);
        local_400 = uVar16;
        iVar14 = TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<unsigned___int64>
                           (this_00,(int)(uVar16 >> 0x20) * 0x17 + (int)uVar16,&local_400);
        if (iVar14 != -1) {
          lVar39 = (longlong)iVar14 * 0x60 + *(longlong *)&this_00->Elements;
          puVar40 = (ulong64 *)(lVar39 + 8);
          if (lVar39 == 0) {
            puVar40 = (ulong64 *)0x0;
          }
          if (puVar40 != (ulong64 *)0x0) {
            if (local_258.ArrayNum < 0) {
              iVar31 = -local_258.ArrayNum;
              iVar14 = UE::Core::Private::
                       ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                                 (8,8,iVar31,&local_258.AllocatorInstance,&local_258.ArrayNum,
                                  &local_258.ArrayMax);
              FVar29 = (ForElementType<unsigned___int64>)&local_258;
              if (local_258.AllocatorInstance.SecondaryData != (ForElementType<unsigned___int64>)0x0
                 ) {
                FVar29 = local_258.AllocatorInstance.SecondaryData;
              }
              memset((bool *)((longlong)FVar29 + (longlong)iVar14 * 8),0,(longlong)iVar31 << 3);
            }
            else if (0 < local_258.ArrayNum) {
              local_258.ArrayNum = 0;
            }
            FVar36 = (ForElementType<unsigned_int>)(puVar40 + 2);
            local_4e0._padding_._4_4_ = 1;
            local_4e0._padding_._0_4_ = 0;
            local_4e0.UnvisitedBitMask = 0xffffffff;
            local_4e0.CurrentBitIndex = 0;
            local_4e0.BaseBitIndex = 0;
            local_4e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar36;
            if ((int)puVar40[5] != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4e0);
            }
            uStack_598 = CONCAT44(local_4e0._padding_._4_4_,(undefined4)local_4e0._padding_);
            uStack_584 = local_4e0.CurrentBitIndex;
            uStack_588 = local_4e0.UnvisitedBitMask;
            uStack_57c = local_4e0._28_4_;
            local_580 = local_4e0.BaseBitIndex;
            iStack_578 = (int)puVar40[1] - *(int *)((longlong)puVar40 + 0x34);
            local_590 = (ForElementType<unsigned_int>)local_4e0.Array;
            uStack_3a0 = CONCAT44(uStack_574,iStack_578);
            TStack_3c0.Array = local_4e0.Array;
            local_5a0 = puVar40;
            local_3cc._4_8_ = puVar40;
            TStack_3c0._padding_ = uStack_598;
            TStack_3c0._16_8_ = _uStack_588;
            TStack_3c0._24_8_ = _local_580;
            pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                (&local_2c8,(TBitArray<FDefaultBitArrayAllocator> *)FVar36,
                                 (int)puVar40[5]);
            uStack_598 = pTVar18->_padding_;
            FVar36 = (ForElementType<unsigned_int>)pTVar18->Array;
            uVar7._0_4_ = pTVar18->UnvisitedBitMask;
            uVar7._4_4_ = pTVar18->CurrentBitIndex;
            local_580 = pTVar18->BaseBitIndex;
            uStack_57c = *(undefined4 *)&pTVar18->field_0x1c;
            local_590 = FVar36;
            _uStack_588 = uVar7;
            while( true ) {
              uVar9 = local_3cc._4_8_;
              if ((int)*(ulong64 *)(local_3cc._4_8_ + 8) - *(int *)(local_3cc._4_8_ + 0x34) !=
                  (int)uStack_3a0) {
                local_5c7 = 0;
                `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_5c7);
              }
              if (((TStack_3c0.CurrentBitIndex == uVar7._4_4_) &&
                  ((ForElementType<unsigned_int>)TStack_3c0.Array == FVar36)) &&
                 ((ulong64 *)uVar9 == puVar40)) break;
              local_508 = *(ulong64 *)
                           (*(ulong64 *)uVar9 + (longlong)TStack_3c0.CurrentBitIndex * 0x10);
              pTVar19 = TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
                                *)&this->Tasks,local_508);
              puVar24 = &pTVar19->field_0x8;
              if (pTVar19 == (TTuple<unsigned___int64,FPCGGraphTask> *)0x0) {
                puVar24 = (undefined1 *)0x0;
              }
              if (puVar24 != (undefined1 *)0x0) {
                FPCGPinDependencyExpression::DeactivatePin
                          ((FPCGPinDependencyExpression *)(puVar24 + 0x60),uVar4,&local_5c6);
                bVar12 = local_5c6;
                if (local_5c6 != false) {
                  TArray<unsigned___int64,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                  ::AddUniqueImpl<unsigned___int64_const_&>(&local_258,&local_508);
                }
                PCGGraphExecutionLogging::LogTaskCullingUpdatedPinDeps
                          (local_508,(FPCGPinDependencyExpression *)(puVar24 + 0x60),bVar12);
                this = local_5c0;
              }
              TStack_3c0.UnvisitedBitMask =
                   TStack_3c0.UnvisitedBitMask & ~TStack_3c0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c0);
            }
            uVar26 = (ulonglong)local_258.ArrayNum;
            local_570 = local_258.ArrayNum;
            FVar29 = (ForElementType<unsigned___int64>)&local_258;
            if (local_258.AllocatorInstance.SecondaryData != (ForElementType<unsigned___int64>)0x0)
            {
              FVar29 = local_258.AllocatorInstance.SecondaryData;
            }
            local_438 = (ForElementType<unsigned___int64>)((longlong)FVar29 + uVar26 * 8);
            while( true ) {
              FVar2 = local_438;
              local_4f8 = FVar29;
              if (local_258.ArrayNum != (uint)uVar26) {
                local_5c5 = 0;
                `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_5c5);
              }
              iVar14 = local_258.ArrayNum;
              if (FVar29 == FVar2) break;
              uVar4 = *(ulong64 *)FVar29;
              this_02 = (TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
                         *)&this->Tasks;
              local_418 = this_02;
              pFVar20 = TMapBase<unsigned___int64,FPCGGraphTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>_>
                        ::FindChecked((TMapBase<unsigned___int64,FPCGGraphTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>_>
                                       *)this_02,uVar4);
              if ((pFVar20->Node != (UPCGNode *)0x0) &&
                 (iVar14 = (pFVar20->Node->OutputPins).ArrayNum, 0 < iVar14)) {
                GetPinIdsToDeactivate(uVar4,(1L << ((byte)iVar14 & 0x3f)) - 1,&local_5b8);
              }
              local_420 = PCGPinIdHelpers::NodeIdToPinId(uVar4);
              TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64>
                        (&local_5b8,&local_420);
              RemoveTaskFromInputSuccessorsNoLock(this,uVar4,&pFVar20->Inputs);
              if (*(int *)&(this->TaskSuccessors).field_0x8 !=
                  *(int *)&(this->TaskSuccessors).field_0x34) {
                puVar24 = *(undefined1 **)&(this->TaskSuccessors).field_0x40;
                puVar33 = &(this->TaskSuccessors).field_0x38;
                if (puVar24 != (undefined1 *)0x0) {
                  puVar33 = puVar24;
                }
                iVar14 = *(int *)(puVar33 +
                                 ((uVar4 >> 0x20) * 0x17 + uVar4 &
                                 (ulonglong)(*(int *)&(this->TaskSuccessors).field_0x48 - 1)) * 4);
                if (iVar14 != -1) {
                  do {
                    puVar40 = (ulong64 *)
                              ((longlong)iVar14 * 0x60 + *(longlong *)&this->TaskSuccessors);
                    if (*puVar40 == uVar4) goto LAB_149cbafec;
                    iVar14 = (int)puVar40[0xb];
                  } while (iVar14 != -1);
                }
              }
              puVar40 = (ulong64 *)0x0;
LAB_149cbafec:
              local_500 = puVar40 + 1;
              if (puVar40 == (ulong64 *)0x0) {
                local_500 = (ulong64 *)0x0;
              }
              if (local_500 != (ulong64 *)0x0) {
                iVar14 = (int)local_500[5];
                local_4e8 = (ForElementType<unsigned_int>)(local_500 + 2);
                iVar31 = 0;
                uVar15 = 1;
                local_580 = 0;
                uStack_584 = 0;
                if (iVar14 != 0) {
                  FVar36 = local_4e8;
                  if (*(ForElementType<unsigned_int> *)(local_500 + 4) !=
                      (ForElementType<unsigned_int>)0x0) {
                    FVar36 = *(ForElementType<unsigned_int> *)(local_500 + 4);
                  }
                  uVar30 = *(uint *)FVar36;
                  while (uVar30 == 0) {
                    lVar39 = (longlong)iVar31;
                    local_580 = local_580 + 0x20;
                    iVar31 = iVar31 + 1;
                    uStack_584 = iVar14;
                    if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar31)
                    goto LAB_149cbb095;
                    uVar30 = *(uint *)((longlong)FVar36 + 4 + lVar39 * 4);
                  }
                  uVar15 = -uVar30 & uVar30;
                  uVar26 = (ulonglong)uVar15 * 2 + 1;
                  lVar39 = 0x3f;
                  if (uVar26 != 0) {
                    for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                    }
                  }
                  local_458 = (int)lVar39;
                  uStack_584 = local_580 + -1 + local_458;
                  if (iVar14 < (int)uStack_584) {
                    uStack_584 = iVar14;
                  }
                }
LAB_149cbb095:
                local_590 = (ForElementType<unsigned_int>)(local_500 + 2);
                uVar30 = (uint)local_500[5];
                iStack_578 = (int)local_500[1] - *(int *)((longlong)local_500 + 0x34);
                uVar38 = uVar30 & 0xffffffe0;
                uStack_598 = CONCAT44(uVar15,iVar31);
                uStack_588 = 0xffffffff;
                uStack_57c = local_30c;
                TStack_390._padding_ = uStack_598;
                iVar31 = (int)uVar30 >> 5;
                uStack_370 = CONCAT44(uStack_574,iStack_578);
                TStack_390.BaseBitIndex = local_580;
                TStack_390._28_4_ = local_30c;
                TStack_390.UnvisitedBitMask = 0xffffffff;
                TStack_390.CurrentBitIndex = uStack_584;
                local_5a4 = uVar30;
                local_5a0 = local_500;
                local_398 = local_500;
                TStack_390.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_590;
                if ((((int)uVar30 < 0) || (iVar14 < (int)uVar30)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x7af,L""), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar15 = *(int *)((longlong)local_4e8 + 0x18);
                puVar40 = local_500;
                FVar36 = local_4e8;
                if (uVar30 != uVar15) {
                  FVar34 = local_4e8;
                  if (*(ForElementType<unsigned_int> *)((longlong)local_4e8 + 0x10) !=
                      (ForElementType<unsigned_int>)0x0) {
                    FVar34 = *(ForElementType<unsigned_int> *)((longlong)local_4e8 + 0x10);
                  }
                  uVar30 = -1 << ((byte)uVar30 & 0x1f) &
                           *(uint *)((longlong)FVar34 + (longlong)iVar31 * 4);
                  while (uVar30 == 0) {
                    lVar39 = (longlong)iVar31;
                    uVar38 = uVar38 + 0x20;
                    iVar31 = iVar31 + 1;
                    uVar30 = uVar15;
                    local_5a4 = uVar15;
                    if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
                    goto LAB_149cbb1d0;
                    uVar30 = *(uint *)((longlong)FVar34 + 4 + lVar39 * 4);
                  }
                  uVar26 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
                  lVar39 = 0x3f;
                  if (uVar26 != 0) {
                    for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                    }
                  }
                  local_454 = (int)lVar39;
                  uVar30 = local_454 + -1 + uVar38;
                  local_5a4 = uVar30;
                  if ((int)uVar15 < (int)uVar30) {
                    uVar30 = uVar15;
                    local_5a4 = uVar15;
                  }
                }
LAB_149cbb1d0:
                while( true ) {
                  puVar10 = local_398;
                  if ((int)local_398[1] - *(int *)((longlong)local_398 + 0x34) != (int)uStack_370) {
                    local_5c4 = 0;
                    `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_5c4)
                    ;
                    FVar36 = (ForElementType<unsigned_int>)(puVar40 + 2);
                  }
                  if (((TStack_390.CurrentBitIndex == uVar30) &&
                      ((ForElementType<unsigned_int>)TStack_390.Array == FVar36)) &&
                     (FVar29 = local_4f8, this = local_5c0, puVar10 == puVar40)) break;
                  uVar26 = *(ulonglong *)(*puVar10 + (longlong)TStack_390.CurrentBitIndex * 0x10);
                  if (*(int *)&(local_5c0->Tasks).field_0x8 !=
                      *(int *)&(this_02->Elements).field_0x34) {
                    FVar5 = (this_02->Hash).SecondaryData;
                    FVar27 = (ForElementType<FSetElementId>)&this_02->Hash;
                    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                      FVar27 = FVar5;
                    }
                    iVar14 = *(int *)((longlong)FVar27 +
                                     ((ulonglong)(this_02->HashSize - 1) &
                                     (uVar26 >> 0x20) * 0x17 + uVar26) * 4);
                    if (iVar14 != -1) {
                      do {
                        puVar21 = (ulonglong *)
                                  ((longlong)iVar14 * 0x158 + *(longlong *)&this_02->Elements);
                        if (*puVar21 == uVar26) {
                          this_01 = (TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *)
                                    (puVar21 + 1);
                          if (puVar21 == (ulonglong *)0x0) {
                            this_01 = (TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *)0x0;
                          }
                          if ((this_01 !=
                               (TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *)0x0) &&
                             (uVar15 = this_01->ArrayNum - 1, -1 < (int)uVar15)) {
                            lVar39 = (longlong)(int)uVar15 << 7;
                            do {
                              uVar30 = 0;
                              if ((int)uVar15 < this_01->ArrayNum) {
                                uVar30 = ~uVar15 >> 0x1f;
                              }
                              if ((uVar30 == 0) &&
                                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              if (*(ulong64 *)((this_01->AllocatorInstance).Data + lVar39) == uVar4)
                              {
                                uVar30 = 0;
                                if ((int)uVar15 < this_01->ArrayNum) {
                                  uVar30 = ~uVar15 >> 0x1f;
                                }
                                if ((uVar30 == 0) &&
                                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                                TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_>::
                                RemoveAtSwapImpl(this_01,uVar15);
                              }
                              lVar39 = lVar39 + -0x80;
                              uVar15 = uVar15 - 1;
                              puVar40 = local_500;
                              this_02 = local_418;
                              uVar30 = local_5a4;
                            } while (-1 < (int)uVar15);
                          }
                          break;
                        }
                        iVar14 = (int)puVar21[0x2a];
                      } while (iVar14 != -1);
                    }
                  }
                  TStack_390.UnvisitedBitMask =
                       TStack_390.UnvisitedBitMask & ~TStack_390._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_390);
                  FVar36 = (ForElementType<unsigned_int>)(puVar40 + 2);
                }
              }
              local_440 = uVar4;
              if (*(int *)&(this->Tasks).field_0x8 != *(int *)&(this->Tasks).field_0x34) {
                TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned___int64>
                          (this_02,(int)(uVar4 >> 0x20) * 0x17 + (int)uVar4,&local_440);
              }
              uVar26 = (ulonglong)local_570;
              FVar29 = (ForElementType<unsigned___int64>)((longlong)FVar29 + 8);
            }
            lVar39 = (longlong)local_258.ArrayNum;
            FVar29 = (ForElementType<unsigned___int64>)&local_258;
            if (local_258.AllocatorInstance.SecondaryData != (ForElementType<unsigned___int64>)0x0)
            {
              FVar29 = local_258.AllocatorInstance.SecondaryData;
            }
            if ((local_258.ArrayNum < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar15 = (local_2a8._8_4_ - local_274) + iVar14;
            if ((uint)(local_2a8._8_4_ - local_274) < uVar15) {
              if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
              }
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_2a8,uVar15);
              uVar30 = 1;
              if (3 < uVar15) {
                uVar26 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
                lVar28 = 0x3f;
                if (uVar26 != 0) {
                  for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                  }
                }
                local_450 = (undefined4)lVar28;
                uVar30 = 1 << ((byte)lVar28 & 0x1f);
              }
              if ((local_260 == 0) || ((int)local_260 < (int)uVar30)) {
                local_260 = uVar30;
                if (local_268.Data != (FScriptContainerElement *)0x0) {
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_268,0,0,4);
                }
                if (uVar30 != 0) {
                  uVar15 = uVar30;
                  if (uVar30 < 2) {
                    if (local_268.Data != (FScriptContainerElement *)0x0) {
                      uVar15 = 0;
                      goto LAB_149cbb4e5;
                    }
                  }
                  else {
LAB_149cbb4e5:
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_268,0,uVar15,4);
                  }
                  uVar26 = 0;
                  if (0 < (int)uVar30) {
                    uVar35 = (ulonglong)uVar30;
                    do {
                      FVar25.Data = local_270;
                      if (local_268.Data != (FScriptContainerElement *)0x0) {
                        FVar25.Data = local_268.Data;
                      }
                      uVar22 = (longlong)(int)uVar30 - 1U & uVar26;
                      uVar26 = uVar26 + 1;
                      *(undefined4 *)(FVar25.Data + uVar22 * 4) = 0xffffffff;
                      uVar35 = uVar35 - 1;
                    } while (uVar35 != 0);
                  }
                }
                if (local_260 != 0) {
                  pTStack_550 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10);
                  local_558 = 0;
                  uStack_554 = 1;
                  uStack_544 = 0;
                  iStack_540 = 0;
                  if (local_280 != 0) {
                    FVar36 = (ForElementType<unsigned_int>)((longlong)local_2a8 + 0x10);
                    if (local_288 != (ForElementType<unsigned_int>)0x0) {
                      FVar36 = local_288;
                    }
                    uVar15 = *(uint *)FVar36;
                    iStack_540 = 0;
                    local_558 = 0;
                    while (uVar15 == 0) {
                      iStack_540 = iStack_540 + 0x20;
                      lVar28 = (longlong)local_558;
                      local_558 = local_558 + 1;
                      if ((int)((local_280 - 1) + ((int)(local_280 - 1) >> 0x1f & 0x1fU)) >> 5 <
                          local_558) goto LAB_149cbb5fc;
                      uVar15 = ((uint *)((longlong)FVar36 + 4))[lVar28];
                    }
                    uStack_554 = -uVar15 & uVar15;
                    uVar26 = (ulonglong)uStack_554 * 2 + 1;
                    lVar28 = 0x3f;
                    if (uVar26 != 0) {
                      for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                      }
                    }
                    local_44c = (int)lVar28;
                    uStack_544 = local_44c + -1 + iStack_540;
                    if ((int)local_280 < (int)uStack_544) {
LAB_149cbb5fc:
                      uStack_544 = local_280;
                    }
                  }
                  local_548 = 0xffffffff;
                  local_3f8 = (longlong *)local_2a8;
                  local_3f0._padding_ = CONCAT44(uStack_554,local_558);
                  local_3f0.CurrentBitIndex = uStack_544;
                  local_3f0.UnvisitedBitMask = 0xffffffff;
                  local_3f0._28_4_ = uStack_53c;
                  local_3f0.BaseBitIndex = iStack_540;
                  local_3f0.Array = pTStack_550;
                  uVar15 = uStack_544;
                  if ((int)uStack_544 < (int)local_280) {
                    do {
                      puVar37 = (undefined8 *)((longlong)(int)uVar15 * 0x10 + *local_3f8);
                      uVar30 = (int)((ulonglong)*puVar37 >> 0x20) * 0x17 + (int)*puVar37 &
                               local_260 - 1;
                      *(uint *)((longlong)puVar37 + 0xc) = uVar30;
                      FVar25.Data = local_270;
                      if (local_268.Data != (FScriptContainerElement *)0x0) {
                        FVar25.Data = local_268.Data;
                      }
                      uVar26 = (longlong)(int)local_260 - 1U & (longlong)(int)uVar30;
                      *(undefined4 *)(puVar37 + 1) = *(undefined4 *)(FVar25.Data + uVar26 * 4);
                      *(uint *)(FVar25.Data + uVar26 * 4) = uVar15;
                      local_3f0.UnvisitedBitMask =
                           local_3f0.UnvisitedBitMask & ~local_3f0._padding_._4_4_;
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f0);
                      uVar15 = local_3f0.CurrentBitIndex;
                    } while (local_3f0.CurrentBitIndex < (local_3f0.Array)->NumBits);
                  }
                }
              }
            }
            FVar2 = (ForElementType<unsigned___int64>)((longlong)FVar29 + lVar39 * 8);
            this = local_5c0;
            this_00 = local_4f0;
            for (; local_5c0 = this, local_4f0 = this_00, FVar29 != FVar2;
                FVar29 = (ForElementType<unsigned___int64>)((longlong)FVar29 + 8)) {
              TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
              Emplace<unsigned___int64_const_&>
                        ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                          *)local_2a8,&local_448,(bool *)FVar29);
              this = local_5c0;
              this_00 = local_4f0;
            }
          }
        }
        bVar12 = local_5b8.ArrayNum == 0;
        paVar32 = local_430;
      } while (!bVar12);
    }
    this = local_5c0;
    if (paVar32 != (atomic<bool> *)0x0) {
      *paVar32 = (atomic<bool>)0x0;
    }
  }
  if (0 < local_2a8._8_4_ - local_274) {
    pFVar1 = &this->TaskOutputsLock;
    if ((pFVar1 == (FSpinLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0xb4,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
      while (aVar3 != (atomic<bool>)0x0) {
        aVar3 = pFVar1->bFlag;
      }
      LOCK();
      aVar3 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    local_4c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10);
    local_4c0._padding_._4_4_ = 1;
    local_4c0._padding_._0_4_ = 0;
    local_4c0.UnvisitedBitMask = 0xffffffff;
    local_4c0.CurrentBitIndex = 0;
    local_4c0.BaseBitIndex = 0;
    if (local_280 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4c0);
    }
    TStack_530._padding_ = CONCAT44(local_4c0._padding_._4_4_,(undefined4)local_4c0._padding_);
    local_538 = (ulong64 *)local_2a8;
    TStack_530.CurrentBitIndex = local_4c0.CurrentBitIndex;
    TStack_530.UnvisitedBitMask = local_4c0.UnvisitedBitMask;
    TStack_530._28_4_ = local_4c0._28_4_;
    TStack_530.BaseBitIndex = local_4c0.BaseBitIndex;
    TStack_530.Array = local_4c0.Array;
    local_510 = CONCAT44(local_510._4_4_,local_2a8._8_4_ - local_274);
    TStack_360.Array = local_4c0.Array;
    uStack_340 = local_510;
    local_368 = (longlong *)local_538;
    TStack_360._padding_ = TStack_530._padding_;
    TStack_360._16_8_ = TStack_530._16_8_;
    TStack_360._24_8_ = TStack_530._24_8_;
    pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_308,(TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10),
                         local_280);
    TStack_530._padding_ = pTVar18->_padding_;
    pTVar8 = pTVar18->Array;
    uVar9._0_4_ = pTVar18->UnvisitedBitMask;
    uVar9._4_4_ = pTVar18->CurrentBitIndex;
    TStack_530.BaseBitIndex = pTVar18->BaseBitIndex;
    TStack_530._28_4_ = *(undefined4 *)&pTVar18->field_0x1c;
    TStack_530.Array = pTVar8;
    TStack_530._16_8_ = uVar9;
    while( true ) {
      plVar11 = local_368;
      if ((int)local_368[1] - *(int *)((longlong)local_368 + 0x34) != (int)uStack_340) {
        local_5c3[0] = 0;
        `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5c3);
      }
      uVar15 = local_280;
      if (((TStack_360.CurrentBitIndex == uVar9._4_4_) && (TStack_360.Array == pTVar8)) &&
         (plVar11 == (longlong *)local_2a8)) break;
      local_498 = (FPCGTaggedData *)0x0;
      local_490 = 0;
      local_488 = 0;
      local_480 = (void *)0x0;
      local_478 = 0;
      local_428 = *(undefined8 *)(*plVar11 + (longlong)TStack_360.CurrentBitIndex * 0x10);
      local_338 = &local_428;
      local_330 = &local_498;
      local_470 = 0;
      local_468 = 0;
      local_464 = 0;
      local_460 = 1;
      TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FPCGGraphExecutor::FOutputDataInfo_&&>_>
                ((TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
                  *)&this->TaskOutputs,
                 (TPairInitializer<unsigned___int64_const_&,FPCGGraphExecutor::FOutputDataInfo_&&> *
                 )local_3cc,(bool *)&local_338);
      if (local_480 != (void *)0x0) {
        FMemory::Free(local_480);
      }
      DestructItems<FPCGTaggedData,int>(local_498,(int)local_490);
      if (local_498 != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_498);
      }
      TStack_360.UnvisitedBitMask = TStack_360.UnvisitedBitMask & ~TStack_360._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_360);
    }
    if (pFVar1 != (FSpinLock *)0x0) {
      pFVar1->bFlag = (atomic<bool>)0x0;
    }
    iVar14 = 0;
    local_580 = 0;
    uStack_584 = 0;
    if (local_280 == 0) {
LAB_149cbb9e5:
      uVar30 = 1;
    }
    else {
      FVar36 = (ForElementType<unsigned_int>)((longlong)local_2a8 + 0x10);
      if (local_288 != (ForElementType<unsigned_int>)0x0) {
        FVar36 = local_288;
      }
      uVar30 = *(uint *)FVar36;
      while (uVar30 == 0) {
        lVar39 = (longlong)iVar14;
        local_580 = local_580 + 0x20;
        iVar14 = iVar14 + 1;
        uStack_584 = local_280;
        if ((int)((local_280 - 1) + ((int)(local_280 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_149cbb9e5;
        uVar30 = ((uint *)((longlong)FVar36 + 4))[lVar39];
      }
      uVar30 = -uVar30 & uVar30;
      uVar26 = (ulonglong)uVar30 * 2 + 1;
      lVar39 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_3d0 = (int)lVar39;
      uStack_584 = local_3d0 + -1 + local_580;
      if ((int)local_280 < (int)uStack_584) {
        uStack_584 = local_280;
      }
    }
    local_5a0 = (ulong64 *)local_2a8;
    local_590 = (ForElementType<unsigned_int>)((longlong)local_2a8 + 0x10);
    uVar38 = local_280 & 0xffffffe0;
    iStack_578 = local_2a8._8_4_ - local_274;
    uStack_588 = 0xffffffff;
    uStack_598 = CONCAT44(uVar30,iVar14);
    uStack_57c = local_2cc;
    TStack_530._padding_ = uStack_598;
    iVar14 = (int)local_280 >> 5;
    local_510 = CONCAT44(uStack_574,iStack_578);
    bVar23 = (byte)local_280;
    TStack_530.UnvisitedBitMask = 0xffffffff;
    TStack_530.CurrentBitIndex = uStack_584;
    TStack_530.BaseBitIndex = local_580;
    TStack_530._28_4_ = local_2cc;
    local_538 = local_5a0;
    TStack_530.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_590;
    if (((int)local_280 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar15 != local_280) {
      FVar36 = (ForElementType<unsigned_int>)((longlong)local_2a8 + 0x10);
      if (local_288 != (ForElementType<unsigned_int>)0x0) {
        FVar36 = local_288;
      }
      uVar15 = -1 << (bVar23 & 0x1f) & *(uint *)((longlong)FVar36 + (longlong)iVar14 * 4);
      while (uVar15 == 0) {
        lVar39 = (longlong)iVar14;
        uVar38 = uVar38 + 0x20;
        iVar14 = iVar14 + 1;
        uVar15 = local_280;
        if ((int)((local_280 - 1) + ((int)(local_280 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_149cbbb0f;
        uVar15 = ((uint *)((longlong)FVar36 + 4))[lVar39];
      }
      uVar26 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar39 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      uVar15 = (int)lVar39 + -1 + uVar38;
      if ((int)local_280 < (int)uVar15) {
        uVar15 = local_280;
      }
    }
LAB_149cbbb0f:
    while( true ) {
      puVar40 = local_538;
      if ((int)local_538[1] - *(int *)((longlong)local_538 + 0x34) != (int)local_510) {
        `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5a8);
      }
      if (((TStack_530.CurrentBitIndex == uVar15) &&
          (TStack_530.Array == (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_2a8 + 0x10))
          ) && (puVar40 == (ulong64 *)local_2a8)) break;
      QueueNextTasksInternal
                (this,&local_568,
                 *(ulong64 *)(*puVar40 + (longlong)TStack_530.CurrentBitIndex * 0x10));
      local_410.AllocatorInstance.Data = local_568.AllocatorInstance.Data;
      local_410.ArrayNum = local_568.ArrayNum;
      local_410.ArrayMax = local_568.ArrayMax;
      local_568.ArrayNum = 0;
      local_568.ArrayMax = 0;
      local_568.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ProcessCachedResults(this,&local_410);
      if (local_568.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.AllocatorInstance.Data);
      }
      TStack_530.UnvisitedBitMask = TStack_530.UnvisitedBitMask & ~TStack_530._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_530);
    }
  }
  if (local_258.AllocatorInstance.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
  }
  local_260 = 0;
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2a8);
  if (local_5b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.AllocatorInstance.Data);
  }
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Execute @ 149cbf170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::Execute(FPCGGraphExecutor *this,double *param_1)

{
  IPCGElement *this_00;
  code *pcVar1;
  double dVar2;
  FPCGGraphActiveTask *pFVar3;
  bool bVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  TSharedPtr<FPCGGraphActiveTask,1> local_78;
  TSharedPtr<FPCGGraphActiveTask,1> local_68 [2];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1862,"FPCGGraphExecutor::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x746);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1862);
  }
  QueryPerformanceCounter(&local_res10);
  dVar2 = __real_4170000000000000;
  dVar10 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  dVar9 = *param_1 - dVar10;
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  ProcessScheduledTasks(this,dVar9 * __real_3fd3333333333333 + dVar10);
  QueryPerformanceCounter(&local_res20);
  bVar7 = true;
  bVar4 = 0 < ((this->PausedTasks).ArrayNum - *(int *)&(this->Tasks).field_0x34) +
              (this->ActiveTasksGameThreadOnly).ArrayNum + (this->ActiveTasks).ArrayNum +
              (this->ReadyTasks).ArrayNum + *(int *)&(this->Tasks).field_0x8 +
              (int)this->NewReadyTaskCount;
  do {
    if (bVar4 == false) break;
    local_78.Object = (FPCGGraphActiveTask *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar4 = ExecuteScheduling(this,*param_1,&local_78,bVar7);
    pFVar3 = local_78.Object;
    bVar7 = local_78.Object == (FPCGGraphActiveTask *)0x0;
    FVar5.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
    if (local_78.Object != (FPCGGraphActiveTask *)0x0) {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1916,"FPCGGraphExecutor::Execute::ExecuteMainThreadTask"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                   ,0x77c);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1916);
      }
      if ((bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (pFVar3->bWasCancelled == (atomic<bool>)0x0) {
        if ((pFVar3 == (FPCGGraphActiveTask *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((pFVar3->Element).Object == (IPCGElement *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = (pFVar3->Element).Object;
        if ((pFVar3 == (FPCGGraphActiveTask *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        bVar7 = IPCGElement::Execute(this_00,(pFVar3->Context).Ptr);
        if (bVar7) goto LAB_149cbf406;
        bVar7 = false;
      }
      else {
LAB_149cbf406:
        bVar7 = true;
      }
      FVar5.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
      local_68[0].Object = local_78.Object;
      local_68[0].SharedReferenceCount.ReferenceController =
           local_78.SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      PostTaskExecute(this,local_68,bVar7);
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    bVar7 = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    QueryPerformanceCounter(&local_res18);
  } while ((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2 < *param_1);
  ExecuteTasksEnded(this);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Execute @ 149cbf4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::Execute(FPCGGraphExecutor *this)

{
  double dVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  longlong lVar4;
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  pTVar2 = PCGGraphExecutor::CVarTimePerFrame.Ref;
  dVar1 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar4 = 4;
      goto LAB_149cbf541;
    }
  }
  lVar4 = 0;
LAB_149cbf541:
  local_res10[0] =
       (LARGE_INTEGER)
       ((double)*(float *)((longlong)pTVar2->ShadowedValue + lVar4) * __real_3f50624dd2f1a9fc +
        dVar1 + __real_4170000000000000);
  Execute(this,(double *)local_res10);
  return;
}

// ExecuteScheduling @ 149cc3910

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

bool __thiscall
FPCGGraphExecutor::ExecuteScheduling
          (FPCGGraphExecutor *this,double param_1,TSharedPtr<FPCGGraphActiveTask,1> *param_2,
          bool param_3)

{
  longlong *plVar1;
  int *piVar2;
  FPCGGraphTask *pFVar3;
  TUniquePtr<FPCGContext,TDefaultDelete<FPCGContext>_> *pTVar4;
  atomic<unsigned_int> *paVar5;
  FSpinLock *pFVar6;
  atomic<bool> aVar7;
  atomic<unsigned_int> aVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  IPCGElement *pIVar11;
  FPCGContext *pFVar12;
  FPCGStackContext *pFVar13;
  code *pcVar14;
  int iVar15;
  double dVar16;
  TConsoleVariableData<int> *pTVar17;
  TConsoleVariableData<float> *pTVar18;
  TConsoleVariableData<float> *pTVar19;
  TConsoleVariableData<bool> *pTVar20;
  int iVar21;
  bool bVar22;
  undefined1 uVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  char cVar27;
  longlong lVar28;
  TReferenceControllerBase<1> *pTVar29;
  undefined8 *puVar30;
  FPCGGraphActiveTask *pFVar31;
  FPCGContext *pFVar32;
  longlong lVar33;
  byte bVar34;
  uint uVar35;
  FPCGGraphTask *pFVar36;
  ulonglong uVar37;
  TReferenceControllerBase<1> *pTVar38;
  TReferenceControllerBase<1> *pTVar39;
  ulonglong uVar40;
  int iVar41;
  int iVar42;
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar43;
  uint uVar44;
  ForElementType<FSetElementId> *pFVar45;
  atomic<bool> *paVar46;
  bool bVar47;
  double dVar48;
  float fVar49;
  float fVar50;
  <lambda_1> local_res8;
  byte local_168;
  ForAnyElementType local_158;
  undefined8 local_150;
  int local_148;
  FCachedResult *local_140;
  int local_138;
  int local_134;
  FTaskHandle local_130;
  atomic<bool> *local_128;
  longlong local_120;
  LARGE_INTEGER local_118;
  LARGE_INTEGER local_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_f8;
  TSharedPtr<FPCGGraphActiveTask,1> local_e8;
  <lambda_2> local_d8;
  longlong local_b8;
  undefined8 local_b0;
  TReferenceControllerBase<1> *pTStack_a8;
  undefined8 local_a0;
  TReferenceControllerBase<1> *pTStack_98;
  FPCGGraphActiveTask *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  
  if (this->SchedulingDisabled != (atomic<bool>)0x0) {
    return false;
  }
  bVar22 = IsInParallelGameThread();
  if (!bVar22) {
    IsInGameThread();
  }
  if ((param_1 <= 0.0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("EndTime > 0.0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0x600,L""), bVar22)) {
    pcVar14 = (code *)swi(3);
    uVar23 = (*pcVar14)();
    return (bool)uVar23;
  }
  local_168 = 0;
  bVar22 = IsInGameThread();
  bVar47 = -1 < CpuChannel->Enabled;
  if (bVar47) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1540,"FPCGGraphExecutor::ExecuteScheduling",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x604);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1540);
  }
  pTVar18 = CVarMaxPercentageOfThreadsToUse.Ref;
  bVar24 = IsInParallelGameThread();
  iVar41 = 0;
  if (bVar24) {
LAB_149cc3a53:
    lVar28 = 0;
  }
  else {
    bVar24 = IsInGameThread();
    lVar28 = 4;
    if (bVar24) goto LAB_149cc3a53;
  }
  pTVar19 = CVarMaxPercentageOfExecutingThreads.Ref;
  fVar49 = *(float *)((longlong)pTVar18->ShadowedValue + lVar28);
  if (__real_3f800000 <= fVar49) {
    fVar49 = __real_3f800000;
  }
  if (fVar49 <= 0.0) {
    fVar49 = 0.0;
  }
  bVar24 = IsInParallelGameThread();
  if (bVar24) {
LAB_149cc3a88:
    lVar28 = 0;
  }
  else {
    bVar24 = IsInGameThread();
    lVar28 = 4;
    if (bVar24) goto LAB_149cc3a88;
  }
  fVar50 = *(float *)((longlong)pTVar19->ShadowedValue + lVar28);
  if (__real_3f4ccccd <= fVar50) {
    fVar50 = __real_3f4ccccd;
  }
  if (fVar50 <= 0.0) {
    fVar50 = 0.0;
  }
  bVar24 = FApp::ShouldUseThreadingForPerformance();
  pTVar20 = PCGGraphExecutor::CVarGraphMultithreading.Ref;
  if ((bVar24) &&
     (iVar41 = (int)((float)(uint)LowLevelTasks::FScheduler::Singleton.ActiveWorkers * fVar49),
     iVar41 < 0)) {
    iVar41 = 0;
  }
  local_148 = iVar41;
  bVar24 = IsInParallelGameThread();
  if ((bVar24) || (bVar24 = IsInGameThread(), bVar24)) {
    lVar28 = 0;
  }
  else {
    lVar28 = 1;
  }
  pTVar17 = CVarMaxNumTasks.Ref;
  if (pTVar20->ShadowedValue[lVar28] == false) {
    iVar42 = 0;
  }
  else {
    iVar42 = (int)((float)iVar41 * fVar50);
    if ((int)((float)iVar41 * fVar50) < 0) {
      iVar42 = 0;
    }
  }
  local_138 = iVar42;
  bVar24 = IsInParallelGameThread();
  if ((bVar24) || (bVar24 = IsInGameThread(), bVar24)) {
    lVar28 = 0;
  }
  else {
    lVar28 = 4;
  }
  local_134 = *(int *)((longlong)pTVar17->ShadowedValue + lVar28);
  if (local_148 - iVar42 < local_134) {
    local_134 = local_148 - iVar42;
  }
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1558,"FPCGGraphExecutor::ExecuteScheduling::ReadyTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x616);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1558);
  }
  pFVar6 = &this->LiveTasksLock;
  if ((pFVar6 == (FSpinLock *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0xb4,L""), bVar25)) {
    pcVar14 = (code *)swi(3);
    uVar23 = (*pcVar14)();
    return (bool)uVar23;
  }
  dVar16 = __real_4170000000000000;
  LOCK();
  aVar7 = pFVar6->bFlag;
  pFVar6->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  if (param_2 == (TSharedPtr<FPCGGraphActiveTask,1> *)0x0) {
    bVar25 = aVar7 == (atomic<bool>)0x0;
    if (aVar7 == (atomic<bool>)0x0) goto LAB_149cc3c37;
  }
  else {
    while (aVar7 != (atomic<bool>)0x0) {
      aVar7 = pFVar6->bFlag;
      while (aVar7 != (atomic<bool>)0x0) {
        aVar7 = pFVar6->bFlag;
      }
      LOCK();
      aVar7 = pFVar6->bFlag;
      pFVar6->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    bVar25 = true;
LAB_149cc3c37:
    if ((this->bNeedToCheckPausedTasks != false) || (param_3)) {
      uVar44 = (this->PausedTasks).ArrayNum - 1;
      this->bNeedToCheckPausedTasks = false;
      if (-1 < (int)uVar44) {
        lVar28 = (longlong)(int)uVar44 << 4;
        do {
          uVar35 = 0;
          if ((int)uVar44 < (this->PausedTasks).ArrayNum) {
            uVar35 = ~uVar44 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            uVar23 = (*pcVar14)();
            return (bool)uVar23;
          }
          pFVar9 = (this->PausedTasks).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar9 + lVar28) == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar26)) {
            pcVar14 = (code *)swi(3);
            uVar23 = (*pcVar14)();
            return (bool)uVar23;
          }
          if (*(char *)(*(longlong *)(*(longlong *)(pFVar9 + lVar28) + 0x38) + 0x138) == '\0') {
            if ((*(longlong *)(pFVar9 + lVar28) == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              uVar23 = (*pcVar14)();
              return (bool)uVar23;
            }
            plVar10 = *(longlong **)(*(longlong *)(pFVar9 + lVar28) + 0x28);
            plVar1 = (longlong *)(*(longlong *)(pFVar9 + lVar28) + 0x38);
            if (((plVar10 == (longlong *)0x0) ||
                (cVar27 = (**(code **)(*plVar10 + 0x18))(plVar10,*plVar1), cVar27 == '\0')) &&
               ((lVar33 = *plVar1, lVar33 == 0 || (*(char *)(lVar33 + 0x1c8) == '\0')))) {
              bVar34 = 0;
            }
            else {
              bVar34 = 1;
            }
            if ((*(longlong *)(pFVar9 + lVar28) == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              uVar23 = (*pcVar14)();
              return (bool)uVar23;
            }
            *(byte *)(*(longlong *)(pFVar9 + lVar28) + 0x69) = bVar34;
            local_e8.Object = *(FPCGGraphActiveTask **)(pFVar9 + lVar28);
            local_e8.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)(pFVar9 + lVar28 + 8);
            if (local_e8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            PCGGraphExecutor::InsertToActiveTaskArrayNoLock
                      (0,(TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *)
                         (&(this->CollectGCReferenceTasks).Hash + ((ulonglong)bVar34 - 7)),&local_e8
                      );
            PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(&this->PausedTasks,uVar44);
            local_168 = 1;
            QueryPerformanceCounter(&local_118);
            if (param_1 < (double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                          dVar16) break;
          }
          lVar28 = lVar28 + -0x10;
          uVar44 = uVar44 - 1;
        } while (-1 < (int)uVar44);
      }
    }
    uVar44 = (this->ReadyTasks).ArrayNum - 1;
    if (-1 < (int)uVar44) {
      lVar28 = (longlong)(int)uVar44 * 0x148;
      do {
        pTVar38 = (TReferenceControllerBase<1> *)0x0;
        uVar35 = 0;
        if ((int)uVar44 < (this->ReadyTasks).ArrayNum) {
          uVar35 = ~uVar44 >> 0x1f;
        }
        local_120 = lVar28;
        if ((uVar35 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar14 = (code *)swi(3);
          uVar23 = (*pcVar14)();
          return (bool)uVar23;
        }
        pFVar36 = (FPCGGraphTask *)((this->ReadyTasks).AllocatorInstance.Data + lVar28);
        if ((pFVar36->bHasDoneSetup == false) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Task.bHasDoneSetup",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                ,0x63e,L""), bVar26)) {
          pcVar14 = (code *)swi(3);
          uVar23 = (*pcVar14)();
          return (bool)uVar23;
        }
        if (pFVar36->bHasDonePrepareForExecute == false) {
          if ((bVar22) ||
             (((pIVar11 = (pFVar36->Element).Object, pIVar11 == (IPCGElement *)0x0 ||
               (cVar27 = (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,pFVar36->Context),
               cVar27 == '\0')) &&
              ((pFVar36->Context == (FPCGContext *)0x0 ||
               (pFVar36->Context->bOverrideSettingsOnMainThread == false)))))) {
            local_140 = (FCachedResult *)0x0;
            PrepareForExecute(this,pFVar36,&local_140,true);
            if ((pFVar36->bHasDonePrepareForExecute == false) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Task.bHasDonePrepareForExecute",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                    ,0x649,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              uVar23 = (*pcVar14)();
              return (bool)uVar23;
            }
            if (local_140 == (FCachedResult *)0x0) {
              if ((pFVar36->Context == (FPCGContext *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Task.Context",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                      ,0x65d,L""), bVar26)) {
                pcVar14 = (code *)swi(3);
                uVar23 = (*pcVar14)();
                return (bool)uVar23;
              }
              goto LAB_149cc4132;
            }
            if ((local_140->TaskId == 0xffffffffffffffff) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CachedResult->TaskId != InvalidPCGTaskId",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                    ,0x650,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              uVar23 = (*pcVar14)();
              return (bool)uVar23;
            }
            if (((local_158.Data <= (FScriptContainerElement *)&local_140) &&
                ((FScriptContainerElement *)&local_140 <
                 local_158.Data + (longlong)local_150._4_4_ * 8)) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar26)) {
              pcVar14 = (code *)swi(3);
              uVar23 = (*pcVar14)();
              return (bool)uVar23;
            }
            iVar41 = (int)local_150;
            if ((int)local_150 == local_150._4_4_) {
              iVar41 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_158,(int *)((longlong)&local_150 + 4));
            }
            local_150 = CONCAT44(local_150._4_4_,iVar41 + 1);
            *(FCachedResult **)(local_158.Data + (longlong)iVar41 * 8) = local_140;
            uVar35 = 0;
            if ((int)uVar44 < (this->ReadyTasks).ArrayNum) {
              uVar35 = ~uVar44 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar14 = (code *)swi(3);
              uVar23 = (*pcVar14)();
              return (bool)uVar23;
            }
            TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (&this->ReadyTasks,uVar44);
            QueryPerformanceCounter(&local_110);
            dVar48 = (double)local_110.QuadPart * FGenericPlatformTime::SecondsPerCycle;
            goto joined_r0x000149cc44cd;
          }
        }
        else {
LAB_149cc4132:
          pIVar11 = (pFVar36->Element).Object;
          if (((pIVar11 == (IPCGElement *)0x0) ||
              (cVar27 = (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,pFVar36->Context),
              cVar27 == '\0')) &&
             ((pFVar36->Context == (FPCGContext *)0x0 ||
              (pFVar36->Context->bOverrideSettingsOnMainThread == false)))) {
            bVar34 = 0;
          }
          else {
            bVar34 = 1;
          }
          pFVar45 = &(this->CollectGCReferenceTasks).Hash + ((ulonglong)bVar34 - 7);
          local_128 = (atomic<bool> *)pFVar45;
          pTVar29 = ::operator_new(0x90);
          if (pTVar29 == (TReferenceControllerBase<1> *)0x0) {
            pTVar39 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_149cc4260:
            lVar28._0_4_ = pTVar39->SharedReferenceCount;
            lVar28._4_4_ = pTVar39->WeakReferenceCount;
            if (((lVar28 == 0) || (pTVar39[1]._padding_ == 0)) ||
               (*(int *)(pTVar39[1]._padding_ + 8) < 1)) {
              if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar38->SharedReferenceCount =
                     (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
                UNLOCK();
              }
              *(TReferenceControllerBase<1> **)&pTVar39->SharedReferenceCount = pTVar39;
              if (pTVar38 != (TReferenceControllerBase<1> *)pTVar39[1]._padding_) {
                if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar38->WeakReferenceCount = (atomic<int>)((int)pTVar38->WeakReferenceCount + 1);
                  UNLOCK();
                }
                plVar1 = (longlong *)pTVar39[1]._padding_;
                if (plVar1 != (longlong *)0x0) {
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
                  iVar41 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar41 == 1) {
                    (**(code **)(*plVar1 + 8))();
                  }
                }
                pTVar39[1]._padding_ = (longlong)pTVar38;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar38);
            }
          }
          else {
            pTVar29->SharedReferenceCount = (atomic<int>)0x1;
            pTVar29->WeakReferenceCount = (atomic<int>)0x1;
            pTVar29->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFPCGGraphActiveTask___00_SharedPointerInternals__6B_
            ;
            *(undefined2 *)&pTVar29[5].SharedReferenceCount.field_0x1 = 0;
            pTVar29[5].SharedReferenceCount.field_0x3 = 0;
            pTVar29[7].SharedReferenceCount = (atomic<int>)0x0;
            pTVar29[1].SharedReferenceCount = (atomic<int>)0x0;
            pTVar29[1].WeakReferenceCount = (atomic<int>)0x0;
            pTVar29[2]._padding_ = 0;
            pTVar29[2].SharedReferenceCount = (atomic<int>)0x0;
            pTVar29[2].WeakReferenceCount = (atomic<int>)0x0;
            pTVar29[3].SharedReferenceCount = (atomic<int>)0x0;
            pTVar29[3].WeakReferenceCount = (atomic<int>)0x0;
            pTVar29[4]._padding_ = 0;
            pTVar29[4].SharedReferenceCount = (atomic<int>)0x0;
            pTVar29[4].WeakReferenceCount = (atomic<int>)0x0;
            pTVar29[6]._padding_ = 0;
            pTVar29[6].SharedReferenceCount = (atomic<int>)0x0;
            pTVar29[6].WeakReferenceCount = (atomic<int>)0x0;
            pTVar29[7]._padding_ = 0;
            pTVar29[8]._padding_ = 0;
            pTVar39 = pTVar29 + 1;
            pTVar29[1]._padding_ = (longlong)&___7FPCGGraphActiveTask__6B_;
            pTVar29[3]._padding_ = 0;
            pTVar29[5]._padding_ = -1;
            *(undefined1 *)&pTVar29[5].SharedReferenceCount = 0;
            pTVar29[5].WeakReferenceCount = (atomic<int>)0xffffffff;
            pTVar29[7].WeakReferenceCount = (atomic<int>)0xffffffff;
            pTVar29[8].SharedReferenceCount = (atomic<int>)0x0;
            pTVar29[8].WeakReferenceCount = (atomic<int>)0x0;
            pTVar38 = pTVar29;
            if (pTVar39 != (TReferenceControllerBase<1> *)0x0) goto LAB_149cc4260;
            bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L"");
            if (bVar26) {
              pcVar14 = (code *)swi(3);
              uVar23 = (*pcVar14)();
              return (bool)uVar23;
            }
          }
          iVar41 = *(int *)&(pFVar45->SecondaryData).field_0x0;
          piVar2 = (int *)(&(pFVar45->SecondaryData).field_0x0 + 4);
          if (iVar41 == *piVar2) {
            iVar41 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)pFVar45,piVar2);
          }
          lVar33 = (longlong)iVar41;
          *(int *)&(pFVar45->SecondaryData).field_0x0 = iVar41 + 1;
          lVar28 = *(longlong *)pFVar45->InlineData;
          *(TReferenceControllerBase<1> **)(lVar28 + lVar33 * 0x10) = pTVar39;
          *(TReferenceControllerBase<1> **)(lVar28 + lVar33 * 0x10 + 8) = pTVar38;
          if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((*(longlong *)(lVar28 + lVar33 * 0x10) == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar26)) {
            pcVar14 = (code *)swi(3);
            uVar23 = (*pcVar14)();
            return (bool)uVar23;
          }
          lVar28 = *(longlong *)(lVar28 + lVar33 * 0x10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar38);
          pFVar3 = (FPCGGraphTask *)(lVar28 + 0x18);
          *(int *)(lVar28 + 0x6c) =
               *(int *)&((ForElementType<FSetElementId> *)((longlong)local_128 + 8))->field_0x0 + -1
          ;
          *(byte *)(lVar28 + 0x69) = bVar34;
          if (pFVar3 != pFVar36) {
            DestructItems<FPCGGraphTaskInput,int>
                      ((FPCGGraphTaskInput *)(pFVar3->Inputs).AllocatorInstance.Data,
                       *(int *)(lVar28 + 0x20));
            pFVar9 = (pFVar3->Inputs).AllocatorInstance.Data;
            if (pFVar9 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar9);
            }
            (pFVar3->Inputs).AllocatorInstance.Data = (pFVar36->Inputs).AllocatorInstance.Data;
            (pFVar36->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(lVar28 + 0x20) = (pFVar36->Inputs).ArrayNum;
            *(int *)(lVar28 + 0x24) = (pFVar36->Inputs).ArrayMax;
            (pFVar36->Inputs).ArrayNum = 0;
            (pFVar36->Inputs).ArrayMax = 0;
          }
          pTVar38 = (pFVar36->Element).SharedReferenceCount.ReferenceController;
          pIVar11 = (pFVar36->Element).Object;
          if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_b0 = *(undefined8 *)(lVar28 + 0x28);
          pTStack_a8 = *(TReferenceControllerBase<1> **)(lVar28 + 0x30);
          *(IPCGElement **)(lVar28 + 0x28) = pIVar11;
          *(TReferenceControllerBase<1> **)(lVar28 + 0x30) = pTVar38;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_a8);
          *(ulong64 *)(lVar28 + 0x40) = pFVar36->NodeId;
          plVar1 = (longlong *)(lVar28 + 0x38);
          pFVar32 = pFVar36->Context;
          if (plVar1 == &local_b8) {
            if (pFVar32 != (FPCGContext *)0x0) {
              puVar30 = (undefined8 *)pFVar32->_padding_;
              goto LAB_149cc4405;
            }
          }
          else {
            pFVar12 = (FPCGContext *)*plVar1;
            *plVar1 = (longlong)pFVar32;
            if (pFVar12 != (FPCGContext *)0x0) {
              puVar30 = (undefined8 *)pFVar12->_padding_;
              pFVar32 = pFVar12;
LAB_149cc4405:
              (*(code *)*puVar30)(pFVar32,1);
            }
          }
          *(int *)(lVar28 + 0x4c) = pFVar36->StackIndex;
          pTVar38 = (pFVar36->StackContext).SharedReferenceCount.ReferenceController;
          pFVar13 = (pFVar36->StackContext).Object;
          if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_a0 = *(undefined8 *)(lVar28 + 0x50);
          pTStack_98 = *(TReferenceControllerBase<1> **)(lVar28 + 0x58);
          *(FPCGStackContext **)(lVar28 + 0x50) = pFVar13;
          *(TReferenceControllerBase<1> **)(lVar28 + 0x58) = pTVar38;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_98);
          uVar35 = 0;
          if ((int)uVar44 < (this->ReadyTasks).ArrayNum) {
            uVar35 = ~uVar44 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            uVar23 = (*pcVar14)();
            return (bool)uVar23;
          }
          TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->ReadyTasks,uVar44);
          QueryPerformanceCounter(&local_108);
          dVar48 = (double)local_108.QuadPart * FGenericPlatformTime::SecondsPerCycle;
          lVar28 = local_120;
joined_r0x000149cc44cd:
          local_168 = 1;
          if (param_1 < dVar48 + dVar16) break;
        }
        uVar44 = uVar44 - 1;
        lVar28 = lVar28 + -0x148;
        local_120 = lVar28;
      } while (-1 < (int)uVar44);
    }
  }
  if ((bVar25) && (&this->LiveTasksLock != (FSpinLock *)0x0)) {
    (this->LiveTasksLock).bFlag = (atomic<bool>)0x0;
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_f8.AllocatorInstance.Data = local_158.Data;
  local_f8.ArrayNum = (int)local_150;
  local_f8.ArrayMax = local_150._4_4_;
  local_150 = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  ProcessCachedResults(this,&local_f8);
  paVar46 = &(this->LiveTasksLock).bFlag;
  local_128 = paVar46;
  if ((paVar46 == (atomic<bool> *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0xb4,L""), bVar24)) {
    pcVar14 = (code *)swi(3);
    uVar23 = (*pcVar14)();
    return (bool)uVar23;
  }
  LOCK();
  aVar7 = ((FSpinLock *)paVar46)->bFlag;
  ((FSpinLock *)paVar46)->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  if (bVar22) {
    while (aVar7 != (atomic<bool>)0x0) {
      aVar7 = ((FSpinLock *)paVar46)->bFlag;
      while (aVar7 != (atomic<bool>)0x0) {
        aVar7 = ((FSpinLock *)paVar46)->bFlag;
      }
      LOCK();
      aVar7 = ((FSpinLock *)paVar46)->bFlag;
      ((FSpinLock *)paVar46)->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    bVar22 = true;
    if (param_2 != (TSharedPtr<FPCGGraphActiveTask,1> *)0x0) {
      bVar24 = -1 < CpuChannel->Enabled;
      if (bVar24) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1670,"FPCGGraphExecutor::Execute::SelectMainThreadTask",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                   ,0x686);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1670);
      }
      if (((this->ActiveTasksGameThreadOnly).ArrayNum != 0) || ((this->ActiveTasks).ArrayNum != 0))
      {
        local_res8 = SUB81(this,0);
        pTVar43 = TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>::
                  FindByPredicate<_FPCGGraphExecutor::ExecuteScheduling_::__l82::<lambda_1>_>
                            (&this->ActiveTasksGameThreadOnly,local_res8);
        if ((pTVar43 != (TSharedPtr<FPCGGraphActiveTask,1> *)0x0) ||
           (pTVar43 = TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>::
                      FindByPredicate<_FPCGGraphExecutor::ExecuteScheduling_::__l82::<lambda_1>_>
                                (&this->ActiveTasks,local_res8),
           pTVar43 != (TSharedPtr<FPCGGraphActiveTask,1> *)0x0)) {
          pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
          if (((pFVar31->bIsExecutingTask != false) ||
              (pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43),
              ((pFVar31->Context).Ptr)->bIsPaused != false)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ActiveTask->bIsExecutingTask && !ActiveTask->Context->bIsPaused"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                  ,0x69b,L""), bVar22)) {
            pcVar14 = (code *)swi(3);
            uVar23 = (*pcVar14)();
            return (bool)uVar23;
          }
          pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
          FPCGGraphActiveTask::StartExecuting(pFVar31);
          iVar41 = local_134;
          if (local_134 < 1) {
            iVar41 = 1;
          }
          pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
          (((pFVar31->Context).Ptr)->AsyncState).NumAvailableTasks = iVar41;
          pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
          (((pFVar31->Context).Ptr)->AsyncState).bIsRunningOnMainThread = true;
          if ((pTVar43->Object == (FPCGGraphActiveTask *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar14 = (code *)swi(3);
            uVar23 = (*pcVar14)();
            return (bool)uVar23;
          }
          (((pTVar43->Object->Context).Ptr)->AsyncState).bIsRunningOutOfTick = false;
          if ((pTVar43->Object == (FPCGGraphActiveTask *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar14 = (code *)swi(3);
            uVar23 = (*pcVar14)();
            return (bool)uVar23;
          }
          (((pTVar43->Object->Context).Ptr)->AsyncState).EndTime = param_1;
          pTVar38 = (pTVar43->SharedReferenceCount).ReferenceController;
          pFVar31 = pTVar43->Object;
          if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_90 = param_2->Object;
          pTStack_88 = (param_2->SharedReferenceCount).ReferenceController;
          param_2->Object = pFVar31;
          (param_2->SharedReferenceCount).ReferenceController = pTVar38;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_88);
          local_168 = 1;
        }
      }
      bVar22 = true;
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
        bVar22 = true;
      }
    }
  }
  else {
    bVar22 = aVar7 == (atomic<bool>)0x0;
    if (aVar7 != (atomic<bool>)0x0) goto LAB_149cc4bc7;
  }
  iVar41 = local_138;
  pTVar18 = PCGGraphExecutor::CVarTimePerFrame.Ref;
  uVar37 = 0;
  if ((local_138 < 1) || (local_138 + 1 <= FPCGGraphActiveTask::NumExecuting)) goto LAB_149cc4bc7;
  bVar24 = IsInParallelGameThread();
  if (bVar24) {
LAB_149cc4813:
    uVar40 = uVar37;
  }
  else {
    bVar24 = IsInGameThread();
    uVar40 = 4;
    if (bVar24) goto LAB_149cc4813;
  }
  dVar48 = (double)*(float *)((longlong)pTVar18->ShadowedValue + uVar40) * __real_3f50624dd2f1a9fc;
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1709,"FPCGGraphExecutor::ExecuteScheduling::LaunchTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x6ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1709);
  }
  iVar21 = local_134;
  iVar42 = local_148;
  if (0 < (this->ActiveTasks).ArrayNum) {
    uVar40 = uVar37;
    do {
      uVar35 = (uint)uVar37;
      uVar44 = 0;
      if ((int)uVar35 < (this->ActiveTasks).ArrayNum) {
        uVar44 = ~uVar35 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        uVar23 = (*pcVar14)();
        return (bool)uVar23;
      }
      pTVar43 = (TSharedPtr<FPCGGraphActiveTask,1> *)
                ((this->ActiveTasks).AllocatorInstance.Data + uVar40);
      paVar46 = local_128;
      if (iVar41 + 1 <= FPCGGraphActiveTask::NumExecuting) break;
      if ((pTVar43->Object == (FPCGGraphActiveTask *)0x0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar25)) {
        pcVar14 = (code *)swi(3);
        uVar23 = (*pcVar14)();
        return (bool)uVar23;
      }
      if (pTVar43->Object->bIsExecutingTask == false) {
        if ((pTVar43->Object == (FPCGGraphActiveTask *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar25)) {
          pcVar14 = (code *)swi(3);
          uVar23 = (*pcVar14)();
          return (bool)uVar23;
        }
        if (((pTVar43->Object->Context).Ptr)->bIsPaused == false) {
          if ((pTVar43->Object == (FPCGGraphActiveTask *)0x0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar25)) {
            pcVar14 = (code *)swi(3);
            uVar23 = (*pcVar14)();
            return (bool)uVar23;
          }
          pIVar11 = (pTVar43->Object->Element).Object;
          pTVar4 = &pTVar43->Object->Context;
          if (((pIVar11 == (IPCGElement *)0x0) ||
              (cVar27 = (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,pTVar4->Ptr),
              cVar27 == '\0')) &&
             ((pFVar32 = pTVar4->Ptr, pFVar32 == (FPCGContext *)0x0 ||
              (pFVar32->bOverrideSettingsOnMainThread == false)))) {
            pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
            pFVar32 = (pFVar31->Context).Ptr;
            if ((*(int *)&(pFVar32->DynamicDependencies).Elements.field_0x8 !=
                 *(int *)&(pFVar32->DynamicDependencies).Elements.field_0x34) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ActiveTask->Context->DynamicDependencies.IsEmpty()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                    ,0x6c6,L""), bVar25)) {
              pcVar14 = (code *)swi(3);
              uVar23 = (*pcVar14)();
              return (bool)uVar23;
            }
            pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
            if ((Done < ((pFVar31->Context).Ptr)->CurrentPhase) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ActiveTask->Context->CurrentPhase <= EPCGExecutionPhase::Done",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                    ,0x6c7,L""), bVar25)) {
              pcVar14 = (code *)swi(3);
              uVar23 = (*pcVar14)();
              return (bool)uVar23;
            }
            if ((iVar42 < 1) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("MaxNumThreads > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                    ,0x6c8,L""), bVar25)) {
              pcVar14 = (code *)swi(3);
              uVar23 = (*pcVar14)();
              return (bool)uVar23;
            }
            iVar15 = iVar21;
            if (iVar21 < 1) {
              iVar15 = 1;
            }
            pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
            (((pFVar31->Context).Ptr)->AsyncState).NumAvailableTasks = iVar15;
            pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
            (((pFVar31->Context).Ptr)->AsyncState).EndTime = param_1;
            pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
            (((pFVar31->Context).Ptr)->AsyncState).bIsRunningOnMainThread = false;
            pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
            FPCGGraphActiveTask::StartExecuting(pFVar31);
            local_d8.ActiveTask.Object = pTVar43->Object;
            local_d8.ActiveTask.SharedReferenceCount.ReferenceController =
                 (pTVar43->SharedReferenceCount).ReferenceController;
            if (local_d8.ActiveTask.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_d8.ActiveTask.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_d8.ActiveTask.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            local_130.Pimpl.Reference =
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
            local_d8.__this = this;
            local_d8.SchedulingBudgetInSeconds = dVar48;
            UE::Tasks::Private::FTaskHandle::
            Launch<_FPCGGraphExecutor::ExecuteScheduling_::__l110::<lambda_2>_>
                      (&local_130,
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp(1743)"
                       ,&local_d8,Default,None,None);
            pFVar31 = TSharedPtr<FPCGGraphActiveTask,1>::operator->(pTVar43);
            UE::Tasks::TTask<bool>::operator=(&pFVar31->ExecutingTask,(TTask<bool> *)&local_130);
            if (local_130.Pimpl.Reference != (FTaskBase *)0x0) {
              LOCK();
              paVar5 = (atomic<unsigned_int> *)((longlong)local_130.Pimpl.Reference + 0x30);
              aVar8 = *paVar5;
              *paVar5 = (atomic<unsigned_int>)((int)*paVar5 + -1);
              UNLOCK();
              if (aVar8 == (atomic<unsigned_int>)0x1) {
                (*(code *)**(undefined8 **)local_130.Pimpl.Reference)(local_130.Pimpl.Reference,1);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d8.ActiveTask.SharedReferenceCount.ReferenceController);
            local_168 = 1;
            QueryPerformanceCounter(&local_100);
            paVar46 = local_128;
            if (param_1 < (double)local_100.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                          dVar16) break;
          }
        }
      }
      uVar37 = (ulonglong)(uVar35 + 1);
      uVar40 = uVar40 + 0x10;
      paVar46 = local_128;
    } while ((int)(uVar35 + 1) < (this->ActiveTasks).ArrayNum);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_149cc4bc7:
  if ((bVar22) && (paVar46 != (atomic<bool> *)0x0)) {
    *paVar46 = (atomic<bool>)0x0;
  }
  bVar22 = ProcessScheduledTasks(this,param_1);
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  if (bVar47) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)(bVar22 | local_168);
}

// ExecuteTasksEnded @ 149cc4ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::ExecuteTasksEnded(FPCGGraphExecutor *this)

{
  FSpinLock *pFVar1;
  FSpinLock *pFVar2;
  atomic<bool> aVar3;
  int iVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  longlong lVar8;
  
  if (this->bNeedToExecuteTasksEnded != (atomic<bool>)0x0) {
    lVar8 = 0;
    LOCK();
    this->bNeedToExecuteTasksEnded = (atomic<bool>)0x0;
    UNLOCK();
    if (((this->PausedTasks).ArrayNum - *(int *)&(this->Tasks).field_0x34) +
        (int)this->NewReadyTaskCount + (this->ActiveTasksGameThreadOnly).ArrayNum +
        (this->ActiveTasks).ArrayNum + (this->ReadyTasks).ArrayNum +
        *(int *)&(this->Tasks).field_0x8 == 0) {
      pFVar1 = &this->ScheduleLock;
      if ((pFVar1 == (FSpinLock *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                             ,0xb4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      aVar3 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
      while (aVar3 != (atomic<bool>)0x0) {
        aVar3 = pFVar1->bFlag;
        while (aVar3 != (atomic<bool>)0x0) {
          aVar3 = pFVar1->bFlag;
        }
        LOCK();
        aVar3 = pFVar1->bFlag;
        pFVar1->bFlag = (atomic<bool>)0x1;
        UNLOCK();
      }
      if (((this->ActiveTasksGameThreadOnly).ArrayNum - *(int *)&(this->Tasks).field_0x34) +
          *(int *)&(this->Tasks).field_0x8 + (this->ActiveTasks).ArrayNum +
          (this->ReadyTasks).ArrayNum + (int)this->NewReadyTaskCount + (this->PausedTasks).ArrayNum
          == 0) {
        pFVar2 = &this->TasksLock;
        if ((pFVar2 == (FSpinLock *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                               ,0xb4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        LOCK();
        aVar3 = pFVar2->bFlag;
        pFVar2->bFlag = (atomic<bool>)0x1;
        UNLOCK();
        while (aVar3 != (atomic<bool>)0x0) {
          aVar3 = pFVar2->bFlag;
          while (aVar3 != (atomic<bool>)0x0) {
            aVar3 = pFVar2->bFlag;
          }
          LOCK();
          aVar3 = pFVar2->bFlag;
          pFVar2->bFlag = (atomic<bool>)0x1;
          UNLOCK();
        }
        if (*(int *)&(this->TaskSuccessors).field_0x8 != *(int *)&(this->TaskSuccessors).field_0x34)
        {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<834425404453291007>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                             ,0x3ff,"TaskSuccessors.IsEmpty()");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                   *)&this->TaskSuccessors);
        }
        if (pFVar2 != (FSpinLock *)0x0) {
          pFVar2->bFlag = (atomic<bool>)0x0;
        }
        ClearResults(this);
        PCGGraphExecutionLogging::LogGraphExecuteFrameFinished();
      }
      if (pFVar1 != (FSpinLock *)0x0) {
        pFVar1->bFlag = (atomic<bool>)0x0;
      }
    }
    bVar7 = FPCGGraphCache::EnforceMemoryBudget(&this->GraphCache);
    pTVar6 = PCGGraphExecutor::CVarCacheCleanupBehavior.Ref;
    if ((bVar7) && (GEngine != (UEngine *)0x0)) {
      bVar7 = IsInParallelGameThread();
      if ((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) {
        lVar8 = 4;
      }
      iVar4 = *(int *)((longlong)pTVar6->ShadowedValue + lVar8);
      if (0 < iVar4) {
        UEngine::ForceGarbageCollection(GEngine,iVar4 != 1);
      }
    }
  }
  return;
}

// GetFetchInputElement @ 149cc7b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<IPCGElement,1> * __thiscall
FPCGGraphExecutor::GetFetchInputElement
          (FPCGGraphExecutor *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar4 = &this->FetchInputElementPtr;
  if (pTVar4->Object == (IPCGElement *)0x0) {
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      local_18 = ___xmm_00000000000000000000000000000010;
      pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_10.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5 = pTVar3 + 1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPCGFetchInputElement___00_SharedPointerInternals__6B_
      ;
      pTVar3[1]._padding_ = (longlong)&___7FPCGFetchInputElement__6B_;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
          return pTVar4;
        }
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      FStack_10.ReferenceController = pTVar3;
      local_18 = pTVar5;
    }
    if (pTVar4 != (TSharedPtr<IPCGElement,1> *)&local_18) {
      pTVar4->Object = (IPCGElement *)pTVar5;
      local_18 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->FetchInputElementPtr).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  __return_storage_ptr__->Object = pTVar4->Object;
  pTVar3 = (this->FetchInputElementPtr).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetNonScheduledRemainingTaskCount @ 149cca4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FPCGGraphExecutor::GetNonScheduledRemainingTaskCount(FPCGGraphExecutor *this)

{
  return ((this->PausedTasks).ArrayNum - *(int *)&(this->Tasks).field_0x34) +
         (this->ActiveTasksGameThreadOnly).ArrayNum + (this->ActiveTasks).ArrayNum +
         (this->ReadyTasks).ArrayNum + *(int *)&(this->Tasks).field_0x8 +
         (int)this->NewReadyTaskCount;
}

// GetOutputData @ 149cca660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGGraphExecutor::GetOutputData
          (FPCGGraphExecutor *this,ulong64 param_1,FPCGDataCollection *param_2)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FOutputDataInfo *pFVar6;
  bool bVar7;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId827,"FPCGGraphExecutor::GetOutputData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x33b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId827);
  }
  pFVar1 = &this->TaskOutputsLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar6 = TMapBase<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
           ::Find((TMapBase<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
                   *)&this->TaskOutputs,param_1);
  if (pFVar6 == (FOutputDataInfo *)0x0) {
    bVar4 = false;
  }
  else {
    if ((pFVar6->bCulled != false) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<834425404453290815>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                           ,0x33f,"!OutputDataInfo->bCulled"), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    FPCGDataCollection::operator=(param_2,&pFVar6->DataCollection);
    bVar4 = true;
  }
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// GetPinIdsToDeactivate @ 149ccaac0

void __cdecl
FPCGGraphExecutor::GetPinIdsToDeactivate
          (ulong64 param_1,ulong64 param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulong64 local_res10;
  
  uVar1 = param_2 - (param_2 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333);
  uVar3 = (uint)(byte)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
          param_3->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (param_3->ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
  }
  iVar2 = 0;
  for (; param_2 != 0; param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      local_res10 = PCGPinIdHelpers::NodeIdAndPinIndexToPinId(param_1,(longlong)iVar2);
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64>
                (param_3,&local_res10);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}

// GetPreGraphElement @ 149ccb420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<IPCGElement,1> * __thiscall
FPCGGraphExecutor::GetPreGraphElement
          (FPCGGraphExecutor *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar4 = &this->PreGraphElementPtr;
  if (pTVar4->Object == (IPCGElement *)0x0) {
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      local_18 = ___xmm_00000000000000000000000000000010;
      pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_10.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5 = pTVar3 + 1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPCGPreGraphElement___00_SharedPointerInternals__6B_
      ;
      pTVar3[1]._padding_ = (longlong)&___7FPCGPreGraphElement__6B_;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
          return pTVar4;
        }
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      FStack_10.ReferenceController = pTVar3;
      local_18 = pTVar5;
    }
    if (pTVar4 != (TSharedPtr<IPCGElement,1> *)&local_18) {
      pTVar4->Object = (IPCGElement *)pTVar5;
      local_18 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PreGraphElementPtr).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  __return_storage_ptr__->Object = pTVar4->Object;
  pTVar3 = (this->PreGraphElementPtr).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetReferencerName @ 149ccbd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FPCGGraphExecutor::GetReferencerName(FPCGGraphExecutor *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FPCGGraphExecutor");
  return __return_storage_ptr__;
}

// GetSubsystem @ 149ccc540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IPCGBaseSubsystem * __thiscall FPCGGraphExecutor::GetSubsystem(FPCGGraphExecutor *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *pUVar2;
  UPCGEngineSubsystem *pUVar3;
  IPCGBaseSubsystem *pIVar4;
  
  pUVar1 = (this->World).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorld *)0x0) {
    pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
    pIVar4 = (IPCGBaseSubsystem *)&pUVar2->_padding_;
    if (pUVar2 == (UPCGSubsystem *)0x0) {
      pIVar4 = (IPCGBaseSubsystem *)0x0;
    }
    return pIVar4;
  }
  pUVar3 = UPCGEngineSubsystem::Get();
  pIVar4 = (IPCGBaseSubsystem *)&pUVar3->field_0x30;
  if (pUVar3 == (UPCGEngineSubsystem *)0x0) {
    pIVar4 = (IPCGBaseSubsystem *)0x0;
  }
  return pIVar4;
}

// GetTickBudgetInSeconds @ 149ccc590

double __cdecl FPCGGraphExecutor::GetTickBudgetInSeconds(void)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = PCGGraphExecutor::CVarTimePerFrame.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_149ccc5b8;
    }
  }
  lVar3 = 0;
LAB_149ccc5b8:
  return (double)*(float *)((longlong)pTVar1->ShadowedValue + lVar3) * __real_3f50624dd2f1a9fc;
}

// IsAnyGraphCurrentlyExecuting @ 149ccd450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGGraphExecutor::IsAnyGraphCurrentlyExecuting(FPCGGraphExecutor *this)

{
  if (0 < ((this->PausedTasks).ArrayNum - *(int *)&(this->Tasks).field_0x34) +
          (this->ActiveTasksGameThreadOnly).ArrayNum + (this->ActiveTasks).ArrayNum +
          (this->ReadyTasks).ArrayNum + *(int *)&(this->Tasks).field_0x8 +
          (int)this->NewReadyTaskCount) {
    return true;
  }
  return 0 < (this->ScheduledTasks).ArrayNum;
}

// IsGraphCurrentlyExecuting @ 149ccd5a0

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
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGGraphExecutor::IsGraphCurrentlyExecuting(FPCGGraphExecutor *this,UPCGGraph *param_1)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  UPCGGraph *local_90;
  undefined1 *local_88;
  code *local_80;
  UPCGGraph **local_78;
  TSet<IPCGGraphExecutionSource_*,DefaultKeyFuncs<IPCGGraphExecutionSource_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = local_98;
  local_78 = &local_90;
  local_98[0] = 0;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPCGGraphExecutor::IsGraphCurrentlyExecuting'::__l2::<lambda_1>,bool,TWeakInterfacePtr<IPCGGraphExecutionSource>_>
             ::Call;
  local_90 = param_1;
  Cancel(this,&local_68,
         (TFunctionRef<bool___cdecl(TWeakInterfacePtr<IPCGGraphExecutionSource>)> *)&local_80);
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<IPCGGraphExecutionSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IPCGGraphExecutionSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return (bool)local_98[0];
}

// LogTaskStateNoLock @ 149ccda30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::LogTaskStateNoLock(FPCGGraphExecutor *this)

{
  return;
}

// MarkInputResults @ 149ccdb20

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
FPCGGraphExecutor::MarkInputResults
          (FPCGGraphExecutor *this,TArrayView<unsigned___int64_const_,int> *param_1)

{
  int *piVar1;
  FSpinLock *pFVar2;
  ulong64 *puVar3;
  atomic<bool> aVar4;
  ulong64 uVar5;
  code *pcVar6;
  bool bVar7;
  FOutputDataInfo *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ulong64 *puVar12;
  bool bVar13;
  undefined1 local_res18 [8];
  ulong64 local_res20;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId801,"FPCGGraphExecutor::MarkInputResults",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x321);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId801);
  }
  iVar10 = param_1->ArrayNum;
  if (0 < iVar10) {
    pFVar2 = &this->TaskOutputsLock;
    if ((pFVar2 == (FSpinLock *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                           ,0xb4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    aVar4 = pFVar2->bFlag;
    pFVar2->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar4 != (atomic<bool>)0x0) {
      do {
        aVar4 = pFVar2->bFlag;
        while (aVar4 != (atomic<bool>)0x0) {
          aVar4 = pFVar2->bFlag;
        }
        LOCK();
        aVar4 = pFVar2->bFlag;
        pFVar2->bFlag = (atomic<bool>)0x1;
        UNLOCK();
      } while (aVar4 != (atomic<bool>)0x0);
      iVar10 = param_1->ArrayNum;
    }
    puVar12 = param_1->DataPtr;
    puVar3 = puVar12 + iVar10;
    if (puVar12 != puVar3) {
      do {
        uVar5 = *puVar12;
        pFVar8 = TMapBase<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
                 ::FindChecked((TMapBase<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>_>
                                *)&this->TaskOutputs,uVar5);
        if (pFVar8->bNeedsManualClear == false) {
          piVar1 = &pFVar8->RemainingSuccessorCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            iVar10 = (pFVar8->DataCollection).TaggedData.ArrayNum;
            pFVar11 = (pFVar8->DataCollection).TaggedData.AllocatorInstance.Data;
            pFVar9 = pFVar11 + (longlong)iVar10 * 0x78;
            while( true ) {
              if ((pFVar8->DataCollection).TaggedData.ArrayNum != iVar10) {
                `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(local_res18);
              }
              if (pFVar11 == pFVar9) break;
              if (*(UPCGData **)pFVar11 != (UPCGData *)0x0) {
                UPCGData::ClearUsage(*(UPCGData **)pFVar11,GraphExecutorTaskOutput);
              }
              pFVar11 = pFVar11 + 0x78;
            }
            local_res20 = uVar5;
            if (*(int *)&(this->TaskOutputs).field_0x8 != *(int *)&(this->TaskOutputs).field_0x34) {
              TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
              ::RemoveImpl<unsigned___int64>
                        ((TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
                          *)&this->TaskOutputs,(int)(uVar5 >> 0x20) * 0x17 + (int)uVar5,&local_res20
                        );
            }
          }
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar3);
    }
    if (pFVar2 != (FSpinLock *)0x0) {
      pFVar2->bFlag = (atomic<bool>)0x0;
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// OnTaskInputsReady @ 149ccded0

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
FPCGGraphExecutor::OnTaskInputsReady
          (FPCGGraphExecutor *this,FPCGGraphTask *param_1,
          TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  FSpinLock *pFVar1;
  int *piVar2;
  atomic<bool> aVar3;
  IPCGElement *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  bool bVar10;
  FCachedResult *local_58;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_50;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<unsigned___int64_const_,int> local_28;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1277,"FPCGGraphExecutor::OnTaskInputsReady",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x4fd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1277);
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  bVar7 = SetupTask(this,param_1,&local_50);
  if (bVar7) {
    if (((param_1->Element).Object == (IPCGElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.Element",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                           ,0x501,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_58 = (FCachedResult *)0x0;
    if ((param_3) ||
       (((pIVar4 = (param_1->Element).Object, pIVar4 == (IPCGElement *)0x0 ||
         (cVar8 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,param_1->Context), cVar8 == '\0'))
        && ((param_1->Context == (FPCGContext *)0x0 ||
            (param_1->Context->bOverrideSettingsOnMainThread == false)))))) {
      PrepareForExecute(this,param_1,&local_58,false);
    }
    pFVar1 = &this->LiveTasksLock;
    if ((pFVar1 == (FSpinLock *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                           ,0xb4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
      while (aVar3 != (atomic<bool>)0x0) {
        aVar3 = pFVar1->bFlag;
      }
      LOCK();
      aVar3 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    if (local_58 == (FCachedResult *)0x0) {
      iVar9 = (this->ReadyTasks).ArrayNum;
      piVar2 = &(this->ReadyTasks).ArrayMax;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x148,8,&(this->ReadyTasks).AllocatorInstance,piVar2);
      }
      (this->ReadyTasks).ArrayNum = iVar9 + 1;
      FPCGGraphTask::FPCGGraphTask
                ((FPCGGraphTask *)
                 ((this->ReadyTasks).AllocatorInstance.Data + (longlong)iVar9 * 0x148),param_1);
    }
    else {
      if ((local_58->TaskId == 0xffffffffffffffff) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedResult->TaskId != InvalidPCGTaskId",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                             ,0x50e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == param_2->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar9 + 1;
      *(FCachedResult **)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_58;
    }
    if (pFVar1 != (FSpinLock *)0x0) {
      pFVar1->bFlag = (atomic<bool>)0x0;
    }
  }
  iVar9 = local_50.ArrayNum;
  local_38 = local_50.AllocatorInstance.Data;
  if ((local_50.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_30 = iVar9;
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar9;
  local_28.DataPtr = (ulong64 *)local_38;
  MarkInputResults(this,&local_28);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostTaskExecute @ 149ccf0c0

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
FPCGGraphExecutor::PostTaskExecute
          (FPCGGraphExecutor *this,TSharedPtr<FPCGGraphActiveTask,1> *param_1,bool param_2)

{
  FSpinLock *pFVar1;
  TMap<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FSpinLock *pFVar2;
  atomic<bool> aVar3;
  int iVar4;
  FPCGGraphActiveTask *pFVar5;
  FPCGContext *pFVar6;
  TObjectPtr<UObject_const_>_u_0 TVar7;
  undefined1 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  IPCGElement *pIVar10;
  ulong64 uVar11;
  IPCGElement *pIVar12;
  code *pcVar13;
  TConsoleVariableData<bool> *pTVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  int iVar19;
  UPCGSettingsInterface *pUVar20;
  longlong *plVar21;
  TSharedPtr<IPCGElement,1> *pTVar22;
  ulonglong *puVar23;
  TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *pTVar24;
  undefined1 *puVar25;
  FScriptContainerElement *pFVar26;
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar27;
  TObjectPtr<UObject_const_>_u_0 *pTVar28;
  uint uVar29;
  TObjectPtr<UObject_const_>_u_0 *pTVar30;
  atomic<bool> *paVar31;
  longlong lVar32;
  FPCGGraphActiveTask *this_01;
  uint uVar33;
  longlong lVar34;
  FScriptContainerElement *pFVar35;
  atomic<bool> *paVar36;
  ulonglong uVar37;
  bool bVar38;
  undefined1 local_res20 [8];
  undefined1 local_118 [8];
  TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *local_110;
  FPCGGraphActiveTask *local_108;
  int local_100;
  undefined1 local_fc [4];
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8;
  TObjectPtr<UObject_const_>_u_0 local_e0;
  ulonglong local_d8;
  ulonglong *local_d0;
  atomic<bool> *local_c8;
  atomic<bool> *local_c0;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_b8;
  undefined1 local_a8 [12];
  uint local_9c;
  longlong local_98;
  uint local_90;
  int local_8c;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_80;
  TSharedPtr<FPCGGraphActiveTask,1> local_78;
  TSharedPtr<FPCGGraphActiveTask,1> local_68;
  TSharedPtr<IPCGElement,1> local_58;
  
  pTVar27 = &local_68;
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1070,"FPCGGraphExecutor::PostTaskExecute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x42e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1070);
  }
  if (param_1->Object == (FPCGGraphActiveTask *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("ActiveTaskPtr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                        ,0x42f,L"");
    if (bVar15) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if ((param_1->Object == (FPCGGraphActiveTask *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar5 = param_1->Object;
  local_108 = pFVar5;
  if (((pFVar5->Context).Ptr == (FPCGContext *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveTask.Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0x431,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (((pFVar5->bIsExecutingTask == false) && (pFVar5->bWasCancelled == (atomic<bool>)0x0)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveTask.bIsExecutingTask || ActiveTask.bWasCancelled",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0x432,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  this_01 = pFVar5;
  if (((pFVar5->Context).Ptr)->bInputDataModified != false) {
    pFVar1 = &this->LiveTasksLock;
    local_110 = (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *)pFVar1;
    if ((pFVar1 == (FSpinLock *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0xb4,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    this_01 = local_108;
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
      while (aVar3 != (atomic<bool>)0x0) {
        aVar3 = pFVar1->bFlag;
      }
      LOCK();
      aVar3 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    pFVar6 = (pFVar5->Context).Ptr;
    iVar19 = (pFVar6->InputData).TaggedData.ArrayNum;
    pTVar28 = (TObjectPtr<UObject_const_>_u_0 *)
              (pFVar6->InputData).TaggedData.AllocatorInstance.Data;
    pTVar30 = pTVar28 + (longlong)iVar19 * 0xf;
    while( true ) {
      if ((pFVar6->InputData).TaggedData.ArrayNum != iVar19) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pTVar28 == pTVar30) break;
      TVar7 = (TObjectPtr<UObject_const_>_u_0)pTVar28->DebugPtr;
      if (TVar7.DebugPtr != (UObject *)0x0) {
        local_e0 = TVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(TVar7.DebugPtr);
        }
        TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TObjectPtr<UObject_const_>_>
                  (&this_01->ExecutingReferences,(TObjectPtr<UObject_const_> *)&local_e0.ObjectPtr);
      }
      pTVar28 = pTVar28 + 0xf;
    }
    ((this_01->Context).Ptr)->bInputDataModified = false;
    if (local_110 != (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *)0x0) {
      *(undefined1 *)&(local_110->AllocatorInstance).Data = 0;
    }
  }
  if ((!param_2) ||
     (pFVar6 = (this_01->Context).Ptr,
     *(int *)&(pFVar6->DynamicDependencies).Elements.field_0x8 !=
     *(int *)&(pFVar6->DynamicDependencies).Elements.field_0x34)) {
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1094,"FPCGGraphExecutor::PostTaskExecute::NotDone",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                 ,0x446);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1094);
    }
    paVar31 = &(this->LiveTasksLock).bFlag;
    local_c0 = paVar31;
    if ((paVar31 == (atomic<bool> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0xb4,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    LOCK();
    aVar3 = ((FSpinLock *)paVar31)->bFlag;
    ((FSpinLock *)paVar31)->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = ((FSpinLock *)paVar31)->bFlag;
      while (aVar3 != (atomic<bool>)0x0) {
        aVar3 = ((FSpinLock *)paVar31)->bFlag;
      }
      LOCK();
      aVar3 = ((FSpinLock *)paVar31)->bFlag;
      ((FSpinLock *)paVar31)->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    if ((param_1->Object == (FPCGGraphActiveTask *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if (param_1->Object->bWasCancelled == (atomic<bool>)0x0) {
      FPCGGraphActiveTask::StopExecuting(this_01);
      lVar34 = 0x498;
      uVar33 = this_01->TaskIndex;
      lVar32 = 0x498;
      if (this_01->bIsGameThreadOnly == false) {
        lVar32 = 0x488;
      }
      local_110 = (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)&this->_padding_ + lVar32);
      if (uVar33 == 0xffffffff) {
LAB_149ccf4bb:
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskRemoveIndex != INDEX_NONE && ActiveTaskArrayToRemove[TaskRemoveIndex] == ActiveTaskPtr"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0x450,L"");
        if (bVar16) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      else {
        uVar29 = 0;
        if ((int)uVar33 <
            *(int *)&(((TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)&local_110->ArrayNum)->
                     AllocatorInstance).Data) {
          uVar29 = ~uVar33 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (*(FPCGGraphActiveTask **)
             ((local_110->AllocatorInstance).Data + (longlong)(int)uVar33 * 0x10) != param_1->Object
           ) goto LAB_149ccf4bb;
      }
      pFVar6 = (this_01->Context).Ptr;
      iVar19 = *(int *)&(pFVar6->DynamicDependencies).Elements.field_0x34;
      iVar4 = *(int *)&(pFVar6->DynamicDependencies).Elements.field_0x8;
      if (iVar4 != iVar19) {
        pFVar6->bIsPaused = true;
      }
      if (((this_01->Context).Ptr)->bIsPaused == false) {
        pIVar10 = (this_01->Element).Object;
        if (((pIVar10 == (IPCGElement *)0x0) ||
            (cVar18 = (**(code **)((longlong)*pIVar10 + 0x18))(), cVar18 == '\0')) &&
           ((pFVar6 = (this_01->Context).Ptr, pFVar6 == (FPCGContext *)0x0 ||
            (pFVar6->bOverrideSettingsOnMainThread == false)))) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        bVar17 = this_01->bIsGameThreadOnly;
        if (bVar17 != bVar16) {
          this_01->bIsGameThreadOnly = bVar17 == false;
          local_68.Object = param_1->Object;
          if (bVar17 != false) {
            lVar34 = 0x488;
          }
          local_68.SharedReferenceCount.ReferenceController =
               (param_1->SharedReferenceCount).ReferenceController;
          pTVar24 = (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)&this->_padding_ + lVar34);
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          goto LAB_149ccf8cf;
        }
      }
      else {
        bVar16 = iVar4 == iVar19;
        if (!bVar16) {
          paVar36 = &(this->PausedTaskSuccessorsLock).bFlag;
          local_c8 = paVar36;
          if ((paVar36 == (atomic<bool> *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                  ,0xb4,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          LOCK();
          aVar3 = ((FSpinLock *)paVar36)->bFlag;
          ((FSpinLock *)paVar36)->bFlag = (atomic<bool>)0x1;
          UNLOCK();
          while (aVar3 != (atomic<bool>)0x0) {
            aVar3 = ((FSpinLock *)paVar36)->bFlag;
            while (aVar3 != (atomic<bool>)0x0) {
              aVar3 = ((FSpinLock *)paVar36)->bFlag;
            }
            LOCK();
            aVar3 = ((FSpinLock *)paVar36)->bFlag;
            ((FSpinLock *)paVar36)->bFlag = (atomic<bool>)0x1;
            UNLOCK();
          }
          pFVar1 = &this->TaskOutputsLock;
          if ((pFVar1 == (FSpinLock *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                  ,0xb4,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          LOCK();
          aVar3 = pFVar1->bFlag;
          pFVar1->bFlag = (atomic<bool>)0x1;
          UNLOCK();
          while (aVar3 != (atomic<bool>)0x0) {
            aVar3 = pFVar1->bFlag;
            while (aVar3 != (atomic<bool>)0x0) {
              aVar3 = pFVar1->bFlag;
            }
            LOCK();
            aVar3 = pFVar1->bFlag;
            pFVar1->bFlag = (atomic<bool>)0x1;
            UNLOCK();
          }
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::TIterator
          ::TIterator((TIterator *)local_a8,&((this_01->Context).Ptr)->DynamicDependencies);
          if (local_8c < *(int *)(local_98 + 0x18)) {
            do {
              local_d8 = *(ulonglong *)(*(longlong *)local_a8._0_8_ + (longlong)local_8c * 0x10);
              if (*(int *)&(this->TaskOutputs).field_0x8 != *(int *)&(this->TaskOutputs).field_0x34)
              {
                puVar8 = *(undefined1 **)&(this->TaskOutputs).field_0x40;
                puVar25 = &(this->TaskOutputs).field_0x38;
                if (puVar8 != (undefined1 *)0x0) {
                  puVar25 = puVar8;
                }
                iVar19 = *(int *)(puVar25 +
                                 ((local_d8 >> 0x20) * 0x17 + local_d8 &
                                 (ulonglong)(*(int *)&(this->TaskOutputs).field_0x48 - 1)) * 4);
                if (iVar19 != -1) {
                  do {
                    if (*(ulonglong *)(*(longlong *)&this->TaskOutputs + (longlong)iVar19 * 0x50) ==
                        local_d8) {
                      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      ::RemoveByIndex(local_80,local_8c);
                      goto LAB_149ccf7e5;
                    }
                    iVar19 = *(int *)(*(longlong *)&this->TaskOutputs + 0x48 +
                                     (longlong)iVar19 * 0x50);
                  } while (iVar19 != -1);
                }
              }
              this_00 = &this->PausedTaskSuccessors;
              uVar29 = (int)(local_d8 >> 0x20) * 0x17 + (int)local_d8;
              if (*(int *)&(this->PausedTaskSuccessors).field_0x8 !=
                  *(int *)&(this->PausedTaskSuccessors).field_0x34) {
                puVar8 = *(undefined1 **)&(this->PausedTaskSuccessors).field_0x40;
                puVar25 = &(this->PausedTaskSuccessors).field_0x38;
                if (puVar8 != (undefined1 *)0x0) {
                  puVar25 = puVar8;
                }
                iVar19 = *(int *)(puVar25 +
                                 (ulonglong)
                                 (*(int *)&(this->PausedTaskSuccessors).field_0x48 - 1U & uVar29) *
                                 4);
                if (iVar19 != -1) {
                  do {
                    puVar23 = (ulonglong *)
                              ((longlong)iVar19 * 0x20 + *(longlong *)&this_00->field_0x0);
                    if (*puVar23 == local_d8) {
                      if (puVar23 != (ulonglong *)0x0) goto LAB_149ccf739;
                      break;
                    }
                    iVar19 = (int)puVar23[3];
                  } while (iVar19 != -1);
                }
              }
              local_d0 = &local_d8;
              TSet<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
                        ((TSet<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_00,(uint)&local_100,
                         (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)uVar29,
                         (bool *)&local_d0);
              puVar23 = (ulonglong *)((longlong)local_100 * 0x20 + *(longlong *)&this_00->field_0x0)
              ;
LAB_149ccf739:
              if ((((TSharedPtr<FPCGGraphActiveTask,1> *)puVar23[1] <= param_1) &&
                  (param_1 < (TSharedPtr<FPCGGraphActiveTask,1> *)puVar23[1] +
                             *(int *)((longlong)puVar23 + 0x14))) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar19 = (int)puVar23[2];
              if (iVar19 == *(int *)((longlong)puVar23 + 0x14)) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)(puVar23 + 1),
                                    (int *)((longlong)puVar23 + 0x14));
              }
              *(int *)(puVar23 + 2) = iVar19 + 1;
              pFVar26 = ((ForAnyElementType *)(puVar23 + 1))->Data + (longlong)iVar19 * 0x10;
              *(FPCGGraphActiveTask **)pFVar26 = param_1->Object;
              pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
              *(TReferenceControllerBase<1> **)(pFVar26 + 8) = pTVar9;
              if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                UNLOCK();
              }
              bVar16 = true;
LAB_149ccf7e5:
              local_90 = local_90 & ~local_9c;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a8 + 8));
              paVar31 = local_c0;
              this_01 = local_108;
              paVar36 = local_c8;
            } while (local_8c < *(int *)(local_98 + 0x18));
          }
          if (pFVar1 != (FSpinLock *)0x0) {
            pFVar1->bFlag = (atomic<bool>)0x0;
          }
          if (paVar36 != (atomic<bool> *)0x0) {
            *paVar36 = (atomic<bool>)0x0;
          }
        }
        if (bVar16) {
          local_78.Object = param_1->Object;
          local_78.SharedReferenceCount.ReferenceController =
               (param_1->SharedReferenceCount).ReferenceController;
          if (local_78.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pTVar27 = &local_78;
          pTVar24 = &this->PausedTasks;
LAB_149ccf8cf:
          PCGGraphExecutor::AddToActiveTaskArrayNoLock(pTVar24,pTVar27);
          PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(local_110,uVar33);
        }
        else {
          ((this_01->Context).Ptr)->bIsPaused = false;
        }
      }
      if (paVar31 != (atomic<bool> *)0x0) {
        *paVar31 = (atomic<bool>)0x0;
      }
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto joined_r0x000149ccf8fb;
    }
    if (paVar31 != (atomic<bool> *)0x0) {
      ((FSpinLock *)paVar31)->bFlag = (atomic<bool>)0x0;
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (((this_01->bWasCancelled == (atomic<bool>)0x0) &&
      (pFVar6 = (this_01->Context).Ptr, pFVar6->CurrentPhase == Done)) &&
     (*(int *)&(pFVar6->DynamicDependencies).Elements.field_0x8 ==
      *(int *)&(pFVar6->DynamicDependencies).Elements.field_0x34)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  LOCK();
  this->bNeedToExecuteTasksEnded = (atomic<bool>)0x1;
  UNLOCK();
  pUVar20 = FPCGContext::GetInputSettingsInterface((this_01->Context).Ptr);
  uVar11 = (((this_01->Context).Ptr)->OutputData).InactiveOutputPinBitmask;
  if (((uVar11 != 0) && (pUVar20 != (UPCGSettingsInterface *)0x0)) &&
     ((plVar21 = (longlong *)(**(code **)(pUVar20->_padding_ + 0x380))(pUVar20),
      plVar21 != (longlong *)0x0 &&
      (cVar18 = (**(code **)(*plVar21 + 0x3b0))(plVar21), cVar18 != '\0')))) {
    CullInactiveDownstreamNodes(this,this_01->NodeId,uVar11);
  }
  if (bVar15) {
    pTVar22 = FPCGGraphCompiler::GetSharedTrivialPostGraphElement(&this->GraphCompiler,&local_58);
    pIVar10 = (this_01->Element).Object;
    pIVar12 = pTVar22->Object;
    bVar15 = pIVar10 == pIVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    pTVar14 = PCGSystemSwitches::CVarReleaseTransientResourcesEarly.Ref;
    if (pIVar10 != pIVar12) {
      bVar16 = IsInParallelGameThread();
      if (bVar16) {
LAB_149ccf9f4:
        lVar32 = 0;
      }
      else {
        bVar16 = IsInGameThread();
        lVar32 = 1;
        if (bVar16) goto LAB_149ccf9f4;
      }
      if (pTVar14->ShadowedValue[lVar32] == false) {
        pFVar6 = (this_01->Context).Ptr;
        iVar19 = (pFVar6->OutputData).TaggedData.ArrayNum;
        pFVar26 = (pFVar6->OutputData).TaggedData.AllocatorInstance.Data;
        pFVar35 = pFVar26 + (longlong)iVar19 * 0x78;
        while( true ) {
          if ((pFVar6->OutputData).TaggedData.ArrayNum != iVar19) {
            local_118[0] = 0;
            `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_118);
          }
          if (pFVar26 == pFVar35) goto LAB_149ccfa4f;
          if ((*(longlong **)pFVar26 != (longlong *)0x0) &&
             (cVar18 = (**(code **)(**(longlong **)pFVar26 + 0x2d8))(), cVar18 != '\0')) break;
          pFVar26 = pFVar26 + 0x78;
        }
        bVar15 = true;
      }
    }
LAB_149ccfa4f:
    StoreResults(this,this_01->NodeId,&((this_01->Context).Ptr)->OutputData,bVar15);
    QueueNextTasksInternal(this,&local_f8,this_01->NodeId);
    local_b8.AllocatorInstance.Data = local_f8.AllocatorInstance.Data;
    local_b8.ArrayNum = local_f8.ArrayNum;
    local_b8.ArrayMax = local_f8.ArrayMax;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ProcessCachedResults(this,&local_b8);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  pFVar1 = &this->LiveTasksLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0xb4,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  LOCK();
  aVar3 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar3 != (atomic<bool>)0x0) {
    aVar3 = pFVar1->bFlag;
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
    }
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  uVar33 = this_01->TaskIndex;
  lVar32 = 0x498;
  if (this_01->bIsGameThreadOnly == false) {
    lVar32 = 0x488;
  }
  pTVar24 = (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *)
            ((longlong)&this->_padding_ + lVar32);
  if ((int)uVar33 < 0) {
    pFVar26 = (pTVar24->AllocatorInstance).Data;
    if (pFVar26 != pFVar26 + (longlong)pTVar24->ArrayNum * 0x10) {
      pFVar35 = pFVar26;
      do {
        if (*(FPCGGraphActiveTask **)pFVar35 == param_1->Object) {
          uVar33 = (uint)((longlong)pFVar35 - (longlong)pFVar26 >> 4);
          goto LAB_149ccfb78;
        }
        pFVar35 = pFVar35 + 0x10;
      } while (pFVar35 != pFVar26 + (longlong)pTVar24->ArrayNum * 0x10);
    }
    uVar33 = 0xffffffff;
LAB_149ccfb78:
    if (-1 < (int)uVar33) goto LAB_149ccfb81;
  }
  else {
LAB_149ccfb81:
    if ((int)uVar33 < pTVar24->ArrayNum) {
      if (((int)uVar33 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar37 = (ulonglong)uVar33;
      if ((*(FPCGGraphActiveTask **)((pTVar24->AllocatorInstance).Data + uVar37 * 0x10) !=
           param_1->Object) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActiveTaskArray[TaskIndex] == ActiveTaskPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                              ,0x4ed,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar29 = 0;
      if ((int)uVar33 < pTVar24->ArrayNum) {
        uVar29 = ~uVar33 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar26 = (pTVar24->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar26 + uVar37 * 0x10) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_e8 = *(undefined8 *)(*(longlong *)(pFVar26 + uVar37 * 0x10) + 0x38);
      pFVar2 = &this->ReleasedContextLock;
      if ((pFVar2 == (FSpinLock *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                              ,0xb4,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      LOCK();
      aVar3 = pFVar2->bFlag;
      pFVar2->bFlag = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar3 == (atomic<bool>)0x0) {
        TSet<FPCGContext_*,DefaultKeyFuncs<FPCGContext_*,0>,FDefaultSetAllocator>::
        Emplace<FPCGContext_*_const_&>
                  (&this->ReleasedContextsForGC,(FPCGContext **)local_fc,(bool *)&local_e8);
        if (pFVar2 != (FSpinLock *)0x0) goto code_r0x000149ccfd38;
      }
      else {
        do {
          aVar3 = pFVar2->bFlag;
          while (aVar3 != (atomic<bool>)0x0) {
            aVar3 = pFVar2->bFlag;
          }
          LOCK();
          aVar3 = pFVar2->bFlag;
          pFVar2->bFlag = (atomic<bool>)0x1;
          UNLOCK();
        } while (aVar3 != (atomic<bool>)0x0);
        TSet<FPCGContext_*,DefaultKeyFuncs<FPCGContext_*,0>,FDefaultSetAllocator>::
        Emplace<FPCGContext_*_const_&>
                  (&this->ReleasedContextsForGC,(FPCGContext **)local_fc,(bool *)&local_e8);
code_r0x000149ccfd38:
        pFVar2->bFlag = (atomic<bool>)0x0;
      }
      PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(pTVar24,uVar33);
      this_01 = local_108;
    }
  }
  FPCGGraphActiveTask::StopExecuting(this_01);
  this->bNeedToCheckPausedTasks = true;
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
joined_r0x000149ccf8fb:
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PrepareForExecute @ 149ccfe00

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
FPCGGraphExecutor::PrepareForExecute
          (FPCGGraphExecutor *this,FPCGGraphTask *param_1,FCachedResult **param_2,bool param_3)

{
  ulong64 *puVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<bool> aVar4;
  atomic<int> aVar5;
  IPCGElement *pIVar6;
  ulonglong uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FCachedResult *pFVar10;
  UPCGNode *pUVar11;
  TReferenceControllerBase<1> *pTVar12;
  FPCGStackContext *pFVar13;
  code *pcVar14;
  FPCGCrc FVar15;
  TConsoleVariableData<bool> *pTVar16;
  bool bVar17;
  EPCGCachingStatus EVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  UPCGSettingsInterface *pUVar22;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar23;
  TSharedPtr<IPCGElement,1> *pTVar24;
  FPCGContext *pFVar25;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar26;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar27;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar28;
  undefined1 *puVar29;
  FSpinLock *pFVar30;
  TMap<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,0>_>
  *this_00;
  IPCGGraphExecutionSource *pIVar31;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar32;
  bool bVar33;
  FWeakObjectPtr local_138;
  IPCGGraphExecutionSource *pIStack_130;
  TPairInitializer<unsigned___int64_const_&,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>_&&>
  local_128;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_118;
  longlong *local_110;
  FPCGStackHandle local_108;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_f0;
  undefined8 local_e8;
  FPCGDataCollection local_e0;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  ulong64 *local_98;
  TObjectPtr<UPCGSettingsInterface>_u_0 *local_90;
  TSharedPtr<FPCGStackContext_const_,1> local_88;
  TSharedPtr<IPCGElement,1> local_78;
  FPCGDataCollection *local_68;
  FWeakObjectPtr local_60;
  IPCGGraphExecutionSource *pIStack_58;
  UPCGNode *local_50;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_48 [2];
  
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1369,"FPCGGraphExecutor::PrepareForExecute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x559);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1369);
  }
  if (((param_1->bHasDoneSetup == false) || (param_1->bHasDonePrepareForExecute != false)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Task.bHasDoneSetup && !Task.bHasDonePrepareForExecute",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0x55a,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  PCGGraphExecutionLogging::LogTaskExecute(param_1);
  TVar27.DebugPtr = (UPCGSettingsInterface *)0x0;
  TVar23.DebugPtr = TVar27.DebugPtr;
  if (param_1->Node != (UPCGNode *)0x0) {
    TVar23.DebugPtr = (param_1->Node->SettingsInterface).field0_0x0.DebugPtr;
  }
  pUVar22 = FPCGDataCollection::GetSettingsInterface(&param_1->TaskInput,TVar23.DebugPtr);
  if (pUVar22 == (UPCGSettingsInterface *)0x0) {
    local_110 = (longlong *)0x0;
  }
  else {
    local_110 = (longlong *)(**(code **)(pUVar22->_padding_ + 0x380))(pUVar22);
  }
  local_128.Value._0_4_ = 0;
  local_128.Value._4_4_ = local_128.Value._4_4_ & 0xffffff00;
  pFVar30 = &this->CachingResultsLock;
  if ((pFVar30 == (FSpinLock *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0xb4,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  LOCK();
  aVar4 = pFVar30->bFlag;
  pFVar30->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar4 != (atomic<bool>)0x0) {
    aVar4 = pFVar30->bFlag;
    while (aVar4 != (atomic<bool>)0x0) {
      aVar4 = pFVar30->bFlag;
    }
    LOCK();
    aVar4 = pFVar30->bFlag;
    pFVar30->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  local_e8 = 0xffffffffffffffff;
  local_e0.InactiveOutputPinBitmask = 0;
  uStack_b0 = 0;
  local_e0.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.TaggedData.ArrayNum = 0;
  local_e0.TaggedData.ArrayMax = 0;
  local_e0.bCancelExecutionOnEmpty = false;
  local_e0.bCancelExecution = false;
  local_e0.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.DataCrcs.ArrayNum = 0;
  local_e0.DataCrcs.ArrayMax = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (((param_1->Element).Object == (IPCGElement *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pIVar6 = (param_1->Element).Object;
  TVar23.DebugPtr = TVar27.DebugPtr;
  if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
     (bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar17)) {
    TVar23 = (TObjectPtr<UPCGSettingsInterface>_u_0)(param_1->ExecutionSource).InterfaceInstance;
  }
  TVar28 = (TObjectPtr<UPCGSettingsInterface>_u_0)&(this->GraphCache)._padding_;
  if (this == (FPCGGraphExecutor *)0xfffffffffffffda0) {
    TVar28.DebugPtr = TVar27.DebugPtr;
  }
  EVar18 = IPCGElement::RetrieveResultsFromCache
                     (pIVar6,(IPCGGraphCache *)TVar28.DebugPtr,param_1->Node,&param_1->TaskInput,
                      (IPCGGraphExecutionSource *)TVar23.DebugPtr,&local_e0,
                      (FPCGCrc *)&local_128.Value);
  if (EVar18 == Cached) {
    puVar1 = &param_1->NodeId;
    uVar7 = *puVar1;
    this_00 = &this->CachingResultsForGC;
    if (*(int *)&(this->CachingResultsForGC).field_0x8 !=
        *(int *)&(this->CachingResultsForGC).field_0x34) {
      puVar29 = *(undefined1 **)&(this->CachingResultsForGC).field_0x40;
      if (puVar29 == (undefined1 *)0x0) {
        puVar29 = &(this->CachingResultsForGC).field_0x38;
      }
      iVar20 = *(int *)(puVar29 +
                       ((ulonglong)(*(int *)&(this->CachingResultsForGC).field_0x48 - 1) &
                       (uVar7 >> 0x20) * 0x17 + uVar7) * 4);
      if (iVar20 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar20 * 0x18) == uVar7) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("!CachingResultsForGC.Contains(Task.NodeId)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                ,0x577,L"");
            if (bVar17) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            break;
          }
          iVar20 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar20 * 0x18);
        } while (iVar20 != -1);
      }
    }
    TVar23.DebugPtr = ::operator_new(0x50);
    local_118.DebugPtr = TVar27.DebugPtr;
    if ((FPCGGraphExecutor *)TVar23.DebugPtr != (FPCGGraphExecutor *)0x0) {
      *(undefined4 *)((longlong)&(TVar23.DebugPtr)->_padding_ + 2) = 0;
      *(undefined2 *)((longlong)&(TVar23.DebugPtr)->_padding_ + 6) = 0;
      *(undefined4 *)&(TVar23.DebugPtr)->field_0x4a = 0;
      *(undefined2 *)&(TVar23.DebugPtr)->field_0x4e = 0;
      (TVar23.DebugPtr)->_padding_ = 0xffffffffffffffff;
      (((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)&(TVar23.DebugPtr)->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (TVar23.DebugPtr)->_padding_ = 0;
      *(undefined2 *)&(TVar23.DebugPtr)->_padding_ = 0;
      *(FSpinLock *)((longlong)TVar23 + 0x20) = (atomic<bool>)0x0;
      *(undefined3 *)((longlong)((longlong)TVar23 + 0x20) + 1) = 0;
      *(int *)((longlong)((longlong)TVar23 + 0x20) + 4) = 0;
      *(undefined8 *)&(TVar23.DebugPtr)->_padding_ = 0;
      (TVar23.DebugPtr)->_padding_ = 0;
      (TVar23.DebugPtr)->_padding_ = 0;
      (TVar23.DebugPtr)->_padding_ = 0;
      *(bool *)((longlong)TVar23 + 0x48) = false;
      *(bool *)((longlong)TVar23 + 0x49) = false;
      local_118.DebugPtr = TVar23.DebugPtr;
    }
    local_90 = &local_118;
    local_98 = puVar1;
    TSet<TTuple<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>_&&>_>
              ((TSet<TTuple<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,0>,FDefaultSetAllocator>
                *)this_00,&local_128,(bool *)&local_98);
    TVar23 = local_118;
    lVar8 = *(longlong *)&this_00->field_0x0;
    if ((FPCGGraphExecutor *)local_118.DebugPtr != (FPCGGraphExecutor *)0x0) {
      if (*(void **)&(local_118.DebugPtr)->_padding_ != (void *)0x0) {
        FMemory::Free(*(void **)&(local_118.DebugPtr)->_padding_);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)
                 (((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)
                  &(TVar23.DebugPtr)->_padding_)->AllocatorInstance).Data,
                 (int)(TVar23.DebugPtr)->_padding_);
      pFVar9 = (((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)&(TVar23.DebugPtr)->_padding_
                )->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      ::operator_delete(TVar23.DebugPtr,0x50);
    }
    pFVar10 = *(FCachedResult **)(lVar8 + (longlong)(int)local_128.Key * 0x18 + 8);
    *param_2 = pFVar10;
    pFVar10->TaskId = *puVar1;
    FPCGDataCollection::operator=(&(*param_2)->Output,&local_e0);
  }
  if (local_e0.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_e0.TaggedData.AllocatorInstance.Data,
             local_e0.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_e0.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_e0.TaggedData.AllocatorInstance.Data);
  }
  if (pFVar30 != (FSpinLock *)0x0) {
    pFVar30->bFlag = (atomic<bool>)0x0;
  }
  if (EVar18 == NotCacheable) {
    PCGGraphExecutionLogging::LogTaskExecuteCachingDisabled(param_1);
  }
  else if (EVar18 == Cached) {
    if ((*param_2 == (FCachedResult *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutCachedResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0x58c,L""), bVar17)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pTVar16 = PCGGraphExecutor::CVarDynamicTaskCulling.Ref;
    bVar17 = IsInParallelGameThread();
    if (bVar17) {
LAB_149cd031b:
      TVar23.DebugPtr = TVar27.DebugPtr;
    }
    else {
      bVar17 = IsInGameThread();
      TVar23 = (TObjectPtr<UPCGSettingsInterface>_u_0)0x1;
      if (bVar17) goto LAB_149cd031b;
    }
    if ((((pTVar16->ShadowedValue[(longlong)TVar23.DebugPtr] != false) &&
         (local_110 != (longlong *)0x0)) &&
        (cVar19 = (**(code **)(*local_110 + 0x3b0))(), cVar19 != '\0')) &&
       (((*param_2)->Output).InactiveOutputPinBitmask != 0)) {
      (*param_2)->bDoDynamicTaskCulling = true;
      pFVar13 = (param_1->StackContext).Object;
      if ((pFVar13 != (FPCGStackContext *)0x0) && (param_1->StackIndex != -1)) {
        TVar27.DebugPtr =
             (UPCGSettingsInterface *)FPCGStackContext::GetStack(pFVar13,param_1->StackIndex);
      }
      (*param_2)->Stack = (FPCGStack *)TVar27;
      (*param_2)->Node = param_1->Node;
    }
    pTVar24 = FPCGGraphCompiler::GetSharedTrivialPostGraphElement(&this->GraphCompiler,&local_78);
    (*param_2)->bIsPostGraphTask = (param_1->Element).Object == pTVar24->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    LOCK();
    this->bNeedToExecuteTasksEnded = (atomic<bool>)0x1;
    UNLOCK();
    goto LAB_149cd0632;
  }
  if ((param_1->Context != (FPCGContext *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Task.Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0x5a9,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (((param_1->Element).Object == (IPCGElement *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pIVar6 = (param_1->Element).Object;
  pUVar11 = param_1->Node;
  pcVar14 = *(code **)((longlong)*pIVar6 + 0x10);
  local_f0.DebugPtr = TVar27.DebugPtr;
  if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
     (bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar17)) {
    pIVar31 = (IPCGGraphExecutionSource *)0x0;
    local_138.ObjectIndex = 0;
    local_138.ObjectSerialNumber = 0;
    pIStack_130 = (IPCGGraphExecutionSource *)0x0;
  }
  else {
    pIVar31 = (param_1->ExecutionSource).InterfaceInstance;
    local_138.ObjectIndex = 0;
    local_138.ObjectSerialNumber = 0;
    pIStack_130 = (IPCGGraphExecutionSource *)0x0;
    if ((pIVar31 != (IPCGGraphExecutionSource *)0x0) &&
       (TVar23.DebugPtr = (UPCGSettingsInterface *)(**(code **)((longlong)*pIVar31 + 8))(pIVar31),
       (FPCGGraphExecutor *)TVar23.DebugPtr != (FPCGGraphExecutor *)0x0)) {
      local_f0.DebugPtr = TVar23.DebugPtr;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((FPCGGraphExecutor *)local_f0.DebugPtr != (FPCGGraphExecutor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_f0.DebugPtr);
  }
  FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_f0);
  bVar17 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_138,(void *)0x0);
  if (!bVar17) {
    pIStack_130 = pIVar31;
  }
  local_68 = &param_1->TaskInput;
  local_60 = local_138;
  pIStack_58 = pIStack_130;
  local_50 = pUVar11;
  if ((local_68 == (FPCGDataCollection *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InputData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGElement.h"
                          ,0x6d,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar25 = (FPCGContext *)(*pcVar14)(pIVar6,&local_68);
  param_1->Context = pFVar25;
  TVar23 = (TObjectPtr<UPCGSettingsInterface>_u_0)this->_padding_;
  TVar28 = (TObjectPtr<UPCGSettingsInterface>_u_0)this->_padding_;
  TVar26 = TVar23;
  TVar32.DebugPtr = TVar27.DebugPtr;
  if ((FPCGGraphExecutor *)TVar23.DebugPtr != (FPCGGraphExecutor *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)
                     &(((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)
                       &(TVar23.DebugPtr)->_padding_)->AllocatorInstance).Data + 4);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    iVar20 = *(int *)&(((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)
                       &(TVar23.DebugPtr)->_padding_)->AllocatorInstance).Data;
    do {
      TVar26.DebugPtr = TVar27.DebugPtr;
      TVar32.DebugPtr = TVar27.DebugPtr;
      if (iVar20 == 0) break;
      LOCK();
      iVar21 = *(int *)&(((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)
                         &(TVar23.DebugPtr)->_padding_)->AllocatorInstance).Data;
      bVar17 = iVar20 == iVar21;
      if (bVar17) {
        *(int *)&(((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)
                  &(TVar23.DebugPtr)->_padding_)->AllocatorInstance).Data = iVar20 + 1;
        iVar21 = iVar20;
      }
      UNLOCK();
      TVar26 = TVar23;
      TVar32 = TVar28;
      iVar20 = iVar21;
    } while (!bVar17);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar26.DebugPtr);
  TVar26 = (TObjectPtr<UPCGSettingsInterface>_u_0)&(TVar32.DebugPtr)->_padding_;
  if ((FPCGGraphExecutor *)TVar32.DebugPtr == (FPCGGraphExecutor *)0x0) {
    TVar26.DebugPtr = TVar27.DebugPtr;
  }
  if ((TVar26.DebugPtr != (UPCGSettingsInterface *)&this->_padding_) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result.Pin().Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x6c3,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar25 = param_1->Context;
  if ((TObjectPtr<UPCGSettingsInterface>_u_0 *)&pFVar25->GraphExecutor != local_48) {
    pTVar12 = (pFVar25->GraphExecutor).WeakReferenceCount.ReferenceController;
    (pFVar25->GraphExecutor).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)TVar23;
    (pFVar25->GraphExecutor).Object = (FPCGGraphExecutor *)TVar28;
    TVar23.DebugPtr = TVar27.DebugPtr;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar12->WeakReferenceCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      TVar23.DebugPtr = (UPCGSettingsInterface *)0x0;
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
      }
    }
  }
  if ((FPCGGraphExecutor *)TVar23.DebugPtr != (FPCGGraphExecutor *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)
                     &(((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)
                       &(TVar23.DebugPtr)->_padding_)->AllocatorInstance).Data + 4);
    iVar20 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar20 == 1) {
      (**(code **)((TVar23.DebugPtr)->_padding_ + 8))(TVar23.DebugPtr);
    }
  }
  bVar17 = IsInGameThread();
  FPCGContext::InitializeSettings(param_1->Context,!bVar17);
  param_1->Context->TaskId = param_1->NodeId;
  param_1->Context->CompiledTaskId = param_1->CompiledTaskId;
  FVar15._4_4_ = local_128.Value._4_4_;
  FVar15.Value = (uint)local_128.Value;
  param_1->Context->DependenciesCrc = FVar15;
  local_88.Object = (param_1->StackContext).Object;
  iVar20 = param_1->StackIndex;
  local_88.SharedReferenceCount.ReferenceController =
       (param_1->StackContext).SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPCGStackHandle::FPCGStackHandle(&local_108,&local_88,iVar20);
  pFVar25 = param_1->Context;
  if (&pFVar25->StackHandle != &local_108) {
    (pFVar25->StackHandle).StackContext.Object = local_108.StackContext.Object;
    local_108.StackContext.Object = (FPCGStackContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar25->StackHandle).StackContext.SharedReferenceCount,
               &local_108.StackContext.SharedReferenceCount);
  }
  (pFVar25->StackHandle).StackIndex = local_108.StackIndex;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.StackContext.SharedReferenceCount.ReferenceController);
  pFVar13 = (param_1->StackContext).Object;
  if ((pFVar13 != (FPCGStackContext *)0x0) && (param_1->StackIndex != -1)) {
    TVar27.DebugPtr =
         (UPCGSettingsInterface *)FPCGStackContext::GetStack(pFVar13,param_1->StackIndex);
  }
  param_1->Context->Stack = (FPCGStack *)TVar27;
  PCGGraphExecutor::ClearAsyncFlags(&param_1->CombineParamsAsyncObjects);
LAB_149cd0632:
  param_1->bHasDonePrepareForExecute = true;
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessCachedResults @ 149cd0c00

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
FPCGGraphExecutor::ProcessCachedResults
          (FPCGGraphExecutor *this,
          TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined1 local_res10 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_58;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_38;
  
  piVar1 = &param_1->ArrayNum;
  iVar3 = param_1->ArrayNum;
  iVar8 = local_48.ArrayNum;
  while( true ) {
    local_48.ArrayNum = iVar3;
    if (local_48.ArrayNum < 1) {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        local_48.ArrayNum = iVar8;
        FMemory::Free(pFVar2);
      }
      return;
    }
    local_48.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_48.ArrayMax = param_1->ArrayMax;
    param_1->ArrayMax = 0;
    *piVar1 = 0;
    ProcessCachedResultsInternal(this,&local_58,&local_48);
    if ((*piVar1 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedResults.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                           ,0x7f4,L""), bVar5)) break;
    iVar8 = local_58.ArrayNum;
    pFVar2 = local_58.AllocatorInstance.Data + (longlong)iVar8 * 8;
    FVar9.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if (local_58.ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar9.Data == pFVar2) break;
      pTVar7 = QueueNextTasksInternal(this,&local_38,*(ulong64 *)FVar9.Data);
      if ((param_1 == pTVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = pTVar7->ArrayNum;
      if (iVar3 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar3,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
        memmove((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8,
                (pTVar7->AllocatorInstance).Data,(longlong)iVar3 << 3);
        pTVar7->ArrayNum = 0;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      FVar9.Data = FVar9.Data + 8;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    iVar3 = *piVar1;
    iVar8 = local_48.ArrayNum;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ProcessCachedResultsInternal @ 149cd0e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
FPCGGraphExecutor::ProcessCachedResultsInternal
          (FPCGGraphExecutor *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FSpinLock *pFVar1;
  int *piVar2;
  atomic<bool> aVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  bool bVar18;
  undefined1 local_res20 [8];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2047,"FPCGGraphExecutor::ProcessCachedResults",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x7ff);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2047);
  }
  piVar2 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar2 = 0;
  uVar4 = param_1->ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&__return_storage_ptr__->AllocatorInstance,0,piVar2);
  }
  pFVar16 = (param_1->AllocatorInstance).Data;
  iVar5 = param_1->ArrayNum;
  pFVar11 = pFVar16 + (longlong)iVar5 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FPCGGraphExecutor::FCachedResult_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar16 == pFVar11) break;
    pFVar6 = *(FScriptContainerElement **)pFVar16;
    if ((pFVar6 == (FScriptContainerElement *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("CachedResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0x805,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
    if (pFVar6[0x48] != (FScriptContainerElement)0x0) {
      CullInactiveDownstreamNodes(this,*(ulong64 *)pFVar6,*(ulong64 *)(pFVar6 + 0x30));
    }
    StoreResults(this,*(ulong64 *)pFVar6,(FPCGDataCollection *)(pFVar6 + 8),(bool)pFVar6[0x49]);
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar7 <= pFVar6) && (pFVar6 < pFVar7 + (longlong)*piVar2 * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
    iVar14 = __return_storage_ptr__->ArrayNum;
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&__return_storage_ptr__->AllocatorInstance,piVar2);
    }
    __return_storage_ptr__->ArrayNum = iVar14 + 1;
    pFVar16 = pFVar16 + 8;
    *(ulong64 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar14 * 8) =
         *(ulong64 *)pFVar6;
  }
  if (0 < param_1->ArrayNum) {
    pFVar1 = &this->CachingResultsLock;
    if ((pFVar1 == (FSpinLock *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                            ,0xb4,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
      while (aVar3 != (atomic<bool>)0x0) {
        aVar3 = pFVar1->bFlag;
      }
      LOCK();
      aVar3 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    pFVar16 = (param_1->AllocatorInstance).Data;
    iVar5 = param_1->ArrayNum;
    pFVar11 = pFVar16 + (longlong)iVar5 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar5) {
        local_48[0] = 0;
        `TCheckedPointerIterator<FPCGGraphExecutor::FCachedResult_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_48);
      }
      if (pFVar16 == pFVar11) break;
      puVar8 = *(ulonglong **)pFVar16;
      uVar9 = *puVar8;
      if (*(int *)&(this->CachingResultsForGC).field_0x8 !=
          *(int *)&(this->CachingResultsForGC).field_0x34) {
        puVar10 = *(undefined1 **)&(this->CachingResultsForGC).field_0x40;
        puVar17 = &(this->CachingResultsForGC).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar17 = puVar10;
        }
        iVar14 = *(int *)(puVar17 +
                         ((uVar9 >> 0x20) * 0x17 + uVar9 &
                         (ulonglong)(*(int *)&(this->CachingResultsForGC).field_0x48 - 1)) * 4);
        if (iVar14 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)&this->CachingResultsForGC + (longlong)iVar14 * 0x18) ==
                uVar9) goto LAB_149cd110b;
            iVar14 = *(int *)(*(longlong *)&this->CachingResultsForGC + 0x10 +
                             (longlong)iVar14 * 0x18);
          } while (iVar14 != -1);
        }
      }
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachingResultsForGC.Contains(CachedResult->TaskId)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0x817,L"");
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        pTVar15 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
        return pTVar15;
      }
LAB_149cd110b:
      local_40 = *puVar8;
      if (*(int *)&(this->CachingResultsForGC).field_0x8 !=
          *(int *)&(this->CachingResultsForGC).field_0x34) {
        TSet<TTuple<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned___int64>
                  ((TSet<TTuple<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,0>,FDefaultSetAllocator>
                    *)&this->CachingResultsForGC,(int)(local_40 >> 0x20) * 0x17 + (int)local_40,
                   &local_40);
      }
      pFVar16 = pFVar16 + 8;
    }
    this->bNeedToCheckPausedTasks = true;
    if (&this->CachingResultsLock != (FSpinLock *)0x0) {
      (this->CachingResultsLock).bFlag = (atomic<bool>)0x0;
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar11 = (param_1->AllocatorInstance).Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return __return_storage_ptr__;
}

// ProcessScheduledTasks @ 149cd11c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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

bool __thiscall FPCGGraphExecutor::ProcessScheduledTasks(FPCGGraphExecutor *this,double param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<FPCGGraphScheduleTask,TSizedDefaultAllocator<32>_> *this_00;
  atomic<bool> aVar3;
  int iVar4;
  ulong64 uVar5;
  undefined1 *puVar6;
  FPCGGraphScheduleTask *pFVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_01;
  ulonglong uVar16;
  undefined1 *puVar17;
  longlong lVar18;
  FSpinLock *pFVar19;
  ForElementType<FPCGGraphTask> FVar20;
  ForElementType<FPCGGraphTask> FVar21;
  FSpinLock *pFVar22;
  FScriptContainerElement *pFVar23;
  ulong64 *puVar24;
  uint uVar25;
  uint uVar26;
  ulong64 *puVar27;
  longlong lVar28;
  bool bVar29;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStackY_15a8 [32];
  undefined1 local_1555;
  undefined1 local_1554;
  undefined1 local_1553 [3];
  uint local_1550;
  int local_154c;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_1548;
  uint local_1538;
  longlong local_1530;
  ulong64 local_1528;
  undefined1 local_1520 [8];
  FScriptContainerElement *local_1518;
  ForElementType<FPCGGraphTask> local_1510;
  LARGE_INTEGER local_1508;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_1500;
  ulong64 *local_14f0;
  ForElementType<FPCGGraphTask> local_14e8;
  ForElementType<FPCGGraphTask> local_14e0;
  uint local_58;
  uint local_54;
  ulonglong local_50;
  undefined8 uStack_30;
  
  uStack_30 = 0x149cd11de;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_15a8;
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId903,"FPCGGraphExecutor::ProcessScheduledTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x387);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId903);
  }
  bVar14 = false;
  bVar10 = IsInGameThread();
  pFVar19 = &this->ScheduleLock;
  local_1548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1548.ArrayNum = 0;
  local_1548.ArrayMax = 0;
  if ((pFVar19 == (FSpinLock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0xb4,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  LOCK();
  aVar3 = pFVar19->bFlag;
  pFVar19->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  if (bVar10) {
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar19->bFlag;
      while (aVar3 != (atomic<bool>)0x0) {
        aVar3 = pFVar19->bFlag;
      }
      LOCK();
      aVar3 = pFVar19->bFlag;
      pFVar19->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    }
    bVar11 = true;
LAB_149cd12f0:
    dVar9 = __real_4170000000000000;
    iVar4 = (this->ScheduledTasks).ArrayNum;
    if (0 < iVar4) {
      local_1550 = iVar4 - 1;
      if (-1 < (int)local_1550) {
        lVar28 = (longlong)(int)local_1550;
        uStack_30 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
        local_1530 = lVar28;
        do {
          uVar25 = local_1550;
          pFVar22 = &this->TasksLock;
          pFVar19 = &this->TaskOutputsLock;
          local_14e0.SecondaryData = (ForElementType<FPCGGraphTask>)0x0;
          local_58 = 0;
          local_54 = 0x10;
          if ((pFVar22 == (FSpinLock *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                  ,0xb4,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          LOCK();
          aVar3 = pFVar22->bFlag;
          pFVar22->bFlag = (atomic<bool>)0x1;
          UNLOCK();
          while (aVar3 != (atomic<bool>)0x0) {
            aVar3 = pFVar22->bFlag;
            while (aVar3 != (atomic<bool>)0x0) {
              aVar3 = pFVar22->bFlag;
            }
            LOCK();
            aVar3 = pFVar22->bFlag;
            pFVar22->bFlag = (atomic<bool>)0x1;
            UNLOCK();
          }
          if ((pFVar19 == (FSpinLock *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                  ,0xb4,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          LOCK();
          aVar3 = pFVar19->bFlag;
          pFVar19->bFlag = (atomic<bool>)0x1;
          UNLOCK();
          while (aVar3 != (atomic<bool>)0x0) {
            aVar3 = pFVar19->bFlag;
            while (aVar3 != (atomic<bool>)0x0) {
              aVar3 = pFVar19->bFlag;
            }
            LOCK();
            aVar3 = pFVar19->bFlag;
            pFVar19->bFlag = (atomic<bool>)0x1;
            UNLOCK();
          }
          if (-1 < (int)uVar25) {
            lVar18 = lVar28 * 0x30;
            local_154c = 0;
            do {
              lVar28 = local_1530;
              if (0x1f < local_154c) break;
              uVar26 = 0;
              if ((int)uVar25 < (this->ScheduledTasks).ArrayNum) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                uVar12 = (*pcVar8)();
                return (bool)uVar12;
              }
              pFVar23 = (this->ScheduledTasks).AllocatorInstance.Data;
              local_1518 = pFVar23;
              if ((*(int *)(pFVar23 + lVar18 + 8) < 1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ScheduledTask.Tasks.Num() > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                                      ,0x3a2,L""), bVar13)) {
                pcVar8 = (code *)swi(3);
                uVar12 = (*pcVar8)();
                return (bool)uVar12;
              }
              local_1538 = *(uint *)(pFVar23 + lVar18 + 8);
              uVar16 = (ulonglong)(int)local_1538;
              FVar20 = *(ForElementType<FPCGGraphTask> *)(pFVar23 + lVar18);
              local_1510 = (ForElementType<FPCGGraphTask>)(uVar16 * 0x148 + (longlong)FVar20);
              while( true ) {
                FVar21 = local_1510;
                if (*(int *)(pFVar23 + lVar18 + 8) != (int)uVar16) {
                  local_1555 = 0;
                  `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_1555);
                }
                if (FVar20 == FVar21) break;
                iVar4 = *(int *)((longlong)FVar20 + 8);
                bVar14 = true;
                local_1528 = *(ulong64 *)((longlong)FVar20 + 0x48);
                puVar24 = *(ulong64 **)FVar20;
                puVar27 = puVar24 + (longlong)iVar4 * 0x10;
                while( true ) {
                  if (*(int *)((longlong)FVar20 + 8) != iVar4) {
                    local_1554 = 0;
                    `TCheckedPointerIterator<FPCGGraphTaskInput,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_1554);
                  }
                  if (puVar24 == puVar27) break;
                  uVar5 = *puVar24;
                  uVar25 = (int)(uVar5 >> 0x20) * 0x17 + (int)uVar5;
                  if (*(int *)&(this->TaskOutputs).field_0x8 !=
                      *(int *)&(this->TaskOutputs).field_0x34) {
                    puVar6 = *(undefined1 **)&(this->TaskOutputs).field_0x40;
                    puVar17 = &(this->TaskOutputs).field_0x38;
                    if (puVar6 != (undefined1 *)0x0) {
                      puVar17 = puVar6;
                    }
                    iVar15 = *(int *)(puVar17 +
                                     (ulonglong)
                                     (*(int *)&(this->TaskOutputs).field_0x48 - 1U & uVar25) * 4);
                    if (iVar15 != -1) {
                      do {
                        if (*(ulong64 *)(*(longlong *)&this->TaskOutputs + (longlong)iVar15 * 0x50)
                            == uVar5) goto LAB_149cd15c0;
                        iVar15 = *(int *)(*(longlong *)&this->TaskOutputs + 0x48 +
                                         (longlong)iVar15 * 0x50);
                      } while (iVar15 != -1);
                    }
                  }
                  this_01 = TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
                            ::FindOrAddImpl<unsigned___int64_const_&>
                                      ((TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
                                        *)&this->TaskSuccessors,uVar25,puVar24);
                  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
                  Emplace<unsigned___int64_const_&>
                            (this_01,(ulong64 *)local_1520,(bool *)&local_1528);
                  bVar14 = false;
LAB_149cd15c0:
                  puVar24 = puVar24 + 0x10;
                }
                if (bVar14) {
                  FVar21 = (ForElementType<FPCGGraphTask>)&local_14e0;
                  if (local_14e0.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
                    FVar21 = local_14e0.SecondaryData;
                  }
                  if ((ulonglong)FVar21 <= (ulonglong)FVar20) {
                    FVar21 = (ForElementType<FPCGGraphTask>)&local_14e0;
                    if (local_14e0.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
                      FVar21 = local_14e0.SecondaryData;
                    }
                    if (((ulonglong)FVar20 <
                         (ulonglong)((longlong)(int)local_54 * 0x148 + (longlong)FVar21)) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      uVar12 = (*pcVar8)();
                      return (bool)uVar12;
                    }
                  }
                  if (local_58 == local_54) {
                    local_58 = UE::Core::Private::
                               ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGGraphTask>_>
                                         (0x148,8,&local_14e0,(int *)&local_54);
                  }
                  FVar21 = (ForElementType<FPCGGraphTask>)&local_14e0;
                  if (local_14e0.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
                    FVar21 = local_14e0.SecondaryData;
                  }
                  lVar28 = (longlong)(int)local_58;
                  local_58 = local_58 + 1;
                  FPCGGraphTask::FPCGGraphTask
                            ((FPCGGraphTask *)(lVar28 * 0x148 + (longlong)FVar21),
                             (FPCGGraphTask *)FVar20);
                  LOCK();
                  this->NewReadyTaskCount = (atomic<int>)((int)this->NewReadyTaskCount + 1);
                  UNLOCK();
                }
                else {
                  local_14f0 = &local_1528;
                  local_14e8 = FVar20;
                  TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<unsigned___int64_const_&,FPCGGraphTask_&&>_>
                            ((TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
                              *)&this->Tasks,
                             (TPairInitializer<unsigned___int64_const_&,FPCGGraphTask_&&> *)
                             (local_1520 + 4),(bool *)&local_14f0);
                }
                bVar14 = true;
                FVar20 = (ForElementType<FPCGGraphTask>)((longlong)FVar20 + 0x148);
                uVar16 = (ulonglong)local_1538;
                pFVar23 = local_1518;
              }
              lVar18 = lVar18 + -0x30;
              uVar25 = local_1550 - 1;
              lVar28 = local_1530 + -1;
              local_154c = local_154c + 1;
              local_1550 = uVar25;
              local_1530 = lVar28;
            } while (-1 < (int)uVar25);
          }
          uVar25 = local_58;
          if (&this->TaskOutputsLock != (FSpinLock *)0x0) {
            (this->TaskOutputsLock).bFlag = (atomic<bool>)0x0;
          }
          if (&this->TasksLock != (FSpinLock *)0x0) {
            (this->TasksLock).bFlag = (atomic<bool>)0x0;
          }
          uVar16 = (ulonglong)(int)local_58;
          FVar20 = (ForElementType<FPCGGraphTask>)&local_14e0;
          if (local_14e0.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
            FVar20 = local_14e0.SecondaryData;
          }
          FVar21 = (ForElementType<FPCGGraphTask>)(uVar16 * 0x148 + (longlong)FVar20);
          while( true ) {
            if ((uint)uVar16 != uVar25) {
              local_1553[0] = 0;
              `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_1553);
            }
            if (FVar20 == FVar21) break;
            OnTaskInputsReady(this,(FPCGGraphTask *)FVar20,&local_1548,bVar10);
            LOCK();
            this->NewReadyTaskCount = (atomic<int>)((int)this->NewReadyTaskCount + -1);
            UNLOCK();
            uVar16 = (ulonglong)local_58;
            FVar20 = (ForElementType<FPCGGraphTask>)((longlong)FVar20 + 0x148);
          }
          QueryPerformanceCounter(&local_1508);
          if (param_1 < (double)local_1508.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9)
          {
            FVar20 = (ForElementType<FPCGGraphTask>)&local_14e0;
            if (local_14e0.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
              FVar20 = local_14e0.SecondaryData;
            }
            DestructItems<FPCGGraphTask,int>((FPCGGraphTask *)FVar20,local_58);
            if (local_14e0.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
              FMemory::Free((void *)local_14e0.SecondaryData);
            }
            break;
          }
          FVar20 = (ForElementType<FPCGGraphTask>)&local_14e0;
          if (local_14e0.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
            FVar20 = local_14e0.SecondaryData;
          }
          DestructItems<FPCGGraphTask,int>((FPCGGraphTask *)FVar20,local_58);
          if (local_14e0.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
            FMemory::Free((void *)local_14e0.SecondaryData);
          }
        } while (-1 < (int)local_1550);
      }
      uVar25 = local_1550;
      bVar13 = PCGGraphExecutionLogging::CullingLogEnabled();
      if (bVar13) {
        PCGGraphExecutionLogging::LogGraphPostSchedule(&this->Tasks,&this->TaskSuccessors);
      }
      this_00 = &this->ScheduledTasks;
      iVar4 = (this->ScheduledTasks).ArrayNum;
      piVar1 = &(this->ScheduledTasks).ArrayNum;
      if ((int)uVar25 < 0) {
        piVar2 = &(this->ScheduledTasks).ArrayMax;
        pFVar7 = (FPCGGraphScheduleTask *)(this_00->AllocatorInstance).Data;
        if ((this->ScheduledTasks).ArrayMax < 0) {
          DestructItems<FPCGGraphScheduleTask,int>(pFVar7,iVar4);
          *piVar1 = 0;
          if (*piVar2 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,0,&this_00->AllocatorInstance,0,piVar2);
          }
        }
        else {
          DestructItems<FPCGGraphScheduleTask,int>(pFVar7,iVar4);
          *piVar1 = 0;
        }
      }
      else {
        uVar25 = uVar25 + 1;
        if (iVar4 < (int)uVar25) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x30,8,uVar25 - iVar4,&this_00->AllocatorInstance,piVar1,
                              &(this->ScheduledTasks).ArrayMax);
          DefaultConstructItems<FPCGGraphScheduleTask,int>
                    ((this_00->AllocatorInstance).Data + (longlong)iVar15 * 0x30,uVar25 - iVar4);
        }
        else {
          if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
          }
          if ((int)uVar25 < iVar4) {
            uVar26 = iVar4 - uVar25;
            if (((int)(uVar26 | uVar25) < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar13)) {
              pcVar8 = (code *)swi(3);
              uVar12 = (*pcVar8)();
              return (bool)uVar12;
            }
            if (uVar26 != 0) {
              TArray<FPCGGraphScheduleTask,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (this_00,uVar25,uVar26);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,&this_00->AllocatorInstance,*piVar1,&(this->ScheduledTasks).ArrayMax
                        );
            }
          }
        }
      }
      goto LAB_149cd19df;
    }
  }
  else {
    bVar11 = aVar3 == (atomic<bool>)0x0;
    if (aVar3 == (atomic<bool>)0x0) goto LAB_149cd12f0;
LAB_149cd19df:
    if (!bVar11) goto LAB_149cd19ef;
  }
  if (&this->ScheduleLock != (FSpinLock *)0x0) {
    (this->ScheduleLock).bFlag = (atomic<bool>)0x0;
  }
LAB_149cd19ef:
  local_1500.AllocatorInstance.Data = local_1548.AllocatorInstance.Data;
  local_1500.ArrayNum = local_1548.ArrayNum;
  local_1500.ArrayMax = local_1548.ArrayMax;
  local_1548.ArrayNum = 0;
  local_1548.ArrayMax = 0;
  local_1548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ProcessCachedResults(this,&local_1500);
  CheckState(this,bVar10);
  if (local_1548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1548.AllocatorInstance.Data);
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar14;
}

// QueueNextTasks @ 149cd1d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGraphExecutor::QueueNextTasks(FPCGGraphExecutor *this,ulong64 param_1)

{
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> local_18;
  
  QueueNextTasksInternal(this,&local_28,param_1);
  local_18.AllocatorInstance.Data = local_28.AllocatorInstance.Data;
  local_18.ArrayNum = local_28.ArrayNum;
  local_18.ArrayMax = local_28.ArrayMax;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ProcessCachedResults(this,&local_18);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// QueueNextTasksInternal @ 149cd1df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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

TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> * __thiscall
FPCGGraphExecutor::QueueNextTasksInternal
          (FPCGGraphExecutor *this,
          TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,ulong64 param_1)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  FPCGContext *pFVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  ulong64 uVar6;
  longlong *plVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong *puVar14;
  byte bVar15;
  uint *puVar16;
  char cVar17;
  undefined1 *puVar18;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar19;
  ulonglong uVar20;
  ForElementType<FSetElementId> FVar21;
  uint uVar22;
  ForElementType<FPCGGraphTask> FVar23;
  ForAnyElementType FVar24;
  int iVar25;
  ForElementType<FPCGGraphTask> FVar26;
  undefined1 *puVar27;
  uint uVar28;
  ulonglong *puVar29;
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar30;
  bool bVar31;
  undefined1 auStack_1658 [32];
  ForElementType<FPCGGraphTask> local_1638;
  ForElementType<FPCGGraphTask> local_1630;
  longlong local_1628;
  longlong local_1620;
  undefined8 local_1618;
  char local_1608;
  uint local_1604;
  undefined1 local_1600;
  undefined1 local_15ff;
  undefined1 local_15fe;
  undefined1 local_15fd;
  undefined1 local_15fc [4];
  TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> local_15f8;
  uint local_15e8;
  TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *local_15e0;
  int local_15d8;
  int local_15d4;
  ulonglong local_15d0;
  ulonglong local_15c8;
  ulonglong local_15c0;
  ulong64 local_15b8;
  longlong *local_15b0;
  int iStack_15a8;
  uint uStack_15a4;
  TBitArray<FDefaultBitArrayAllocator> *local_15a0;
  undefined4 uStack_1598;
  uint uStack_1594;
  int local_1590;
  undefined4 uStack_158c;
  int iStack_1588;
  undefined4 uStack_1584;
  longlong *local_1580;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1578;
  undefined8 uStack_1558;
  undefined4 local_1534;
  undefined1 local_1528 [32];
  uint *local_1508;
  uint local_1500;
  undefined4 local_14fc;
  undefined4 local_14f8;
  int local_14f4;
  ForElementType<FSetElementId> local_14e8;
  int local_14e0;
  ForElementType<FPCGGraphTask> local_14d8;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149cd1e12;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1658;
  bVar31 = -1 < CpuChannel->Enabled;
  local_15e0 = __return_storage_ptr__;
  local_15b8 = param_1;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1956,"FPCGGraphExecutor::QueueNextTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x7a4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1956);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar8 = IsInGameThread();
  pFVar1 = &this->TasksLock;
  local_1528._0_8_ = 0;
  local_1528._8_8_ = 0;
  local_1508 = (uint *)0x0;
  local_1500 = 0;
  local_14fc = 0x80;
  local_14f8 = 0xffffffff;
  local_14f4 = 0;
  local_14e8 = (ForElementType<FSetElementId>)0x0;
  local_14e0 = 0;
  local_14d8.SecondaryData = (ForElementType<FPCGGraphTask>)0x0;
  local_50 = 0;
  local_4c = 0x10;
  local_15fe = uVar8;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar1 = &this->TaskOutputsLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  local_15e8 = (int)(param_1 >> 0x20) * 0x17 + (int)param_1;
  if (*(int *)&(this->TaskSuccessors).field_0x8 != *(int *)&(this->TaskSuccessors).field_0x34) {
    puVar18 = *(undefined1 **)&(this->TaskSuccessors).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->TaskSuccessors).field_0x38;
    }
    iVar25 = *(int *)(puVar18 +
                     (ulonglong)(*(int *)&(this->TaskSuccessors).field_0x48 - 1U & local_15e8) * 4);
    if (iVar25 != -1) {
      lVar13 = *(longlong *)&(this->TaskSuccessors).field_0x0;
      do {
        lVar12 = (longlong)iVar25 * 0x60;
        if (*(ulong64 *)(lVar12 + lVar13) == param_1) {
          pTVar19 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                     *)(lVar13 + 8 + lVar12);
          if ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
              local_1528 != pTVar19) {
            TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
            Move<TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>
                      ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                        *)local_1528,pTVar19);
          }
          TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                           *)&this->TaskSuccessors,iVar25);
          iStack_15a8 = 0;
          local_1590 = 0;
          uStack_15a4 = 1;
          uStack_1594 = 0;
          if (local_1500 == 0) goto LAB_149cd20b0;
          puVar16 = (uint *)(local_1528 + 0x10);
          if (local_1508 != (uint *)0x0) {
            puVar16 = local_1508;
          }
          uVar28 = *puVar16;
          if (uVar28 != 0) goto LAB_149cd208c;
          goto LAB_149cd2070;
        }
        iVar25 = *(int *)(lVar12 + 0x58 + lVar13);
      } while (iVar25 != -1);
    }
  }
  goto LAB_149cd24fe;
code_r0x000149cd2291:
  iVar25 = (int)puVar14[0x2a];
  if (iVar25 == -1) goto LAB_149cd24d4;
  goto LAB_149cd2280;
  while (uVar28 = puVar16[lVar13 + 1], uVar28 == 0) {
LAB_149cd2070:
    lVar13 = (longlong)iStack_15a8;
    local_1590 = local_1590 + 0x20;
    iStack_15a8 = iStack_15a8 + 1;
    uStack_1594 = local_1500;
    if ((int)(((int)(local_1500 - 1) >> 0x1f & 0x1fU) + (local_1500 - 1)) >> 5 < iStack_15a8)
    goto LAB_149cd20b0;
  }
LAB_149cd208c:
  uStack_15a4 = -uVar28 & uVar28;
  uVar20 = (ulonglong)uStack_15a4 * 2 + 1;
  lVar13 = 0x3f;
  if (uVar20 != 0) {
    for (; uVar20 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  local_15d8 = (int)lVar13;
  uStack_1594 = local_15d8 + -1 + local_1590;
  if ((int)local_1500 < (int)uStack_1594) {
    uStack_1594 = local_1500;
  }
LAB_149cd20b0:
  local_15b0 = (longlong *)local_1528;
  uStack_158c = local_1534;
  uVar28 = local_1500 & 0xffffffe0;
  iStack_1588 = local_1528._8_4_ - local_14f4;
  local_15a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1528 + 0x10);
  uStack_1598 = 0xffffffff;
  TStack_1578.CurrentBitIndex = uStack_1594;
  TStack_1578.UnvisitedBitMask = 0xffffffff;
  TStack_1578._padding_ = CONCAT44(uStack_15a4,iStack_15a8);
  iVar25 = (int)local_1500 >> 5;
  bVar15 = (byte)local_1500;
  local_1604 = local_1500;
  TStack_1578._28_4_ = local_1534;
  TStack_1578.BaseBitIndex = local_1590;
  uStack_1558 = CONCAT44(uStack_1584,iStack_1588);
  local_1580 = local_15b0;
  TStack_1578.Array = local_15a0;
  if (((int)local_1500 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  if (local_1604 != local_1500) {
    puVar16 = (uint *)(local_1528 + 0x10);
    if (local_1508 != (uint *)0x0) {
      puVar16 = local_1508;
    }
    uVar22 = -1 << (bVar15 & 0x1f) & puVar16[iVar25];
    while (uVar22 == 0) {
      lVar13 = (longlong)iVar25;
      uVar28 = uVar28 + 0x20;
      iVar25 = iVar25 + 1;
      if ((int)(((int)(local_1500 - 1) >> 0x1f & 0x1fU) + (local_1500 - 1)) >> 5 < iVar25) {
        local_1604 = local_1500;
        goto LAB_149cd21c9;
      }
      uVar22 = puVar16[lVar13 + 1];
    }
    uVar20 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_15d4 = (int)lVar13;
    local_1604 = local_15d4 + -1 + uVar28;
    if ((int)local_1500 < (int)local_1604) {
      local_1604 = local_1500;
    }
  }
LAB_149cd21c9:
  uVar28 = local_1604;
  while( true ) {
    plVar7 = local_1580;
    if ((int)local_1580[1] - *(int *)((longlong)local_1580 + 0x34) != (int)uStack_1558) {
      local_1600 = 0;
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1600);
    }
    if (((TStack_1578.CurrentBitIndex == uVar28) &&
        (TStack_1578.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1528 + 0x10))) &&
       (uVar8 = local_15fe, plVar7 == (longlong *)local_1528)) break;
    local_1608 = '\x01';
    local_15d0 = *(ulonglong *)(*plVar7 + (longlong)TStack_1578.CurrentBitIndex * 0x10);
    local_15c8 = local_15d0 >> 0x20;
    if (*(int *)&(this->Tasks).field_0x8 != *(int *)&(this->Tasks).field_0x34) {
      puVar18 = *(undefined1 **)&(this->Tasks).field_0x40;
      puVar27 = &(this->Tasks).field_0x38;
      if (puVar18 != (undefined1 *)0x0) {
        puVar27 = puVar18;
      }
      iVar25 = *(int *)(puVar27 +
                       (local_15c8 * 0x17 + local_15d0 &
                       (ulonglong)(*(int *)&(this->Tasks).field_0x48 - 1)) * 4);
      if (iVar25 != -1) {
LAB_149cd2280:
        puVar14 = (ulonglong *)((longlong)iVar25 * 0x158 + *(longlong *)&this->Tasks);
        if (*puVar14 != local_15d0) goto code_r0x000149cd2291;
        FVar26 = (ForElementType<FPCGGraphTask>)(puVar14 + 1);
        if (puVar14 == (ulonglong *)0x0) {
          FVar26 = (ForElementType<FPCGGraphTask>)0x0;
        }
        uVar28 = local_1604;
        if (FVar26 != (ForElementType<FPCGGraphTask>)0x0) {
          iVar25 = *(int *)((longlong)FVar26 + 8);
          if (iVar25 < 1) goto LAB_149cd23a1;
          puVar14 = *(ulonglong **)FVar26;
          puVar29 = puVar14 + (longlong)iVar25 * 0x10;
          while( true ) {
            if (*(int *)((longlong)FVar26 + 8) != iVar25) {
              local_15ff = 0;
              `TCheckedPointerIterator<FPCGGraphTaskInput,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_15ff);
            }
            if (puVar14 == puVar29) break;
            uVar20 = *puVar14;
            if (*(int *)&(this->TaskOutputs).field_0x8 != *(int *)&(this->TaskOutputs).field_0x34) {
              puVar18 = *(undefined1 **)&(this->TaskOutputs).field_0x40;
              puVar27 = &(this->TaskOutputs).field_0x38;
              if (puVar18 != (undefined1 *)0x0) {
                puVar27 = puVar18;
              }
              iVar10 = *(int *)(puVar27 +
                               ((uVar20 >> 0x20) * 0x17 + uVar20 &
                               (ulonglong)(*(int *)&(this->TaskOutputs).field_0x48 - 1)) * 4);
              if (iVar10 != -1) {
                do {
                  if (*(ulonglong *)(*(longlong *)&this->TaskOutputs + (longlong)iVar10 * 0x50) ==
                      uVar20) goto LAB_149cd236f;
                  iVar10 = *(int *)(*(longlong *)&this->TaskOutputs + 0x48 + (longlong)iVar10 * 0x50
                                   );
                } while (iVar10 != -1);
              }
            }
            iVar10 = -1;
LAB_149cd236f:
            cVar17 = '\0';
            if (iVar10 != -1) {
              cVar17 = local_1608;
            }
            puVar14 = puVar14 + 0x10;
            local_1608 = cVar17;
          }
          uVar28 = local_1604;
          if (local_1608 != '\0') {
LAB_149cd23a1:
            uVar20 = local_15d0;
            FVar23 = (ForElementType<FPCGGraphTask>)&local_14d8;
            if (local_14d8.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
              FVar23 = local_14d8.SecondaryData;
            }
            if ((ulonglong)FVar23 <= (ulonglong)FVar26) {
              FVar23 = (ForElementType<FPCGGraphTask>)&local_14d8;
              if (local_14d8.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
                FVar23 = local_14d8.SecondaryData;
              }
              if ((ulonglong)FVar26 <
                  (ulonglong)((longlong)(int)local_4c * 0x148 + (longlong)FVar23)) {
                local_1620 = (longlong)(int)local_50;
                local_1618 = 0x148;
                local_1630 = (ForElementType<FPCGGraphTask>)&local_14d8;
                if (local_14d8.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
                  local_1630 = local_14d8.SecondaryData;
                }
                local_1638 = FVar26;
                local_1628 = (longlong)(int)local_4c;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar5 = (code *)swi(3);
                  pTVar11 = (TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar11;
                }
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGGraphTask>_>
                                   (0x148,8,&local_14d8,(int *)&local_4c);
            }
            FVar23 = (ForElementType<FPCGGraphTask>)&local_14d8;
            if (local_14d8.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
              FVar23 = local_14d8.SecondaryData;
            }
            lVar13 = (longlong)(int)local_50;
            local_50 = local_50 + 1;
            FPCGGraphTask::FPCGGraphTask
                      ((FPCGGraphTask *)(lVar13 * 0x148 + (longlong)FVar23),(FPCGGraphTask *)FVar26)
            ;
            LOCK();
            this->NewReadyTaskCount = (atomic<int>)((int)this->NewReadyTaskCount + 1);
            UNLOCK();
            local_15c0 = uVar20;
            uVar28 = local_1604;
            if (*(int *)&(this->Tasks).field_0x8 != *(int *)&(this->Tasks).field_0x34) {
              TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
              ::RemoveImpl<unsigned___int64>
                        ((TSet<TTuple<unsigned___int64,FPCGGraphTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphTask,0>,FDefaultSetAllocator>
                          *)&this->Tasks,(int)local_15c8 * 0x17 + (int)uVar20,&local_15c0);
              uVar28 = local_1604;
            }
          }
        }
      }
    }
LAB_149cd24d4:
    TStack_1578.UnvisitedBitMask = TStack_1578.UnvisitedBitMask & ~TStack_1578._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1578);
  }
LAB_149cd24fe:
  uVar28 = local_50;
  pTVar11 = local_15e0;
  if (&this->TaskOutputsLock != (FSpinLock *)0x0) {
    (this->TaskOutputsLock).bFlag = (atomic<bool>)0x0;
  }
  if (&this->TasksLock != (FSpinLock *)0x0) {
    (this->TasksLock).bFlag = (atomic<bool>)0x0;
  }
  uVar20 = (ulonglong)(int)local_50;
  FVar26 = (ForElementType<FPCGGraphTask>)&local_14d8;
  if (local_14d8.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
    FVar26 = local_14d8.SecondaryData;
  }
  FVar23 = (ForElementType<FPCGGraphTask>)(uVar20 * 0x148 + (longlong)FVar26);
  while( true ) {
    if ((uint)uVar20 != uVar28) {
      local_15fd = 0;
      `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_15fd);
    }
    if (FVar26 == FVar23) break;
    OnTaskInputsReady(this,(FPCGGraphTask *)FVar26,pTVar11,(bool)uVar8);
    LOCK();
    this->NewReadyTaskCount = (atomic<int>)((int)this->NewReadyTaskCount + -1);
    UNLOCK();
    uVar20 = (ulonglong)local_50;
    FVar26 = (ForElementType<FPCGGraphTask>)((longlong)FVar26 + 0x148);
  }
  pFVar1 = &this->PausedTaskSuccessorsLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  uVar6 = local_15b8;
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  local_15f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_15f8.ArrayNum = 0;
  local_15f8.ArrayMax = 0;
  bVar9 = TMap<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>_>
          ::RemoveAndCopyValue(&this->PausedTaskSuccessors,local_15b8,&local_15f8);
  if (bVar9) {
    iVar25 = local_15f8.ArrayNum;
    uVar20 = (ulonglong)(int)local_15e8;
    pTVar30 = (TSharedPtr<FPCGGraphActiveTask,1> *)
              (local_15f8.AllocatorInstance.Data + (longlong)local_15f8.ArrayNum * 0x10);
    FVar24.Data = local_15f8.AllocatorInstance.Data;
    while( true ) {
      if (local_15f8.ArrayNum != iVar25) {
        local_15fc[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FPCGGraphActiveTask,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_15fc);
      }
      if ((TSharedPtr<FPCGGraphActiveTask,1> *)FVar24.Data == pTVar30) break;
      if ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar24.Data)->Object == (FPCGGraphActiveTask *)0x0)
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *)
                  (*pcVar5)();
        return pTVar11;
      }
      pFVar3 = (((TSharedPtr<FPCGGraphActiveTask,1> *)FVar24.Data)->Object->Context).Ptr;
      if (*(int *)&(pFVar3->DynamicDependencies).Elements.field_0x8 !=
          *(int *)&(pFVar3->DynamicDependencies).Elements.field_0x34) {
        FVar4 = (pFVar3->DynamicDependencies).Hash.SecondaryData;
        FVar21 = (ForElementType<FSetElementId>)&(pFVar3->DynamicDependencies).Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar21 = FVar4;
        }
        iVar10 = *(int *)((longlong)FVar21 +
                         ((longlong)(pFVar3->DynamicDependencies).HashSize - 1U & uVar20) * 4);
        if (iVar10 != -1) {
          lVar13 = *(longlong *)&(pFVar3->DynamicDependencies).Elements;
          do {
            if (*(ulong64 *)(lVar13 + (longlong)iVar10 * 0x10) == uVar6) {
              TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
              RemoveByIndex(&pFVar3->DynamicDependencies,iVar10);
              break;
            }
            iVar10 = *(int *)(lVar13 + 8 + (longlong)iVar10 * 0x10);
          } while (iVar10 != -1);
        }
      }
      if ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar24.Data)->Object == (FPCGGraphActiveTask *)0x0)
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *)
                  (*pcVar5)();
        return pTVar11;
      }
      pFVar3 = (((TSharedPtr<FPCGGraphActiveTask,1> *)FVar24.Data)->Object->Context).Ptr;
      if (*(int *)&(pFVar3->DynamicDependencies).Elements.field_0x8 ==
          *(int *)&(pFVar3->DynamicDependencies).Elements.field_0x34) {
        if ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar24.Data)->Object ==
             (FPCGGraphActiveTask *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<FPCGGraphExecutor::FCachedResult_*,TSizedDefaultAllocator<32>_> *)
                    (*pcVar5)();
          return pTVar11;
        }
        ((((TSharedPtr<FPCGGraphActiveTask,1> *)FVar24.Data)->Object->Context).Ptr)->bIsPaused =
             false;
      }
      FVar24.Data = FVar24.Data + 0x10;
    }
  }
  FVar24.Data = local_15f8.AllocatorInstance.Data;
  DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>
            ((TSharedPtr<FPCGGraphActiveTask,1> *)local_15f8.AllocatorInstance.Data,
             local_15f8.ArrayNum);
  if ((TSharedPtr<FPCGGraphActiveTask,1> *)FVar24.Data != (TSharedPtr<FPCGGraphActiveTask,1> *)0x0)
  {
    FMemory::Free(FVar24.Data);
  }
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  FVar26 = (ForElementType<FPCGGraphTask>)&local_14d8;
  if (local_14d8.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
    FVar26 = local_14d8.SecondaryData;
  }
  DestructItems<FPCGGraphTask,int>((FPCGGraphTask *)FVar26,local_50);
  if (local_14d8.SecondaryData != (ForElementType<FPCGGraphTask>)0x0) {
    FMemory::Free((void *)local_14d8.SecondaryData);
  }
  local_14e0 = 0;
  if (local_14e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_14e8);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1528);
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_15e0;
}

// RemoveReleasedContextForGC @ 149cd8090

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
FPCGGraphExecutor::RemoveReleasedContextForGC(FPCGGraphExecutor *this,FPCGContext *param_1)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar1 = &this->ReleasedContextLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  iVar5 = TSet<FPCGContext_*,DefaultKeyFuncs<FPCGContext_*,0>,FDefaultSetAllocator>::Remove
                    (&this->ReleasedContextsForGC,param_1);
  if ((iVar5 < 1) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<834425404453292595>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xa33,"ReleasedContextsForGC.Remove(InContext) > 0"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  return;
}

// RemoveTaskFromInputSuccessors @ 149cd8170

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
FPCGGraphExecutor::RemoveTaskFromInputSuccessors
          (FPCGGraphExecutor *this,ulong64 param_1,
          TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *param_2)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar1 = &this->TasksLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  if (aVar2 == (atomic<bool>)0x0) {
    RemoveTaskFromInputSuccessorsNoLock(this,param_1,param_2);
    if (pFVar1 == (FSpinLock *)0x0) {
      return;
    }
  }
  else {
    do {
      aVar2 = pFVar1->bFlag;
      while (aVar2 != (atomic<bool>)0x0) {
        aVar2 = pFVar1->bFlag;
      }
      LOCK();
      aVar2 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    } while (aVar2 != (atomic<bool>)0x0);
    RemoveTaskFromInputSuccessorsNoLock(this,param_1,param_2);
  }
  pFVar1->bFlag = (atomic<bool>)0x0;
  return;
}

// RemoveTaskFromInputSuccessorsNoLock @ 149cd8230

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
FPCGGraphExecutor::RemoveTaskFromInputSuccessorsNoLock
          (FPCGGraphExecutor *this,ulong64 param_1,
          TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *param_2)

{
  TMap<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined1 *puVar7;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_01;
  FScriptContainerElement *pFVar8;
  ForElementType<FSetElementId> FVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [8];
  
  iVar1 = param_2->ArrayNum;
  pFVar8 = (param_2->AllocatorInstance).Data;
  pFVar10 = pFVar8 + (longlong)iVar1 * 0x80;
LAB_149cd8266:
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGGraphTaskInput_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar8 == pFVar10) {
      return;
    }
    uVar2 = *(ulonglong *)pFVar8;
    this_00 = &this->TaskSuccessors;
    if (*(int *)&(this->TaskSuccessors).field_0x8 == *(int *)&(this->TaskSuccessors).field_0x34)
    break;
    puVar3 = *(undefined1 **)&(this->TaskSuccessors).field_0x40;
    puVar7 = &(this->TaskSuccessors).field_0x38;
    if (puVar3 != (undefined1 *)0x0) {
      puVar7 = puVar3;
    }
    iVar5 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->TaskSuccessors).field_0x48 - 1) &
                              (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
    if (iVar5 == -1) break;
    do {
      puVar6 = (ulonglong *)((longlong)iVar5 * 0x60 + *(longlong *)&this_00->field_0x0);
      if (*puVar6 == uVar2) {
        this_01 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *
                  )(puVar6 + 1);
        if (puVar6 == (ulonglong *)0x0) {
          this_01 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                     *)0x0;
        }
        if (this_01 ==
            (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)0x0)
        goto LAB_149cd83ed;
        if (*(int *)&(this_01->Elements).field_0x8 == *(int *)&(this_01->Elements).field_0x34)
        goto LAB_149cd8372;
        FVar4 = (this_01->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this_01->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        iVar5 = *(int *)((longlong)FVar9 +
                        ((longlong)this_01->HashSize - 1U &
                        (longlong)((int)(param_1 >> 0x20) * 0x17 + (int)param_1)) * 4);
        if (iVar5 == -1) goto LAB_149cd8372;
        goto LAB_149cd8353;
      }
      iVar5 = (int)puVar6[0xb];
    } while (iVar5 != -1);
    pFVar8 = pFVar8 + 0x80;
  }
  goto LAB_149cd83ed;
  while (iVar5 = *(int *)(*(longlong *)&this_01->Elements + 8 + (longlong)iVar5 * 0x10), iVar5 != -1
        ) {
LAB_149cd8353:
    if (*(ulong64 *)(*(longlong *)&this_01->Elements + (longlong)iVar5 * 0x10) == param_1) {
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::RemoveByIndex
                (this_01,iVar5);
      break;
    }
  }
LAB_149cd8372:
  if ((*(int *)&(this_01->Elements).field_0x8 == *(int *)&(this_01->Elements).field_0x34) &&
     (uVar2 = *(ulonglong *)pFVar8,
     *(int *)&(this->TaskSuccessors).field_0x8 != *(int *)&(this->TaskSuccessors).field_0x34)) {
    puVar3 = *(undefined1 **)&(this->TaskSuccessors).field_0x40;
    puVar7 = &(this->TaskSuccessors).field_0x38;
    if (puVar3 != (undefined1 *)0x0) {
      puVar7 = puVar3;
    }
    iVar5 = *(int *)(puVar7 + ((longlong)*(int *)&(this->TaskSuccessors).field_0x48 - 1U &
                              (longlong)((int)(uVar2 >> 0x20) * 0x17 + (int)uVar2)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x60 + *(longlong *)&this_00->field_0x0) == uVar2) {
          TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                           *)this_00,iVar5);
          goto LAB_149cd83ed;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x60 + 0x58 + *(longlong *)&this_00->field_0x0);
      } while (iVar5 != -1);
      pFVar8 = pFVar8 + 0x80;
      goto LAB_149cd8266;
    }
  }
LAB_149cd83ed:
  pFVar8 = pFVar8 + 0x80;
  goto LAB_149cd8266;
}

// Schedule @ 149cd99c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
FPCGGraphExecutor::Schedule
          (FPCGGraphExecutor *this,IPCGGraphExecutionSource *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2,FPCGStack *param_3)

{
  TSharedPtr<IPCGElement,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  longlong *plVar5;
  UPCGGraph *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_78;
  FSharedReferencer<1> FStack_70;
  TReferenceControllerBase<1> *local_68;
  FSharedReferencer<1> FStack_60;
  TSharedPtr<IPCGElement,1> local_58;
  TSharedPtr<IPCGElement,1> local_48;
  
  if (param_1 == (IPCGGraphExecutionSource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecutionSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                       ,0xf6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  plVar5 = (longlong *)(**(code **)((longlong)*param_1 + 0x18))(param_1);
  pUVar6 = (UPCGGraph *)(**(code **)(*plVar5 + 0x60))(plVar5);
  pTVar1 = &this->FetchInputElementPtr;
  pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  if (pTVar1->Object == (IPCGElement *)0x0) {
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      local_78 = ___xmm_00000000000000000000000000000010;
      pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_70.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8 = pTVar7 + 1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPCGFetchInputElement___00_SharedPointerInternals__6B_
      ;
      pTVar7[1]._padding_ = (longlong)&___7FPCGFetchInputElement__6B_;
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      FStack_70.ReferenceController = pTVar7;
      local_78 = pTVar8;
    }
    if (pTVar1 != (TSharedPtr<IPCGElement,1> *)&local_78) {
      pTVar1->Object = (IPCGElement *)pTVar8;
      local_78 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->FetchInputElementPtr).SharedReferenceCount,&FStack_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  local_58.Object = pTVar1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (this->FetchInputElementPtr).SharedReferenceCount.ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->PreGraphElementPtr;
  if (pTVar1->Object == (IPCGElement *)0x0) {
    pTVar7 = ::operator_new(0x18);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      local_68 = ___xmm_00000000000000000000000000000010;
      FStack_60.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9 = pTVar7 + 1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPCGPreGraphElement___00_SharedPointerInternals__6B_
      ;
      pTVar7[1]._padding_ = (longlong)&___7FPCGPreGraphElement__6B_;
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      FStack_60.ReferenceController = pTVar7;
      local_68 = pTVar9;
    }
    if (pTVar1 != (TSharedPtr<IPCGElement,1> *)&local_68) {
      pTVar1->Object = (IPCGElement *)pTVar9;
      local_68 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PreGraphElementPtr).SharedReferenceCount,&FStack_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  local_48.Object = pTVar1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (this->PreGraphElementPtr).SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = Schedule(this,pUVar6,param_1,&local_48,&local_58,param_2,param_3,true);
  return uVar4;
}

// Schedule @ 149cd9cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
FPCGGraphExecutor::Schedule
          (FPCGGraphExecutor *this,UPCGGraph *param_1,IPCGGraphExecutionSource *param_2,
          TSharedPtr<IPCGElement,1> *param_3,TSharedPtr<IPCGElement,1> *param_4,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_5,FPCGStack *param_6,
          bool param_7)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar2;
  ulong64 uVar3;
  ForAnyElementType local_88;
  undefined8 local_80;
  FPCGScheduleGraphParams local_78;
  
  local_88.Data = (FScriptContainerElement *)0x0;
  iVar1 = param_5->ArrayNum;
  _Src = (param_5->AllocatorInstance).Data;
  local_80 = CONCAT44(local_80._4_4_,iVar1);
  if (iVar1 == 0) {
    local_80 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_88,iVar1,(int *)((longlong)&local_80 + 4));
    memcpy(local_88.Data,_Src,(longlong)iVar1 << 3);
  }
  pTVar2 = (param_4->SharedReferenceCount).ReferenceController;
  local_78.InputElement.Object = param_4->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.PreGraphElement.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  local_78.PreGraphElement.Object = param_3->Object;
  if (local_78.PreGraphElement.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.PreGraphElement.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.PreGraphElement.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_78.PreGraphElement.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.PreGraphElement.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.ExternalDependencies.AllocatorInstance.Data = local_88.Data;
  local_78.ExternalDependencies.ArrayNum = (int)local_80;
  local_78.ExternalDependencies.ArrayMax = local_80._4_4_;
  local_78.FromStack = param_6;
  local_78.bAllowHierarchicalGeneration = param_7;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.Graph = param_1;
  local_78.ExecutionSource = param_2;
  local_78.InputElement.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.PreGraphElement.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  uVar3 = ScheduleGraph(this,&local_78);
  if (local_78.ExternalDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ExternalDependencies.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.InputElement.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.PreGraphElement.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return uVar3;
}

// ScheduleGeneric @ 149cd9e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
FPCGGraphExecutor::ScheduleGeneric(FPCGGraphExecutor *this,FPCGScheduleGenericParams *param_1)

{
  longlong lVar1;
  IPCGGraphExecutionSource *pIVar2;
  code *pcVar3;
  bool bVar4;
  TIntrusiveReferenceController<FPCGGenericElement,1> *pTVar5;
  ulong64 uVar6;
  TSharedRef<IPCGElement,1> local_28;
  
  lVar1 = *(longlong *)&param_1->AbortOperation;
  pIVar2 = param_1->ExecutionSource;
  pTVar5 = ::operator_new(0xc0);
  if (pTVar5 == (TIntrusiveReferenceController<FPCGGenericElement,1> *)0x0) {
    pTVar5 = (TIntrusiveReferenceController<FPCGGenericElement,1> *)0x0;
    local_28.Object = ___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    pTVar5 = SharedPointerInternals::TIntrusiveReferenceController<FPCGGenericElement,1>::
             TIntrusiveReferenceController<FPCGGenericElement,1><TFunction<bool___cdecl(FPCGContext_*)>_const_&,TFunction<void___cdecl(FPCGContext_*)>_const_&,bool_const_&,bool_const_&>
                       (pTVar5,&param_1->Operation,&param_1->AbortOperation,
                        &param_1->bSupportBasePointDataInput,&param_1->bCanExecuteOnlyOnMainThread);
    local_28.Object = (IPCGElement *)&pTVar5->ObjectStorage;
    if (local_28.Object == (IPCGElement *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar5;
    if (pTVar5 != (TIntrusiveReferenceController<FPCGGenericElement,1> *)0x0) {
      LOCK();
      *(int *)&pTVar5->_padding_ = (int)pTVar5->_padding_ + 1;
      UNLOCK();
    }
  }
  uVar6 = ScheduleSingleElement
                    (this,&local_28,lVar1 != 0,pIVar2,&param_1->ExecutionDependencies,
                     &param_1->DataDependencies);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar5);
  return uVar6;
}

// ScheduleGeneric @ 149cd9f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
FPCGGraphExecutor::ScheduleGeneric
          (FPCGGraphExecutor *this,TFunction<bool___cdecl(void)> *param_1,
          IPCGGraphExecutionSource *param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  TFunction<bool___cdecl(void)> local_98;
  TFunction<void___cdecl(void)> local_68;
  
  local_98._0_8_ = *(undefined8 *)param_1;
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  local_98._40_8_ = 0;
  if (local_98._0_8_ != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_98.field_0x10);
  }
  uVar1 = ScheduleGeneric(this,&local_98,&local_68,param_2,param_3);
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return uVar1;
}

// ScheduleGeneric @ 149cda010

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

ulong64 __thiscall
FPCGGraphExecutor::ScheduleGeneric
          (FPCGGraphExecutor *this,TFunction<bool___cdecl(void)> *param_1,
          TFunction<void___cdecl(void)> *param_2,IPCGGraphExecutionSource *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4)

{
  ulong64 uVar1;
  longlong *plVar2;
  undefined1 auStackY_158 [32];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_118;
  code *local_108 [5];
  undefined8 *local_e0;
  code *local_d8 [5];
  undefined8 *local_b0;
  longlong local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_50 = *(longlong **)&param_2->field_0x28;
  local_78 = *(longlong *)param_2;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_58 = *(undefined8 *)&param_2->field_0x20;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_68 = *(longlong *)&param_2->field_0x10;
  uStack_60 = *(undefined8 *)&param_2->field_0x18;
  if (local_78 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  local_108[0] = (code *)0x0;
  local_e0 = FMemory::Malloc(0x40,0x10);
  *local_e0 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::`2'::<lambda_2>,0,1>::
               _vftable_;
  plVar2 = local_e0 + 2;
  *plVar2 = local_78;
  local_e0[7] = local_50;
  local_50 = (longlong *)0x0;
  local_e0[4] = local_68;
  local_e0[5] = uStack_60;
  local_e0[6] = local_58;
  if (*plVar2 != 0) {
    local_78 = 0;
  }
  if (plVar2 != (longlong *)0x0) {
    local_108[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_2>,void,FPCGContext_*>
                   ::Call;
  }
  local_a8 = *(longlong *)param_1;
  local_80 = *(longlong **)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_88 = *(undefined8 *)&param_1->field_0x20;
  local_98 = *(longlong *)&param_1->field_0x10;
  uStack_90 = *(undefined8 *)&param_1->field_0x18;
  if (local_a8 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  local_d8[0] = (code *)0x0;
  local_b0 = FMemory::Malloc(0x40,0x10);
  *local_b0 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::`2'::<lambda_1>,0,1>::
               _vftable_;
  plVar2 = local_b0 + 2;
  *plVar2 = local_a8;
  local_b0[7] = local_80;
  local_80 = (longlong *)0x0;
  local_b0[4] = local_98;
  local_b0[5] = uStack_90;
  local_b0[6] = local_88;
  if (*plVar2 != 0) {
    local_a8 = 0;
  }
  if (plVar2 != (longlong *)0x0) {
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_1>,bool,FPCGContext_*>
                  ::Call;
  }
  uVar1 = ScheduleGenericWithContext
                    (this,(TFunction<bool___cdecl(FPCGContext_*)> *)local_d8,
                     (TFunction<void___cdecl(FPCGContext_*)> *)local_108,param_3,param_4,&local_118,
                     false);
  if (local_a8 != 0) {
    plVar2 = &local_98;
    if (local_80 != (longlong *)0x0) {
      plVar2 = local_80;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_78 != 0) {
    plVar2 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar2 = local_50;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if (*(longlong *)param_1 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return uVar1;
}

// ScheduleGenericWithContext @ 149cda250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
FPCGGraphExecutor::ScheduleGenericWithContext
          (FPCGGraphExecutor *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          IPCGGraphExecutionSource *param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  TFunction<bool___cdecl(FPCGContext_*)> local_98;
  TFunction<void___cdecl(FPCGContext_*)> local_68;
  
  local_98._0_8_ = *(undefined8 *)param_1;
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  local_98._40_8_ = 0;
  if (local_98._0_8_ != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_98.field_0x10);
  }
  uVar1 = ScheduleGenericWithContext(this,&local_98,&local_68,param_2,param_3,param_4,param_5);
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return uVar1;
}

// ScheduleGenericWithContext @ 149cda320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
FPCGGraphExecutor::ScheduleGenericWithContext
          (FPCGGraphExecutor *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          TFunction<void___cdecl(FPCGContext_*)> *param_2,IPCGGraphExecutionSource *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_5,bool param_6)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TIntrusiveReferenceController<FPCGGenericElement,1> *pTVar4;
  ulong64 uVar5;
  longlong *plVar6;
  TSharedRef<IPCGElement,1> local_58;
  
  lVar1 = *(longlong *)param_2;
  pTVar4 = ::operator_new(0xc0);
  if (pTVar4 == (TIntrusiveReferenceController<FPCGGenericElement,1> *)0x0) {
    pTVar4 = (TIntrusiveReferenceController<FPCGGenericElement,1> *)0x0;
    local_58.Object = ___xmm_00000000000000000000000000000010;
    local_58.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    pTVar4 = SharedPointerInternals::TIntrusiveReferenceController<FPCGGenericElement,1>::
             TIntrusiveReferenceController<FPCGGenericElement,1><TFunction<bool___cdecl(FPCGContext_*)>_&,TFunction<void___cdecl(FPCGContext_*)>_&,bool_&>
                       (pTVar4,param_1,param_2,&param_6);
    local_58.Object = (IPCGElement *)&pTVar4->ObjectStorage;
    if (local_58.Object == (IPCGElement *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
    }
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar4;
    if (pTVar4 != (TIntrusiveReferenceController<FPCGGenericElement,1> *)0x0) {
      LOCK();
      *(int *)&pTVar4->_padding_ = (int)pTVar4->_padding_ + 1;
      UNLOCK();
    }
  }
  uVar5 = ScheduleSingleElement(this,&local_58,lVar1 != 0,param_3,param_4,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar4);
  if (*(longlong *)param_1 != 0) {
    plVar6 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return uVar5;
}

// ScheduleGraph @ 149cda490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
FPCGGraphExecutor::ScheduleGraph(FPCGGraphExecutor *this,FPCGScheduleGraphParams *param_1)

{
  FSpinLock *pFVar1;
  int *piVar2;
  atomic<bool> aVar3;
  FPCGStackContext *pFVar4;
  IPCGElement *pIVar5;
  IPCGGraphExecutionSource *pIVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong64 uVar13;
  UPCGComponent *this_00;
  UClass *pUVar14;
  TReferenceControllerBase<1> *pTVar15;
  UObject *pUVar16;
  UObject *pUVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  FPCGStackContext *this_01;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *pTVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> local_f8;
  TReferenceControllerBase<1> *local_e8;
  FPCGStack local_e0;
  FWeakObjectPtr local_c8;
  FPCGStackContext *pFStack_c0;
  FWeakObjectPtr local_b8;
  IPCGGraphExecutionSource *pIStack_b0;
  atomic<bool> *local_a8;
  ulong64 local_a0;
  FPCGStackContext *local_98;
  FSharedReferencer<1> local_90;
  UObject *local_88;
  undefined8 local_80;
  UObject *local_78;
  TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *local_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  IPCGElement *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  if ((param_1->ExecutionSource == (IPCGGraphExecutionSource *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InParams.ExecutionSource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0x10a,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return uVar13;
  }
  PCGGraphExecutionLogging::LogGraphSchedule(param_1->ExecutionSource,param_1->Graph);
  local_a0 = 0xffffffffffffffff;
  uVar10 = PCGHiGenGrid::UninitializedGridSize();
  if ((((param_1->bAllowHierarchicalGeneration != false) &&
       (param_1->Graph->bUseHierarchicalGeneration != false)) &&
      (param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0)) &&
     (this_00 = (UPCGComponent *)(**(code **)((longlong)*param_1->ExecutionSource + 8))(),
     this_00 != (UPCGComponent *)0x0)) {
    pUVar14 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar11 = (int)pUVar14->_padding_;
    if (((iVar11 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
         &pUVar14->_padding_)) &&
       ((this_00->bIsComponentLocal != false ||
        (bVar9 = UPCGComponent::IsPartitioned(this_00), bVar9)))) {
      uVar10 = this_00->GenerationGridSize;
    }
  }
  pTVar15 = ::operator_new(0x30);
  pUVar17 = (UObject *)0x0;
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
    local_e8 = (TReferenceControllerBase<1> *)0x0;
    this_01 = (FPCGStackContext *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar15->SharedReferenceCount = (atomic<int>)0x1;
    pTVar15->WeakReferenceCount = (atomic<int>)0x1;
    pTVar15->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFPCGStackContext___00_SharedPointerInternals__6B_;
    pTVar15[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[1]._padding_ = -1;
    pTVar15[2].SharedReferenceCount = (atomic<int>)0xffffffff;
    this_01 = (FPCGStackContext *)(pTVar15 + 1);
    pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[2]._padding_ = 0;
    local_e8 = pTVar15;
    if ((this_01 == (FPCGStackContext *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return uVar13;
    }
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    if ((this_01 == (FPCGStackContext *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return uVar13;
    }
  }
  FPCGGraphCompiler::GetCompiledTasks
            (&this->GraphCompiler,&local_f8,param_1->Graph,uVar10,this_01,true);
  if (param_1->FromStack == (FPCGStack *)0x0) {
    local_e0.GraphExecutionTaskId = 0xffffffffffffffff;
    local_e0.StackFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.StackFrames.ArrayNum = 0;
    local_e0.StackFrames.ArrayMax = 0;
    iVar11 = 0;
    if (param_1->ExecutionSource == (IPCGGraphExecutionSource *)0x0) {
LAB_149cda6ed:
      pUVar16 = pUVar17;
    }
    else {
      pUVar16 = (UObject *)(**(code **)((longlong)*param_1->ExecutionSource + 8))();
      iVar11 = local_e0.StackFrames.ArrayNum;
      if (pUVar16 == (UObject *)0x0) goto LAB_149cda6ed;
    }
    if (iVar11 == local_e0.StackFrames.ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_e0.StackFrames.AllocatorInstance,
                          &local_e0.StackFrames.ArrayMax);
    }
    local_e0.StackFrames.ArrayNum = iVar11 + 1;
    FPCGStackFrame::FPCGStackFrame
              ((FPCGStackFrame *)
               (local_e0.StackFrames.AllocatorInstance.Data + (longlong)iVar11 * 0x30),pUVar16);
    if ((this_01 == (FPCGStackContext *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return uVar13;
    }
    FPCGStackContext::PrependParentStack(this_01,&local_e0);
    DestructItems<FPCGStackFrame,int>
              ((FPCGStackFrame *)local_e0.StackFrames.AllocatorInstance.Data,
               local_e0.StackFrames.ArrayNum);
    if ((FPCGStackFrame *)local_e0.StackFrames.AllocatorInstance.Data != (FPCGStackFrame *)0x0) {
      FMemory::Free(local_e0.StackFrames.AllocatorInstance.Data);
    }
  }
  else {
    if ((this_01 == (FPCGStackContext *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return uVar13;
    }
    FPCGStackContext::PrependParentStack(this_01,param_1->FromStack);
  }
  iVar11 = local_f8.ArrayNum;
  pFVar20 = local_f8.AllocatorInstance.Data + 0xa8;
  pFVar22 = local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 0x148;
  while( true ) {
    if (local_f8.ArrayNum != iVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGGraphTask,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar20 + -0xa8 == pFVar22) break;
    pFVar4 = (FPCGStackContext *)param_1->ExecutionSource;
    local_c8.ObjectIndex = 0;
    local_c8.ObjectSerialNumber = 0;
    pFStack_c0 = (FPCGStackContext *)0x0;
    if ((pFVar4 == (FPCGStackContext *)0x0) ||
       (local_88 = (UObject *)(**(code **)(pFVar4->GraphExecutionTaskId + 8))(pFVar4),
       local_88 == (UObject *)0x0)) {
      local_88 = pUVar17;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_88);
    }
    FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_88);
    bVar9 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar9) {
      pFStack_c0 = pFVar4;
    }
    local_90.ReferenceController = local_e8;
    *(FWeakObjectPtr *)(pFVar20 + -0x20) = local_c8;
    *(FPCGStackContext **)(pFVar20 + -0x18) = pFStack_c0;
    if (local_e8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_e8->SharedReferenceCount = (atomic<int>)((int)local_e8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98 = this_01;
    if (pFVar20 != (FScriptContainerElement *)&local_98) {
      *(FPCGStackContext **)pFVar20 = this_01;
      local_98 = (FPCGStackContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar20 + 8),&local_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.ReferenceController);
    pFVar20 = pFVar20 + 0x148;
  }
  if (local_f8.ArrayNum < 1) goto LAB_149cdadb6;
  if ((*(UPCGNode **)(local_f8.AllocatorInstance.Data + 0x98) !=
       (param_1->Graph->InputNode).field0_0x0.DebugPtr) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompiledTasks[0].Node == InParams.Graph->GetInputNode()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0x142,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return uVar13;
  }
  if ((local_f8.ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return uVar13;
  }
  pIVar5 = (param_1->InputElement).Object;
  pTVar15 = (param_1->InputElement).SharedReferenceCount.ReferenceController;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = *(undefined8 *)(local_f8.AllocatorInstance.Data + 0x78);
  pTStack_60 = *(TReferenceControllerBase<1> **)(local_f8.AllocatorInstance.Data + 0x80);
  *(IPCGElement **)(local_f8.AllocatorInstance.Data + 0x78) = pIVar5;
  *(TReferenceControllerBase<1> **)(local_f8.AllocatorInstance.Data + 0x80) = pTVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  pFVar1 = &this->ScheduleLock;
  local_a8 = &pFVar1->bFlag;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return uVar13;
  }
  LOCK();
  aVar3 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar3 != (atomic<bool>)0x0) {
    aVar3 = pFVar1->bFlag;
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = pFVar1->bFlag;
    }
    LOCK();
    aVar3 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  iVar11 = (this->ScheduledTasks).ArrayNum;
  piVar2 = &(this->ScheduledTasks).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&(this->ScheduledTasks).AllocatorInstance,piVar2);
  }
  (this->ScheduledTasks).ArrayNum = iVar11 + 1;
  pTVar23 = (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *)
            ((this->ScheduledTasks).AllocatorInstance.Data + (longlong)iVar11 * 0x30);
  pTVar23[1].ArrayNum = 0;
  pTVar23[1].ArrayMax = 0;
  pTVar23[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar23[2].ArrayNum = 0;
  pTVar23[2].ArrayMax = 0;
  (pTVar23->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar23->ArrayNum = 0;
  pTVar23->ArrayMax = 0;
  pTVar23[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_70 = pTVar23;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar23 + 1),(FObjectPtr)&local_80);
  pTVar23[1].ArrayNum = 0;
  pTVar23[1].ArrayMax = 0;
  pTVar23[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)&pTVar23[2].ArrayNum = 0;
  if (pTVar23 != &local_f8) {
    DestructItems<FPCGGraphTask,int>
              ((FPCGGraphTask *)(pTVar23->AllocatorInstance).Data,pTVar23->ArrayNum);
    pFVar20 = (pTVar23->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar23->AllocatorInstance).Data = local_f8.AllocatorInstance.Data;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar23->ArrayNum = local_f8.ArrayNum;
    pTVar23->ArrayMax = local_f8.ArrayMax;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
  }
  pIVar6 = param_1->ExecutionSource;
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  pIStack_b0 = (IPCGGraphExecutionSource *)0x0;
  if ((pIVar6 == (IPCGGraphExecutionSource *)0x0) ||
     (local_78 = (UObject *)(**(code **)((longlong)*pIVar6 + 8))(pIVar6), local_78 == (UObject *)0x0
     )) {
    local_78 = pUVar17;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_78);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_78);
  bVar9 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_b8,(void *)0x0);
  if (!bVar9) {
    pIStack_b0 = pIVar6;
  }
  pTVar23[1].AllocatorInstance.Data = (FScriptContainerElement *)local_b8;
  *(IPCGGraphExecutionSource **)&pTVar23[1].ArrayNum = pIStack_b0;
  FPCGGraphCompiler::OffsetNodeIds(pTVar23,this->NextTaskId,0xffffffffffffffff);
  this->NextTaskId = this->NextTaskId + (longlong)pTVar23->ArrayNum;
  local_a0 = this->NextTaskId - 1;
  uVar13 = local_a0;
  if (param_1->FromStack != (FPCGStack *)0x0) {
    uVar13 = param_1->FromStack->GraphExecutionTaskId;
  }
  if ((this_01 == (FPCGStackContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return uVar13;
  }
  if ((this_01->GraphExecutionTaskId != 0xffffffffffffffff) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphExecutionTaskId == InvalidPCGTaskId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGStackContext.cpp"
                         ,0x1b0,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return uVar13;
  }
  this_01->GraphExecutionTaskId = uVar13;
  iVar11 = (this_01->Stacks).ArrayNum;
  pFVar22 = (this_01->Stacks).AllocatorInstance.Data;
  pFVar20 = pFVar22 + (longlong)iVar11 * 0x18;
  while( true ) {
    if ((this_01->Stacks).ArrayNum != iVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGStack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar22 == pFVar20) break;
    *(ulong64 *)pFVar22 = this_01->GraphExecutionTaskId;
    pFVar22 = pFVar22 + 0x18;
  }
  iVar11 = pTVar23->ArrayNum;
  if (iVar11 < 2) {
LAB_149cdac2d:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScheduledTask.Tasks.Num() >= 2 && ScheduledTask.Tasks[ScheduledTask.Tasks.Num() - 2].Node == nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                       ,0x15b,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return uVar13;
    }
  }
  else {
    uVar19 = iVar11 - 2;
    uVar10 = 0;
    if ((int)uVar19 < iVar11) {
      uVar10 = ~uVar19 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return uVar13;
    }
    if (*(longlong *)((pTVar23->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x148 + 0x98) != 0
       ) goto LAB_149cdac2d;
  }
  uVar19 = pTVar23->ArrayNum - 2;
  uVar10 = 0;
  if ((int)uVar19 < pTVar23->ArrayNum) {
    uVar10 = ~uVar19 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return uVar13;
  }
  pIVar5 = (param_1->PreGraphElement).Object;
  pFVar20 = (pTVar23->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x148;
  if (pIVar5 != (IPCGElement *)0x0) {
    pTStack_50 = (param_1->PreGraphElement).SharedReferenceCount.ReferenceController;
    if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar15 = *(TReferenceControllerBase<1> **)&pFVar20[0x80].field_0x0;
    *(IPCGElement **)&pFVar20[0x78].field_0x0 = pIVar5;
    *(TReferenceControllerBase<1> **)&pFVar20[0x80].field_0x0 = pTStack_50;
    local_58 = pIVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  pFVar21 = (param_1->ExternalDependencies).AllocatorInstance.Data;
  iVar11 = (param_1->ExternalDependencies).ArrayNum;
  pFVar22 = pFVar21 + (longlong)iVar11 * 8;
  while( true ) {
    if ((param_1->ExternalDependencies).ArrayNum != iVar11) {
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar21 == pFVar22) break;
    iVar12 = *(int *)&pFVar20[8].field_0x0;
    uVar7 = *(undefined8 *)pFVar21;
    if (iVar12 == *(int *)(pFVar20 + 0xc)) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x880,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
    }
    *(int *)&pFVar20[8].field_0x0 = iVar12 + 1;
    pFVar18 = *(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)iVar12 * 0x80;
    *(undefined8 *)pFVar18 = uVar7;
    pFVar18[0x38] = (FScriptContainerElement)0x0;
    bVar9 = FPCGGraphTaskInput::NoPin.bIsSet;
    pFVar18[0x38] = (FScriptContainerElement)FPCGGraphTaskInput::NoPin.bIsSet;
    if (bVar9 != false) {
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar18 + 8),&FPCGGraphTaskInput::NoPin.TypedValue);
    }
    pFVar18[0x70] = (FScriptContainerElement)0x0;
    bVar9 = FPCGGraphTaskInput::NoPin.bIsSet;
    pFVar18[0x70] = (FScriptContainerElement)FPCGGraphTaskInput::NoPin.bIsSet;
    if (bVar9 != false) {
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar18 + 0x40),&FPCGGraphTaskInput::NoPin.TypedValue);
    }
    *(undefined2 *)(pFVar18 + 0x78) = 0x100;
    pFVar21 = pFVar21 + 8;
  }
  iVar11 = local_70->ArrayNum;
  *(int *)&local_70[2].AllocatorInstance.Data = iVar11 + -2;
  *(int *)((longlong)&local_70[2].AllocatorInstance.Data + 4) = iVar11 + -1;
  if (local_a8 != (atomic<bool> *)0x0) {
    *local_a8 = (atomic<bool>)0x0;
  }
LAB_149cdadb6:
  DestructItems<FPCGGraphTask,int>
            ((FPCGGraphTask *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((FPCGGraphTask *)local_f8.AllocatorInstance.Data != (FPCGGraphTask *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
  return local_a0;
}

// ScheduleSingleElement @ 149cdae30

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

ulong64 __thiscall
FPCGGraphExecutor::ScheduleSingleElement
          (FPCGGraphExecutor *this,TSharedRef<IPCGElement,1> *param_1,bool param_2,
          IPCGGraphExecutionSource *param_3,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  FSpinLock *pFVar2;
  int *piVar3;
  atomic<bool> aVar4;
  longlong lVar5;
  code *pcVar6;
  IPCGGraphExecutionSource *pIVar7;
  FPCGGraphExecutor *pFVar8;
  bool bVar9;
  int iVar10;
  ulong64 uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_258 [32];
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  FWeakObjectPtr local_200;
  IPCGGraphExecutionSource *pIStack_1f8;
  FWeakObjectPtr local_1f0;
  IPCGGraphExecutionSource *pIStack_1e8;
  TSharedRef<IPCGElement,1> *local_1e0;
  IPCGGraphExecutionSource *local_1d8;
  UObject *local_1d0;
  FPCGGraphExecutor *local_1c8;
  undefined8 local_1c0;
  UObject *local_1b8;
  undefined8 local_1b0;
  FSharedReferencer<1> local_1a8 [2];
  FPCGGraphTask local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_206 = param_2;
  local_1e0 = param_1;
  local_1d8 = param_3;
  local_1c8 = this;
  FPCGGraphTask::FPCGGraphTask(&local_198);
  pFVar13 = (param_4->AllocatorInstance).Data;
  iVar10 = param_4->ArrayNum;
  pFVar14 = pFVar13 + (longlong)iVar10 * 8;
  while( true ) {
    if (param_4->ArrayNum != iVar10) {
      local_208 = 0;
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_208);
    }
    pIVar7 = local_1d8;
    if (pFVar13 == pFVar14) break;
    lVar5 = *(longlong *)pFVar13;
    if ((lVar5 == -1) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<834425404453290754>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                           ,0x302,"TaskDependency != InvalidPCGTaskId"), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return uVar11;
    }
    if (local_198.Inputs.ArrayNum == local_198.Inputs.ArrayMax) {
      local_198.Inputs.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x880,(ForAnyElementType *)&local_198,&local_198.Inputs.ArrayMax);
    }
    iVar1 = local_198.Inputs.ArrayNum + 1;
    pFVar12 = local_198.Inputs.AllocatorInstance.Data + (longlong)local_198.Inputs.ArrayNum * 0x80;
    *(longlong *)pFVar12 = lVar5;
    pFVar12[0x38] = (FScriptContainerElement)0x0;
    bVar9 = FPCGGraphTaskInput::NoPin.bIsSet;
    pFVar12[0x38] = (FScriptContainerElement)FPCGGraphTaskInput::NoPin.bIsSet;
    local_198.Inputs.ArrayNum = iVar1;
    if (bVar9 != false) {
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar12 + 8),&FPCGGraphTaskInput::NoPin.TypedValue);
    }
    pFVar12[0x70] = (FScriptContainerElement)0x0;
    bVar9 = FPCGGraphTaskInput::NoPin.bIsSet;
    pFVar12[0x70] = (FScriptContainerElement)FPCGGraphTaskInput::NoPin.bIsSet;
    if (bVar9 != false) {
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar12 + 0x40),&FPCGGraphTaskInput::NoPin.TypedValue);
    }
    *(undefined2 *)(pFVar12 + 0x78) = 0x100;
    pFVar13 = pFVar13 + 8;
  }
  pFVar13 = (param_5->AllocatorInstance).Data;
  iVar10 = param_5->ArrayNum;
  pFVar14 = pFVar13 + (longlong)iVar10 * 8;
  while( true ) {
    if (param_5->ArrayNum != iVar10) {
      local_207 = 0;
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_207);
    }
    if (pFVar13 == pFVar14) break;
    lVar5 = *(longlong *)pFVar13;
    if ((lVar5 == -1) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<834425404453290760>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                           ,0x308,"TaskDependency != InvalidPCGTaskId"), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return uVar11;
    }
    if (local_198.Inputs.ArrayNum == local_198.Inputs.ArrayMax) {
      local_198.Inputs.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x880,(ForAnyElementType *)&local_198,&local_198.Inputs.ArrayMax);
    }
    iVar1 = local_198.Inputs.ArrayNum + 1;
    pFVar12 = local_198.Inputs.AllocatorInstance.Data + (longlong)local_198.Inputs.ArrayNum * 0x80;
    *(longlong *)pFVar12 = lVar5;
    pFVar12[0x38] = (FScriptContainerElement)0x0;
    bVar9 = FPCGGraphTaskInput::NoPin.bIsSet;
    pFVar12[0x38] = (FScriptContainerElement)FPCGGraphTaskInput::NoPin.bIsSet;
    local_198.Inputs.ArrayNum = iVar1;
    if (bVar9 != false) {
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar12 + 8),&FPCGGraphTaskInput::NoPin.TypedValue);
    }
    pFVar12[0x70] = (FScriptContainerElement)0x0;
    bVar9 = FPCGGraphTaskInput::NoPin.bIsSet;
    pFVar12[0x70] = (FScriptContainerElement)FPCGGraphTaskInput::NoPin.bIsSet;
    if (bVar9 != false) {
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar12 + 0x40),&FPCGGraphTaskInput::NoPin.TypedValue);
    }
    *(undefined2 *)(pFVar12 + 0x78) = 1;
    pFVar13 = pFVar13 + 8;
  }
  local_200.ObjectIndex = 0;
  local_200.ObjectSerialNumber = 0;
  pIStack_1f8 = (IPCGGraphExecutionSource *)0x0;
  if ((pIVar7 == (IPCGGraphExecutionSource *)0x0) ||
     (local_1d0 = (UObject *)(**(code **)((longlong)*pIVar7 + 8))(pIVar7),
     local_1d0 == (UObject *)0x0)) {
    local_1d0 = (UObject *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1d0);
  }
  FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d0);
  bVar9 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_200,(void *)0x0);
  if (!bVar9) {
    pIStack_1f8 = pIVar7;
  }
  local_1a8[0].ReferenceController = (local_1e0->SharedReferenceCount).ReferenceController;
  local_198.Element.Object = local_1e0->Object;
  local_198.ExecutionSource.ObjectInstance.WeakPtr = local_200;
  if (local_1a8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1a8[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1b0 = 0;
  local_198.ExecutionSource.InterfaceInstance = pIStack_1f8;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_198.Element.SharedReferenceCount,local_1a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8[0].ReferenceController);
  pFVar8 = local_1c8;
  pFVar2 = &local_1c8->ScheduleLock;
  if ((pFVar2 == (FSpinLock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return uVar11;
  }
  LOCK();
  aVar4 = pFVar2->bFlag;
  pFVar2->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar4 != (atomic<bool>)0x0) {
    aVar4 = pFVar2->bFlag;
    while (aVar4 != (atomic<bool>)0x0) {
      aVar4 = pFVar2->bFlag;
    }
    LOCK();
    aVar4 = pFVar2->bFlag;
    pFVar2->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  local_198.NodeId = pFVar8->NextTaskId;
  piVar3 = &(pFVar8->ScheduledTasks).ArrayMax;
  pFVar8->NextTaskId = local_198.NodeId + 1;
  iVar10 = (pFVar8->ScheduledTasks).ArrayNum;
  if (iVar10 == *piVar3) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&(pFVar8->ScheduledTasks).AllocatorInstance,piVar3);
  }
  pFVar14 = (pFVar8->ScheduledTasks).AllocatorInstance.Data;
  (pFVar8->ScheduledTasks).ArrayNum = iVar10 + 1;
  pFVar14 = pFVar14 + (longlong)iVar10 * 0x30;
  *(undefined8 *)&pFVar14[0x18].field_0x0 = 0;
  *(undefined8 *)&pFVar14[0x20].field_0x0 = 0;
  *(undefined8 *)&pFVar14[0x28].field_0x0 = 0;
  *(undefined8 *)&pFVar14->field_0x0 = 0;
  *(undefined8 *)&pFVar14[8].field_0x0 = 0;
  *(undefined8 *)&pFVar14[0x10].field_0x0 = 0;
  local_1c0 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar14 + 0x10),(FObjectPtr)&local_1c0);
  *(undefined8 *)&pFVar14[0x18].field_0x0 = 0;
  *(undefined8 *)&pFVar14[0x20].field_0x0 = 0;
  pFVar14[0x28].field_0x0 = 0;
  if (((*(FPCGGraphTask **)&pFVar14->field_0x0 <= &local_198) &&
      (&local_198 < *(FPCGGraphTask **)&pFVar14->field_0x0 + *(int *)(pFVar14 + 0xc))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return uVar11;
  }
  iVar10 = *(int *)&pFVar14[8].field_0x0;
  if (iVar10 == *(int *)(pFVar14 + 0xc)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x148,8,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
  }
  *(int *)&pFVar14[8].field_0x0 = iVar10 + 1;
  FPCGGraphTask::FPCGGraphTask
            ((FPCGGraphTask *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar10 * 0x148),
             &local_198);
  local_1f0.ObjectIndex = 0;
  local_1f0.ObjectSerialNumber = 0;
  pIStack_1e8 = (IPCGGraphExecutionSource *)0x0;
  if ((pIVar7 == (IPCGGraphExecutionSource *)0x0) ||
     (local_1b8 = (UObject *)(**(code **)((longlong)*pIVar7 + 8))(pIVar7),
     local_1b8 == (UObject *)0x0)) {
    local_1b8 = (UObject *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1b8);
  }
  FWeakObjectPtr::operator=(&local_1f0,(FObjectPtr)&local_1b8);
  bVar9 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_1f0,(void *)0x0);
  uVar11 = local_198.NodeId;
  if (!bVar9) {
    pIStack_1e8 = pIVar7;
  }
  *(FWeakObjectPtr *)(pFVar14 + 0x10) = local_1f0;
  *(IPCGGraphExecutionSource **)&pFVar14[0x18].field_0x0 = pIStack_1e8;
  pFVar14[0x28].field_0x0 = local_206;
  if (pFVar2 != (FSpinLock *)0x0) {
    pFVar2->bFlag = (atomic<bool>)0x0;
  }
  FPCGGraphTask::~FPCGGraphTask(&local_198);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1e0->SharedReferenceCount).ReferenceController);
  return uVar11;
}

// SetupTask @ 149cdcab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGGraphExecutor::SetupTask
          (FPCGGraphExecutor *this,FPCGGraphTask *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  TSharedPtr<IPCGElement,1> *pTVar1;
  FPlatformRWLock *SRWLock;
  EPCGElementSource EVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TSharedRef<FPCGTrivialElement,1> *pTVar6;
  TSharedPtr<IPCGElement,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  UPCGSettings *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  FSharedReferencer<1> FVar11;
  IPCGElement *pIVar12;
  bool bVar13;
  IPCGElement *local_a8;
  FSharedReferencer<1> local_a0;
  TReferenceControllerBase<1> *local_98;
  FSharedReferencer<1> FStack_90;
  FPCGTrivialElement *local_88;
  FSharedReferencer<1> local_80;
  TSharedPtr<IPCGElement,1> local_78;
  TSharedRef<FPCGTrivialElement,1> local_68;
  TSharedPtr<IPCGElement,1> local_58;
  TSharedPtr<IPCGElement,1> local_48;
  TSharedPtr<IPCGElement,1> local_38;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1308,"FPCGGraphExecutor::SetupTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x51c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1308);
  }
  if (param_1->bHasDoneSetup == false) {
    param_1->bHasDoneSetup = true;
    BuildTaskInput(this,param_1,param_2);
    pTVar1 = &param_1->Element;
    if ((param_1->Element).Object == (IPCGElement *)0x0) {
      EVar2 = param_1->ElementSource;
      if (EVar2 == Trivial) {
        SRWLock = &(this->GraphCompiler).SharedTrivialElementLock;
        AcquireSRWLockShared((PSRWLOCK)SRWLock);
        pTVar1 = &(this->GraphCompiler).SharedTrivialElement;
        pIVar12 = pTVar1->Object;
        if (pIVar12 == (IPCGElement *)0x0) {
          ReleaseSRWLockShared((PSRWLOCK)SRWLock);
          AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
          if (pTVar1->Object == (IPCGElement *)0x0) {
            pTVar6 = MakeShared<FPCGTrivialElement,1>(&local_68);
            local_80.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
            local_88 = pTVar6->Object;
            if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_80.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pTVar1 != (TSharedPtr<IPCGElement,1> *)&local_88) {
              pTVar1->Object = (IPCGElement *)local_88;
              local_88 = (FPCGTrivialElement *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->GraphCompiler).SharedTrivialElement.SharedReferenceCount,&local_80)
              ;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_80.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_68.SharedReferenceCount.ReferenceController);
          }
          pIVar12 = pTVar1->Object;
          FVar11.ReferenceController =
               (this->GraphCompiler).SharedTrivialElement.SharedReferenceCount.ReferenceController;
          if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar11.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_a8 = pIVar12;
          local_a0.ReferenceController = FVar11.ReferenceController;
          ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
        }
        else {
          FVar11.ReferenceController =
               (this->GraphCompiler).SharedTrivialElement.SharedReferenceCount.ReferenceController;
          if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar11.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_a8 = pIVar12;
          local_a0.ReferenceController = FVar11.ReferenceController;
          ReleaseSRWLockShared((PSRWLOCK)SRWLock);
        }
        if (&param_1->Element != (TSharedPtr<IPCGElement,1> *)&local_a8) {
          (param_1->Element).Object = pIVar12;
          local_a8 = (IPCGElement *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(param_1->Element).SharedReferenceCount,&local_a0);
          FVar11.ReferenceController = local_a0.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar11.ReferenceController);
      }
      else if (EVar2 == TrivialPostGraph) {
        pTVar7 = FPCGGraphCompiler::GetSharedTrivialPostGraphElement(&this->GraphCompiler,&local_58)
        ;
        TSharedPtr<IPCGElement,1>::operator=(pTVar1,pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      else if (EVar2 == Gather) {
        AcquireSRWLockShared((PSRWLOCK)&(this->GraphCompiler).SharedGatherElementLock);
        pTVar7 = &(this->GraphCompiler).SharedGatherElement;
        local_78.Object = pTVar7->Object;
        if (local_78.Object == (IPCGElement *)0x0) {
          ReleaseSRWLockShared((PSRWLOCK)&(this->GraphCompiler).SharedGatherElementLock);
          AcquireSRWLockExclusive((PSRWLOCK)&(this->GraphCompiler).SharedGatherElementLock);
          if (pTVar7->Object == (IPCGElement *)0x0) {
            pTVar8 = ::operator_new(0x18);
            if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
              pTVar8 = (TReferenceControllerBase<1> *)0x0;
              local_98 = ___xmm_00000000000000000000000000000010;
              pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
              FStack_90.ReferenceController = _UNK_150651568;
            }
            else {
              pTVar8->SharedReferenceCount = (atomic<int>)0x1;
              pTVar10 = pTVar8 + 1;
              pTVar8->WeakReferenceCount = (atomic<int>)0x1;
              pTVar8->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFPCGGatherElement___00_SharedPointerInternals__6B_
              ;
              pTVar8[1]._padding_ = (longlong)&___7FPCGGatherElement__6B_;
              if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              LOCK();
              pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
              UNLOCK();
              FStack_90.ReferenceController = pTVar8;
              local_98 = pTVar10;
            }
            pTVar7 = &(this->GraphCompiler).SharedGatherElement;
            if (pTVar7 != (TSharedPtr<IPCGElement,1> *)&local_98) {
              pTVar7->Object = (IPCGElement *)pTVar10;
              local_98 = (TReferenceControllerBase<1> *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->GraphCompiler).SharedGatherElement.SharedReferenceCount,&FStack_90)
              ;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_90.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar8);
          }
          local_78.Object = (this->GraphCompiler).SharedGatherElement.Object;
          local_78.SharedReferenceCount.ReferenceController =
               (this->GraphCompiler).SharedGatherElement.SharedReferenceCount.ReferenceController;
          if (local_78.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          ReleaseSRWLockExclusive((PSRWLOCK)&(this->GraphCompiler).SharedGatherElementLock);
        }
        else {
          local_78.SharedReferenceCount.ReferenceController =
               (this->GraphCompiler).SharedGatherElement.SharedReferenceCount.ReferenceController;
          if (local_78.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          ReleaseSRWLockShared((PSRWLOCK)&(this->GraphCompiler).SharedGatherElementLock);
        }
        TSharedPtr<IPCGElement,1>::operator=(pTVar1,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      else if (EVar2 == FromNode) {
        if ((param_1->Node == (UPCGNode *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Task.Node",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                               ,0x53a,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pUVar9 = UPCGNode::GetSettings(param_1->Node);
        pUVar9 = FPCGDataCollection::GetSettings(&param_1->TaskInput,pUVar9);
        if (pUVar9 != (UPCGSettings *)0x0) {
          pTVar7 = UPCGSettings::GetElement(pUVar9,&local_48);
          TSharedPtr<IPCGElement,1>::operator=(pTVar1,pTVar7);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
        }
      }
      else if (EVar2 == FromCookedSettings) {
        if (((param_1->CookedSettings).field0_0x0.DebugPtr == (UPCGSettings *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Task.CookedSettings",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                               ,0x544,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pTVar7 = UPCGSettings::GetElement((param_1->CookedSettings).field0_0x0.DebugPtr,&local_38);
        TSharedPtr<IPCGElement,1>::operator=(pTVar1,pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                           ,0x549,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
    }
    if ((param_1->Element).Object == (IPCGElement *)0x0) {
      if ((param_1->Context != (FPCGContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Task.Context",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                             ,0x550,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar4 = false;
      goto LAB_149cdcf74;
    }
  }
  bVar4 = true;
LAB_149cdcf74:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// StoreResults @ 149cdd780

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
FPCGGraphExecutor::StoreResults
          (FPCGGraphExecutor *this,ulong64 param_1,FPCGDataCollection *param_2,bool param_3)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  UPCGData *this_00;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar6;
  ForAnyElementType FVar7;
  FPCGTaggedData *pFVar8;
  bool bVar9;
  bool bVar10;
  TPairInitializer<unsigned___int64_const_&,FPCGGraphExecutor::FOutputDataInfo_&&> local_res8;
  undefined1 local_res20 [8];
  FOutputDataInfo **local_78;
  FPCGDataCollection *local_70;
  FPCGDataCollection local_68;
  undefined1 local_38;
  int local_34;
  undefined1 local_30;
  
  bVar9 = -1 < CpuChannel->Enabled;
  local_res8.Value = (FOutputDataInfo *)param_1;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2388,"FPCGGraphExecutor::StoreResults",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x954);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2388);
  }
  local_68.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.TaggedData.ArrayNum = 0;
  local_68.TaggedData.ArrayMax = 0;
  local_68.bCancelExecutionOnEmpty = false;
  local_68.bCancelExecution = false;
  local_68.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.DataCrcs.ArrayNum = 0;
  local_68.DataCrcs.ArrayMax = 0;
  local_68.InactiveOutputPinBitmask = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  FPCGDataCollection::operator=(&local_68,param_2);
  iVar4 = local_68.TaggedData.ArrayNum;
  pFVar8 = (FPCGTaggedData *)
           (local_68.TaggedData.AllocatorInstance.Data +
           (longlong)local_68.TaggedData.ArrayNum * 0x78);
  FVar7.Data = local_68.TaggedData.AllocatorInstance.Data;
  local_38 = param_3;
  while( true ) {
    if (local_68.TaggedData.ArrayNum != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if ((FPCGTaggedData *)FVar7.Data == pFVar8) break;
    this_00 = (((FPCGTaggedData *)FVar7.Data)->Data).Data.field0_0x0.DebugPtr;
    if (this_00 != (UPCGData *)0x0) {
      UPCGData::MarkUsage(this_00,GraphExecutorTaskOutput);
    }
    FVar7.Data = FVar7.Data + 0x78;
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2397,"FPCGGraphExecutor::StoreResults::Successors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0x95d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2397);
  }
  pFVar1 = &this->TasksLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xb4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = pFVar1->bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = pFVar1->bFlag;
    }
    LOCK();
    aVar2 = pFVar1->bFlag;
    pFVar1->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pTVar6 = TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>,0>_>
                   *)&this->TaskSuccessors,(ulong64)local_res8.Value);
  if (pTVar6 != (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                0x0) {
    local_34 = *(int *)&(pTVar6->Elements).field_0x8 - *(int *)&(pTVar6->Elements).field_0x34;
  }
  if (pFVar1 != (FSpinLock *)0x0) {
    pFVar1->bFlag = (atomic<bool>)0x0;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar1 = &this->TaskOutputsLock;
  if ((pFVar1 == (FSpinLock *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                          ,0xb4,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  aVar2 = pFVar1->bFlag;
  pFVar1->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  if (aVar2 == (atomic<bool>)0x0) {
    local_78 = &local_res8.Value;
    local_70 = &local_68;
    TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,FPCGGraphExecutor::FOutputDataInfo_&&>_>
              ((TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
                *)&this->TaskOutputs,&local_res8,(bool *)&local_78);
    if (pFVar1 == (FSpinLock *)0x0) goto LAB_149cdd9dd;
  }
  else {
    do {
      aVar2 = pFVar1->bFlag;
      while (aVar2 != (atomic<bool>)0x0) {
        aVar2 = pFVar1->bFlag;
      }
      LOCK();
      aVar2 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
    } while (aVar2 != (atomic<bool>)0x0);
    local_78 = &local_res8.Value;
    local_70 = &local_68;
    TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,FPCGGraphExecutor::FOutputDataInfo_&&>_>
              ((TSet<TTuple<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPCGGraphExecutor::FOutputDataInfo,0>,FDefaultSetAllocator>
                *)&this->TaskOutputs,&local_res8,(bool *)&local_78);
  }
  pFVar1->bFlag = (atomic<bool>)0x0;
LAB_149cdd9dd:
  if (local_68.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_68.TaggedData.AllocatorInstance.Data,
             local_68.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_68.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_68.TaggedData.AllocatorInstance.Data);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

