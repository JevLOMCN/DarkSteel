// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 11

// FTickContext @ 142b7b6e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTickContext * __thiscall
UE::AssetRegistry::Impl::FTickContext::FTickContext
          (FTickContext *this,FAssetRegistryImpl *param_1,FEventContext *param_2,
          FClassInheritanceContext *param_3)

{
  (this->ResultContext).bIsSearching = false;
  (this->ResultContext).bAbleToProgress = false;
  (this->ResultContext).SearchTimes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterruptionContext).TickStartTime = -1.0;
  (this->InterruptionContext).MaxRunningTime = -1.0;
  (this->ResultContext).SearchTimes.ArrayNum = 0;
  (this->ResultContext).SearchTimes.ArrayMax = 0;
  (this->ResultContext).NumFilesToSearch = 0;
  (this->ResultContext).NumPathsToSearch = 0;
  (this->ResultContext).bIsDiscoveringFiles = false;
  *(undefined8 *)&(this->InterruptionContext).EarlyExitCallback = 0;
  *(undefined8 *)&(this->InterruptionContext).EarlyExitCallback.field_0x28 = 0;
  (this->InterruptionContext).OutInterrupted = false;
  *(undefined8 *)&(this->MountPointsForVerifyAfterGather).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->MountPointsForVerifyAfterGather).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->MountPointsForVerifyAfterGather).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->MountPointsForVerifyAfterGather).field0_0x0 + 0xc) = 0xffffffff;
  this->GuardedData = param_1;
  this->EventContext = param_2;
  this->InheritanceContext = param_3;
  *(undefined4 *)((longlong)&(this->MountPointsForVerifyAfterGather).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->MountPointsForVerifyAfterGather).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->MountPointsForVerifyAfterGather).field0_0x0 + 0x30) = 0xffffffff
  ;
  *(undefined4 *)((longlong)&(this->MountPointsForVerifyAfterGather).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->MountPointsForVerifyAfterGather).field0_0x0 + 0x40) = 0;
  (this->MountPointsForVerifyAfterGather).field0_0x0.TypedValue.HashSize = 0;
  this->TimingStartTime = -1.0;
  this->NumGatherFromDiskPending = 0;
  this->bHandleCompletion = false;
  this->bHandleDeferred = false;
  this->bNumGatherFromDiskPendingDirty = true;
  this->bHadAssetsToProcess = false;
  this->bIsInGameThread = false;
  return this;
}

// CalculateNumGatherFromDiskPending @ 142b87920

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
UE::AssetRegistry::Impl::FTickContext::CalculateNumGatherFromDiskPending(FTickContext *this)

{
  FAssetRegistryImpl *pFVar1;
  
  pFVar1 = this->GuardedData;
  return (((((((((((*(int *)&(pFVar1->DeferredDependenciesForGameThread).field_0x8 -
                   *(int *)&(pFVar1->DeferredDependenciesForGameThread).field_0x34) -
                  *(int *)&(pFVar1->DeferredDependencies).field_0x34) -
                 *(int *)&(pFVar1->DeferredAssetsForGameThread).field_0x34) -
                *(int *)&(pFVar1->DeferredAssets).field_0x34) -
               (pFVar1->BackgroundResults).VerseFiles.Front) -
              (pFVar1->BackgroundResults).CookedPackageNamesWithoutAssetData.Front) -
             *(int *)&(pFVar1->BackgroundResults).DependenciesForGameThread.field_0x34) -
            *(int *)&(pFVar1->BackgroundResults).Dependencies.field_0x34) -
           (pFVar1->BackgroundResults).Paths.Front) -
          *(int *)&(pFVar1->BackgroundResults).AssetsForGameThread.field_0x34) -
         *(int *)&(pFVar1->BackgroundResults).Assets.field_0x34) +
         *(int *)&(pFVar1->DeferredDependencies).field_0x8 +
         *(int *)&(pFVar1->DeferredAssetsForGameThread).field_0x8 +
         *(int *)&(pFVar1->DeferredAssets).field_0x8 +
         (pFVar1->BackgroundResults).BlockedFiles.ArrayNum +
         (pFVar1->BackgroundResults).VerseFiles.AfterBack +
         (pFVar1->BackgroundResults).CookedPackageNamesWithoutAssetData.AfterBack +
         *(int *)&(pFVar1->BackgroundResults).DependenciesForGameThread.field_0x8 +
         *(int *)&(pFVar1->BackgroundResults).Dependencies.field_0x8 +
         (pFVar1->BackgroundResults).Paths.AfterBack +
         *(int *)&(pFVar1->BackgroundResults).AssetsForGameThread.field_0x8 +
         *(int *)&(pFVar1->BackgroundResults).Assets.field_0x8 +
         (this->ResultContext).NumPathsToSearch + (this->ResultContext).NumFilesToSearch;
}

// GetNumGatherFromDiskPending @ 142b97dd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
UE::AssetRegistry::Impl::FTickContext::GetNumGatherFromDiskPending(FTickContext *this)

{
  FAssetRegistryImpl *pFVar1;
  int iVar2;
  
  if (this->bNumGatherFromDiskPendingDirty != false) {
    pFVar1 = this->GuardedData;
    this->bNumGatherFromDiskPendingDirty = false;
    iVar2 = (((((((((((*(int *)&(pFVar1->DeferredDependenciesForGameThread).field_0x8 -
                      *(int *)&(pFVar1->DeferredDependenciesForGameThread).field_0x34) -
                     *(int *)&(pFVar1->DeferredDependencies).field_0x34) -
                    *(int *)&(pFVar1->DeferredAssetsForGameThread).field_0x34) -
                   *(int *)&(pFVar1->DeferredAssets).field_0x34) -
                  (pFVar1->BackgroundResults).VerseFiles.Front) -
                 (pFVar1->BackgroundResults).CookedPackageNamesWithoutAssetData.Front) -
                *(int *)&(pFVar1->BackgroundResults).DependenciesForGameThread.field_0x34) -
               *(int *)&(pFVar1->BackgroundResults).Dependencies.field_0x34) -
              (pFVar1->BackgroundResults).Paths.Front) -
             *(int *)&(pFVar1->BackgroundResults).AssetsForGameThread.field_0x34) -
            *(int *)&(pFVar1->BackgroundResults).Assets.field_0x34) +
            *(int *)&(pFVar1->DeferredDependencies).field_0x8 +
            *(int *)&(pFVar1->DeferredAssetsForGameThread).field_0x8 +
            *(int *)&(pFVar1->DeferredAssets).field_0x8 +
            (pFVar1->BackgroundResults).BlockedFiles.ArrayNum +
            (pFVar1->BackgroundResults).VerseFiles.AfterBack +
            (pFVar1->BackgroundResults).CookedPackageNamesWithoutAssetData.AfterBack +
            *(int *)&(pFVar1->BackgroundResults).DependenciesForGameThread.field_0x8 +
            *(int *)&(pFVar1->BackgroundResults).Dependencies.field_0x8 +
            (pFVar1->BackgroundResults).Paths.AfterBack +
            *(int *)&(pFVar1->BackgroundResults).AssetsForGameThread.field_0x8 +
            *(int *)&(pFVar1->BackgroundResults).Assets.field_0x8 +
            (this->ResultContext).NumPathsToSearch + (this->ResultContext).NumFilesToSearch;
    this->NumGatherFromDiskPending = iVar2;
    return iVar2;
  }
  return this->NumGatherFromDiskPending;
}

// GetNumPending @ 142b97ea0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall UE::AssetRegistry::Impl::FTickContext::GetNumPending(FTickContext *this)

{
  FAssetRegistryImpl *pFVar1;
  int iVar2;
  
  if (this->bNumGatherFromDiskPendingDirty != false) {
    pFVar1 = this->GuardedData;
    this->bNumGatherFromDiskPendingDirty = false;
    iVar2 = (((((((((((*(int *)&(pFVar1->DeferredDependenciesForGameThread).field_0x8 -
                      *(int *)&(pFVar1->DeferredDependenciesForGameThread).field_0x34) -
                     *(int *)&(pFVar1->DeferredDependencies).field_0x34) -
                    *(int *)&(pFVar1->DeferredAssetsForGameThread).field_0x34) -
                   *(int *)&(pFVar1->DeferredAssets).field_0x34) -
                  (pFVar1->BackgroundResults).VerseFiles.Front) -
                 (pFVar1->BackgroundResults).CookedPackageNamesWithoutAssetData.Front) -
                *(int *)&(pFVar1->BackgroundResults).DependenciesForGameThread.field_0x34) -
               *(int *)&(pFVar1->BackgroundResults).Dependencies.field_0x34) -
              (pFVar1->BackgroundResults).Paths.Front) -
             *(int *)&(pFVar1->BackgroundResults).AssetsForGameThread.field_0x34) -
            *(int *)&(pFVar1->BackgroundResults).Assets.field_0x34) +
            *(int *)&(pFVar1->DeferredDependencies).field_0x8 +
            *(int *)&(pFVar1->DeferredAssetsForGameThread).field_0x8 +
            *(int *)&(pFVar1->DeferredAssets).field_0x8 +
            (pFVar1->BackgroundResults).BlockedFiles.ArrayNum +
            (pFVar1->BackgroundResults).VerseFiles.AfterBack +
            (pFVar1->BackgroundResults).CookedPackageNamesWithoutAssetData.AfterBack +
            *(int *)&(pFVar1->BackgroundResults).DependenciesForGameThread.field_0x8 +
            *(int *)&(pFVar1->BackgroundResults).Dependencies.field_0x8 +
            (pFVar1->BackgroundResults).Paths.AfterBack +
            *(int *)&(pFVar1->BackgroundResults).AssetsForGameThread.field_0x8 +
            *(int *)&(pFVar1->BackgroundResults).Assets.field_0x8 +
            (this->ResultContext).NumPathsToSearch + (this->ResultContext).NumFilesToSearch;
    this->NumGatherFromDiskPending = iVar2;
    return iVar2;
  }
  return this->NumGatherFromDiskPending;
}

// LazyStartTimer @ 142b9d070

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::AssetRegistry::Impl::FTickContext::LazyStartTimer(FTickContext *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if (this->TimingStartTime <= 0.0) {
    QueryPerformanceCounter(local_res8);
    this->TimingStartTime =
         (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return;
}

// RecordTimer @ 142ba23f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::AssetRegistry::Impl::FTickContext::RecordTimer(FTickContext *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if (0.0 < this->TimingStartTime) {
    QueryPerformanceCounter(local_res8);
    this->GuardedData->StoreGatherResultsTimeSeconds =
         (float)(((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000) - this->TimingStartTime) +
         this->GuardedData->StoreGatherResultsTimeSeconds;
    this->TimingStartTime = -1.0;
  }
  return;
}

// RunAssetSearchDataGathered @ 142ba7700

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::Impl::FTickContext::RunAssetSearchDataGathered
          (FTickContext *this,
          TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
          *param_1,TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
                   *param_2)

{
  EDeferFlag EVar1;
  LARGE_INTEGER local_res10;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    if (this->TimingStartTime <= 0.0) {
      QueryPerformanceCounter(&local_res10);
      this->TimingStartTime =
           (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
    }
    if (this->bIsInGameThread == false) {
      if (this->GuardedData->bForceCompletionEvenIfClassNotLoaded == false) {
        EVar1 = RetryLater;
      }
      else {
        EVar1 = QueueToGameThread;
        if (this->GuardedData->bForceCompletionEvenIfNotOnGameThread != false) {
          EVar1 = BypassNow;
        }
      }
    }
    else {
      EVar1 = CanExecuteGameThread;
    }
    FAssetRegistryImpl::AssetSearchDataGathered
              (this->GuardedData,this->EventContext,param_1,param_2,&this->InterruptionContext,
               &this->MountPointsForVerifyAfterGather,EVar1);
  }
  return;
}

// RunDependencyDataGathered @ 142ba8040

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::Impl::FTickContext::RunDependencyDataGathered
          (FTickContext *this,
          TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
          *param_1,TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                   *param_2,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3)

{
  LARGE_INTEGER local_res10;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    if (this->TimingStartTime <= 0.0) {
      QueryPerformanceCounter(&local_res10);
      this->TimingStartTime =
           (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
    }
    FAssetRegistryImpl::DependencyDataGathered
              (this->GuardedData,param_1,param_2,param_3,&this->InterruptionContext,
               &this->MountPointsForVerifyAfterGather);
  }
  return;
}

// SetIntermediateStatus @ 142bac970

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EGatherStatus __thiscall
UE::AssetRegistry::Impl::FTickContext::SetIntermediateStatus
          (FTickContext *this,EGatherStatus param_1)

{
  bool bVar1;
  int iVar2;
  FEventContext *pFVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = GetNumGatherFromDiskPending(this);
  iVar2 = this->GuardedData->HighestPending;
  iVar5 = iVar4;
  if (iVar4 < iVar2) {
    iVar5 = iVar2;
  }
  this->GuardedData->HighestPending = iVar5;
  if (((this->ResultContext).bIsSearching != false) || (this->bHadAssetsToProcess != false)) {
    pFVar3 = this->EventContext;
    bVar1 = (this->ResultContext).bIsDiscoveringFiles;
    (pFVar3->ProgressUpdateData).TypedValue.NumTotalAssets = iVar5;
    (pFVar3->ProgressUpdateData).TypedValue.NumAssetsProcessedByAssetRegistry = iVar5 - iVar4;
    (pFVar3->ProgressUpdateData).TypedValue.bIsDiscoveringAssetFiles = bVar1;
    (pFVar3->ProgressUpdateData).TypedValue.NumAssetsPendingDataLoad = iVar4 / 2;
    (pFVar3->ProgressUpdateData).bIsSet = true;
  }
  this->GuardedData->GatherStatus = param_1;
  return param_1;
}

// SetNumGatherFromDiskPendingDirty @ 142bae5f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::Impl::FTickContext::SetNumGatherFromDiskPendingDirty(FTickContext *this)

{
  this->bNumGatherFromDiskPendingDirty = true;
  return;
}

// UpdateIntermediateStatus @ 142bb6190

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EGatherStatus __thiscall
UE::AssetRegistry::Impl::FTickContext::UpdateIntermediateStatus(FTickContext *this)

{
  FAssetRegistryImpl *pFVar1;
  EGatherStatus EVar2;
  
  if ((this->InterruptionContext).OutInterrupted == false) {
    if ((this->ResultContext).bIsSearching != false) {
      EVar2 = TickActiveGatherActive;
      if ((this->ResultContext).bAbleToProgress == false) {
        EVar2 = UnableToProgress;
      }
      EVar2 = SetIntermediateStatus(this,EVar2);
      return EVar2;
    }
    EVar2 = UnableToProgress;
  }
  else {
    pFVar1 = this->GuardedData;
    EVar2 = pFVar1->GatherStatus;
    if ((EVar2 == UnableToProgress) || (EVar2 == WaitingForEvents)) {
      EVar2 = (this->ResultContext).bAbleToProgress == false;
    }
    if ((((EVar2 == TickActiveGatherIdle) &&
         (*(int *)&(pFVar1->DeferredAssets).field_0x8 ==
          *(int *)&(pFVar1->DeferredAssets).field_0x34)) &&
        (*(int *)&(pFVar1->DeferredDependencies).field_0x8 ==
         *(int *)&(pFVar1->DeferredDependencies).field_0x34)) &&
       (((*(int *)&(pFVar1->BackgroundResults).Assets.field_0x8 ==
          *(int *)&(pFVar1->BackgroundResults).Assets.field_0x34 &&
         (*(int *)&(pFVar1->BackgroundResults).Dependencies.field_0x8 ==
          *(int *)&(pFVar1->BackgroundResults).Dependencies.field_0x34)) &&
        ((pFVar1->BackgroundResults).CookedPackageNamesWithoutAssetData.AfterBack ==
         (pFVar1->BackgroundResults).CookedPackageNamesWithoutAssetData.Front)))) {
      EVar2 = TickActiveGatherIdle;
      if ((pFVar1->BackgroundResults).Paths.AfterBack == (pFVar1->BackgroundResults).Paths.Front) {
        EVar2 = TickGameThreadActiveGatherIdle;
      }
      EVar2 = SetIntermediateStatus(this,EVar2);
      return EVar2;
    }
  }
  EVar2 = SetIntermediateStatus(this,EVar2);
  return EVar2;
}

