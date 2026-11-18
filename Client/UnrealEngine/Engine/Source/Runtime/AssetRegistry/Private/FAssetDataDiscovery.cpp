// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 47

// FAssetDataDiscovery @ 142ad44c0

FAssetDataDiscovery * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FAssetDataDiscovery(FAssetDataDiscovery *this)

{
  atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
  aVar1;
  atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*> aVar2;
  FConfigFile *this_00;
  
  this->_padding_ = (longlong)&___7FAssetDataDiscovery_Private_AssetDataGather_UE__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TreeLock,4000);
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  (this->TickOwner).OwnerThreadId = (atomic<unsigned_int>)0x0;
  (this->TickOwner).bHasOwner = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResultsLock,4000);
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  (this->LongPackageNamesDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LongPackageNamesDenyList).ArrayNum = 0;
  (this->LongPackageNamesDenyList).ArrayMax = 0;
  (this->MountRelativePathsDenyList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountRelativePathsDenyList).ArrayNum = 0;
  (this->MountRelativePathsDenyList).ArrayMax = 0;
  this->Thread = (FRunnableThread *)0x0;
  this->bIsIdle = (atomic<bool>)0x0;
  this->bPriorityDirty = (atomic<bool>)0x0;
  this->IsStopped = (atomic<unsigned_int>)0x0;
  this->IsPaused = (atomic<unsigned_int>)0x0;
  (this->NumDirectoriesToScan).Counter = 0;
  FEventRef::FEventRef(&this->PriorityDataUpdated,ManualReset);
  (this->DiscoveredDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiscoveredDirectories).ArrayNum = 0;
  (this->DiscoveredDirectories).ArrayMax = 0;
  (this->DiscoveredFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiscoveredFiles).ArrayNum = 0;
  (this->DiscoveredFiles).ArrayMax = 0;
  (this->DiscoveredSingleFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiscoveredSingleFiles).ArrayNum = 0;
  (this->DiscoveredSingleFiles).ArrayMax = 0;
  this->CurrentDiscoveryTime = 0.0;
  this->NumDiscoveredFiles = 0;
  this->CumulativeDiscoveredFiles = 0;
  this->CumulativeDiscoveryTime = 0.0;
  this->NumCachedDirectories = 0;
  this->NumUncachedDirectories = 0;
  (this->MountDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountDirs).ArrayNum = 0;
  (this->MountDirs).ArrayMax = 0;
  (this->PriorityScanDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PriorityScanDirs).ArrayNum = 0;
  (this->PriorityScanDirs).ArrayMax = 0;
  (this->DirToScanDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirToScanDatas).ArrayNum = 0;
  (this->DirToScanDatas).ArrayMax = 0;
  (this->DirToScanBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirToScanBuffers).ArrayNum = 0;
  (this->DirToScanBuffers).ArrayMax = 0;
  (this->Cache).CachedVolumes.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cache).CachedVolumes.Pairs.ArrayNum = 0;
  (this->Cache).CachedVolumes.Pairs.ArrayMax = 0;
  (this->Cache).ScanQueueDirFullDatas.Head =
       (atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
        )0x0;
  aVar1 = (atomic<TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::FNode_*>
           )FMemory::Malloc(0x58,8);
  *(undefined8 *)aVar1 = 0;
  (this->Cache).ScanQueueDirFullDatas.Head = aVar1;
  (this->Cache).ScanQueueDirFullDatas.Tail = (FNode *)aVar1;
  (this->Cache).ScanQueueDirHandles.Head =
       (atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*>)0x0
  ;
  aVar2 = (atomic<TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::FNode_*>)
          FMemory::Malloc(0x30,8);
  *(undefined8 *)aVar2 = 0;
  (this->Cache).ScanQueueDirHandles.Head = aVar2;
  (this->Cache).ScanQueueDirHandles.Tail = (FNode *)aVar2;
  (this->Cache).bInitialized = false;
  (this->Cache).WriteEnabled = Never;
  FGatherSettings::Initialize(&GGatherSettings);
  this->bAsyncEnabled = GGatherSettings.bAsyncEnabled;
  this_00 = FConfigCacheIni::FindConfigFile(GConfig,&GEngineIni);
  if (this_00 != (FConfigFile *)0x0) {
    FConfigFile::GetArray
              (this_00,L"AssetRegistry",L"BlacklistPackagePathScanFilters",
               &this->LongPackageNamesDenyList);
    FConfigFile::GetArray
              (this_00,L"AssetRegistry",L"BlacklistContentSubPathScanFilters",
               &this->MountRelativePathsDenyList);
  }
  (**(code **)(((this->PriorityDataUpdated).Event)->_padding_ + 0x10))();
  return this;
}

// ~FAssetDataDiscovery @ 142ad96a0

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::~FAssetDataDiscovery(FAssetDataDiscovery *this)

{
  int *piVar1;
  TArray<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FRunnableThread *pFVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FAssetDataDiscovery_Private_AssetDataGather_UE__6B_;
  LOCK();
  this->IsStopped = (atomic<unsigned_int>)((int)this->IsStopped + 1);
  UNLOCK();
  if (this->Thread != (FRunnableThread *)0x0) {
    (**(code **)(this->Thread->_padding_ + 0x20))();
    pFVar5 = this->Thread;
    if (pFVar5 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  pTVar2 = &this->MountDirs;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->MountDirs).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->MountDirs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar3) break;
    *(undefined8 *)(*(longlong *)pFVar7 + 0x90) = 0;
    pFVar6 = *(ForAnyElementType **)pFVar7;
    DestructItems<FString,int>((FString *)pFVar6->Data,*(int *)&pFVar6[1].Data);
    piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
    *(undefined4 *)&pFVar6[1].Data = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,pFVar6,0,piVar1);
    }
    pFVar7 = pFVar7 + 8;
  }
  DestructItems<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,int>
            ((TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>
              *)(pTVar2->AllocatorInstance).Data,(this->MountDirs).ArrayNum);
  piVar1 = &(this->MountDirs).ArrayMax;
  (this->MountDirs).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>::
  ~TMpscQueue<UE::AssetDataGather::Private::FDiscoveredSubDirData,FMemory>
            (&(this->Cache).ScanQueueDirHandles);
  TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>::
  ~TMpscQueue<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>,FMemory>
            (&(this->Cache).ScanQueueDirFullDatas);
  DestructItems<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int>
            ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
             (this->Cache).CachedVolumes.Pairs.AllocatorInstance.Data,
             (this->Cache).CachedVolumes.Pairs.ArrayNum);
  pFVar3 = (this->Cache).CachedVolumes.Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DirToScanBuffers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanData,int>
            ((FDirToScanData *)(this->DirToScanDatas).AllocatorInstance.Data,
             (this->DirToScanDatas).ArrayNum);
  pFVar3 = (this->DirToScanDatas).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::AssetDataGather::Private::FAssetDataDiscovery::FPriorityScanDirData,int>
            ((FPriorityScanDirData *)(this->PriorityScanDirs).AllocatorInstance.Data,
             (this->PriorityScanDirs).ArrayNum);
  pFVar3 = (this->PriorityScanDirs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,int>
            ((TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>
              *)(pTVar2->AllocatorInstance).Data,(this->MountDirs).ArrayNum);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::AssetDataGather::Private::FGatheredPathData,int>
            ((FGatheredPathData *)(this->DiscoveredSingleFiles).AllocatorInstance.Data,
             (this->DiscoveredSingleFiles).ArrayNum);
  pFVar3 = (this->DiscoveredSingleFiles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult,int>
            ((FDirectoryResult *)(this->DiscoveredFiles).AllocatorInstance.Data,
             (this->DiscoveredFiles).ArrayNum);
  pFVar3 = (this->DiscoveredFiles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FString,int>
            ((FString *)(this->DiscoveredDirectories).AllocatorInstance.Data,
             (this->DiscoveredDirectories).ArrayNum);
  pFVar3 = (this->DiscoveredDirectories).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FEventRef::~FEventRef(&this->PriorityDataUpdated);
  DestructItems<FString,int>
            ((FString *)(this->MountRelativePathsDenyList).AllocatorInstance.Data,
             (this->MountRelativePathsDenyList).ArrayNum);
  pFVar3 = (this->MountRelativePathsDenyList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FString,int>
            ((FString *)(this->LongPackageNamesDenyList).AllocatorInstance.Data,
             (this->LongPackageNamesDenyList).ArrayNum);
  pFVar3 = (this->LongPackageNamesDenyList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResultsLock);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TreeLock);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 142ae3560

void __thiscall
`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l22::<lambda_2>::operator()
          (void *this,FScanDirAndParentData *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  FMountDir *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  FScanDir *pFVar10;
  FScanDirAndParentData *pFVar11;
  uint uVar12;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  iVar7 = **(int **)((longlong)this + 8);
  iVar2 = *(int *)(*(longlong *)this + 0x128);
  if (iVar2 == iVar7 || iVar2 < iVar7) {
    if ((iVar2 != iVar7) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirToScanDatas.Num() == DirToScanDatasNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x732,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)this;
    iVar7 = *(int *)(lVar3 + 0x128);
    if (iVar7 == *(int *)(lVar3 + 300)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x880,(ForAnyElementType *)(lVar3 + 0x120),(int *)(lVar3 + 300));
    }
    *(int *)(lVar3 + 0x128) = iVar7 + 1;
    puVar9 = (undefined8 *)((longlong)iVar7 * 0x80 + *(longlong *)(lVar3 + 0x120));
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
  }
  lVar3 = *(longlong *)this;
  pFVar10 = (param_1->ScanDir).Reference;
  uVar12 = **(uint **)((longlong)this + 8);
  **(uint **)((longlong)this + 8) = uVar12 + 1;
  uVar8 = 0;
  if ((int)uVar12 < *(int *)(lVar3 + 0x128)) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar11 = (FScanDirAndParentData *)((longlong)(int)uVar12 * 0x80 + *(longlong *)(lVar3 + 0x120));
  *(FScanDir **)&pFVar11[1].ParentData = pFVar11[1].ScanDir.Reference;
  *(FScanDir **)&pFVar11[3].ParentData = pFVar11[3].ScanDir.Reference;
  pFVar11[7].ScanDir.Reference = (FScanDir *)0x0;
  pFVar11[7].ParentData.bIsOnAllowList = false;
  (*(undefined8 **)((longlong)this + 0x10))[1] = **(undefined8 **)((longlong)this + 0x10);
  pFVar4 = pFVar10->MountDir;
  pFVar10->bScanInFlight = true;
  if ((pFVar4 == (FMountDir *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MountDir",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x73b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::AssetDataGather::Private::FScanDir::AppendMountRelPath
            (pFVar10,*(TStringBuilderBase<wchar_t> **)((longlong)this + 0x10));
  iVar7 = (pFVar4->LocalAbsPath).Data.ArrayNum;
  uVar12 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar12 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)(pFVar11 + 1),
             (wchar_t *)(pFVar4->LocalAbsPath).Data.AllocatorInstance.Data,uVar12);
  local_68 = (wchar_t *)**(longlong **)((longlong)this + 0x10);
  iStack_60 = (int)((*(longlong **)((longlong)this + 0x10))[1] - (longlong)local_68 >> 1);
  local_48._12_4_ = uStack_5c;
  local_48.Size = iStack_60;
  local_48.DataPtr = local_68;
  FPathViews::AppendPath((TStringBuilderBase<wchar_t> *)(pFVar11 + 1),&local_48);
  iVar2 = (pFVar4->LongPackageName).Data.ArrayNum;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)(pFVar11 + 3),
             (wchar_t *)(pFVar4->LongPackageName).Data.AllocatorInstance.Data,iVar7);
  local_58 = (wchar_t *)**(longlong **)((longlong)this + 0x10);
  iStack_50 = (int)((*(longlong **)((longlong)this + 0x10))[1] - (longlong)local_58 >> 1);
  local_38._12_4_ = uStack_4c;
  local_38.Size = iStack_50;
  local_38.DataPtr = local_58;
  FPathViews::AppendPath((TStringBuilderBase<wchar_t> *)(pFVar11 + 3),&local_38);
  local_88.DataPtr = (wchar_t *)pFVar11[1].ScanDir.Reference;
  local_88._12_4_ = uStack_9c;
  local_88.Size = (int)(*(longlong *)&pFVar11[1].ParentData - (longlong)local_88.DataPtr >> 1);
  bVar6 = FPathViews::HasRedundantTerminatingSeparator(&local_88);
  if (bVar6) {
    do {
      if (((int)(*(longlong *)&pFVar11[1].ParentData - (longlong)pFVar11[1].ScanDir.Reference >> 1)
           < 1) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount <= Len()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                       ,0xe8,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(longlong *)&pFVar11[1].ParentData = *(longlong *)&pFVar11[1].ParentData + -2;
      local_88.DataPtr = (wchar_t *)pFVar11[1].ScanDir.Reference;
      local_88.Size = (int)(*(longlong *)&pFVar11[1].ParentData - (longlong)local_88.DataPtr >> 1);
      bVar6 = FPathViews::HasRedundantTerminatingSeparator(&local_88);
    } while (bVar6);
  }
  local_78.DataPtr = (wchar_t *)pFVar11[3].ScanDir.Reference;
  local_78._12_4_ = uStack_8c;
  local_78.Size = (int)(*(longlong *)&pFVar11[3].ParentData - (longlong)local_78.DataPtr >> 1);
  bVar6 = FPathViews::HasRedundantTerminatingSeparator(&local_78);
  if (bVar6) {
    do {
      if (((int)(*(longlong *)&pFVar11[3].ParentData - (longlong)pFVar11[3].ScanDir.Reference >> 1)
           < 1) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount <= Len()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                       ,0xe8,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(longlong *)&pFVar11[3].ParentData = *(longlong *)&pFVar11[3].ParentData + -2;
      local_78.DataPtr = (wchar_t *)pFVar11[3].ScanDir.Reference;
      local_78.Size = (int)(*(longlong *)&pFVar11[3].ParentData - (longlong)local_78.DataPtr >> 1);
      bVar6 = FPathViews::HasRedundantTerminatingSeparator(&local_78);
    } while (bVar6);
  }
  if (pFVar11 != param_1) {
    pFVar10 = (pFVar11->ScanDir).Reference;
    (pFVar11->ScanDir).Reference = (param_1->ScanDir).Reference;
    (param_1->ScanDir).Reference = (FScanDir *)0x0;
    if (pFVar10 != (FScanDir *)0x0) {
      plVar1 = &pFVar10->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar10 = (FScanDir *)0x0;
        }
        if (pFVar10 != (FScanDir *)0x0) {
          (**(code **)pFVar10->_padding_)(pFVar10,1);
        }
      }
    }
  }
  bVar6 = (param_1->ParentData).bMatchesDenyList;
  (pFVar11->ParentData).bIsOnAllowList = (param_1->ParentData).bIsOnAllowList;
  (pFVar11->ParentData).bMatchesDenyList = bVar6;
  (pFVar11->ParentData).bIgnoreDenyList = (param_1->ParentData).bIgnoreDenyList;
  return;
}

// operator() @ 142ae55f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>::operator()
          (void *this,FDirToScanBuffer *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FPlatformFileManager *pFVar7;
  IPlatformFile *pIVar8;
  wchar_t *pwVar9;
  FCachedDirScanDir *pFVar10;
  FString *pFVar11;
  FTelemetryRouter *this_00;
  IFileManager *pIVar12;
  longlong lVar13;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  undefined1 local_198 [8];
  wchar_t *local_190;
  undefined8 local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  FCachedDirScanDir *local_130;
  code *local_128;
  longlong **local_120;
  code *local_118;
  undefined1 *local_110;
  TMemoryView<void_const_> local_108;
  code *local_f8;
  longlong **local_f0;
  FString local_e8;
  FGuid local_d8;
  FCachedDirScanDir local_c8;
  FCachedDirScanDir local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  lVar13 = *(longlong *)this;
  iVar1 = *(int *)(lVar13 + 0x128);
  uVar6 = 0;
  if (param_2 < iVar1) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_1a8 = (longlong)param_2, local_1a0 = (longlong)iVar1,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar13 = *(longlong *)(lVar13 + 0x120) + (longlong)param_2 * 0x80;
  if (*(char *)(lVar13 + 0x78) != '\0') {
    return;
  }
  if (param_1->bAbort != false) {
    return;
  }
  if (*(char *)(*(longlong *)this + 0x9a) != '\0') {
    param_1->bAbort = true;
    return;
  }
  local_130 = &local_88;
  local_88.JournalHandle.Bytes[0x10] = FileJournalFileHandleInvalid.Bytes[0x10];
  local_88.JournalHandle.Bytes[0x11] = FileJournalFileHandleInvalid.Bytes[0x11];
  local_88.JournalHandle.Bytes[0x12] = FileJournalFileHandleInvalid.Bytes[0x12];
  local_88.JournalHandle.Bytes[0x13] = FileJournalFileHandleInvalid.Bytes[0x13];
  local_140 = *(longlong *)this;
  local_88.SubDirRelPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SubDirRelPaths.ArrayNum = 0;
  local_88.SubDirRelPaths.ArrayMax = 0;
  local_88.Files.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Files.ArrayNum = 0;
  local_88.Files.ArrayMax = 0;
  local_88.JournalHandle.Bytes[0] = FileJournalFileHandleInvalid.Bytes[0];
  local_88.JournalHandle.Bytes[1] = FileJournalFileHandleInvalid.Bytes[1];
  local_88.JournalHandle.Bytes[2] = FileJournalFileHandleInvalid.Bytes[2];
  local_88.JournalHandle.Bytes[3] = FileJournalFileHandleInvalid.Bytes[3];
  local_88.JournalHandle.Bytes[4] = FileJournalFileHandleInvalid.Bytes[4];
  local_88.JournalHandle.Bytes[5] = FileJournalFileHandleInvalid.Bytes[5];
  local_88.JournalHandle.Bytes[6] = FileJournalFileHandleInvalid.Bytes[6];
  local_88.JournalHandle.Bytes[7] = FileJournalFileHandleInvalid.Bytes[7];
  local_88.JournalHandle.Bytes[8] = FileJournalFileHandleInvalid.Bytes[8];
  local_88.JournalHandle.Bytes[9] = FileJournalFileHandleInvalid.Bytes[9];
  local_88.JournalHandle.Bytes[10] = FileJournalFileHandleInvalid.Bytes[10];
  local_88.JournalHandle.Bytes[0xb] = FileJournalFileHandleInvalid.Bytes[0xb];
  local_88.JournalHandle.Bytes[0xc] = FileJournalFileHandleInvalid.Bytes[0xc];
  local_88.JournalHandle.Bytes[0xd] = FileJournalFileHandleInvalid.Bytes[0xd];
  local_88.JournalHandle.Bytes[0xe] = FileJournalFileHandleInvalid.Bytes[0xe];
  local_88.JournalHandle.Bytes[0xf] = FileJournalFileHandleInvalid.Bytes[0xf];
  local_88.bCacheValid = false;
  local_88.bIsReparsePoint.bIsSet = false;
  local_88.bIsInsideReparsePoint.bIsSet = false;
  local_138 = lVar13;
  if (*(char *)(local_140 + 0x171) != '\0') {
    pFVar7 = FPlatformFileManager::Get();
    pIVar8 = FPlatformFileManager::GetPlatformFile(pFVar7);
    local_150 = &local_140;
    local_120 = &local_150;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>::operator()'::__l15::<lambda_2>,bool,wchar_t_const_*,FFileJournalData_const_&>
                ::Call;
    pcVar3 = *(code **)((longlong)*pIVar8 + 0x170);
    pwVar9 = TStringBuilderBase<wchar_t>::ToString((TStringBuilderBase<wchar_t> *)(lVar13 + 0x10));
    cVar5 = (*pcVar3)(pIVar8,pwVar9,&local_128,0);
    if (cVar5 != '\0') {
      lVar2 = *(longlong *)this;
      pFVar10 = UE::AssetDataGather::Private::FCachedDirScanDir::FCachedDirScanDir
                          (&local_c8,&local_88);
      local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.Data.ArrayNum = 0;
      local_180.Data.ArrayMax = 0;
      pFVar11 = ::FString::ConstructFromPtrSize
                          (&local_e8,*(wchar_t **)(lVar13 + 0x10),
                           (int)(*(longlong *)(lVar13 + 0x18) -
                                 (longlong)*(wchar_t **)(lVar13 + 0x10) >> 1));
      if (&local_180 != pFVar11) {
        local_180.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_180.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_180.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      UE::AssetDataGather::Private::FAssetDataDiscoveryCache::QueueAdd
                ((FAssetDataDiscoveryCache *)(lVar2 + 0x140),&local_180,pFVar10);
      goto LAB_142ae5967;
    }
    if (bRunOnce != (atomic<bool>)0x0) {
      local_190 = (wchar_t *)0x0;
      local_188 = 0;
      pFVar7 = FPlatformFileManager::Get();
      pIVar8 = FPlatformFileManager::GetPlatformFile(pFVar7);
      local_110 = local_198;
      local_118 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>::operator()'::__l22::<lambda_3>,bool,wchar_t_const_*,FFileJournalData_const_&>
                  ::Call;
      pcVar3 = *(code **)((longlong)*pIVar8 + 0x170);
      pwVar9 = TStringBuilderBase<wchar_t>::ToString((TStringBuilderBase<wchar_t> *)(lVar13 + 0x10))
      ;
      cVar5 = (*pcVar3)(pIVar8,pwVar9,&local_118,&local_190);
      if (cVar5 == '\0') {
        LOCK();
        bRunOnce = (atomic<bool>)0x1;
        UNLOCK();
        if (2 < (byte)LogAssetRegistry._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_170.Data.ArrayNum = 0;
        local_170.Data.ArrayMax = 0;
        local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.Data.ArrayNum = 0;
        local_160.Data.ArrayMax = 0;
        pwVar9 = TStringBuilderBase<wchar_t>::ToString
                           ((TStringBuilderBase<wchar_t> *)(lVar13 + 0x10));
        ::FString::operator=(&local_170,pwVar9);
        uVar6 = (int)local_188 - 1;
        if ((int)local_188 == 0) {
          uVar6 = 0;
        }
        ::FString::AssignRange(&local_160,local_190,uVar6);
        this_00 = FTelemetryRouter::Get();
        local_108.Data = &local_170;
        local_108.Size = 0x20;
        local_d8 = UE::Telemetry::AssetRegistry::FFileJournalErrorTelemetry::TelemetryID;
        FTelemetryRouter::ProvideTelemetryInternal(this_00,&local_d8,&local_108);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      if (local_190 != (wchar_t *)0x0) {
        FMemory::Free(local_190);
      }
    }
  }
  pIVar12 = IFileManager::Get();
  local_148 = &local_140;
  local_f0 = &local_148;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>::operator()'::__l37::<lambda_4>,bool,wchar_t_const_*,FFileStatData_const_&>
             ::Call;
  pcVar3 = *(code **)((longlong)*pIVar12 + 0xb0);
  pwVar9 = TStringBuilderBase<wchar_t>::ToString((TStringBuilderBase<wchar_t> *)(lVar13 + 0x10));
  (*pcVar3)(pIVar12,pwVar9,&local_f8);
LAB_142ae5967:
  *(undefined1 *)(lVar13 + 0x78) = 1;
  DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
            ((FCachedDirScanFile *)local_88.Files.AllocatorInstance.Data,local_88.Files.ArrayNum);
  if ((FCachedDirScanFile *)local_88.Files.AllocatorInstance.Data != (FCachedDirScanFile *)0x0) {
    FMemory::Free(local_88.Files.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.SubDirRelPaths.AllocatorInstance.Data,
             local_88.SubDirRelPaths.ArrayNum);
  if (local_88.SubDirRelPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubDirRelPaths.AllocatorInstance.Data);
  }
  return;
}

// AddDiscovered @ 142ae8c30

/* WARNING: Removing unreachable block (ram,0x000142ae8dea) */
/* WARNING: Removing unreachable block (ram,0x000142ae8f37) */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::AddDiscovered
          (FAssetDataDiscovery *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData_const_,int> *param_3,
          TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData_const_,int> *param_4)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  int iVar8;
  atomic<unsigned_int> aVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  FDiscoveredPathData *pFVar12;
  FDiscoveredPathData *pFVar13;
  FString local_98;
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData_const_,int> local_68;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->ResultsLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar6;
  if (bIgnoreEmptyDirectories == false) {
    pFVar12 = param_3->DataPtr;
    pFVar13 = pFVar12 + param_3->ArrayNum;
    if (pFVar12 != pFVar13) {
      pTVar2 = &this->DiscoveredDirectories;
      uVar4 = local_80;
      do {
        local_80 = uVar4;
        iVar7 = (pFVar12->LongPackageName).Data.ArrayNum;
        pFVar11 = (pFVar12->LongPackageName).Data.AllocatorInstance.Data;
        local_88.Data = (FScriptContainerElement *)0x0;
        local_80 = CONCAT44(local_80._4_4_,iVar7);
        if (iVar7 == 0) {
          local_80 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,&local_88,iVar7,(int *)((longlong)&local_80 + 4));
          memcpy(local_88.Data,pFVar11,(longlong)iVar7 * 2);
        }
        pFVar11 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             pFVar11 + (longlong)(this->DiscoveredDirectories).ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->DiscoveredDirectories).ArrayNum;
        if (iVar7 == (this->DiscoveredDirectories).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,
                             &(this->DiscoveredDirectories).ArrayMax);
        }
        (this->DiscoveredDirectories).ArrayNum = iVar7 + 1;
        pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar11 = 0;
        *(FScriptContainerElement **)pFVar11 = local_88.Data;
        *(undefined4 *)(pFVar11 + 8) = (undefined4)local_80;
        *(undefined4 *)(pFVar11 + 0xc) = local_80._4_4_;
        local_80 = 0;
        uVar4 = local_80;
        local_80 = 0;
        local_88.Data = (FScriptContainerElement *)0x0;
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != pFVar13);
    }
  }
  else {
    local_48 = param_2->DataPtr;
    uStack_40 = *(undefined8 *)&param_2->Size;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar2 = &this->DiscoveredDirectories;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    pFVar10 = ::FString::ConstructFromPtrSize
                        (&local_78,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    if (&local_98 != pFVar10) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pFVar11 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 <
         pFVar11 + (longlong)(this->DiscoveredDirectories).ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (this->DiscoveredDirectories).ArrayNum;
    piVar1 = &(this->DiscoveredDirectories).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DiscoveredDirectories).ArrayNum = iVar7 + 1;
    pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_98.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar11 + 8) = local_98.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
  }
  iVar7 = param_4->ArrayNum;
  if (iVar7 != 0) {
    iVar8 = (this->DiscoveredFiles).ArrayNum;
    piVar1 = &(this->DiscoveredFiles).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->DiscoveredFiles).AllocatorInstance,piVar1);
    }
    local_68.DataPtr = param_4->DataPtr;
    local_68.ArrayNum = param_4->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_58.DataPtr = param_1->DataPtr;
    local_58.Size = param_1->Size;
    local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
    (this->DiscoveredFiles).ArrayNum = iVar8 + 1;
    FDirectoryResult::FDirectoryResult
              ((FDirectoryResult *)
               ((this->DiscoveredFiles).AllocatorInstance.Data + (longlong)iVar8 * 0x20),&local_58,
               &local_68);
    this->NumDiscoveredFiles = this->NumDiscoveredFiles + iVar7;
  }
  aVar6 = (this->ResultsLock).OwnerThreadId;
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar6 != aVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142ae9018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddDiscoveredFile @ 142ae9030

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::AddDiscoveredFile
          (FAssetDataDiscovery *this,FDiscoveredPathData *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  atomic<unsigned_int> aVar6;
  FScriptContainerElement *pFVar7;
  
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
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar4;
  piVar1 = &(this->DiscoveredSingleFiles).ArrayMax;
  iVar5 = (this->DiscoveredSingleFiles).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->DiscoveredSingleFiles).AllocatorInstance,piVar1);
  }
  (this->DiscoveredSingleFiles).ArrayNum = iVar5 + 1;
  pFVar7 = (this->DiscoveredSingleFiles).AllocatorInstance.Data + (longlong)iVar5 * 0x30;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = (param_1->LocalAbsPath).Data.AllocatorInstance.Data;
  (param_1->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = (param_1->LocalAbsPath).Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = (param_1->LocalAbsPath).Data.ArrayMax;
  (param_1->LocalAbsPath).Data.ArrayNum = 0;
  (param_1->LocalAbsPath).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar7 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x10) =
       (param_1->LongPackageName).Data.AllocatorInstance.Data;
  (param_1->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 0x18) = (param_1->LongPackageName).Data.ArrayNum;
  *(int *)(pFVar7 + 0x1c) = (param_1->LongPackageName).Data.ArrayMax;
  (param_1->LongPackageName).Data.ArrayNum = 0;
  (param_1->LongPackageName).Data.ArrayMax = 0;
  *(long64 *)(pFVar7 + 0x20) = (param_1->PackageTimestamp).Ticks;
  pFVar7[0x28] = (FScriptContainerElement)param_1->bIsReadOnly;
  pFVar7[0x29] = (FScriptContainerElement)param_1->Type;
  this->NumDiscoveredFiles = this->NumDiscoveredFiles + 1;
  aVar4 = (this->ResultsLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar4 != aVar6) {
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
                    /* WARNING: Could not recover jumptable at 0x000142ae9183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddMountPoint @ 142ae97a0

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::AddMountPoint
          (FAssetDataDiscovery *this,FString *param_1,TStringView<wchar_t> *param_2,bool *param_3)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  bool local_res8 [8];
  double local_res18 [2];
  TStringView<wchar_t> local_28;
  
  aVar4 = (this->ResultsLock).OwnerThreadId;
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar4 == aVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xb96,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &this->TreeLock;
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
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  (this->TreeLock).OwnerThreadId = aVar4;
  local_res8[0] = false;
  AddMountPointInternal(this,param_1,&local_28,local_res8);
  if (local_res8[0] == false) {
    local_res18[0] = __real_bff0000000000000;
    SetIsIdle(this,false,local_res18);
  }
  aVar4 = (this->TreeLock).OwnerThreadId;
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
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142ae98b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddMountPointInternal @ 142ae9a70

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::AddMountPointInternal
          (FAssetDataDiscovery *this,FString *param_1,TStringView<wchar_t> *param_2,bool *param_3)

{
  FScriptContainerElement *pFVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  atomic<unsigned_int> aVar8;
  int iVar9;
  FMountDir *pFVar10;
  FMountDir *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TStringView<wchar_t> *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_178;
  undefined8 local_170;
  longlong local_168;
  FScriptContainerElement *local_160;
  int iStack_158;
  undefined4 uStack_154;
  double local_150;
  TStringView<wchar_t> local_148;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  aVar2 = (this->TreeLock).OwnerThreadId;
  local_res18 = param_2;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar2 != aVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TreeLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xba2,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *param_3 = false;
  local_138 = (param_1->Data).AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  iStack_130 = iVar3 + -1;
  if (iVar3 == 0) {
    iStack_130 = 0;
  }
  local_c8._12_4_ = uStack_12c;
  local_c8.Size = iStack_130;
  local_c8.DataPtr = (wchar_t *)local_138;
  pFVar10 = FindMountPoint(this,&local_c8);
  if (pFVar10 == (FMountDir *)0x0) {
    pFVar13 = (this->MountDirs).AllocatorInstance.Data;
    uVar6 = local_148._12_4_;
    iVar3 = (this->MountDirs).ArrayNum;
    local_178.Data = (FScriptContainerElement *)0x0;
    pFVar1 = pFVar13 + (longlong)iVar3 * 8;
    local_170 = 0;
    pFVar10 = (FMountDir *)0x0;
    while( true ) {
      if ((this->MountDirs).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar1) break;
      local_128 = (param_1->Data).AllocatorInstance.Data;
      iVar9 = (param_1->Data).ArrayNum;
      iStack_120 = iVar9 + -1;
      if (iVar9 == 0) {
        iStack_120 = 0;
      }
      local_b8._12_4_ = uStack_11c;
      local_b8.Size = iStack_120;
      local_118 = *(wchar_t **)(*(longlong *)pFVar13 + 0x60);
      iVar9 = *(int *)(*(longlong *)pFVar13 + 0x68);
      iStack_110 = iVar9 + -1;
      if (iVar9 == 0) {
        iStack_110 = 0;
      }
      local_a8._12_4_ = uStack_10c;
      local_a8.Size = iStack_110;
      local_b8.DataPtr = (wchar_t *)local_128;
      local_a8.DataPtr = local_118;
      bVar7 = FPathViews::IsParentPathOf(&local_a8,&local_b8);
      pFVar11 = *(FMountDir **)pFVar13;
      if (bVar7) {
        pFVar13 = pFVar13 + 8;
        pFVar10 = pFVar11;
      }
      else {
        iVar9 = (pFVar11->LocalAbsPath).Data.ArrayNum;
        local_160 = (pFVar11->LocalAbsPath).Data.AllocatorInstance.Data;
        uStack_154 = uVar6;
        iStack_158 = iVar9 + -1;
        if (iVar9 == 0) {
          iStack_158 = 0;
        }
        local_108 = (param_1->Data).AllocatorInstance.Data;
        local_98._12_4_ = uVar6;
        local_98.Size = iStack_158;
        iVar9 = (param_1->Data).ArrayNum;
        iStack_100 = iVar9 + -1;
        if (iVar9 == 0) {
          iStack_100 = 0;
        }
        local_88._12_4_ = uStack_fc;
        local_88.Size = iStack_100;
        local_98.DataPtr = (wchar_t *)local_160;
        local_88.DataPtr = (wchar_t *)local_108;
        bVar7 = FPathViews::IsParentPathOf(&local_88,&local_98);
        if (bVar7) {
          lVar4 = *(longlong *)pFVar13;
          if ((*(FMountDir **)(lVar4 + 0x90) == (FMountDir *)0x0) ||
             (*(FMountDir **)(lVar4 + 0x90) == pFVar10)) {
            local_168 = lVar4;
            if ((local_178.Data <= (FScriptContainerElement *)&local_168) &&
               (((FScriptContainerElement *)&local_168 <
                 local_178.Data + (longlong)local_170._4_4_ * 8 &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)))) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = (int)local_170;
            if ((int)local_170 == local_170._4_4_) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_178,(int *)((longlong)&local_170 + 4));
            }
            local_170 = CONCAT44(local_170._4_4_,iVar9 + 1);
            *(longlong *)(local_178.Data + (longlong)iVar9 * 8) = local_168;
          }
        }
        pFVar13 = pFVar13 + 8;
      }
    }
    local_150 = __real_bff0000000000000;
    SetIsIdle(this,false,&local_150);
    local_f8 = (param_1->Data).AllocatorInstance.Data;
    iVar3 = (param_1->Data).ArrayNum;
    iStack_f0 = iVar3 + -1;
    if (iVar3 == 0) {
      iStack_f0 = 0;
    }
    local_68._12_4_ = uStack_ec;
    local_68.Size = iStack_f0;
    local_78.DataPtr = local_res18->DataPtr;
    local_78.Size = local_res18->Size;
    local_78._12_4_ = *(undefined4 *)&local_res18->field_0xc;
    local_68.DataPtr = (wchar_t *)local_f8;
    pFVar11 = FindOrAddMountPoint(this,&local_68,&local_78);
    if (pFVar10 != (FMountDir *)0x0) {
      iVar3 = (pFVar10->LocalAbsPath).Data.ArrayNum;
      local_160 = (pFVar10->LocalAbsPath).Data.AllocatorInstance.Data;
      uStack_154 = local_148._12_4_;
      iStack_158 = iVar3 + -1;
      local_148.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      if (iVar3 == 0) {
        iStack_158 = 0;
      }
      iVar3 = (param_1->Data).ArrayNum;
      local_58._12_4_ = local_148._12_4_;
      local_58.Size = iStack_158;
      local_d8.DataPtr = (wchar_t *)0x0;
      iStack_e0 = iVar3 + -1;
      local_d8.Size = 0;
      if (iVar3 == 0) {
        iStack_e0 = 0;
      }
      local_148._12_4_ = uStack_dc;
      local_148.Size = iStack_e0;
      local_e8 = (FScriptContainerElement *)local_148.DataPtr;
      local_58.DataPtr = (wchar_t *)local_160;
      bVar7 = FPathViews::TryMakeChildPathRelativeTo(&local_148,&local_58,&local_d8);
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FPathViews::TryMakeChildPathRelativeTo(LocalAbsPath, ParentMount->GetLocalAbsPath(), RelPath)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                             ,0xbc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FMountDir::AddChildMount(pFVar10,pFVar11);
      pFVar11->ParentMount = pFVar10;
      iVar3 = (int)local_170;
      pFVar1 = local_178.Data + (longlong)(int)local_170 * 8;
      FVar12.Data = local_178.Data;
      while( true ) {
        if ((int)local_170 != iVar3) {
          `TCheckedPointerIterator<UE::AssetDataGather::Private::FMountDir_*,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        if (FVar12.Data == pFVar1) break;
        FMountDir::RemoveChildMount(pFVar10,*(FMountDir **)FVar12.Data);
        FVar12.Data = FVar12.Data + 8;
      }
    }
    iVar3 = (int)local_170;
    pFVar1 = local_178.Data + (longlong)(int)local_170 * 8;
    FVar12.Data = local_178.Data;
    while( true ) {
      if ((int)local_170 != iVar3) {
        `TCheckedPointerIterator<UE::AssetDataGather::Private::FMountDir_*,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (FVar12.Data == pFVar1) break;
      pFVar10 = *(FMountDir **)FVar12.Data;
      FMountDir::AddChildMount(pFVar11,pFVar10);
      FVar12.Data = FVar12.Data + 8;
      pFVar10->ParentMount = pFVar11;
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    return;
  }
  *param_3 = true;
  return;
}

// EnsureCompletion @ 142af2c20

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::EnsureCompletion(FAssetDataDiscovery *this)

{
  FRunnableThread *pFVar1;
  
  (**(code **)(this->_padding_ + 0x10))();
  if (this->Thread != (FRunnableThread *)0x0) {
    (**(code **)(this->Thread->_padding_ + 0x20))();
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  return;
}

// Exit @ 142af43b0

void __thiscall UE::AssetDataGather::Private::FAssetDataDiscovery::Exit(FAssetDataDiscovery *this)

{
  return;
}

// FindContainingMountPoint @ 142af62f0

FMountDir * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FindContainingMountPoint
          (FAssetDataDiscovery *this,TStringView<wchar_t> *param_1)

{
  atomic<unsigned_int> aVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  atomic<unsigned_int> aVar12;
  FMountDir *pFVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  aVar1 = (this->TreeLock).OwnerThreadId;
  aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar1 != aVar12) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TreeLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0xc56,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FMountDir *)(*pcVar6)();
    return pFVar13;
  }
  pwVar8 = param_1->DataPtr;
  uVar9._0_4_ = param_1->Size;
  uVar9._4_4_ = *(undefined4 *)&param_1->field_0xc;
  aVar1 = (this->TreeLock).OwnerThreadId;
  aVar12 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar1 != aVar12) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TreeLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0xc91,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FMountDir *)(*pcVar6)();
    return pFVar13;
  }
  uVar16 = (this->MountDirs).ArrayNum;
  pFVar4 = (this->MountDirs).AllocatorInstance.Data;
  uVar15 = 0;
  if (0 < (int)uVar16) {
    do {
      iVar3 = (uVar16 >> 1) + uVar15;
      lVar5 = *(longlong *)(pFVar4 + (longlong)iVar3 * 8);
      local_88.DataPtr = *(wchar_t **)(lVar5 + 0x60);
      iVar2 = *(int *)(lVar5 + 0x68);
      iVar14 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar14 = 0;
      }
      local_88._12_4_ = uStack_9c;
      local_88.Size = iVar14;
      local_98.DataPtr = pwVar8;
      local_98._8_8_ = uVar9;
      bVar11 = FPathViews::Less(&local_88,&local_98);
      if (bVar11) {
        uVar15 = iVar3 + (uVar16 & 1);
      }
      uVar7 = uVar16 >> 1;
      uVar16 = uVar16 >> 1;
    } while (uVar7 != 0);
  }
  if ((int)uVar15 < (this->MountDirs).ArrayNum) {
    pwVar8 = param_1->DataPtr;
    uVar10._0_4_ = param_1->Size;
    uVar10._4_4_ = *(undefined4 *)&param_1->field_0xc;
    if (((int)uVar15 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FMountDir *)(*pcVar6)();
      return pFVar13;
    }
    lVar5 = *(longlong *)((this->MountDirs).AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
    local_68.DataPtr = *(wchar_t **)(lVar5 + 0x60);
    iVar3 = *(int *)(lVar5 + 0x68);
    iVar14 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar14 = 0;
    }
    local_68._12_4_ = uStack_9c;
    local_68.Size = iVar14;
    local_78.DataPtr = pwVar8;
    local_78._8_8_ = uVar10;
    bVar11 = FPathViews::Equals(&local_68,&local_78);
    if (bVar11) {
      uVar16 = 0;
      if ((int)uVar15 < (this->MountDirs).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FMountDir *)(*pcVar6)();
        return pFVar13;
      }
      return *(FMountDir **)((this->MountDirs).AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
    }
  }
  if (0 < (int)uVar15) {
    uVar15 = uVar15 - 1;
    uVar16 = 0;
    if ((int)uVar15 < (this->MountDirs).ArrayNum) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FMountDir *)(*pcVar6)();
      return pFVar13;
    }
    for (pFVar13 = *(FMountDir **)
                    ((this->MountDirs).AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
        pFVar13 != (FMountDir *)0x0; pFVar13 = pFVar13->ParentMount) {
      local_48[0].DataPtr = (wchar_t *)(pFVar13->LocalAbsPath).Data.AllocatorInstance.Data;
      local_58.DataPtr = param_1->DataPtr;
      local_58.Size = param_1->Size;
      local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar3 = (pFVar13->LocalAbsPath).Data.ArrayNum;
      iVar14 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar14 = 0;
      }
      local_48[0]._12_4_ = uStack_9c;
      local_48[0].Size = iVar14;
      bVar11 = FPathViews::IsParentPathOf(local_48,&local_58);
      if (bVar11) {
        return pFVar13;
      }
    }
  }
  return (FMountDir *)0x0;
}

// FindContainingMountPoint @ 142af65f0

FMountDir * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FindContainingMountPoint
          (FAssetDataDiscovery *this,TStringView<wchar_t> *param_1)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  FMountDir *pFVar5;
  TStringView<wchar_t> local_18;
  
  aVar1 = (this->TreeLock).OwnerThreadId;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar1 != aVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xc74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMountDir *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar5 = FindContainingMountPoint(this,&local_18);
  return pFVar5;
}

// FindLowerBoundMountPoint @ 142af67b0

int __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FindLowerBoundMountPoint
          (FAssetDataDiscovery *this,TStringView<wchar_t> *param_1)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FIdentityFunctor local_res8;
  
  aVar1 = (this->TreeLock).OwnerThreadId;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar1 != aVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xc91,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = AlgoImpl::
          LowerBoundInternal<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>_const_,int,TStringView<wchar_t>,FIdentityFunctor,_UE::AssetDataGather::Private::FAssetDataDiscovery::FindLowerBoundMountPoint_::__l2::<lambda_1>_>
                    ((TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>
                      *)(this->MountDirs).AllocatorInstance.Data,(this->MountDirs).ArrayNum,param_1,
                     local_res8,(<lambda_1>)local_res8);
  return iVar5;
}

// FindMountPoint @ 142af6870

FMountDir * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FindMountPoint
          (FAssetDataDiscovery *this,TStringView<wchar_t> *param_1)

{
  atomic<unsigned_int> aVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  atomic<unsigned_int> aVar11;
  uint uVar12;
  FMountDir *pFVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  aVar1 = (this->TreeLock).OwnerThreadId;
  aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar1 != aVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TreeLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0xc7a,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FMountDir *)(*pcVar6)();
    return pFVar13;
  }
  pwVar7 = param_1->DataPtr;
  uVar8._0_4_ = param_1->Size;
  uVar8._4_4_ = *(undefined4 *)&param_1->field_0xc;
  aVar1 = (this->TreeLock).OwnerThreadId;
  aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar1 != aVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TreeLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0xc91,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FMountDir *)(*pcVar6)();
    return pFVar13;
  }
  uVar15 = (this->MountDirs).ArrayNum;
  pFVar4 = (this->MountDirs).AllocatorInstance.Data;
  uVar16 = 0;
  if (0 < (int)uVar15) {
    do {
      iVar3 = (uVar15 >> 1) + uVar16;
      lVar5 = *(longlong *)(pFVar4 + (longlong)iVar3 * 8);
      local_68.DataPtr = *(wchar_t **)(lVar5 + 0x60);
      iVar2 = *(int *)(lVar5 + 0x68);
      iVar14 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar14 = 0;
      }
      local_68._12_4_ = uStack_7c;
      local_68.Size = iVar14;
      local_78.DataPtr = pwVar7;
      local_78._8_8_ = uVar8;
      bVar10 = FPathViews::Less(&local_68,&local_78);
      if (bVar10) {
        uVar16 = iVar3 + (uVar15 & 1);
      }
      uVar12 = uVar15 >> 1;
      uVar15 = uVar15 >> 1;
    } while (uVar12 != 0);
  }
  uVar15 = (this->MountDirs).ArrayNum;
  if (uVar16 != uVar15) {
    pwVar7 = param_1->DataPtr;
    uVar9._0_4_ = param_1->Size;
    uVar9._4_4_ = *(undefined4 *)&param_1->field_0xc;
    uVar12 = 0;
    if ((int)uVar16 < (int)uVar15) {
      uVar12 = ~uVar16 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FMountDir *)(*pcVar6)();
      return pFVar13;
    }
    lVar5 = *(longlong *)((this->MountDirs).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
    local_48[0].DataPtr = *(wchar_t **)(lVar5 + 0x60);
    iVar3 = *(int *)(lVar5 + 0x68);
    iVar14 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar14 = 0;
    }
    local_48[0]._12_4_ = uStack_7c;
    local_48[0].Size = iVar14;
    local_58.DataPtr = pwVar7;
    local_58._8_8_ = uVar9;
    bVar10 = FPathViews::Equals(local_48,&local_58);
    if (bVar10) {
      uVar15 = 0;
      if ((int)uVar16 < (this->MountDirs).ArrayNum) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FMountDir *)(*pcVar6)();
        return pFVar13;
      }
      return *(FMountDir **)((this->MountDirs).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
    }
  }
  return (FMountDir *)0x0;
}

// FindOrAddMountPoint @ 142af7830

FMountDir * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FindOrAddMountPoint
          (FAssetDataDiscovery *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  TArray<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  atomic<unsigned_int> aVar11;
  int iVar12;
  FMountDir *pFVar13;
  FMountDir *this_00;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  undefined4 uStack_ac;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58 [2];
  
  aVar2 = (this->TreeLock).OwnerThreadId;
  aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar2 != aVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TreeLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0xc85,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FMountDir *)(*pcVar6)();
    return pFVar13;
  }
  pwVar7 = param_1->DataPtr;
  uVar8._0_4_ = param_1->Size;
  uVar8._4_4_ = *(undefined4 *)&param_1->field_0xc;
  aVar2 = (this->TreeLock).OwnerThreadId;
  aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar2 != aVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TreeLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0xc91,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FMountDir *)(*pcVar6)();
    return pFVar13;
  }
  pTVar1 = &this->MountDirs;
  pFVar13 = (FMountDir *)0x0;
  uVar18 = (this->MountDirs).ArrayNum;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  uVar15 = 0;
  uVar16 = uVar15;
  if (0 < (int)uVar18) {
    do {
      iVar12 = (uVar18 >> 1) + uVar16;
      lVar5 = *(longlong *)(pFVar4 + (longlong)iVar12 * 8);
      local_98.DataPtr = *(wchar_t **)(lVar5 + 0x60);
      iVar3 = *(int *)(lVar5 + 0x68);
      uVar14 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar14 = uVar15;
      }
      local_98._12_4_ = uStack_ac;
      local_98.Size = uVar14;
      local_a8.DataPtr = pwVar7;
      local_a8._8_8_ = uVar8;
      bVar10 = FPathViews::Less(&local_98,&local_a8);
      if (bVar10) {
        uVar16 = iVar12 + (uVar18 & 1);
      }
      uVar14 = uVar18 >> 1;
      uVar18 = uVar18 >> 1;
    } while (uVar14 != 0);
  }
  piVar17 = &(this->MountDirs).ArrayNum;
  uVar18 = (this->MountDirs).ArrayNum;
  if (uVar16 != uVar18) {
    pwVar7 = param_1->DataPtr;
    uVar9._0_4_ = param_1->Size;
    uVar9._4_4_ = *(undefined4 *)&param_1->field_0xc;
    uVar14 = 0;
    uVar15 = uVar14;
    if ((int)uVar16 < (int)uVar18) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FMountDir *)(*pcVar6)();
      return pFVar13;
    }
    lVar5 = *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar16 * 8);
    local_78.DataPtr = *(wchar_t **)(lVar5 + 0x60);
    iVar12 = *(int *)(lVar5 + 0x68);
    uVar18 = iVar12 - 1;
    if (iVar12 == 0) {
      uVar18 = uVar14;
    }
    local_78._12_4_ = uStack_ac;
    local_78.Size = uVar18;
    local_88.DataPtr = pwVar7;
    local_88._8_8_ = uVar9;
    bVar10 = FPathViews::Equals(&local_78,&local_88);
    if (bVar10) {
      if ((int)uVar16 < *piVar17) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FMountDir *)(*pcVar6)();
        return pFVar13;
      }
      return *(FMountDir **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar16 * 8);
    }
  }
  this_00 = ::operator_new(0xa0);
  if (this_00 != (FMountDir *)0x0) {
    local_68.DataPtr = param_2->DataPtr;
    local_68.Size = param_2->Size;
    local_68._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_58[0].DataPtr = param_1->DataPtr;
    local_58[0].Size = param_1->Size;
    local_58[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pFVar13 = FMountDir::FMountDir(this_00,this,local_58,&local_68);
  }
  iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,1,&pTVar1->AllocatorInstance,piVar17,&(this->MountDirs).ArrayMax);
  pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar16 * 8;
  memmove(pFVar4 + 8,pFVar4,(longlong)(int)(iVar12 - uVar16) << 3);
  *(FMountDir **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar16 * 8) = pFVar13;
  return pFVar13;
}

// GetAllocatedSize @ 142af9500

ulong64 __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::GetAllocatedSize(FAssetDataDiscovery *this)

{
  FCriticalSectionQueryable *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRunnableThread *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  atomic<unsigned_int> aVar8;
  atomic<unsigned_int> aVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  aVar9 = (this->TreeLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 == aVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TreeLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xb47,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  aVar9 = (this->ResultsLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 == aVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xb48,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  aVar9 = (this->TickOwner).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 == aVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TickOwner.IsOwnedByCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xb49,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  if (this->Thread != (FRunnableThread *)0x0) {
    LOCK();
    this->IsPaused = (atomic<unsigned_int>)((int)this->IsPaused + 1);
    UNLOCK();
  }
  fVar5 = __real_3a83126f;
  lpCriticalSection = &this->TreeLock;
  while( true ) {
    if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SynchObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x53,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return uVar10;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
    (this->TreeLock).OwnerThreadId = aVar9;
    bVar6 = (this->TickOwner).bHasOwner == false;
    if (bVar6) {
      (this->TickOwner).bHasOwner = true;
      aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
      (this->TickOwner).OwnerThreadId = aVar9;
    }
    aVar9 = (this->TreeLock).OwnerThreadId;
    aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar9 != aVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x2b,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return uVar10;
    }
    (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar6) break;
    aVar9 = (this->TickOwner).OwnerThreadId;
    aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar9 == aVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Owner.TickOwner.IsOwnedByCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x6ad,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return uVar10;
    }
    FWindowsPlatformProcess::Sleep(fVar5);
  }
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->TreeLock).OwnerThreadId = aVar9;
  if ((&this->ResultsLock == (FCriticalSectionQueryable *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ResultsLock);
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  (this->ResultsLock).OwnerThreadId = aVar9;
  uVar10 = GetArrayRecursiveAllocatedSize<TArray<FString,TSizedDefaultAllocator<32>_>_>
                     (&this->LongPackageNamesDenyList);
  uVar11 = GetArrayRecursiveAllocatedSize<TArray<FString,TSizedDefaultAllocator<32>_>_>
                     (&this->MountRelativePathsDenyList);
  pFVar3 = this->Thread;
  uVar12 = GetArrayRecursiveAllocatedSize<TArray<FString,TSizedDefaultAllocator<32>_>_>
                     (&this->DiscoveredDirectories);
  iVar2 = (this->DiscoveredFiles).ArrayNum;
  pFVar15 = (this->DiscoveredFiles).AllocatorInstance.Data;
  lVar17 = uVar10 + uVar11 + 0x38;
  if (pFVar3 == (FRunnableThread *)0x0) {
    lVar17 = uVar10 + uVar11;
  }
  lVar18 = (longlong)(this->DiscoveredFiles).ArrayMax << 5;
  pFVar14 = pFVar15 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->DiscoveredFiles).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar14) break;
    pFVar13 = pFVar15 + 0x1c;
    pFVar1 = pFVar15 + 0xc;
    pFVar15 = pFVar15 + 0x20;
    lVar18 = lVar18 + ((longlong)*(int *)pFVar1 + (longlong)*(int *)pFVar13 * 0x18) * 2;
  }
  iVar2 = (this->DiscoveredSingleFiles).ArrayNum;
  pFVar15 = (this->DiscoveredSingleFiles).AllocatorInstance.Data;
  lVar19 = (longlong)(this->DiscoveredSingleFiles).ArrayMax * 0x30;
  pFVar14 = pFVar15 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->DiscoveredSingleFiles).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FGatheredPathData_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar14) break;
    pFVar13 = pFVar15 + 0x1c;
    pFVar1 = pFVar15 + 0xc;
    pFVar15 = pFVar15 + 0x30;
    lVar19 = lVar19 + ((longlong)*(int *)pFVar13 + (longlong)*(int *)pFVar1) * 2;
  }
  pFVar14 = (this->MountDirs).AllocatorInstance.Data;
  iVar2 = (this->MountDirs).ArrayNum;
  lVar17 = lVar17 + uVar12 + lVar18 + lVar19 + (longlong)(this->MountDirs).ArrayMax * 8;
  pFVar15 = pFVar14 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MountDirs).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar14 == pFVar15) break;
    uVar10 = FMountDir::GetAllocatedSize(*(FMountDir **)pFVar14);
    lVar17 = lVar17 + 0xa0 + uVar10;
    pFVar14 = pFVar14 + 8;
  }
  iVar2 = (this->DirToScanDatas).ArrayNum;
  pFVar14 = (this->DirToScanDatas).AllocatorInstance.Data;
  lVar18 = (longlong)(this->DirToScanDatas).ArrayMax << 7;
  pFVar13 = pFVar14 + (longlong)iVar2 * 0x80;
  pFVar15 = pFVar14 + 0x20;
  while( true ) {
    if ((this->DirToScanDatas).ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanData_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar14 == pFVar13) break;
    if (pFVar15[8] == (FScriptContainerElement)0x0) {
      lVar19 = 0;
    }
    else {
      lVar19 = (*(longlong *)pFVar15 - *(longlong *)(pFVar15 + -0x10) >> 1) * 2;
    }
    if (pFVar15[0x28] == (FScriptContainerElement)0x0) {
      lVar16 = 0;
    }
    else {
      lVar16 = (*(longlong *)(pFVar15 + 0x20) - *(longlong *)(pFVar15 + 0x10) >> 1) * 2;
    }
    uVar10 = GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>_>
                       ((TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>
                         *)(pFVar15 + 0x30));
    uVar11 = GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>_>
                       ((TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>
                         *)(pFVar15 + 0x40));
    pFVar14 = pFVar14 + 0x80;
    lVar18 = lVar18 + uVar11 + lVar16 + uVar10 + lVar19;
    pFVar15 = pFVar15 + 0x80;
  }
  iVar2 = (this->DirToScanBuffers).ArrayMax;
  aVar9 = (this->ResultsLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 != aVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ResultsLock);
  aVar9 = (this->TreeLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 != aVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->TreeLock);
  FThreadOwnerSection::ReleaseOwnershipChecked(&this->TickOwner,&this->TreeLock);
  if (this->Thread != (FRunnableThread *)0x0) {
    if ((this->IsPaused == (atomic<unsigned_int>)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Owner.IsPaused > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x6b8,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return uVar10;
    }
    LOCK();
    this->IsPaused = (atomic<unsigned_int>)((int)this->IsPaused + -1);
    UNLOCK();
  }
  return iVar2 + lVar18 + lVar17;
}

// GetAndTrimSearchResults @ 142afb460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::GetAndTrimSearchResults
          (FAssetDataDiscovery *this,bool *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FFilesToSearch *param_3,int *param_4)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FDirectoryResult *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<unsigned_int> aVar8;
  atomic<unsigned_int> aVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FGatheredPathData *pFVar12;
  FScriptContainerElement *pFVar13;
  TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult,TSizedDefaultAllocator<32>_>
  *pTVar14;
  FGatheredPathData *pFVar15;
  undefined1 local_48;
  undefined1 local_47 [15];
  
  lpCriticalSection = &this->ResultsLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  pTVar2 = &this->DiscoveredDirectories;
  (this->ResultsLock).OwnerThreadId = aVar8;
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (param_2,pTVar2);
  piVar1 = &(this->DiscoveredDirectories).ArrayMax;
  pFVar11 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->DiscoveredDirectories).ArrayNum;
  if ((this->DiscoveredDirectories).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar11,iVar4);
    (this->DiscoveredDirectories).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar11,iVar4);
    (this->DiscoveredDirectories).ArrayNum = 0;
  }
  pTVar14 = &this->DiscoveredFiles;
  pFVar10 = (pTVar14->AllocatorInstance).Data;
  iVar4 = (this->DiscoveredFiles).ArrayNum;
  pFVar13 = pFVar10 + (longlong)iVar4 * 0x20;
  pFVar11 = pFVar10 + 0x18;
  while( true ) {
    if ((this->DiscoveredFiles).ArrayNum != iVar4) {
      local_48 = 0;
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_48);
    }
    if (pFVar10 == pFVar13) break;
    if (*(uint *)pFVar11 != 0) {
      param_3->AvailableFilesNum = param_3->AvailableFilesNum + *(uint *)pFVar11;
      TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
      MoveAppendRange(&param_3->NormalPriorityFiles,*(FGatheredPathData **)(pFVar11 + -8),
                      *(uint *)pFVar11);
    }
    pFVar10 = pFVar10 + 0x20;
    pFVar11 = pFVar11 + 0x20;
  }
  piVar1 = &(this->DiscoveredFiles).ArrayMax;
  pFVar5 = (FDirectoryResult *)(pTVar14->AllocatorInstance).Data;
  iVar4 = (this->DiscoveredFiles).ArrayNum;
  if ((this->DiscoveredFiles).ArrayMax < 0) {
    DestructItems<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult,int>
              (pFVar5,iVar4);
    (this->DiscoveredFiles).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar14->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult,int>
              (pFVar5,iVar4);
    (this->DiscoveredFiles).ArrayNum = 0;
  }
  pTVar3 = &this->DiscoveredSingleFiles;
  iVar4 = (this->DiscoveredSingleFiles).ArrayNum;
  pFVar12 = (FGatheredPathData *)(pTVar3->AllocatorInstance).Data;
  pFVar15 = pFVar12 + iVar4;
  while( true ) {
    if ((this->DiscoveredSingleFiles).ArrayNum != iVar4) {
      local_47[0] = 0;
      `TCheckedPointerIterator<UE::AssetDataGather::Private::FGatheredPathData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_47);
    }
    if (pFVar12 == pFVar15) break;
    param_3->AvailableFilesNum = param_3->AvailableFilesNum + 1;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::Add
              (&param_3->BlockingFiles,pFVar12);
    pFVar12 = pFVar12 + 1;
  }
  piVar1 = &(this->DiscoveredSingleFiles).ArrayMax;
  pFVar12 = (FGatheredPathData *)(pTVar3->AllocatorInstance).Data;
  iVar4 = (this->DiscoveredSingleFiles).ArrayNum;
  if ((this->DiscoveredSingleFiles).ArrayMax < 0) {
    DestructItems<UE::AssetDataGather::Private::FGatheredPathData,int>(pFVar12,iVar4);
    (this->DiscoveredSingleFiles).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::AssetDataGather::Private::FGatheredPathData,int>(pFVar12,iVar4);
    (this->DiscoveredSingleFiles).ArrayNum = 0;
  }
  *param_4 = (this->NumDirectoriesToScan).Counter;
  *param_1 = (bool)this->bIsIdle;
  if (((this->bIsIdle != (atomic<bool>)0x0) && (*param_4 != 0)) &&
     (2 < (byte)LogAssetRegistry._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  aVar8 = (this->ResultsLock).OwnerThreadId;
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar8 != aVar9) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (this->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142afb70f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetDiagnostics @ 142afe540

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::GetDiagnostics
          (FAssetDataDiscovery *this,float *param_1,int *param_2,int *param_3)

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
  *param_1 = this->CumulativeDiscoveryTime;
  *param_2 = this->NumCachedDirectories;
  *param_3 = this->NumUncachedDirectories;
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
                    /* WARNING: Could not recover jumptable at 0x000142afe618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetFileType @ 142afe8a0

EGatherableFileType __cdecl
UE::AssetDataGather::Private::FAssetDataDiscovery::GetFileType(TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  EGatherableFileType EVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TStringView<wchar_t> local_28;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar2 = FPackageName::IsPackageFilename(&local_28);
  if (!bVar2) {
    iVar5 = param_1->Size;
    pwVar1 = param_1->DataPtr;
    iVar4 = iVar5;
    if (6 < iVar5) {
      iVar4 = 6;
    }
    iVar6 = 0;
    if (0 < iVar4) {
      iVar6 = iVar4;
    }
    if ((iVar6 == 6) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp
                          (L".verse",pwVar1 + ((longlong)iVar5 - (longlong)iVar6),6), iVar4 == 0)) {
      EVar3 = VerseFile;
    }
    else {
      iVar4 = iVar5;
      if (8 < iVar5) {
        iVar4 = 8;
      }
      iVar6 = 0;
      if (0 < iVar4) {
        iVar6 = iVar4;
      }
      if ((iVar6 == 8) &&
         (iVar5 = FGenericPlatformStricmp::Strnicmp
                            (L".vmodule",pwVar1 + ((longlong)iVar5 - (longlong)iVar6),8), iVar5 == 0
         )) {
        EVar3 = VerseModule;
      }
      else {
        EVar3 = Invalid;
      }
    }
    return EVar3;
  }
  return PackageFile;
}

// Init @ 142b00e80

bool __thiscall UE::AssetDataGather::Private::FAssetDataDiscovery::Init(FAssetDataDiscovery *this)

{
  return true;
}

// IsCacheWriteEnabled @ 142b043d0

bool __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::IsCacheWriteEnabled(FAssetDataDiscovery *this)

{
  if (((this->Cache).bInitialized != false) && ((this->Cache).WriteEnabled != Never)) {
    return true;
  }
  return false;
}

// IsIdle @ 142b04980

bool __thiscall UE::AssetDataGather::Private::FAssetDataDiscovery::IsIdle(FAssetDataDiscovery *this)

{
  return (bool)this->bIsIdle;
}

// IsMonitored @ 142b04990

bool __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::IsMonitored
          (FAssetDataDiscovery *this,TStringView<wchar_t> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  FMountDir *this_00;
  FInherited local_res8 [2];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  aVar8 = (this->ResultsLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar8 == aVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xb2e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  lpCriticalSection = &this->TreeLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  pwVar2 = param_1->DataPtr;
  uVar3._0_4_ = param_1->Size;
  uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->TreeLock).OwnerThreadId = aVar8;
  aVar8 = (this->TreeLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar8 != aVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xc74,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  local_38.DataPtr = pwVar2;
  local_38._8_8_ = uVar3;
  this_00 = FindContainingMountPoint(this,&local_38);
  if (this_00 != (FMountDir *)0x0) {
    local_28[0].DataPtr = param_1->DataPtr;
    local_28[0].Size = param_1->Size;
    local_28[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_res8[0].bIsOnAllowList = false;
    local_res8[0].bMatchesDenyList = false;
    local_res8[0].bIgnoreDenyList = false;
    FMountDir::GetMonitorData(this_00,local_28,local_res8);
    if ((local_res8[0].bIsOnAllowList != false) &&
       ((local_res8[0].bMatchesDenyList == false || (local_res8[0].bIgnoreDenyList != false)))) {
      bVar4 = true;
      goto LAB_142b04ab6;
    }
  }
  bVar4 = false;
LAB_142b04ab6:
  aVar8 = (this->TreeLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar8 != aVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// IsOnAllowList @ 142b04dd0

bool __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::IsOnAllowList
          (FAssetDataDiscovery *this,TStringView<wchar_t> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  FMountDir *this_00;
  FInherited local_res8 [2];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  aVar7 = (this->ResultsLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar7 == aVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xb12,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  lpCriticalSection = &this->TreeLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  pwVar2 = param_1->DataPtr;
  uVar3._0_4_ = param_1->Size;
  uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->TreeLock).OwnerThreadId = aVar7;
  aVar7 = (this->TreeLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar7 != aVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xc74,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  local_38.DataPtr = pwVar2;
  local_38._8_8_ = uVar3;
  this_00 = FindContainingMountPoint(this,&local_38);
  if (this_00 == (FMountDir *)0x0) {
    uVar5 = 0;
  }
  else {
    local_28[0].DataPtr = param_1->DataPtr;
    local_28[0].Size = param_1->Size;
    local_28[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_res8[0].bIsOnAllowList = false;
    local_res8[0].bMatchesDenyList = false;
    local_res8[0].bIgnoreDenyList = false;
    FMountDir::GetMonitorData(this_00,local_28,local_res8);
    uVar5 = local_res8[0].bIsOnAllowList;
  }
  aVar7 = (this->TreeLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar7 != aVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (bool)uVar5;
}

// IsOnDenyList @ 142b05160

bool __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::IsOnDenyList
          (FAssetDataDiscovery *this,TStringView<wchar_t> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  FMountDir *this_00;
  FInherited local_res8 [2];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  aVar8 = (this->ResultsLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar8 == aVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xb20,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  lpCriticalSection = &this->TreeLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  pwVar2 = param_1->DataPtr;
  uVar3._0_4_ = param_1->Size;
  uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->TreeLock).OwnerThreadId = aVar8;
  aVar8 = (this->TreeLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar8 != aVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xc74,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  local_38.DataPtr = pwVar2;
  local_38._8_8_ = uVar3;
  this_00 = FindContainingMountPoint(this,&local_38);
  if (this_00 != (FMountDir *)0x0) {
    local_28[0].DataPtr = param_1->DataPtr;
    local_28[0].Size = param_1->Size;
    local_28[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_res8[0].bIsOnAllowList = false;
    local_res8[0].bMatchesDenyList = false;
    local_res8[0].bIgnoreDenyList = false;
    FMountDir::GetMonitorData(this_00,local_28,local_res8);
    if ((local_res8[0].bMatchesDenyList != false) && (local_res8[0].bIgnoreDenyList == false)) {
      bVar4 = true;
      goto LAB_142b0527f;
    }
  }
  bVar4 = false;
LAB_142b0527f:
  aVar8 = (this->TreeLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar8 != aVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// IsSynchronous @ 142b05730

bool __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::IsSynchronous(FAssetDataDiscovery *this)

{
  return this->Thread == (FRunnableThread *)0x0;
}

// OnAdditionalMountSearchCompleted @ 142b0a650

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::OnAdditionalMountSearchCompleted
          (FAssetDataDiscovery *this)

{
  return;
}

// OnDirectoryCreated @ 142b0a6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::OnDirectoryCreated
          (FAssetDataDiscovery *this,TStringView<wchar_t> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  FMountDir *this_00;
  void *pvVar7;
  TStringView<wchar_t> *pTVar8;
  ulong64 uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStackY_338 [32];
  FInherited local_308 [5];
  FDiscoveredPathData *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData_const_,int> local_2e8;
  FDiscoveredPathData local_2d8;
  TStringView<wchar_t> local_298;
  double local_288 [2];
  wchar_t *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  FScriptContainerElement *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  FScriptContainerElement *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  TStringView<wchar_t> local_228;
  TStringView<wchar_t> local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData_const_,int> local_1e8;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  wchar_t *local_1b8;
  undefined8 uStack_1b0;
  TStringView<wchar_t> local_1a8;
  wchar_t *local_198;
  undefined8 uStack_190;
  uint local_17c;
  undefined4 local_16c;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_338;
  aVar6 = (this->ResultsLock).OwnerThreadId;
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar6 == aVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xbfc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lpCriticalSection = &this->TreeLock;
  if (lpCriticalSection == (FCriticalSectionQueryable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  local_248.DataPtr = param_1->DataPtr;
  local_248.Size = param_1->Size;
  local_248._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->TreeLock).OwnerThreadId = aVar6;
  this_00 = FindContainingMountPoint(this,&local_248);
  if (this_00 != (FMountDir *)0x0) {
    local_238.DataPtr = param_1->DataPtr;
    local_238.Size = param_1->Size;
    local_238._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_308[0].bIsOnAllowList = false;
    local_308[0].bMatchesDenyList = false;
    local_308[0].bIgnoreDenyList = false;
    FMountDir::GetMonitorData(this_00,&local_238,local_308);
    if ((local_308[0].bIsOnAllowList != false) &&
       ((local_308[0].bMatchesDenyList == false || (local_308[0].bIgnoreDenyList != false)))) {
      local_218.DataPtr = param_1->DataPtr;
      local_218.Size = param_1->Size;
      local_218._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_298.DataPtr = (wchar_t *)0x0;
      local_298.Size = 0;
      local_2f8 = (FDiscoveredPathData *)(this_00->LocalAbsPath).Data.AllocatorInstance.Data;
      iVar1 = (this_00->LocalAbsPath).Data.ArrayNum;
      iStack_2f0 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_2f0 = 0;
      }
      local_228._12_4_ = uStack_2ec;
      local_228.Size = iStack_2f0;
      local_228.DataPtr = (wchar_t *)local_2f8;
      bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_218,&local_228,&local_298);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPathViews::TryMakeChildPathRelativeTo(LocalAbsPath, MountDir->GetLocalAbsPath(), MountRelPath)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0xc05,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_168.Base = local_148;
      local_168.bIsDynamic = false;
      local_168.bIsExternal = false;
      local_168.CurPos = local_148;
      local_168.End = (wchar_t *)local_48;
      iVar1 = (this_00->LongPackageName).Data.ArrayNum;
      pFVar2 = (this_00->LongPackageName).Data.AllocatorInstance.Data;
      iVar10 = 0;
      iVar11 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar11 = iVar10;
      }
      uVar9 = (ulong64)iVar11;
      if (local_48 < local_148 + uVar9) {
        TStringBuilderBase<wchar_t>::Extend(&local_168,uVar9);
      }
      if (iVar11 != 0) {
        pvVar7 = FGenericPlatformString::Memcpy(local_168.CurPos,pFVar2,uVar9 * 2);
        local_168.CurPos = (wchar_t *)((longlong)pvVar7 + uVar9 * 2);
      }
      local_208._12_4_ = local_298._12_4_;
      local_208.Size = local_298.Size;
      local_208.DataPtr = local_298.DataPtr;
      FPathViews::AppendPath(&local_168,&local_208);
      local_278 = local_168.Base;
      iStack_270 = (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1);
      local_1f8._12_4_ = uStack_26c;
      local_1f8.Size = iStack_270;
      local_1f8.DataPtr = local_168.Base;
      bVar4 = FPackageName::DoesPackageNameContainInvalidCharacters(&local_1f8,(EErrorCode *)0x0);
      if (!bVar4) {
        local_1b8 = param_1->DataPtr;
        uStack_1b0 = *(undefined8 *)&param_1->Size;
        local_2d8.LocalAbsPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d8.LocalAbsPath.Data.ArrayNum = 0;
        local_2d8.LocalAbsPath.Data.ArrayMax = 0;
        local_2d8.LongPackageName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d8.LongPackageName.Data.ArrayNum = 0;
        local_2d8.LongPackageName.Data.ArrayMax = 0;
        local_2d8.RelPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d8.RelPath.Data.ArrayNum = 0;
        local_2d8.RelPath.Data.ArrayMax = 0;
        local_2d8.PackageTimestamp.Ticks = 0;
        local_2d8.Type = Invalid;
        ::FString::AssignRange
                  (&local_2d8.LocalAbsPath,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
        ::FString::AssignRange
                  (&local_2d8.LongPackageName,local_168.Base,
                   (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
        pTVar8 = FPathViews::GetCleanFilename(&local_1a8,&local_298);
        local_198 = pTVar8->DataPtr;
        uStack_190 = *(undefined8 *)&pTVar8->Size;
        ::FString::AssignRange(&local_2d8.RelPath,pTVar8->DataPtr,(int)*(undefined8 *)&pTVar8->Size)
        ;
        local_288[0] = __real_bff0000000000000;
        SetIsIdle(this,false,local_288);
        local_2f8 = &local_2d8;
        uStack_2ec = local_16c;
        local_268 = local_2d8.LongPackageName.Data.AllocatorInstance.Data;
        local_2e8._8_8_ = (ulonglong)local_17c << 0x20;
        iStack_2f0 = 1;
        local_1e8._12_4_ = local_16c;
        local_1e8.ArrayNum = 1;
        iStack_260 = local_2d8.LongPackageName.Data.ArrayNum + -1;
        if (local_2d8.LongPackageName.Data.ArrayNum == 0) {
          iStack_260 = iVar10;
        }
        local_2e8.DataPtr = (FDiscoveredPathData *)0x0;
        local_258 = local_2d8.LocalAbsPath.Data.AllocatorInstance.Data;
        local_1d8._12_4_ = uStack_25c;
        local_1d8.Size = iStack_260;
        local_1d8.DataPtr = (wchar_t *)local_2d8.LongPackageName.Data.AllocatorInstance.Data;
        iStack_250 = local_2d8.LocalAbsPath.Data.ArrayNum + -1;
        if (local_2d8.LocalAbsPath.Data.ArrayNum == 0) {
          iStack_250 = iVar10;
        }
        local_1c8._12_4_ = uStack_24c;
        local_1c8.Size = iStack_250;
        local_1c8.DataPtr = (wchar_t *)local_2d8.LocalAbsPath.Data.AllocatorInstance.Data;
        local_1e8.DataPtr = local_2f8;
        AddDiscovered(this,&local_1c8,&local_1d8,&local_1e8,&local_2e8);
        if (local_2d8.RelPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.RelPath.Data.AllocatorInstance.Data);
        }
        if (local_2d8.LongPackageName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_2d8.LongPackageName.Data.AllocatorInstance.Data);
        }
        if (local_2d8.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.LocalAbsPath.Data.AllocatorInstance.Data);
        }
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
    }
  }
  aVar6 = (this->TreeLock).OwnerThreadId;
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar6 != aVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// OnFileCreated @ 142b0acc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::OnFileCreated
          (FAssetDataDiscovery *this,FString *param_1)

{
  atomic<unsigned_int> aVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  EGatherableFileType EVar6;
  atomic<unsigned_int> aVar7;
  FMountDir *pFVar8;
  IFileManager *pIVar9;
  FScanDir *this_00;
  FScanDir *this_01;
  void *pvVar10;
  FString *pFVar11;
  FDiscoveredPathData *pFVar12;
  ulong64 uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  undefined1 auStackY_518 [32];
  FInherited local_4e8;
  FInherited local_4e4;
  FString local_4e0;
  FDiscoveredPathData local_4d0;
  TStringView<wchar_t> local_488;
  TStringView<wchar_t> local_478;
  TStringView<wchar_t> local_468;
  TStringView<wchar_t> local_458;
  FScriptContainerElement *local_448;
  int iStack_440;
  undefined4 uStack_43c;
  FScriptContainerElement *local_438;
  int iStack_430;
  undefined4 uStack_42c;
  TStringView<wchar_t> local_428;
  TStringView<wchar_t> local_418;
  FScriptContainerElement *local_408;
  int iStack_400;
  undefined4 uStack_3fc;
  TStringView<wchar_t> local_3f8;
  TStringView<wchar_t> local_3e8;
  FScriptContainerElement *local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  FScriptContainerElement *local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  TStringView<wchar_t> local_3b8;
  FString local_3a8;
  TStringView<wchar_t> local_398;
  TStringView<wchar_t> local_388;
  TStringView<wchar_t> local_378;
  TStringView<wchar_t> local_368;
  TStringView<wchar_t> local_358;
  TStringView<wchar_t> local_348;
  TStringView<wchar_t> local_338;
  FString local_328;
  TStringView<wchar_t> local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  TStringView<wchar_t> local_2d8;
  TStringView<wchar_t> local_2c8;
  TStringView<wchar_t> local_2b8;
  undefined1 local_2a8 [16];
  long64 local_298;
  byte local_288;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_518;
  aVar1 = (this->TreeLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar1 != aVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TreeLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xc28,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_448 = (param_1->Data).AllocatorInstance.Data;
  iVar14 = 0;
  iVar15 = (param_1->Data).ArrayNum;
  iStack_440 = iVar15 + -1;
  if (iVar15 == 0) {
    iStack_440 = iVar14;
  }
  local_2b8._12_4_ = uStack_43c;
  local_2b8.Size = iStack_440;
  local_2b8.DataPtr = (wchar_t *)local_448;
  pFVar8 = FindContainingMountPoint(this,&local_2b8);
  if (pFVar8 == (FMountDir *)0x0) {
    return;
  }
  pIVar9 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar9 + 0x70))(pIVar9,local_2a8,pwVar17);
  if ((local_288 & 4) == 0) {
    return;
  }
  if ((local_288 & 1) != 0) {
    return;
  }
  local_438 = (param_1->Data).AllocatorInstance.Data;
  iVar15 = (param_1->Data).ArrayNum;
  local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4e0.Data.ArrayNum = 0;
  local_4e0.Data.ArrayMax = 0;
  local_4e8.bIsOnAllowList = false;
  local_4e8.bMatchesDenyList = false;
  local_4e8.bIgnoreDenyList = false;
  local_468.DataPtr = (wchar_t *)(pFVar8->LocalAbsPath).Data.AllocatorInstance.Data;
  iStack_430 = iVar15 + -1;
  if (iVar15 == 0) {
    iStack_430 = iVar14;
  }
  local_3b8._12_4_ = uStack_42c;
  local_3b8.Size = iStack_430;
  iVar15 = (pFVar8->LocalAbsPath).Data.ArrayNum;
  local_458.DataPtr = (wchar_t *)0x0;
  local_458.Size = 0;
  local_468.Size = iVar15 + -1;
  if (iVar15 == 0) {
    local_468.Size = iVar14;
  }
  local_3b8.DataPtr = (wchar_t *)local_438;
  bVar5 = FPathViews::TryMakeChildPathRelativeTo(&local_3b8,&local_468,&local_458);
  iVar15 = local_458.Size;
  pwVar17 = local_458.DataPtr;
  if (!bVar5) goto LAB_142b0b3bc;
  this_01 = (pFVar8->Root).Reference;
  uVar4._4_4_ = local_458._12_4_;
  uVar4._0_4_ = local_458.Size;
  if ((this_01->MountDir == (FMountDir *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x2a6,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_4e4.bMatchesDenyList = (this_01->DirectData).bMatchesDenyList != false;
  local_4e4.bIsOnAllowList = (this_01->DirectData).bIsOnAllowList != false;
  bVar5 = (this_01->DirectData).bIgnoreDenyList != false;
  local_4e4.bIgnoreDenyList = bVar5;
  if (iVar15 == 0) {
    if (2 < (byte)LogAssetRegistry._0_1_) {
      FScanDir::GetLocalAbsPath(this_01,&local_3a8);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
    }
    ::FString::Reset(&local_4e0,0);
    goto LAB_142b0b3bc;
  }
  local_398.DataPtr = pwVar17;
  local_488.DataPtr = (wchar_t *)0x0;
  local_488.Size = 0;
  local_478.DataPtr = (wchar_t *)0x0;
  local_478.Size = 0;
  local_398._8_8_ = uVar4;
  FPathViews::SplitFirstComponent(&local_398,&local_488,&local_478);
  if (local_478.Size == 0) {
LAB_142b0af13:
    local_4e8.bIsOnAllowList = local_4e4.bIsOnAllowList;
    local_4e8.bMatchesDenyList = local_4e4.bMatchesDenyList;
    local_4e8.bIgnoreDenyList = bVar5;
    ::FString::AssignRange(&local_4e0,pwVar17,iVar15);
  }
  else {
    if ((((this_01->bHasScanned == false) && (this_01->MountDir != (FMountDir *)0x0)) &&
        ((this_01->DirectData).bIsOnAllowList != false)) &&
       (((this_01->DirectData).bMatchesDenyList == false ||
        ((this_01->DirectData).bIgnoreDenyList != false)))) {
      local_388._12_4_ = local_488._12_4_;
      local_388.Size = local_488.Size;
      local_388.DataPtr = local_488.DataPtr;
      this_00 = FScanDir::FindOrAddSubDir(this_01,&local_388);
    }
    else {
      local_378._12_4_ = local_488._12_4_;
      local_378.Size = local_488.Size;
      local_378.DataPtr = local_488.DataPtr;
      this_00 = FScanDir::FindSubDir(this_01,&local_378);
      if (this_00 == (FScanDir *)0x0) goto LAB_142b0af13;
    }
    local_368._12_4_ = local_478._12_4_;
    local_368.Size = local_478.Size;
    local_368.DataPtr = local_478.DataPtr;
    this_01 = FScanDir::GetControllingDir(this_00,&local_368,false,&local_4e4,&local_4e8,&local_4e0)
    ;
  }
  if (((this_01 != (FScanDir *)0x0) && (local_4e8.bIsOnAllowList != false)) &&
     ((local_4e8.bMatchesDenyList == false || (local_4e8.bIgnoreDenyList != false)))) {
    local_428.DataPtr = (wchar_t *)local_4e0.Data.AllocatorInstance.Data;
    local_428.Size = local_4e0.Data.ArrayNum + -1;
    if (local_4e0.Data.ArrayNum == 0) {
      local_428.Size = 0;
    }
    FPathViews::GetCleanFilename(&local_3e8,&local_428);
    local_358.DataPtr = local_3e8.DataPtr;
    local_358.Size = local_3e8.Size;
    local_358._12_4_ = local_3e8._12_4_;
    EVar6 = GetFileType(&local_358);
    if (EVar6 != Invalid) {
      local_418.DataPtr = (wchar_t *)local_4e0.Data.AllocatorInstance.Data;
      local_418.Size = local_4e0.Data.ArrayNum + -1;
      if (local_4e0.Data.ArrayNum == 0) {
        local_418.Size = 0;
      }
      FPathViews::GetBaseFilenameWithPath(&local_3f8,&local_418);
      local_348.DataPtr = local_3f8.DataPtr;
      local_348.Size = local_3f8.Size;
      local_348._12_4_ = local_3f8._12_4_;
      bVar5 = DoesPathContainInvalidCharacters(EVar6,&local_348);
      if (!bVar5) {
        pFVar2 = (pFVar8->LongPackageName).Data.AllocatorInstance.Data;
        local_278.Base = local_258;
        local_278.End = (wchar_t *)local_58;
        local_278.bIsDynamic = false;
        local_278.bIsExternal = false;
        local_278.CurPos = local_258;
        iVar14 = (pFVar8->LongPackageName).Data.ArrayNum;
        iVar15 = iVar14 + -1;
        if (iVar14 == 0) {
          iVar15 = 0;
        }
        uVar13 = (ulong64)iVar15;
        if (local_58 < local_258 + uVar13) {
          TStringBuilderBase<wchar_t>::Extend(&local_278,uVar13);
        }
        if (iVar15 != 0) {
          pvVar10 = FGenericPlatformString::Memcpy(local_278.CurPos,pFVar2,uVar13 * 2);
          local_278.CurPos = (wchar_t *)((longlong)pvVar10 + uVar13 * 2);
        }
        pFVar11 = FScanDir::GetMountRelPath(this_01,&local_328);
        local_408 = (pFVar11->Data).AllocatorInstance.Data;
        iVar15 = (pFVar11->Data).ArrayNum;
        iStack_400 = iVar15 + -1;
        if (iVar15 == 0) {
          iStack_400 = 0;
        }
        local_338._12_4_ = uStack_3fc;
        local_338.Size = iStack_400;
        local_338.DataPtr = (wchar_t *)local_408;
        FPathViews::AppendPath(&local_278,&local_338);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        local_318.DataPtr = local_3f8.DataPtr;
        local_318.Size = local_3f8.Size;
        local_318._12_4_ = local_3f8._12_4_;
        FPathViews::AppendPath(&local_278,&local_318);
        pwVar17 = local_278.Base;
        iVar14 = (param_1->Data).ArrayNum;
        lVar16 = (longlong)local_278.CurPos - (longlong)local_278.Base;
        iVar15 = iVar14 + -1;
        local_4d0.LocalAbsPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar14 == 0) {
          iVar15 = 0;
        }
        local_4d0.LocalAbsPath.Data.ArrayNum = 0;
        local_4d0.LocalAbsPath.Data.ArrayMax = 0;
        pFVar12 = (FDiscoveredPathData *)
                  ::FString::ConstructFromPtrSize
                            (&local_308,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar15);
        if (&local_4d0 != pFVar12) {
          local_4d0.LocalAbsPath.Data.AllocatorInstance.Data =
               (pFVar12->LocalAbsPath).Data.AllocatorInstance.Data;
          (pFVar12->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4d0.LocalAbsPath.Data.ArrayNum = (pFVar12->LocalAbsPath).Data.ArrayNum;
          local_4d0.LocalAbsPath.Data.ArrayMax = (pFVar12->LocalAbsPath).Data.ArrayMax;
          (pFVar12->LocalAbsPath).Data.ArrayNum = 0;
          (pFVar12->LocalAbsPath).Data.ArrayMax = 0;
        }
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
        local_4d0.LongPackageName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d0.LongPackageName.Data.ArrayNum = 0;
        local_4d0.LongPackageName.Data.ArrayMax = 0;
        pFVar11 = ::FString::ConstructFromPtrSize(&local_2f8,pwVar17,(int)(lVar16 >> 1));
        if (&local_4d0.LongPackageName != pFVar11) {
          local_4d0.LongPackageName.Data.AllocatorInstance.Data =
               (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4d0.LongPackageName.Data.ArrayNum = (pFVar11->Data).ArrayNum;
          local_4d0.LongPackageName.Data.ArrayMax = (pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        local_4d0.RelPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d0.RelPath.Data.ArrayNum = 0;
        local_4d0.RelPath.Data.ArrayMax = 0;
        pFVar11 = ::FString::ConstructFromPtrSize(&local_2e8,local_3e8.DataPtr,local_3e8.Size);
        if (&local_4d0.RelPath != pFVar11) {
          local_4d0.RelPath.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4d0.RelPath.Data.ArrayNum = (pFVar11->Data).ArrayNum;
          local_4d0.RelPath.Data.ArrayMax = (pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
        local_4d0.PackageTimestamp.Ticks = local_298;
        local_4d0.bIsReadOnly = (bool)(local_288 >> 1 & 1);
        local_4d0.Type = EVar6;
        AddDiscoveredFile(this,&local_4d0);
        if (local_4d0.RelPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d0.RelPath.Data.AllocatorInstance.Data);
        }
        if (local_4d0.LongPackageName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_4d0.LongPackageName.Data.AllocatorInstance.Data);
        }
        if (local_4d0.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d0.LocalAbsPath.Data.AllocatorInstance.Data);
        }
        local_3d8 = local_4e0.Data.AllocatorInstance.Data;
        iStack_3d0 = local_4e0.Data.ArrayNum + -1;
        if (local_4e0.Data.ArrayNum == 0) {
          iStack_3d0 = 0;
        }
        local_2d8._12_4_ = uStack_3cc;
        local_2d8.Size = iStack_3d0;
        local_2d8.DataPtr = (wchar_t *)local_4e0.Data.AllocatorInstance.Data;
        bVar5 = FPathViews::IsPathLeaf(&local_2d8);
        if (bVar5) {
          local_3c8 = local_4e0.Data.AllocatorInstance.Data;
          iStack_3c0 = local_4e0.Data.ArrayNum + -1;
          if (local_4e0.Data.ArrayNum == 0) {
            iStack_3c0 = 0;
          }
          local_2c8._12_4_ = uStack_3bc;
          local_2c8.Size = iStack_3c0;
          local_2c8.DataPtr = (wchar_t *)local_4e0.Data.AllocatorInstance.Data;
          FScanDir::MarkFileAlreadyScanned(this_01,&local_2c8);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
      }
    }
  }
LAB_142b0b3bc:
  if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
  }
  return;
}

// OnFilesCreated @ 142b0b3f0

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::OnFilesCreated
          (FAssetDataDiscovery *this,TArrayView<FString_const_,int> *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  FString *pFVar5;
  FString *pFVar6;
  double local_res8;
  
  aVar4 = (this->ResultsLock).OwnerThreadId;
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar4 == aVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xc1d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lpCriticalSection = &this->TreeLock;
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
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  local_res8 = __real_bff0000000000000;
  (this->TreeLock).OwnerThreadId = aVar4;
  SetIsIdle(this,false,&local_res8);
  pFVar6 = param_1->DataPtr;
  pFVar5 = pFVar6 + param_1->ArrayNum;
  for (; pFVar6 != pFVar5; pFVar6 = pFVar6 + 1) {
    OnFileCreated(this,pFVar6);
  }
  aVar4 = (this->TreeLock).OwnerThreadId;
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar4 != aVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142b0b513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// OnInitialSearchCompleted @ 142b0b8e0

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::OnInitialSearchCompleted
          (FAssetDataDiscovery *this)

{
  FAssetDataDiscoveryCache::SaveCache(&this->Cache);
  FAssetDataDiscoveryCache::Shutdown(&this->Cache);
  return;
}

// PrioritizeSearchPath @ 142b0c050

/* WARNING: Removing unreachable block (ram,0x000142b0c61a) */
/* WARNING: Removing unreachable block (ram,0x000142b0c629) */
/* WARNING: Removing unreachable block (ram,0x000142b0c62e) */
/* WARNING: Enum "EPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::PrioritizeSearchPath
          (FAssetDataDiscovery *this,FString *param_1,EPriority param_2)

{
  FCriticalSectionQueryable *lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FPriorityScanDirData,TSizedDefaultAllocator<32>_>
  *pTVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  bool bVar7;
  atomic<unsigned_int> aVar8;
  atomic<unsigned_int> aVar9;
  int iVar10;
  FMountDir *this_00;
  FPathExistence *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res8 [8];
  bool local_res10 [8];
  FInherited local_res20 [2];
  FSetPathProperties local_188;
  FSetPathProperties local_180;
  FScanDirAndParentData local_178;
  FScanDir *local_168;
  undefined1 local_160 [4];
  undefined4 local_15c;
  FScriptContainerElement local_158;
  FPathExistence local_150;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  TStringView<wchar_t> local_118;
  double local_108;
  FScriptContainerElement *local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  aVar9 = (this->ResultsLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 == aVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xacb,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lpCriticalSection = &this->TreeLock;
  if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x53,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  local_108 = __real_bff0000000000000;
  (this->TreeLock).OwnerThreadId = aVar9;
  SetIsIdle(this,false,&local_108);
  local_e8 = (param_1->Data).AllocatorInstance.Data;
  iVar10 = (param_1->Data).ArrayNum;
  iVar16 = 0;
  iStack_e0 = iVar10 + -1;
  if (iVar10 == 0) {
    iStack_e0 = iVar16;
  }
  local_98._12_4_ = uStack_dc;
  local_98.Size = iStack_e0;
  local_98.DataPtr = (wchar_t *)local_e8;
  this_00 = FindContainingMountPoint(this,&local_98);
  if (this_00 == (FMountDir *)0x0) {
    if (2 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  else {
    iVar10 = (param_1->Data).ArrayNum;
    local_188.IsOnAllowList.bIsSet = false;
    local_188.MatchesDenyList.bIsSet = false;
    local_188.IgnoreDenyList.bIsSet = false;
    iVar15 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar15 = iVar16;
    }
    local_188.HasScanned.bIsSet = false;
    local_178.ScanDir.Reference = (FScanDir *)0x0;
    local_150.LocalAbsPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.LocalAbsPath.Data.ArrayNum = 0;
    local_150.LocalAbsPath.Data.ArrayMax = 0;
    pFVar11 = (FPathExistence *)
              ::FString::ConstructFromPtrSize
                        (&local_88,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar15);
    if (&local_150 != pFVar11) {
      if (local_150.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.LocalAbsPath.Data.AllocatorInstance.Data);
      }
      local_150.LocalAbsPath.Data.AllocatorInstance.Data =
           (pFVar11->LocalAbsPath).Data.AllocatorInstance.Data;
      (pFVar11->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.LocalAbsPath.Data.ArrayNum = (pFVar11->LocalAbsPath).Data.ArrayNum;
      local_150.LocalAbsPath.Data.ArrayMax = (pFVar11->LocalAbsPath).Data.ArrayMax;
      (pFVar11->LocalAbsPath).Data.ArrayNum = 0;
      (pFVar11->LocalAbsPath).Data.ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_150.ModificationTime.Ticks = 0;
    local_150.PathType = MissingParentDir;
    local_150.bIsReadOnly = false;
    local_150.bHasExistenceData = false;
    if (local_178.ScanDir.Reference != (FScanDir *)0x0) {
      plVar1 = &(local_178.ScanDir.Reference)->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)(local_178.ScanDir.Reference)->_padding_)(local_178.ScanDir.Reference,1);
      }
    }
    local_178.ParentData.bIsOnAllowList = false;
    local_178.ParentData.bMatchesDenyList = false;
    local_178.ParentData.bIgnoreDenyList = false;
    iVar10 = (this_00->LocalAbsPath).Data.ArrayNum;
    local_128 = (this_00->LocalAbsPath).Data.AllocatorInstance.Data;
    local_118.DataPtr = (wchar_t *)0x0;
    iStack_120 = iVar10 + -1;
    if (iVar10 == 0) {
      iStack_120 = iVar16;
    }
    local_118.Size = 0;
    uStack_11c = local_a8._12_4_;
    local_d8 = local_150.LocalAbsPath.Data.AllocatorInstance.Data;
    local_78.Size = iStack_120;
    local_78._12_4_ = local_a8._12_4_;
    iStack_d0 = local_150.LocalAbsPath.Data.ArrayNum + -1;
    if (local_150.LocalAbsPath.Data.ArrayNum == 0) {
      iStack_d0 = 0;
    }
    local_68._12_4_ = uStack_cc;
    local_68.Size = iStack_d0;
    local_68.DataPtr = (wchar_t *)local_150.LocalAbsPath.Data.AllocatorInstance.Data;
    local_78.DataPtr = (wchar_t *)local_128;
    bVar7 = FPathViews::TryMakeChildPathRelativeTo(&local_68,&local_78,&local_118);
    uVar6 = local_118._12_4_;
    if (bVar7) {
      if (local_188.IgnoreDenyList.bIsSet == false) {
LAB_142b0c44d:
        local_a8._12_4_ = local_118._12_4_;
        local_a8.Size = local_118.Size;
        local_b8.DataPtr = (wchar_t *)0x0;
        local_b8.Size = 0;
        local_res10[0] = false;
        local_res20[0].bIsOnAllowList = false;
        local_res20[0].bMatchesDenyList = false;
        local_res20[0].bIgnoreDenyList = false;
        local_a8.DataPtr = local_118.DataPtr;
        FScanDir::TrySetDirectoryProperties
                  ((this_00->Root).Reference,&local_150,&local_a8,local_res20,&local_188,&local_178,
                   &local_b8,local_res10);
      }
      else {
        iVar10 = (this_00->ChildMountPaths).ArrayNum;
        uStack_11c = local_118._12_4_;
        iStack_120 = local_118.Size;
        pFVar12 = (this_00->ChildMountPaths).AllocatorInstance.Data;
        local_128 = (FScriptContainerElement *)local_118.DataPtr;
        pFVar13 = pFVar12 + (longlong)iVar10 * 0x10;
        while( true ) {
          if ((this_00->ChildMountPaths).ArrayNum != iVar10) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar12 == pFVar13) goto LAB_142b0c44d;
          local_100 = local_128;
          iStack_f8 = iStack_120;
          local_c8 = *(wchar_t **)pFVar12;
          uStack_f4 = uVar6;
          local_58._12_4_ = uVar6;
          local_58.Size = iStack_120;
          iStack_c0 = *(int *)(pFVar12 + 8) + -1;
          if (*(int *)(pFVar12 + 8) == 0) {
            iStack_c0 = 0;
          }
          local_58.DataPtr = (wchar_t *)local_128;
          local_48._12_4_ = uStack_bc;
          local_48.Size = iStack_c0;
          local_48.DataPtr = local_c8;
          bVar7 = FPathViews::IsParentPathOf(&local_48,&local_58);
          if (bVar7) break;
          pFVar12 = pFVar12 + 0x10;
        }
        bVar7 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1152219097065325898>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x54a,"!IsChildMountPath(RelPath)");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_180.IsOnAllowList.bIsSet = local_188.IsOnAllowList.bIsSet;
        if (local_188.IsOnAllowList.bIsSet != false) {
          local_180.IsOnAllowList.TypedValue = local_188.IsOnAllowList.TypedValue;
        }
        local_180.MatchesDenyList.bIsSet = local_188.MatchesDenyList.bIsSet;
        if (local_188.MatchesDenyList.bIsSet != false) {
          local_180.MatchesDenyList.TypedValue = local_188.MatchesDenyList.TypedValue;
        }
        if (local_188.IgnoreDenyList.bIsSet != false) {
          local_180.IgnoreDenyList.TypedValue = local_188.IgnoreDenyList.TypedValue;
        }
        local_180.HasScanned.bIsSet = local_188.HasScanned.bIsSet;
        if (local_188.HasScanned.bIsSet != false) {
          local_180.HasScanned.TypedValue = local_188.HasScanned.TypedValue;
        }
        local_180.IgnoreDenyList.bIsSet = false;
        FMountDir::TrySetDirectoryProperties
                  (this_00,&local_150,&local_180,&local_178,(TStringView<wchar_t> *)0x0,(bool *)0x0)
        ;
      }
    }
    else {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1152219097065325892>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x544,
                         "FPathViews::TryMakeChildPathRelativeTo(QueryPath.GetLocalAbsPath(), GetLocalAbsPath(), RelPath)"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((local_178.ScanDir.Reference != (FScanDir *)0x0) &&
        ((local_178.ScanDir.Reference)->MountDir != (FMountDir *)0x0)) &&
       ((local_178.ScanDir.Reference)->bIsComplete == false)) {
      pTVar3 = &this->PriorityScanDirs;
      pFVar13 = (pTVar3->AllocatorInstance).Data;
      pFVar12 = pFVar13 + (longlong)(this->PriorityScanDirs).ArrayNum * 0x18;
      for (; (pFVar14 = (FScriptContainerElement *)0x0, pFVar13 != pFVar12 &&
             (pFVar14 = pFVar13, *(FScanDir **)pFVar13 != local_178.ScanDir.Reference));
          pFVar13 = pFVar13 + 0x18) {
      }
      if (pFVar14 == (FScriptContainerElement *)0x0) {
        local_168 = local_178.ScanDir.Reference;
        LOCK();
        *(int *)&(local_178.ScanDir.Reference)->_padding_ =
             (int)(local_178.ScanDir.Reference)->_padding_ + 1;
        UNLOCK();
        pFVar12 = (pTVar3->AllocatorInstance).Data;
        local_160._0_3_ = 0;
        local_158 = (FScriptContainerElement)0x0;
        local_15c = 0;
        if (((pFVar12 <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 <
             pFVar12 + (longlong)(this->PriorityScanDirs).ArrayMax * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (this->PriorityScanDirs).ArrayNum;
        piVar2 = &(this->PriorityScanDirs).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar3->AllocatorInstance,piVar2);
        }
        (this->PriorityScanDirs).ArrayNum = iVar10 + 1;
        pFVar14 = (pTVar3->AllocatorInstance).Data;
        *(undefined8 *)(pFVar14 + (longlong)iVar10 * 0x18) = 0;
        pFVar14 = pFVar14 + (longlong)iVar10 * 0x18;
        *(FScanDir **)pFVar14 = local_168;
        local_168 = (FScanDir *)0x0;
        *(undefined2 *)(pFVar14 + 8) = local_160._0_2_;
        pFVar14[10] = local_160[2];
        *(undefined4 *)(pFVar14 + 0xc) = local_15c;
        pFVar14[0x10] = local_158;
      }
      if (pFVar14[0x10] == (FScriptContainerElement)0x0) {
        *(int *)(pFVar14 + 0xc) = *(int *)(pFVar14 + 0xc) + 1;
        pFVar14[0x10] = (FScriptContainerElement)0x1;
      }
      *(undefined2 *)(pFVar14 + 8) = local_178.ParentData._0_2_;
      pFVar14[10] = (FScriptContainerElement)local_178.ParentData.bIgnoreDenyList;
    }
    if (local_150.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.LocalAbsPath.Data.AllocatorInstance.Data);
    }
    if (local_178.ScanDir.Reference != (FScanDir *)0x0) {
      plVar1 = &(local_178.ScanDir.Reference)->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)(local_178.ScanDir.Reference)->_padding_)(local_178.ScanDir.Reference,1);
      }
    }
  }
  aVar9 = (this->TreeLock).OwnerThreadId;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 != aVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveMountPoint @ 142b16260

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::RemoveMountPoint
          (FAssetDataDiscovery *this,FString *param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  double local_res8;
  
  aVar4 = (this->ResultsLock).OwnerThreadId;
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
  lpCriticalSection = &this->TreeLock;
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
  (this->TreeLock).OwnerThreadId = aVar4;
  SetIsIdle(this,false,&local_res8);
  RemoveMountPointInternal(this,param_1);
  aVar4 = (this->TreeLock).OwnerThreadId;
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
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142b1635d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveMountPointInternal @ 142b164b0

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::RemoveMountPointInternal
          (FAssetDataDiscovery *this,FString *param_1)

{
  int *piVar1;
  TDefaultDelete<UE::AssetDataGather::Private::FMountDir> *this_00;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FMountDir *this_01;
  FMountDir *this_02;
  FMountDir *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  atomic<unsigned_int> aVar11;
  uint uVar12;
  int iVar13;
  TArray<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,TSizedDefaultAllocator<32>_>
  *pTVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  FString *local_res10;
  undefined1 local_res18 [8];
  FMountDir *local_res20;
  undefined4 uStack_dc;
  TArray<UE::AssetDataGather::Private::FMountDir_*,TSizedDefaultAllocator<32>_> local_d8;
  TArray<UE::AssetDataGather::Private::FMountDir_*,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68 [2];
  
  aVar2 = (this->TreeLock).OwnerThreadId;
  local_res10 = param_1;
  aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar2 != aVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TreeLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0xbde,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_b8 = (param_1->Data).AllocatorInstance.Data;
  aVar2 = (this->TreeLock).OwnerThreadId;
  iVar13 = (param_1->Data).ArrayNum;
  uVar18 = 0;
  iStack_b0 = iVar13 + -1;
  if (iVar13 == 0) {
    iStack_b0 = 0;
  }
  aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar2 != aVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TreeLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0xc91,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar9 = local_b8;
  uVar12 = (this->MountDirs).ArrayNum;
  pFVar4 = (this->MountDirs).AllocatorInstance.Data;
  if (0 < (int)uVar12) {
    uVar8._4_4_ = uStack_ac;
    uVar8._0_4_ = iStack_b0;
    uVar18 = 0;
    do {
      local_98.DataPtr = (wchar_t *)pFVar9;
      uVar19 = uVar12 >> 1;
      lVar5 = *(longlong *)(pFVar4 + (longlong)(int)(uVar19 + uVar18) * 8);
      local_88.DataPtr = *(wchar_t **)(lVar5 + 0x60);
      iVar3 = *(int *)(lVar5 + 0x68);
      iVar13 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar13 = 0;
      }
      local_88._12_4_ = uStack_dc;
      local_88.Size = iVar13;
      local_98._8_8_ = uVar8;
      bVar10 = FPathViews::Less(&local_88,&local_98);
      if (bVar10) {
        uVar18 = uVar19 + uVar18 + (uVar12 & 1);
      }
      param_1 = local_res10;
      uVar12 = uVar19;
    } while (uVar19 != 0);
  }
  pTVar14 = &this->MountDirs;
  uVar12 = (this->MountDirs).ArrayNum;
  if (uVar18 != uVar12) {
    local_a8 = (param_1->Data).AllocatorInstance.Data;
    iVar13 = (param_1->Data).ArrayNum;
    iStack_a0 = iVar13 + -1;
    if (iVar13 == 0) {
      iStack_a0 = 0;
    }
    uVar16 = ~uVar18 >> 0x1f;
    uVar19 = 0;
    if ((int)uVar18 < (int)uVar12) {
      uVar19 = uVar16;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_78._12_4_ = uStack_9c;
    local_78.Size = iStack_a0;
    lVar17 = (longlong)(int)uVar18;
    local_78.DataPtr = (wchar_t *)local_a8;
    lVar5 = *(longlong *)((pTVar14->AllocatorInstance).Data + lVar17 * 8);
    local_68[0].DataPtr = *(wchar_t **)(lVar5 + 0x60);
    iVar3 = *(int *)(lVar5 + 0x68);
    iVar13 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar13 = 0;
    }
    local_68[0]._12_4_ = uStack_dc;
    local_68[0].Size = iVar13;
    bVar10 = FPathViews::Equals(local_68,&local_78);
    if (bVar10) {
      uVar12 = 0;
      if ((int)uVar18 < (this->MountDirs).ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (pTVar14->AllocatorInstance).Data;
      this_01 = *(FMountDir **)(pFVar4 + lVar17 * 8);
      *(undefined8 *)(pFVar4 + lVar17 * 8) = 0;
      uVar12 = 0;
      if ((int)uVar18 < (this->MountDirs).ArrayNum) {
        uVar12 = uVar16;
      }
      local_res20 = this_01;
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (pTVar14->AllocatorInstance).Data;
      this_00 = (TDefaultDelete<UE::AssetDataGather::Private::FMountDir> *)(pFVar4 + lVar17 * 8);
      TDefaultDelete<UE::AssetDataGather::Private::FMountDir>::operator()
                (this_00,*(FMountDir **)(pFVar4 + lVar17 * 8));
      iVar13 = (this->MountDirs).ArrayNum + ~uVar18;
      if (iVar13 != 0) {
        memmove(this_00,this_00 + 8,(longlong)iVar13 << 3);
      }
      piVar1 = &(this->MountDirs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar14->AllocatorInstance,(this->MountDirs).ArrayNum,
                 &(this->MountDirs).ArrayMax);
      this_02 = this_01->ParentMount;
      if (this_02 == (FMountDir *)0x0) {
        FMountDir::GetChildMounts(this_01,&local_c8);
        iVar13 = local_c8.ArrayNum;
        pFVar4 = local_c8.AllocatorInstance.Data + (longlong)iVar13 * 8;
        FVar15.Data = local_c8.AllocatorInstance.Data;
        while( true ) {
          if (local_c8.ArrayNum != iVar13) {
            `TCheckedPointerIterator<UE::AssetDataGather::Private::FMountDir_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res18);
          }
          if (FVar15.Data == pFVar4) break;
          lVar5 = *(longlong *)FVar15.Data;
          FVar15.Data = FVar15.Data + 8;
          *(undefined8 *)(lVar5 + 0x90) = 0;
        }
        if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.AllocatorInstance.Data);
        }
      }
      else {
        FMountDir::GetChildMounts(this_01,&local_d8);
        iVar13 = local_d8.ArrayNum;
        pFVar4 = local_d8.AllocatorInstance.Data + (longlong)iVar13 * 8;
        FVar15.Data = local_d8.AllocatorInstance.Data;
        while( true ) {
          if (local_d8.ArrayNum != iVar13) {
            `TCheckedPointerIterator<UE::AssetDataGather::Private::FMountDir_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res8);
          }
          if (FVar15.Data == pFVar4) break;
          pFVar6 = *(FMountDir **)FVar15.Data;
          FMountDir::AddChildMount(this_02,pFVar6);
          pFVar6->ParentMount = this_02;
          FVar15.Data = FVar15.Data + 8;
        }
        if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
        FMountDir::RemoveChildMount(this_02,this_01);
      }
      TDefaultDelete<UE::AssetDataGather::Private::FMountDir>::operator()
                ((TDefaultDelete<UE::AssetDataGather::Private::FMountDir> *)&local_res20,this_01);
    }
  }
  return;
}

// Run @ 142b18d00

uint __thiscall UE::AssetDataGather::Private::FAssetDataDiscovery::Run(FAssetDataDiscovery *this)

{
  FCriticalSectionQueryable *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  uint uVar8;
  atomic<unsigned_int> aVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AssetRegistry,true);
  aVar9 = (this->TreeLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 == aVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TreeLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x67d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return uVar8;
  }
  aVar9 = (this->ResultsLock).OwnerThreadId;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar9 == aVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResultsLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x67e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return uVar8;
  }
  fVar3 = __real_3dcccccd;
  aVar9 = this->IsStopped;
  do {
    if (aVar9 != (atomic<unsigned_int>)0x0) {
      FMemScope::~FMemScope(&local_res10);
      FLLMScope::~FLLMScope(local_res8);
      return 0;
    }
    bVar4 = false;
    if (this->IsStopped == (atomic<unsigned_int>)0x0) {
      do {
        if ((this->bIsIdle != (atomic<bool>)0x0) || (this->IsPaused != (atomic<unsigned_int>)0x0))
        break;
        if (bVar4) {
LAB_142b18ec0:
          TickInternal(this,true);
        }
        else {
          pFVar1 = &this->TreeLock;
          if ((pFVar1 == (FCriticalSectionQueryable *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("SynchObject",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                                 ,0x53,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return uVar8;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
          (this->TreeLock).OwnerThreadId = aVar9;
          bVar5 = (this->TickOwner).bHasOwner == false;
          if (bVar5) {
            (this->TickOwner).bHasOwner = true;
            aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
            (this->TickOwner).OwnerThreadId = aVar9;
          }
          aVar9 = (this->TreeLock).OwnerThreadId;
          aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
          if ((aVar9 != aVar7) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsLockedOnCurrentThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                                 ,0x2b,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return uVar8;
          }
          (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          if (bVar5) {
            bVar4 = true;
            goto LAB_142b18ec0;
          }
          FWindowsPlatformProcess::Sleep(fVar3);
        }
      } while (this->IsStopped == (atomic<unsigned_int>)0x0);
      if (bVar4) {
        pFVar1 = &this->TreeLock;
        if ((pFVar1 == (FCriticalSectionQueryable *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("SynchObject",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0x53,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return uVar8;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
        (this->TreeLock).OwnerThreadId = aVar9;
        aVar9 = (this->TickOwner).OwnerThreadId;
        aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
        if ((aVar9 != aVar7) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsOwnedByCurrentThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0xb7,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return uVar8;
        }
        (this->TickOwner).bHasOwner = false;
        (this->TickOwner).OwnerThreadId = (atomic<unsigned_int>)0x0;
        aVar9 = (this->TreeLock).OwnerThreadId;
        aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
        if ((aVar9 != aVar7) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLockedOnCurrentThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                               ,0x2b,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return uVar8;
        }
        (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
    }
    aVar9 = this->IsStopped;
    while ((aVar9 == (atomic<unsigned_int>)0x0 &&
           ((this->IsPaused != (atomic<unsigned_int>)0x0 || (this->bIsIdle != (atomic<bool>)0x0)))))
    {
      FWindowsPlatformProcess::Sleep(fVar3);
      aVar9 = this->IsStopped;
    }
    aVar9 = this->IsStopped;
  } while( true );
}

// SetIsIdle @ 142b1e920

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::SetIsIdle(FAssetDataDiscovery *this,bool param_1)

{
  double local_res18 [2];
  
  local_res18[0] = __real_bff0000000000000;
  SetIsIdle(this,param_1,local_res18);
  return;
}

// SetIsIdle @ 142b1e950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::SetIsIdle
          (FAssetDataDiscovery *this,bool param_1,double *param_2)

{
  FCriticalSectionQueryable *lpCriticalSection;
  double dVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  double dVar6;
  
  aVar5 = (this->TreeLock).OwnerThreadId;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar5 != aVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x8d6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->bIsIdle != (atomic<bool>)param_1) {
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
    LOCK();
    this->bIsIdle = (atomic<bool>)param_1;
    UNLOCK();
    if (this->Thread != (FRunnableThread *)0x0) {
      if (this->bIsIdle == (atomic<bool>)0x0) {
        this->NumDiscoveredFiles = 0;
      }
      else {
        dVar1 = *param_2;
        if (0.0 <= dVar1) {
          dVar6 = FWindowsPlatformTime::Seconds();
          this->CurrentDiscoveryTime = (dVar6 - dVar1) + this->CurrentDiscoveryTime;
          *param_2 = -1.0;
        }
        this->CumulativeDiscoveredFiles = this->CumulativeDiscoveredFiles + this->NumDiscoveredFiles
        ;
        this->CumulativeDiscoveryTime =
             (float)this->CurrentDiscoveryTime + this->CumulativeDiscoveryTime;
        if (5 < (byte)LogAssetRegistry._0_1_) {
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        this->CurrentDiscoveryTime = 0.0;
      }
    }
    if (this->bIsIdle != (atomic<bool>)0x0) {
      aVar5 = (this->TickOwner).OwnerThreadId;
      aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar5 != aVar4) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TickOwner.IsOwnedByCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x8f9,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      Shrink(this);
    }
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
  }
  return;
}

// SetPropertiesAndWait @ 142b1f1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b1fbcf) */
/* WARNING: Removing unreachable block (ram,0x000142b1fbe1) */
/* WARNING: Removing unreachable block (ram,0x000142b1fbe6) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::SetPropertiesAndWait
          (FAssetDataDiscovery *this,
          TArrayView<UE::AssetDataGather::Private::FPathExistence,int> *param_1,bool param_2,
          bool param_3,bool param_4)

{
  longlong *plVar1;
  int *piVar2;
  TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FPriorityScanDirData,TSizedDefaultAllocator<32>_>
  *pTVar3;
  EType EVar4;
  int iVar5;
  FMountDir *pFVar6;
  FEvent *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  EGatherableFileType EVar14;
  bool bVar15;
  bool bVar16;
  atomic<unsigned_int> aVar17;
  atomic<unsigned_int> aVar18;
  int iVar19;
  uint uVar20;
  FPathExistence *pFVar21;
  FString *pFVar22;
  void *pvVar23;
  FDiscoveredPathData *pFVar24;
  ulong64 uVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  FCriticalSectionQueryable *lpCriticalSection;
  int iVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  FPathExistence *this_00;
  undefined1 auStackY_588 [32];
  bool local_52c;
  EGatherableFileType local_52b;
  undefined1 local_52a [2];
  ForAnyElementType local_528;
  undefined8 local_520;
  FScanDirAndParentData local_518;
  FSetPathProperties local_508;
  int local_500;
  undefined4 local_4f8 [2];
  FScanDir *local_4f0;
  undefined1 local_4e8 [4];
  undefined4 local_4e4;
  FScriptContainerElement local_4e0;
  FMountDir *local_4d8;
  FPathExistence *local_4d0;
  TStringView<wchar_t> local_4c8;
  double local_4b8;
  FDateTime local_4b0;
  double local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  TStringView<wchar_t> local_490;
  TStringView<wchar_t> local_480;
  FScriptContainerElement *local_468;
  int iStack_460;
  undefined4 uStack_45c;
  TStringView<wchar_t> local_458;
  TStringView<wchar_t> local_448;
  wchar_t *local_438;
  int iStack_430;
  undefined4 uStack_42c;
  FScriptContainerElement *local_428;
  int iStack_420;
  undefined4 uStack_41c;
  FScriptContainerElement *local_418;
  int iStack_410;
  undefined4 uStack_40c;
  FScriptContainerElement *local_408;
  int iStack_400;
  undefined4 uStack_3fc;
  wchar_t *local_3f8;
  EType EStack_3f0;
  undefined4 uStack_3ec;
  FScriptContainerElement *local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  FScriptContainerElement *local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  FString local_3a8;
  TStringView<wchar_t> local_398;
  TStringView<wchar_t> local_388;
  TStringView<wchar_t> local_378;
  FString local_368;
  TStringView<wchar_t> local_358;
  TStringView<wchar_t> local_348;
  TStringView<wchar_t> local_338;
  TStringView<wchar_t> local_328;
  TStringView<wchar_t> local_318;
  TStringView<wchar_t> local_308;
  TArrayView<wchar_t_const_,int> local_2f8;
  TStringView<wchar_t> local_2e8;
  TStringView<wchar_t> local_2d8;
  FString local_2c8;
  FDiscoveredPathData local_2b8;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_588;
  aVar18 = (this->ResultsLock).OwnerThreadId;
  local_528.Data = (FScriptContainerElement *)0x0;
  local_520 = 0;
  bVar16 = false;
  aVar17 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar18 == aVar17) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ResultsLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x9ce,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((&this->TreeLock == (FCriticalSectionQueryable *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SynchObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x53,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->TreeLock);
  aVar18 = (atomic<unsigned_int>)GetCurrentThreadId();
  this_00 = param_1->DataPtr;
  (this->TreeLock).OwnerThreadId = aVar18;
  dVar11 = __real_bff0000000000000;
  pFVar21 = this_00 + param_1->ArrayNum;
  for (; local_4d0 = this_00, this_00 != pFVar21; this_00 = this_00 + 1) {
    local_3d8 = (this_00->LocalAbsPath).Data.AllocatorInstance.Data;
    iVar19 = (this_00->LocalAbsPath).Data.ArrayNum;
    iStack_3d0 = iVar19 + -1;
    if (iVar19 == 0) {
      iStack_3d0 = 0;
    }
    local_2d8._12_4_ = uStack_3cc;
    local_2d8.Size = iStack_3d0;
    local_2d8.DataPtr = (wchar_t *)local_3d8;
    local_4d8 = FindContainingMountPoint(this,&local_2d8);
    if (local_4d8 == (FMountDir *)0x0) {
      if (4 < (byte)LogAssetRegistry._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
    }
    else {
      local_508.MatchesDenyList.bIsSet = false;
      local_508.IgnoreDenyList = (TOptional<bool>)((ushort)local_508.IgnoreDenyList & 0xff);
      local_508.HasScanned = (TOptional<bool>)((ushort)local_508.HasScanned & 0xff);
      if (param_2) {
        local_508.IsOnAllowList.TypedValue = true;
      }
      if (param_3) {
        local_508.HasScanned.TypedValue = false;
        local_508.HasScanned.bIsSet = true;
      }
      if (param_4) {
        local_508.IgnoreDenyList.TypedValue = true;
        local_508.IgnoreDenyList.bIsSet = true;
      }
      local_518.ScanDir.Reference = (FScanDir *)0x0;
      local_518.ParentData.bIsOnAllowList = false;
      local_518.ParentData.bMatchesDenyList = false;
      local_518.ParentData.bIgnoreDenyList = false;
      local_4c8.DataPtr = (wchar_t *)0x0;
      local_4c8.Size = 0;
      local_508.IsOnAllowList.bIsSet = param_2;
      FMountDir::TrySetDirectoryProperties
                (local_4d8,this_00,&local_508,&local_518,&local_4c8,&local_52c);
      if (local_52c != false) {
        local_4b8 = dVar11;
        SetIsIdle(this,false,&local_4b8);
      }
      bVar15 = false;
      bVar12 = false;
      bVar10 = false;
      pFVar31 = (FScriptContainerElement *)0x0;
      if (local_518.ScanDir.Reference == (FScanDir *)0x0) {
LAB_142b1fc21:
        if (5 < (byte)LogAssetRegistry._0_1_) {
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
        if (local_518.ScanDir.Reference == (FScanDir *)0x0) goto LAB_142b1f5bd;
      }
      else {
        iVar19 = 0;
        local_498 = 0;
        local_4a0 = 0;
        bVar13 = false;
        if ((local_518.ScanDir.Reference)->MountDir == (FMountDir *)0x0) {
LAB_142b1f467:
          bVar15 = bVar13;
          if (param_2) goto LAB_142b1f471;
          bVar13 = false;
        }
        else {
          if ((local_518.ParentData.bIsOnAllowList != false) ||
             (bVar10 = false, ((local_518.ScanDir.Reference)->DirectData).bIsOnAllowList != false))
          {
            bVar10 = true;
          }
          bVar12 = false;
          if ((local_518.ParentData.bMatchesDenyList != false) ||
             (((local_518.ScanDir.Reference)->DirectData).bMatchesDenyList != false)) {
            bVar12 = true;
          }
          if (((FScriptContainerElement)local_518.ParentData.bIgnoreDenyList !=
               (FScriptContainerElement)0x0) ||
             (((local_518.ScanDir.Reference)->DirectData).bIgnoreDenyList != false)) {
            bVar15 = true;
          }
          local_3c8 = 0;
          local_3c0 = 0;
          local_3b8 = 0;
          local_3b0 = 0;
          bVar13 = bVar15;
          if (!bVar10) goto LAB_142b1f467;
LAB_142b1f471:
          bVar13 = true;
        }
        if (((!bVar12) || (bVar15)) || (param_4)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if ((!bVar13) || (bVar9)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if ((local_518.ScanDir.Reference == (FScanDir *)0x0) || (!bVar13)) goto LAB_142b1fc21;
        if (((param_3) || ((local_518.ScanDir.Reference)->bIsComplete == false)) ||
           (this_00->bHasExistenceData != false)) {
          pFVar22 = ::FString::ConstructFromPtrSize(&local_3a8,local_4c8.DataPtr,local_4c8.Size);
          if (&local_2c8 != pFVar22) {
            pFVar31 = (pFVar22->Data).AllocatorInstance.Data;
            (pFVar22->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar19 = (pFVar22->Data).ArrayNum;
            (pFVar22->Data).ArrayNum = 0;
            (pFVar22->Data).ArrayMax = 0;
          }
          if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
          }
          FPathExistence::LoadExistenceData(this_00);
          EVar4 = this_00->PathType;
          if (EVar4 == MissingParentDir) {
            if (5 < (byte)LogAssetRegistry._0_1_) {
              Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            }
LAB_142b1f575:
            if (pFVar31 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar31);
            }
          }
          else {
            if ((EVar4 & ~MissingButDirExists) == Directory) {
              if ((local_518.ScanDir.Reference)->bIsComplete != false) goto LAB_142b1f575;
              if (EVar4 == Directory) {
                if (1 < iVar19) goto LAB_142b1f575;
              }
              else if (EVar4 == MissingButDirExists) {
                local_3f8 = (wchar_t *)local_4f8;
                local_2f8._12_4_ = uStack_3ec;
                local_2f8.ArrayNum = 2;
                iStack_3e0 = iVar19 + -1;
                local_4f8[0] = 0x5c002f;
                if (iVar19 == 0) {
                  iStack_3e0 = 0;
                }
                local_2e8._12_4_ = uStack_3dc;
                local_2e8.Size = iStack_3e0;
                EStack_3f0 = EVar4;
                local_3e8 = pFVar31;
                local_2f8.DataPtr = local_3f8;
                local_2e8.DataPtr = (wchar_t *)pFVar31;
                iVar19 = String::FindFirstOfAnyChar(&local_2e8,&local_2f8,CaseSensitive,(int *)0x0);
                if (iVar19 != -1) goto LAB_142b1f575;
              }
              iVar19 = (int)local_520;
              if ((int)local_520 == local_520._4_4_) {
                iVar19 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_528,(int *)((longlong)&local_520 + 4));
              }
              local_520 = CONCAT44(local_520._4_4_,iVar19 + 1);
              lVar27 = (longlong)iVar19;
              *(undefined8 *)&local_528.Data[lVar27 * 0x10].field_0x0 = 0;
              *(undefined8 *)(local_528.Data + lVar27 * 0x10 + 8) = 0;
              if (local_518.ScanDir.Reference != (FScanDir *)0x0) {
                *(FScanDir **)&local_528.Data[lVar27 * 0x10].field_0x0 = local_518.ScanDir.Reference
                ;
                LOCK();
                *(int *)&(local_518.ScanDir.Reference)->_padding_ =
                     (int)(local_518.ScanDir.Reference)->_padding_ + 1;
                UNLOCK();
              }
              pTVar3 = &this->PriorityScanDirs;
              local_528.Data[lVar27 * 0x10 + 8] = (FScriptContainerElement)(EVar4 == Directory);
              pFVar30 = (pTVar3->AllocatorInstance).Data;
              pFVar26 = pFVar30 + (longlong)(this->PriorityScanDirs).ArrayNum * 0x18;
              for (; pFVar30 != pFVar26; pFVar30 = pFVar30 + 0x18) {
                if (*(FScanDir **)pFVar30 == local_518.ScanDir.Reference) goto LAB_142b1fad6;
              }
              pFVar30 = (FScriptContainerElement *)0x0;
LAB_142b1fad6:
              if (pFVar30 == (FScriptContainerElement *)0x0) {
                local_4f0 = local_518.ScanDir.Reference;
                if (local_518.ScanDir.Reference != (FScanDir *)0x0) {
                  LOCK();
                  *(int *)&(local_518.ScanDir.Reference)->_padding_ =
                       (int)(local_518.ScanDir.Reference)->_padding_ + 1;
                  UNLOCK();
                }
                pFVar26 = (pTVar3->AllocatorInstance).Data;
                local_4e8._0_3_ = 0;
                local_4e0 = (FScriptContainerElement)0x0;
                local_4e4 = 0;
                if (((pFVar26 <= (FScriptContainerElement *)&local_4f0) &&
                    ((FScriptContainerElement *)&local_4f0 <
                     pFVar26 + (longlong)(this->PriorityScanDirs).ArrayMax * 0x18)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar19 = (this->PriorityScanDirs).ArrayNum;
                piVar2 = &(this->PriorityScanDirs).ArrayMax;
                if (iVar19 == *piVar2) {
                  iVar19 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&pTVar3->AllocatorInstance,piVar2);
                }
                (this->PriorityScanDirs).ArrayNum = iVar19 + 1;
                pFVar30 = (pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 0x18;
                *(longlong *)pFVar30 = 0;
                *(FScanDir **)pFVar30 = local_4f0;
                local_4f0 = (FScanDir *)0x0;
                *(undefined2 *)(pFVar30 + 8) = local_4e8._0_2_;
                pFVar30[10] = local_4e8[2];
                *(undefined4 *)(pFVar30 + 0xc) = local_4e4;
                pFVar30[0x10] = local_4e0;
              }
              *(int *)(pFVar30 + 0xc) = *(int *)(pFVar30 + 0xc) + 1;
              *(undefined2 *)(pFVar30 + 8) = local_518.ParentData._0_2_;
              pFVar30[10] = (FScriptContainerElement)local_518.ParentData.bIgnoreDenyList;
            }
            else {
              if ((EVar4 != File) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PathType == FPathExistence::EType::File",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                                      ,0xa5e,L""), bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((((local_518.ScanDir.Reference)->bHasScanned == false) || (!bVar10)) ||
                 (((bVar12 && (!bVar15)) || (param_3)))) {
                local_500 = iVar19 + -1;
                if (iVar19 == 0) {
                  local_500 = 0;
                }
                local_490.DataPtr = (wchar_t *)pFVar31;
                local_490.Size = local_500;
                FPathViews::GetCleanFilename(&local_448,&local_490);
                local_398.DataPtr = local_448.DataPtr;
                local_398.Size = local_448.Size;
                local_398._12_4_ = local_448._12_4_;
                EVar14 = GetFileType(&local_398);
                local_52b = EVar14;
                if (EVar14 != Invalid) {
                  local_480.Size = iVar19 + -1;
                  if (iVar19 == 0) {
                    local_480.Size = 0;
                  }
                  local_480.DataPtr = (wchar_t *)pFVar31;
                  FPathViews::GetBaseFilenameWithPath(&local_458,&local_480);
                  local_388.DataPtr = local_458.DataPtr;
                  local_388.Size = local_458.Size;
                  local_388._12_4_ = local_458._12_4_;
                  bVar12 = DoesPathContainInvalidCharacters(EVar14,&local_388);
                  if (!bVar12) {
                    local_278.Base = local_258;
                    local_278.bIsDynamic = false;
                    local_278.bIsExternal = false;
                    local_278.End = (wchar_t *)local_58;
                    local_278.CurPos = local_258;
                    pFVar6 = (FMountDir *)(local_4d8->LongPackageName).Data.AllocatorInstance.Data;
                    iVar5 = (local_4d8->LongPackageName).Data.ArrayNum;
                    iVar28 = iVar5 + -1;
                    if (iVar5 == 0) {
                      iVar28 = 0;
                    }
                    uVar25 = (ulong64)iVar28;
                    local_4d8 = pFVar6;
                    if (local_58 < local_258 + uVar25) {
                      TStringBuilderBase<wchar_t>::Extend(&local_278,uVar25);
                    }
                    if (iVar28 != 0) {
                      pvVar23 = FGenericPlatformString::Memcpy
                                          (local_278.CurPos,local_4d8,uVar25 * 2);
                      local_278.CurPos = (wchar_t *)((longlong)pvVar23 + uVar25 * 2);
                    }
                    pFVar22 = FScanDir::GetMountRelPath(local_518.ScanDir.Reference,&local_368);
                    local_468 = (pFVar22->Data).AllocatorInstance.Data;
                    iVar28 = (pFVar22->Data).ArrayNum;
                    iStack_460 = iVar28 + -1;
                    if (iVar28 == 0) {
                      iStack_460 = 0;
                    }
                    local_378._12_4_ = uStack_45c;
                    local_378.Size = iStack_460;
                    local_378.DataPtr = (wchar_t *)local_468;
                    FPathViews::AppendPath(&local_278,&local_378);
                    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_368.Data.AllocatorInstance.Data);
                    }
                    local_358.DataPtr = local_458.DataPtr;
                    local_358.Size = local_458.Size;
                    local_358._12_4_ = local_458._12_4_;
                    FPathViews::AppendPath(&local_278,&local_358);
                    this_00 = local_4d0;
                    FPathExistence::LoadExistenceData(local_4d0);
                    bVar12 = this_00->bIsReadOnly;
                    FPathExistence::LoadExistenceData(this_00);
                    local_4b0.Ticks = (this_00->ModificationTime).Ticks;
                    local_438 = local_278.Base;
                    local_428 = (this_00->LocalAbsPath).Data.AllocatorInstance.Data;
                    iVar28 = (this_00->LocalAbsPath).Data.ArrayNum;
                    iStack_430 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
                    local_338._12_4_ = uStack_42c;
                    local_338.Size = iStack_430;
                    iStack_420 = iVar28 + -1;
                    local_348.DataPtr = local_448.DataPtr;
                    local_348.Size = local_448.Size;
                    local_348._12_4_ = local_448._12_4_;
                    local_338.DataPtr = local_278.Base;
                    if (iVar28 == 0) {
                      iStack_420 = 0;
                    }
                    local_328._12_4_ = uStack_41c;
                    local_328.Size = iStack_420;
                    local_328.DataPtr = (wchar_t *)local_428;
                    pFVar24 = FDiscoveredPathData::FDiscoveredPathData
                                        (&local_2b8,&local_328,&local_338,&local_348,&local_4b0,
                                         bVar12,local_52b);
                    AddDiscoveredFile(this,pFVar24);
                    if (local_2b8.RelPath.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2b8.RelPath.Data.AllocatorInstance.Data);
                    }
                    if (local_2b8.LongPackageName.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2b8.LongPackageName.Data.AllocatorInstance.Data);
                    }
                    if (local_2b8.LocalAbsPath.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2b8.LocalAbsPath.Data.AllocatorInstance.Data);
                    }
                    iStack_410 = local_500;
                    local_318._12_4_ = uStack_40c;
                    local_318.Size = local_500;
                    local_418 = pFVar31;
                    local_318.DataPtr = (wchar_t *)pFVar31;
                    bVar12 = FPathViews::IsPathLeaf(&local_318);
                    if ((bVar12) && ((local_518.ScanDir.Reference)->bHasScanned == false)) {
                      local_4a8 = dVar11;
                      SetIsIdle(this,false,&local_4a8);
                      iStack_400 = 0;
                      if (iVar19 != 0) {
                        iStack_400 = iVar19 + -1;
                      }
                      local_308._12_4_ = uStack_3fc;
                      local_308.Size = iStack_400;
                      local_408 = pFVar31;
                      local_308.DataPtr = (wchar_t *)pFVar31;
                      FScanDir::MarkFileAlreadyScanned(local_518.ScanDir.Reference,&local_308);
                    }
                    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
                  }
                }
              }
            }
            if (pFVar31 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar31);
            }
          }
          if (local_518.ScanDir.Reference != (FScanDir *)0x0) {
            plVar1 = &(local_518.ScanDir.Reference)->_padding_;
            LOCK();
            lVar27 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar27 == 1) && (plVar1 != (longlong *)0x0)) {
              (**(code **)(local_518.ScanDir.Reference)->_padding_)(local_518.ScanDir.Reference,1);
            }
          }
          goto LAB_142b1f5bd;
        }
      }
      plVar1 = &(local_518.ScanDir.Reference)->_padding_;
      LOCK();
      lVar27 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar27 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)(local_518.ScanDir.Reference)->_padding_)(local_518.ScanDir.Reference,1);
      }
    }
LAB_142b1f5bd:
  }
  lpCriticalSection = &this->TreeLock;
  if ((int)local_520 != 0) {
    LOCK();
    this->bPriorityDirty = (atomic<bool>)0x1;
    UNLOCK();
    (**(code **)(((this->PriorityDataUpdated).Event)->_padding_ + 0x18))();
    if ((this->TickOwner).bHasOwner == false) {
      (this->TickOwner).bHasOwner = true;
      aVar18 = (atomic<unsigned_int>)GetCurrentThreadId();
      (this->TickOwner).OwnerThreadId = aVar18;
      bVar16 = true;
    }
    else {
      bVar16 = false;
    }
  }
  aVar18 = (this->TreeLock).OwnerThreadId;
  aVar17 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar18 != aVar17) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                          ,0x2b,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar12 = bVar16;
  do {
    if ((int)local_520 == 0) {
      DestructItems<_UE::AssetDataGather::Private::FAssetDataDiscovery::SetPropertiesAndWait_::__l2::FScanDirAndQueryPath,int>
                ((FScanDirAndQueryPath *)local_528.Data,0);
      if ((FScanDirAndQueryPath *)local_528.Data != (FScanDirAndQueryPath *)0x0) {
        FMemory::Free(local_528.Data);
      }
      return;
    }
    if (bVar12) {
      TickInternal(this,false);
    }
    else {
      pFVar7 = (this->PriorityDataUpdated).Event;
      (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7,100,0);
    }
    if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("SynchObject",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                            ,0x53,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar18 = (atomic<unsigned_int>)GetCurrentThreadId();
    uVar32 = 0;
    (this->TreeLock).OwnerThreadId = aVar18;
    if (0 < (int)local_520) {
LAB_142b1fd50:
      uVar29 = 0;
      if ((int)uVar32 < (int)local_520) {
        uVar29 = ~uVar32 >> 0x1f;
      }
      if (uVar29 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar27 = *(longlong *)&local_528.Data[(longlong)(int)uVar32 * 0x10].field_0x0;
      if (*(longlong *)(lVar27 + 0x30) == 0) {
        uVar29 = 0;
        if ((int)uVar32 < (int)local_520) {
          uVar29 = ~uVar32 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TArray<`UE::AssetDataGather::Private::FAssetDataDiscovery::SetPropertiesAndWait'::__l2::FScanDirAndQueryPath,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&local_528,uVar32);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&local_528,(int)local_520,(int *)((longlong)&local_520 + 4));
        pFVar31 = (this->PriorityScanDirs).AllocatorInstance.Data;
        for (pFVar26 = pFVar31;
            pFVar26 != pFVar31 + (longlong)(this->PriorityScanDirs).ArrayNum * 0x18;
            pFVar26 = pFVar26 + 0x18) {
          if (*(longlong *)pFVar26 == lVar27) goto LAB_142b20057;
        }
LAB_142b1fe62:
        uVar29 = 0xffffffff;
        goto LAB_142b1fe6c;
      }
      if ((*(char *)(lVar27 + 0x56) != '\0') ||
         ((local_528.Data[(longlong)(int)uVar32 * 0x10 + 8] == (FScriptContainerElement)0x0 &&
          (*(char *)(lVar27 + 0x53) != '\0')))) {
        uVar29 = 0;
        if ((int)uVar32 < (int)local_520) {
          uVar29 = ~uVar32 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TArray<`UE::AssetDataGather::Private::FAssetDataDiscovery::SetPropertiesAndWait'::__l2::FScanDirAndQueryPath,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&local_528,uVar32);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&local_528,(int)local_520,(int *)((longlong)&local_520 + 4));
        pFVar31 = (this->PriorityScanDirs).AllocatorInstance.Data;
        for (pFVar26 = pFVar31;
            pFVar26 != pFVar31 + (longlong)(this->PriorityScanDirs).ArrayNum * 0x18;
            pFVar26 = pFVar26 + 0x18) {
          if (*(longlong *)pFVar26 == lVar27) goto LAB_142b20057;
        }
        goto LAB_142b1fe62;
      }
      if (this->bIsIdle != (atomic<bool>)0x0) {
        local_52a[0] = 0;
        bVar12 = `UE::AssetDataGather::Private::FAssetDataDiscovery::SetPropertiesAndWait'::__l149::
                 <lambda_3>::operator()(local_52a);
        if (!bVar12) {
          uVar29 = 0;
          if ((int)uVar32 < (int)local_520) {
            uVar29 = ~uVar32 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TArray<`UE::AssetDataGather::Private::FAssetDataDiscovery::SetPropertiesAndWait'::__l2::FScanDirAndQueryPath,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(&local_528,uVar32);
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&local_528,(int)local_520,(int *)((longlong)&local_520 + 4));
          pFVar31 = (this->PriorityScanDirs).AllocatorInstance.Data;
          for (pFVar26 = pFVar31;
              pFVar26 != pFVar31 + (longlong)(this->PriorityScanDirs).ArrayNum * 0x18;
              pFVar26 = pFVar26 + 0x18) {
            if (*(longlong *)pFVar26 == lVar27) goto LAB_142b20057;
          }
          goto LAB_142b1fe62;
        }
      }
      goto LAB_142b20199;
    }
LAB_142b201b3:
    if ((int)local_520 == 0) {
      if (bVar12) {
        aVar18 = (this->TickOwner).OwnerThreadId;
        aVar17 = (atomic<unsigned_int>)GetCurrentThreadId();
        if ((aVar18 != aVar17) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsOwnedByCurrentThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                                ,0xb7,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (this->TickOwner).bHasOwner = false;
        (this->TickOwner).OwnerThreadId = (atomic<unsigned_int>)0x0;
LAB_142b201fb:
        bVar16 = false;
        bVar12 = bVar16;
      }
    }
    else {
      (**(code **)(((this->PriorityDataUpdated).Event)->_padding_ + 0x18))();
      if (!bVar12) {
        if ((this->TickOwner).bHasOwner != false) goto LAB_142b201fb;
        (this->TickOwner).bHasOwner = true;
        aVar18 = (atomic<unsigned_int>)GetCurrentThreadId();
        (this->TickOwner).OwnerThreadId = aVar18;
        bVar16 = true;
        bVar12 = bVar16;
      }
    }
    aVar18 = (this->TreeLock).OwnerThreadId;
    aVar17 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar18 != aVar17) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLockedOnCurrentThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                            ,0x2b,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  } while( true );
LAB_142b20057:
  lVar27 = ((longlong)pFVar26 - (longlong)pFVar31) / 6 +
           ((longlong)pFVar26 - (longlong)pFVar31 >> 0x3f);
  uVar29 = (int)(lVar27 >> 2) - (int)(lVar27 >> 0x3f);
  if (uVar29 == 0xffffffff) {
LAB_142b1fe6c:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("PriorityDataIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                        ,0xa9a,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar20 = 0;
  if ((int)uVar29 < (this->PriorityScanDirs).ArrayNum) {
    uVar20 = ~uVar29 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar31 = (this->PriorityScanDirs).AllocatorInstance.Data;
  if ((*(int *)(pFVar31 + (longlong)(int)uVar29 * 0x18 + 0xc) < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PriorityData.RequestCount > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0xa9c,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar31 = pFVar31 + (longlong)(int)uVar29 * 0x18 + 0xc;
  *(int *)pFVar31 = *(int *)pFVar31 + -1;
  if (*(int *)pFVar31 == 0) {
    uVar20 = 0;
    if ((int)uVar29 < (this->PriorityScanDirs).ArrayNum) {
      uVar20 = ~uVar29 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FPriorityScanDirData,TSizedDefaultAllocator<32>_>
    ::RemoveAtSwapImpl(&this->PriorityScanDirs,uVar29);
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&(this->PriorityScanDirs).AllocatorInstance,(this->PriorityScanDirs).ArrayNum,
               &(this->PriorityScanDirs).ArrayMax);
  }
LAB_142b20199:
  uVar32 = uVar32 + 1;
  bVar12 = bVar16;
  if ((int)local_520 <= (int)uVar32) goto LAB_142b201b3;
  goto LAB_142b1fd50;
}

// Shrink @ 142b217b0

void __thiscall UE::AssetDataGather::Private::FAssetDataDiscovery::Shrink(FAssetDataDiscovery *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  atomic<unsigned_int> aVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  aVar4 = (this->TickOwner).OwnerThreadId;
  aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar4 != aVar10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickOwner.IsOwnedByCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xb85,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  aVar4 = (this->TreeLock).OwnerThreadId;
  aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar4 != aVar10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xb86,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  aVar4 = (this->ResultsLock).OwnerThreadId;
  aVar10 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar4 != aVar10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResultsLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0xb87,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar5 = (this->DiscoveredDirectories).ArrayNum;
  piVar1 = &(this->DiscoveredDirectories).ArrayMax;
  if (*piVar1 != iVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,&(this->DiscoveredDirectories).AllocatorInstance,iVar5,piVar1);
  }
  iVar5 = (this->DiscoveredFiles).ArrayNum;
  piVar1 = &(this->DiscoveredFiles).ArrayMax;
  if (*piVar1 != iVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,&(this->DiscoveredFiles).AllocatorInstance,iVar5,piVar1);
  }
  iVar5 = (this->DiscoveredSingleFiles).ArrayNum;
  piVar1 = &(this->DiscoveredSingleFiles).ArrayMax;
  if (*piVar1 != iVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar5,&(this->DiscoveredSingleFiles).AllocatorInstance,iVar5,piVar1);
  }
  iVar5 = (this->MountDirs).ArrayNum;
  piVar1 = &(this->MountDirs).ArrayMax;
  if (*piVar1 != iVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,&(this->MountDirs).AllocatorInstance,iVar5,piVar1);
  }
  pFVar13 = (this->MountDirs).AllocatorInstance.Data;
  iVar5 = (this->MountDirs).ArrayNum;
  pFVar2 = pFVar13 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->MountDirs).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar2) break;
    pFVar6 = *(ForAnyElementType **)pFVar13;
    FScanDir::Shrink((FScanDir *)pFVar6[0x10].Data);
    iVar11 = *(int *)&pFVar6[1].Data;
    piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
    if (*piVar1 != iVar11) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar11,pFVar6,iVar11,piVar1);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Shrink((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(pFVar6 + 2));
    uVar12 = *(int *)&pFVar6[3].Data - *(int *)((longlong)&pFVar6[8].Data + 4);
    if (uVar12 < 4) {
      iVar11 = 1;
    }
    else {
      uVar3 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((0 < (int)uVar12) && (*(int *)&pFVar6[0xb].Data < iVar11)) ||
       (iVar11 < *(int *)&pFVar6[0xb].Data)) {
      *(int *)&pFVar6[0xb].Data = iVar11;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar6 + 2));
    }
    pFVar13 = pFVar13 + 8;
  }
  DestructItems<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanData,int>
            ((FDirToScanData *)(this->DirToScanDatas).AllocatorInstance.Data,
             (this->DirToScanDatas).ArrayNum);
  piVar1 = &(this->DirToScanDatas).ArrayMax;
  (this->DirToScanDatas).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,&(this->DirToScanDatas).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DirToScanBuffers).ArrayMax;
  (this->DirToScanBuffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->DirToScanBuffers).AllocatorInstance,0,piVar1);
  }
  return;
}

// StartAsync @ 142b22ce0

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::StartAsync(FAssetDataDiscovery *this)

{
  code *pcVar1;
  bool bVar2;
  FRunnableThread *pFVar3;
  
  if ((this->bAsyncEnabled != false) && (this->Thread == (FRunnableThread *)0x0)) {
    pFVar3 = FRunnableThread::Create
                       ((FRunnable *)this,L"FAssetDataDiscovery",0,TPri_BelowNormal,
                        0xffffffffffffffff,None);
    this->Thread = pFVar3;
    if (pFVar3 == (FRunnableThread *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x66a,L"Failed to create asset data discovery thread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// Stop @ 142b22ea0

void __thiscall UE::AssetDataGather::Private::FAssetDataDiscovery::Stop(FAssetDataDiscovery *this)

{
  LOCK();
  this->IsStopped = (atomic<unsigned_int>)((int)this->IsStopped + 1);
  UNLOCK();
  return;
}

// TickInternal @ 142b22f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal
          (FAssetDataDiscovery *this,bool param_1)

{
  longlong *plVar1;
  TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FPriorityScanDirData,TSizedDefaultAllocator<32>_>
  *this_00;
  FCriticalSectionQueryable *lpCriticalSection;
  bool *pbVar2;
  int *piVar3;
  TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,TSizedDefaultAllocator<32>_>
  *pTVar4;
  undefined2 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  <lambda_7> <Var12;
  wchar_t *pwVar13;
  bool bVar14;
  bool bVar15;
  atomic<unsigned_int> aVar16;
  DWORD DVar17;
  atomic<unsigned_int> aVar18;
  DWORD DVar19;
  FCachedDirScanDir *pFVar20;
  FTaskGraphInterface *pFVar21;
  FScanDir *pFVar22;
  longlong lVar23;
  FScanDirAndParentData *pFVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  FInherited *pFVar28;
  longlong lVar29;
  ForAnyElementType FVar30;
  FScriptContainerElement *pFVar31;
  ForAnyElementType FVar32;
  FScanDir *pFVar33;
  FString *pFVar34;
  FScriptContainerElement *pFVar35;
  <lambda_1> <Var36;
  LPCRITICAL_SECTION lpCriticalSection_00;
  size_t _Size;
  uint uVar37;
  FScanDirAndParentData *pFVar38;
  uint uVar39;
  int iVar40;
  FScriptContainerElement *pFVar41;
  <lambda_7> <Var42;
  FScanDirAndParentData *pFVar43;
  <lambda_1> <Var44;
  FScanDirAndParentData *pFVar45;
  <lambda_1> <Var46;
  undefined1 auStackY_548 [32];
  <lambda_1> local_508;
  TArray<UE::AssetDataGather::Private::FScanDirAndParentData,TSizedDefaultAllocator<32>_> local_500;
  FScanDirAndParentData *local_4e8;
  <lambda_7> local_4d8;
  int local_4d0;
  uint local_4cc;
  undefined1 local_4c8;
  undefined1 local_4c7;
  undefined1 local_4c6;
  undefined1 local_4c5;
  undefined1 local_4c4;
  undefined1 local_4c3;
  undefined1 local_4c2 [2];
  int local_4c0;
  FInherited local_4bc;
  FScanDirAndParentData *local_4b8;
  FCachedVolumeInfo *local_4b0;
  FScriptContainerElement *local_4a8;
  FLLMScope local_4a0 [2];
  double local_498;
  uint local_490;
  LPCRITICAL_SECTION local_488;
  TStringView<wchar_t> local_478;
  TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData,int> local_468;
  TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData,int> local_458;
  LARGE_INTEGER local_440;
  FMemScope local_438;
  LARGE_INTEGER local_430;
  double local_428;
  FAssetDataDiscoveryCache *local_420;
  FAssetDataDiscovery *local_410;
  int *local_408;
  TStringBuilderBase<wchar_t> *local_400;
  FDiscoveredPathData *local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  FDiscoveredPathData *local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  wchar_t *local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  FScanDirAndParentData *local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  wchar_t *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  wchar_t *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  wchar_t *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  wchar_t *local_378;
  int iStack_370;
  undefined4 uStack_36c;
  wchar_t *local_368;
  int iStack_360;
  undefined4 uStack_35c;
  wchar_t *local_358;
  int iStack_350;
  undefined4 uStack_34c;
  TStringView<wchar_t> local_348;
  wchar_t *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  wchar_t *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  wchar_t *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  TStringView<wchar_t> local_2f8;
  TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData_const_,int> local_2e8;
  TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData_const_,int> local_2d8;
  TStringView<wchar_t> local_2c8;
  TStringView<wchar_t> local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  TStringView<wchar_t> local_248;
  TStringView<wchar_t> local_238;
  TStringView<wchar_t> local_228;
  TStringView<wchar_t> local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int> local_1b8;
  FString local_1a8;
  FString local_198;
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [128];
  ulonglong local_68 [8];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_548;
  local_490 = 0;
  local_4d8.__this = this;
  FLLMScope::FLLMScope(local_4a0,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_438,AssetRegistry,true);
  aVar18 = (this->ResultsLock).OwnerThreadId;
  aVar16 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar18 == aVar16) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ResultsLock.IsLockedOnCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x6e1,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  aVar18 = (this->TickOwner).OwnerThreadId;
  aVar16 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar18 != aVar16) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("TickOwner.IsOwnedByCurrentThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x6e2,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_420 = &this->Cache;
  if ((this->Cache).bInitialized == false) {
    FAssetDataDiscoveryCache::LoadAndUpdateCache(local_420);
  }
  local_188.Base = local_168;
  local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.CurPos = local_168;
  local_500.ArrayNum = 0;
  local_500.ArrayMax = 0;
  local_188.End = (wchar_t *)local_68;
  local_188.bIsDynamic = false;
  local_188.bIsExternal = false;
  local_4c0 = 0;
  local_4d0 = 0;
  bVar14 = false;
  QueryPerformanceCounter(&local_430);
  dVar11 = __real_bff0000000000000;
  dVar10 = __real_4170000000000000;
  lpCriticalSection_00 = (LPCRITICAL_SECTION)&this->TreeLock;
  local_498 = (double)local_430.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
  <Var44 = local_508;
  local_488 = lpCriticalSection_00;
  <Var36 = local_508;
  <Var46 = local_508;
  do {
    if ((lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("SynchObject",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                            ,0x53,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EnterCriticalSection(lpCriticalSection_00);
    DVar17 = GetCurrentThreadId();
    <Var42.__this = local_4d8.__this;
    *(DWORD *)&lpCriticalSection_00[1].DebugInfo = DVar17;
    uVar39 = 0;
    if (0 < local_4d0) {
      pFVar38 = (FScanDirAndParentData *)(this->DirToScanDatas).AllocatorInstance.Data;
      pFVar24 = pFVar38 + (longlong)local_4d0 * 8;
      local_4e8 = pFVar24;
      if (pFVar38 != pFVar24) {
        pFVar28 = &pFVar38[1].ParentData;
        uVar39 = 0;
        do {
          if ((char)*(longlong *)(pFVar28 + 0x20) != '\0') {
            local_458.ArrayNum = *(int *)((longlong)(pFVar28 + 0x1d) + 1);
            uVar39 = uVar39 + 1;
            local_458.DataPtr = *(FDiscoveredPathData **)((longlong)(pFVar28 + 0x12) + 2);
            local_4cc = uVar39;
            if ((local_458.ArrayNum < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_468.ArrayNum = *(int *)((longlong)(pFVar28 + 0x1e) + 2);
            local_468.DataPtr = *(FDiscoveredPathData **)(pFVar28 + 0x18);
            if ((local_468.ArrayNum < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar33 = (pFVar38->ScanDir).Reference;
            if (pFVar33->MountDir != (FMountDir *)0x0) {
              if (pFVar33->bScanInFlightInvalidated == false) {
                local_308 = *(wchar_t **)((longlong)(pFVar28 + -3) + 1);
                iStack_300 = (int)(*(longlong *)pFVar28 - (longlong)local_308 >> 1);
                local_2f8._12_4_ = uStack_2fc;
                local_2f8.Size = iStack_300;
                local_2f8.DataPtr = local_308;
                FScanDir::SetScanResults
                          (pFVar33,&local_2f8,(FInherited *)((longlong)(pFVar28 + -6) + 2),
                           &local_458,&local_468);
                if ((local_458.ArrayNum != 0) || (local_468.ArrayNum != 0)) {
                  iStack_3f0 = local_468.ArrayNum;
                  local_3f8 = local_468.DataPtr;
                  local_2e8._12_4_ = uStack_3ec;
                  local_2e8.ArrayNum = local_468.ArrayNum;
                  local_3e8 = local_458.DataPtr;
                  local_3d8 = *(wchar_t **)(pFVar28 + 8);
                  lVar29 = *(longlong *)((longlong)(pFVar28 + -3) + 1);
                  iStack_3d0 = (int)(*(longlong *)((longlong)(pFVar28 + 10) + 2) -
                                     (longlong)local_3d8 >> 1);
                  iStack_3e0 = local_458.ArrayNum;
                  local_2d8._12_4_ = uStack_3dc;
                  local_2d8.ArrayNum = local_458.ArrayNum;
                  iStack_3c0 = (int)(*(longlong *)pFVar28 - lVar29 >> 1);
                  local_2e8.DataPtr = local_468.DataPtr;
                  local_2c8._12_4_ = uStack_3cc;
                  local_2c8.Size = iStack_3d0;
                  local_2d8.DataPtr = local_458.DataPtr;
                  local_3c8._0_4_ = (undefined4)lVar29;
                  local_3c8._4_4_ = (undefined4)((ulonglong)lVar29 >> 0x20);
                  local_2b8.DataPtr._0_4_ = (undefined4)local_3c8;
                  local_2b8.DataPtr._4_4_ = local_3c8._4_4_;
                  local_2b8._12_4_ = uStack_3bc;
                  local_3c8 = lVar29;
                  local_2c8.DataPtr = local_3d8;
                  local_2b8.Size = iStack_3c0;
                  AddDiscovered(<Var42.__this,&local_2b8,&local_2c8,&local_2d8,&local_2e8);
                }
              }
              else {
                pFVar33->bScanInFlightInvalidated = false;
                if (3 < (byte)LogAssetRegistry._0_1_) {
                  FScanDir::GetLocalAbsPath((pFVar38->ScanDir).Reference,&local_198);
                  Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry)
                  ;
                  uVar39 = local_4cc;
                  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_198.Data.AllocatorInstance.Data);
                    uVar39 = local_4cc;
                  }
                }
              }
            }
            ((pFVar38->ScanDir).Reference)->bScanInFlight = false;
            pFVar33 = (pFVar38->ScanDir).Reference;
            pFVar24 = local_4e8;
            if (pFVar33 != (FScanDir *)0x0) {
              (pFVar38->ScanDir).Reference = (FScanDir *)0x0;
              plVar1 = &pFVar33->_padding_;
              LOCK();
              lVar29 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if (((int)lVar29 == 1) && (plVar1 != (longlong *)0x0)) {
                (**(code **)pFVar33->_padding_)();
                pFVar24 = local_4e8;
              }
            }
          }
          pFVar38 = pFVar38 + 8;
          pFVar28 = (FInherited *)((longlong)(pFVar28 + 0x2a) + 2);
          <Var44 = local_508;
          <Var46 = local_508;
        } while (pFVar38 != pFVar24);
      }
      <Var42.__this = local_4d8.__this;
      iVar40 = uVar39 - local_4c0;
      local_4d0 = 0;
      lpCriticalSection = &(local_4d8.__this)->ResultsLock;
      if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("SynchObject",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                              ,0x53,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      aVar18 = (atomic<unsigned_int>)GetCurrentThreadId();
      ((<Var42.__this)->ResultsLock).OwnerThreadId = aVar18;
      (<Var42.__this)->NumCachedDirectories = (<Var42.__this)->NumCachedDirectories + local_4c0;
      (<Var42.__this)->NumUncachedDirectories = (<Var42.__this)->NumUncachedDirectories + iVar40;
      aVar18 = ((<Var42.__this)->ResultsLock).OwnerThreadId;
      aVar16 = (atomic<unsigned_int>)GetCurrentThreadId();
      if ((aVar18 != aVar16) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLockedOnCurrentThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                              ,0x2b,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      ((<Var42.__this)->ResultsLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_4c0 = 0;
    }
    local_408 = &local_4d0;
    local_400 = &local_188;
    local_410 = local_4d8.__this;
    if ((param_1) || (local_508 = (<lambda_1>)0x1, !bVar14)) {
      local_508 = (<lambda_1>)0x0;
    }
    if (((local_4d8.__this)->PriorityScanDirs).ArrayNum != 0) {
      if ((longlong)local_500._8_8_ < 0) {
        DestructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>
                  ((FScanDirAndParentData *)local_500.AllocatorInstance.Data,local_500.ArrayNum);
        iVar40 = local_500.ArrayMax;
        local_500._8_8_ = local_500._8_8_ & 0xffffffff00000000;
        if (iVar40 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_500.AllocatorInstance,0,&local_500.ArrayMax);
        }
      }
      else {
        DestructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>
                  ((FScanDirAndParentData *)local_500.AllocatorInstance.Data,local_500.ArrayNum);
        local_500._8_8_ = local_500._8_8_ & 0xffffffff00000000;
      }
      <Var42.__this = local_4d8.__this;
      uVar39 = 0;
      if (0 < ((local_4d8.__this)->PriorityScanDirs).ArrayNum) {
        lVar29 = 0;
        this_00 = &(local_4d8.__this)->PriorityScanDirs;
        do {
          local_4e8 = (FScanDirAndParentData *)CONCAT44(local_4e8._4_4_,~uVar39 >> 0x1f);
          uVar37 = 0;
          if ((int)uVar39 < ((<Var42.__this)->PriorityScanDirs).ArrayNum) {
            uVar37 = ~uVar39 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar41 = (this_00->AllocatorInstance).Data;
          local_4cc = local_500.ArrayNum;
          pFVar33 = *(FScanDir **)(pFVar41 + lVar29);
          if ((pFVar33->MountDir != (FMountDir *)0x0) && (pFVar33->bIsComplete == false)) {
            FScanDir::Update(pFVar33,&local_500,(FInherited *)(pFVar41 + lVar29 + 8));
          }
          if (*(char *)(*(longlong *)(pFVar41 + lVar29) + 0x56) != '\0') {
            if ((local_500.ArrayNum != local_4cc) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ScanRequests.Num() == OriginalScanRequestsNum",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                                    ,0x75e,L""), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (pFVar41[lVar29 + 0x10] != (FScriptContainerElement)0x0) {
              pFVar41[lVar29 + 0x10] = (FScriptContainerElement)0x0;
              if ((*(int *)(pFVar41 + lVar29 + 0xc) < 1) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PriorityData.RequestCount > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                                      ,0x762,L""), bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar41 = pFVar41 + lVar29 + 0xc;
              *(int *)pFVar41 = *(int *)pFVar41 + -1;
              if (*(int *)pFVar41 == 0) {
                uVar37 = 0;
                if ((int)uVar39 < ((<Var42.__this)->PriorityScanDirs).ArrayNum) {
                  uVar37 = (uint)local_4e8;
                }
                if ((uVar37 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FPriorityScanDirData,TSizedDefaultAllocator<32>_>
                ::RemoveAtSwapImpl(this_00,uVar39);
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,&this_00->AllocatorInstance,
                           ((<Var42.__this)->PriorityScanDirs).ArrayNum,
                           &((<Var42.__this)->PriorityScanDirs).ArrayMax);
                uVar39 = uVar39 - 1;
                lVar29 = lVar29 + -0x18;
              }
            }
          }
          uVar39 = uVar39 + 1;
          lVar29 = lVar29 + 0x18;
          lpCriticalSection_00 = local_488;
          <Var44 = local_508;
          <Var36 = local_508;
          <Var46 = local_508;
        } while ((int)uVar39 < ((<Var42.__this)->PriorityScanDirs).ArrayNum);
      }
      if (local_508 == (<lambda_1>)0x0) {
        AlgoImpl::
        IntroSortInternal<UE::AssetDataGather::Private::FScanDirAndParentData,int,FIdentityFunctor,_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal_::__l97::<lambda_3>_>
                  ((FScanDirAndParentData *)local_500.AllocatorInstance.Data,local_500.ArrayNum,
                   (FIdentityFunctor)<Var46,(<lambda_3>)<Var44);
        local_4b8 = (FScanDirAndParentData *)local_500.AllocatorInstance.Data;
        uVar39 = local_500.ArrayNum;
        if (1 < local_500.ArrayNum) {
          pFVar38 = (FScanDirAndParentData *)(local_500.AllocatorInstance.Data + 0x10);
          pFVar24 = (FScanDirAndParentData *)
                    (local_500.AllocatorInstance.Data + (longlong)local_500.ArrayNum * 0x10);
          FVar32.Data = local_500.AllocatorInstance.Data;
          local_4e8 = pFVar24;
          if (pFVar38 != pFVar24) {
            pFVar41 = local_500.AllocatorInstance.Data + 0x18;
            FVar30.Data = local_500.AllocatorInstance.Data;
            do {
              pFVar33 = (pFVar38->ScanDir).Reference;
              FVar32.Data = FVar30.Data;
              if (((((FScanDirAndParentData *)FVar30.Data)->ScanDir).Reference != pFVar33) &&
                 (FVar32.Data = FVar30.Data + 0x10, (FScanDirAndParentData *)FVar32.Data != pFVar38)
                 ) {
                pFVar22 = (((FScanDirAndParentData *)FVar32.Data)->ScanDir).Reference;
                (((FScanDirAndParentData *)FVar32.Data)->ScanDir).Reference = pFVar33;
                (pFVar38->ScanDir).Reference = (FScanDir *)0x0;
                if (pFVar22 != (FScanDir *)0x0) {
                  plVar1 = &pFVar22->_padding_;
                  LOCK();
                  lVar29 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  pFVar24 = local_4e8;
                  if ((int)lVar29 == 1) {
                    if (plVar1 == (longlong *)0x0) {
                      pFVar22 = (FScanDir *)0x0;
                    }
                    if (pFVar22 != (FScanDir *)0x0) {
                      (**(code **)pFVar22->_padding_)(pFVar22,1);
                      pFVar24 = local_4e8;
                    }
                  }
                }
                uVar5 = *(undefined2 *)pFVar41;
                (((FScanDirAndParentData *)((longlong)FVar30.Data + 0x10))->ParentData).
                bIsOnAllowList = (bool)(char)uVar5;
                (((FScanDirAndParentData *)((longlong)FVar30.Data + 0x10))->ParentData).
                bMatchesDenyList = (bool)(char)((ushort)uVar5 >> 8);
                (((FScanDirAndParentData *)((longlong)FVar30.Data + 0x10))->ParentData).
                bIgnoreDenyList = (bool)pFVar41[2];
              }
              pFVar38 = pFVar38 + 1;
              pFVar41 = pFVar41 + 0x10;
              FVar30.Data = FVar32.Data;
              <Var36 = local_508;
            } while (pFVar38 != pFVar24);
          }
          uVar39 = (uint)((longlong)(FVar32.Data + (0x10 - (longlong)local_4b8)) >> 4);
        }
        if (local_500.ArrayNum < (int)uVar39) {
          iVar26 = uVar39 - local_500.ArrayNum;
          iVar40 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar26,&local_500.AllocatorInstance,&local_500.ArrayNum,
                              &local_500.ArrayMax);
          DefaultConstructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>
                    (local_500.AllocatorInstance.Data + (longlong)iVar40 * 0x10,iVar26);
        }
        else {
          if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
          }
          if ((int)uVar39 < local_500.ArrayNum) {
            uVar37 = local_500.ArrayNum - uVar39;
            if (((int)(uVar37 | uVar39) < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (uVar37 != 0) {
              pFVar38 = (FScanDirAndParentData *)
                        (local_500.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x10);
              DestructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>(pFVar38,uVar37)
              ;
              iVar40 = (local_500.ArrayNum - uVar37) - uVar39;
              if (iVar40 != 0) {
                memmove(pFVar38,pFVar38 + (int)uVar37,(longlong)iVar40 << 4);
              }
              iVar40 = local_500.ArrayNum - uVar37;
              local_500.ArrayNum = iVar40;
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&local_500.AllocatorInstance,iVar40,&local_500.ArrayMax);
            }
          }
        }
        iVar40 = local_500.ArrayNum;
        pFVar38 = (FScanDirAndParentData *)
                  (local_500.AllocatorInstance.Data + (longlong)local_500.ArrayNum * 0x10);
        FVar32.Data = local_500.AllocatorInstance.Data;
        while( true ) {
          if (local_500.ArrayNum != iVar40) {
            local_4c8 = 0;
            `TCheckedPointerIterator<UE::AssetDataGather::Private::FScanDirAndParentData,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_4c8);
          }
          if ((FScanDirAndParentData *)FVar32.Data == pFVar38) break;
          `UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l22::<lambda_2>::
          operator()(&local_410,(FScanDirAndParentData *)FVar32.Data);
          FVar32.Data = FVar32.Data + 0x10;
        }
      }
      if ((longlong)local_500._8_8_ < 0) {
        DestructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>
                  ((FScanDirAndParentData *)local_500.AllocatorInstance.Data,local_500.ArrayNum);
        iVar40 = local_500.ArrayMax;
        local_500._8_8_ = local_500._8_8_ & 0xffffffff00000000;
        if (iVar40 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_500.AllocatorInstance,0,&local_500.ArrayMax);
        }
      }
      else {
        DestructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>
                  ((FScanDirAndParentData *)local_500.AllocatorInstance.Data,local_500.ArrayNum);
        local_500._8_8_ = local_500._8_8_ & 0xffffffff00000000;
      }
    }
    <Var42.__this = local_4d8.__this;
    if (bVar14) {
      (**(code **)((((local_4d8.__this)->PriorityDataUpdated).Event)->_padding_ + 0x10))();
    }
    if (local_508 != (<lambda_1>)0x0) goto LAB_142b246e1;
    LOCK();
    (<Var42.__this)->bPriorityDirty = (atomic<bool>)0x0;
    UNLOCK();
    bVar14 = 0 < local_4d0;
    if (param_1) {
      if (local_4d0 == 0) {
        if ((longlong)local_500._8_8_ < 0) {
          DestructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>
                    ((FScanDirAndParentData *)local_500.AllocatorInstance.Data,local_500.ArrayNum);
          bVar15 = local_500.ArrayMax != 0;
          local_500._8_8_ = (ulonglong)(uint)local_500.ArrayMax << 0x20;
          if (bVar15) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_500.AllocatorInstance,0,&local_500.ArrayMax);
          }
        }
        else {
          DestructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>
                    ((FScanDirAndParentData *)local_500.AllocatorInstance.Data,local_500.ArrayNum);
          local_500._8_8_ = local_500._8_8_ & 0xffffffff00000000;
        }
        aVar18 = ((<Var42.__this)->TreeLock).OwnerThreadId;
        aVar16 = (atomic<unsigned_int>)GetCurrentThreadId();
        if ((aVar18 != aVar16) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TreeLock.IsLockedOnCurrentThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                                ,0x8c1,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        <Var12.__this = local_4d8.__this;
        pFVar31 = ((<Var42.__this)->MountDirs).AllocatorInstance.Data;
        iVar40 = ((<Var42.__this)->MountDirs).ArrayNum;
        pFVar41 = pFVar31 + (longlong)iVar40 * 8;
        while( true ) {
          if (((<Var12.__this)->MountDirs).ArrayNum != iVar40) {
            local_4c7 = 0;
            `TCheckedPointerIterator<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_4c7);
          }
          lpCriticalSection_00 = local_488;
          if (pFVar31 == pFVar41) break;
          if ((*(FScanDir **)(*(longlong *)pFVar31 + 0x80))->bIsComplete == false) {
            local_4bc.bIsOnAllowList = false;
            local_4bc.bMatchesDenyList = false;
            local_4bc.bIgnoreDenyList = false;
            FScanDir::Update(*(FScanDir **)(*(longlong *)pFVar31 + 0x80),&local_500,&local_4bc);
          }
          pFVar31 = pFVar31 + 8;
        }
        iVar40 = local_500.ArrayNum;
        uVar25 = (ulonglong)local_500.ArrayNum;
        pFVar38 = (FScanDirAndParentData *)(local_500.AllocatorInstance.Data + uVar25 * 0x10);
        FVar32.Data = local_500.AllocatorInstance.Data;
        while( true ) {
          iVar26 = (int)uVar25;
          if ((int)uVar25 != iVar40) {
            local_4c6 = 0;
            `TCheckedPointerIterator<UE::AssetDataGather::Private::FScanDirAndParentData,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_4c6);
            iVar26 = local_500.ArrayNum;
          }
          if ((FScanDirAndParentData *)FVar32.Data == pFVar38) break;
          `UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l22::<lambda_2>::
          operator()(&local_410,(FScanDirAndParentData *)FVar32.Data);
          uVar25 = local_500._8_8_ & 0xffffffff;
          FVar32.Data = FVar32.Data + 0x10;
        }
        if ((longlong)local_500._8_8_ < 0) {
          DestructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>
                    ((FScanDirAndParentData *)local_500.AllocatorInstance.Data,iVar26);
          iVar40 = local_500.ArrayMax;
          local_500._8_8_ = local_500._8_8_ & 0xffffffff00000000;
          <Var42.__this = local_4d8.__this;
          if (iVar40 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_500.AllocatorInstance,0,&local_500.ArrayMax);
            <Var42.__this = local_4d8.__this;
          }
        }
        else {
          DestructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>
                    ((FScanDirAndParentData *)local_500.AllocatorInstance.Data,iVar26);
          local_500._8_8_ = local_500._8_8_ & 0xffffffff00000000;
          <Var42.__this = local_4d8.__this;
        }
        goto LAB_142b23b8f;
      }
    }
    else {
LAB_142b23b8f:
      pFVar33 = (FScanDir *)0x0;
      if (local_4d0 == 0) {
        if (!param_1) goto LAB_142b246e1;
        iVar40 = ((<Var42.__this)->NumDirectoriesToScan).Counter;
        local_4e8 = (FScanDirAndParentData *)CONCAT44(local_4e8._4_4_,iVar40);
        if (iVar40 == 0) goto LAB_142b246d3;
        pFVar41 = ((<Var42.__this)->MountDirs).AllocatorInstance.Data;
        iVar40 = ((<Var42.__this)->MountDirs).ArrayNum;
        local_4a8 = pFVar41 + (longlong)iVar40 * 8;
        break;
      }
    }
    local_428 = dVar11;
    SetIsIdle(<Var42.__this,false,&local_428);
    DVar17 = *(DWORD *)&lpCriticalSection_00[1].DebugInfo;
    DVar19 = GetCurrentThreadId();
    if ((DVar17 != DVar19) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLockedOnCurrentThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                            ,0x2b,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined4 *)&lpCriticalSection_00[1].DebugInfo = 0;
    LeaveCriticalSection(lpCriticalSection_00);
    local_4cc = 0;
    if (0 < local_4d0) {
      lVar29 = 0;
      do {
        uVar39 = 0;
        if ((int)local_4cc < ((<Var42.__this)->DirToScanDatas).ArrayNum) {
          uVar39 = ~local_4cc >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar38 = (FScanDirAndParentData *)((<Var42.__this)->DirToScanDatas).AllocatorInstance.Data;
        pFVar24 = *(FScanDirAndParentData **)((longlong)&pFVar38[1].ScanDir.Reference + lVar29);
        iVar40 = (int)(*(longlong *)(&pFVar38[1].ParentData.bIsOnAllowList + lVar29) -
                       (longlong)pFVar24 >> 1);
        uVar9._4_4_ = uStack_3ac;
        uVar9._0_4_ = iVar40;
        local_4e8 = pFVar24;
        local_4b8 = pFVar38;
        local_3b8 = pFVar24;
        iStack_3b0 = iVar40;
        local_2a8.DataPtr = (wchar_t *)pFVar24;
        local_2a8._8_8_ = uVar9;
        local_4b0 = FAssetDataDiscoveryCache::FindVolume(local_420,&local_2a8);
        if (local_4b0 != (FCachedVolumeInfo *)0x0) {
          local_298.DataPtr = (wchar_t *)pFVar24;
          local_298._8_8_ = uVar9;
          uVar39 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar40,(wchar_t *)local_4e8);
          pFVar20 = TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
                    ::FindByHash<TStringView<wchar_t>_>
                              ((TMapBase<FString,UE::AssetDataGather::Private::FCachedDirScanDir,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::AssetDataGather::Private::FCachedDirScanDir,0>_>
                                *)local_4b0,uVar39,&local_298);
          if ((pFVar20 != (FCachedDirScanDir *)0x0) && (pFVar20->bCacheValid != false)) {
            local_4c0 = local_4c0 + 1;
            (&pFVar38[7].ParentData.bIsOnAllowList)[lVar29] = true;
            iVar40 = (pFVar20->SubDirRelPaths).ArrayNum;
            pFVar24 = (FScanDirAndParentData *)(pFVar20->SubDirRelPaths).AllocatorInstance.Data;
            pFVar41 = (FScriptContainerElement *)((longlong)pFVar24 + (longlong)iVar40 * 0x10);
            while( true ) {
              local_4e8 = pFVar24;
              if ((pFVar20->SubDirRelPaths).ArrayNum != iVar40) {
                local_4c5 = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_4c5);
              }
              if (pFVar24 == (FScanDirAndParentData *)pFVar41) break;
              local_3a8 = *(wchar_t **)pFVar24;
              iStack_3a0 = *(int *)((longlong)pFVar24 + 8) + -1;
              if (*(int *)((longlong)pFVar24 + 8) == 0) {
                iStack_3a0 = 0;
              }
              local_288._12_4_ = uStack_39c;
              local_288.Size = iStack_3a0;
              local_288.DataPtr = local_3a8;
              bVar15 = FPackageName::DoesPackageNameContainInvalidCharacters
                                 (&local_288,(EErrorCode *)0x0);
              if (!bVar15) {
                local_4b0 = (FCachedVolumeInfo *)
                            (*(longlong *)(&pFVar38[3].ParentData.bIsOnAllowList + lVar29) -
                             *(longlong *)((longlong)&pFVar38[3].ScanDir.Reference + lVar29) >> 1);
                local_4a8 = (FScriptContainerElement *)
                            (*(longlong *)(&pFVar38[1].ParentData.bIsOnAllowList + lVar29) -
                             *(longlong *)((longlong)&pFVar38[1].ScanDir.Reference + lVar29) >> 1);
                local_398 = *(wchar_t **)pFVar24;
                iStack_390 = *(int *)((longlong)pFVar24 + 8) + -1;
                if (*(int *)((longlong)pFVar24 + 8) == 0) {
                  iStack_390 = 0;
                }
                local_278._12_4_ = uStack_38c;
                local_278.Size = iStack_390;
                local_278.DataPtr = local_398;
                FPathViews::AppendPath
                          ((TStringBuilderBase<wchar_t> *)
                           ((longlong)&pFVar38[3].ScanDir.Reference + lVar29),&local_278);
                local_388 = *(wchar_t **)pFVar24;
                iStack_380 = *(int *)((longlong)pFVar24 + 8) + -1;
                if (*(int *)((longlong)pFVar24 + 8) == 0) {
                  iStack_380 = 0;
                }
                local_268._12_4_ = uStack_37c;
                local_268.Size = iStack_380;
                local_268.DataPtr = local_388;
                FPathViews::AppendPath
                          ((TStringBuilderBase<wchar_t> *)
                           ((longlong)&pFVar38[1].ScanDir.Reference + lVar29),&local_268);
                iVar26 = *(int *)((longlong)&pFVar38[7].ScanDir.Reference + lVar29);
                iVar27 = *(int *)(&pFVar38[5].ParentData.bIsOnAllowList + lVar29);
                if (iVar27 < iVar26 + 1) {
                  if ((iVar27 != iVar26) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Data.IteratedSubDirs.Num() == Data.NumIteratedDirs",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                                          ,0x7d7,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar26 = *(int *)(&pFVar38[5].ParentData.bIsOnAllowList + lVar29);
                  if (iVar26 == *(int *)(&pFVar38[5].field_0xc + lVar29)) {
                    iVar26 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x840,(ForAnyElementType *)
                                              ((longlong)&pFVar38[5].ScanDir.Reference + lVar29),
                                        (int *)(&pFVar38[5].field_0xc + lVar29));
                  }
                  *(int *)(&pFVar38[5].ParentData.bIsOnAllowList + lVar29) = iVar26 + 1;
                  lVar6 = *(longlong *)((longlong)&pFVar38[5].ScanDir.Reference + lVar29);
                  lVar23 = (longlong)iVar26 * 0x40;
                  *(undefined2 *)(lVar23 + 0x38 + lVar6) = 0;
                  *(undefined4 *)(lVar23 + 0x3a + lVar6) = 0;
                  *(undefined2 *)(lVar23 + 0x3e + lVar6) = 0;
                  *(undefined8 *)(lVar23 + lVar6) = 0;
                  *(undefined8 *)(lVar23 + 8 + lVar6) = 0;
                  *(undefined8 *)(lVar23 + 0x10 + lVar6) = 0;
                  *(undefined8 *)(lVar23 + 0x18 + lVar6) = 0;
                  *(undefined8 *)(lVar23 + 0x20 + lVar6) = 0;
                  *(undefined8 *)(lVar23 + 0x28 + lVar6) = 0;
                  *(undefined8 *)(lVar23 + 0x30 + lVar6) = 0;
                }
                uVar39 = *(uint *)((longlong)&pFVar38[7].ScanDir.Reference + lVar29);
                *(uint *)((longlong)&pFVar38[7].ScanDir.Reference + lVar29) = uVar39 + 1;
                uVar37 = 0;
                if ((int)uVar39 < *(int *)(&pFVar38[5].ParentData.bIsOnAllowList + lVar29)) {
                  uVar37 = ~uVar39 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar34 = (FString *)
                          ((longlong)(int)uVar39 * 0x40 +
                          *(longlong *)((longlong)&pFVar38[5].ScanDir.Reference + lVar29));
                local_358 = *(wchar_t **)local_4e8;
                iStack_350 = *(int *)((longlong)local_4e8 + 8) + -1;
                if (*(int *)((longlong)local_4e8 + 8) == 0) {
                  iStack_350 = 0;
                }
                local_368 = *(wchar_t **)((longlong)&pFVar38[3].ScanDir.Reference + lVar29);
                local_378 = *(wchar_t **)((longlong)&pFVar38[1].ScanDir.Reference + lVar29);
                iStack_360 = (int)(*(longlong *)(&pFVar38[3].ParentData.bIsOnAllowList + lVar29) -
                                   (longlong)local_368 >> 1);
                iStack_370 = (int)(*(longlong *)(&pFVar38[1].ParentData.bIsOnAllowList + lVar29) -
                                   (longlong)local_378 >> 1);
                local_258._12_4_ = uStack_36c;
                local_258.Size = iStack_370;
                local_258.DataPtr = local_378;
                AssignStringWithoutShrinking(pFVar34,&local_258);
                local_248._12_4_ = uStack_35c;
                local_248.Size = iStack_360;
                local_248.DataPtr = local_368;
                AssignStringWithoutShrinking(pFVar34 + 1,&local_248);
                local_238._12_4_ = uStack_34c;
                local_238.Size = iStack_350;
                local_238.DataPtr = local_358;
                AssignStringWithoutShrinking(pFVar34 + 2,&local_238);
                *(undefined1 *)((longlong)&pFVar34[3].Data.ArrayNum + 1) = 1;
                iVar26 = (int)(*(longlong *)(&pFVar38[3].ParentData.bIsOnAllowList + lVar29) -
                               *(longlong *)((longlong)&pFVar38[3].ScanDir.Reference + lVar29) >> 1)
                ;
                iVar27 = iVar26 - (int)local_4b0;
                if ((iVar26 < iVar27) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount <= Len()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                        ,0xe8,L""), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pbVar2 = &pFVar38[3].ParentData.bIsOnAllowList + lVar29;
                *(longlong *)pbVar2 = *(longlong *)pbVar2 + (longlong)iVar27 * -2;
                iVar26 = (int)(*(longlong *)(&pFVar38[1].ParentData.bIsOnAllowList + lVar29) -
                               *(longlong *)((longlong)&pFVar38[1].ScanDir.Reference + lVar29) >> 1)
                ;
                iVar27 = iVar26 - (int)local_4a8;
                if ((iVar26 < iVar27) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount <= Len()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                        ,0xe8,L""), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pbVar2 = &pFVar38[1].ParentData.bIsOnAllowList + lVar29;
                *(longlong *)pbVar2 = *(longlong *)pbVar2 + (longlong)iVar27 * -2;
                pFVar24 = local_4e8;
              }
              pFVar24 = (FScanDirAndParentData *)((longlong)pFVar24 + 0x10);
            }
            iVar40 = (pFVar20->Files).ArrayNum;
            pFVar24 = (FScanDirAndParentData *)(pFVar20->Files).AllocatorInstance.Data;
            pFVar45 = pFVar24 + (longlong)iVar40 * 2;
            pFVar43 = pFVar38;
            while( true ) {
              local_4e8 = pFVar24;
              if ((pFVar20->Files).ArrayNum != iVar40) {
                local_4c4 = 0;
                `TCheckedPointerIterator<UE::AssetDataGather::Private::FCachedDirScanFile,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_4c4);
              }
              if (pFVar24 == pFVar45) break;
              local_478.DataPtr = (wchar_t *)(pFVar24->ScanDir).Reference;
              local_478.Size = *(int *)&pFVar24->ParentData + -1;
              if (*(int *)&pFVar24->ParentData == 0) {
                local_478.Size = 0;
              }
              local_228._12_4_ = local_478._12_4_;
              local_228.Size = local_478.Size;
              local_228.DataPtr = local_478.DataPtr;
              local_508 = (<lambda_1>)GetFileType(&local_228);
              if (local_508 != (<lambda_1>)0x0) {
                FPathViews::GetBaseFilename(&local_348,&local_478);
                local_218.DataPtr = local_348.DataPtr;
                local_218.Size = local_348.Size;
                local_218._12_4_ = local_348._12_4_;
                bVar15 = DoesPathContainInvalidCharacters((EGatherableFileType)local_508,&local_218)
                ;
                if (!bVar15) {
                  iVar26 = *(int *)((longlong)&pFVar43[7].ScanDir.Reference + lVar29 + 4);
                  iVar27 = *(int *)(&pFVar43[6].ParentData.bIsOnAllowList + lVar29);
                  local_4a8 = (FScriptContainerElement *)
                              (*(longlong *)(&pFVar43[3].ParentData.bIsOnAllowList + lVar29) -
                               *(longlong *)((longlong)&pFVar43[3].ScanDir.Reference + lVar29) >> 1)
                  ;
                  local_4b0 = (FCachedVolumeInfo *)
                              (*(longlong *)(&pFVar43[1].ParentData.bIsOnAllowList + lVar29) -
                               *(longlong *)((longlong)&pFVar43[1].ScanDir.Reference + lVar29) >> 1)
                  ;
                  if (iVar27 < iVar26 + 1) {
                    if ((iVar27 != iVar26) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Data.IteratedFiles.Num() == Data.NumIteratedFiles",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                                            ,0x7f4,L""), bVar15)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar26 = *(int *)(&pFVar43[6].ParentData.bIsOnAllowList + lVar29);
                    if (iVar26 == *(int *)(&pFVar43[6].field_0xc + lVar29)) {
                      iVar26 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x840,(ForAnyElementType *)
                                                ((longlong)&pFVar43[6].ScanDir.Reference + lVar29),
                                          (int *)(&pFVar43[6].field_0xc + lVar29));
                    }
                    *(int *)(&pFVar43[6].ParentData.bIsOnAllowList + lVar29) = iVar26 + 1;
                    lVar6 = *(longlong *)((longlong)&pFVar43[6].ScanDir.Reference + lVar29);
                    lVar23 = (longlong)iVar26 * 0x40;
                    *(undefined2 *)(lVar23 + 0x38 + lVar6) = 0;
                    *(undefined4 *)(lVar23 + 0x3a + lVar6) = 0;
                    *(undefined2 *)(lVar23 + 0x3e + lVar6) = 0;
                    *(undefined8 *)(lVar23 + lVar6) = 0;
                    *(undefined8 *)(lVar23 + 8 + lVar6) = 0;
                    *(undefined8 *)(lVar23 + 0x10 + lVar6) = 0;
                    *(undefined8 *)(lVar23 + 0x18 + lVar6) = 0;
                    *(undefined8 *)(lVar23 + 0x20 + lVar6) = 0;
                    *(undefined8 *)(lVar23 + 0x28 + lVar6) = 0;
                    *(undefined8 *)(lVar23 + 0x30 + lVar6) = 0;
                  }
                  local_208.DataPtr = local_348.DataPtr;
                  local_208.Size = local_348.Size;
                  local_208._12_4_ = local_348._12_4_;
                  FPathViews::AppendPath
                            ((TStringBuilderBase<wchar_t> *)
                             ((longlong)&pFVar43[3].ScanDir.Reference + lVar29),&local_208);
                  local_1f8._12_4_ = local_478._12_4_;
                  local_1f8.Size = local_478.Size;
                  local_1f8.DataPtr = local_478.DataPtr;
                  FPathViews::AppendPath
                            ((TStringBuilderBase<wchar_t> *)
                             ((longlong)&pFVar38[1].ScanDir.Reference + lVar29),&local_1f8);
                  uVar39 = *(uint *)((longlong)&pFVar43[7].ScanDir.Reference + lVar29 + 4);
                  *(uint *)((longlong)&pFVar43[7].ScanDir.Reference + lVar29 + 4) = uVar39 + 1;
                  uVar37 = 0;
                  if ((int)uVar39 < *(int *)(&pFVar43[6].ParentData.bIsOnAllowList + lVar29)) {
                    uVar37 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar37 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pwVar13 = local_478.DataPtr;
                  uVar8._4_4_ = local_478._12_4_;
                  uVar8._0_4_ = local_478.Size;
                  local_328 = *(wchar_t **)((longlong)&local_4b8[3].ScanDir.Reference + lVar29);
                  bVar15 = local_4e8[1].ParentData.bIsOnAllowList;
                  pFVar34 = (FString *)
                            (*(longlong *)((longlong)&pFVar43[6].ScanDir.Reference + lVar29) +
                            (longlong)(int)uVar39 * 0x40);
                  local_338 = *(wchar_t **)((longlong)&local_4b8[1].ScanDir.Reference + lVar29);
                  iStack_320 = (int)(*(longlong *)(&local_4b8[3].ParentData.bIsOnAllowList + lVar29)
                                     - (longlong)local_328 >> 1);
                  iStack_330 = (int)(*(longlong *)(&local_4b8[1].ParentData.bIsOnAllowList + lVar29)
                                     - (longlong)local_338 >> 1);
                  local_1e8._12_4_ = uStack_32c;
                  local_1e8.Size = iStack_330;
                  local_1e8.DataPtr = local_338;
                  AssignStringWithoutShrinking(pFVar34,&local_1e8);
                  local_1d8._12_4_ = uStack_31c;
                  local_1d8.Size = iStack_320;
                  local_1d8.DataPtr = local_328;
                  AssignStringWithoutShrinking(pFVar34 + 1,&local_1d8);
                  local_1c8.DataPtr = pwVar13;
                  local_1c8._8_8_ = uVar8;
                  AssignStringWithoutShrinking(pFVar34 + 2,&local_1c8);
                  pFVar43 = local_4b8;
                  *(<lambda_1> *)((longlong)&pFVar34[3].Data.ArrayNum + 1) = local_508;
                  pFVar34[3].Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)local_4e8[1].ScanDir.Reference;
                  *(bool *)&pFVar34[3].Data.ArrayNum = bVar15 != false;
                  iVar26 = (int)(*(longlong *)(&local_4b8[3].ParentData.bIsOnAllowList + lVar29) -
                                 *(longlong *)((longlong)&local_4b8[3].ScanDir.Reference + lVar29)
                                >> 1);
                  iVar27 = iVar26 - (int)local_4a8;
                  if ((iVar26 < iVar27) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount <= Len()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                          ,0xe8,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pbVar2 = &pFVar43[3].ParentData.bIsOnAllowList + lVar29;
                  *(longlong *)pbVar2 = *(longlong *)pbVar2 + (longlong)iVar27 * -2;
                  iVar26 = (int)(*(longlong *)(&pFVar43[1].ParentData.bIsOnAllowList + lVar29) -
                                 *(longlong *)((longlong)&pFVar43[1].ScanDir.Reference + lVar29) >>
                                1);
                  iVar27 = iVar26 - (int)local_4b0;
                  if ((iVar26 < iVar27) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount <= Len()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                          ,0xe8,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pbVar2 = &pFVar43[1].ParentData.bIsOnAllowList + lVar29;
                  *(longlong *)pbVar2 = *(longlong *)pbVar2 + (longlong)iVar27 * -2;
                  pFVar24 = local_4e8;
                }
              }
              pFVar24 = pFVar24 + 2;
            }
          }
        }
        lVar29 = lVar29 + 0x80;
        local_4cc = local_4cc + 1;
        lpCriticalSection_00 = local_488;
        <Var42.__this = local_4d8.__this;
        <Var44 = local_508;
        <Var36 = local_508;
        <Var46 = local_508;
      } while ((int)local_4cc < local_4d0);
    }
    if ((local_4c0 < 1) || (this = local_4d8.__this, bVar14)) {
      pFVar21 = FTaskGraphInterface::Get();
      iVar26 = (**(code **)((longlong)*pFVar21 + 0x20))(pFVar21);
      iVar40 = 1;
      if (1 < iVar26) {
        iVar40 = iVar26;
      }
      iVar26 = iVar40;
      if ((0 < FGatherSettings::GARDiscoverThreads) &&
         (iVar26 = FGatherSettings::GARDiscoverThreads, iVar40 < FGatherSettings::GARDiscoverThreads
         )) {
        iVar26 = iVar40;
      }
      iVar40 = local_4d0;
      if (iVar26 < local_4d0) {
        iVar40 = iVar26;
      }
      piVar3 = &((local_4d8.__this)->DirToScanBuffers).ArrayNum;
      iVar26 = *piVar3;
      if (iVar26 < iVar40) {
        pTVar4 = &(local_4d8.__this)->DirToScanBuffers;
        iVar26 = iVar40 - iVar26;
        iVar27 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar26,&pTVar4->AllocatorInstance,piVar3,
                            &((local_4d8.__this)->DirToScanBuffers).ArrayMax);
        DefaultConstructItems<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>
                  ((pTVar4->AllocatorInstance).Data + iVar27,iVar26);
      }
      this = local_4d8.__this;
      pFVar41 = ((local_4d8.__this)->DirToScanBuffers).AllocatorInstance.Data;
      local_318 = pFVar41;
      iStack_310 = iVar40;
      if ((iVar40 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      _Size = (size_t)iVar40;
      if (pFVar41 + _Size < pFVar41) {
        _Size = 0;
      }
      if (_Size != 0) {
        memset(pFVar41,0,_Size);
      }
      local_1b8._12_4_ = uStack_30c;
      local_1b8.ArrayNum = iStack_310;
      local_1b8.DataPtr = (FDirToScanBuffer *)local_318;
      ParallelForImpl::
      ParallelForInternal<_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal_::__l21::<lambda_7>,_ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal_::__l21::<lambda_7>_>_::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>
                (L"ParallelFor Task",local_4d0,FGatherSettings::GARDiscoverMinBatchSize,
                 (<lambda_7>)this,<Var36,BackgroundPriority,&local_1b8);
      if ((this->Cache).WriteEnabled != Never) {
        FAssetDataDiscoveryCache::QueueConsume(&this->Cache);
      }
    }
  } while( true );
LAB_142b245d0:
  pFVar31 = local_4a8;
  if (((local_4d8.__this)->MountDirs).ArrayNum != iVar40) {
    local_4c3 = 0;
    `TCheckedPointerIterator<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(&local_4c3);
  }
  pFVar22 = pFVar33;
  if (pFVar41 == pFVar31) {
LAB_142b2465b:
    <Var42.__this = local_4d8.__this;
    if (2 < (byte)LogAssetRegistry._0_1_) {
      uVar39 = local_490;
      if (pFVar22 != (FScanDir *)0x0) {
        pFVar34 = FScanDir::GetLocalAbsPath(pFVar22,&local_1a8);
        if ((pFVar34->Data).ArrayNum == 0) {
          uVar39 = 1;
        }
        else {
          uVar39 = 1;
        }
      }
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_FAssetDataDisco_15098fc48,
                 (FLogCategoryBase *)&LogAssetRegistry);
      <Var42.__this = local_4d8.__this;
      if (((uVar39 & 1) != 0) &&
         (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        <Var42.__this = local_4d8.__this;
      }
    }
LAB_142b246d3:
    SetIsIdle(<Var42.__this,true,&local_498);
LAB_142b246e1:
    DVar17 = *(DWORD *)&lpCriticalSection_00[1].DebugInfo;
    DVar19 = GetCurrentThreadId();
    if ((DVar17 != DVar19) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLockedOnCurrentThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                            ,0x2b,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined4 *)&lpCriticalSection_00[1].DebugInfo = 0;
    LeaveCriticalSection(lpCriticalSection_00);
    if (0.0 <= local_498) {
      QueryPerformanceCounter(&local_440);
      (<Var42.__this)->CurrentDiscoveryTime =
           (((double)local_440.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar10) -
           local_498) + (<Var42.__this)->CurrentDiscoveryTime;
      local_498 = dVar11;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
    DestructItems<UE::AssetDataGather::Private::FScanDirAndParentData,int>
              ((FScanDirAndParentData *)local_500.AllocatorInstance.Data,local_500.ArrayNum);
    if ((FScanDirAndParentData *)local_500.AllocatorInstance.Data != (FScanDirAndParentData *)0x0) {
      FMemory::Free(local_500.AllocatorInstance.Data);
    }
    FMemScope::~FMemScope(&local_438);
    FLLMScope::~FLLMScope(local_4a0);
    return;
  }
  pFVar33 = *(FScanDir **)(*(longlong *)pFVar41 + 0x80);
  pFVar35 = (pFVar33->SubDirs).AllocatorInstance.Data;
  iVar26 = (pFVar33->SubDirs).ArrayNum;
  pFVar31 = pFVar35 + (longlong)iVar26 * 8;
  while( true ) {
    if ((pFVar33->SubDirs).ArrayNum != iVar26) {
      local_4c2[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_4c2);
    }
    if (pFVar35 == pFVar31) break;
    pFVar22 = FScanDir::GetFirstIncompleteScanDir(*(FScanDir **)pFVar35);
    if (pFVar22 != (FScanDir *)0x0) goto LAB_142b2465b;
    pFVar35 = pFVar35 + 8;
  }
  if (pFVar33->bIsComplete == false) {
    pFVar22 = pFVar33;
    if (pFVar33 != (FScanDir *)0x0) goto LAB_142b2465b;
    pFVar41 = pFVar41 + 8;
  }
  else {
    pFVar33 = (FScanDir *)0x0;
    pFVar41 = pFVar41 + 8;
  }
  goto LAB_142b245d0;
}

// TrySetDirectoryProperties @ 142b288a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::TrySetDirectoryProperties
          (FAssetDataDiscovery *this,FString *param_1,FSetPathProperties *param_2,bool param_3)

{
  FCriticalSectionQueryable *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  FPathExistence *pFVar6;
  FMountDir *this_00;
  int iVar7;
  bool local_res18 [16];
  double local_88 [2];
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  TStringView<wchar_t> local_58;
  FPathExistence local_48;
  
  if ((((param_2->HasScanned).bIsSet != false || (param_2->IgnoreDenyList).bIsSet != false) ||
      (param_2->MatchesDenyList).bIsSet != false) || (param_2->IsOnAllowList).bIsSet != false) {
    aVar5 = (this->ResultsLock).OwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar5 == aVar4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ResultsLock.IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0xaf3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (param_1->Data).ArrayNum;
    local_48.LocalAbsPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.LocalAbsPath.Data.ArrayNum = 0;
    local_48.LocalAbsPath.Data.ArrayMax = 0;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    pFVar6 = (FPathExistence *)
             ::FString::ConstructFromPtrSize
                       (&local_68,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar7);
    if (&local_48 != pFVar6) {
      if (local_48.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.LocalAbsPath.Data.AllocatorInstance.Data);
      }
      local_48.LocalAbsPath.Data.AllocatorInstance.Data =
           (pFVar6->LocalAbsPath).Data.AllocatorInstance.Data;
      (pFVar6->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.LocalAbsPath.Data.ArrayNum = (pFVar6->LocalAbsPath).Data.ArrayNum;
      local_48.LocalAbsPath.Data.ArrayMax = (pFVar6->LocalAbsPath).Data.ArrayMax;
      (pFVar6->LocalAbsPath).Data.ArrayNum = 0;
      (pFVar6->LocalAbsPath).Data.ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = &this->TreeLock;
    local_48.ModificationTime.Ticks = 0;
    local_48.PathType = MissingParentDir;
    local_48.bIsReadOnly = false;
    local_48.bHasExistenceData = param_3;
    if ((lpCriticalSection == (FCriticalSectionQueryable *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SynchObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x53,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
    (this->TreeLock).OwnerThreadId = aVar5;
    aVar5 = (this->TreeLock).OwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar5 != aVar4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TreeLock.IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0xafd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_78 = local_48.LocalAbsPath.Data.AllocatorInstance.Data;
    iStack_70 = local_48.LocalAbsPath.Data.ArrayNum + -1;
    if (local_48.LocalAbsPath.Data.ArrayNum == 0) {
      iStack_70 = 0;
    }
    local_58._12_4_ = uStack_6c;
    local_58.Size = iStack_70;
    local_58.DataPtr = (wchar_t *)local_48.LocalAbsPath.Data.AllocatorInstance.Data;
    this_00 = FindContainingMountPoint(this,&local_58);
    if (this_00 == (FMountDir *)0x0) {
      if (2 < (byte)LogAssetRegistry._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      }
    }
    else {
      FMountDir::TrySetDirectoryProperties
                (this_00,&local_48,param_2,(FScanDirAndParentData *)0x0,(TStringView<wchar_t> *)0x0,
                 local_res18);
      if (local_res18[0] != false) {
        local_88[0] = __real_bff0000000000000;
        SetIsIdle(this,false,local_88);
      }
    }
    aVar5 = (this->TreeLock).OwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar5 != aVar4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                           ,0x2b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_48.LocalAbsPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.LocalAbsPath.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TrySetDirectoryPropertiesInternal @ 142b29740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::TrySetDirectoryPropertiesInternal
          (FAssetDataDiscovery *this,FPathExistence *param_1,FSetPathProperties *param_2)

{
  atomic<unsigned_int> aVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  FMountDir *this_00;
  int iVar6;
  bool local_res8 [8];
  double local_res10;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  aVar1 = (this->TreeLock).OwnerThreadId;
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar1 != aVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TreeLock.IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0xafd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.DataPtr = (wchar_t *)(param_1->LocalAbsPath).Data.AllocatorInstance.Data;
  iVar2 = (param_1->LocalAbsPath).Data.ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  local_28._12_4_ = uStack_2c;
  local_28.Size = iVar6;
  this_00 = FindContainingMountPoint(this,&local_28);
  if (this_00 == (FMountDir *)0x0) {
    if (2 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  else {
    FMountDir::TrySetDirectoryProperties
              (this_00,param_1,param_2,(FScanDirAndParentData *)0x0,(TStringView<wchar_t> *)0x0,
               local_res8);
    if (local_res8[0] != false) {
      local_res10 = __real_bff0000000000000;
      SetIsIdle(this,false,&local_res10);
    }
  }
  return;
}

// UpdateAll @ 142b2b650

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::UpdateAll
          (FAssetDataDiscovery *this,
          TArray<UE::AssetDataGather::Private::FScanDirAndParentData,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FInherited local_res18 [2];
  
  aVar2 = (this->TreeLock).OwnerThreadId;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar2 != aVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeLock.IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x8c1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar7 = (this->MountDirs).AllocatorInstance.Data;
  iVar3 = (this->MountDirs).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->MountDirs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<UE::AssetDataGather::Private::FMountDir,TDefaultDelete<UE::AssetDataGather::Private::FMountDir>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    if ((*(FScanDir **)(*(longlong *)pFVar7 + 0x80))->bIsComplete == false) {
      local_res18[0].bIsOnAllowList = false;
      local_res18[0].bMatchesDenyList = false;
      local_res18[0].bIgnoreDenyList = false;
      FScanDir::Update(*(FScanDir **)(*(longlong *)pFVar7 + 0x80),param_1,local_res18);
    }
    pFVar7 = pFVar7 + 8;
  }
  return;
}

// WaitForIdle @ 142b2d7c0

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::WaitForIdle
          (FAssetDataDiscovery *this,double param_1)

{
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  float fVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18;
  
  if (this->bIsIdle == (atomic<bool>)0x0) {
    aVar7 = (this->TreeLock).OwnerThreadId;
    aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar7 == aVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!TreeLock.IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x92b,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    aVar7 = (this->ResultsLock).OwnerThreadId;
    aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
    if ((aVar7 == aVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ResultsLock.IsLockedOnCurrentThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x92c,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar3 = __real_3dcccccd;
    dVar2 = __real_4170000000000000;
    bVar4 = false;
    if (this->bIsIdle == (atomic<bool>)0x0) {
      do {
        if (bVar4) {
LAB_142b2d99d:
          TickInternal(this,true);
LAB_142b2d9a7:
          if (0.0 < param_1) goto LAB_142b2d9ad;
        }
        else {
          lpCriticalSection = &this->TreeLock;
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
          aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
          (this->TreeLock).OwnerThreadId = aVar7;
          bVar4 = (this->TickOwner).bHasOwner == false;
          if (bVar4) {
            (this->TickOwner).bHasOwner = true;
            aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
            (this->TickOwner).OwnerThreadId = aVar7;
          }
          aVar7 = (this->TreeLock).OwnerThreadId;
          aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
          if ((aVar7 != aVar6) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsLockedOnCurrentThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                                 ,0x2b,L""), bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (this->TreeLock).OwnerThreadId = (atomic<unsigned_int>)0x0;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (bVar4) goto LAB_142b2d99d;
          fVar8 = fVar3;
          if (param_1 <= 0.0) {
LAB_142b2d996:
            FWindowsPlatformProcess::Sleep(fVar8);
            goto LAB_142b2d9a7;
          }
          QueryPerformanceCounter(&local_res8);
          fVar8 = (float)(param_1 -
                         ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                         dVar2));
          if (fVar3 <= fVar8) {
            fVar8 = fVar3;
          }
          if (0.0 < fVar8) goto LAB_142b2d996;
LAB_142b2d9ad:
          QueryPerformanceCounter(&local_res18);
          if (param_1 < (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2
             ) break;
        }
      } while (this->bIsIdle == (atomic<bool>)0x0);
      if (bVar4) {
        FThreadOwnerSection::ReleaseOwnershipChecked(&this->TickOwner,&this->TreeLock);
      }
    }
  }
  return;
}

// operator() @ 150497580

bool __thiscall
`UE::AssetDataGather::Private::FAssetDataDiscovery::SetPropertiesAndWait'::__l149::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1152219097065327278>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1152219097065327278>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

