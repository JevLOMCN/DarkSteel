// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// operator() @ 142ae5d20

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

void __thiscall
TDefaultDelete<UE::AssetDataGather::Private::FReadContext>::operator()
          (TDefaultDelete<UE::AssetDataGather::Private::FReadContext> *this,FReadContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 != (FReadContext *)0x0) {
    if ((param_1->DirectoryReadTaskData).Object == (FDirectoryReadTaskData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirectoryReadTaskData.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererPrivate.h"
                         ,0xbf,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_1->DirectoryReadTaskData).Object == (FDirectoryReadTaskData *)0x0) {
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
    if (((param_1->DirectoryReadTaskData).Object)->OutstandingReads < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirectoryReadTaskData->OutstandingReads > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGathererPrivate.h"
                         ,0xc0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_1->DirectoryReadTaskData).Object == (FDirectoryReadTaskData *)0x0) {
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
    piVar1 = &((param_1->DirectoryReadTaskData).Object)->OutstandingReads;
    *piVar1 = *piVar1 + -1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->DirectoryReadTaskData).SharedReferenceCount.ReferenceController);
    DestructItems<FString,int>
              ((FString *)(param_1->CookedPackageNamesWithoutAssetData).AllocatorInstance.Data,
               (param_1->CookedPackageNamesWithoutAssetData).ArrayNum);
    pFVar2 = (param_1->CookedPackageNamesWithoutAssetData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FPackageDependencyData::~FPackageDependencyData(&param_1->DependencyData);
    pFVar2 = (param_1->AssetDataFromFile).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_1->AssetFileData).LongPackageName.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_1->AssetFileData).LocalAbsPath.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0x158);
  }
  return;
}

// operator() @ 142ae5e80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TDefaultDelete<UE::AssetDataGather::Private::FFileReadScheduler>::operator()
          (TDefaultDelete<UE::AssetDataGather::Private::FFileReadScheduler> *this,
          FFileReadScheduler *param_1)

{
  TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this_00;
  void *pvVar1;
  
  if (param_1 != (FFileReadScheduler *)0x0) {
    UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Wait
              ((param_1->ReadConcurrencyLimiter).Pimpl.Object,(FTimespan)0x7fffffffffffffff);
    UE::AssetDataGather::Private::FFileReadScheduler::FreeReadTaskLoaders(param_1);
    this_00 = (param_1->ScheduledDirectories).Ptr;
    if (this_00 !=
        (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *)0x0)
    {
      TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode
      ::~FTreeNode(&this_00->Root);
      ::operator_delete(this_00,0x30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->ReadConcurrencyLimiter).Pimpl.SharedReferenceCount.ReferenceController);
    FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>::
    ~FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1>
              ((FLockFreePointerFIFOBase<FNonBufferingReadOnlyArchive,0,1> *)
               &param_1->ReadTaskLoaderFreeList);
    TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
    ::
    ~TMpscQueue<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,FMemory>
              (&param_1->ReadyReadContexts);
    *(undefined4 *)&(param_1->DirectoryReadsToSchedule).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->DirectoryReadsToSchedule).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)param_1);
    ::operator_delete(param_1,0x90);
  }
  return;
}

// operator() @ 142ae5f30

void __thiscall
TDefaultDelete<UE::AssetDataGather::Private::FFilesToSearch>::operator()
          (TDefaultDelete<UE::AssetDataGather::Private::FFilesToSearch> *this,
          FFilesToSearch *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != (FFilesToSearch *)0x0) {
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange(&param_1->LaterRetryFiles,(param_1->LaterRetryFiles).Front,
                  (param_1->LaterRetryFiles).AfterBack);
    (param_1->LaterRetryFiles).Front = 0;
    (param_1->LaterRetryFiles).AfterBack = 0;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate(&param_1->LaterRetryFiles,0);
    pFVar1 = (param_1->LaterRetryFiles).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange(&param_1->BlockingFiles,(param_1->BlockingFiles).Front,
                  (param_1->BlockingFiles).AfterBack);
    (param_1->BlockingFiles).Front = 0;
    (param_1->BlockingFiles).AfterBack = 0;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate(&param_1->BlockingFiles,0);
    pFVar1 = (param_1->BlockingFiles).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange(&param_1->NormalPriorityFiles,(param_1->NormalPriorityFiles).Front,
                  (param_1->NormalPriorityFiles).AfterBack);
    (param_1->NormalPriorityFiles).Front = 0;
    (param_1->NormalPriorityFiles).AfterBack = 0;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate(&param_1->NormalPriorityFiles,0);
    pFVar1 = (param_1->NormalPriorityFiles).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    TRingBuffer<FString,TSizedDefaultAllocator<32>_>::DestructRange
              (&param_1->PriorityDirectories,(param_1->PriorityDirectories).Front,
               (param_1->PriorityDirectories).AfterBack);
    (param_1->PriorityDirectories).Front = 0;
    (param_1->PriorityDirectories).AfterBack = 0;
    TRingBuffer<FString,TSizedDefaultAllocator<32>_>::Reallocate(&param_1->PriorityDirectories,0);
    pFVar1 = (param_1->PriorityDirectories).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0x68);
  }
  return;
}

// operator() @ 142ae6030

void __thiscall
TDefaultDelete<UE::AssetDataGather::Private::FMountDir>::operator()
          (TDefaultDelete<UE::AssetDataGather::Private::FMountDir> *this,FMountDir *param_1)

{
  longlong *plVar1;
  FScanDir *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  
  if (param_1 != (FMountDir *)0x0) {
    UE::AssetDataGather::Private::FScanDir::Shutdown((param_1->Root).Reference);
    pFVar2 = (param_1->Root).Reference;
    if (pFVar2 != (FScanDir *)0x0) {
      (param_1->Root).Reference = (FScanDir *)0x0;
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    pFVar2 = (param_1->Root).Reference;
    if (pFVar2 != (FScanDir *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    pFVar3 = (param_1->LongPackageName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_1->LocalAbsPath).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_1->RelPathsDenyList).HashSize = 0;
    FVar4 = (param_1->RelPathsDenyList).Hash.SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(param_1->RelPathsDenyList).Elements);
    DestructItems<FString,int>
              ((FString *)(param_1->ChildMountPaths).AllocatorInstance.Data,
               (param_1->ChildMountPaths).ArrayNum);
    pFVar3 = (param_1->ChildMountPaths).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(param_1,0xa0);
  }
  return;
}

// operator() @ 142b82650

void __thiscall
TDefaultDelete<UE::AssetRegistry::DependsNode::FGatherDependencyDataScratchpad>::operator()
          (TDefaultDelete<UE::AssetRegistry::DependsNode::FGatherDependencyDataScratchpad> *this,
          FGatherDependencyDataScratchpad *param_1)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  if (param_1 != (FGatherDependencyDataScratchpad *)0x0) {
    (param_1->ModifiedDependNodes).HashSize = 0;
    FVar1 = (param_1->ModifiedDependNodes).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FDependsNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(param_1->ModifiedDependNodes).Elements);
    *(undefined4 *)&(param_1->CachedDepToRedirect).field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->CachedDepToRedirect).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->CachedDepToRedirect);
    *(undefined4 *)&(param_1->AssetNameToConstructDataMap).field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->AssetNameToConstructDataMap).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)param_1);
    ::operator_delete(param_1,0xf0);
  }
  return;
}

