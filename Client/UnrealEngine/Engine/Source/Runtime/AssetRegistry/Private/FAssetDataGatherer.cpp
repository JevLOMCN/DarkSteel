// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 65

// FAssetDataGatherer @ 142ad46e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetDataGatherer * __thiscall
FAssetDataGatherer::FAssetDataGatherer(FAssetDataGatherer *this,UAssetRegistryImpl *param_1)

{
  TUniquePtr<UE::AssetDataGather::Private::FAssetDataDiscovery,TDefaultDelete<UE::AssetDataGather::Private::FAssetDataDiscovery>_>
  *pTVar1;
  TUniquePtr<UE::AssetDataGather::Private::FFilesToSearch,TDefaultDelete<UE::AssetDataGather::Private::FFilesToSearch>_>
  *pTVar2;
  TUniquePtr<UE::AssetDataGather::Private::FFileReadScheduler,TDefaultDelete<UE::AssetDataGather::Private::FFileReadScheduler>_>
  *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this_00;
  FTreeNode *this_01;
  int iVar6;
  FAssetDataDiscovery *pFVar7;
  FAssetDataDiscovery *pFVar8;
  longlong lVar9;
  FFileReadScheduler *this_02;
  FAssetDataDiscovery *this_03;
  int iVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  this->_padding_ = (longlong)&___7FAssetDataGatherer__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TickLock,4000);
  this_03 = (FAssetDataDiscovery *)0x0;
  (this->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResultsLock,4000);
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GatheredResultsEvent,4000);
  *(undefined8 *)&(this->GatheredResultsEvent).field_0x28 = 0;
  *(undefined8 *)&(this->GatheredResultsEvent).field_0x30 = 0;
  *(undefined8 *)&(this->GatheredResultsEvent).field_0x38 = 2;
  this->AssetRegistry = param_1;
  this->Thread = (FRunnableThread *)0x0;
  this->bAsyncEnabled = false;
  FDateTime::Now();
  this->IsStopped = (atomic<unsigned_int>)0x0;
  this->IsGatheringPaused = (atomic<unsigned_int>)0x0;
  pTVar1 = &this->Discovery;
  pTVar1->Ptr = (FAssetDataDiscovery *)0x0;
  pTVar2 = &this->FilesToSearch;
  this->IsProcessingPaused = (atomic<unsigned_int>)0x0;
  this->bSaveAsyncCacheTriggered = (atomic<bool>)0x0;
  this->bCacheReadEnabled = (atomic<bool>)0x0;
  this->bCacheWriteEnabled = (atomic<bool>)0x0;
  pTVar2->Ptr = (FFilesToSearch *)0x0;
  (this->AssetResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetResults).ArrayNum = 0;
  (this->AssetResults).ArrayMax = 0;
  (this->AssetResultsForGameThread).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetResultsForGameThread).ArrayNum = 0;
  (this->AssetResultsForGameThread).ArrayMax = 0;
  (this->DependencyResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DependencyResults).ArrayNum = 0;
  (this->DependencyResults).ArrayMax = 0;
  (this->DependencyResultsForGameThread).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DependencyResultsForGameThread).ArrayNum = 0;
  (this->DependencyResultsForGameThread).ArrayMax = 0;
  (this->CookedPackageNamesWithoutAssetDataResults).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CookedPackageNamesWithoutAssetDataResults).ArrayNum = 0;
  (this->CookedPackageNamesWithoutAssetDataResults).ArrayMax = 0;
  (this->VerseResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VerseResults).ArrayNum = 0;
  (this->VerseResults).ArrayMax = 0;
  (this->BlockedResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlockedResults).ArrayNum = 0;
  (this->BlockedResults).ArrayMax = 0;
  (this->SearchTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchTimes).ArrayNum = 0;
  (this->SearchTimes).ArrayMax = 0;
  (this->DiscoveredPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiscoveredPaths).ArrayNum = 0;
  (this->DiscoveredPaths).ArrayMax = 0;
  this->LastCacheWriteTime = 0.0;
  this->bIsAdditionalMountSearchInProgress = (atomic<bool>)0x0;
  this->bGatherOnGameThreadOnly = (atomic<bool>)0x0;
  (this->NewCachedAssetData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewCachedAssetData).ArrayNum = 0;
  (this->NewCachedAssetData).ArrayMax = 0;
  (this->DiskCachedAssetBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiskCachedAssetBlocks).ArrayNum = 0;
  (this->DiskCachedAssetBlocks).ArrayMax = 0;
  *(undefined8 *)&this->DiskCachedAssetDataMap = 0;
  *(undefined8 *)&(this->DiskCachedAssetDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DiskCachedAssetDataMap).field_0x20 = 0;
  this->CumulativeGatherTime = 0.0;
  this->CurrentSearchTime = 0.0;
  this->NumCachedAssetFiles = 0;
  this->NumUncachedAssetFiles = 0;
  this->NumUncachedAssetFilesOutstanding = 0;
  this->bHasLoadedCache = false;
  this->bDiscoveryIsComplete = false;
  this->bIsComplete = false;
  this->bRequestAssetRegistryTick = false;
  this->bIsIdle = false;
  this->bFirstTickAfterIdle = true;
  this->bFinishedInitialDiscovery = false;
  this->bIsInitialSearchCompleted = (atomic<bool>)0x0;
  *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->DiskCachedAssetDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x48 = 0;
  *(undefined8 *)&this->NewCachedAssetDataMap = 0;
  *(undefined8 *)&(this->NewCachedAssetDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->NewCachedAssetDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->NewCachedAssetDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x48 = 0;
  this->LastCacheSaveNumUncachedAssetFiles = 0;
  this->CacheInUseCount = 0;
  this->bIsSavingAsyncCache = false;
  this->bFlushedRetryFiles = false;
  pTVar3 = &this->FileReadScheduler;
  *(undefined8 *)&(this->WaitBatchDirectories).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x40) = 0;
  (this->WaitBatchDirectories).field0_0x0.TypedValue.HashSize = 0;
  pTVar3->Ptr = (FFileReadScheduler *)0x0;
  UE::AssetDataGather::Private::FGatherSettings::Initialize
            (&UE::AssetDataGather::Private::GGatherSettings);
  this->bGatherAssetPackageData =
       UE::AssetDataGather::Private::GGatherSettings.bForceDependsGathering != false;
  this->bGatherDependsData = UE::AssetDataGather::Private::GGatherSettings.bGatherDependsData;
  LOCK();
  this->bCacheReadEnabled =
       (atomic<bool>)UE::AssetDataGather::Private::GGatherSettings.bGatherCacheReadEnabled;
  UNLOCK();
  LOCK();
  this->bCacheWriteEnabled =
       (atomic<bool>)UE::AssetDataGather::Private::GGatherSettings.bGatherCacheWriteEnabled;
  UNLOCK();
  this->bAsyncEnabled = UE::AssetDataGather::Private::GGatherSettings.bAsyncEnabled;
  QueryPerformanceCounter(&local_res8);
  dVar11 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->bSynchronousTick = true;
  this->LastCacheWriteTime = dVar11 + __real_4170000000000000;
  pFVar7 = ::operator_new(0x178);
  pFVar8 = this_03;
  if (pFVar7 != (FAssetDataDiscovery *)0x0) {
    pFVar8 = UE::AssetDataGather::Private::FAssetDataDiscovery::FAssetDataDiscovery(pFVar7);
  }
  if (pTVar1 == (TUniquePtr<UE::AssetDataGather::Private::FAssetDataDiscovery,TDefaultDelete<UE::AssetDataGather::Private::FAssetDataDiscovery>_>
                 *)&local_48) {
    if (pFVar8 != (FAssetDataDiscovery *)0x0) {
      lVar9 = pFVar8->_padding_;
      goto LAB_142ad4a50;
    }
  }
  else {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar8;
    if (pFVar7 != (FAssetDataDiscovery *)0x0) {
      lVar9 = pFVar7->_padding_;
      pFVar8 = pFVar7;
LAB_142ad4a50:
      (**(code **)(lVar9 + 0x28))(pFVar8,1);
    }
  }
  pFVar7 = ::operator_new(0x68);
  pFVar8 = this_03;
  if (pFVar7 != (FAssetDataDiscovery *)0x0) {
    pFVar7->_padding_ = 0;
    (pFVar7->TreeLock).Inner.CriticalSection.Opaque2[0] = 0;
    (pFVar7->TreeLock).Inner.CriticalSection.Opaque2[1] = 0;
    (pFVar7->TreeLock).Inner.CriticalSection.Opaque3[2] = (void *)0x0;
    (pFVar7->ResultsLock).Inner.CriticalSection.Opaque1[0] = (void *)0x0;
    (pFVar7->ResultsLock).Inner.CriticalSection.Opaque3[1] = (void *)0x0;
    (pFVar7->ResultsLock).Inner.CriticalSection.Opaque3[2] = (void *)0x0;
    *(undefined4 *)(pFVar7->TreeLock).Inner.CriticalSection.Opaque1 = 0xffffffff;
    *(undefined4 *)((longlong)(pFVar7->TreeLock).Inner.CriticalSection.Opaque1 + 4) = 0;
    (pFVar7->TreeLock).Inner.CriticalSection.Opaque3[0] = (void *)0x0;
    *(undefined4 *)((pFVar7->TreeLock).Inner.CriticalSection.Opaque3 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)(pFVar7->TreeLock).Inner.CriticalSection.Opaque3 + 0xc) = 0;
    *(undefined8 *)&(pFVar7->TreeLock).OwnerThreadId = 0;
    (pFVar7->TickOwner).OwnerThreadId = (atomic<unsigned_int>)0xffffffff;
    *(undefined4 *)&(pFVar7->TickOwner).bHasOwner = 0;
    (pFVar7->ResultsLock).Inner.CriticalSection.Opaque2[0] = 0;
    (pFVar7->ResultsLock).Inner.CriticalSection.Opaque2[1] = 0;
    *(undefined4 *)(pFVar7->ResultsLock).Inner.CriticalSection.Opaque3 = 0xffffffff;
    *(undefined4 *)((longlong)(pFVar7->ResultsLock).Inner.CriticalSection.Opaque3 + 4) = 0;
    pFVar8 = pFVar7;
  }
  if (pTVar2 == (TUniquePtr<UE::AssetDataGather::Private::FFilesToSearch,TDefaultDelete<UE::AssetDataGather::Private::FFilesToSearch>_>
                 *)&local_40) {
    if (pFVar8 == (FAssetDataDiscovery *)0x0) goto LAB_142ad4c63;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                   *)(pFVar8->ResultsLock).Inner.CriticalSection.Opaque2,
                  *(uint *)((longlong)(pFVar8->ResultsLock).Inner.CriticalSection.Opaque3 + 4),
                  *(uint *)((pFVar8->ResultsLock).Inner.CriticalSection.Opaque3 + 1));
    *(undefined8 *)((longlong)(pFVar8->ResultsLock).Inner.CriticalSection.Opaque3 + 4) = 0;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                *)(pFVar8->ResultsLock).Inner.CriticalSection.Opaque2,0);
    pvVar4 = *(void **)(pFVar8->ResultsLock).Inner.CriticalSection.Opaque2;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                   *)&(pFVar8->TreeLock).OwnerThreadId,*(uint *)&(pFVar8->TickOwner).bHasOwner,
                  *(uint *)(pFVar8->ResultsLock).Inner.CriticalSection.Opaque1);
    *(undefined8 *)&(pFVar8->TickOwner).bHasOwner = 0;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                *)&(pFVar8->TreeLock).OwnerThreadId,0);
    pvVar4 = *(void **)&(pFVar8->TreeLock).OwnerThreadId;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                   *)(pFVar8->TreeLock).Inner.CriticalSection.Opaque3,
                  *(uint *)((longlong)(pFVar8->TreeLock).Inner.CriticalSection.Opaque3 + 0xc),
                  *(uint *)((pFVar8->TreeLock).Inner.CriticalSection.Opaque3 + 2));
    *(undefined8 *)((longlong)(pFVar8->TreeLock).Inner.CriticalSection.Opaque3 + 0xc) = 0;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                *)(pFVar8->TreeLock).Inner.CriticalSection.Opaque3,0);
    pvVar4 = (pFVar8->TreeLock).Inner.CriticalSection.Opaque3[0];
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TRingBuffer<FString,TSizedDefaultAllocator<32>_>::DestructRange
              ((TRingBuffer<FString,TSizedDefaultAllocator<32>_> *)pFVar8,
               *(uint *)((longlong)(pFVar8->TreeLock).Inner.CriticalSection.Opaque1 + 4),
               (pFVar8->TreeLock).Inner.CriticalSection.Opaque2[0]);
    *(undefined8 *)((longlong)(pFVar8->TreeLock).Inner.CriticalSection.Opaque1 + 4) = 0;
    TRingBuffer<FString,TSizedDefaultAllocator<32>_>::Reallocate
              ((TRingBuffer<FString,TSizedDefaultAllocator<32>_> *)pFVar8,0);
    pFVar7 = pFVar8;
    if ((void *)pFVar8->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar8->_padding_);
    }
  }
  else {
    pFVar7 = (FAssetDataDiscovery *)pTVar2->Ptr;
    pTVar2->Ptr = (FFilesToSearch *)pFVar8;
    if (pFVar7 == (FAssetDataDiscovery *)0x0) goto LAB_142ad4c63;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                   *)(pFVar7->ResultsLock).Inner.CriticalSection.Opaque2,
                  *(uint *)((longlong)(pFVar7->ResultsLock).Inner.CriticalSection.Opaque3 + 4),
                  *(uint *)((pFVar7->ResultsLock).Inner.CriticalSection.Opaque3 + 1));
    *(undefined8 *)((longlong)(pFVar7->ResultsLock).Inner.CriticalSection.Opaque3 + 4) = 0;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                *)(pFVar7->ResultsLock).Inner.CriticalSection.Opaque2,0);
    pvVar4 = *(void **)(pFVar7->ResultsLock).Inner.CriticalSection.Opaque2;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                   *)&(pFVar7->TreeLock).OwnerThreadId,*(uint *)&(pFVar7->TickOwner).bHasOwner,
                  *(uint *)(pFVar7->ResultsLock).Inner.CriticalSection.Opaque1);
    *(undefined8 *)&(pFVar7->TickOwner).bHasOwner = 0;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                *)&(pFVar7->TreeLock).OwnerThreadId,0);
    pvVar4 = *(void **)&(pFVar7->TreeLock).OwnerThreadId;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                   *)(pFVar7->TreeLock).Inner.CriticalSection.Opaque3,
                  *(uint *)((longlong)(pFVar7->TreeLock).Inner.CriticalSection.Opaque3 + 0xc),
                  *(uint *)((pFVar7->TreeLock).Inner.CriticalSection.Opaque3 + 2));
    *(undefined8 *)((longlong)(pFVar7->TreeLock).Inner.CriticalSection.Opaque3 + 0xc) = 0;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate((TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                *)(pFVar7->TreeLock).Inner.CriticalSection.Opaque3,0);
    pvVar4 = (pFVar7->TreeLock).Inner.CriticalSection.Opaque3[0];
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TRingBuffer<FString,TSizedDefaultAllocator<32>_>::DestructRange
              ((TRingBuffer<FString,TSizedDefaultAllocator<32>_> *)pFVar7,
               *(uint *)((longlong)(pFVar7->TreeLock).Inner.CriticalSection.Opaque1 + 4),
               (pFVar7->TreeLock).Inner.CriticalSection.Opaque2[0]);
    *(undefined8 *)((longlong)(pFVar7->TreeLock).Inner.CriticalSection.Opaque1 + 4) = 0;
    TRingBuffer<FString,TSizedDefaultAllocator<32>_>::Reallocate
              ((TRingBuffer<FString,TSizedDefaultAllocator<32>_> *)pFVar7,0);
    pFVar5 = ((ForAnyElementType *)&pFVar7->_padding_)->Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  }
  ::operator_delete(pFVar7,0x68);
LAB_142ad4c63:
  UE::AssetDataGather::Private::FGatherSettings::Initialize
            (&UE::AssetDataGather::Private::GGatherSettings);
  iVar6 = FWindowsPlatformMisc::NumberOfCores();
  iVar10 = UE::AssetDataGather::Private::FGatherSettings::GARGatherThreads;
  if (UE::AssetDataGather::Private::FGatherSettings::GARGatherThreads < 1) {
    iVar10 = iVar6 / 2;
  }
  if (iVar10 < 1) {
    iVar10 = 1;
  }
  this_02 = ::operator_new(0x90);
  if (this_02 != (FFileReadScheduler *)0x0) {
    if (iVar6 < iVar10) {
      iVar10 = iVar6;
    }
    this_03 = (FAssetDataDiscovery *)
              UE::AssetDataGather::Private::FFileReadScheduler::FFileReadScheduler
                        (this_02,iVar10,this->bGatherAssetPackageData,this->bGatherDependsData);
  }
  if (pTVar3 == (TUniquePtr<UE::AssetDataGather::Private::FFileReadScheduler,TDefaultDelete<UE::AssetDataGather::Private::FFileReadScheduler>_>
                 *)local_38) {
    if (this_03 == (FAssetDataDiscovery *)0x0) {
      return this;
    }
    UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Wait
              ((FPimpl *)(this_03->LongPackageNamesDenyList).AllocatorInstance.Data,
               (FTimespan)0x7fffffffffffffff);
    UE::AssetDataGather::Private::FFileReadScheduler::FreeReadTaskLoaders
              ((FFileReadScheduler *)this_03);
    this_01 = (FTreeNode *)(this_03->MountRelativePathsDenyList).AllocatorInstance.Data;
    if (this_01 != (FTreeNode *)0x0) {
      TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode
      ::~FTreeNode(this_01);
      ::operator_delete(this_01,0x30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(this_03->LongPackageNamesDenyList).ArrayNum);
    FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::
    ~FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>
              ((FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *)
               ((this_03->ResultsLock).Inner.CriticalSection.Opaque3 + 2));
    TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
    ::
    ~TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
              ((TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
                *)(this_03->ResultsLock).Inner.CriticalSection.Opaque3);
    (this_03->ResultsLock).Inner.CriticalSection.Opaque2[0] = 0;
    pvVar4 = (this_03->ResultsLock).Inner.CriticalSection.Opaque1[0];
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_03);
  }
  else {
    pFVar8 = (FAssetDataDiscovery *)pTVar3->Ptr;
    pTVar3->Ptr = (FFileReadScheduler *)this_03;
    if (pFVar8 == (FAssetDataDiscovery *)0x0) {
      return this;
    }
    UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Wait
              (((TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1> *)
               &(pFVar8->LongPackageNamesDenyList).AllocatorInstance)->Object,
               (FTimespan)0x7fffffffffffffff);
    UE::AssetDataGather::Private::FFileReadScheduler::FreeReadTaskLoaders
              ((FFileReadScheduler *)pFVar8);
    this_00 = (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *
              )(pFVar8->MountRelativePathsDenyList).AllocatorInstance.Data;
    if (this_00 !=
        (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *)0x0)
    {
      TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode
      ::~FTreeNode((FTreeNode *)this_00);
      ::operator_delete(this_00,0x30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (((FSharedReferencer<1> *)&(pFVar8->LongPackageNamesDenyList).ArrayNum)->
               ReferenceController);
    FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::
    ~FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>
              ((FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *)
               ((pFVar8->ResultsLock).Inner.CriticalSection.Opaque3 + 2));
    TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
    ::
    ~TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
              ((TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
                *)(pFVar8->ResultsLock).Inner.CriticalSection.Opaque3);
    (pFVar8->ResultsLock).Inner.CriticalSection.Opaque2[0] = 0;
    pvVar4 = (pFVar8->ResultsLock).Inner.CriticalSection.Opaque1[0];
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)pFVar8);
    this_03 = pFVar8;
  }
  ::operator_delete(this_03,0x90);
  return this;
}

// ~FAssetDataGatherer @ 142ad9960

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::~FAssetDataGatherer(FAssetDataGatherer *this)

{
  undefined1 *puVar1;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *pTVar2;
  int *piVar3;
  TArray<TTuple<int,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 *puVar5;
  int iVar6;
  FAssetDataDiscovery *pFVar7;
  FRunnableThread *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  void *pvVar12;
  bool bVar13;
  uint uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  undefined8 *puVar20;
  longlong lVar21;
  uint *puVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  pFVar7 = (this->Discovery).Ptr;
  this->_padding_ = (longlong)&___7FAssetDataGatherer__6B_;
  (**(code **)(pFVar7->_padding_ + 0x10))(pFVar7);
  if (pFVar7->Thread != (FRunnableThread *)0x0) {
    (**(code **)(pFVar7->Thread->_padding_ + 0x20))();
    pFVar8 = pFVar7->Thread;
    if (pFVar8 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar8->_padding_ + 0x30))(pFVar8,1);
    }
    pFVar7->Thread = (FRunnableThread *)0x0;
  }
  pcVar9 = *(code **)(this->_padding_ + 0x10);
  if (pcVar9 == Stop) {
    Stop(this);
  }
  else {
    (*pcVar9)();
  }
  if (this->Thread != (FRunnableThread *)0x0) {
    (**(code **)(this->Thread->_padding_ + 0x20))();
    if (this->Thread != (FRunnableThread *)0x0) {
      (**(code **)(this->Thread->_padding_ + 0x30))();
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  pTVar2 = &this->NewCachedAssetDataMap;
  bVar13 = 1 < *(int *)&(this->NewCachedAssetDataMap).field_0x48;
  if (!bVar13) {
    TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                      *)pTVar2);
  }
  puVar11 = &(this->NewCachedAssetDataMap).field_0xc;
  *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar11);
  }
  puVar11 = &(this->NewCachedAssetDataMap).field_0x10;
  *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x34 = 0;
  iVar6 = *(int *)&(this->NewCachedAssetDataMap).field_0x2c;
  *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar11,0)
    ;
  }
  if (bVar13) {
    puVar1 = &(this->NewCachedAssetDataMap).field_0x38;
    *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x48 = 1;
    if ((*(longlong *)&(this->NewCachedAssetDataMap).field_0x40 != 0) &&
       (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->NewCachedAssetDataMap).field_0x40,0,0,4),
       *(longlong *)&(this->NewCachedAssetDataMap).field_0x40 != 0)) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->NewCachedAssetDataMap).field_0x40,0,0,4);
    }
    puVar15 = *(undefined4 **)&(this->NewCachedAssetDataMap).field_0x40;
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)puVar1;
    }
    *puVar15 = 0xffffffff;
    if (*(int *)&(this->NewCachedAssetDataMap).field_0x48 != 0) {
      iVar6 = *(int *)&(this->NewCachedAssetDataMap).field_0x28;
      local_88 = 0;
      uStack_84 = 1;
      iStack_74 = 0;
      iStack_70 = 0;
      if (iVar6 != 0) {
        puVar22 = *(uint **)&(this->NewCachedAssetDataMap).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar11;
        }
        uVar14 = *puVar22;
        while (uVar14 == 0) {
          iStack_70 = iStack_70 + 0x20;
          lVar17 = (longlong)local_88;
          local_88 = local_88 + 1;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_142ad9b99;
          uVar14 = puVar22[lVar17 + 1];
        }
        uStack_84 = -uVar14 & uVar14;
        uVar16 = (ulonglong)uStack_84 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iStack_74 = (int)lVar17 + -1 + iStack_70;
        if (iVar6 < iStack_74) {
LAB_142ad9b99:
          iStack_74 = iVar6;
        }
      }
      local_60._padding_ = CONCAT44(uStack_84,local_88);
      local_60.CurrentBitIndex = iStack_74;
      local_60.UnvisitedBitMask = 0xffffffff;
      local_60._28_4_ = uStack_6c;
      local_60.BaseBitIndex = iStack_70;
      local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar11;
      if (iStack_74 < iVar6) {
        do {
          uVar10 = *(undefined8 *)(*(longlong *)&pTVar2->field_0x0 + (longlong)iStack_74 * 0x18);
          lVar17 = *(longlong *)&pTVar2->field_0x0 + (longlong)iStack_74 * 0x18;
          uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar10);
          uVar14 = *(int *)&(this->NewCachedAssetDataMap).field_0x48 - 1U &
                   uVar14 + (int)((ulonglong)uVar10 >> 0x20);
          *(uint *)(lVar17 + 0x14) = uVar14;
          puVar11 = *(undefined1 **)&(this->NewCachedAssetDataMap).field_0x40;
          puVar18 = puVar1;
          if (puVar11 != (undefined1 *)0x0) {
            puVar18 = puVar11;
          }
          uVar16 = (longlong)*(int *)&(this->NewCachedAssetDataMap).field_0x48 - 1U &
                   (longlong)(int)uVar14;
          *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(puVar18 + uVar16 * 4);
          *(int *)(puVar18 + uVar16 * 4) = iStack_74;
          local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
          iStack_74 = local_60.CurrentBitIndex;
        } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
      }
    }
  }
  pTVar2 = &this->DiskCachedAssetDataMap;
  bVar13 = 1 < *(int *)&(this->DiskCachedAssetDataMap).field_0x48;
  if (!bVar13) {
    TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                      *)pTVar2);
  }
  *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x8 = 0;
  if (*(int *)&(this->DiskCachedAssetDataMap).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pTVar2,0,
               (int *)&(this->DiskCachedAssetDataMap).field_0xc);
  }
  puVar11 = &(this->DiskCachedAssetDataMap).field_0x10;
  *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x34 = 0;
  iVar6 = *(int *)&(this->DiskCachedAssetDataMap).field_0x2c;
  *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar11,0)
    ;
  }
  if (bVar13) {
    puVar1 = &(this->DiskCachedAssetDataMap).field_0x38;
    *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x48 = 1;
    if ((*(longlong *)&(this->DiskCachedAssetDataMap).field_0x40 != 0) &&
       (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->DiskCachedAssetDataMap).field_0x40,0,0,4),
       *(longlong *)&(this->DiskCachedAssetDataMap).field_0x40 != 0)) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->DiskCachedAssetDataMap).field_0x40,0,0,4);
    }
    puVar15 = *(undefined4 **)&(this->DiskCachedAssetDataMap).field_0x40;
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)puVar1;
    }
    *puVar15 = 0xffffffff;
    if (*(int *)&(this->DiskCachedAssetDataMap).field_0x48 != 0) {
      iVar6 = *(int *)&(this->DiskCachedAssetDataMap).field_0x28;
      local_88 = 0;
      uStack_84 = 1;
      iStack_74 = 0;
      iStack_70 = 0;
      if (iVar6 != 0) {
        puVar22 = *(uint **)&(this->DiskCachedAssetDataMap).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar11;
        }
        uVar14 = *puVar22;
        while (uVar14 == 0) {
          iStack_70 = iStack_70 + 0x20;
          lVar17 = (longlong)local_88;
          local_88 = local_88 + 1;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_142ad9dbb;
          uVar14 = puVar22[lVar17 + 1];
        }
        uStack_84 = -uVar14 & uVar14;
        uVar16 = (ulonglong)uStack_84 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iStack_74 = (int)lVar17 + -1 + iStack_70;
        if (iVar6 < iStack_74) {
LAB_142ad9dbb:
          iStack_74 = iVar6;
        }
      }
      local_60._padding_ = CONCAT44(uStack_84,local_88);
      local_60.CurrentBitIndex = iStack_74;
      local_60.UnvisitedBitMask = 0xffffffff;
      local_60._28_4_ = uStack_6c;
      local_60.BaseBitIndex = iStack_70;
      local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar11;
      if (iStack_74 < iVar6) {
        do {
          uVar10 = *(undefined8 *)(*(longlong *)&pTVar2->field_0x0 + (longlong)iStack_74 * 0x18);
          lVar17 = *(longlong *)&pTVar2->field_0x0 + (longlong)iStack_74 * 0x18;
          uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar10);
          uVar14 = *(int *)&(this->DiskCachedAssetDataMap).field_0x48 - 1U &
                   uVar14 + (int)((ulonglong)uVar10 >> 0x20);
          *(uint *)(lVar17 + 0x14) = uVar14;
          puVar11 = *(undefined1 **)&(this->DiskCachedAssetDataMap).field_0x40;
          puVar18 = puVar1;
          if (puVar11 != (undefined1 *)0x0) {
            puVar18 = puVar11;
          }
          uVar16 = (longlong)*(int *)&(this->DiskCachedAssetDataMap).field_0x48 - 1U &
                   (longlong)(int)uVar14;
          *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(puVar18 + uVar16 * 4);
          *(int *)(puVar18 + uVar16 * 4) = iStack_74;
          local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
          iStack_74 = local_60.CurrentBitIndex;
        } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
      }
    }
  }
  pFVar19 = (this->NewCachedAssetData).AllocatorInstance.Data;
  iVar6 = (this->NewCachedAssetData).ArrayNum;
  pFVar23 = pFVar19 + (longlong)iVar6 * 8;
  while( true ) {
    if ((this->NewCachedAssetData).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FDiskCachedAssetData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar19 == pFVar23) break;
    pvVar12 = *(void **)pFVar19;
    if (pvVar12 != (void *)0x0) {
      FPackageDependencyData::~FPackageDependencyData
                ((FPackageDependencyData *)((longlong)pvVar12 + 0x30));
      DestructItems<FAssetData,int>
                (*(FAssetData **)((longlong)pvVar12 + 0x20),*(int *)((longlong)pvVar12 + 0x28));
      if (*(void **)((longlong)pvVar12 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar12 + 0x20));
      }
      ::operator_delete(pvVar12,0x110);
    }
    pFVar19 = pFVar19 + 8;
  }
  piVar3 = &(this->NewCachedAssetData).ArrayMax;
  (this->NewCachedAssetData).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NewCachedAssetData).AllocatorInstance,0,piVar3);
  }
  pTVar4 = &this->DiskCachedAssetBlocks;
  iVar6 = (this->DiskCachedAssetBlocks).ArrayNum;
  pFVar23 = (pTVar4->AllocatorInstance).Data;
  pFVar19 = pFVar23 + (longlong)iVar6 * 0x10;
  local_res10 = pFVar19;
  while( true ) {
    if ((this->DiskCachedAssetBlocks).ArrayNum != iVar6) {
      `TCheckedPointerIterator<TTuple<int,FDiskCachedAssetData_*>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar23 == pFVar19) break;
    lVar17 = *(longlong *)(pFVar23 + 8);
    if (lVar17 != 0) {
      lVar21 = *(longlong *)(lVar17 + -8);
      if (lVar21 != 0) {
        puVar20 = (undefined8 *)(lVar21 * 0x110 + 0x20 + lVar17);
        do {
          puVar5 = puVar20 + -0x22;
          lVar21 = lVar21 + -1;
          FPackageDependencyData::~FPackageDependencyData
                    ((FPackageDependencyData *)(puVar20 + -0x20));
          DestructItems<FAssetData,int>((FAssetData *)*puVar5,*(int *)(puVar20 + -0x21));
          if ((void *)*puVar5 != (void *)0x0) {
            FMemory::Free((void *)*puVar5);
          }
          puVar20 = puVar5;
        } while (lVar21 != 0);
      }
      operator_delete__((longlong *)(lVar17 + -8),*(longlong *)(lVar17 + -8) * 0x110 + 8);
      pFVar19 = local_res10;
    }
    pFVar23 = pFVar23 + 0x10;
  }
  piVar3 = &(this->DiskCachedAssetBlocks).ArrayMax;
  (this->DiskCachedAssetBlocks).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar3);
  }
  TDefaultDelete<UE::AssetDataGather::Private::FFileReadScheduler>::operator()
            ((TDefaultDelete<UE::AssetDataGather::Private::FFileReadScheduler> *)
             &this->FileReadScheduler,(this->FileReadScheduler).Ptr);
  if (*(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) != -1) {
    (this->WaitBatchDirectories).field0_0x0.TypedValue.HashSize = 0;
    pvVar12 = *(void **)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x40);
    if (pvVar12 != (void *)0x0) {
      FMemory::Free(pvVar12);
    }
    TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->WaitBatchDirectories);
  }
  *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x48 = 0;
  pvVar12 = *(void **)&(this->NewCachedAssetDataMap).field_0x40;
  if (pvVar12 != (void *)0x0) {
    FMemory::Free(pvVar12);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDiskCachedAssetData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDiskCachedAssetData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDiskCachedAssetData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NewCachedAssetDataMap);
  *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x48 = 0;
  pvVar12 = *(void **)&(this->DiskCachedAssetDataMap).field_0x40;
  if (pvVar12 != (void *)0x0) {
    FMemory::Free(pvVar12);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDiskCachedAssetData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDiskCachedAssetData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDiskCachedAssetData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DiskCachedAssetDataMap);
  pFVar23 = (pTVar4->AllocatorInstance).Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  pFVar23 = (this->NewCachedAssetData).AllocatorInstance.Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  DestructItems<FString,int>
            ((FString *)(this->DiscoveredPaths).AllocatorInstance.Data,
             (this->DiscoveredPaths).ArrayNum);
  pFVar23 = (this->DiscoveredPaths).AllocatorInstance.Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  pFVar23 = (this->SearchTimes).AllocatorInstance.Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  DestructItems<FString,int>
            ((FString *)(this->BlockedResults).AllocatorInstance.Data,
             (this->BlockedResults).ArrayNum);
  pFVar23 = (this->BlockedResults).AllocatorInstance.Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  pFVar23 = (this->VerseResults).AllocatorInstance.Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  DestructItems<FString,int>
            ((FString *)(this->CookedPackageNamesWithoutAssetDataResults).AllocatorInstance.Data,
             (this->CookedPackageNamesWithoutAssetDataResults).ArrayNum);
  pFVar23 = (this->CookedPackageNamesWithoutAssetDataResults).AllocatorInstance.Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  DestructItems<FPackageDependencyData,int>
            ((FPackageDependencyData *)(this->DependencyResultsForGameThread).AllocatorInstance.Data
             ,(this->DependencyResultsForGameThread).ArrayNum);
  pFVar23 = (this->DependencyResultsForGameThread).AllocatorInstance.Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  DestructItems<FPackageDependencyData,int>
            ((FPackageDependencyData *)(this->DependencyResults).AllocatorInstance.Data,
             (this->DependencyResults).ArrayNum);
  pFVar23 = (this->DependencyResults).AllocatorInstance.Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  DestructItems<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,int>
            ((TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)
             (this->AssetResultsForGameThread).AllocatorInstance.Data,
             (this->AssetResultsForGameThread).ArrayNum);
  pFVar23 = (this->AssetResultsForGameThread).AllocatorInstance.Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  DestructItems<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,int>
            ((TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)
             (this->AssetResults).AllocatorInstance.Data,(this->AssetResults).ArrayNum);
  pFVar23 = (this->AssetResults).AllocatorInstance.Data;
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  TDefaultDelete<UE::AssetDataGather::Private::FFilesToSearch>::operator()
            ((TDefaultDelete<UE::AssetDataGather::Private::FFilesToSearch> *)&this->FilesToSearch,
             (this->FilesToSearch).Ptr);
  pFVar7 = (this->Discovery).Ptr;
  if (pFVar7 != (FAssetDataDiscovery *)0x0) {
    (**(code **)(pFVar7->_padding_ + 0x28))(pFVar7,1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GatheredResultsEvent).field_0x28,
             *(int *)&(this->GatheredResultsEvent).field_0x30);
  pvVar12 = *(void **)&(this->GatheredResultsEvent).field_0x28;
  if (pvVar12 != (void *)0x0) {
    FMemory::Free(pvVar12);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GatheredResultsEvent);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResultsLock);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TickLock);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 142ae0550

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FAssetDataGatherer::SaveCacheFile'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  FString local_18;
  
  plVar1 = *(longlong **)((longlong)this + 0x18);
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *plVar1;
  ::FString::PrintfImpl(&local_18,L"%s_%d.bin");
  lVar6 = FAssetDataGatherer::SaveCacheFileInternal
                    (*(FAssetDataGatherer **)this,&local_18,
                     (TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *)
                     ((longlong)param_1 * 0x10 + lVar2));
  LOCK();
  **(longlong **)((longlong)this + 0x10) = **(longlong **)((longlong)this + 0x10) + lVar6;
  UNLOCK();
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142ae0780

void __thiscall
`FAssetDataGatherer::UpdateCacheForSaving'::__l3::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  FName FVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TTuple<FName,FDiskCachedAssetData_*> *pTVar11;
  FName *pFVar12;
  FName *pFVar13;
  longlong lVar14;
  FAssetIdentifier local_28;
  
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar5 = *(FName *)(*plVar4 + (longlong)param_1 * 8);
  pTVar11 = TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                    *)(*(longlong *)((longlong)this + 0x10) + 0x228),FVar5);
  if ((pTVar11 == (TTuple<FName,FDiskCachedAssetData_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar6 = *(longlong *)&pTVar11->field_0x8;
  lVar7 = *(longlong *)this;
  local_28.ObjectName.ComparisonIndex.Value = 0;
  local_28.ObjectName.Number = 0;
  local_28.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
  local_28.PrimaryAssetType.Name.Number = 0;
  local_28.ValueName.ComparisonIndex.Value = 0;
  local_28.ValueName.Number = 0;
  local_28.PackageName = FVar5;
  uVar10 = ::GetTypeHash(&local_28);
  if (*(int *)(lVar7 + 0x198) != *(int *)(lVar7 + 0x1c4)) {
    lVar14 = *(longlong *)(lVar7 + 0x1d0);
    if (*(longlong *)(lVar7 + 0x1d0) == 0) {
      lVar14 = lVar7 + 0x1c8;
    }
    uVar10 = *(uint *)(lVar14 + (ulonglong)(*(int *)(lVar7 + 0x1d8) - 1U & uVar10) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar12 = (FName *)((longlong)(int)uVar10 * 0x30 + *(longlong *)(lVar7 + 400));
        if ((((*pFVar12 == FVar5) && (pFVar12[1] == (FName)0x0)) && (pFVar12[2] == (FName)0x0)) &&
           (pFVar12[3] == (FName)0x0)) {
          if (uVar10 == 0xffffffff) {
            return;
          }
          pFVar13 = pFVar12 + 4;
          if (pFVar12 == (FName *)0x0) {
            pFVar13 = (FName *)0x0;
          }
          if (pFVar13 == (FName *)0x0) {
            return;
          }
          FVar5 = *pFVar13;
          if (FVar5 == (FName)0x0) {
            return;
          }
          uVar1 = *(undefined4 *)((longlong)FVar5 + 0x38);
          uVar2 = *(undefined4 *)((longlong)FVar5 + 0x48);
          uVar3 = *(undefined4 *)((longlong)FVar5 + 0x58);
          *(undefined4 *)(lVar6 + 0xf8) = *(undefined4 *)((longlong)FVar5 + 0x28);
          *(undefined4 *)(lVar6 + 0xfc) = uVar1;
          *(undefined4 *)(lVar6 + 0x100) = uVar2;
          *(undefined4 *)(lVar6 + 0x104) = uVar3;
          return;
        }
        uVar10 = pFVar12[5].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  return;
}

// operator() @ 142ae2950

void __thiscall
`FAssetDataGatherer::UpdateCacheForSaving'::__l3::<lambda_2>::operator()(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  FName FVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TTuple<FName,FDiskCachedAssetData_*> *pTVar11;
  FName *pFVar12;
  FName *pFVar13;
  longlong lVar14;
  FAssetIdentifier local_28;
  
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar10 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar5 = *(FName *)(*plVar4 + (longlong)param_1 * 8);
  pTVar11 = TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                    *)(*(longlong *)((longlong)this + 0x10) + 0x1d8),FVar5);
  if ((pTVar11 == (TTuple<FName,FDiskCachedAssetData_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar6 = *(longlong *)&pTVar11->field_0x8;
  lVar7 = *(longlong *)this;
  local_28.ObjectName.ComparisonIndex.Value = 0;
  local_28.ObjectName.Number = 0;
  local_28.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
  local_28.PrimaryAssetType.Name.Number = 0;
  local_28.ValueName.ComparisonIndex.Value = 0;
  local_28.ValueName.Number = 0;
  local_28.PackageName = FVar5;
  uVar10 = ::GetTypeHash(&local_28);
  if (*(int *)(lVar7 + 0x198) != *(int *)(lVar7 + 0x1c4)) {
    lVar14 = *(longlong *)(lVar7 + 0x1d0);
    if (*(longlong *)(lVar7 + 0x1d0) == 0) {
      lVar14 = lVar7 + 0x1c8;
    }
    uVar10 = *(uint *)(lVar14 + (ulonglong)(*(int *)(lVar7 + 0x1d8) - 1U & uVar10) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar12 = (FName *)((longlong)(int)uVar10 * 0x30 + *(longlong *)(lVar7 + 400));
        if ((((*pFVar12 == FVar5) && (pFVar12[1] == (FName)0x0)) && (pFVar12[2] == (FName)0x0)) &&
           (pFVar12[3] == (FName)0x0)) {
          if (uVar10 == 0xffffffff) {
            return;
          }
          pFVar13 = pFVar12 + 4;
          if (pFVar12 == (FName *)0x0) {
            pFVar13 = (FName *)0x0;
          }
          if (pFVar13 == (FName *)0x0) {
            return;
          }
          FVar5 = *pFVar13;
          if (FVar5 == (FName)0x0) {
            return;
          }
          uVar1 = *(undefined4 *)((longlong)FVar5 + 0x38);
          uVar2 = *(undefined4 *)((longlong)FVar5 + 0x48);
          uVar3 = *(undefined4 *)((longlong)FVar5 + 0x58);
          *(undefined4 *)(lVar6 + 0xf8) = *(undefined4 *)((longlong)FVar5 + 0x28);
          *(undefined4 *)(lVar6 + 0xfc) = uVar1;
          *(undefined4 *)(lVar6 + 0x100) = uVar2;
          *(undefined4 *)(lVar6 + 0x104) = uVar3;
          return;
        }
        uVar10 = pFVar12[5].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  return;
}

// AddMountPoint @ 142ae98d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::AddMountPoint
          (FAssetDataGatherer *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  FCriticalSectionQueryable *lpCriticalSection;
  TStringView<wchar_t> TVar2;
  int iVar3;
  FAssetDataDiscovery *this_00;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  FString *pFVar8;
  int iVar9;
  bool local_res8 [8];
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28 [2];
  
  this_00 = (this->Discovery).Ptr;
  iVar3 = param_2->Size;
  local_res8[0] = false;
  TVar2 = *param_2;
  iVar9 = TVar2.Size;
  if ((0 < iVar3) && (iVar1 = iVar3 + -1, TVar2.DataPtr[iVar1] == L'/')) {
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar9 = 0;
    if (0 < iVar3) {
      iVar9 = iVar3;
    }
  }
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar8 = NormalizeLocalPath(local_28,&local_48);
  local_38.DataPtr._0_4_ = (int)TVar2.DataPtr;
  local_38.DataPtr._4_4_ = TVar2.DataPtr._4_4_;
  local_38.Size = iVar9;
  local_38._12_4_ = TVar2._12_4_;
  UE::AssetDataGather::Private::FAssetDataDiscovery::AddMountPoint
            (this_00,pFVar8,&local_38,local_res8);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  lpCriticalSection = &this->ResultsLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar6;
  aVar6 = (this->ResultsLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar6 != aVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x1698,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->bIsIdle != false) {
    this->bIsIdle = false;
    this->bFirstTickAfterIdle = true;
    this->bDiscoveryIsComplete = false;
    this->bIsComplete = false;
  }
  aVar6 = (this->ResultsLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar6 != aVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142ae9a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddRequiredMountPoints @ 142ae9f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::AddRequiredMountPoints
          (FAssetDataGatherer *this,TArrayView<FString,int> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  FAssetDataDiscovery *this_00;
  code *pcVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  FString *pFVar9;
  int iVar10;
  FString *pFVar11;
  FString *pFVar12;
  int iVar13;
  int iVar14;
  undefined1 auStackY_458 [32];
  bool local_428 [16];
  FScriptContainerElement *local_418;
  int iStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  int iStack_400;
  wchar_t *local_3f8;
  int iStack_3f0;
  wchar_t *local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  TStringView<wchar_t> local_3d8;
  TStringView<wchar_t> local_3c8;
  TStringView<wchar_t> local_3b8;
  FString local_3a8;
  TStringBuilderBase<wchar_t> local_398;
  wchar_t local_378 [128];
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [128];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [4];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_458;
  pFVar11 = param_1->DataPtr;
  local_278.Base = local_258;
  bVar6 = true;
  local_278.CurPos = local_258;
  pFVar12 = pFVar11 + param_1->ArrayNum;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_278.End = (wchar_t *)&local_158;
  local_398.Base = local_378;
  local_398.CurPos = local_378;
  local_398.End = (wchar_t *)&local_278;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_398.bIsDynamic = false;
  local_398.bIsExternal = false;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  if (pFVar11 != pFVar12) {
    do {
      local_418 = (pFVar11->Data).AllocatorInstance.Data;
      iVar14 = (pFVar11->Data).ArrayNum;
      iVar13 = 0;
      iStack_410 = iVar14 + -1;
      if (iVar14 == 0) {
        iStack_410 = iVar13;
      }
      local_3d8._12_4_ = uStack_40c;
      local_3d8.Size = iStack_410;
      local_3d8.DataPtr = (wchar_t *)local_418;
      bVar5 = FPackageName::TryGetMountPointForPath
                        (&local_3d8,&local_278,&local_398,&local_158,(EFlexNameType *)0x0,
                         (EErrorCode *)0x0);
      if (bVar5) {
        this_00 = (this->Discovery).Ptr;
        iStack_400 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
        local_408 = local_278.Base;
        pwVar3 = local_408;
        local_408._0_4_ = SUB84(local_278.Base,0);
        uVar2 = (undefined4)local_408;
        local_408._4_4_ = (undefined4)((ulonglong)local_278.Base >> 0x20);
        uVar4 = local_408._4_4_;
        local_428[0] = false;
        iVar14 = iStack_400;
        if ((0 < iStack_400) && (local_278.Base[(longlong)iStack_400 + -1] == L'/')) {
          local_3f8 = local_278.Base;
          iVar10 = iStack_400;
          if (iStack_400 + -1 < iStack_400) {
            iVar10 = iStack_400 + -1;
          }
          iVar14 = iVar13;
          iStack_3f0 = iVar13;
          if (0 < iVar10) {
            iVar14 = iVar10;
            iStack_3f0 = iVar10;
          }
        }
        local_3e8 = local_398.Base;
        iStack_3e0 = (int)((longlong)local_398.CurPos - (longlong)local_398.Base >> 1);
        local_3c8._12_4_ = uStack_3dc;
        local_3c8.Size = iStack_3e0;
        local_3c8.DataPtr = local_398.Base;
        local_408 = pwVar3;
        pFVar9 = NormalizeLocalPath(&local_3a8,&local_3c8);
        local_3b8.DataPtr._0_4_ = uVar2;
        local_3b8.DataPtr._4_4_ = uVar4;
        local_3b8.Size = iVar14;
        UE::AssetDataGather::Private::FAssetDataDiscovery::AddMountPoint
                  (this_00,pFVar9,&local_3b8,local_428);
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        bVar6 = false;
      }
      pFVar11 = pFVar11 + 1;
    } while (pFVar11 != pFVar12);
    if (!bVar6) {
      lpCriticalSection = &this->ResultsLock;
      if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SynchObject",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                             ,0x53,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
      (this->ResultsLock).OwnerThreadId = aVar7;
      aVar7 = (this->ResultsLock).OwnerThreadId;
      aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar7 != aVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResultsLock.IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                             ,0x1698,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (this->bIsIdle != false) {
        this->bIsIdle = false;
        this->bFirstTickAfterIdle = true;
        this->bDiscoveryIsComplete = false;
        this->bIsComplete = false;
      }
      aVar7 = (this->ResultsLock).OwnerThreadId;
      aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar7 != aVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                             ,0x2b,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_398);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return;
}

// AddToCache @ 142aea520

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::AddToCache(FAssetDataGatherer *this,FName param_1,FDiskCachedAssetData *param_2)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *this_00;
  int iVar9;
  int local_res8 [2];
  FName local_res10;
  FDiskCachedAssetData *local_res18;
  FName *local_58;
  FDiskCachedAssetData **local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  
  aVar1 = (this->TickLock).OwnerThreadId;
  local_res10 = param_1;
  local_res18 = param_2;
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar1 != aVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x1286,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar3 = local_res10;
  this_00 = &this->NewCachedAssetDataMap;
  uVar6 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar3.Number;
  if (*(int *)&(this->NewCachedAssetDataMap).field_0x8 !=
      *(int *)&(this->NewCachedAssetDataMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->NewCachedAssetDataMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->NewCachedAssetDataMap).field_0x38;
    }
    iVar9 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->NewCachedAssetDataMap).field_0x48 - 1U & uVar6) * 4);
    if (iVar9 != -1) {
      do {
        lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)iVar9 * 0x18;
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar9 * 0x18) == local_res10) {
          if (lVar8 != 0) goto LAB_142aea630;
          break;
        }
        iVar9 = *(int *)(lVar8 + 0x10);
      } while (iVar9 != -1);
    }
  }
  local_58 = &local_res10;
  local_50 = &local_res18;
  TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,FDiskCachedAssetData_*_const_&>_>
            ((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,
             (TPairInitializer<FName_const_&,FDiskCachedAssetData_*_const_&> *)(ulonglong)uVar6,
             (bool *)&local_58);
  lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)local_res8[0] * 0x18;
LAB_142aea630:
  if (*(FDiskCachedAssetData **)(lVar8 + 8) != local_res18) {
    if ((local_res18->Extension != (*(FDiskCachedAssetData **)(lVar8 + 8))->Extension) &&
       (3 < (byte)LogAssetRegistry._0_1_)) {
      ::FName::ToString(&local_res18->Extension,&local_28);
      ::FName::ToString((FName *)(*(longlong *)(lVar8 + 8) + 0x10),&local_38);
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    *(FDiskCachedAssetData **)(lVar8 + 8) = local_res18;
  }
  return;
}

// ClearCache @ 142aeca30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::ClearCache(FAssetDataGatherer *this)

{
  FCriticalSectionQueryable *lpCriticalSection;
  undefined1 *puVar1;
  int *piVar2;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *pTVar3;
  undefined8 *puVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  atomic<unsigned_int> aVar12;
  atomic<unsigned_int> aVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lpCriticalSection = &this->TickLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SynchObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x53,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->TickLock).OwnerThreadId = aVar12;
  if ((this->bCacheWriteEnabled == (atomic<bool>)0x0) &&
     (this->bCacheReadEnabled == (atomic<bool>)0x0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  LOCK();
  this->bCacheWriteEnabled = (atomic<bool>)0x0;
  UNLOCK();
  LOCK();
  this->bCacheReadEnabled = (atomic<bool>)0x0;
  UNLOCK();
  iVar5 = this->CacheInUseCount;
  aVar12 = (this->TickLock).OwnerThreadId;
  aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar12 != aVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x2b,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  fVar9 = __real_3a83126f;
  if (bVar10) {
    while (0 < iVar5) {
      FWindowsPlatformProcess::Sleep(fVar9);
      if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("SynchObject",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                              ,0x53,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
      (this->TickLock).OwnerThreadId = aVar12;
      iVar5 = this->CacheInUseCount;
      aVar12 = (this->TickLock).OwnerThreadId;
      aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar12 != aVar13) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLockedOnCurrentThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                              ,0x2b,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (this->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SynchObject",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                            ,0x53,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
    pTVar3 = &this->NewCachedAssetDataMap;
    (this->TickLock).OwnerThreadId = aVar12;
    bVar10 = 1 < *(int *)&(this->NewCachedAssetDataMap).field_0x48;
    if (!bVar10) {
      TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                        *)pTVar3);
    }
    puVar1 = &(this->NewCachedAssetDataMap).field_0xc;
    *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x34 = 0;
    iVar5 = *(int *)&(this->NewCachedAssetDataMap).field_0x2c;
    *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x28 = 0;
    if ((iVar5 < 0) || (0x80 < iVar5)) {
      *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NewCachedAssetDataMap).field_0x10,0
                );
    }
    if (bVar10) {
      *(undefined4 *)&(this->NewCachedAssetDataMap).field_0x48 = 1;
      TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                *)pTVar3);
    }
    pTVar3 = &this->DiskCachedAssetDataMap;
    bVar10 = 1 < *(int *)&(this->DiskCachedAssetDataMap).field_0x48;
    if (!bVar10) {
      TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                        *)pTVar3);
    }
    puVar1 = &(this->DiskCachedAssetDataMap).field_0xc;
    *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x34 = 0;
    iVar5 = *(int *)&(this->DiskCachedAssetDataMap).field_0x2c;
    *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x28 = 0;
    if ((iVar5 < 0) || (0x80 < iVar5)) {
      *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DiskCachedAssetDataMap).field_0x10,
                 0);
    }
    if (bVar10) {
      *(undefined4 *)&(this->DiskCachedAssetDataMap).field_0x48 = 1;
      TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                *)pTVar3);
    }
    pFVar15 = (this->NewCachedAssetData).AllocatorInstance.Data;
    iVar5 = (this->NewCachedAssetData).ArrayNum;
    pFVar14 = pFVar15 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->NewCachedAssetData).ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDiskCachedAssetData_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar15 == pFVar14) break;
      pvVar6 = *(void **)pFVar15;
      if (pvVar6 != (void *)0x0) {
        FPackageDependencyData::~FPackageDependencyData
                  ((FPackageDependencyData *)((longlong)pvVar6 + 0x30));
        DestructItems<FAssetData,int>
                  (*(FAssetData **)((longlong)pvVar6 + 0x20),*(int *)((longlong)pvVar6 + 0x28));
        if (*(void **)((longlong)pvVar6 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar6 + 0x20));
        }
        ::operator_delete(pvVar6,0x110);
      }
      pFVar15 = pFVar15 + 8;
    }
    piVar2 = &(this->NewCachedAssetData).ArrayMax;
    (this->NewCachedAssetData).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->NewCachedAssetData).AllocatorInstance,0,piVar2);
    }
    iVar5 = (this->DiskCachedAssetBlocks).ArrayNum;
    pFVar14 = (this->DiskCachedAssetBlocks).AllocatorInstance.Data;
    pFVar15 = pFVar14 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((this->DiskCachedAssetBlocks).ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TTuple<int,FDiskCachedAssetData_*>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar14 == pFVar15) break;
      lVar7 = *(longlong *)(pFVar14 + 8);
      if (lVar7 != 0) {
        lVar16 = *(longlong *)(lVar7 + -8);
        if (lVar16 != 0) {
          puVar17 = (undefined8 *)(lVar16 * 0x110 + 0x20 + lVar7);
          do {
            puVar4 = puVar17 + -0x22;
            lVar16 = lVar16 + -1;
            FPackageDependencyData::~FPackageDependencyData
                      ((FPackageDependencyData *)(puVar17 + -0x20));
            DestructItems<FAssetData,int>((FAssetData *)*puVar4,*(int *)(puVar17 + -0x21));
            if ((void *)*puVar4 != (void *)0x0) {
              FMemory::Free((void *)*puVar4);
            }
            puVar17 = puVar4;
          } while (lVar16 != 0);
        }
        operator_delete__((longlong *)(lVar7 + -8),*(longlong *)(lVar7 + -8) * 0x110 + 8);
      }
      pFVar14 = pFVar14 + 0x10;
    }
    piVar2 = &(this->DiskCachedAssetBlocks).ArrayMax;
    (this->DiskCachedAssetBlocks).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->DiskCachedAssetBlocks).AllocatorInstance,0,piVar2);
    }
    aVar12 = (this->TickLock).OwnerThreadId;
    aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar12 != aVar13) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLockedOnCurrentThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                            ,0x2b,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (this->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ConsumeCacheFiles @ 142aedba0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::ConsumeCacheFiles
          (FAssetDataGatherer *this,
          TArray<UE::AssetDataGather::Private::FCachePayload,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  FCriticalSectionQueryable *lpCriticalSection;
  int *piVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  ulonglong uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  longlong local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong *local_50;
  
  aVar8 = (this->TickLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar8 != aVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x13d4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  aVar8 = (this->ResultsLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar8 == aVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x13d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar10 = param_1->ArrayNum;
  iVar14 = 0;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar15 = pFVar11 + (longlong)iVar10 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FCachePayload,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar15) break;
    iVar14 = iVar14 + *(int *)(pFVar11 + 0x10);
    pFVar11 = pFVar11 + 0x18;
  }
  if (iVar14 != 0) {
    TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
               *)&this->DiskCachedAssetDataMap,
              (*(int *)&(this->DiskCachedAssetDataMap).field_0x8 -
              *(int *)&(this->DiskCachedAssetDataMap).field_0x34) + iVar14);
    local_res18 = param_1->ArrayNum;
    uVar9 = (ulonglong)(int)local_res18;
    pFVar15 = (param_1->AllocatorInstance).Data;
    local_60 = pFVar15 + uVar9 * 0x18;
    while( true ) {
      pFVar11 = local_60;
      iVar10 = 0;
      if (param_1->ArrayNum != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::AssetDataGather::Private::FCachePayload,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar11) break;
      if (0 < *(int *)(pFVar15 + 0x10)) {
        local_50 = &local_68;
        do {
          local_68 = (longlong)iVar10 * 0x110 + *(longlong *)(pFVar15 + 8);
          local_58 = *(longlong *)pFVar15 + (longlong)iVar10 * 8;
          TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FDiskCachedAssetData_*_&&>_>
                    ((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                      *)&this->DiskCachedAssetDataMap,
                     (TPairInitializer<FName_const_&,FDiskCachedAssetData_*_&&> *)&stack0x00000020,
                     (bool *)&local_58);
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(pFVar15 + 0x10));
      }
      lVar3 = *(longlong *)(pFVar15 + 8);
      piVar2 = &(this->DiskCachedAssetBlocks).ArrayMax;
      *(longlong *)(pFVar15 + 8) = 0;
      iVar10 = (this->DiskCachedAssetBlocks).ArrayNum;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->DiskCachedAssetBlocks).AllocatorInstance,piVar2);
      }
      (this->DiskCachedAssetBlocks).ArrayNum = iVar10 + 1;
      pFVar11 = (this->DiskCachedAssetBlocks).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
      *(undefined4 *)pFVar11 = *(undefined4 *)(pFVar15 + 0x10);
      *(longlong *)(pFVar11 + 8) = lVar3;
      pvVar4 = *(void **)pFVar15;
      *(longlong *)pFVar15 = 0;
      operator_delete__(pvVar4);
      lVar3 = *(longlong *)(pFVar15 + 8);
      *(longlong *)(pFVar15 + 8) = 0;
      if (lVar3 != 0) {
        lVar13 = *(longlong *)(lVar3 + -8);
        if (lVar13 != 0) {
          puVar12 = (undefined8 *)(lVar13 * 0x110 + 0x20 + lVar3);
          do {
            puVar1 = puVar12 + -0x22;
            lVar13 = lVar13 + -1;
            FPackageDependencyData::~FPackageDependencyData
                      ((FPackageDependencyData *)(puVar12 + -0x20));
            DestructItems<FAssetData,int>((FAssetData *)*puVar1,*(int *)(puVar12 + -0x21));
            if ((void *)*puVar1 != (void *)0x0) {
              FMemory::Free((void *)*puVar1);
            }
            puVar12 = puVar1;
          } while (lVar13 != 0);
        }
        operator_delete__((void *)(lVar3 + -8),*(longlong *)(lVar3 + -8) * 0x110 + 8);
      }
      uVar9 = (ulonglong)local_res18;
      *(undefined4 *)(pFVar15 + 0x10) = 0;
      pFVar15[0x14] = (FScriptContainerElement)0x0;
      pFVar15 = pFVar15 + 0x18;
    }
    lpCriticalSection = &this->ResultsLock;
    if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
    (this->ResultsLock).OwnerThreadId = aVar8;
    uVar16 = *(int *)&(this->DiskCachedAssetDataMap).field_0x8 -
             *(int *)&(this->DiskCachedAssetDataMap).field_0x34;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((this->DependencyResults).ArrayMax < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,8,uVar16,&(this->DependencyResults).AllocatorInstance,
                 (this->DependencyResults).ArrayNum,&(this->DependencyResults).ArrayMax);
    }
    uVar16 = *(int *)&(this->DiskCachedAssetDataMap).field_0x8 -
             *(int *)&(this->DiskCachedAssetDataMap).field_0x34;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((this->AssetResults).ArrayMax < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar16,&(this->AssetResults).AllocatorInstance,(this->AssetResults).ArrayNum,
                 &(this->AssetResults).ArrayMax);
    }
    aVar8 = (this->ResultsLock).OwnerThreadId;
    aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar8 != aVar7) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  DestructItems<UE::AssetDataGather::Private::FCachePayload,int>
            ((FCachePayload *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar15 = (param_1->AllocatorInstance).Data;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  return;
}

// EnsureCompletion @ 142af2c70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::EnsureCompletion(FAssetDataGatherer *this)

{
  FAssetDataDiscovery *pFVar1;
  FRunnableThread *pFVar2;
  
  pFVar1 = (this->Discovery).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
  if (pFVar1->Thread != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->Thread->_padding_ + 0x20))();
    pFVar2 = pFVar1->Thread;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
    }
    pFVar1->Thread = (FRunnableThread *)0x0;
  }
  (**(code **)(this->_padding_ + 0x10))(this);
  if (this->Thread != (FRunnableThread *)0x0) {
    (**(code **)(this->Thread->_padding_ + 0x20))();
    pFVar2 = this->Thread;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  return;
}

// Exit @ 142af43c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::Exit(FAssetDataGatherer *this)

{
  return;
}

// GetAllocatedSize @ 142af9a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

ulong64 __thiscall FAssetDataGatherer::GetAllocatedSize(FAssetDataGatherer *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FFilesToSearch *pFVar7;
  FPackageDependencyData *pFVar8;
  code *pcVar9;
  bool bVar10;
  atomic<unsigned_int> aVar11;
  atomic<unsigned_int> aVar12;
  ulong64 uVar13;
  FGatheredPathData *pFVar14;
  longlong lVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auStackY_128 [32];
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined1 local_dc;
  undefined1 local_db [3];
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FRunnableThread *local_a8;
  ulong64 local_a0;
  FMemoryCounter local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_a8 = this->Thread;
  local_a0 = UE::AssetDataGather::Private::FAssetDataDiscovery::GetAllocatedSize
                       ((this->Discovery).Ptr);
  if (this->Thread != (FRunnableThread *)0x0) {
    LOCK();
    this->IsGatheringPaused = (atomic<unsigned_int>)((int)this->IsGatheringPaused + 1);
    UNLOCK();
  }
  aVar12 = (this->ResultsLock).OwnerThreadId;
  aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar12 == aVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ResultsLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x15b5,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return uVar13;
  }
  if ((&this->TickLock == (FCriticalSectionQueryable *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SynchObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x53,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return uVar13;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->TickLock);
  aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->TickLock).OwnerThreadId = aVar12;
  if ((&this->ResultsLock == (FCriticalSectionQueryable *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SynchObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x53,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return uVar13;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ResultsLock);
  aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar12;
  pFVar7 = (this->FilesToSearch).Ptr;
  uVar3 = (pFVar7->NormalPriorityFiles).AfterBack;
  lVar18 = (longlong)(int)((pFVar7->NormalPriorityFiles).IndexMask + 1) * 0x30;
  uVar4 = (pFVar7->NormalPriorityFiles).Front;
  for (iVar24 = 0; iVar24 != uVar3 - uVar4; iVar24 = iVar24 + 1) {
    pFVar14 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
              ::operator[](&pFVar7->NormalPriorityFiles,iVar24);
    lVar18 = lVar18 + ((longlong)(pFVar14->LongPackageName).Data.ArrayMax +
                      (longlong)(pFVar14->LocalAbsPath).Data.ArrayMax) * 2;
  }
  uVar3 = (pFVar7->BlockingFiles).AfterBack;
  lVar18 = lVar18 + (longlong)(int)((pFVar7->BlockingFiles).IndexMask + 1) * 0x30;
  uVar4 = (pFVar7->BlockingFiles).Front;
  for (iVar24 = 0; iVar24 != uVar3 - uVar4; iVar24 = iVar24 + 1) {
    pFVar14 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
              ::operator[](&pFVar7->BlockingFiles,iVar24);
    lVar18 = lVar18 + ((longlong)(pFVar14->LongPackageName).Data.ArrayMax +
                      (longlong)(pFVar14->LocalAbsPath).Data.ArrayMax) * 2;
  }
  uVar3 = (pFVar7->LaterRetryFiles).AfterBack;
  lVar18 = lVar18 + (longlong)(int)((pFVar7->LaterRetryFiles).IndexMask + 1) * 0x30;
  uVar4 = (pFVar7->LaterRetryFiles).Front;
  for (iVar24 = 0; iVar24 != uVar3 - uVar4; iVar24 = iVar24 + 1) {
    pFVar14 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
              ::operator[](&pFVar7->LaterRetryFiles,iVar24);
    lVar18 = lVar18 + ((longlong)(pFVar14->LongPackageName).Data.ArrayMax +
                      (longlong)(pFVar14->LocalAbsPath).Data.ArrayMax) * 2;
  }
  iVar24 = (this->AssetResults).ArrayNum;
  lVar15 = 0x218;
  if (local_a8 == (FRunnableThread *)0x0) {
    lVar15 = 0x1e0;
  }
  local_98.FixedStoreIndices.Elements._44_4_ = 0x80;
  pFVar23 = (this->AssetResults).AllocatorInstance.Data;
  local_98.FixedStoreIndices.Elements._48_4_ = 0xffffffff;
  lVar18 = lVar15 + lVar18 + (longlong)(this->AssetResults).ArrayMax * 8 + local_a0;
  pFVar19 = pFVar23 + (longlong)iVar24 * 8;
  local_98.FixedStoreIndices.Elements._0_8_ = 0;
  local_98.FixedStoreIndices.Elements._8_8_ = 0;
  local_98.FixedStoreIndices.Elements._32_8_ = 0;
  local_98.FixedStoreIndices.Elements._40_4_ = 0;
  local_98.FixedStoreIndices.Elements._52_4_ = 0;
  local_98.FixedStoreIndices.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.FixedStoreIndices.HashSize = 0;
  local_98.LooseBytes = 0;
  while( true ) {
    if ((this->AssetResults).ArrayNum != iVar24) {
      local_e0 = 0;
      `TCheckedPointerIterator<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_e0);
    }
    if (pFVar23 == pFVar19) break;
    lVar18 = lVar18 + 0x68;
    FAssetDataTagMapSharedView::FMemoryCounter::Include
              (&local_98,(FAssetDataTagMapSharedView *)(*(longlong *)pFVar23 + 0x38));
    pFVar23 = pFVar23 + 8;
  }
  uVar16 = FAssetData::GetChunkArrayRegistryAllocatedSize();
  uVar13 = local_98.LooseBytes;
  uVar17 = FAssetDataTagMapSharedView::FMemoryCounter::GetFixedSize(&local_98);
  pFVar8 = (FPackageDependencyData *)(this->DependencyResults).AllocatorInstance.Data;
  iVar24 = (this->DependencyResults).ArrayNum;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = iVar24;
  if (iVar24 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,iVar24,0,&local_d8,iVar24,&local_cc);
    ConstructItems<FPackageDependencyData,FPackageDependencyData,int>(local_d8.Data,pFVar8,iVar24);
  }
  iVar24 = local_d0;
  pFVar23 = local_d8.Data + (longlong)local_d0 * 0xe0;
  lVar15 = (longlong)local_cc * 0xe0;
  pFVar19 = local_d8.Data + 0x7c;
  iVar25 = local_d0;
  while( true ) {
    if (iVar25 != iVar24) {
      local_df = 0;
      `TCheckedPointerIterator<FPackageDependencyData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_df);
      iVar25 = local_d0;
    }
    if (pFVar19 + -0x7c == pFVar23) break;
    pFVar1 = pFVar19 + 0x48;
    iVar5 = *(int *)pFVar19;
    pFVar2 = pFVar19 + 0x38;
    pFVar19 = pFVar19 + 0xe0;
    lVar15 = lVar15 + ((longlong)iVar5 + (longlong)*(int *)pFVar1 * 4) * 8 +
             (longlong)*(int *)pFVar2 * 0xc;
  }
  DestructItems<FPackageDependencyData,int>((FPackageDependencyData *)local_d8.Data,iVar25);
  if ((FPackageDependencyData *)local_d8.Data != (FPackageDependencyData *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  iVar24 = (this->CookedPackageNamesWithoutAssetDataResults).ArrayNum;
  pFVar19 = (this->CookedPackageNamesWithoutAssetDataResults).AllocatorInstance.Data;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = iVar24;
  if (iVar24 == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar24,0,&local_c8,iVar24,&local_bc);
    ConstructItems<FString,FString,int>(local_c8.Data,(FString *)pFVar19,iVar24);
  }
  iVar24 = local_c0;
  lVar21 = (longlong)local_bc << 4;
  pFVar19 = local_c8.Data + (longlong)local_c0 * 0x10;
  FVar20.Data = local_c8.Data;
  iVar25 = local_c0;
  while( true ) {
    if (iVar25 != iVar24) {
      local_de = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_de);
      iVar25 = local_c0;
    }
    if (FVar20.Data == pFVar19) break;
    pFVar23 = FVar20.Data + 0xc;
    FVar20.Data = FVar20.Data + 0x10;
    lVar21 = lVar21 + (longlong)*(int *)pFVar23 * 2;
  }
  DestructItems<FString,int>((FString *)local_c8.Data,iVar25);
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  iVar24 = (this->SearchTimes).ArrayMax;
  iVar25 = (this->DiscoveredPaths).ArrayNum;
  iVar5 = (this->BlockedResults).ArrayMax;
  pFVar19 = (this->DiscoveredPaths).AllocatorInstance.Data;
  local_b8.Data = (FScriptContainerElement *)0x0;
  iVar6 = (this->VerseResults).ArrayMax;
  local_b0 = iVar25;
  if (iVar25 == 0) {
    local_ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar25,0,&local_b8,iVar25,&local_ac);
    ConstructItems<FString,FString,int>(local_b8.Data,(FString *)pFVar19,iVar25);
  }
  iVar25 = local_b0;
  lVar22 = (longlong)local_ac << 4;
  pFVar19 = local_b8.Data + (longlong)local_b0 * 0x10;
  FVar20.Data = local_b8.Data;
  iVar26 = local_b0;
  while( true ) {
    if (iVar26 != iVar25) {
      local_dd = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_dd);
      iVar26 = local_b0;
    }
    if (FVar20.Data == pFVar19) break;
    pFVar23 = FVar20.Data + 0xc;
    FVar20.Data = FVar20.Data + 0x10;
    lVar22 = lVar22 + (longlong)*(int *)pFVar23 * 2;
  }
  DestructItems<FString,int>((FString *)local_b8.Data,iVar26);
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  pFVar23 = (this->NewCachedAssetData).AllocatorInstance.Data;
  iVar25 = (this->NewCachedAssetData).ArrayNum;
  lVar18 = lVar15 + uVar13 + uVar17 + lVar18 + uVar16 +
           lVar21 + ((longlong)iVar24 + (longlong)iVar5 * 2 + (longlong)iVar6) * 8 +
           lVar22 + ((longlong)
                     UE::AssetDataGather::Private::GGatherSettings.CacheBaseFilename.Data.ArrayMax +
                    (longlong)(this->NewCachedAssetData).ArrayMax * 4) * 2;
  pFVar19 = pFVar23 + (longlong)iVar25 * 8;
  while( true ) {
    if ((this->NewCachedAssetData).ArrayNum != iVar25) {
      local_dc = 0;
      `TCheckedPointerIterator<FDiskCachedAssetData_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_dc);
    }
    if (pFVar23 == pFVar19) break;
    lVar15 = *(longlong *)pFVar23;
    pFVar23 = pFVar23 + 8;
    lVar18 = lVar18 + 0x110 +
             ((longlong)*(int *)(lVar15 + 0x2c) * 0xd + (longlong)*(int *)(lVar15 + 0xf4) * 4 +
             (longlong)*(int *)(lVar15 + 0xac)) * 8 + (longlong)*(int *)(lVar15 + 0xe4) * 0xc;
  }
  iVar24 = (this->DiskCachedAssetBlocks).ArrayNum;
  pFVar19 = (this->DiskCachedAssetBlocks).AllocatorInstance.Data;
  lVar18 = lVar18 + (longlong)(this->DiskCachedAssetBlocks).ArrayMax * 0x10;
  pFVar23 = pFVar19 + (longlong)iVar24 * 0x10;
  while( true ) {
    if ((this->DiskCachedAssetBlocks).ArrayNum != iVar24) {
      local_db[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FDiskCachedAssetData_*>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_db);
    }
    if (pFVar19 == pFVar23) break;
    lVar18 = lVar18 + (longlong)*(int *)pFVar19 * 0x110;
    pFVar19 = pFVar19 + 0x10;
  }
  uVar3 = *(uint *)&(this->DiskCachedAssetDataMap).field_0x48;
  if (uVar3 < 2) {
    lVar15 = 0;
  }
  else {
    lVar15 = (longlong)(int)uVar3 << 2;
  }
  lVar21 = 0;
  iVar24 = *(int *)&(this->DiskCachedAssetDataMap).field_0x2c;
  uVar3 = *(uint *)&(this->NewCachedAssetDataMap).field_0x48;
  iVar25 = *(int *)&(this->DiskCachedAssetDataMap).field_0xc;
  if (1 < uVar3) {
    lVar21 = (longlong)(int)uVar3 << 2;
  }
  iVar5 = *(int *)&(this->NewCachedAssetDataMap).field_0xc;
  local_98.FixedStoreIndices.HashSize = 0;
  iVar6 = *(int *)&(this->NewCachedAssetDataMap).field_0x2c;
  if (local_98.FixedStoreIndices.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.FixedStoreIndices.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  aVar12 = (this->ResultsLock).OwnerThreadId;
  aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar12 != aVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x2b,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return uVar13;
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ResultsLock);
  aVar12 = (this->TickLock).OwnerThreadId;
  aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar12 != aVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x2b,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar13 = (*pcVar9)();
    return uVar13;
  }
  (this->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->TickLock);
  if (this->Thread != (FRunnableThread *)0x0) {
    if ((this->IsGatheringPaused == (atomic<unsigned_int>)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Owner.IsGatheringPaused > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                            ,0x106d,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar13 = (*pcVar9)();
      return uVar13;
    }
    LOCK();
    this->IsGatheringPaused = (atomic<unsigned_int>)((int)this->IsGatheringPaused + -1);
    UNLOCK();
  }
  return (ulonglong)((iVar24 + 0x1fU >> 5) << 2) + (ulonglong)((iVar6 + 0x1fU >> 5) << 2) +
         ((longlong)iVar5 + (longlong)iVar25) * 0x18 + lVar21 + lVar15 + lVar18;
}

// GetAndTrimSearchResults @ 142afb720

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::GetAndTrimSearchResults
          (FAssetDataGatherer *this,FResults *param_1,FResultContext *param_2)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  TMulticastDelegate<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  undefined1 *puVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FFilesToSearch *pFVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  atomic<unsigned_int> aVar14;
  int iVar15;
  atomic<unsigned_int> aVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  undefined1 local_res8 [8];
  
  GetPackageResults(this,param_1);
  lpCriticalSection = &this->ResultsLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SynchObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x53,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar14 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar14;
  pTVar4 = &this->DiscoveredPaths;
  TRingBuffer<FString,TSizedDefaultAllocator<32>_>::MoveAppendRange
            (&param_1->Paths,(FString *)(pTVar4->AllocatorInstance).Data,
             (this->DiscoveredPaths).ArrayNum);
  piVar1 = &(this->DiscoveredPaths).ArrayMax;
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  iVar6 = (this->DiscoveredPaths).ArrayNum;
  if ((this->DiscoveredPaths).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar7,iVar6);
    (this->DiscoveredPaths).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar7,iVar6);
    (this->DiscoveredPaths).ArrayNum = 0;
  }
  pTVar4 = &this->CookedPackageNamesWithoutAssetDataResults;
  TRingBuffer<FString,TSizedDefaultAllocator<32>_>::MoveAppendRange
            (&param_1->CookedPackageNamesWithoutAssetData,
             (FString *)(pTVar4->AllocatorInstance).Data,
             (this->CookedPackageNamesWithoutAssetDataResults).ArrayNum);
  piVar1 = &(this->CookedPackageNamesWithoutAssetDataResults).ArrayMax;
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  iVar6 = (this->CookedPackageNamesWithoutAssetDataResults).ArrayNum;
  if ((this->CookedPackageNamesWithoutAssetDataResults).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar7,iVar6);
    (this->CookedPackageNamesWithoutAssetDataResults).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar7,iVar6);
    (this->CookedPackageNamesWithoutAssetDataResults).ArrayNum = 0;
  }
  TRingBuffer<FName,TSizedDefaultAllocator<32>_>::MoveAppendRange
            (&param_1->VerseFiles,(FName *)(this->VerseResults).AllocatorInstance.Data,
             (this->VerseResults).ArrayNum);
  piVar1 = &(this->VerseResults).ArrayMax;
  (this->VerseResults).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->VerseResults).AllocatorInstance,0,piVar1);
  }
  pTVar4 = &this->BlockedResults;
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (&param_1->BlockedFiles,pTVar4);
  piVar1 = &(this->BlockedResults).ArrayMax;
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  iVar6 = (this->BlockedResults).ArrayNum;
  if ((this->BlockedResults).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar7,iVar6);
    (this->BlockedResults).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar7,iVar6);
    (this->BlockedResults).ArrayNum = 0;
  }
  pTVar2 = &param_2->SearchTimes;
  pTVar5 = &this->SearchTimes;
  if ((pTVar2 == pTVar5) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x986,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar6 = (this->SearchTimes).ArrayNum;
  if (iVar6 != 0) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar6,&pTVar2->AllocatorInstance,&(param_2->SearchTimes).ArrayNum,
                        &(param_2->SearchTimes).ArrayMax);
    memmove((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8,(pTVar5->AllocatorInstance).Data
            ,(longlong)iVar6 << 3);
  }
  (this->SearchTimes).ArrayNum = 0;
  if ((this->SearchTimes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar5->AllocatorInstance,0,&(this->SearchTimes).ArrayMax);
  }
  pFVar8 = (this->FilesToSearch).Ptr;
  param_2->NumFilesToSearch =
       (pFVar8->AvailableFilesNum - (pFVar8->LaterRetryFiles).Front) +
       (pFVar8->LaterRetryFiles).AfterBack + this->NumUncachedAssetFilesOutstanding;
  param_2->NumPathsToSearch = this->NumPathsToSearchAtLastSyncPoint;
  param_2->bIsDiscoveringFiles = this->bDiscoveryIsComplete == false;
  if ((this->bIsIdle == false) ||
     (pFVar8 = (this->FilesToSearch).Ptr,
     (pFVar8->AvailableFilesNum - (pFVar8->LaterRetryFiles).Front) +
     (pFVar8->LaterRetryFiles).AfterBack != 0)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
    if (this->bIsComplete == false) {
      this->bIsComplete = true;
      Shrink(this);
      bVar11 = false;
    }
  }
  param_2->bIsSearching = bVar11;
  param_2->bAbleToProgress = this->bIsIdle == false;
  aVar14 = (this->ResultsLock).OwnerThreadId;
  aVar16 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar14 != aVar16) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x2b,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->GatheredResultsEvent;
  if ((this_00 ==
       (TMulticastDelegate<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
        *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  iVar6 = *(int *)&(this->GatheredResultsEvent).field_0x30;
  plVar18 = *(longlong **)&(this->GatheredResultsEvent).field_0x28;
  plVar21 = plVar18 + (longlong)iVar6 * 2;
  while( true ) {
    if (*(int *)&(this->GatheredResultsEvent).field_0x30 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar18 == plVar21) break;
    if (((int)plVar18[1] != 0) && (*plVar18 != 0)) {
      if (this_00 ==
          (TMulticastDelegate<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
           *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L"");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      else {
        LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this_00);
      puVar3 = &(this->GatheredResultsEvent).field_0x3c;
      *(int *)puVar3 = *(int *)puVar3 + 1;
      bVar11 = false;
      uVar20 = *(int *)&(this->GatheredResultsEvent).field_0x30 - 1;
      if (-1 < (int)uVar20) {
        lVar19 = (longlong)(int)uVar20 << 4;
        bVar11 = false;
        do {
          uVar17 = 0;
          if ((int)uVar20 < *(int *)&(this->GatheredResultsEvent).field_0x30) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar9 = *(longlong *)&(this->GatheredResultsEvent).field_0x28;
          if (((*(int *)(lVar9 + 8 + lVar19) == 0) ||
              (plVar18 = *(longlong **)(lVar9 + lVar19), plVar18 == (longlong *)0x0)) ||
             (cVar13 = (**(code **)(*plVar18 + 0x68))(), cVar13 == '\0')) {
            bVar11 = true;
          }
          lVar19 = lVar19 + -0x10;
          uVar20 = uVar20 - 1;
        } while (-1 < (int)uVar20);
      }
      puVar3 = &(this->GatheredResultsEvent).field_0x3c;
      *(int *)puVar3 = *(int *)puVar3 + -1;
      if (bVar11) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
      }
LAB_142afbbe6:
      LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      return;
    }
    plVar18 = plVar18 + 2;
  }
  if (this_00 ==
      (TMulticastDelegate<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    return;
  }
  goto LAB_142afbbe6;
}

// GetAssetsToSave @ 142afbee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::GetAssetsToSave
          (FAssetDataGatherer *this,TArrayView<FString_const_,int> *param_1,
          TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  FName *this_00;
  ulonglong uVar4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  FName FVar11;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *pTVar12;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *pTVar13;
  wchar_t *pwVar14;
  bool bVar15;
  atomic<unsigned_int> aVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  FString *pFVar20;
  uint uVar21;
  undefined1 *puVar22;
  ForElementType<unsigned_int> FVar23;
  uint *puVar24;
  uint uVar25;
  FString *pFVar26;
  int iVar27;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8;
  undefined1 local_2c7 [3];
  uint local_2c4;
  ForElementType<unsigned_int> local_2c0;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *local_2b8;
  int iStack_2b0;
  uint uStack_2ac;
  undefined1 *local_2a8;
  undefined4 uStack_2a0;
  int iStack_29c;
  int local_298;
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *local_288;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  TArrayView<FString_const_,int> *local_270;
  wchar_t *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_250;
  undefined8 uStack_230;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  undefined4 local_1bc;
  undefined4 local_19c;
  undefined4 local_17c;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_318;
  aVar5 = (this->TickLock).OwnerThreadId;
  local_270 = param_1;
  aVar16 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar5 != aVar16) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("TickLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x1410,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  piVar1 = &param_2->ArrayMax;
  iVar27 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  local_2b8 = &this->NewCachedAssetDataMap;
  local_288 = local_2b8;
  if (param_1->ArrayNum == 0) {
    uVar21 = *(int *)&(this->NewCachedAssetDataMap).field_0x8 -
             *(int *)&(this->NewCachedAssetDataMap).field_0x34;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if (*piVar1 < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar21,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    puVar2 = &(this->NewCachedAssetDataMap).field_0x10;
    uStack_2ac = 1;
    iVar19 = *(int *)&(this->NewCachedAssetDataMap).field_0x28;
    local_298 = 0;
    iStack_29c = 0;
    if (iVar19 != 0) {
      puVar24 = *(uint **)&(this->NewCachedAssetDataMap).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)puVar2;
      }
      uVar21 = *puVar24;
      local_298 = 0;
      while (uVar21 == 0) {
        lVar17 = (longlong)iVar27;
        local_298 = local_298 + 0x20;
        iVar27 = iVar27 + 1;
        iStack_29c = iVar19;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_142afc04f;
        uVar21 = puVar24[lVar17 + 1];
      }
      uStack_2ac = -uVar21 & uVar21;
      uVar4 = (ulonglong)uStack_2ac * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_280 = (int)lVar17;
      iStack_29c = local_298 + -1 + local_280;
      if (iVar19 < iStack_29c) {
        iStack_29c = iVar19;
      }
    }
LAB_142afc04f:
    local_2b8 = &this->NewCachedAssetDataMap;
    uStack_294 = local_19c;
    iStack_290 = *(int *)&(this->NewCachedAssetDataMap).field_0x8 -
                 *(int *)&(this->NewCachedAssetDataMap).field_0x34;
    uVar21 = *(uint *)&(this->NewCachedAssetDataMap).field_0x28;
    TStack_250._padding_ = CONCAT44(uStack_2ac,iVar27);
    uStack_2a0 = 0xffffffff;
    uVar25 = uVar21 & 0xffffffe0;
    TStack_250.CurrentBitIndex = iStack_29c;
    TStack_250.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar21 >> 5;
    TStack_250._28_4_ = local_19c;
    TStack_250.BaseBitIndex = local_298;
    uStack_230 = CONCAT44(uStack_28c,iStack_290);
    iStack_2b0 = iVar27;
    local_2a8 = puVar2;
    local_258 = local_2b8;
    TStack_250.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar21 < 0) || (iVar19 < (int)uVar21)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar12 = local_288;
    uVar6 = *(uint *)&(this->NewCachedAssetDataMap).field_0x28;
    if (uVar21 != uVar6) {
      puVar22 = *(undefined1 **)&(this->NewCachedAssetDataMap).field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar2;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar18 * 4);
      while (uVar21 == 0) {
        lVar17 = (longlong)iVar18;
        uVar25 = uVar25 + 0x20;
        iVar18 = iVar18 + 1;
        uVar21 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_142afc170;
        uVar21 = *(uint *)(puVar22 + lVar17 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_27c = (int)lVar17;
      uVar21 = local_27c + -1 + uVar25;
      if ((int)uVar6 < (int)uVar21) {
        uVar21 = uVar6;
      }
    }
LAB_142afc170:
    while( true ) {
      pTVar13 = local_258;
      if (*(int *)&local_258->field_0x8 - *(int *)&local_258->field_0x34 != (int)uStack_230) {
        local_2c8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FDiskCachedAssetData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2c8);
      }
      if (((TStack_250.CurrentBitIndex == uVar21) &&
          (TStack_250.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar13 == pTVar12)) break;
      pFVar3 = (FScriptContainerElement *)
               (*(longlong *)pTVar13 + (longlong)TStack_250.CurrentBitIndex * 0x18);
      pFVar7 = (param_2->AllocatorInstance).Data;
      if (((pFVar7 <= pFVar3) && (pFVar3 < pFVar7 + (longlong)*piVar1 * 0x10)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar27 = param_2->ArrayNum;
      if (iVar27 == *piVar1) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar27 + 1;
      uVar10 = *(undefined8 *)(pFVar3 + 8);
      pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar27 * 0x10;
      *(undefined8 *)pFVar7 = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar7 + 8) = uVar10;
      TStack_250.UnvisitedBitMask = TStack_250.UnvisitedBitMask & ~TStack_250._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_250);
    }
  }
  else {
    local_2c0 = (ForElementType<unsigned_int>)&(this->NewCachedAssetDataMap).field_0x10;
    iVar27 = *(int *)&(this->NewCachedAssetDataMap).field_0x28;
    iStack_2b0 = 0;
    uStack_2ac = 1;
    local_298 = 0;
    iStack_29c = 0;
    if (iVar27 != 0) {
      puVar24 = *(uint **)&(this->NewCachedAssetDataMap).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)&(this->NewCachedAssetDataMap).field_0x10;
      }
      uVar21 = *puVar24;
      while (uVar21 == 0) {
        lVar17 = (longlong)iStack_2b0;
        local_298 = local_298 + 0x20;
        iStack_2b0 = iStack_2b0 + 1;
        iStack_29c = iVar27;
        if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2b0)
        goto LAB_142afc2f6;
        uVar21 = puVar24[lVar17 + 1];
      }
      uStack_2ac = -uVar21 & uVar21;
      uVar4 = (ulonglong)uStack_2ac * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_278 = (int)lVar17;
      iStack_29c = local_298 + -1 + local_278;
      if (iVar27 < iStack_29c) {
        iStack_29c = iVar27;
      }
    }
LAB_142afc2f6:
    local_2a8 = &(this->NewCachedAssetDataMap).field_0x10;
    uStack_294 = local_17c;
    iStack_290 = *(int *)&(this->NewCachedAssetDataMap).field_0x8 -
                 *(int *)&(this->NewCachedAssetDataMap).field_0x34;
    uVar21 = *(uint *)&(this->NewCachedAssetDataMap).field_0x28;
    uStack_2a0 = 0xffffffff;
    TStack_220._padding_ = CONCAT44(uStack_2ac,iStack_2b0);
    uVar25 = uVar21 & 0xffffffe0;
    TStack_220.CurrentBitIndex = iStack_29c;
    TStack_220.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar21 >> 5;
    TStack_220._28_4_ = local_17c;
    TStack_220.BaseBitIndex = local_298;
    uStack_200 = CONCAT44(uStack_28c,iStack_290);
    local_2c4 = uVar21;
    local_228 = local_2b8;
    TStack_220.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2a8;
    if ((((int)uVar21 < 0) || (iVar27 < (int)uVar21)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar6 = *(int *)((longlong)local_2c0 + 0x18);
    if (uVar21 != uVar6) {
      FVar23 = *(ForElementType<unsigned_int> *)((longlong)local_2c0 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_2c0 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_2c0;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar19 * 4);
      while (uVar21 == 0) {
        lVar17 = (longlong)iVar19;
        uVar25 = uVar25 + 0x20;
        iVar19 = iVar19 + 1;
        uVar21 = uVar6;
        local_2c4 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_142afc420;
        uVar21 = *(uint *)((undefined1 *)((longlong)FVar23 + 4) + lVar17 * 4);
      }
      uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_274 = (int)lVar17;
      uVar21 = local_274 + -1 + uVar25;
      local_2c4 = uVar21;
      if ((int)uVar6 < (int)uVar21) {
        uVar21 = uVar6;
        local_2c4 = uVar6;
      }
    }
LAB_142afc420:
    while( true ) {
      pTVar12 = local_228;
      if (*(int *)&local_228->field_0x8 - *(int *)&local_228->field_0x34 != (int)uStack_200) {
        local_2c7[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FDiskCachedAssetData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2c7);
      }
      if (((TStack_220.CurrentBitIndex == uVar21) &&
          ((ForElementType<unsigned_int>)TStack_220.Array == local_2c0)) && (pTVar12 == local_288))
      break;
      local_178.bIsDynamic = false;
      local_178.bIsExternal = false;
      this_00 = (FName *)(*(longlong *)pTVar12 + (longlong)TStack_220.CurrentBitIndex * 0x18);
      local_178.Base = local_158;
      local_178.CurPos = local_158;
      local_178.End = (wchar_t *)local_58;
      ::FName::ToString(this_00,&local_178);
      pwVar14 = local_178.Base;
      pFVar20 = local_270->DataPtr;
      pFVar26 = pFVar20 + local_270->ArrayNum;
      if (pFVar20 != pFVar26) {
        local_268 = local_178.Base;
        iStack_260 = (int)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1);
        uStack_25c = local_1bc;
        uVar10._4_4_ = local_1bc;
        uVar10._0_4_ = iStack_260;
        do {
          local_1f8 = (pFVar20->Data).AllocatorInstance.Data;
          iVar27 = (pFVar20->Data).ArrayNum;
          local_1e8.DataPtr = pwVar14;
          iStack_1f0 = iVar27 + -1;
          if (iVar27 == 0) {
            iStack_1f0 = 0;
          }
          local_1d8._12_4_ = uStack_1ec;
          local_1d8.Size = iStack_1f0;
          local_1e8._8_8_ = uVar10;
          local_1d8.DataPtr = (wchar_t *)local_1f8;
          bVar15 = FPathViews::IsParentPathOf(&local_1d8,&local_1e8);
          if (bVar15) {
            pFVar8 = (FName *)(param_2->AllocatorInstance).Data;
            if (((pFVar8 <= this_00) && (this_00 < pFVar8 + (longlong)*piVar1 * 2)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar27 = param_2->ArrayNum;
            if (iVar27 == *piVar1) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar27 + 1;
            FVar11 = this_00[1];
            pFVar8 = (FName *)((param_2->AllocatorInstance).Data + (longlong)iVar27 * 0x10);
            *pFVar8 = *this_00;
            pFVar8[1] = FVar11;
            break;
          }
          pFVar20 = pFVar20 + 1;
        } while (pFVar20 != pFVar26);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
      TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
      uVar21 = local_2c4;
    }
  }
  return;
}

// GetCacheAssetsToSave @ 142afcdc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::GetCacheAssetsToSave
          (FAssetDataGatherer *this,
          TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  atomic<unsigned_int> aVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *pTVar10;
  bool bVar11;
  atomic<unsigned_int> aVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_11c;
  uint local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  
  aVar5 = (this->TickLock).OwnerThreadId;
  aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar5 != aVar12) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TickLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x142e,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar18 = *(int *)&(this->DiskCachedAssetDataMap).field_0x8 -
           *(int *)&(this->DiskCachedAssetDataMap).field_0x34;
  uVar13 = *(int *)&(this->NewCachedAssetDataMap).field_0x8 -
           *(int *)&(this->NewCachedAssetDataMap).field_0x34;
  if ((int)uVar18 < (int)uVar13) {
    uVar18 = uVar13;
  }
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*piVar1 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar18,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  puVar2 = &(this->NewCachedAssetDataMap).field_0x10;
  iVar15 = *(int *)&(this->NewCachedAssetDataMap).field_0x28;
  iVar19 = 0;
  local_110 = 1;
  iVar21 = 0;
  uVar18 = 1;
  iVar14 = 0;
  if (iVar15 != 0) {
    puVar22 = *(uint **)&(this->NewCachedAssetDataMap).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar18 = *puVar22;
    iVar19 = 0;
    iVar21 = 0;
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar19;
      iVar21 = iVar21 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = 1;
      iVar14 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_142afcf40;
      uVar18 = puVar22[lVar16 + 1];
    }
    uVar18 = -uVar18 & uVar18;
    uVar4 = (ulonglong)uVar18 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res20 = (int)lVar16;
    iVar14 = iVar21 + -1 + local_res20;
    if (iVar15 < iVar14) {
      iVar14 = iVar15;
    }
  }
LAB_142afcf40:
  uVar13 = *(uint *)&(this->NewCachedAssetDataMap).field_0x28;
  uVar23 = uVar13 & 0xffffffe0;
  TStack_e8.CurrentBitIndex = iVar14;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uVar18,iVar19);
  iVar19 = (int)uVar13 >> 5;
  TStack_e8._28_4_ = local_74;
  TStack_e8.BaseBitIndex = iVar21;
  uStack_c8 = CONCAT44(uStack_11c,
                       *(int *)&(this->NewCachedAssetDataMap).field_0x8 -
                       *(int *)&(this->NewCachedAssetDataMap).field_0x34);
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar15 < (int)uVar13)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar18 = *(uint *)&(this->NewCachedAssetDataMap).field_0x28;
  if (uVar13 != uVar18) {
    puVar20 = *(undefined1 **)&(this->NewCachedAssetDataMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar2;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar13 == 0) {
      lVar16 = (longlong)iVar19;
      uVar23 = uVar23 + 0x20;
      iVar19 = iVar19 + 1;
      uVar13 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_142afd070;
      uVar13 = *(uint *)(puVar20 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar13 = (int)lVar16 + -1 + uVar23;
    if ((int)uVar18 < (int)uVar13) {
      uVar13 = uVar18;
    }
  }
LAB_142afd070:
  while( true ) {
    if (*(int *)&(this->NewCachedAssetDataMap).field_0x8 -
        *(int *)&(this->NewCachedAssetDataMap).field_0x34 != (int)uStack_c8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FDiskCachedAssetData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_e8.CurrentBitIndex == uVar13) &&
       (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar3 = (FScriptContainerElement *)
             (*(longlong *)&this->NewCachedAssetDataMap + (longlong)TStack_e8.CurrentBitIndex * 0x18
             );
    pFVar6 = (param_1->AllocatorInstance).Data;
    if (((pFVar6 <= pFVar3) && (pFVar3 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar15 = param_1->ArrayNum;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar15 + 1;
    uVar9 = *(undefined8 *)(pFVar3 + 8);
    pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
    *(undefined8 *)pFVar6 = *(undefined8 *)pFVar3;
    *(undefined8 *)(pFVar6 + 8) = uVar9;
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  iVar19 = 0;
  iVar21 = 0;
  puVar2 = &(this->DiskCachedAssetDataMap).field_0x10;
  iVar15 = *(int *)&(this->DiskCachedAssetDataMap).field_0x28;
  local_c0 = &this->DiskCachedAssetDataMap;
  iVar14 = 0;
  if (iVar15 != 0) {
    puVar22 = *(uint **)&(this->DiskCachedAssetDataMap).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar18 = *puVar22;
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar19;
      iVar21 = iVar21 + 0x20;
      iVar19 = iVar19 + 1;
      iVar14 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_142afd1ef;
      uVar18 = puVar22[lVar16 + 1];
    }
    local_110 = -uVar18 & uVar18;
    uVar4 = (ulonglong)local_110 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar14 = iVar21 + -1 + (int)lVar16;
    if (iVar15 < iVar14) {
      iVar14 = iVar15;
    }
  }
LAB_142afd1ef:
  uVar18 = *(uint *)&(this->DiskCachedAssetDataMap).field_0x28;
  TStack_b8._padding_ = CONCAT44(local_110,iVar19);
  uVar13 = uVar18 & 0xffffffe0;
  TStack_b8.CurrentBitIndex = iVar14;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = iVar21;
  uStack_98 = CONCAT44(uStack_11c,
                       *(int *)&(this->DiskCachedAssetDataMap).field_0x8 -
                       *(int *)&(this->DiskCachedAssetDataMap).field_0x34);
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar18 < 0) || (iVar15 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar23 = *(uint *)&(this->DiskCachedAssetDataMap).field_0x28;
  if (uVar18 != uVar23) {
    puVar20 = *(undefined1 **)&(this->DiskCachedAssetDataMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar2;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar19;
      uVar13 = uVar13 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_142afd320;
      uVar18 = *(uint *)(puVar20 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar18 = (int)lVar16 + -1 + uVar13;
    if ((int)uVar23 < (int)uVar18) {
      uVar18 = uVar23;
    }
  }
LAB_142afd320:
  do {
    pTVar10 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FDiskCachedAssetData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_b8.CurrentBitIndex == uVar18) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar10 == &this->DiskCachedAssetDataMap)) {
      return;
    }
    lVar16 = *(longlong *)pTVar10;
    lVar7 = *(longlong *)(lVar16 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    pFVar3 = (FScriptContainerElement *)(lVar16 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar7);
    if (*(int *)&(this->NewCachedAssetDataMap).field_0x8 !=
        *(int *)&(this->NewCachedAssetDataMap).field_0x34) {
      puVar20 = *(undefined1 **)&(this->NewCachedAssetDataMap).field_0x40;
      puVar17 = &(this->NewCachedAssetDataMap).field_0x38;
      if (puVar20 != (undefined1 *)0x0) {
        puVar17 = puVar20;
      }
      iVar15 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(this->NewCachedAssetDataMap).field_0x48 - 1U &
                       (int)((ulonglong)lVar7 >> 0x20) + uVar13) * 4);
      if (iVar15 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&this->NewCachedAssetDataMap + (longlong)iVar15 * 0x18) ==
              lVar7) goto LAB_142afd490;
          iVar15 = *(int *)(*(longlong *)&this->NewCachedAssetDataMap + 0x10 +
                           (longlong)iVar15 * 0x18);
        } while (iVar15 != -1);
      }
    }
    if ((this->bFinishedInitialDiscovery == false) ||
       ((this->GatherStartTime).Ticks - *(longlong *)(*(longlong *)(pFVar3 + 8) + 8) <
        UE::AssetDataGather::Private::FGatherSettings::CachePruneAge.Ticks)) {
      pFVar6 = (param_1->AllocatorInstance).Data;
      if ((pFVar6 <= pFVar3) &&
         ((pFVar3 < pFVar6 + (longlong)*piVar1 * 0x10 &&
          (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)))) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = param_1->ArrayNum;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar15 + 1;
      uVar9 = *(undefined8 *)(pFVar3 + 8);
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar6 + 8) = uVar9;
    }
LAB_142afd490:
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// GetDiagnostics @ 142afe630

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetGatherDiagnostics * __thiscall
FAssetDataGatherer::GetDiagnostics
          (FAssetDataGatherer *this,FAssetGatherDiagnostics *__return_storage_ptr__)

{
  FCriticalSectionQueryable *pFVar1;
  FAssetDataDiscovery *pFVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  FAssetGatherDiagnostics *pFVar7;
  FDateTime FVar8;
  
  pFVar2 = (this->Discovery).Ptr;
  pFVar1 = &pFVar2->ResultsLock;
  if (pFVar1 == (FCriticalSectionQueryable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FAssetGatherDiagnostics *)(*pcVar3)();
      return pFVar7;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  (pFVar2->ResultsLock).OwnerThreadId = aVar5;
  __return_storage_ptr__->DiscoveryTimeSeconds = pFVar2->CumulativeDiscoveryTime;
  __return_storage_ptr__->NumCachedDirectories = pFVar2->NumCachedDirectories;
  aVar5 = (pFVar2->ResultsLock).OwnerThreadId;
  __return_storage_ptr__->NumUncachedDirectories = pFVar2->NumUncachedDirectories;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar5 != aVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FAssetGatherDiagnostics *)(*pcVar3)();
      return pFVar7;
    }
  }
  (pFVar2->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  pFVar1 = &this->ResultsLock;
  if (pFVar1 == (FCriticalSectionQueryable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FAssetGatherDiagnostics *)(*pcVar3)();
      return pFVar7;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar5;
  __return_storage_ptr__->GatherTimeSeconds = this->CumulativeGatherTime;
  __return_storage_ptr__->NumCachedAssetFiles = this->NumCachedAssetFiles;
  __return_storage_ptr__->NumUncachedAssetFiles = this->NumUncachedAssetFiles;
  FVar8 = FDateTime::Now();
  aVar5 = (this->ResultsLock).OwnerThreadId;
  __return_storage_ptr__->WallTimeSeconds =
       (float)((double)(*(longlong *)FVar8.Ticks - (this->GatherStartTime).Ticks) *
              __real_3e7ad7f29abcaf48);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar5 != aVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FAssetGatherDiagnostics *)(*pcVar3)();
      return pFVar7;
    }
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  return __return_storage_ptr__;
}

// GetPackageResults @ 142affb90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::GetPackageResults(FAssetDataGatherer *this,FResults *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int *piVar1;
  TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FPackageDependencyData *pFVar4;
  code *pcVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  TArray<FPackageDependencyData,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8;
  undefined1 local_a7 [3];
  undefined1 local_a4 [8];
  undefined1 local_9c [12];
  FPackageDependencyData *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  undefined8 local_70;
  FScriptContainerElement *local_68;
  FPackageDependencyData **local_60;
  FScriptContainerElement *local_58;
  undefined8 *local_50;
  FScriptContainerElement *local_48;
  
  lpCriticalSection = &this->ResultsLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  pTVar2 = &this->AssetResults;
  (this->ResultsLock).OwnerThreadId = aVar7;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->AssetResults).ArrayNum;
  pFVar11 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AssetResults).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar10 == pFVar11) break;
    local_80 = *(undefined8 *)pFVar10;
    local_78 = pFVar10;
    TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_&&>_>
              ((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                *)param_1,
               (TPairInitializer<FName_const_&,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_&&>
                *)local_a4,(bool *)&local_80);
    pFVar10 = pFVar10 + 8;
  }
  piVar1 = &(this->AssetResults).ArrayMax;
  pFVar11 = (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->AssetResults).ArrayNum;
  if ((this->AssetResults).ArrayMax < 0) {
    DestructItems<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,int>
              ((TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)pFVar11,iVar3);
    (this->AssetResults).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,int>
              ((TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)pFVar11,iVar3);
    (this->AssetResults).ArrayNum = 0;
  }
  pTVar2 = &this->AssetResultsForGameThread;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->AssetResultsForGameThread).ArrayNum;
  pFVar11 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AssetResultsForGameThread).ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar11) break;
    local_70 = *(undefined8 *)pFVar10;
    local_68 = pFVar10;
    TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_&&>_>
              ((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
                *)&param_1->AssetsForGameThread,
               (TPairInitializer<FName_const_&,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_&&>
                *)(local_a4 + 4),(bool *)&local_70);
    pFVar10 = pFVar10 + 8;
  }
  piVar1 = &(this->AssetResultsForGameThread).ArrayMax;
  pFVar11 = (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->AssetResultsForGameThread).ArrayNum;
  if ((this->AssetResultsForGameThread).ArrayMax < 0) {
    DestructItems<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,int>
              ((TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)pFVar11,iVar3);
    (this->AssetResultsForGameThread).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,int>
              ((TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)pFVar11,iVar3);
    (this->AssetResultsForGameThread).ArrayNum = 0;
  }
  pTVar9 = &this->DependencyResults;
  iVar3 = (this->DependencyResults).ArrayNum;
  pFVar11 = (pTVar9->AllocatorInstance).Data;
  pFVar10 = pFVar11 + (longlong)iVar3 * 0xe0;
  while( true ) {
    if ((this->DependencyResults).ArrayNum != iVar3) {
      local_a8 = 0;
      `TCheckedPointerIterator<FPackageDependencyData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a8);
    }
    if (pFVar11 == pFVar10) break;
    local_90 = *(FPackageDependencyData **)pFVar11;
    local_60 = &local_90;
    local_58 = pFVar11;
    TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FPackageDependencyData_&&>_>
              ((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
                *)&param_1->Dependencies,
               (TPairInitializer<FName_const_&,FPackageDependencyData_&&> *)local_9c,
               (bool *)&local_60);
    pFVar11 = pFVar11 + 0xe0;
  }
  piVar1 = &(this->DependencyResults).ArrayMax;
  pFVar4 = (FPackageDependencyData *)(pTVar9->AllocatorInstance).Data;
  iVar3 = (this->DependencyResults).ArrayNum;
  if ((this->DependencyResults).ArrayMax < 0) {
    DestructItems<FPackageDependencyData,int>(pFVar4,iVar3);
    (this->DependencyResults).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,8,0,&pTVar9->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPackageDependencyData,int>(pFVar4,iVar3);
    (this->DependencyResults).ArrayNum = 0;
  }
  pTVar9 = &this->DependencyResultsForGameThread;
  iVar3 = (this->DependencyResultsForGameThread).ArrayNum;
  pFVar11 = (pTVar9->AllocatorInstance).Data;
  pFVar10 = pFVar11 + (longlong)iVar3 * 0xe0;
  while( true ) {
    if ((this->DependencyResultsForGameThread).ArrayNum != iVar3) {
      local_a7[0] = 0;
      `TCheckedPointerIterator<FPackageDependencyData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_a7);
    }
    if (pFVar11 == pFVar10) break;
    local_88 = *(undefined8 *)pFVar11;
    local_50 = &local_88;
    local_48 = pFVar11;
    TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FPackageDependencyData_&&>_>
              ((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
                *)&param_1->DependenciesForGameThread,
               (TPairInitializer<FName_const_&,FPackageDependencyData_&&> *)(local_9c + 4),
               (bool *)&local_50);
    pFVar11 = pFVar11 + 0xe0;
  }
  piVar1 = &(this->DependencyResultsForGameThread).ArrayMax;
  pFVar4 = (FPackageDependencyData *)(pTVar9->AllocatorInstance).Data;
  iVar3 = (this->DependencyResultsForGameThread).ArrayNum;
  if ((this->DependencyResultsForGameThread).ArrayMax < 0) {
    DestructItems<FPackageDependencyData,int>(pFVar4,iVar3);
    (this->DependencyResultsForGameThread).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,8,0,&pTVar9->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPackageDependencyData,int>(pFVar4,iVar3);
    (this->DependencyResultsForGameThread).ArrayNum = 0;
  }
  aVar7 = (this->ResultsLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar7 != aVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142affee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetVerseFileExtensions @ 142b00b90

TArrayView<wchar_t_const_*_const,int> * __cdecl
FAssetDataGatherer::GetVerseFileExtensions
          (TArrayView<wchar_t_const_*_const,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->ArrayNum = 2;
  __return_storage_ptr__->DataPtr = VerseExtensions;
  return __return_storage_ptr__;
}

// HasSerializedDiscoveryCache @ 142b00cc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAssetDataGatherer::HasSerializedDiscoveryCache(FAssetDataGatherer *this)

{
  FCriticalSectionQueryable *lpCriticalSection;
  FAssetDataDiscovery *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  
  lpCriticalSection = &this->ResultsLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar6;
  if (((this->bDiscoveryIsComplete == false) ||
      (pFVar1 = (this->Discovery).Ptr, (pFVar1->Cache).bInitialized == false)) ||
     ((pFVar1->Cache).WriteEnabled == Never)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  aVar6 = (this->ResultsLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar6 != aVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// IngestDiscoveryResults @ 142b00dc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::IngestDiscoveryResults(FAssetDataGatherer *this)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  
  aVar1 = (this->TickLock).OwnerThreadId;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar1 != aVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x1231,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  aVar1 = (this->ResultsLock).OwnerThreadId;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar1 != aVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x1232,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::AssetDataGather::Private::FAssetDataDiscovery::GetAndTrimSearchResults
            ((this->Discovery).Ptr,&this->bDiscoveryIsComplete,&this->DiscoveredPaths,
             (this->FilesToSearch).Ptr,&this->NumPathsToSearchAtLastSyncPoint);
  return;
}

// Init @ 142b00e90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAssetDataGatherer::Init(FAssetDataGatherer *this)

{
  return true;
}

// InnerTickLoop @ 142b03790

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

ETickResult __thiscall
FAssetDataGatherer::InnerTickLoop(FAssetDataGatherer *this,bool param_1,bool param_2,double param_3)

{
  FCriticalSectionQueryable *lpCriticalSection;
  FCriticalSectionQueryable *lpCriticalSection_00;
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  atomic<unsigned_int> aVar8;
  ETickResult EVar9;
  atomic<unsigned_int> aVar10;
  bool bVar11;
  atomic<bool> aVar12;
  double dVar13;
  double local_res8;
  bool local_res10;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> local_a0 [6];
  
  if ((!param_1) || ((this->Thread == (FRunnableThread *)0x0 && (param_2)))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  aVar10 = (this->ResultsLock).OwnerThreadId;
  local_a0[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  aVar12 = (atomic<bool>)0x0;
  local_a0[0].ArrayNum = 0;
  local_a0[0].ArrayMax = 0;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar10 == aVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xfa4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    EVar9 = (*pcVar2)();
    return EVar9;
  }
  lpCriticalSection = &this->TickLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    EVar9 = (*pcVar2)();
    return EVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->TickLock).OwnerThreadId = aVar10;
  local_res10 = this->bSynchronousTick;
  this->bSynchronousTick = param_1;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4007,"FAssetDataGatherer::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
               ,0xfa7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4007);
  }
  QueryPerformanceCounter(&local_res20);
  fVar5 = __real_3ba3d70a;
  dVar4 = __real_4170000000000000;
  dVar3 = 0.0;
  local_res8 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000;
  do {
    bVar11 = true;
    while( true ) {
      EVar9 = TickInternal(this,&local_res8,bVar11);
      if ((0.0 < param_3) &&
         (QueryPerformanceCounter(&local_b8),
         param_3 < (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4)) {
        EVar9 = Interrupt;
        goto LAB_142b039d8;
      }
      if ((this->IsStopped != (atomic<unsigned_int>)0x0) ||
         ((!param_1 && (this->IsGatheringPaused != (atomic<unsigned_int>)0x0)))) {
        EVar9 = Idle;
        goto LAB_142b039d8;
      }
      if (PollDiscovery < EVar9) goto LAB_142b039d8;
      QueryPerformanceCounter(&local_b0);
      dVar13 = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
      if (bVar11 != false) {
        dVar3 = dVar13;
      }
      if (EVar9 != KeepTicking) break;
      bVar11 = fVar5 < (float)(dVar13 - dVar3);
    }
    if (bVar11 != false) {
      EVar9 = PollDiscovery;
LAB_142b039d8:
      dVar3 = local_res8;
      if (0.0 <= local_res8) {
        QueryPerformanceCounter(&local_a8);
        local_res8 = 0.0;
        this->CurrentSearchTime =
             (((double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) - dVar3) +
             this->CurrentSearchTime;
      }
      if ((((bVar7) && (this->IsStopped == (atomic<unsigned_int>)0x0)) &&
          (this->bSaveAsyncCacheTriggered != (atomic<bool>)0x0)) &&
         (this->bIsSavingAsyncCache == false)) {
        aVar10 = (this->TickLock).OwnerThreadId;
        aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
        if ((aVar10 != aVar8) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TickLock.IsLockedOnCurrentThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                               ,0x13fe,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          EVar9 = (*pcVar2)();
          return EVar9;
        }
        lpCriticalSection_00 = &this->ResultsLock;
        if ((lpCriticalSection_00 == (FCriticalSectionQueryable *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("SynchObject",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0x53,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          EVar9 = (*pcVar2)();
          return EVar9;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
        (this->ResultsLock).OwnerThreadId = aVar10;
        aVar12 = this->bCacheWriteEnabled;
        iVar1 = this->NumUncachedAssetFiles;
        aVar10 = (this->ResultsLock).OwnerThreadId;
        aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
        if ((aVar10 != aVar8) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLockedOnCurrentThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0x2b,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          EVar9 = (*pcVar2)();
          return EVar9;
        }
        (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        if (aVar12 == (atomic<bool>)0x0) {
          LOCK();
          this->bSaveAsyncCacheTriggered = (atomic<bool>)0x0;
          UNLOCK();
        }
        else {
          GetCacheAssetsToSave(this,local_a0);
          this->bIsSavingAsyncCache = true;
          this->LastCacheSaveNumUncachedAssetFiles = iVar1;
          LOCK();
          this->bSaveAsyncCacheTriggered = (atomic<bool>)0x0;
          UNLOCK();
          this->CacheInUseCount = this->CacheInUseCount + 1;
        }
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      this->bSynchronousTick = local_res10;
      aVar10 = (this->TickLock).OwnerThreadId;
      aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar10 != aVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                             ,0x2b,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        EVar9 = (*pcVar2)();
        return EVar9;
      }
      (this->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (aVar12 != (atomic<bool>)0x0) {
        SaveCacheFile(this,local_a0);
      }
      if (local_a0[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0[0].AllocatorInstance.Data);
      }
      return EVar9;
    }
  } while( true );
}

// IsAsyncEnabled @ 142b043b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAssetDataGatherer::IsAsyncEnabled(FAssetDataGatherer *this)

{
  return this->bAsyncEnabled;
}

// IsCacheReadEnabled @ 142b043c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAssetDataGatherer::IsCacheReadEnabled(FAssetDataGatherer *this)

{
  return (bool)this->bCacheReadEnabled;
}

// IsCacheWriteEnabled @ 142b043f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAssetDataGatherer::IsCacheWriteEnabled(FAssetDataGatherer *this)

{
  return (bool)this->bCacheWriteEnabled;
}

// IsComplete @ 142b044c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAssetDataGatherer::IsComplete(FAssetDataGatherer *this)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  
  lpCriticalSection = &this->ResultsLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar5;
  bVar2 = this->bIsComplete;
  aVar5 = (this->ResultsLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar5 != aVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// IsGatheringDependencies @ 142b04910

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAssetDataGatherer::IsGatheringDependencies(FAssetDataGatherer *this)

{
  return this->bGatherDependsData;
}

// IsMonitored @ 142b04b20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FAssetDataGatherer::IsMonitored(FAssetDataGatherer *this,TStringView<wchar_t> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int iVar1;
  FAssetDataDiscovery *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  atomic<unsigned_int> aVar9;
  atomic<unsigned_int> aVar10;
  FString *pFVar11;
  FMountDir *this_01;
  FInherited local_res8 [2];
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28 [2];
  
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (this->Discovery).Ptr;
  pFVar11 = NormalizeLocalPath(local_28,&local_58);
  aVar10 = (this_00->ResultsLock).OwnerThreadId;
  pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
  iVar1 = (pFVar11->Data).ArrayNum;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar10 == aVar9) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xb2e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  lpCriticalSection = &this_00->TreeLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this_00->TreeLock).OwnerThreadId = aVar10;
  aVar10 = (this_00->TreeLock).OwnerThreadId;
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar10 != aVar9) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xc74,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  uVar4._4_4_ = uStack_5c;
  uVar4._0_4_ = iVar8;
  local_48.DataPtr = (wchar_t *)pFVar2;
  local_48._8_8_ = uVar4;
  this_01 = UE::AssetDataGather::Private::FAssetDataDiscovery::FindContainingMountPoint
                      (this_00,&local_48);
  if (this_01 != (FMountDir *)0x0) {
    local_res8[0].bIsOnAllowList = false;
    local_res8[0].bMatchesDenyList = false;
    local_res8[0].bIgnoreDenyList = false;
    local_38.DataPtr = (wchar_t *)pFVar2;
    local_38._8_8_ = uVar4;
    UE::AssetDataGather::Private::FMountDir::GetMonitorData(this_01,&local_38,local_res8);
    if ((local_res8[0].bIsOnAllowList != false) &&
       ((local_res8[0].bMatchesDenyList == false || (local_res8[0].bIgnoreDenyList != false)))) {
      bVar5 = true;
      goto LAB_142b04c84;
    }
  }
  bVar5 = false;
LAB_142b04c84:
  aVar10 = (this_00->TreeLock).OwnerThreadId;
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar10 != aVar9) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  (this_00->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// IsOnAllowList @ 142b04f50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FAssetDataGatherer::IsOnAllowList(FAssetDataGatherer *this,TStringView<wchar_t> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int iVar1;
  FAssetDataDiscovery *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  atomic<unsigned_int> aVar8;
  atomic<unsigned_int> aVar9;
  FString *pFVar10;
  FMountDir *this_01;
  FInherited local_res8 [2];
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28 [2];
  
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (this->Discovery).Ptr;
  pFVar10 = NormalizeLocalPath(local_28,&local_58);
  aVar9 = (this_00->ResultsLock).OwnerThreadId;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  iVar1 = (pFVar10->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar9 == aVar8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xb12,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  lpCriticalSection = &this_00->TreeLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this_00->TreeLock).OwnerThreadId = aVar9;
  aVar9 = (this_00->TreeLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar9 != aVar8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xc74,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  uVar4._4_4_ = uStack_5c;
  uVar4._0_4_ = iVar7;
  local_48.DataPtr = (wchar_t *)pFVar2;
  local_48._8_8_ = uVar4;
  this_01 = UE::AssetDataGather::Private::FAssetDataDiscovery::FindContainingMountPoint
                      (this_00,&local_48);
  if (this_01 == (FMountDir *)0x0) {
    aVar9 = (this_00->TreeLock).OwnerThreadId;
    aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar9 != aVar8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (this_00->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar6 = 0;
  }
  else {
    local_res8[0].bIsOnAllowList = false;
    local_res8[0].bMatchesDenyList = false;
    local_res8[0].bIgnoreDenyList = false;
    local_38.DataPtr = (wchar_t *)pFVar2;
    local_38._8_8_ = uVar4;
    UE::AssetDataGather::Private::FMountDir::GetMonitorData(this_01,&local_38,local_res8);
    uVar6 = local_res8[0].bIsOnAllowList;
    aVar9 = (this_00->TreeLock).OwnerThreadId;
    aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar9 != aVar8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (this_00->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return (bool)uVar6;
}

// IsOnDenyList @ 142b052f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FAssetDataGatherer::IsOnDenyList(FAssetDataGatherer *this,TStringView<wchar_t> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int iVar1;
  FAssetDataDiscovery *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  atomic<unsigned_int> aVar9;
  atomic<unsigned_int> aVar10;
  FString *pFVar11;
  FMountDir *this_01;
  FInherited local_res8 [2];
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28 [2];
  
  local_58.DataPtr = param_1->DataPtr;
  local_58.Size = param_1->Size;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (this->Discovery).Ptr;
  pFVar11 = NormalizeLocalPath(local_28,&local_58);
  aVar10 = (this_00->ResultsLock).OwnerThreadId;
  pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
  iVar1 = (pFVar11->Data).ArrayNum;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar10 == aVar9) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xb20,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  lpCriticalSection = &this_00->TreeLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this_00->TreeLock).OwnerThreadId = aVar10;
  aVar10 = (this_00->TreeLock).OwnerThreadId;
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar10 != aVar9) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xc74,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  uVar4._4_4_ = uStack_5c;
  uVar4._0_4_ = iVar8;
  local_48.DataPtr = (wchar_t *)pFVar2;
  local_48._8_8_ = uVar4;
  this_01 = UE::AssetDataGather::Private::FAssetDataDiscovery::FindContainingMountPoint
                      (this_00,&local_48);
  if (this_01 == (FMountDir *)0x0) {
    aVar10 = (this_00->TreeLock).OwnerThreadId;
    aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar10 != aVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (this_00->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar5 = false;
  }
  else {
    local_res8[0].bIsOnAllowList = false;
    local_res8[0].bMatchesDenyList = false;
    local_res8[0].bIgnoreDenyList = false;
    local_38.DataPtr = (wchar_t *)pFVar2;
    local_38._8_8_ = uVar4;
    UE::AssetDataGather::Private::FMountDir::GetMonitorData(this_01,&local_38,local_res8);
    if ((local_res8[0].bMatchesDenyList == false) || (local_res8[0].bIgnoreDenyList != false)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    aVar10 = (this_00->TreeLock).OwnerThreadId;
    aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar10 != aVar9) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (this_00->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// IsSynchronous @ 142b05750

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAssetDataGatherer::IsSynchronous(FAssetDataGatherer *this)

{
  return this->Thread == (FRunnableThread *)0x0;
}

// IsVerseFile @ 142b05a20

bool __cdecl FAssetDataGatherer::IsVerseFile(TStringView<wchar_t> *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  FEventNode *_Str;
  int iVar3;
  size_t sVar4;
  int iVar5;
  wchar_t **ppwVar6;
  int iVar7;
  
  iVar1 = param_1->Size;
  ppwVar6 = VerseExtensions;
  pwVar2 = param_1->DataPtr;
  while( true ) {
    _Str = (FEventNode *)*ppwVar6;
    iVar5 = 0;
    if (_Str != (FEventNode *)0x0) {
      sVar4 = wcslen((wchar_t *)_Str);
      iVar5 = (int)sVar4;
    }
    iVar3 = iVar1;
    if (iVar5 < iVar1) {
      iVar3 = iVar5;
    }
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    if (((iVar5 == iVar7) &&
        (((iVar5 == 0 || (iVar7 == 0)) ||
         (iVar3 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)_Str,pwVar2 + ((longlong)iVar1 - (longlong)iVar7),
                             (longlong)iVar7), iVar3 == 0)))) && (iVar5 == iVar7)) break;
    ppwVar6 = ppwVar6 + 1;
    if ((FEventNode **)ppwVar6 == &CpuSaveCacheFileEvent) {
      return false;
    }
  }
  return true;
}

// NormalizeLocalPath @ 142b0a370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FAssetDataGatherer::NormalizeLocalPath
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FString *pFVar6;
  int iVar7;
  int iVar8;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  uVar2 = *(undefined8 *)&param_1->Size;
  pwVar3 = param_1->DataPtr;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
  if (__return_storage_ptr__ != pFVar6) {
    pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar6 = FPaths::ConvertRelativePathToFull(&local_28,__return_storage_ptr__);
  if (__return_storage_ptr__ != pFVar6) {
    pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  while( true ) {
    local_28.Data.AllocatorInstance.Data = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    iVar8 = 0;
    local_28.Data.ArrayNum = iVar1 + -1;
    if (iVar1 == 0) {
      local_28.Data.ArrayNum = iVar8;
    }
    local_18._12_4_ = local_28.Data.ArrayMax;
    local_18.Size = local_28.Data.ArrayNum;
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    bVar5 = FPathViews::HasRedundantTerminatingSeparator(&local_18);
    if (!bVar5) break;
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = iVar8;
    }
    if (iVar7 + -1 < iVar7) {
      iVar7 = iVar7 + -1;
    }
    if (0 < iVar7) {
      iVar8 = iVar7;
    }
    ::FString::RemoveAt(__return_storage_ptr__,iVar8,1,Default);
  }
  return __return_storage_ptr__;
}

// NormalizeLongPackageName @ 142b0a4b0

TStringView<wchar_t> * __cdecl
FAssetDataGatherer::NormalizeLongPackageName
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_c;
  
  iVar3 = param_1->Size;
  if (0 < iVar3) {
    if (param_1->DataPtr[(longlong)iVar3 + -1] == L'/') {
      if (iVar3 + -1 < iVar3) {
        iVar3 = iVar3 + -1;
      }
      iVar2 = 0;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      param_1->DataPtr = param_1->DataPtr;
      *(ulonglong *)&param_1->Size = CONCAT44(uStack_c,iVar2);
    }
  }
  iVar3 = param_1->Size;
  uVar1 = *(undefined4 *)&param_1->field_0xc;
  __return_storage_ptr__->DataPtr = param_1->DataPtr;
  __return_storage_ptr__->Size = iVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar1;
  return __return_storage_ptr__;
}

// OnAdditionalMountSearchCompleted @ 142b0a660

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::OnAdditionalMountSearchCompleted(FAssetDataGatherer *this)

{
  LOCK();
  this->bSaveAsyncCacheTriggered = (atomic<bool>)0x1;
  UNLOCK();
  this->bIsAdditionalMountSearchInProgress = (atomic<bool>)0x0;
  UE::AssetDataGather::Private::FFileReadScheduler::FreeReadTaskLoaders
            ((this->FileReadScheduler).Ptr);
  return;
}

// OnDirectoryCreated @ 142b0ab60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::OnDirectoryCreated(FAssetDataGatherer *this,TStringView<wchar_t> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int iVar1;
  FAssetDataDiscovery *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  FString *pFVar7;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (this->Discovery).Ptr;
  pFVar7 = NormalizeLocalPath(&local_18,&local_38);
  local_28.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  iVar1 = (pFVar7->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  local_28._12_4_ = uStack_3c;
  local_28.Size = iVar4;
  UE::AssetDataGather::Private::FAssetDataDiscovery::OnDirectoryCreated(this_00,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  lpCriticalSection = &this->ResultsLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar5;
  aVar5 = (this->ResultsLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar5 != aVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x1698,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->bIsIdle != false) {
    this->bIsIdle = false;
    this->bFirstTickAfterIdle = true;
    this->bDiscoveryIsComplete = false;
    this->bIsComplete = false;
  }
  aVar5 = (this->ResultsLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar5 != aVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142b0acb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// OnFilesCreated @ 142b0b520

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::OnFilesCreated(FAssetDataGatherer *this,TArrayView<FString_const_,int> *param_1)

{
  FCriticalSectionQueryable *pFVar1;
  uint uVar2;
  FAssetDataDiscovery *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FString *pFVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  double local_res10;
  ForAnyElementType local_68;
  undefined8 local_60;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  uVar2 = param_1->ArrayNum;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  pFVar10 = param_1->DataPtr;
  pFVar11 = pFVar10 + (int)uVar2;
  FVar12.Data = local_68.Data;
  for (; local_68.Data = FVar12.Data, pFVar10 != pFVar11; pFVar10 = pFVar10 + 1) {
    local_58 = (pFVar10->Data).AllocatorInstance.Data;
    iVar5 = (pFVar10->Data).ArrayNum;
    iStack_50 = iVar5 + -1;
    if (iVar5 == 0) {
      iStack_50 = 0;
    }
    local_48._12_4_ = uStack_4c;
    local_48.Size = iStack_50;
    local_48.DataPtr = (wchar_t *)local_58;
    pFVar8 = (FScriptContainerElement *)NormalizeLocalPath(&local_38,&local_48);
    if (((local_68.Data <= pFVar8) && (pFVar8 < local_68.Data + (longlong)local_60._4_4_ * 0x10)) &&
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
    iVar5 = (int)local_60;
    if ((int)local_60 == local_60._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_68,(int *)((longlong)&local_60 + 4));
    }
    local_60 = CONCAT44(local_60._4_4_,iVar5 + 1);
    lVar9 = (longlong)iVar5;
    *(undefined8 *)(local_68.Data + lVar9 * 0x10) = 0;
    *(undefined8 *)(local_68.Data + lVar9 * 0x10) = *(undefined8 *)pFVar8;
    *(undefined8 *)pFVar8 = 0;
    *(int *)(local_68.Data + lVar9 * 0x10 + 8) = *(int *)(pFVar8 + 8);
    *(int *)(local_68.Data + lVar9 * 0x10 + 0xc) = *(int *)(pFVar8 + 0xc);
    *(undefined8 *)(pFVar8 + 8) = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar12.Data = local_68.Data;
  }
  lVar9 = (longlong)(int)local_60;
  this_00 = (this->Discovery).Ptr;
  if (((int)local_60 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  aVar7 = (this_00->ResultsLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar7 == aVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xc1d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = &this_00->TreeLock;
  if ((pFVar1 == (FCriticalSectionQueryable *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  local_res10 = __real_bff0000000000000;
  (this_00->TreeLock).OwnerThreadId = aVar7;
  UE::AssetDataGather::Private::FAssetDataDiscovery::SetIsIdle(this_00,false,&local_res10);
  pFVar8 = FVar12.Data + lVar9 * 0x10;
  for (; FVar12.Data != pFVar8; FVar12.Data = FVar12.Data + 0x10) {
    UE::AssetDataGather::Private::FAssetDataDiscovery::OnFileCreated(this_00,(FString *)FVar12.Data)
    ;
  }
  aVar7 = (this_00->TreeLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar7 != aVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this_00->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  pFVar1 = &this->ResultsLock;
  if ((pFVar1 == (FCriticalSectionQueryable *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar7;
  aVar7 = (this->ResultsLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar7 != aVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x1698,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->bIsIdle != false) {
    this->bIsIdle = false;
    this->bFirstTickAfterIdle = true;
    this->bDiscoveryIsComplete = false;
    this->bIsComplete = false;
  }
  aVar7 = (this->ResultsLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar7 != aVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  DestructItems<FString,int>((FString *)local_68.Data,(int)local_60);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// OnInitialSearchCompleted @ 142b0b910

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::OnInitialSearchCompleted(FAssetDataGatherer *this)

{
  FAssetDataDiscovery *pFVar1;
  
  pFVar1 = (this->Discovery).Ptr;
  if (pFVar1 != (FAssetDataDiscovery *)0x0) {
    UE::AssetDataGather::Private::FAssetDataDiscoveryCache::SaveCache(&pFVar1->Cache);
    UE::AssetDataGather::Private::FAssetDataDiscoveryCache::Shutdown(&pFVar1->Cache);
  }
  LOCK();
  this->bSaveAsyncCacheTriggered = (atomic<bool>)0x1;
  UNLOCK();
  this->bIsInitialSearchCompleted = (atomic<bool>)0x1;
  UE::AssetDataGather::Private::FFileReadScheduler::FreeReadTaskLoaders
            ((this->FileReadScheduler).Ptr);
  return;
}

// PrioritizeSearchPath @ 142b0c710

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::PrioritizeSearchPath(FAssetDataGatherer *this,FString *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  FString local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  ::FString::FString(&local_88,L"");
  bVar2 = FPackageName::TryConvertLongPackageNameToFilename(param_1,&local_98,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    local_78 = local_98.Data.AllocatorInstance.Data;
    iVar7 = 0;
    iStack_70 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iStack_70 = iVar7;
    }
    local_68._12_4_ = uStack_6c;
    local_68.Size = iStack_70;
    local_68.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
    pFVar5 = NormalizeLocalPath(&local_58,&local_68);
    if (&local_98 != pFVar5) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    iVar6 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar6 = iVar7;
    }
    if (iVar6 != 0) {
      UE::AssetDataGather::Private::FAssetDataDiscovery::PrioritizeSearchPath
                ((this->Discovery).Ptr,&local_98,High);
      lpCriticalSection = &this->ResultsLock;
      if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("SynchObject",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                             ,0x53,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
      (this->ResultsLock).OwnerThreadId = aVar3;
      aVar3 = (this->ResultsLock).OwnerThreadId;
      aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar3 != aVar4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResultsLock.IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                             ,0x1698,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (this->bIsIdle != false) {
        this->bIsIdle = false;
        this->bFirstTickAfterIdle = true;
        this->bDiscoveryIsComplete = false;
        this->bIsComplete = false;
      }
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      iVar6 = local_98.Data.ArrayNum + -1;
      if (local_98.Data.ArrayNum == 0) {
        iVar6 = iVar7;
      }
      pFVar5 = ::FString::ConstructFromPtrSize
                         (&local_48,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar6);
      if (&local_38 != pFVar5) {
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        local_38.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_38.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      aVar3 = (this->ResultsLock).OwnerThreadId;
      local_28 = 0;
      local_20 = 3;
      local_1c = 0;
      aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar3 != aVar4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResultsLock.IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                             ,0x165a,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      for (pFVar5 = &local_38; pFVar5 != (FString *)&stack0xffffffffffffffe8; pFVar5 = pFVar5 + 2) {
        UE::AssetDataGather::Private::FFilesToSearch::RetryLaterRetryFiles
                  ((this->FilesToSearch).Ptr);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      aVar3 = (this->ResultsLock).OwnerThreadId;
      aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar3 != aVar4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                             ,0x2b,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// ReadAssetFile @ 142b0f710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAssetDataGatherer::ReadAssetFile
          (FAssetDataGatherer *this,FString *param_1,FString *param_2,
          TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *param_3,FPackageDependencyData *param_4,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_5,bool *param_6)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStackY_358 [32];
  EOpenPackageResult local_328 [16];
  TStringView<wchar_t> local_318;
  TStringView<wchar_t> local_308;
  FPackageReader local_2f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  bVar5 = -1 < CpuChannel->Enabled;
  local_318.DataPtr = (wchar_t *)param_1;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4664,"FAssetDataGatherer::ReadAssetFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
               ,0x1238);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4664);
  }
  *param_6 = false;
  bVar4 = false;
  bVar3 = false;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  FPackageReader::FPackageReader(&local_2f8);
  local_308.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_308.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_308.Size = 0;
  }
  iVar1 = ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_318.DataPtr)->ArrayNum;
  local_318.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_318.Size = 0;
  }
  local_318.DataPtr =
       (wchar_t *)
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_318.DataPtr)->AllocatorInstance).Data;
  bVar2 = FPackageReader::OpenPackageFile(&local_2f8,&local_318,&local_308,local_328);
  if (bVar2) {
    bVar3 = ReadAssetFile(&local_2f8,param_3,param_4,param_5,
                          -(uint)(this->bGatherDependsData != false) & Dependencies |
                          (uint)(this->bGatherAssetPackageData != false));
  }
  else {
    bVar2 = IsEngineStartupModuleLoadingComplete();
    if (local_328[0] == CustomVersionMissing) {
      *param_6 = !bVar2;
      bVar3 = bVar4;
      if ((bVar2) && (3 < (byte)LogAssetRegistry._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
    }
    else {
      *param_6 = false;
    }
  }
  FPackageReader::~FPackageReader(&local_2f8);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// ReadAssetFile @ 142b0f910

bool __cdecl
FAssetDataGatherer::ReadAssetFile
          (FPackageReader *param_1,TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *param_2,
          FPackageDependencyData *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
          EReadOptions param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool local_58;
  undefined1 local_57;
  undefined1 local_56 [14];
  FName local_48;
  FName FStack_40;
  FString local_38;
  FTopLevelAssetPath local_28;
  
  bVar2 = FPackageReader::ReadAssetRegistryData(param_1,param_2,&local_58);
  if (bVar2) {
    if (local_58 != false) {
      pFVar5 = (FScriptContainerElement *)FPackageReader::GetLongPackageName(param_1,&local_38);
      pFVar6 = (param_4->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar5) && (pFVar5 < pFVar6 + (longlong)param_4->ArrayMax * 0x10)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = param_4->ArrayNum;
      if (iVar4 == param_4->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar4 + 1;
      pFVar6 = (param_4->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar6 = 0;
      *(FScriptContainerElement **)pFVar6 =
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6 + 8) = *(int *)&pFVar5[8].field_0x0;
      *(int *)(pFVar6 + 0xc) = *(int *)&pFVar5[0xc].field_0x0;
      *(undefined8 *)&pFVar5[8].field_0x0 = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = FPackageReader::ReadDependencyData(param_1,param_3,param_5);
    if (bVar2) {
      if (((int)param_1->_padding_ == 0x209) && ((param_5 & Dependencies) != None)) {
        UE::AssetRegistry::GetClassPathObjectRedirector(&local_28);
        pFVar5 = (param_2->AllocatorInstance).Data;
        iVar4 = param_2->ArrayNum;
        local_48 = local_28.PackageName;
        FStack_40 = local_28.AssetName;
        pFVar6 = pFVar5 + (longlong)iVar4 * 8;
        while( true ) {
          if (param_2->ArrayNum != iVar4) {
            `TCheckedPointerIterator<FAssetData_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_57);
          }
          if (pFVar5 == pFVar6) {
            return true;
          }
          if ((*(FName *)(*(longlong *)pFVar5 + 0x20) == local_28.PackageName) &&
             (*(FName *)(*(longlong *)pFVar5 + 0x28) == local_28.AssetName)) break;
          pFVar5 = pFVar5 + 8;
        }
        iVar4 = (param_3->PackageDependencies).ArrayNum;
        pFVar5 = (param_3->PackageDependencies).AllocatorInstance.Data;
        pFVar6 = pFVar5 + (longlong)iVar4 * 0xc;
        while( true ) {
          if ((param_3->PackageDependencies).ArrayNum != iVar4) {
            `TCheckedPointerIterator<FPackageDependencyData::FPackageDependency,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_56);
          }
          if (pFVar5 == pFVar6) break;
          pFVar5[8] = (FScriptContainerElement)((byte)pFVar5[8] | 2);
          pFVar5 = pFVar5 + 0xc;
        }
      }
      return true;
    }
  }
  return false;
}

// RemoveMountPoint @ 142b16370

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::RemoveMountPoint(FAssetDataGatherer *this,TStringView<wchar_t> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  FAssetDataDiscovery *this_00;
  code *pcVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  FString *pFVar5;
  double local_res8;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = (this->Discovery).Ptr;
  pFVar5 = NormalizeLocalPath(&local_18,&local_28);
  aVar4 = (this_00->ResultsLock).OwnerThreadId;
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar4 == aVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xbd6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &this_00->TreeLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  local_res8 = __real_bff0000000000000;
  (this_00->TreeLock).OwnerThreadId = aVar4;
  UE::AssetDataGather::Private::FAssetDataDiscovery::SetIsIdle(this_00,false,&local_res8);
  UE::AssetDataGather::Private::FAssetDataDiscovery::RemoveMountPointInternal(this_00,pFVar5);
  aVar4 = (this_00->TreeLock).OwnerThreadId;
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar4 != aVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this_00->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Run @ 142b19040

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

uint __thiscall FAssetDataGatherer::Run(FAssetDataGatherer *this)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  EGatherStatus EVar8;
  ETickResult EVar9;
  uint uVar10;
  atomic<unsigned_int> aVar11;
  atomic<unsigned_int> aVar12;
  float fVar13;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AssetRegistry,true);
  fVar5 = __real_3ba3d70a;
  fVar4 = __real_3dcccccd;
  dVar3 = __real_bff0000000000000;
  if (this->IsStopped == (atomic<unsigned_int>)0x0) {
    lpCriticalSection = &this->ResultsLock;
    do {
      EVar9 = InnerTickLoop(this,false,true,dVar3);
      if (this->bRequestAssetRegistryTick != false) {
        this->bRequestAssetRegistryTick = false;
        TryTickOnBackgroundThread(this);
      }
      while( true ) {
        if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("SynchObject",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0x53,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar10 = (*pcVar1)();
          return uVar10;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
        (this->ResultsLock).OwnerThreadId = aVar11;
        bVar6 = this->bIsIdle;
        if (((this->IsStopped == (atomic<unsigned_int>)0x0) &&
            (this->bSaveAsyncCacheTriggered == (atomic<bool>)0x0)) &&
           ((this->IsGatheringPaused != (atomic<unsigned_int>)0x0 || (this->bIsIdle != false)))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        aVar11 = (this->ResultsLock).OwnerThreadId;
        aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
        if ((aVar11 != aVar12) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLockedOnCurrentThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0x2b,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          uVar10 = (*pcVar1)();
          return uVar10;
        }
        (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (!bVar2) break;
        if ((bVar6 == false) ||
           (EVar8 = TryTickOnBackgroundThread(this), TickActiveGatherIdle < EVar8)) {
          if (((this->bIsInitialSearchCompleted == (atomic<bool>)0x0) ||
              (this->bIsAdditionalMountSearchInProgress != (atomic<bool>)0x0)) &&
             (-1 < CpuChannel->Enabled)) {
            bVar2 = true;
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId3974,"FAssetDataGatherer Sleep",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xf86);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3974);
          }
          else {
            bVar2 = false;
          }
          fVar13 = fVar5;
          if (bVar6 != false) {
            fVar13 = fVar4;
          }
          FWindowsPlatformProcess::Sleep(fVar13);
          if (bVar2) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        if (EVar9 == PollDiscovery) {
          FWindowsPlatformProcess::Sleep(fVar5);
        }
      }
    } while (this->IsStopped == (atomic<unsigned_int>)0x0);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return 0;
}

// SaveCacheFile @ 142b1ad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::SaveCacheFile
          (FAssetDataGatherer *this,
          TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  FCriticalSectionQueryable *lpCriticalSection_00;
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  int iVar4;
  FName FVar5;
  FName FVar6;
  int iVar7;
  double dVar8;
  FAssetDataGatherer *pFVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  atomic<unsigned_int> aVar13;
  atomic<unsigned_int> aVar14;
  int iVar15;
  ulong64 uVar16;
  IFileManager *pIVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  int iVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *pTVar27;
  FName *this_00;
  FName *pFVar28;
  bool bVar29;
  bool bVar30;
  double dVar31;
  undefined1 auStackY_3c8 [32];
  <lambda_1> local_376;
  undefined1 local_375;
  undefined1 local_374 [4];
  ForAnyElementType local_370;
  int local_368 [3];
  int local_35c;
  int local_358 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_350;
  undefined8 local_340;
  TStringView<wchar_t> local_338;
  FAssetDataGatherer *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  LARGE_INTEGER local_310;
  LARGE_INTEGER local_308;
  FString local_300;
  FString local_2f0;
  TArrayView<std::nullptr_t,int> local_2e0;
  code *local_2d0;
  FAssetDataGatherer **local_2c8;
  TStringView<wchar_t> local_2c0;
  FAssetDataGatherer *local_2b0;
  TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *local_2a8;
  undefined8 *local_2a0;
  ForAnyElementType *local_298;
  uint local_290;
  TStringView<wchar_t> local_288;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  bVar29 = -1 < CpuChannel->Enabled;
  local_328 = this;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4102,"Save Cache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
               ,0x1006);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4102);
  }
  iVar11 = FWindowsPlatformMisc::NumberOfCores();
  iVar20 = (param_1->ArrayNum + 249999) / 250000;
  if (iVar20 < iVar11) {
    iVar11 = iVar20;
  }
  iVar20 = 1;
  if (iVar11 != 0) {
    iVar20 = iVar11;
  }
  uVar24 = (ulonglong)(iVar20 - 1) * 2 + 1;
  lVar1 = 0x3f;
  if (uVar24 != 0) {
    for (; uVar24 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar20 = 1 << ((byte)lVar1 & 0x1f);
  local_318 = (undefined4)lVar1;
  local_368[2] = iVar20 - 1;
  local_340 = 0;
  local_370.Data = (FScriptContainerElement *)0x0;
  local_368[0] = 0;
  local_368[1] = 0;
  bVar30 = -1 < CpuChannel->Enabled;
  local_35c = iVar20;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4113,"Build Shards",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
               ,0x1011);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4113);
  }
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,iVar20,&local_370,local_368,local_368 + 1);
  memset(local_370.Data + (longlong)iVar11 * 0x10,0,(longlong)iVar20 << 4);
  iVar20 = local_368[0];
  pTVar27 = (TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *)
            (local_370.Data + (longlong)local_368[0] * 0x10);
  pFVar22 = local_370.Data + 0xc;
  while( true ) {
    if (local_368[0] != iVar20) {
      local_375 = 0;
      `TCheckedPointerIterator<TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_375);
    }
    iVar11 = local_368[2];
    if ((TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *)(pFVar22 + -0xc)
        == pTVar27) break;
    uVar24 = (longlong)param_1->ArrayNum / (longlong)local_35c;
    iVar11 = (int)uVar24;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar24 & 0xffffffff);
    }
    if (*(int *)pFVar22 < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar11,(ForAnyElementType *)(pFVar22 + -0xc),*(int *)(pFVar22 + -4),
                 (int *)pFVar22);
    }
    pFVar22 = pFVar22 + 0x10;
  }
  iVar20 = param_1->ArrayNum;
  local_278.Base = local_258;
  this_00 = (FName *)(param_1->AllocatorInstance).Data;
  local_278.CurPos = local_258;
  pFVar28 = this_00 + (longlong)iVar20 * 2;
  local_278.End = (wchar_t *)local_58;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  while( true ) {
    if (param_1->ArrayNum != iVar20) {
      local_374[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,FDiskCachedAssetData_*>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_374);
    }
    if (this_00 == pFVar28) break;
    local_278.CurPos = local_278.Base;
    ::FName::AppendString(this_00,&local_278);
    uVar24 = 0;
    uVar26 = 0;
    if (0 < (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1)) {
      do {
        uVar25 = (int)uVar26 + 1;
        *(ushort *)(uVar24 + (longlong)local_278.Base) =
             (-(ushort)(*(ushort *)(uVar24 + (longlong)local_278.Base) - 0x41 < 0x1a) & 0x20) +
             *(ushort *)(uVar24 + (longlong)local_278.Base);
        uVar24 = uVar24 + 2;
        uVar26 = (ulonglong)uVar25;
      } while ((int)uVar25 < (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1));
    }
    uVar16 = CityHash64((char *)local_278.Base,
                        (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1) * 2);
    uVar21 = (uint)uVar16 & iVar11;
    uVar25 = 0;
    if ((int)uVar21 < local_368[0]) {
      uVar25 = ~uVar21 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar22 = local_370.Data + (longlong)(int)uVar21 * 0x10;
    if (((*(FName **)&pFVar22->field_0x0 <= this_00) &&
        (this_00 < *(FName **)&pFVar22->field_0x0 + (longlong)*(int *)(pFVar22 + 0xc) * 2)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar12 = *(int *)(pFVar22 + 8);
    if (iVar12 == *(int *)(pFVar22 + 0xc)) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
    }
    *(int *)(pFVar22 + 8) = iVar12 + 1;
    FVar5 = *this_00;
    FVar6 = this_00[1];
    pFVar22 = *(FScriptContainerElement **)&pFVar22->field_0x0;
    this_00 = this_00 + 2;
    *(FName *)(pFVar22 + (longlong)iVar12 * 0x10) = FVar5;
    ((FName *)(pFVar22 + (longlong)iVar12 * 0x10))[1] = FVar6;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  pFVar9 = local_328;
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  lpCriticalSection = &pFVar9->ResultsLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("SynchObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x53,L""), bVar30)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
  (pFVar9->ResultsLock).OwnerThreadId = aVar13;
  aVar13 = (pFVar9->ResultsLock).OwnerThreadId;
  aVar14 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar13 != aVar14) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x2b,L""), bVar30)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (pFVar9->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  QueryPerformanceCounter(&local_310);
  dVar8 = __real_4170000000000000;
  dVar3 = pFVar9->LastCacheWriteTime + __real_3fe0000000000000;
  dVar31 = (double)local_310.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if (dVar31 < dVar3) {
    FWindowsPlatformProcess::Sleep((float)(dVar3 - dVar31));
  }
  iVar20 = local_35c;
  local_2a0 = &local_340;
  local_298 = &local_370;
  local_2b0 = pFVar9;
  local_290 = iVar11;
  local_2d0 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAssetDataGatherer::SaveCacheFile'::__l2::<lambda_1>,void,int>::
              Call;
  local_2c8 = &local_2b0;
  local_2e0.DataPtr = (void **)0x0;
  local_2e0.ArrayNum = 0;
  local_2a8 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_35c,1,(TFunctionRef<void___cdecl(int)> *)&local_2d0,local_376
             ,BackgroundPriority,&local_2e0);
  if (3 < (byte)LogAssetRegistry._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  pIVar17 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar17 + 0x38);
  ::FString::ConcatFC(&local_300,&UE::AssetDataGather::Private::GGatherSettings.CacheBaseFilename,
                      L".bin");
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_300.Data.ArrayNum != 0) {
    FVar19.Data = local_300.Data.AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar17,FVar19.Data,0,1);
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  pIVar17 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar17 + 0x68);
  ::operator/(&local_2f0,&UE::AssetDataGather::Private::GGatherSettings.AssetRegistryCacheRootFolder
              ,L"AssetRegistryCache");
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_2f0.Data.ArrayNum != 0) {
    FVar19.Data = local_2f0.Data.AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar17,FVar19.Data,0,1);
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  UE::AssetDataGather::Private::FGatherSettings::FindShardedCacheFiles
            (&UE::AssetDataGather::Private::GGatherSettings,&local_350);
  iVar11 = local_350.ArrayNum;
  pFVar22 = local_350.AllocatorInstance.Data + (longlong)local_350.ArrayNum * 0x10;
  iVar12 = 0;
  FVar19.Data = local_350.AllocatorInstance.Data;
  while( true ) {
    if (local_350.ArrayNum != iVar11) {
      local_376 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_376)
      ;
    }
    if (FVar19.Data == pFVar22) break;
    local_2c0.DataPtr = *(wchar_t **)FVar19.Data;
    local_2c0.Size = *(int *)(FVar19.Data + 8) + -1;
    if (*(int *)(FVar19.Data + 8) == 0) {
      local_2c0.Size = iVar12;
    }
    FPathViews::GetBaseFilename(&local_338,&local_2c0);
    local_288.DataPtr = local_338.DataPtr;
    local_288.Size = local_338.Size;
    local_288._12_4_ = local_338._12_4_;
    iVar15 = UE::String::FindLastChar(&local_288,L'_',CaseSensitive);
    if (iVar15 != -1) {
      local_358[0] = 0;
      iVar23 = iVar15 + 1;
      iVar7 = 0x7fffffff;
      if (iVar15 + 1 < 0) {
        iVar23 = iVar12;
        iVar7 = iVar15 + -0x80000000;
      }
      iVar15 = local_338.Size;
      if (iVar15 < iVar23) {
        iVar23 = iVar15;
      }
      iVar4 = iVar15 - iVar23;
      if (iVar7 < iVar15 - iVar23) {
        iVar4 = iVar7;
      }
      local_338.DataPtr =
           (wchar_t *)
           ((longlong)
            (((FCriticalSectionQueryable *)((longlong)local_338.DataPtr + 8))->Inner).
            CriticalSection.Opaque1 + (longlong)iVar23 * 2 + -8);
      iStack_320 = iVar12;
      if (0 < iVar4) {
        iStack_320 = iVar4;
      }
      local_338._12_4_ = uStack_31c;
      local_338.Size = iStack_320;
      local_328 = (FAssetDataGatherer *)local_338.DataPtr;
      ::LexFromString(local_358,&local_338);
      if (iVar20 <= local_358[0]) {
        pIVar17 = IFileManager::Get();
        if (*(int *)(FVar19.Data + 8) == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = *(wchar_t **)FVar19.Data;
        }
        (**(code **)((longlong)*pIVar17 + 0x38))(pIVar17,pwVar18,0,0);
      }
    }
    FVar19.Data = FVar19.Data + 0x10;
  }
  if (pFVar9->Thread != (FRunnableThread *)0x0) {
    LOCK();
    pFVar9->IsGatheringPaused = (atomic<unsigned_int>)((int)pFVar9->IsGatheringPaused + 1);
    UNLOCK();
  }
  lpCriticalSection_00 = &pFVar9->TickLock;
  if ((lpCriticalSection_00 == (FCriticalSectionQueryable *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("SynchObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x53,L""), bVar30)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
  (pFVar9->TickLock).OwnerThreadId = aVar13;
  pFVar9->bIsSavingAsyncCache = false;
  if ((pFVar9->CacheInUseCount < 1) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("CacheInUseCount > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x105a,L""), bVar30)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar9->CacheInUseCount = pFVar9->CacheInUseCount + -1;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("SynchObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x53,L""), bVar30)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar13 = (atomic<unsigned_int>)GetCurrentThreadId();
  (pFVar9->ResultsLock).OwnerThreadId = aVar13;
  QueryPerformanceCounter(&local_308);
  pFVar9->LastCacheWriteTime =
       (double)local_308.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
  aVar13 = (pFVar9->ResultsLock).OwnerThreadId;
  aVar14 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar13 != aVar14) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x2b,L""), bVar30)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (pFVar9->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar13 = (pFVar9->TickLock).OwnerThreadId;
  aVar14 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar13 != aVar14) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x2b,L""), bVar30)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (pFVar9->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  if (pFVar9->Thread != (FRunnableThread *)0x0) {
    if ((pFVar9->IsGatheringPaused == (atomic<unsigned_int>)0x0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("Owner.IsGatheringPaused > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                            ,0x106d,L""), bVar30)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    pFVar9->IsGatheringPaused = (atomic<unsigned_int>)((int)pFVar9->IsGatheringPaused + -1);
    UNLOCK();
  }
  DestructItems<FString,int>((FString *)local_350.AllocatorInstance.Data,local_350.ArrayNum);
  if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.AllocatorInstance.Data);
  }
  DestructItems<TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *)
             local_370.Data,local_368[0]);
  if ((TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *)local_370.Data !=
      (TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_370.Data);
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SaveCacheFileInternal @ 142b1b690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FAssetDataGatherer::SaveCacheFileInternal
          (FAssetDataGatherer *this,FString *param_1,
          TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *param_2)

{
  ulong64 *puVar1;
  short sVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  ulong64 *puVar5;
  code *pcVar6;
  bool bVar7;
  atomic<unsigned_int> aVar8;
  long64 lVar9;
  longlong lVar10;
  IFileManager *pIVar11;
  FArchive *pFVar12;
  ulonglong uVar13;
  FWriteBuffer *pFVar14;
  byte bVar15;
  wchar_t *pwVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ulong64 uVar21;
  ulonglong uVar22;
  char cVar23;
  uint uVar24;
  ForAnyElementType FVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_738 [32];
  byte local_6f8;
  char local_6f7;
  undefined1 local_6f6 [2];
  uint local_6f4;
  uint local_6f0 [2];
  FString local_6e8;
  ulong64 local_6d8;
  FString local_6d0;
  TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *local_6c0;
  LARGE_INTEGER local_6b8;
  undefined8 local_6b0;
  FArchive *local_6a8;
  LARGE_INTEGER local_6a0;
  FChecksumArchiveBase local_698;
  undefined1 local_5e8 [24];
  undefined8 uStack_5d0;
  void *local_5c8;
  undefined4 local_5c0;
  uint local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  ForElementType<FSetElementId> local_5b0;
  ulonglong local_5a0;
  ForAnyElementType local_598;
  undefined8 local_590;
  TBitArray<FDefaultBitArrayAllocator> local_588;
  undefined4 local_568;
  undefined4 local_564;
  ForElementType<FSetElementId> local_560;
  ulonglong local_550;
  int *local_548;
  longlong local_540;
  FAssetRegistryWriter local_538;
  ulonglong local_58;
  ulonglong uVar25;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_738;
  if (((param_1->Data).ArrayNum < 2) || (this->bCacheWriteEnabled == (atomic<bool>)0x0)) {
    uVar13 = 0;
  }
  else {
    aVar3 = (this->TickLock).OwnerThreadId;
    local_6c0 = param_2;
    aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar3 == aVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!TickLock.IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x1453,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      lVar9 = (*pcVar6)();
      return lVar9;
    }
    aVar3 = (this->ResultsLock).OwnerThreadId;
    aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar3 == aVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ResultsLock.IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x1454,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      lVar9 = (*pcVar6)();
      return lVar9;
    }
    cVar23 = '\0';
    uVar22 = (ulonglong)_tls_index;
    uVar13 = 0;
    local_6f7 = '\0';
    if (-1 < CpuChannel->Enabled) {
      UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuSaveCacheFileFields>
                ((TLogScope<1> *)&local_548);
      if ((param_1->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      sVar2 = *pwVar16;
      pFVar27 = (FScriptContainerElement *)pwVar16;
      uVar25 = uVar13;
      uVar24 = 0;
      while (sVar2 != 0) {
        pFVar27 = pFVar27 + 2;
        uVar24 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar24;
        sVar2 = *(short *)pFVar27;
      }
      UE::Trace::Private::Field_WriteStringWide(0,pwVar16,uVar24);
      *local_548 = param_2->ArrayNum;
      lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar22 * 8);
      if (*(char *)(lVar18 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar18 = *(longlong *)(lVar18 + 0x20);
      **(undefined1 **)(lVar18 + 0x20) = 6;
      lVar10 = *(longlong *)(lVar18 + 0x20) + 1;
      *(longlong *)(lVar18 + 0x20) = lVar10;
      if (lVar18 != local_540) {
        *(longlong *)(lVar18 + 0x28) = lVar10;
      }
      cVar23 = '\x01';
      local_6f7 = '\x01';
      *(undefined8 *)(local_540 + 0x28) = *(undefined8 *)(local_540 + 0x20);
    }
    local_6e8.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar18 = (longlong)local_6e8.Data.ArrayNum;
    pFVar27 = (param_1->Data).AllocatorInstance.Data;
    local_6e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_6e8.Data.ArrayNum == 0) {
      local_6e8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_6e8.Data.ArrayNum,0,(ForAnyElementType *)&local_6e8,
                 local_6e8.Data.ArrayNum,&local_6e8.Data.ArrayMax);
      memcpy(local_6e8.Data.AllocatorInstance.Data,pFVar27,lVar18 * 2);
    }
    ::FString::ConcatFC(&local_6d0,&local_6e8,L".tmp");
    pIVar11 = IFileManager::Get();
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_6d0.Data.ArrayNum != 0) {
      FVar17.Data = local_6d0.Data.AllocatorInstance.Data;
    }
    pFVar12 = (FArchive *)(**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,FVar17.Data,0);
    local_6a8 = pFVar12;
    if (pFVar12 == (FArchive *)0x0) {
      if (1 < (byte)LogAssetRegistry._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
    }
    else {
      local_6d8 = 0x29fe48b000000016;
      puVar5 = (ulong64 *)**(longlong **)&pFVar12->field_0x8;
      if ((ulong64 *)(*(longlong **)&pFVar12->field_0x8)[1] < puVar5 + 1) {
        if ((pFVar12->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar12 + 0x188))(pFVar12,&local_6d8,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar12,&local_6d8);
        }
      }
      else {
        local_6d8 = *puVar5;
        **(longlong **)&pFVar12->field_0x8 = **(longlong **)&pFVar12->field_0x8 + 8;
      }
      FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_698,pFVar12);
      local_698._padding_ = (longlong)&___7FChecksumArchiveBase_Private_AssetDataGather_UE__6B_;
      local_698.Block.Begin = (uchar *)0x0;
      uVar21 = (ulonglong)((byte)~(byte)local_698._padding_ & 1) * 0x400000;
      local_698.Block.Cursor = (uchar *)0x0;
      local_698.Block.End = (uchar *)0x0;
      if ((ulonglong)((byte)~(byte)local_698._padding_ & 1) != 0) {
        FMemory::Free((void *)0x0);
        local_698.Block.Begin = FMemory::Malloc(uVar21,0);
      }
      local_698.Block.End = local_698.Block.Begin + uVar21;
      local_5e8._16_8_ = 0;
      uStack_5d0 = 0;
      local_698._padding_ = (longlong)&___7FChecksumArchiveWriter_Private_AssetDataGather_UE__6B_;
      local_588.AllocatorInstance.InlineData[0] = '\0';
      local_588.AllocatorInstance.InlineData[1] = '\0';
      local_588.AllocatorInstance.InlineData[2] = '\0';
      local_588.AllocatorInstance.InlineData[3] = '\0';
      local_588.AllocatorInstance.InlineData[4] = '\0';
      local_588.AllocatorInstance.InlineData[5] = '\0';
      local_588.AllocatorInstance.InlineData[6] = '\0';
      local_588.AllocatorInstance.InlineData[7] = '\0';
      local_588.AllocatorInstance.InlineData[8] = '\0';
      local_588.AllocatorInstance.InlineData[9] = '\0';
      local_588.AllocatorInstance.InlineData[10] = '\0';
      local_588.AllocatorInstance.InlineData[0xb] = '\0';
      local_588.AllocatorInstance.InlineData[0xc] = '\0';
      local_588.AllocatorInstance.InlineData[0xd] = '\0';
      local_588.AllocatorInstance.InlineData[0xe] = '\0';
      local_588.AllocatorInstance.InlineData[0xf] = '\0';
      local_5b0.InlineData[0] = '\0';
      local_5b0.InlineData[1] = '\0';
      local_5b0.InlineData[2] = '\0';
      local_5b0.InlineData[3] = '\0';
      local_5b0._padding_ = 0;
      local_5a0 = 0;
      local_560.InlineData[0] = '\0';
      local_560.InlineData[1] = '\0';
      local_560.InlineData[2] = '\0';
      local_560.InlineData[3] = '\0';
      local_560._padding_ = 0;
      local_550 = 0;
      local_5e8._0_8_ = (FScriptContainerElement *)0x0;
      local_5e8._8_8_ = 0;
      local_5c8 = (void *)0x0;
      local_5c0 = 0;
      local_5bc = 0x80;
      local_5b8 = 0xffffffff;
      local_5b4 = 0;
      local_5b0.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_598.Data = (FScriptContainerElement *)0x0;
      local_590 = 0;
      local_588.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_588.NumBits = 0;
      local_588.MaxBits = 0x80;
      local_568 = 0xffffffff;
      local_564 = 0;
      local_560.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_698.Block.Cursor = local_698.Block.Begin;
      FAssetRegistryWriter::FAssetRegistryWriter
                (&local_538,(FAssetRegistryWriterOptions *)local_5e8,(FArchive *)&local_698);
      local_550 = local_550 & 0xffffffff00000000;
      if (local_560.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_560.SecondaryData);
      }
      uVar22 = local_590 >> 0x20;
      local_590 = local_590 & 0xffffffff00000000;
      if ((int)uVar22 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&local_598,0,(int *)((longlong)&local_590 + 4));
      }
      local_568 = 0xffffffff;
      local_564 = 0;
      local_588.NumBits = 0;
      if (0x80 < (uint)local_588.MaxBits) {
        local_588.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_588,0);
      }
      if (local_588.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_588.AllocatorInstance.SecondaryData);
      }
      if (local_598.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_598.Data);
      }
      local_5a0 = local_5a0 & 0xffffffff00000000;
      if (local_5b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_5b0.SecondaryData);
      }
      iVar4 = SUB84(local_5e8._8_8_,4);
      local_5e8._8_8_ = local_5e8._8_8_ & 0xffffffff00000000;
      if (iVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_5e8,0,(int *)(local_5e8 + 0xc));
      }
      local_5b8 = 0xffffffff;
      local_5b4 = 0;
      local_5c0 = 0;
      if (0x80 < local_5bc) {
        local_5bc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_5e8 + 0x10),0);
      }
      if (local_5c8 != (void *)0x0) {
        FMemory::Free(local_5c8);
      }
      if ((FScriptContainerElement *)local_5e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_5e8._0_8_);
      }
      QueryPerformanceCounter(&local_6b8);
      local_6f0[0] = param_2->ArrayNum;
      if (*(uint **)(local_538._padding_ + 8) < *(uint **)local_538._padding_ + 1) {
        if ((local_538._padding_._2_1_ & 1) == 0) {
          (**(code **)(local_538._padding_ + 0x188))(&local_538,local_6f0,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_538,local_6f0);
        }
      }
      else {
        local_6f0[0] = **(uint **)local_538._padding_;
        *(longlong *)local_538._padding_ = *(longlong *)local_538._padding_ + 4;
      }
      iVar4 = param_2->ArrayNum;
      pFVar27 = (param_2->AllocatorInstance).Data;
      pFVar19 = pFVar27 + (longlong)iVar4 * 0x10;
      while( true ) {
        if (param_2->ArrayNum != iVar4) {
          local_6f6[0] = 0;
          `TCheckedPointerIterator<TTuple<FName,FDiskCachedAssetData_*>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_6f6);
        }
        pFVar12 = local_6a8;
        cVar23 = local_6f7;
        if (pFVar27 == pFVar19) break;
        local_6b0 = *(undefined8 *)pFVar27;
        (**(code **)(local_538._padding_ + 0x178))(&local_538,&local_6b0);
        puVar5 = *(ulong64 **)(pFVar27 + 8);
        if (*(ulong64 **)(local_538._padding_ + 8) < *(ulong64 **)local_538._padding_ + 1) {
          if ((local_538._padding_._2_1_ & 1) == 0) {
            (**(code **)(local_538._padding_ + 0x188))(&local_538,puVar5,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_538,puVar5);
          }
        }
        else {
          *puVar5 = **(ulong64 **)local_538._padding_;
          *(longlong *)local_538._padding_ = *(longlong *)local_538._padding_ + 8;
        }
        puVar1 = puVar5 + 1;
        if (*(ulong64 **)(local_538._padding_ + 8) < *(ulong64 **)local_538._padding_ + 1) {
          if ((local_538._padding_._2_1_ & 1) == 0) {
            (**(code **)(local_538._padding_ + 0x188))(&local_538,puVar1,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_538,puVar1);
          }
        }
        else {
          *puVar1 = **(ulong64 **)local_538._padding_;
          *(longlong *)local_538._padding_ = *(longlong *)local_538._padding_ + 8;
        }
        (**(code **)(local_538._padding_ + 0x178))(&local_538,puVar5 + 2);
        local_6f8 = (byte)puVar5[3];
        if (*(byte **)(local_538._padding_ + 8) < *(byte **)local_538._padding_ + 1) {
          (**(code **)(local_538._padding_ + 0x188))(&local_538,&local_6f8,1);
        }
        else {
          local_6f8 = **(byte **)local_538._padding_;
          *(longlong *)local_538._padding_ = *(longlong *)local_538._padding_ + 1;
        }
        if (((byte)local_538._padding_ & 1) != 0) {
          bVar15 = 0;
          if (local_6f8 < 3) {
            bVar15 = local_6f8;
          }
          *(byte *)(puVar5 + 3) = bVar15;
        }
        local_6f4 = (uint)puVar5[5];
        if (*(uint **)(local_538._padding_ + 8) < *(uint **)local_538._padding_ + 1) {
          if ((local_538._padding_._2_1_ & 1) == 0) {
            (**(code **)(local_538._padding_ + 0x188))(&local_538,&local_6f4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_538,&local_6f4);
          }
        }
        else {
          local_6f4 = **(uint **)local_538._padding_;
          *(longlong *)local_538._padding_ = *(longlong *)local_538._padding_ + 4;
        }
        if (((byte)local_538._padding_ & 1) != 0) {
          TArray<FAssetData,TSizedDefaultAllocator<32>_>::SetNum
                    ((TArray<FAssetData,TSizedDefaultAllocator<32>_> *)(puVar5 + 4),local_6f4,
                     Default);
        }
        uVar22 = uVar13;
        if (0 < (int)local_6f4) {
          do {
            uVar20 = (uint)uVar22;
            uVar24 = 0;
            if ((int)uVar20 < (int)puVar5[5]) {
              uVar24 = ~uVar20 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              lVar9 = (*pcVar6)();
              return lVar9;
            }
            FAssetData::SerializeForCacheWithTagsAndBundles
                      ((FAssetData *)((longlong)(int)uVar20 * 0x68 + puVar5[4]),
                       (FArchive *)&local_538,
                       `FAssetData::SerializeForCache<FAssetRegistryWriter_&>'::__l2::<lambda_1>::
                       <lambda_invoker_cdecl>);
            uVar22 = (ulonglong)(uVar20 + 1);
          } while ((int)(uVar20 + 1) < (int)local_6f4);
        }
        (**(code **)(local_538._padding_ + 0x178))(&local_538,puVar5 + 6);
        FAssetPackageData::SerializeForCache
                  ((FAssetPackageData *)(puVar5 + 7),(FArchive *)&local_538);
        TArrayPrivateFriend::
        Serialize<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_>
                  ((FArchive *)&local_538,
                   (TArray<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_> *
                   )(puVar5 + 0x1b));
        TArrayPrivateFriend::
        Serialize<FPackageDependencyData::FSearchableNamesDependency,TSizedDefaultAllocator<32>_>
                  ((FArchive *)&local_538,
                   (TArray<FPackageDependencyData::FSearchableNamesDependency,TSizedDefaultAllocator<32>_>
                    *)(puVar5 + 0x1d));
        ::operator<<((FArchive *)&local_538,(FDependsNodeReservations *)(puVar5 + 0x1f));
        pFVar27 = pFVar27 + 0x10;
        param_2 = local_6c0;
      }
      if (5 < (byte)LogAssetRegistry._0_1_) {
        QueryPerformanceCounter(&local_6a0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
      FAssetRegistryWriter::~FAssetRegistryWriter(&local_538);
      local_698._padding_ = (longlong)&___7FChecksumArchiveBase_Private_AssetDataGather_UE__6B_;
      if ((((byte)local_698._padding_ & 1) == 0) &&
         (local_698.Block.Cursor != local_698.Block.Begin)) {
        UE::AssetDataGather::Private::FChecksumArchiveBase::SaveBlock(&local_698);
      }
      FMemory::Free(local_698.Block.Begin);
      FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_698);
      uVar13 = (**(code **)(*(longlong *)pFVar12 + 0x30))(pFVar12);
      (*(code *)**(undefined8 **)pFVar12)(pFVar12,1);
      pIVar11 = IFileManager::Get();
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_6d0.Data.ArrayNum != 0) {
        FVar17.Data = local_6d0.Data.AllocatorInstance.Data;
      }
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_6e8.Data.ArrayNum != 0) {
        FVar26.Data = local_6e8.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar11 + 0x48))(pIVar11,FVar26.Data,FVar17.Data,1);
      uVar22 = (ulonglong)_tls_index;
    }
    if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
    }
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
    if (cVar23 != '\0') {
      uVar21 = UE::Trace::Private::TimeGetTimestamp();
      lVar10 = uVar21 - UE::Trace::Private::GStartCycle;
      lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar22 * 8);
      if (*(char *)(lVar18 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar14 = *(FWriteBuffer **)(lVar18 + 0x20);
      if ((int)pFVar14 - *(int *)&pFVar14->Cursor < 8) {
        pFVar14 = UE::Trace::Private::Writer_NextBuffer();
      }
      *(longlong *)pFVar14->Cursor = lVar10 * 0x100 + 0x12;
      pFVar14->Cursor = pFVar14->Cursor + 8;
      pFVar14->Committed = pFVar14->Cursor;
    }
  }
  return uVar13;
}

// ScanPathsSynchronous @ 142b1c160

/* WARNING: Removing unreachable block (ram,0x000142b1c3ab) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::ScanPathsSynchronous
          (FAssetDataGatherer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,bool param_3)

{
  FCriticalSectionQueryable *lpCriticalSection;
  uint uVar1;
  int iVar2;
  FAssetDataDiscovery *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  FString *pFVar9;
  FPathExistence *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  bool local_res18;
  bool local_res20;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FPathExistence local_d8;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FPathExistence *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FPathExistence *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  TArrayView<UE::AssetDataGather::Private::FPathExistence,int> local_58;
  TArrayView<UE::AssetDataGather::Private::FPathExistence,int> local_48;
  
  uVar1 = param_1->ArrayNum;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar1,&local_e8,0,(int *)((longlong)&local_e0 + 4));
  }
  iVar2 = param_1->ArrayNum;
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar14 = pFVar12 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    bVar4 = local_res20;
    if (pFVar12 == pFVar14) break;
    local_b8 = *(wchar_t **)pFVar12;
    iStack_b0 = *(int *)(pFVar12 + 8) + -1;
    if (*(int *)(pFVar12 + 8) == 0) {
      iStack_b0 = 0;
    }
    local_88._12_4_ = uStack_ac;
    local_88.Size = iStack_b0;
    local_88.DataPtr = local_b8;
    pFVar9 = NormalizeLocalPath(&local_68,&local_88);
    iVar6 = (pFVar9->Data).ArrayNum;
    local_d8.LocalAbsPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.LocalAbsPath.Data.ArrayNum = 0;
    local_d8.LocalAbsPath.Data.ArrayMax = 0;
    iVar13 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar13 = 0;
    }
    pFVar10 = (FPathExistence *)
              ::FString::ConstructFromPtrSize
                        (&local_78,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar13);
    if (&local_d8 != pFVar10) {
      if (local_d8.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.LocalAbsPath.Data.AllocatorInstance.Data);
      }
      local_d8.LocalAbsPath.Data.AllocatorInstance.Data =
           (pFVar10->LocalAbsPath).Data.AllocatorInstance.Data;
      (pFVar10->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.LocalAbsPath.Data.ArrayNum = (pFVar10->LocalAbsPath).Data.ArrayNum;
      local_d8.LocalAbsPath.Data.ArrayMax = (pFVar10->LocalAbsPath).Data.ArrayMax;
      (pFVar10->LocalAbsPath).Data.ArrayNum = 0;
      (pFVar10->LocalAbsPath).Data.ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_d8.ModificationTime.Ticks = 0;
    local_d8.PathType = MissingParentDir;
    local_d8.bIsReadOnly = false;
    local_d8.bHasExistenceData = false;
    if (((local_e8.Data <= &local_d8) &&
        (&local_d8 < (FPathExistence *)(local_e8.Data + (longlong)local_e0._4_4_ * 0x20))) &&
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
    iVar6 = (int)local_e0;
    if ((int)local_e0 == local_e0._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_e8,(int *)((longlong)&local_e0 + 4));
    }
    local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 1);
    lVar11 = (longlong)iVar6 * 0x20;
    *(undefined8 *)&local_e8.Data[lVar11].field_0x0 = 0;
    *(FScriptContainerElement **)&local_e8.Data[lVar11].field_0x0 =
         local_d8.LocalAbsPath.Data.AllocatorInstance.Data;
    *(int *)(local_e8.Data + lVar11 + 8) = local_d8.LocalAbsPath.Data.ArrayNum;
    *(int *)(local_e8.Data + lVar11 + 0xc) = local_d8.LocalAbsPath.Data.ArrayMax;
    *(long64 *)(local_e8.Data + lVar11 + 0x10) = local_d8.ModificationTime.Ticks;
    *(EType *)(local_e8.Data + lVar11 + 0x18) = local_d8.PathType;
    local_e8.Data[lVar11 + 0x1c] = (FScriptContainerElement)local_d8.bIsReadOnly;
    local_e8.Data[lVar11 + 0x1d] = (FScriptContainerElement)local_d8.bHasExistenceData;
    local_d8.LocalAbsPath.Data.ArrayNum = 0;
    local_d8.LocalAbsPath.Data.ArrayMax = 0;
    local_d8.LocalAbsPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pFVar12 = pFVar12 + 0x10;
  }
  iVar2 = (int)local_e0;
  this_00 = (this->Discovery).Ptr;
  local_a8 = (FPathExistence *)local_e8.Data;
  if (((int)local_e0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStack_a0 = iVar2;
  local_58._12_4_ = uStack_9c;
  local_58.ArrayNum = iVar2;
  local_58.DataPtr = local_a8;
  UE::AssetDataGather::Private::FAssetDataDiscovery::SetPropertiesAndWait
            (this_00,&local_58,true,local_res18,bVar4);
  lpCriticalSection = &this->ResultsLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar7;
  aVar7 = (this->ResultsLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar7 != aVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x1698,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->bIsIdle != false) {
    this->bIsIdle = false;
    this->bFirstTickAfterIdle = true;
    this->bDiscoveryIsComplete = false;
    this->bIsComplete = false;
  }
  aVar7 = (this->ResultsLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar7 != aVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iStack_90 = (int)local_e0;
  local_98 = (FPathExistence *)local_e8.Data;
  if (((int)local_e0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48._12_4_ = uStack_8c;
  local_48.ArrayNum = iStack_90;
  local_48.DataPtr = local_98;
  WaitOnPathsInternal(this,&local_48);
  DestructItems<UE::AssetDataGather::Private::FPathExistence,int>
            ((FPathExistence *)local_e8.Data,(int)local_e0);
  if ((FPathExistence *)local_e8.Data != (FPathExistence *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return;
}

// SetDirectoryProperties @ 142b1e5d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::SetDirectoryProperties
          (FAssetDataGatherer *this,TStringView<wchar_t> *param_1,FSetPathProperties *param_2)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  NormalizeLocalPath(&local_28,&local_18);
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    UE::AssetDataGather::Private::FAssetDataDiscovery::TrySetDirectoryProperties
              ((this->Discovery).Ptr,&local_28,param_2,false);
    lpCriticalSection = &this->ResultsLock;
    if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
    (this->ResultsLock).OwnerThreadId = aVar3;
    aVar3 = (this->ResultsLock).OwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar3 != aVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x1698,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->bIsIdle != false) {
      this->bIsIdle = false;
      this->bFirstTickAfterIdle = true;
      this->bDiscoveryIsComplete = false;
      this->bIsComplete = false;
    }
    aVar3 = (this->ResultsLock).OwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar3 != aVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetInitialPluginsLoaded @ 142b1e820

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::SetInitialPluginsLoaded(FAssetDataGatherer *this)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  
  lpCriticalSection = &this->ResultsLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar3;
  aVar3 = (this->ResultsLock).OwnerThreadId;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x1698,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bIsIdle != false) {
    this->bIsIdle = false;
    this->bFirstTickAfterIdle = true;
    this->bDiscoveryIsComplete = false;
    this->bIsComplete = false;
  }
  aVar3 = (this->ResultsLock).OwnerThreadId;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142b1e90d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetIsIdle @ 142b1eb80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::SetIsIdle(FAssetDataGatherer *this,bool param_1)

{
  double local_res18 [2];
  
  local_res18[0] = __real_bff0000000000000;
  SetIsIdle(this,param_1,local_res18);
  return;
}

// SetIsIdle @ 142b1ebb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAssetDataGatherer::SetIsIdle(FAssetDataGatherer *this,bool param_1,double *param_2)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  atomic<unsigned_int> aVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<unsigned_int> aVar8;
  int iVar9;
  double *pdVar10;
  LARGE_INTEGER local_res8;
  
  aVar4 = (this->ResultsLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar4 != aVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x1698,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (param_1 != this->bIsIdle) {
    this->bIsIdle = param_1;
    if (param_1) {
      if (0.0 < *param_2 || *param_2 == 0.0) {
        QueryPerformanceCounter(&local_res8);
        this->CurrentSearchTime =
             (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000) - *param_2) + this->CurrentSearchTime;
        *param_2 = -1.0;
      }
      pdVar10 = &this->CurrentSearchTime;
      if (((this->bFinishedInitialDiscovery == false) &&
          (bVar7 = IsEngineStartupModuleLoadingComplete(), bVar7)) &&
         (this->bFinishedInitialDiscovery = true, 5 < (byte)LogAssetRegistry._0_1_)) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
      pTVar2 = &this->SearchTimes;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= pdVar10) && (pdVar10 < pFVar5 + (longlong)(this->SearchTimes).ArrayMax * 8))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->SearchTimes).ArrayNum;
      piVar1 = &(this->SearchTimes).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SearchTimes).ArrayNum = iVar9 + 1;
      *(double *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = *pdVar10;
      dVar3 = this->CurrentSearchTime;
      this->CurrentSearchTime = 0.0;
      this->CumulativeGatherTime = (float)dVar3 + this->CumulativeGatherTime;
    }
    else {
      this->bDiscoveryIsComplete = false;
      this->bIsComplete = false;
      this->bFirstTickAfterIdle = true;
    }
  }
  return;
}

// SetIsOnAllowList @ 142b1edc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::SetIsOnAllowList
          (FAssetDataGatherer *this,TStringView<wchar_t> *param_1,bool param_2)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FSetPathProperties local_res10;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res10.MatchesDenyList.bIsSet = false;
  local_res10.IgnoreDenyList.bIsSet = false;
  local_res10.HasScanned.bIsSet = false;
  local_res10.IsOnAllowList.bIsSet = true;
  local_res10.IsOnAllowList.TypedValue = param_2;
  NormalizeLocalPath(&local_28,&local_18);
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    UE::AssetDataGather::Private::FAssetDataDiscovery::TrySetDirectoryProperties
              ((this->Discovery).Ptr,&local_28,&local_res10,false);
    lpCriticalSection = &this->ResultsLock;
    if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
    (this->ResultsLock).OwnerThreadId = aVar3;
    aVar3 = (this->ResultsLock).OwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar3 != aVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x1698,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->bIsIdle != false) {
      this->bIsIdle = false;
      this->bFirstTickAfterIdle = true;
      this->bDiscoveryIsComplete = false;
      this->bIsComplete = false;
    }
    aVar3 = (this->ResultsLock).OwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar3 != aVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ShouldBackgroundGatherThreadPauseGathering @ 142b20f50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FAssetDataGatherer::ShouldBackgroundGatherThreadPauseGathering
          (FAssetDataGatherer *this,bool *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  
  lpCriticalSection = &this->ResultsLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar5;
  *param_1 = this->bIsIdle;
  if (((this->IsStopped == (atomic<unsigned_int>)0x0) &&
      (this->bSaveAsyncCacheTriggered == (atomic<bool>)0x0)) &&
     ((this->IsGatheringPaused != (atomic<unsigned_int>)0x0 || (this->bIsIdle != false)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  aVar5 = (this->ResultsLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar5 != aVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// Shrink @ 142b21a60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::Shrink(FAssetDataGatherer *this)

{
  int *piVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  
  aVar2 = (this->ResultsLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar2 != aVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x15e0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::AssetDataGather::Private::FFilesToSearch::Shrink((this->FilesToSearch).Ptr);
  iVar3 = (this->AssetResults).ArrayNum;
  piVar1 = &(this->AssetResults).ArrayMax;
  if (*piVar1 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,&(this->AssetResults).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = (this->DependencyResults).ArrayNum;
  piVar1 = &(this->DependencyResults).ArrayMax;
  if (*piVar1 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,iVar3,&(this->DependencyResults).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = (this->CookedPackageNamesWithoutAssetDataResults).ArrayNum;
  piVar1 = &(this->CookedPackageNamesWithoutAssetDataResults).ArrayMax;
  if (*piVar1 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,&(this->CookedPackageNamesWithoutAssetDataResults).AllocatorInstance,
               iVar3,piVar1);
  }
  iVar3 = (this->VerseResults).ArrayNum;
  piVar1 = &(this->VerseResults).ArrayMax;
  if (*piVar1 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,&(this->VerseResults).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = (this->BlockedResults).ArrayNum;
  piVar1 = &(this->BlockedResults).ArrayMax;
  if (*piVar1 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,&(this->BlockedResults).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = (this->SearchTimes).ArrayNum;
  piVar1 = &(this->SearchTimes).ArrayMax;
  if (*piVar1 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,&(this->SearchTimes).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = (this->DiscoveredPaths).ArrayNum;
  piVar1 = &(this->DiscoveredPaths).ArrayMax;
  if (*piVar1 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,&(this->DiscoveredPaths).AllocatorInstance,iVar3,piVar1);
  }
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode::
  Shrink(&((((this->FileReadScheduler).Ptr)->ScheduledDirectories).Ptr)->Root);
  return;
}

// SortPathsByPriority @ 142b22c20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::SortPathsByPriority
          (FAssetDataGatherer *this,
          TArrayView<UE::AssetDataGather::Private::FPathExistence,int> *param_1,EPriority param_2,
          int *param_3)

{
  atomic<unsigned_int> aVar1;
  FFilesToSearch *pFVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  FPathExistence *pFVar6;
  FPathExistence *pFVar7;
  
  aVar1 = (this->ResultsLock).OwnerThreadId;
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar1 != aVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x165a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = param_1->DataPtr;
  pFVar7 = pFVar6 + param_1->ArrayNum;
  for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 1) {
    UE::AssetDataGather::Private::FFilesToSearch::PrioritizePath
              ((this->FilesToSearch).Ptr,pFVar6,param_2);
  }
  pFVar2 = (this->FilesToSearch).Ptr;
  *param_3 = (pFVar2->BlockingFiles).AfterBack - (pFVar2->BlockingFiles).Front;
  return;
}

// StartAsync @ 142b22d60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::StartAsync(FAssetDataGatherer *this)

{
  FAssetDataDiscovery *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRunnableThread *pFVar4;
  
  if ((this->bAsyncEnabled != false) && (this->Thread == (FRunnableThread *)0x0)) {
    this->bSynchronousTick = false;
    pFVar4 = FRunnableThread::Create
                       ((FRunnable *)this,L"FAssetDataGatherer",0,TPri_BelowNormal,
                        0xffffffffffffffff,None);
    this->Thread = pFVar4;
    if (pFVar4 == (FRunnableThread *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xf5a,L"Failed to create asset data gatherer thread");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->Discovery).Ptr;
    if ((pFVar1->bAsyncEnabled != false) && (pFVar1->Thread == (FRunnableThread *)0x0)) {
      pFVar4 = FRunnableThread::Create
                         ((FRunnable *)pFVar1,L"FAssetDataDiscovery",0,TPri_BelowNormal,
                          0xffffffffffffffff,None);
      pFVar1->Thread = pFVar4;
      if (pFVar4 == (FRunnableThread *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Thread",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x66a,L"Failed to create asset data discovery thread");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// Stop @ 142b22eb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::Stop(FAssetDataGatherer *this)

{
  (**(code **)(((this->Discovery).Ptr)->_padding_ + 0x10))();
  LOCK();
  this->IsStopped = (atomic<unsigned_int>)((int)this->IsStopped + 1);
  UNLOCK();
  return;
}

// TickInternal @ 142b24800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EOptionalBool": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETickResult __thiscall
FAssetDataGatherer::TickInternal(FAssetDataGatherer *this,double *param_1,bool param_2)

{
  FCriticalSectionQueryable *pFVar1;
  int *piVar2;
  FGatheredPathData *pFVar3;
  TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_> *this_00;
  uint *puVar4;
  TOptional<TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>_>
  *pTVar5;
  TArray<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FPackageDependencyData::FSearchableNamesDependency,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FPackageDependencyData::FSearchableNamesDependency,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FDiskCachedAssetData_*,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar11;
  TDefaultDelete<UE::AssetDataGather::Private::FReadContext> *this_01;
  uchar uVar12;
  DWORD DVar13;
  FFilesToSearch *pFVar14;
  undefined8 uVar15;
  TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>
  TVar16;
  FName FVar17;
  FSearchableNamesDependency *pFVar18;
  FReadContext *pFVar19;
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this_02;
  code *pcVar20;
  double dVar21;
  FName FVar22;
  FName FVar23;
  double dVar24;
  FAssetDataGatherer *pFVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  bool bVar28;
  char cVar29;
  atomic<unsigned_int> aVar30;
  ETickResult EVar31;
  atomic<unsigned_int> aVar32;
  int iVar33;
  int iVar34;
  DWORD DVar35;
  TArrayView<FString_const_,int> *pTVar36;
  TArray<UE::AssetDataGather::Private::FCachePayload,TSizedDefaultAllocator<32>_> *pTVar37;
  TStringView<wchar_t> *pTVar38;
  void *pvVar39;
  FName *pFVar40;
  TTuple<FName,FDiskCachedAssetData_*> *pTVar41;
  IPlatformFile *pIVar42;
  ForElementType<UE::AssetDataGather::Private::FGatheredPathData> FVar43;
  FAssetData *this_03;
  ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_> FVar44;
  ForElementType<FPackageDependencyData> FVar45;
  FPackageDependencyData *pFVar46;
  FDiskCachedAssetData *pFVar47;
  FDiskCachedAssetData *pFVar48;
  longlong lVar49;
  ForElementType<FString> FVar50;
  ulonglong uVar51;
  ulong64 uVar52;
  wchar_t *pwVar53;
  ForElementType<FName> FVar54;
  longlong *plVar55;
  FScriptContainerElement *pFVar56;
  LPCRITICAL_SECTION p_Var57;
  int iVar58;
  FAssetData *pFVar59;
  FScriptContainerElement *pFVar60;
  FAssetData *pFVar61;
  uint uVar62;
  ForElementType<UE::AssetDataGather::Private::FGatheredPathData> FVar63;
  ForAnyElementType FVar64;
  ForElementType<UE::AssetDataGather::Private::FGatheredPathData> FVar65;
  undefined1 auStackY_dd88 [32];
  atomic<bool> local_dd38;
  bool local_dd37 [7];
  TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
  local_dd30;
  uint local_dd20;
  uint local_dd1c;
  ETickResult local_dd18;
  FDiskCachedAssetData *local_dd10;
  FAssetDataGatherer *local_dd08;
  int local_dd00;
  FName local_dcf8;
  int local_dcf0;
  int local_dcec;
  TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> local_dce8;
  FReadContext *local_dce0;
  FScopeLockQueryable local_dcd8;
  LPCRITICAL_SECTION local_dcd0;
  uint local_dcc8;
  FString local_dcc0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_dcb0;
  FScopeLockQueryable local_dca0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_dc98;
  LARGE_INTEGER local_dc88;
  LARGE_INTEGER local_dc80;
  ForElementType<UE::AssetDataGather::Private::FGatheredPathData> local_dc78;
  LARGE_INTEGER local_dc70;
  LARGE_INTEGER local_dc68;
  TArray<UE::AssetDataGather::Private::FCachePayload,TSizedDefaultAllocator<32>_> local_dc60;
  TArray<UE::AssetDataGather::Private::FCachePayload,TSizedDefaultAllocator<32>_> local_dc50;
  TStringView<wchar_t> local_dc40;
  TStringView<wchar_t> local_dc30;
  undefined8 local_dc18;
  int iStack_dc10;
  undefined4 uStack_dc0c;
  FScriptContainerElement *local_dc08;
  int iStack_dc00;
  undefined4 uStack_dbfc;
  TStringView<wchar_t> local_dbf8;
  FName local_dbe8;
  FName local_dbe0;
  TArrayView<FString_const_,int> local_dbd8;
  FString local_dbc8;
  undefined4 local_dbb8;
  undefined4 uStack_dbb4;
  int iStack_dbb0;
  undefined4 uStack_dbac;
  TStringView<wchar_t> local_dba8;
  TArrayView<FString_const_,int> local_db98;
  TArray<UE::AssetDataGather::Private::FCachePayload,TSizedDefaultAllocator<32>_> local_db88;
  TStringView<wchar_t> local_db78;
  wchar_t *local_db68;
  undefined8 uStack_db60;
  TStringView<wchar_t> local_db58;
  wchar_t *local_db48;
  undefined8 uStack_db40;
  TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
  local_db38;
  TStringBuilderBase<wchar_t> local_dae8;
  wchar_t local_dac8 [16];
  TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_daa8;
  TStringBuilderBase<wchar_t> local_d778;
  wchar_t local_d758 [256];
  TArray<FString,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> local_d558;
  ForElementType<FName> local_cf08;
  int local_cbe0;
  int local_cbdc;
  TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_cbd8;
  TArray<FString,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> local_c8a8;
  TArray<UE::AssetDataGather::Private::FGatheredPathData,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_c258;
  TArray<FPackageDependencyData,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_af88;
  TArray<FPackageDependencyData,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_57f8;
  ulonglong local_68;
  undefined8 uStack_40;
  
  uStack_40 = 0x142b2481d;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_dd88;
  aVar32 = (this->TickLock).OwnerThreadId;
  local_dd08 = this;
  aVar30 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar32 != aVar30) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("TickLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x109b,L""), bVar28)) {
    pcVar20 = (code *)swi(3);
    EVar31 = (*pcVar20)();
    return EVar31;
  }
  pFVar60 = (FScriptContainerElement *)0x0;
  EVar31 = KeepTicking;
  local_c258.ArrayMax = 100;
  pFVar1 = &this->ResultsLock;
  local_c258.AllocatorInstance.SecondaryData =
       (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0;
  iVar34 = 0;
  local_c258.ArrayNum = 0;
  local_daa8.AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0;
  local_daa8.ArrayNum = 0;
  local_daa8.ArrayMax = 100;
  local_cbd8.AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0;
  local_cbd8.ArrayNum = 0;
  local_cbd8.ArrayMax = 100;
  local_af88.AllocatorInstance.SecondaryData = (ForElementType<FPackageDependencyData>)0x0;
  local_af88.ArrayNum = 0;
  local_af88.ArrayMax = 100;
  local_57f8.AllocatorInstance.SecondaryData = (ForElementType<FPackageDependencyData>)0x0;
  local_57f8.ArrayNum = 0;
  local_57f8.ArrayMax = 100;
  local_c8a8.AllocatorInstance.SecondaryData = (ForElementType<FString>)0x0;
  local_c8a8.ArrayNum = 0;
  local_c8a8.ArrayMax = 100;
  local_cf08.SecondaryData = (ForElementType<FName>)0x0;
  local_cbe0 = 0;
  local_cbdc = 100;
  local_d558.AllocatorInstance.SecondaryData = (ForElementType<FString>)0x0;
  local_d558.ArrayNum = 0;
  local_d558.ArrayMax = 100;
  local_dcb0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dcb0.ArrayNum = 0;
  local_dcb0.ArrayMax = 0;
  local_db38.Elements._0_8_ = 0;
  local_db38.Elements._8_8_ = 0;
  local_db38.Elements._32_8_ = 0;
  local_db38.Elements._40_4_ = 0;
  local_db38.Elements._44_4_ = 0x80;
  local_db38.Elements._48_4_ = 0xffffffff;
  local_db38.Elements._52_4_ = 0;
  local_db38.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_db38.HashSize = 0;
  local_dd18 = KeepTicking;
  local_dcd8.SynchObject = pFVar1;
  if ((pFVar1 == (FCriticalSectionQueryable *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("SynchObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x53,L""), bVar28)) {
    pcVar20 = (code *)swi(3);
    EVar31 = (*pcVar20)();
    return EVar31;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  aVar32 = (atomic<unsigned_int>)GetCurrentThreadId();
  dVar24 = __real_4170000000000000;
  (this->ResultsLock).OwnerThreadId = aVar32;
  if (this->bFirstTickAfterIdle != false) {
    this->bFirstTickAfterIdle = false;
    QueryPerformanceCounter(&local_dc88);
    this->LastCacheWriteTime =
         (double)local_dc88.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar24;
  }
  if (param_2) {
    IngestDiscoveryResults(this);
  }
  bVar28 = IsEngineStartupModuleLoadingComplete();
  if ((bVar28) && (this->bFlushedRetryFiles == false)) {
    pFVar14 = (this->FilesToSearch).Ptr;
    this->bFlushedRetryFiles = true;
    UE::AssetDataGather::Private::FFilesToSearch::RetryLaterRetryFiles(pFVar14);
  }
  if ((((this->FilesToSearch).Ptr)->AvailableFilesNum == 0) &&
     (this->NumUncachedAssetFilesOutstanding == 0)) {
    if (*(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) != -1) {
      (this->WaitBatchDirectories).field0_0x0.TypedValue.HashSize = 0;
      pvVar39 = *(void **)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x40);
      if (pvVar39 != (void *)0x0) {
        FMemory::Free(pvVar39);
      }
      TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this->WaitBatchDirectories);
      *(undefined8 *)&(this->WaitBatchDirectories).field0_0x0 = 0;
      EVar31 = Interrupt;
      *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 8) = 0;
      *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) = 0xffffffff;
      *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x20) = 0;
      *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x28) = 0;
      *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x2c) = 0x80;
      *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x34) = 0;
      *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x40) = 0;
      (this->WaitBatchDirectories).field0_0x0.TypedValue.HashSize = 0;
    }
    if (this->bDiscoveryIsComplete == false) {
      if (EVar31 == KeepTicking) {
        EVar31 = PollDiscovery;
      }
      FScopeLockQueryable::~FScopeLockQueryable(&local_dcd8);
    }
    else {
      if (EVar31 == KeepTicking) {
        EVar31 = Idle;
      }
      SetIsIdle(this,true,param_1);
      FScopeLockQueryable::~FScopeLockQueryable(&local_dcd8);
    }
LAB_142b266d8:
    local_db38.HashSize = 0;
    if (local_db38.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_db38.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_db38.Elements);
    DestructItems<FString,int>((FString *)local_dcb0.AllocatorInstance.Data,local_dcb0.ArrayNum);
    if (local_dcb0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_dcb0.AllocatorInstance.Data);
    }
    FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)(local_d758 + 0x100);
    if (local_d558.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
               local_d558.AllocatorInstance.SecondaryData;
    }
    DestructItems<FString,int>((FString *)FVar65,local_d558.ArrayNum);
    if (local_d558.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FMemory::Free((void *)local_d558.AllocatorInstance.SecondaryData);
    }
    if (local_cf08.SecondaryData != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)local_cf08.SecondaryData);
    }
    FVar50 = (ForElementType<FString>)&local_c8a8;
    if (local_c8a8.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FVar50 = local_c8a8.AllocatorInstance.SecondaryData;
    }
    DestructItems<FString,int>((FString *)FVar50,local_c8a8.ArrayNum);
    if (local_c8a8.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FMemory::Free((void *)local_c8a8.AllocatorInstance.SecondaryData);
    }
    FVar45 = (ForElementType<FPackageDependencyData>)&local_57f8;
    if (local_57f8.AllocatorInstance.SecondaryData != (ForElementType<FPackageDependencyData>)0x0) {
      FVar45 = local_57f8.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPackageDependencyData,int>((FPackageDependencyData *)FVar45,local_57f8.ArrayNum);
    if (local_57f8.AllocatorInstance.SecondaryData != (ForElementType<FPackageDependencyData>)0x0) {
      FMemory::Free((void *)local_57f8.AllocatorInstance.SecondaryData);
    }
    FVar45 = (ForElementType<FPackageDependencyData>)&local_af88;
    if (local_af88.AllocatorInstance.SecondaryData != (ForElementType<FPackageDependencyData>)0x0) {
      FVar45 = local_af88.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPackageDependencyData,int>((FPackageDependencyData *)FVar45,local_af88.ArrayNum);
    if (local_af88.AllocatorInstance.SecondaryData != (ForElementType<FPackageDependencyData>)0x0) {
      FMemory::Free((void *)local_af88.AllocatorInstance.SecondaryData);
    }
    FVar44 = (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)&local_cbd8;
    if (local_cbd8.AllocatorInstance.SecondaryData !=
        (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
      FVar44 = local_cbd8.AllocatorInstance.SecondaryData;
    }
    DestructItems<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,int>
              ((TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)FVar44,local_cbd8.ArrayNum);
    if (local_cbd8.AllocatorInstance.SecondaryData !=
        (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
      FMemory::Free((void *)local_cbd8.AllocatorInstance.SecondaryData);
    }
    FVar44 = (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)&local_daa8;
    if (local_daa8.AllocatorInstance.SecondaryData !=
        (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
      FVar44 = local_daa8.AllocatorInstance.SecondaryData;
    }
    DestructItems<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,int>
              ((TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)FVar44,local_daa8.ArrayNum);
    if (local_daa8.AllocatorInstance.SecondaryData !=
        (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
      FMemory::Free((void *)local_daa8.AllocatorInstance.SecondaryData);
    }
    FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)&local_c258;
    if (local_c258.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
      FVar65 = local_c258.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::AssetDataGather::Private::FGatheredPathData,int>
              ((FGatheredPathData *)FVar65,local_c258.ArrayNum);
    if (local_c258.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
      FMemory::Free((void *)local_c258.AllocatorInstance.SecondaryData);
    }
    return EVar31;
  }
  if (*(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) != -1) {
    pTVar5 = &this->WaitBatchDirectories;
    iVar33 = *(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc);
    if (*(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 8) ==
        *(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x34)) {
      if (iVar33 != -1) {
        (this->WaitBatchDirectories).field0_0x0.TypedValue.HashSize = 0;
        pvVar39 = *(void **)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x40);
        if (pvVar39 != (void *)0x0) {
          FMemory::Free(pvVar39);
        }
        TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar5,0);
        pvVar39 = *(void **)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x20);
        if (pvVar39 != (void *)0x0) {
          FMemory::Free(pvVar39);
        }
        if (*(void **)&pTVar5->field0_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&pTVar5->field0_0x0);
        }
        *(undefined8 *)&pTVar5->field0_0x0 = 0;
        *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 8) = 0;
        *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) = 0xffffffff;
        *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x20) = 0;
        *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x28) = 0;
        *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x2c) = 0x80;
        *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x34) = 0;
        *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x40) = 0;
        (this->WaitBatchDirectories).field0_0x0.TypedValue.HashSize = 0;
      }
      EVar31 = Interrupt;
      FScopeLockQueryable::~FScopeLockQueryable(&local_dcd8);
      goto LAB_142b266d8;
    }
    if ((iVar33 == -1) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar28)) {
      pcVar20 = (code *)swi(3);
      EVar31 = (*pcVar20)();
      return EVar31;
    }
    TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
    ::operator=(&local_db38,
                (TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
                 *)pTVar5);
  }
  iVar33 = (this->DependencyResults).ArrayNum;
  uVar62 = ((this->FilesToSearch).Ptr)->AvailableFilesNum + iVar33;
  if ((int)uVar62 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar62);
  }
  if ((this->DependencyResults).ArrayMax < (int)uVar62) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,uVar62,&(this->DependencyResults).AllocatorInstance,iVar33,
               &(this->DependencyResults).ArrayMax);
  }
  pFVar14 = (this->FilesToSearch).Ptr;
  UE::AssetDataGather::Private::FFilesToSearch::
  PopFront<TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
            (pFVar14,&local_c258,pFVar14->AvailableFilesNum);
  UE::AssetDataGather::Private::FFilesToSearch::PopPriorityDirectories
            ((this->FilesToSearch).Ptr,&local_dcb0);
  if ((this->bCacheReadEnabled == (atomic<bool>)0x0) || (this->bHasLoadedCache != false)) {
    dVar21 = this->LastCacheWriteTime;
    FScopeLockQueryable::~FScopeLockQueryable(&local_dcd8);
    local_dd38 = this->bCacheWriteEnabled;
  }
  else {
    FScopeLockQueryable::~FScopeLockQueryable(&local_dcd8);
    local_dd38 = this->bCacheWriteEnabled;
    QueryPerformanceCounter(&local_dc68);
    iVar33 = 0;
    UE::AssetDataGather::Private::FGatherSettings::FindShardedCacheFiles
              (&UE::AssetDataGather::Private::GGatherSettings,&local_dc98);
    pTVar36 = TArrayView<FString_const_,int>::
              TArrayView<FString_const_,int><TArray<FString,TSizedDefaultAllocator<32>_>_&,TArray<FString,TSizedDefaultAllocator<32>_>_>
                        (&local_db98,&local_dc98);
    local_dbd8.DataPtr = pTVar36->DataPtr;
    local_dbd8.ArrayNum = pTVar36->ArrayNum;
    local_dbd8._12_4_ = *(undefined4 *)&pTVar36->field_0xc;
    pTVar37 = UE::AssetDataGather::Private::LoadCacheFiles(&local_dc60,&local_dbd8);
    pFVar56 = pFVar60;
    if (&local_db88 != pTVar37) {
      DestructItems<UE::AssetDataGather::Private::FCachePayload,int>((FCachePayload *)0x0,0);
      pFVar56 = (pTVar37->AllocatorInstance).Data;
      (pTVar37->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar34 = pTVar37->ArrayNum;
      iVar33 = pTVar37->ArrayMax;
      pTVar37->ArrayNum = 0;
      pTVar37->ArrayMax = 0;
    }
    DestructItems<UE::AssetDataGather::Private::FCachePayload,int>
              ((FCachePayload *)local_dc60.AllocatorInstance.Data,local_dc60.ArrayNum);
    if ((FCachePayload *)local_dc60.AllocatorInstance.Data != (FCachePayload *)0x0) {
      FMemory::Free(local_dc60.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_dc98.AllocatorInstance.Data,local_dc98.ArrayNum);
    if (local_dc98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_dc98.AllocatorInstance.Data);
    }
    this = local_dd08;
    local_dc50.AllocatorInstance.Data = pFVar56;
    local_dc50.ArrayNum = iVar34;
    local_dc50.ArrayMax = iVar33;
    ConsumeCacheFiles(local_dd08,&local_dc50);
    if (3 < (byte)LogAssetRegistry._0_1_) {
      FWindowsPlatformTime::Seconds();
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    pFVar1 = &this->ResultsLock;
    local_dca0.SynchObject = pFVar1;
    if ((pFVar1 == (FCriticalSectionQueryable *)0x0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("SynchObject",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                            ,0x53,L""), bVar28)) {
      pcVar20 = (code *)swi(3);
      EVar31 = (*pcVar20)();
      return EVar31;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    aVar32 = (atomic<unsigned_int>)GetCurrentThreadId();
    (this->ResultsLock).OwnerThreadId = aVar32;
    this->bHasLoadedCache = true;
    QueryPerformanceCounter(&local_dc80);
    dVar21 = (double)local_dc80.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar24;
    this->LastCacheWriteTime = dVar21;
    FScopeLockQueryable::~FScopeLockQueryable(&local_dca0);
    DestructItems<UE::AssetDataGather::Private::FCachePayload,int>((FCachePayload *)0x0,0);
  }
  iVar34 = local_c258.ArrayNum;
  uVar51 = (ulonglong)local_c258.ArrayNum;
  local_dd20 = 0;
  local_dd00 = 0;
  local_dd1c = 0;
  FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)&local_c258;
  if (local_c258.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
    FVar65 = local_c258.AllocatorInstance.SecondaryData;
  }
  FVar63 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
           (uVar51 * 0x30 + (longlong)FVar65);
  pFVar56 = pFVar60;
  while( true ) {
    if ((uint)uVar51 != iVar34) {
      local_dd37[1] = false;
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FGatheredPathData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_dd37 + 1);
    }
    uVar27 = local_db38.Elements._52_4_;
    if (FVar65 == FVar63) break;
    uVar12 = *(uchar *)((longlong)FVar65 + 0x29);
    if (uVar12 == '\x04' || uVar12 == '\x03') {
      local_dc40.DataPtr = *(wchar_t **)FVar65;
      local_dc40.Size = *(int *)((longlong)FVar65 + 8) + -1;
      if (*(int *)((longlong)FVar65 + 8) == 0) {
        local_dc40.Size = 0;
      }
      pTVar38 = FPathViews::GetExtension(&local_db78,&local_dc40,true);
      local_d778.CurPos = local_d758;
      pvVar39 = *(void **)((longlong)FVar65 + 0x10);
      local_d778.bIsDynamic = false;
      local_d778.bIsExternal = false;
      local_d778.Base = local_d758;
      iVar33 = *(int *)((longlong)FVar65 + 0x18) + -1;
      if (*(int *)((longlong)FVar65 + 0x18) == 0) {
        iVar33 = 0;
      }
      local_d778.End = local_d758 + 0x100;
      uVar52 = (ulong64)iVar33;
      if (local_d758 + 0x100 < local_d758 + uVar52) {
        TStringBuilderBase<wchar_t>::Extend(&local_d778,uVar52);
      }
      if (iVar33 != 0) {
        pvVar39 = FGenericPlatformString::Memcpy(local_d778.CurPos,pvVar39,uVar52 * 2);
        local_d778.CurPos = (wchar_t *)((longlong)pvVar39 + uVar52 * 2);
      }
      local_db68 = pTVar38->DataPtr;
      uStack_db60 = *(undefined8 *)&pTVar38->Size;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_d778,local_db68,(int)*(undefined8 *)&pTVar38->Size);
      iVar33 = local_cbe0;
      if (local_cbe0 == local_cbdc) {
        iVar33 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                           (0x408,&local_cf08,&local_cbdc);
      }
      local_cbe0 = iVar33 + 1;
      FVar54 = (ForElementType<FName>)&local_cf08;
      if (local_cf08.SecondaryData != (ForElementType<FName>)0x0) {
        FVar54 = local_cf08.SecondaryData;
      }
      pFVar40 = ::FName::FName(&local_dbe0,
                               (int)((longlong)local_d778.CurPos - (longlong)local_d778.Base >> 1),
                               local_d778.Base,FNAME_Add);
      *(FName *)((longlong)FVar54 + (longlong)iVar33 * 8) = *pFVar40;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d778);
      uVar51 = (ulonglong)(uint)local_c258.ArrayNum;
      FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
               ((longlong)FVar65 + 0x30);
      pFVar56 = (FScriptContainerElement *)(ulonglong)local_dd1c;
      pFVar60 = (FScriptContainerElement *)(ulonglong)local_dd20;
      this = local_dd08;
    }
    else if (uVar12 == '\x02') {
      if (*(int *)((longlong)FVar65 + 0x18) == 0) {
        pwVar53 = L"";
      }
      else {
        pwVar53 = *(wchar_t **)((longlong)FVar65 + 0x10);
      }
      ::FName::FName(&local_dcf8,pwVar53);
      FVar17.Number = local_dcf8.Number;
      FVar17.ComparisonIndex.Value = local_dcf8.ComparisonIndex.Value;
      pTVar41 = TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FDiskCachedAssetData_*>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>,FDefaultSetAllocator>
                        *)&this->DiskCachedAssetDataMap,FVar17);
      plVar55 = (longlong *)&pTVar41->field_0x8;
      if (pTVar41 == (TTuple<FName,FDiskCachedAssetData_*> *)0x0) {
        plVar55 = (longlong *)0x0;
      }
      if (plVar55 == (longlong *)0x0) {
LAB_142b251b7:
        pFVar48 = (FDiskCachedAssetData *)0x0;
      }
      else {
        pFVar48 = (FDiskCachedAssetData *)*plVar55;
        if (pFVar48 != (FDiskCachedAssetData *)0x0) {
          if (*(longlong *)((longlong)FVar65 + 0x20) == (pFVar48->ModificationTime).Ticks) {
            if ((((pFVar48->DependencyData).PackageName.ComparisonIndex.Value ==
                  local_dcf8.ComparisonIndex.Value) &&
                ((pFVar48->DependencyData).PackageName.Number == local_dcf8.Number)) ||
               ((pFVar48->DependencyData).PackageName == (FName)0x0)) {
              local_dc30.DataPtr = *(wchar_t **)FVar65;
              local_dc30.Size = *(int *)((longlong)FVar65 + 8) + -1;
              if (*(int *)((longlong)FVar65 + 8) == 0) {
                local_dc30.Size = 0;
              }
              pTVar38 = FPathViews::GetExtension(&local_db58,&local_dc30,false);
              local_db48 = pTVar38->DataPtr;
              uStack_db40 = *(undefined8 *)&pTVar38->Size;
              pFVar40 = ::FName::FName(&local_dbe8,(int)*(undefined8 *)&pTVar38->Size,local_db48,
                                       FNAME_Add);
              if (pFVar48->Extension == *pFVar40) goto LAB_142b251ba;
            }
            if (3 < (byte)LogAssetRegistry._0_1_) {
              ::FName::ToString(&local_dcf8,&local_dbc8);
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry)
              ;
              if (local_dbc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_dbc8.Data.AllocatorInstance.Data);
              }
            }
          }
          goto LAB_142b251b7;
        }
      }
LAB_142b251ba:
      if (((UE::AssetDataGather::Private::bBlockPackagesWithMarkOfTheWeb == false) ||
          ((pFVar48 != (FDiskCachedAssetData *)0x0 && (pFVar48->HasMarkOfTheWeb != Unset)))) &&
         (pFVar48 != (FDiskCachedAssetData *)0x0)) {
        if ((UE::AssetDataGather::Private::bBlockPackagesWithMarkOfTheWeb == false) ||
           (pFVar48->HasMarkOfTheWeb != Max)) {
          local_dd20 = (int)pFVar60 + 1;
          iVar33 = (pFVar48->AssetDataList).ArrayNum;
          (pFVar48->DependencyData).bHasPackageData = this->bGatherAssetPackageData;
          (pFVar48->DependencyData).bHasDependencyData = this->bGatherDependsData;
          uVar62 = iVar33 + local_daa8.ArrayNum;
          if ((int)uVar62 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar62);
          }
          if (local_daa8.ArrayMax < (int)uVar62) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>
                      (8,8,uVar62,&local_daa8.AllocatorInstance,local_daa8.ArrayNum,
                       &local_daa8.ArrayMax);
          }
          iVar33 = (pFVar48->AssetDataList).ArrayNum;
          pFVar61 = (FAssetData *)(pFVar48->AssetDataList).AllocatorInstance.Data;
          pFVar59 = pFVar61 + iVar33;
          while( true ) {
            if ((pFVar48->AssetDataList).ArrayNum != iVar33) {
              local_dd37[2] = false;
              `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_dd37 + 2);
            }
            if (pFVar61 == pFVar59) break;
            this_03 = ::operator_new(0x68);
            if (this_03 == (FAssetData *)0x0) {
              local_dce8.Ptr = (FAssetData *)0x0;
            }
            else {
              local_dce8.Ptr = FAssetData::FAssetData(this_03,pFVar61);
            }
            FVar44 = (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)
                     &local_daa8;
            if (local_daa8.AllocatorInstance.SecondaryData !=
                (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
              FVar44 = local_daa8.AllocatorInstance.SecondaryData;
            }
            if ((ulonglong)FVar44 <= &local_dce8) {
              FVar44 = (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)
                       &local_daa8;
              if (local_daa8.AllocatorInstance.SecondaryData !=
                  (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
                FVar44 = local_daa8.AllocatorInstance.SecondaryData;
              }
              if ((&local_dce8 <
                   (TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)
                   ((longlong)FVar44 + (longlong)local_daa8.ArrayMax * 8)) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar28)) {
                pcVar20 = (code *)swi(3);
                EVar31 = (*pcVar20)();
                return EVar31;
              }
            }
            if (local_daa8.ArrayNum == local_daa8.ArrayMax) {
              local_daa8.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>
                             (0x808,&local_daa8.AllocatorInstance,&local_daa8.ArrayMax);
            }
            FVar44 = (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)
                     &local_daa8;
            if (local_daa8.AllocatorInstance.SecondaryData !=
                (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
              FVar44 = local_daa8.AllocatorInstance.SecondaryData;
            }
            lVar49 = (longlong)local_daa8.ArrayNum;
            local_daa8.ArrayNum = local_daa8.ArrayNum + 1;
            ((TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)((longlong)FVar44 + lVar49 * 8))
            ->Ptr = local_dce8.Ptr;
            local_dce8.Ptr = (FAssetData *)0x0;
            pFVar61 = pFVar61 + 1;
          }
          pFVar46 = &pFVar48->DependencyData;
          FVar45 = (ForElementType<FPackageDependencyData>)&local_af88;
          if (local_af88.AllocatorInstance.SecondaryData !=
              (ForElementType<FPackageDependencyData>)0x0) {
            FVar45 = local_af88.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar45 <= pFVar46) {
            FVar45 = (ForElementType<FPackageDependencyData>)&local_af88;
            if (local_af88.AllocatorInstance.SecondaryData !=
                (ForElementType<FPackageDependencyData>)0x0) {
              FVar45 = local_af88.AllocatorInstance.SecondaryData;
            }
            if ((pFVar46 < (FPackageDependencyData *)
                           ((longlong)local_af88.ArrayMax * 0xe0 + (longlong)FVar45)) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar28)) {
              pcVar20 = (code *)swi(3);
              EVar31 = (*pcVar20)();
              return EVar31;
            }
          }
          if (local_af88.ArrayNum == local_af88.ArrayMax) {
            local_af88.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageDependencyData>_>
                           (0x8e0,&local_af88.AllocatorInstance,&local_af88.ArrayMax);
          }
          FVar45 = (ForElementType<FPackageDependencyData>)&local_af88;
          if (local_af88.AllocatorInstance.SecondaryData !=
              (ForElementType<FPackageDependencyData>)0x0) {
            FVar45 = local_af88.AllocatorInstance.SecondaryData;
          }
          lVar49 = (longlong)local_af88.ArrayNum;
          local_af88.ArrayNum = local_af88.ArrayNum + 1;
          pFVar46 = FPackageDependencyData::FPackageDependencyData
                              ((FPackageDependencyData *)(lVar49 * 0xe0 + (longlong)FVar45),pFVar46)
          ;
          this = local_dd08;
          (pFVar46->PackageData).Flags =
               -(uint)(*(uchar *)((longlong)FVar65 + 0x28) != '\0') & 4 |
               (pFVar46->PackageData).Flags & 0xfffffffb;
          FVar22.Number = local_dcf8.Number;
          FVar22.ComparisonIndex.Value = local_dcf8.ComparisonIndex.Value;
          AddToCache(local_dd08,FVar22,pFVar48);
          uVar51 = (ulonglong)(uint)local_c258.ArrayNum;
          FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
                   ((longlong)FVar65 + 0x30);
          pFVar56 = (FScriptContainerElement *)(ulonglong)local_dd1c;
          pFVar60 = (FScriptContainerElement *)(ulonglong)local_dd20;
        }
        else {
          pIVar42 = IPlatformFile::GetPlatformPhysical();
          uVar15 = *(undefined8 *)FVar65;
          iStack_dc10 = *(int *)((longlong)FVar65 + 8) + -1;
          if (*(int *)((longlong)FVar65 + 8) == 0) {
            iStack_dc10 = 0;
          }
          local_dc18._0_4_ = (undefined4)uVar15;
          local_dc18._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
          local_dbb8 = (undefined4)local_dc18;
          uStack_dbb4 = local_dc18._4_4_;
          uStack_dbac = uStack_dc0c;
          local_dc18 = uVar15;
          iStack_dbb0 = iStack_dc10;
          cVar29 = (**(code **)((longlong)*pIVar42 + 0xd8))(pIVar42,&local_dbb8);
          pFVar48->HasMarkOfTheWeb = (cVar29 != '\0') + False;
          if (cVar29 == '\0') goto LAB_142b2565f;
          FVar43 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
                   (local_d758 + 0x100);
          if (local_d558.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
            FVar43 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
                     local_d558.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar43 <= (ulonglong)FVar65) {
            FVar43 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
                     (local_d758 + 0x100);
            if (local_d558.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
              FVar43 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
                       local_d558.AllocatorInstance.SecondaryData;
            }
            if (((ulonglong)FVar65 <
                 (ulonglong)((longlong)local_d558.ArrayMax * 0x10 + (longlong)FVar43)) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar28)) {
              pcVar20 = (code *)swi(3);
              EVar31 = (*pcVar20)();
              return EVar31;
            }
          }
          if (local_d558.ArrayNum == local_d558.ArrayMax) {
            local_d558.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                           (0x810,(ForElementType<FString> *)(local_d758 + 0x100),
                            &local_d558.ArrayMax);
          }
          FVar43 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
                   (local_d758 + 0x100);
          if (local_d558.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
            FVar43 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
                     local_d558.AllocatorInstance.SecondaryData;
          }
          lVar49 = (longlong)local_d558.ArrayNum;
          local_d558.ArrayNum = local_d558.ArrayNum + 1;
          ::FString::FString((FString *)(lVar49 * 0x10 + (longlong)FVar43),(FString *)FVar65);
          uVar51 = (ulonglong)(uint)local_c258.ArrayNum;
          FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
                   ((longlong)FVar65 + 0x30);
        }
      }
      else {
        FVar23.Number = local_dcf8.Number;
        FVar23.ComparisonIndex.Value = local_dcf8.ComparisonIndex.Value;
        UE::AssetDataGather::Private::FFileReadScheduler::AddFile
                  ((this->FileReadScheduler).Ptr,FVar23,(FGatheredPathData *)FVar65);
        local_dd1c = (int)pFVar56 + 1;
        pFVar56 = (FScriptContainerElement *)(ulonglong)local_dd1c;
LAB_142b2565f:
        uVar51 = (ulonglong)(uint)local_c258.ArrayNum;
        FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
                 ((longlong)FVar65 + 0x30);
      }
    }
    else {
      local_dc78 = FVar65;
      `FAssetDataGatherer::TickInternal'::__l76::<lambda_1>::operator()(&local_dc78);
      uVar51 = (ulonglong)(uint)local_c258.ArrayNum;
      FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
               ((longlong)FVar65 + 0x30);
    }
  }
  uVar26 = local_db38.Elements._8_4_;
  local_dcf0 = local_db38.Elements._52_4_;
  local_dcec = local_db38.Elements._8_4_;
  UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList
            ((this->FileReadScheduler).Ptr,&local_db38);
  UE::AssetDataGather::Private::FFileReadScheduler::Schedule
            ((this->FileReadScheduler).Ptr,&local_dcb0);
  local_dd30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd30.ArrayNum = 0;
  local_dd30.ArrayMax = 0;
  UE::AssetDataGather::Private::FFileReadScheduler::CollectCompletedReads
            ((this->FileReadScheduler).Ptr,&local_dd30);
  if ((uVar26 == uVar27) && (local_dd30.ArrayNum != 0)) {
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  uVar51 = (ulonglong)local_dd30.ArrayNum;
  this->bRequestAssetRegistryTick = bVar28;
  local_dcc8 = local_dd30.ArrayNum;
  local_dcd0 = (LPCRITICAL_SECTION)(local_dd30.AllocatorInstance.Data + uVar51 * 8);
  p_Var57 = local_dcd0;
  FVar64.Data = local_dd30.AllocatorInstance.Data;
  do {
    while( true ) {
      while( true ) {
        pFVar48 = (FDiskCachedAssetData *)0x0;
        if (local_dd30.ArrayNum != (int)uVar51) {
          local_dd37[3] = false;
          `TCheckedPointerIterator<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_dd37 + 3);
        }
        if ((LPCRITICAL_SECTION)FVar64.Data == p_Var57) {
          p_Var57 = (LPCRITICAL_SECTION)&this->ResultsLock;
          local_dcd0 = p_Var57;
          if (((FCriticalSectionQueryable *)p_Var57 == (FCriticalSectionQueryable *)0x0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SynchObject",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                                  ,0x53,L""), bVar28)) {
            pcVar20 = (code *)swi(3);
            EVar31 = (*pcVar20)();
            return EVar31;
          }
          EnterCriticalSection(p_Var57);
          aVar32 = (atomic<unsigned_int>)GetCurrentThreadId();
          (this->ResultsLock).OwnerThreadId = aVar32;
          TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedDefaultAllocator<32>_>::
          Append<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
                    (&this->AssetResults,&local_daa8);
          TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedDefaultAllocator<32>_>::
          Append<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
                    (&this->AssetResultsForGameThread,&local_cbd8);
          TArray<FPackageDependencyData,TSizedDefaultAllocator<32>_>::
          Append<FPackageDependencyData,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
                    (&this->DependencyResults,&local_af88);
          TArray<FPackageDependencyData,TSizedDefaultAllocator<32>_>::
          Append<FPackageDependencyData,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
                    (&this->DependencyResultsForGameThread,&local_57f8);
          TArray<FString,TSizedDefaultAllocator<32>_>::
          Append<FString,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
                    (&this->CookedPackageNamesWithoutAssetDataResults,&local_c8a8);
          pTVar11 = &this->VerseResults;
          if (((ForElementType<FName> *)pTVar11 == &local_cf08) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x986,L""), bVar28)) {
            pcVar20 = (code *)swi(3);
            EVar31 = (*pcVar20)();
            return EVar31;
          }
          lVar49 = (longlong)local_cbe0;
          if (local_cbe0 != 0) {
            iVar34 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,4,local_cbe0,&pTVar11->AllocatorInstance,
                                &(this->VerseResults).ArrayNum,&(this->VerseResults).ArrayMax);
            FVar54 = (ForElementType<FName>)&local_cf08;
            if (local_cf08.SecondaryData != (ForElementType<FName>)0x0) {
              FVar54 = local_cf08.SecondaryData;
            }
            memmove((pTVar11->AllocatorInstance).Data + (longlong)iVar34 * 8,(void *)FVar54,
                    lVar49 << 3);
            local_cbe0 = 0;
          }
          TArray<FString,TSizedDefaultAllocator<32>_>::
          Append<FString,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
                    (&this->BlockedResults,
                     (TArray<FString,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> *)
                     (local_d758 + 0x100));
          iVar33 = local_dcec;
          iVar34 = local_dcf0;
          pFVar25 = local_dd08;
          this->NumUncachedAssetFiles = this->NumUncachedAssetFiles + local_dd00;
          this->NumCachedAssetFiles = this->NumCachedAssetFiles + local_dd20;
          this->NumUncachedAssetFilesOutstanding =
               this->NumUncachedAssetFilesOutstanding + (local_dd1c - local_dd30.ArrayNum);
          if (local_dd30.ArrayNum != 0) {
            bVar28 = local_dd30.ArrayNum == 0;
            do {
              iVar58 = local_dd30.ArrayNum;
              if (bVar28 || local_dd30.ArrayNum < 0) {
                bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar28) {
                  pcVar20 = (code *)swi(3);
                  EVar31 = (*pcVar20)();
                  return EVar31;
                }
                iVar58 = local_dd30.ArrayNum;
              }
              pFVar19 = *(FReadContext **)
                         (local_dd30.AllocatorInstance.Data + (longlong)iVar58 * 8 + -8);
              *(undefined8 *)(local_dd30.AllocatorInstance.Data + (longlong)iVar58 * 8 + -8) = 0;
              iVar58 = local_dd30.ArrayNum + -1;
              this_01 = (TDefaultDelete<UE::AssetDataGather::Private::FReadContext> *)
                        (local_dd30.AllocatorInstance.Data + (longlong)iVar58 * 8);
              local_dce0 = pFVar19;
              TDefaultDelete<UE::AssetDataGather::Private::FReadContext>::operator()
                        (this_01,*(FReadContext **)
                                  (local_dd30.AllocatorInstance.Data + (longlong)iVar58 * 8));
              iVar58 = (local_dd30.ArrayNum - iVar58) + -1;
              if (iVar58 != 0) {
                memmove(this_01,this_01 + 8,(longlong)iVar58 << 3);
              }
              local_dd30.ArrayNum = local_dd30.ArrayNum + -1;
              if (((pFVar19->DirectoryReadTaskData).Object == (FDirectoryReadTaskData *)0x0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar28)) {
                pcVar20 = (code *)swi(3);
                EVar31 = (*pcVar20)();
                return EVar31;
              }
              if (((pFVar19->DirectoryReadTaskData).Object)->OutstandingReads == 1) {
                FPaths::GetPath(&local_dcc0,&(pFVar19->AssetFileData).LocalAbsPath);
                if ((local_dcc0.Data.ArrayNum < 2) &&
                   (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!Directory.IsEmpty()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                                        ,0x1206,L""), bVar28)) {
                  pcVar20 = (code *)swi(3);
                  EVar31 = (*pcVar20)();
                  return EVar31;
                }
                if (iVar33 != iVar34) {
                  if (((pFVar19->DirectoryReadTaskData).Object == (FDirectoryReadTaskData *)0x0) &&
                     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar28)) {
                    pcVar20 = (code *)swi(3);
                    EVar31 = (*pcVar20)();
                    return EVar31;
                  }
                  if ((((pFVar19->DirectoryReadTaskData).Object)->bHasCanceledRead == false) &&
                     (local_db38.Elements._8_4_ != local_db38.Elements._52_4_)) {
                    if (local_dcc0.Data.ArrayNum == 0) {
                      pwVar53 = L"";
                      iVar58 = 0;
                    }
                    else {
                      pwVar53 = (wchar_t *)local_dcc0.Data.AllocatorInstance.Data;
                      iVar58 = local_dcc0.Data.ArrayNum + -1;
                    }
                    uVar62 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar58,pwVar53);
                    TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
                    ::RemoveImpl<FString>(&local_db38,uVar62,&local_dcc0);
                  }
                }
                this_02 = (((pFVar25->FileReadScheduler).Ptr)->ScheduledDirectories).Ptr;
                local_dc08 = local_dcc0.Data.AllocatorInstance.Data;
                iStack_dc00 = local_dcc0.Data.ArrayNum + -1;
                if (local_dcc0.Data.ArrayNum == 0) {
                  iStack_dc00 = 0;
                }
                local_dbf8._12_4_ = uStack_dbfc;
                local_dbf8.Size = iStack_dc00;
                local_dbf8.DataPtr = (wchar_t *)local_dcc0.Data.AllocatorInstance.Data;
                if (iStack_dc00 == 0) {
                  uVar62 = (this_02->Root).NumChildNodesAndFlags;
                  local_dd37[0] = (bool)-(char)((int)uVar62 >> 0x1f);
                  if (local_dd37[0] != false) {
                    (this_02->Root).NumChildNodesAndFlags = uVar62 & 0x7fffffff;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (*(TReferenceControllerBase<1> **)((this_02->Root).Value.Pad + 8));
                  }
                }
                else {
                  local_dae8.Base = local_dac8;
                  local_dae8.bIsDynamic = false;
                  local_dae8.bIsExternal = false;
                  local_dae8.CurPos = local_dac8;
                  local_dae8.End = (wchar_t *)&local_daa8;
                  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>
                  ::NormalizePathForReading(this_02,&local_dbf8,&local_dae8);
                  local_dba8.DataPtr = local_dbf8.DataPtr;
                  local_dba8.Size = local_dbf8.Size;
                  local_dba8._12_4_ = local_dbf8._12_4_;
                  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>
                  ::FTreeNode::Remove(&this_02->Root,&local_dba8,local_dd37);
                  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_dae8);
                }
                if (local_dd37[0] != false) {
                  if ((this_02->NumPaths < 1) &&
                     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                         ("NumPaths > 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                          ,0x205,L""), bVar28)) {
                    pcVar20 = (code *)swi(3);
                    EVar31 = (*pcVar20)();
                    return EVar31;
                  }
                  this_02->NumPaths = this_02->NumPaths + -1;
                }
                if (local_dcc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_dcc0.Data.AllocatorInstance.Data);
                }
              }
              if (pFVar19->bCanceled == false) {
                if (pFVar19->bCanAttemptAssetRetry != false) {
                  pFVar14 = (pFVar25->FilesToSearch).Ptr;
                  uVar62 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                           ::NormalizeCapacity(&pFVar14->LaterRetryFiles,
                                               ((pFVar14->LaterRetryFiles).AfterBack -
                                               (pFVar14->LaterRetryFiles).Front) + 1);
                  if ((pFVar14->LaterRetryFiles).IndexMask + 1 < uVar62) {
                    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                    ::Reallocate(&pFVar14->LaterRetryFiles,uVar62);
                  }
                  uVar62 = (pFVar14->LaterRetryFiles).AfterBack;
                  (pFVar14->LaterRetryFiles).AfterBack = uVar62 + 1;
                  pFVar60 = (pFVar14->LaterRetryFiles).AllocatorInstance.Data +
                            (ulonglong)((pFVar14->LaterRetryFiles).IndexMask & uVar62) * 0x30;
                  ::FString::FString((FString *)pFVar60,&(pFVar19->AssetFileData).LocalAbsPath);
                  ::FString::FString((FString *)(pFVar60 + 0x10),
                                     &(pFVar19->AssetFileData).LongPackageName);
                  *(long64 *)&pFVar60[0x20].field_0x0 =
                       (pFVar19->AssetFileData).PackageTimestamp.Ticks;
                  pFVar60[0x28] = (FScriptContainerElement)(pFVar19->AssetFileData).bIsReadOnly;
                  pFVar60[0x29] = (FScriptContainerElement)(pFVar19->AssetFileData).Type;
                }
              }
              else {
                pFVar14 = (pFVar25->FilesToSearch).Ptr;
                uVar62 = (pFVar14->BlockingFiles).AfterBack;
                this_00 = &pFVar14->BlockingFiles;
                pFVar14->AvailableFilesNum = pFVar14->AvailableFilesNum + 1;
                uVar62 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                         ::NormalizeCapacity(this_00,(uVar62 - (pFVar14->BlockingFiles).Front) + 1);
                if ((pFVar14->BlockingFiles).IndexMask + 1 < uVar62) {
                  TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                  ::Reallocate(this_00,uVar62);
                }
                puVar4 = &(pFVar14->BlockingFiles).Front;
                *puVar4 = *puVar4 - 1;
                uVar51 = (ulonglong)
                         ((pFVar14->BlockingFiles).Front & (pFVar14->BlockingFiles).IndexMask);
                pFVar60 = (this_00->AllocatorInstance).Data;
                *(undefined8 *)(pFVar60 + uVar51 * 0x30) = 0;
                *(FScriptContainerElement **)(pFVar60 + uVar51 * 0x30) =
                     (pFVar19->AssetFileData).LocalAbsPath.Data.AllocatorInstance.Data;
                (pFVar19->AssetFileData).LocalAbsPath.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                *(int *)(pFVar60 + uVar51 * 0x30 + 8) =
                     (pFVar19->AssetFileData).LocalAbsPath.Data.ArrayNum;
                *(int *)(pFVar60 + uVar51 * 0x30 + 0xc) =
                     (pFVar19->AssetFileData).LocalAbsPath.Data.ArrayMax;
                (pFVar19->AssetFileData).LocalAbsPath.Data.ArrayNum = 0;
                (pFVar19->AssetFileData).LocalAbsPath.Data.ArrayMax = 0;
                *(undefined8 *)(pFVar60 + uVar51 * 0x30 + 0x10) = 0;
                *(FScriptContainerElement **)(pFVar60 + uVar51 * 0x30 + 0x10) =
                     (pFVar19->AssetFileData).LongPackageName.Data.AllocatorInstance.Data;
                (pFVar19->AssetFileData).LongPackageName.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                *(int *)(pFVar60 + uVar51 * 0x30 + 0x18) =
                     (pFVar19->AssetFileData).LongPackageName.Data.ArrayNum;
                *(int *)(pFVar60 + uVar51 * 0x30 + 0x1c) =
                     (pFVar19->AssetFileData).LongPackageName.Data.ArrayMax;
                (pFVar19->AssetFileData).LongPackageName.Data.ArrayNum = 0;
                (pFVar19->AssetFileData).LongPackageName.Data.ArrayMax = 0;
                *(long64 *)(pFVar60 + uVar51 * 0x30 + 0x20) =
                     (pFVar19->AssetFileData).PackageTimestamp.Ticks;
                pFVar60[uVar51 * 0x30 + 0x28] =
                     (FScriptContainerElement)(pFVar19->AssetFileData).bIsReadOnly;
                pFVar60[uVar51 * 0x30 + 0x29] =
                     (FScriptContainerElement)(pFVar19->AssetFileData).Type;
              }
              TDefaultDelete<UE::AssetDataGather::Private::FReadContext>::operator()
                        ((TDefaultDelete<UE::AssetDataGather::Private::FReadContext> *)&local_dce0,
                         pFVar19);
              bVar28 = local_dd30.ArrayNum == 0;
              p_Var57 = local_dcd0;
              this = pFVar25;
            } while (!bVar28);
          }
          if ((iVar33 != iVar34) &&
             (pTVar5 = &this->WaitBatchDirectories,
             &local_db38 !=
             (TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
              *)pTVar5)) {
            (this->WaitBatchDirectories).field0_0x0.TypedValue.HashSize = 0;
            pvVar39 = *(void **)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x40);
            if (pvVar39 != (void *)0x0) {
              FMemory::Free(pvVar39);
            }
            TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)pTVar5);
            *(undefined8 *)&pTVar5->field0_0x0 = 0;
            *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 8) = 0;
            *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x20) = 0;
            *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x28) = 0;
            *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x2c) = 0x80;
            *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x30) = 0xffffffff;
            *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x34) = 0;
            *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x40) = 0;
            (this->WaitBatchDirectories).field0_0x0.TypedValue.HashSize = 0;
            TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
            ::
            Move<TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>_>
                      ((TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
                        *)pTVar5,&local_db38);
            if ((*(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) == -1) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x171,
                                    L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                   ), bVar28)) {
              pcVar20 = (code *)swi(3);
              EVar31 = (*pcVar20)();
              return EVar31;
            }
          }
          iVar34 = this->NumUncachedAssetFiles;
          iVar33 = this->LastCacheSaveNumUncachedAssetFiles;
          EVar31 = local_dd18;
          if ((((this->bCacheWriteEnabled != (atomic<bool>)0x0) &&
               (this->bIsSavingAsyncCache == false)) &&
              (QueryPerformanceCounter(&local_dc70), EVar31 = local_dd18,
              __real_4072c00000000000 <=
              ((double)local_dc70.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar24) -
              dVar21)) && (99999 < iVar34 - iVar33)) {
            LOCK();
            this->bSaveAsyncCacheTriggered = (atomic<bool>)0x1;
            UNLOCK();
            EVar31 = Interrupt;
          }
          DVar13 = *(DWORD *)&p_Var57[1].DebugInfo;
          DVar35 = GetCurrentThreadId();
          if ((DVar13 != DVar35) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsLockedOnCurrentThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                                  ,0x2b,L""), bVar28)) {
            pcVar20 = (code *)swi(3);
            EVar31 = (*pcVar20)();
            return EVar31;
          }
          *(undefined4 *)&p_Var57[1].DebugInfo = 0;
          LeaveCriticalSection(p_Var57);
          DestructItems<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,int>
                    ((TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>
                      *)local_dd30.AllocatorInstance.Data,local_dd30.ArrayNum);
          if (local_dd30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_dd30.AllocatorInstance.Data);
          }
          goto LAB_142b266d8;
        }
        TVar16.Ptr = *(FReadContext **)FVar64.Data;
        if ((TVar16.Ptr)->bCanceled == false) break;
        if ((((TVar16.Ptr)->DirectoryReadTaskData).Object == (FDirectoryReadTaskData *)0x0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar28)) {
          pcVar20 = (code *)swi(3);
          EVar31 = (*pcVar20)();
          return EVar31;
        }
        FVar64.Data = FVar64.Data + 8;
        uVar51 = (ulonglong)local_dcc8;
        (((TVar16.Ptr)->DirectoryReadTaskData).Object)->bHasCanceledRead = true;
      }
      if ((TVar16.Ptr)->bResult != false) break;
LAB_142b25fb0:
      uVar51 = (ulonglong)local_dcc8;
      FVar64.Data = FVar64.Data + 8;
    }
    if ((local_dd38 != (atomic<bool>)0x0) &&
       (((TVar16.Ptr)->CookedPackageNamesWithoutAssetData).ArrayNum == 0)) {
      if (((TVar16.Ptr)->AssetFileData).Type == PackageFile) {
        pFVar56 = ((TVar16.Ptr)->AssetDataFromFile).AllocatorInstance.Data;
        iVar34 = ((TVar16.Ptr)->AssetDataFromFile).ArrayNum;
        pFVar60 = pFVar56 + (longlong)iVar34 * 8;
LAB_142b257e0:
        if (((TVar16.Ptr)->AssetDataFromFile).ArrayNum != iVar34) {
          local_dd37[4] = false;
          `TCheckedPointerIterator<FAssetData_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_dd37 + 4);
        }
        if (pFVar56 == pFVar60) {
          pFVar47 = ::operator_new(0x110);
          if (pFVar47 != (FDiskCachedAssetData *)0x0) {
            FVar17 = (*(FReadContext **)FVar64.Data)->Extension;
            (pFVar47->ModificationTime).Ticks =
                 ((*(FReadContext **)FVar64.Data)->AssetFileData).PackageTimestamp.Ticks;
            (pFVar47->LastGatheredTime).Ticks = (local_dd08->GatherStartTime).Ticks;
            pFVar47->Extension = FVar17;
            (pFVar47->AssetDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar47->AssetDataList).ArrayNum = 0;
            (pFVar47->AssetDataList).ArrayMax = 0;
            (pFVar47->DependencyData).PackageName.ComparisonIndex = 0;
            (pFVar47->DependencyData).PackageName.Number = 0;
            (pFVar47->DependencyData).PackageData.CookedHash.bIsValid = false;
            *(undefined8 *)&(pFVar47->DependencyData).PackageData.ChunkHashes = 0;
            *(undefined8 *)&(pFVar47->DependencyData).PackageData.ChunkHashes.field_0x8 = 0;
            *(undefined8 *)&(pFVar47->DependencyData).PackageData.ChunkHashes.field_0x20 = 0;
            pFVar47->HasMarkOfTheWeb = Unset;
            (pFVar47->DependencyData).PackageData.Extension = Unspecified;
            (pFVar47->DependencyData).PackageData.Flags = 0;
            *(undefined4 *)&(pFVar47->DependencyData).PackageData.ChunkHashes.field_0x28 = 0;
            *(undefined4 *)&(pFVar47->DependencyData).PackageData.ChunkHashes.field_0x2c = 0x80;
            *(undefined4 *)&(pFVar47->DependencyData).PackageData.ChunkHashes.field_0x30 =
                 0xffffffff;
            *(undefined4 *)&(pFVar47->DependencyData).PackageData.ChunkHashes.field_0x34 = 0;
            *(undefined8 *)&(pFVar47->DependencyData).PackageData.ChunkHashes.field_0x40 = 0;
            *(undefined4 *)&(pFVar47->DependencyData).PackageData.ChunkHashes.field_0x48 = 0;
            (pFVar47->DependencyData).PackageData.ImportedClasses.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pFVar47->DependencyData).PackageData.ImportedClasses.ArrayNum = 0;
            (pFVar47->DependencyData).PackageData.ImportedClasses.ArrayMax = 0;
            (pFVar47->DependencyData).PackageData.DiskSize = 0;
            (pFVar47->DependencyData).PackageData.FileVersionUE.FileVersionUE4 = 0;
            (pFVar47->DependencyData).PackageData.FileVersionUE.FileVersionUE5 = 0;
            (pFVar47->DependencyData).PackageData.FileVersionLicenseeUE = -1;
            (pFVar47->DependencyData).PackageData.CustomVersions.Ptr.DataPtr =
                 (FPackageCustomVersion *)0x0;
            (pFVar47->DependencyData).PackageData.CustomVersions.Ptr.ArrayNum = 0;
            (pFVar47->DependencyData).PackageDependencies.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pFVar47->DependencyData).PackageDependencies.ArrayNum = 0;
            (pFVar47->DependencyData).PackageDependencies.ArrayMax = 0;
            (pFVar47->DependencyData).SearchableNameDependencies.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pFVar47->DependencyData).SearchableNameDependencies.ArrayNum = 0;
            (pFVar47->DependencyData).SearchableNameDependencies.ArrayMax = 0;
            (pFVar47->DependencyData).DependsNodeReservations.PackageDependenciesSize = 0;
            (pFVar47->DependencyData).DependsNodeReservations.NameDependenciesSize = 0;
            (pFVar47->DependencyData).DependsNodeReservations.ManageDependenciesSize = 0;
            (pFVar47->DependencyData).DependsNodeReservations.ReferencersSize = 0;
            (pFVar47->DependencyData).bHasPackageData = false;
            (pFVar47->DependencyData).bHasDependencyData = false;
            pFVar48 = pFVar47;
          }
          uVar62 = ((*(FReadContext **)FVar64.Data)->AssetDataFromFile).ArrayNum;
          local_dd10 = pFVar48;
          if ((int)uVar62 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar62);
          }
          if ((pFVar48->AssetDataList).ArrayMax < (int)uVar62) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,uVar62,&(pFVar48->AssetDataList).AllocatorInstance,
                       (pFVar48->AssetDataList).ArrayNum,&(pFVar48->AssetDataList).ArrayMax);
          }
          TVar16.Ptr = *(FReadContext **)FVar64.Data;
          pFVar56 = ((TVar16.Ptr)->AssetDataFromFile).AllocatorInstance.Data;
          iVar34 = ((TVar16.Ptr)->AssetDataFromFile).ArrayNum;
          pFVar60 = pFVar56 + (longlong)iVar34 * 8;
          while( true ) {
            if (((TVar16.Ptr)->AssetDataFromFile).ArrayNum != iVar34) {
              local_dd37[5] = false;
              `TCheckedPointerIterator<FAssetData_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_dd37 + 5);
            }
            pFVar48 = local_dd10;
            if (pFVar56 == pFVar60) break;
            pFVar61 = *(FAssetData **)pFVar56;
            pFVar59 = (FAssetData *)(local_dd10->AssetDataList).AllocatorInstance.Data;
            if (((pFVar59 <= pFVar61) && (pFVar61 < pFVar59 + (local_dd10->AssetDataList).ArrayMax))
               && (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar28)) {
              pcVar20 = (code *)swi(3);
              EVar31 = (*pcVar20)();
              return EVar31;
            }
            iVar33 = (pFVar48->AssetDataList).ArrayNum;
            piVar2 = &(pFVar48->AssetDataList).ArrayMax;
            if (iVar33 == *piVar2) {
              iVar33 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x868,&(pFVar48->AssetDataList).AllocatorInstance,piVar2);
            }
            (pFVar48->AssetDataList).ArrayNum = iVar33 + 1;
            FAssetData::FAssetData
                      ((FAssetData *)
                       ((pFVar48->AssetDataList).AllocatorInstance.Data + (longlong)iVar33 * 0x68),
                       pFVar61);
            pFVar56 = pFVar56 + 8;
          }
          TVar16.Ptr = *(FReadContext **)FVar64.Data;
          (local_dd10->DependencyData).PackageName = ((TVar16.Ptr)->DependencyData).PackageName;
          FAssetPackageData::operator=
                    (&(local_dd10->DependencyData).PackageData,
                     &((TVar16.Ptr)->DependencyData).PackageData);
          pTVar6 = &((TVar16.Ptr)->DependencyData).PackageDependencies;
          pTVar7 = &(pFVar48->DependencyData).PackageDependencies;
          if (pTVar7 != pTVar6) {
            iVar34 = ((TVar16.Ptr)->DependencyData).PackageDependencies.ArrayNum;
            piVar2 = &(pFVar48->DependencyData).PackageDependencies.ArrayMax;
            pFVar60 = (pTVar6->AllocatorInstance).Data;
            iVar33 = *piVar2;
            (pFVar48->DependencyData).PackageDependencies.ArrayNum = iVar34;
            if ((iVar34 == 0) && (iVar33 == 0)) {
              *piVar2 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,iVar34,iVar33,&pTVar7->AllocatorInstance,iVar34,piVar2);
              if (iVar34 != 0) {
                memcpy((pTVar7->AllocatorInstance).Data,pFVar60,(longlong)iVar34 * 0xc);
              }
            }
          }
          pTVar8 = &((TVar16.Ptr)->DependencyData).SearchableNameDependencies;
          pTVar9 = &(pFVar48->DependencyData).SearchableNameDependencies;
          if (pTVar9 != pTVar8) {
            DestructItems<FPackageDependencyData::FSearchableNamesDependency,int>
                      ((FSearchableNamesDependency *)(pTVar9->AllocatorInstance).Data,
                       (pFVar48->DependencyData).SearchableNameDependencies.ArrayNum);
            iVar34 = ((TVar16.Ptr)->DependencyData).SearchableNameDependencies.ArrayNum;
            piVar2 = &(pFVar48->DependencyData).SearchableNameDependencies.ArrayMax;
            pFVar18 = (FSearchableNamesDependency *)(pTVar8->AllocatorInstance).Data;
            iVar33 = *piVar2;
            (pFVar48->DependencyData).SearchableNameDependencies.ArrayNum = iVar34;
            if ((iVar34 == 0) && (iVar33 == 0)) {
              *piVar2 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,iVar34,iVar33,&pTVar9->AllocatorInstance,iVar34,piVar2);
              ConstructItems<FPackageDependencyData::FSearchableNamesDependency,FPackageDependencyData::FSearchableNamesDependency,int>
                        ((pTVar9->AllocatorInstance).Data,pFVar18,iVar34);
            }
          }
          this = local_dd08;
          iVar34 = ((TVar16.Ptr)->DependencyData).DependsNodeReservations.NameDependenciesSize;
          iVar33 = ((TVar16.Ptr)->DependencyData).DependsNodeReservations.ManageDependenciesSize;
          iVar58 = ((TVar16.Ptr)->DependencyData).DependsNodeReservations.ReferencersSize;
          (pFVar48->DependencyData).DependsNodeReservations.PackageDependenciesSize =
               ((TVar16.Ptr)->DependencyData).DependsNodeReservations.PackageDependenciesSize;
          (pFVar48->DependencyData).DependsNodeReservations.NameDependenciesSize = iVar34;
          (pFVar48->DependencyData).DependsNodeReservations.ManageDependenciesSize = iVar33;
          (pFVar48->DependencyData).DependsNodeReservations.ReferencersSize = iVar58;
          (pFVar48->DependencyData).bHasPackageData = ((TVar16.Ptr)->DependencyData).bHasPackageData
          ;
          (pFVar48->DependencyData).bHasDependencyData =
               ((TVar16.Ptr)->DependencyData).bHasDependencyData;
          pTVar10 = &local_dd08->NewCachedAssetData;
          local_dd10->HasMarkOfTheWeb = (*(FReadContext **)FVar64.Data)->HasMarkOfTheWeb;
          pFVar60 = (pTVar10->AllocatorInstance).Data;
          if (((pFVar60 <= (FScriptContainerElement *)&local_dd10) &&
              ((FScriptContainerElement *)&local_dd10 <
               pFVar60 + (longlong)(local_dd08->NewCachedAssetData).ArrayMax * 8)) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar28)) {
            pcVar20 = (code *)swi(3);
            EVar31 = (*pcVar20)();
            return EVar31;
          }
          iVar34 = (this->NewCachedAssetData).ArrayNum;
          piVar2 = &(this->NewCachedAssetData).ArrayMax;
          if (iVar34 == *piVar2) {
            iVar34 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar10->AllocatorInstance,piVar2);
          }
          (this->NewCachedAssetData).ArrayNum = iVar34 + 1;
          *(FDiskCachedAssetData **)((pTVar10->AllocatorInstance).Data + (longlong)iVar34 * 8) =
               local_dd10;
          AddToCache(this,(*(FReadContext **)FVar64.Data)->PackageName,local_dd10);
        }
        else {
          this = local_dd08;
          if (-1 < *(int *)(*(longlong *)pFVar56 + 0x34)) break;
        }
        goto LAB_142b25c11;
      }
      bVar28 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1152219097065329055>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x119f,
                          "ReadContext->AssetFileData.Type == EGatherableFileType::PackageFile");
      if (bVar28) {
        pcVar20 = (code *)swi(3);
        EVar31 = (*pcVar20)();
        return EVar31;
      }
    }
LAB_142b25c11:
    if ((UE::AssetDataGather::Private::bBlockPackagesWithMarkOfTheWeb == false) ||
       ((*(FReadContext **)FVar64.Data)->HasMarkOfTheWeb != Max)) {
      TVar16.Ptr = *(FReadContext **)FVar64.Data;
      local_dd00 = local_dd00 + 1;
      if ((&local_c8a8 ==
           (TArray<FString,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> *)
           &(TVar16.Ptr)->CookedPackageNamesWithoutAssetData) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x986,L""), bVar28)) {
        pcVar20 = (code *)swi(3);
        EVar31 = (*pcVar20)();
        return EVar31;
      }
      iVar34 = ((TVar16.Ptr)->CookedPackageNamesWithoutAssetData).ArrayNum;
      if (iVar34 != 0) {
        iVar33 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                           (0x10,8,iVar34,&local_c8a8.AllocatorInstance,&local_c8a8.ArrayNum,
                            &local_c8a8.ArrayMax);
        FVar50 = (ForElementType<FString>)&local_c8a8;
        if (local_c8a8.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
          FVar50 = local_c8a8.AllocatorInstance.SecondaryData;
        }
        memmove((FString *)((longlong)iVar33 * 0x10 + (longlong)FVar50),
                ((TVar16.Ptr)->CookedPackageNamesWithoutAssetData).AllocatorInstance.Data,
                (longlong)iVar34 << 4);
        ((TVar16.Ptr)->CookedPackageNamesWithoutAssetData).ArrayNum = 0;
      }
      TVar16.Ptr = *(FReadContext **)FVar64.Data;
      if ((&local_daa8 ==
           (TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
            *)&(TVar16.Ptr)->AssetDataFromFile) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x986,L""), bVar28)) {
        pcVar20 = (code *)swi(3);
        EVar31 = (*pcVar20)();
        return EVar31;
      }
      iVar34 = ((TVar16.Ptr)->AssetDataFromFile).ArrayNum;
      if (iVar34 != 0) {
        iVar33 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>
                           (8,8,iVar34,&local_daa8.AllocatorInstance,&local_daa8.ArrayNum,
                            &local_daa8.ArrayMax);
        FVar44 = (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)&local_daa8;
        if (local_daa8.AllocatorInstance.SecondaryData !=
            (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
          FVar44 = local_daa8.AllocatorInstance.SecondaryData;
        }
        memmove((TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)
                ((longlong)FVar44 + (longlong)iVar33 * 8),
                ((TVar16.Ptr)->AssetDataFromFile).AllocatorInstance.Data,(longlong)iVar34 << 3);
        ((TVar16.Ptr)->AssetDataFromFile).ArrayNum = 0;
      }
      pFVar46 = &(*(FReadContext **)FVar64.Data)->DependencyData;
      FVar45 = (ForElementType<FPackageDependencyData>)&local_af88;
      if (local_af88.AllocatorInstance.SecondaryData != (ForElementType<FPackageDependencyData>)0x0)
      {
        FVar45 = local_af88.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar45 <= pFVar46) {
        FVar45 = (ForElementType<FPackageDependencyData>)&local_af88;
        if (local_af88.AllocatorInstance.SecondaryData !=
            (ForElementType<FPackageDependencyData>)0x0) {
          FVar45 = local_af88.AllocatorInstance.SecondaryData;
        }
        if ((pFVar46 < (FPackageDependencyData *)
                       ((longlong)local_af88.ArrayMax * 0xe0 + (longlong)FVar45)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar20 = (code *)swi(3);
          EVar31 = (*pcVar20)();
          return EVar31;
        }
      }
      if (local_af88.ArrayNum == local_af88.ArrayMax) {
        local_af88.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageDependencyData>_>
                       (0x8e0,&local_af88.AllocatorInstance,&local_af88.ArrayMax);
      }
      FVar45 = (ForElementType<FPackageDependencyData>)&local_af88;
      if (local_af88.AllocatorInstance.SecondaryData != (ForElementType<FPackageDependencyData>)0x0)
      {
        FVar45 = local_af88.AllocatorInstance.SecondaryData;
      }
      lVar49 = (longlong)local_af88.ArrayNum;
      local_af88.ArrayNum = local_af88.ArrayNum + 1;
      pFVar46 = FPackageDependencyData::FPackageDependencyData
                          ((FPackageDependencyData *)(lVar49 * 0xe0 + (longlong)FVar45),pFVar46);
      (pFVar46->PackageData).Flags =
           -(uint)(((*(FReadContext **)FVar64.Data)->AssetFileData).bIsReadOnly != false) & 4 |
           (pFVar46->PackageData).Flags & 0xfffffffb;
      p_Var57 = local_dcd0;
      goto LAB_142b25fb0;
    }
    pFVar3 = &(*(FReadContext **)FVar64.Data)->AssetFileData;
    FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)(local_d758 + 0x100);
    if (local_d558.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
               local_d558.AllocatorInstance.SecondaryData;
    }
    if ((ulonglong)FVar65 <= pFVar3) {
      FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)(local_d758 + 0x100)
      ;
      if (local_d558.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
        FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
                 local_d558.AllocatorInstance.SecondaryData;
      }
      if ((pFVar3 < (FString *)((longlong)local_d558.ArrayMax * 0x10 + (longlong)FVar65)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar28)) {
        pcVar20 = (code *)swi(3);
        EVar31 = (*pcVar20)();
        return EVar31;
      }
    }
    if (local_d558.ArrayNum == local_d558.ArrayMax) {
      local_d558.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                     (0x810,(ForElementType<FString> *)(local_d758 + 0x100),&local_d558.ArrayMax);
    }
    FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)(local_d758 + 0x100);
    if (local_d558.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FVar65 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)
               local_d558.AllocatorInstance.SecondaryData;
    }
    lVar49 = (longlong)local_d558.ArrayNum;
    local_d558.ArrayNum = local_d558.ArrayNum + 1;
    ::FString::FString((FString *)(lVar49 * 0x10 + (longlong)FVar65),&pFVar3->LocalAbsPath);
    uVar51 = (ulonglong)local_dcc8;
    FVar64.Data = FVar64.Data + 8;
    p_Var57 = local_dcd0;
  } while( true );
  pFVar56 = pFVar56 + 8;
  goto LAB_142b257e0;
}

// TryReserveSaveCache @ 142b28740

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::TryReserveSaveCache
          (FAssetDataGatherer *this,bool *param_1,
          TArray<TTuple<FName,FDiskCachedAssetData_*>,TSizedDefaultAllocator<32>_> *param_2)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  
  *param_1 = false;
  if (((this->IsStopped == (atomic<unsigned_int>)0x0) &&
      (this->bSaveAsyncCacheTriggered != (atomic<bool>)0x0)) && (this->bIsSavingAsyncCache == false)
     ) {
    aVar5 = (this->TickLock).OwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar5 != aVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x13fe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lpCriticalSection = &this->ResultsLock;
    if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    (this->ResultsLock).OwnerThreadId = aVar5;
    *param_1 = (bool)this->bCacheWriteEnabled;
    iVar1 = this->NumUncachedAssetFiles;
    aVar5 = (this->ResultsLock).OwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar5 != aVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*param_1 != false) {
      GetCacheAssetsToSave(this,param_2);
      this->bIsSavingAsyncCache = true;
      this->LastCacheSaveNumUncachedAssetFiles = iVar1;
    }
    LOCK();
    this->bSaveAsyncCacheTriggered = (atomic<bool>)0x0;
    UNLOCK();
  }
  return;
}

// TryTickOnBackgroundThread @ 142b29850

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EGatherStatus __thiscall FAssetDataGatherer::TryTickOnBackgroundThread(FAssetDataGatherer *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EGatherStatus EVar4;
  UAssetRegistryImpl *this_00;
  UClass *pUVar5;
  
  if ((this->bGatherOnGameThreadOnly != (atomic<bool>)0x0) ||
     (this->IsProcessingPaused != (atomic<unsigned_int>)0x0)) {
    return Complete;
  }
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                       ,0x111,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  else {
    this_00 = (UAssetRegistryImpl *)
              (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton
                          + 8))();
    if (this_00 != (UAssetRegistryImpl *)0x0) {
      pUVar5 = Z_Construct_UClass_UAssetRegistryImpl_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) goto LAB_142b298d9;
    }
  }
  this_00 = (UAssetRegistryImpl *)0x0;
LAB_142b298d9:
  EVar4 = UAssetRegistryImpl::TickOnBackgroundThread(this_00);
  return EVar4;
}

// UpdateCacheForSaving @ 142b2c4b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::UpdateCacheForSaving(FAssetDataGatherer *this)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  FAssetRegistryState *pFVar5;
  bool bVar6;
  <lambda_1> local_res8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_98;
  TArrayView<std::nullptr_t,int> local_88;
  code *local_78;
  FAssetRegistryState **local_70;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FAssetRegistryState **local_50;
  FAssetRegistryState *local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_40;
  FAssetDataGatherer *local_38;
  FAssetRegistryState *local_30;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_28;
  FAssetDataGatherer *local_20;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3865,"UpdateCacheForSaving",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
               ,0xf19);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3865);
  }
  lpCriticalSection = &this->TickLock;
  pFVar5 = &(this->AssetRegistry->GuardedData).State;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->TickLock).OwnerThreadId = aVar3;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  TMapBase<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
              *)&this->NewCachedAssetDataMap,&local_98);
  local_40 = &local_98;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAssetDataGatherer::UpdateCacheForSaving'::__l3::<lambda_1>,void,int>
             ::Call;
  local_70 = &local_48;
  local_88.DataPtr = (void **)0x0;
  local_88.ArrayNum = 0;
  local_48 = pFVar5;
  local_38 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_98.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_78,
             local_res8,None,&local_88);
  TMapBase<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FDiskCachedAssetData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData_*,0>_>
              *)&this->DiskCachedAssetDataMap,&local_98);
  local_28 = &local_98;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAssetDataGatherer::UpdateCacheForSaving'::__l3::<lambda_2>,void,int>
             ::Call;
  local_50 = &local_30;
  local_68.DataPtr = (void **)0x0;
  local_68.ArrayNum = 0;
  local_30 = pFVar5;
  local_20 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_98.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_58,
             local_res8,None,&local_68);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  aVar3 = (this->TickLock).OwnerThreadId;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar3 != aVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WaitForIdle @ 142b2da50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAssetDataGatherer::WaitForIdle(FAssetDataGatherer *this,float param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  FAssetDataDiscovery *this_00;
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  FLLMScope local_res8 [5];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_68;
  FMemScope local_60 [7];
  
  lpCriticalSection = &this->ResultsLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar6;
  aVar6 = (this->ResultsLock).OwnerThreadId;
  if (this->bIsIdle == false) {
    aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar6 != aVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x2b,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5001,"FAssetDataGatherer::WaitForIdle",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                 ,0x1389);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5001);
    }
    FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
    FMemScope::FMemScope(local_60,AssetRegistry,true);
    dVar3 = __real_4170000000000000;
    dVar2 = __real_bff0000000000000;
    if (0.0 <= param_1) {
      QueryPerformanceCounter(&local_res18);
      dVar2 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + (double)param_1
              + dVar3;
    }
    this_00 = (this->Discovery).Ptr;
    if (((this_00->Thread != (FRunnableThread *)0x0) ||
        (UE::AssetDataGather::Private::FAssetDataDiscovery::WaitForIdle(this_00,dVar2), dVar2 <= 0.0
        )) || (QueryPerformanceCounter(&local_res20),
              (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3 <= dVar2)
       ) {
      aVar6 = (this->ResultsLock).OwnerThreadId;
      aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar6 == aVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ResultsLock.IsLockedOnCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                             ,0x139a,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar5 = true;
      if (this->Thread == (FRunnableThread *)0x0) goto LAB_142b2dcb7;
      LOCK();
      this->IsGatheringPaused = (atomic<unsigned_int>)((int)this->IsGatheringPaused + 1);
      UNLOCK();
      while( true ) {
        bVar5 = this->Thread == (FRunnableThread *)0x0;
LAB_142b2dcb7:
        InnerTickLoop(this,true,bVar5,dVar2);
        if ((0.0 < dVar2) &&
           (QueryPerformanceCounter(&local_68),
           dVar2 < (double)local_68.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3))
        break;
        if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SynchObject",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0x53,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
        (this->ResultsLock).OwnerThreadId = aVar6;
        aVar6 = (this->ResultsLock).OwnerThreadId;
        if (this->bIsIdle != false) {
          aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
          if ((aVar6 != aVar7) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsLockedOnCurrentThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                                 ,0x2b,L""), bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          break;
        }
        aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
        if ((aVar6 != aVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLockedOnCurrentThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0x2b,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      if (this->Thread != (FRunnableThread *)0x0) {
        if ((this->IsGatheringPaused == (atomic<unsigned_int>)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Owner.IsGatheringPaused > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                               ,0x106d,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        LOCK();
        this->IsGatheringPaused = (atomic<unsigned_int>)((int)this->IsGatheringPaused + -1);
        UNLOCK();
      }
    }
    FMemScope::~FMemScope(local_60);
    FLLMScope::~FLLMScope(local_res8);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar6 != aVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x2b,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// WaitOnPath @ 142b2ec70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::WaitOnPath(FAssetDataGatherer *this,TStringView<wchar_t> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  FPathExistence *pFVar6;
  FPathExistence local_98;
  FString local_78;
  FPathExistence *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FPathExistence *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FString local_38;
  TArrayView<UE::AssetDataGather::Private::FPathExistence,int> local_28;
  TArrayView<UE::AssetDataGather::Private::FPathExistence,int> local_18;
  
  lpCriticalSection = &this->ResultsLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar4;
  aVar4 = (this->ResultsLock).OwnerThreadId;
  if (this->bIsIdle == false) {
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar4 != aVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_48.DataPtr = param_1->DataPtr;
    local_48.Size = param_1->Size;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    NormalizeLocalPath(&local_78,&local_48);
    local_98.LocalAbsPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.LocalAbsPath.Data.ArrayNum = 0;
    local_98.LocalAbsPath.Data.ArrayMax = 0;
    iVar2 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    pFVar6 = (FPathExistence *)
             ::FString::ConstructFromPtrSize
                       (&local_38,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar2);
    if (&local_98 != pFVar6) {
      if (local_98.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.LocalAbsPath.Data.AllocatorInstance.Data);
      }
      local_98.LocalAbsPath.Data.AllocatorInstance.Data =
           (pFVar6->LocalAbsPath).Data.AllocatorInstance.Data;
      (pFVar6->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.LocalAbsPath.Data.ArrayNum = (pFVar6->LocalAbsPath).Data.ArrayNum;
      local_98.LocalAbsPath.Data.ArrayMax = (pFVar6->LocalAbsPath).Data.ArrayMax;
      (pFVar6->LocalAbsPath).Data.ArrayNum = 0;
      (pFVar6->LocalAbsPath).Data.ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_68 = &local_98;
    uStack_60 = 1;
    local_28._12_4_ = uStack_5c;
    local_28.ArrayNum = 1;
    local_98.ModificationTime.Ticks = 0;
    local_98.PathType = MissingParentDir;
    local_98.bIsReadOnly = false;
    local_98.bHasExistenceData = false;
    local_28.DataPtr = local_68;
    UE::AssetDataGather::Private::FAssetDataDiscovery::SetPropertiesAndWait
              ((this->Discovery).Ptr,&local_28,false,false,false);
    local_58 = &local_98;
    uStack_50 = 1;
    local_18._12_4_ = uStack_4c;
    local_18.ArrayNum = 1;
    local_18.DataPtr = local_58;
    WaitOnPathsInternal(this,&local_18);
    if (local_98.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.LocalAbsPath.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar4 != aVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// WaitOnPathsInternal @ 142b2ee90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::WaitOnPathsInternal
          (FAssetDataGatherer *this,
          TArrayView<UE::AssetDataGather::Private::FPathExistence,int> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  EType EVar1;
  void *pvVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  ForAnyElementType FVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  atomic<unsigned_int> aVar8;
  atomic<unsigned_int> aVar9;
  uint uVar10;
  int iVar11;
  FString *pFVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FPathExistence *this_00;
  longlong lVar16;
  FLLMScope local_res8 [2];
  undefined1 local_res10 [16];
  FMemScope local_res20;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  FString local_78;
  undefined1 local_68;
  
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,AssetRegistry,true);
  if (this->Thread != (FRunnableThread *)0x0) {
    LOCK();
    this->IsGatheringPaused = (atomic<unsigned_int>)((int)this->IsGatheringPaused + 1);
    UNLOCK();
  }
  aVar9 = (this->ResultsLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 == aVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x134a,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((&this->TickLock == (FCriticalSectionQueryable *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->TickLock);
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  lpCriticalSection = &this->ResultsLock;
  (this->TickLock).OwnerThreadId = aVar9;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar9;
  IngestDiscoveryResults(this);
  if (*(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) == -1) {
    (this->WaitBatchDirectories).field0_0x0.TypedValue.HashSize = 0;
    pvVar2 = *(void **)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x40);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UE::AssetDataGather::Private::FWaitBatchDirectory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->WaitBatchDirectories);
    *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x10) = 0;
    *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x18) = 0;
    *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x38) = 0;
    *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x4c) = 0;
    *(undefined8 *)&(this->WaitBatchDirectories).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0x40) = 0;
    (this->WaitBatchDirectories).field0_0x0.TypedValue.HashSize = 0;
  }
  this_00 = param_1->DataPtr;
  local_res10._8_8_ = this_00 + param_1->ArrayNum;
  if (this_00 != (FPathExistence *)local_res10._8_8_) {
    do {
      local_b8.Data.ArrayNum = (this_00->LocalAbsPath).Data.ArrayNum;
      lVar16 = (longlong)local_b8.Data.ArrayNum;
      _Src = (this_00->LocalAbsPath).Data.AllocatorInstance.Data;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_b8.Data.ArrayNum == 0) {
        local_b8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                   local_b8.Data.ArrayNum,&local_b8.Data.ArrayMax);
        memcpy(local_b8.Data.AllocatorInstance.Data,_Src,lVar16 * 2);
      }
      UE::AssetDataGather::Private::FPathExistence::LoadExistenceData(this_00);
      EVar1 = this_00->PathType;
      iVar14 = 0;
      if (EVar1 != Directory) {
        local_a8.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
        local_a8.Size = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          local_a8.Size = 0;
        }
        FPathViews::GetPath(&local_98,&local_a8);
        iVar11 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar11 = iVar14;
        }
        iVar13 = iVar11;
        if (local_98.Size < iVar11) {
          iVar13 = local_98.Size;
        }
        iVar15 = iVar14;
        if (0 < iVar13) {
          iVar15 = iVar13;
        }
        ::FString::RemoveAt(&local_b8,iVar15,iVar11 - iVar15,Default);
      }
      if ((*(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = local_b8.Data.ArrayNum + -1;
      FVar4.Data = local_b8.Data.AllocatorInstance.Data;
      if (local_b8.Data.ArrayNum == 0) {
        iVar11 = iVar14;
        FVar4.Data = (FScriptContainerElement *)L"";
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar4.Data);
      iVar11 = TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
                           *)&this->WaitBatchDirectories,uVar10,&local_b8);
      if ((iVar11 == -1) ||
         (lVar16 = (longlong)iVar11 * 0x20 + *(longlong *)&(this->WaitBatchDirectories).field0_0x0,
         lVar16 == 0)) {
        if ((*(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        iVar11 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar11 = iVar14;
        }
        pFVar12 = ::FString::ConstructFromPtrSize
                            (&local_88,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar11);
        if (&local_78 != pFVar12) {
          local_78.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = (pFVar12->Data).ArrayNum;
          local_78.Data.ArrayMax = (pFVar12->Data).ArrayMax;
          (pFVar12->Data).ArrayNum = 0;
          (pFVar12->Data).ArrayMax = 0;
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        local_68 = EVar1 == Directory;
        TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
        ::Emplace<UE::AssetDataGather::Private::FWaitBatchDirectory>
                  ((TSet<UE::AssetDataGather::Private::FWaitBatchDirectory,UE::AssetDataGather::Private::FWaitBatchDirectorySetFuncs,FDefaultSetAllocator>
                    *)&this->WaitBatchDirectories,(FWaitBatchDirectory *)local_res10,
                   (bool *)&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      else {
        *(bool *)(lVar16 + 0x10) = EVar1 == Directory;
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 1;
    } while (this_00 != (FPathExistence *)local_res10._8_8_);
  }
  aVar9 = (this->ResultsLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 != aVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar9 = (this->TickLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 != aVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->TickLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->TickLock);
  bVar6 = -1 < CpuChannel->Enabled;
  dVar5 = __real_bff0000000000000;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4980,"FAssetDataGatherer::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
               ,0x1374);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4980);
    dVar5 = __real_bff0000000000000;
  }
  while( true ) {
    InnerTickLoop(this,true,true,dVar5);
    if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SynchObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x53,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
    (this->ResultsLock).OwnerThreadId = aVar9;
    aVar9 = (this->ResultsLock).OwnerThreadId;
    if (*(int *)((longlong)&(this->WaitBatchDirectories).field0_0x0 + 0xc) == -1) break;
    aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar9 != aVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x2b,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 != aVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (this->Thread != (FRunnableThread *)0x0) {
    if ((this->IsGatheringPaused == (atomic<unsigned_int>)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Owner.IsGatheringPaused > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x106d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    this->IsGatheringPaused = (atomic<unsigned_int>)((int)this->IsGatheringPaused + -1);
    UNLOCK();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// operator() @ 150497520

bool __thiscall `FAssetDataGatherer::TickInternal'::__l76::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1152219097065328929>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<1152219097065328929>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

