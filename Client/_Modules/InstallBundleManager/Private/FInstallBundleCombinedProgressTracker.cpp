// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 22

// FInstallBundleCombinedProgressTracker @ 148bc2490

FInstallBundleCombinedProgressTracker * __thiscall
FInstallBundleCombinedProgressTracker::FInstallBundleCombinedProgressTracker
          (FInstallBundleCombinedProgressTracker *this,
          FInstallBundleCombinedProgressTracker *param_1)

{
  (this->RequiredBundleNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredBundleNames).ArrayNum = 0;
  (this->RequiredBundleNames).ArrayMax = 0;
  *(undefined8 *)&this->BundleStatusCache = 0;
  *(undefined8 *)&(this->BundleStatusCache).field_0x8 = 0;
  *(undefined8 *)&(this->BundleStatusCache).field_0x20 = 0;
  *(undefined4 *)&(this->BundleStatusCache).field_0x28 = 0;
  *(undefined4 *)&(this->BundleStatusCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->BundleStatusCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BundleStatusCache).field_0x34 = 0;
  *(undefined8 *)&(this->BundleStatusCache).field_0x40 = 0;
  *(undefined4 *)&(this->BundleStatusCache).field_0x48 = 0;
  *(undefined8 *)&this->CachedBundleWeights = 0;
  *(undefined8 *)&(this->CachedBundleWeights).field_0x8 = 0;
  *(undefined8 *)&(this->CachedBundleWeights).field_0x20 = 0;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x28 = 0;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x34 = 0;
  *(undefined8 *)&(this->CachedBundleWeights).field_0x40 = 0;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x48 = 0;
  (this->CurrentCombinedProgress).BackgroundDownloadProgressPercent = 0.0;
  (this->CurrentCombinedProgress).InstallOnlyProgressPercent = 0.0;
  (this->CurrentCombinedProgress).ProgressPercent = 0.0;
  (this->CurrentCombinedProgress).InstalledBundlesCount = 0;
  (this->CurrentCombinedProgress).TotalBundlesCount = 0;
  (this->CurrentCombinedProgress).Stats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentCombinedProgress).Stats.ArrayNum = 0;
  (this->CurrentCombinedProgress).Stats.ArrayMax = 0;
  (this->CurrentCombinedProgress).CombinedStatus = Unknown;
  (this->CurrentCombinedProgress).CombinedPauseFlags = None;
  (this->CurrentCombinedProgress).bIsPaused = false;
  (this->CurrentCombinedProgress).bDoesCurrentStateSupportPausing = false;
  (this->CurrentCombinedProgress).bBundleRequiresUpdate = false;
  (this->InstallBundleManager).Object = (IInstallBundleManager *)0x0;
  (this->InstallBundleManager).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TickHandle).Object = (FElement *)0x0;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnTick = 0;
  *(undefined8 *)&(this->OnTick).field_0x28 = 0;
  operator=(this,param_1);
  return this;
}

// FInstallBundleCombinedProgressTracker @ 148bc2580

FInstallBundleCombinedProgressTracker * __thiscall
FInstallBundleCombinedProgressTracker::FInstallBundleCombinedProgressTracker
          (FInstallBundleCombinedProgressTracker *this,
          FInstallBundleCombinedProgressTracker *param_1)

{
  (this->RequiredBundleNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredBundleNames).ArrayNum = 0;
  (this->RequiredBundleNames).ArrayMax = 0;
  *(undefined8 *)&this->BundleStatusCache = 0;
  *(undefined8 *)&(this->BundleStatusCache).field_0x8 = 0;
  *(undefined8 *)&(this->BundleStatusCache).field_0x20 = 0;
  *(undefined4 *)&(this->BundleStatusCache).field_0x28 = 0;
  *(undefined4 *)&(this->BundleStatusCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->BundleStatusCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BundleStatusCache).field_0x34 = 0;
  *(undefined8 *)&(this->BundleStatusCache).field_0x40 = 0;
  *(undefined4 *)&(this->BundleStatusCache).field_0x48 = 0;
  *(undefined8 *)&this->CachedBundleWeights = 0;
  *(undefined8 *)&(this->CachedBundleWeights).field_0x8 = 0;
  *(undefined8 *)&(this->CachedBundleWeights).field_0x20 = 0;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x28 = 0;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x34 = 0;
  *(undefined8 *)&(this->CachedBundleWeights).field_0x40 = 0;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x48 = 0;
  (this->CurrentCombinedProgress).BackgroundDownloadProgressPercent = 0.0;
  (this->CurrentCombinedProgress).InstallOnlyProgressPercent = 0.0;
  (this->CurrentCombinedProgress).ProgressPercent = 0.0;
  (this->CurrentCombinedProgress).InstalledBundlesCount = 0;
  (this->CurrentCombinedProgress).TotalBundlesCount = 0;
  (this->CurrentCombinedProgress).Stats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentCombinedProgress).Stats.ArrayNum = 0;
  (this->CurrentCombinedProgress).Stats.ArrayMax = 0;
  (this->CurrentCombinedProgress).CombinedStatus = Unknown;
  (this->CurrentCombinedProgress).CombinedPauseFlags = None;
  (this->CurrentCombinedProgress).bIsPaused = false;
  (this->CurrentCombinedProgress).bDoesCurrentStateSupportPausing = false;
  (this->CurrentCombinedProgress).bBundleRequiresUpdate = false;
  (this->InstallBundleManager).Object = (IInstallBundleManager *)0x0;
  (this->InstallBundleManager).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TickHandle).Object = (FElement *)0x0;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnTick = 0;
  *(undefined8 *)&(this->OnTick).field_0x28 = 0;
  operator=(this,param_1);
  return this;
}

// FInstallBundleCombinedProgressTracker @ 148bc2670

FInstallBundleCombinedProgressTracker * __thiscall
FInstallBundleCombinedProgressTracker::FInstallBundleCombinedProgressTracker
          (FInstallBundleCombinedProgressTracker *this,bool param_1,
          TUniqueFunction<void___cdecl(FInstallBundleCombinedProgressTracker::FCombinedProgress_const_&)>
          *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  (this->RequiredBundleNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredBundleNames).ArrayNum = 0;
  (this->RequiredBundleNames).ArrayMax = 0;
  *(undefined8 *)&this->BundleStatusCache = 0;
  *(undefined8 *)&(this->BundleStatusCache).field_0x8 = 0;
  *(undefined8 *)&(this->BundleStatusCache).field_0x20 = 0;
  *(undefined4 *)&(this->BundleStatusCache).field_0x28 = 0;
  *(undefined4 *)&(this->BundleStatusCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->BundleStatusCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BundleStatusCache).field_0x34 = 0;
  *(undefined8 *)&(this->BundleStatusCache).field_0x40 = 0;
  *(undefined4 *)&(this->BundleStatusCache).field_0x48 = 0;
  *(undefined8 *)&this->CachedBundleWeights = 0;
  *(undefined8 *)&(this->CachedBundleWeights).field_0x8 = 0;
  *(undefined8 *)&(this->CachedBundleWeights).field_0x20 = 0;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x28 = 0;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x34 = 0;
  *(undefined8 *)&(this->CachedBundleWeights).field_0x40 = 0;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x48 = 0;
  (this->CurrentCombinedProgress).BackgroundDownloadProgressPercent = 0.0;
  (this->CurrentCombinedProgress).InstallOnlyProgressPercent = 0.0;
  (this->CurrentCombinedProgress).ProgressPercent = 0.0;
  (this->CurrentCombinedProgress).InstalledBundlesCount = 0;
  (this->CurrentCombinedProgress).TotalBundlesCount = 0;
  (this->CurrentCombinedProgress).Stats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentCombinedProgress).Stats.ArrayNum = 0;
  (this->CurrentCombinedProgress).Stats.ArrayMax = 0;
  (this->CurrentCombinedProgress).CombinedStatus = Unknown;
  (this->CurrentCombinedProgress).CombinedPauseFlags = None;
  (this->CurrentCombinedProgress).bIsPaused = false;
  (this->CurrentCombinedProgress).bDoesCurrentStateSupportPausing = false;
  (this->CurrentCombinedProgress).bBundleRequiresUpdate = false;
  (this->InstallBundleManager).Object = (IInstallBundleManager *)0x0;
  (this->InstallBundleManager).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TickHandle).Object = (FElement *)0x0;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnTick = *(undefined8 *)param_2;
  *(undefined8 *)&(this->OnTick).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->OnTick).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->OnTick).field_0x18 = uVar1;
  *(undefined8 *)&(this->OnTick).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->OnTick != 0) {
    *(undefined8 *)param_2 = 0;
  }
  SetupDelegates(this,param_1);
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return this;
}

// ~FInstallBundleCombinedProgressTracker @ 148bc3c90

void __thiscall
FInstallBundleCombinedProgressTracker::~FInstallBundleCombinedProgressTracker
          (FInstallBundleCombinedProgressTracker *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  longlong *plVar7;
  
  CleanUpDelegates(this);
  if (*(longlong *)&this->OnTick != 0) {
    plVar3 = *(longlong **)&(this->OnTick).field_0x28;
    plVar7 = (longlong *)&(this->OnTick).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pTVar4 = (this->InstallBundleManager).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  DestructItems<FBuildInstallerStat,int>
            ((FBuildInstallerStat *)(this->CurrentCombinedProgress).Stats.AllocatorInstance.Data,
             (this->CurrentCombinedProgress).Stats.ArrayNum);
  pFVar5 = (this->CurrentCombinedProgress).Stats.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->CachedBundleWeights).field_0x48 = 0;
  pvVar6 = *(void **)&(this->CachedBundleWeights).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedBundleWeights);
  *(undefined4 *)&(this->BundleStatusCache).field_0x48 = 0;
  pvVar6 = *(void **)&(this->BundleStatusCache).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BundleStatusCache);
  pFVar5 = (this->RequiredBundleNames).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// operator= @ 148bc4600

FInstallBundleCombinedProgressTracker * __thiscall
FInstallBundleCombinedProgressTracker::operator=
          (FInstallBundleCombinedProgressTracker *this,
          FInstallBundleCombinedProgressTracker *param_1)

{
  atomic<int> *paVar1;
  TMap<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
  *pTVar2;
  TMap<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
  *this_00;
  undefined1 *puVar3;
  undefined1 *puVar4;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar5;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  IInstallBundleManager *pIVar9;
  FScriptContainerElement *pFVar10;
  void *pvVar11;
  TReferenceControllerBase<1> *pTVar12;
  
  if (this != param_1) {
    FCombinedProgress::operator=(&this->CurrentCombinedProgress,&param_1->CurrentCombinedProgress);
    pTVar8 = (param_1->InstallBundleManager).WeakReferenceCount.ReferenceController;
    pIVar9 = (param_1->InstallBundleManager).Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (this->InstallBundleManager).WeakReferenceCount.ReferenceController;
    (this->InstallBundleManager).Object = pIVar9;
    (this->InstallBundleManager).WeakReferenceCount.ReferenceController = pTVar8;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar12->WeakReferenceCount;
      aVar7 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar7 == (atomic<int>)0x1) {
        (**(code **)(pTVar12->_padding_ + 8))();
      }
    }
    pFVar10 = (this->RequiredBundleNames).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    pTVar2 = &param_1->BundleStatusCache;
    (this->RequiredBundleNames).AllocatorInstance.Data =
         (param_1->RequiredBundleNames).AllocatorInstance.Data;
    this_00 = &this->BundleStatusCache;
    (param_1->RequiredBundleNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RequiredBundleNames).ArrayNum = (param_1->RequiredBundleNames).ArrayNum;
    (this->RequiredBundleNames).ArrayMax = (param_1->RequiredBundleNames).ArrayMax;
    (param_1->RequiredBundleNames).ArrayNum = 0;
    (param_1->RequiredBundleNames).ArrayMax = 0;
    if (this_00 != pTVar2) {
      TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->BundleStatusCache).field_0x8);
      if (*(void **)this_00 != (void *)0x0) {
        FMemory::Free(*(void **)this_00);
      }
      puVar3 = &(param_1->BundleStatusCache).field_0x10;
      *(undefined8 *)this_00 = *(undefined8 *)pTVar2;
      puVar4 = &(this->BundleStatusCache).field_0x10;
      *(undefined8 *)pTVar2 = 0;
      *(undefined4 *)&(this->BundleStatusCache).field_0x8 =
           *(undefined4 *)&(param_1->BundleStatusCache).field_0x8;
      *(undefined4 *)&(this->BundleStatusCache).field_0xc =
           *(undefined4 *)&(param_1->BundleStatusCache).field_0xc;
      *(undefined8 *)&(param_1->BundleStatusCache).field_0x8 = 0;
      if (puVar4 != puVar3) {
        if (*(longlong *)&(param_1->BundleStatusCache).field_0x20 == 0) {
          memmove(puVar4,puVar3,0x10);
        }
        pvVar11 = *(void **)&(this->BundleStatusCache).field_0x20;
        if (pvVar11 != (void *)0x0) {
          FMemory::Free(pvVar11);
        }
        *(undefined8 *)&(this->BundleStatusCache).field_0x20 =
             *(undefined8 *)&(param_1->BundleStatusCache).field_0x20;
        *(undefined8 *)&(param_1->BundleStatusCache).field_0x20 = 0;
        *(undefined4 *)&(this->BundleStatusCache).field_0x28 =
             *(undefined4 *)&(param_1->BundleStatusCache).field_0x28;
        *(undefined4 *)&(this->BundleStatusCache).field_0x2c =
             *(undefined4 *)&(param_1->BundleStatusCache).field_0x2c;
        *(undefined8 *)&(param_1->BundleStatusCache).field_0x28 = 0;
      }
      *(undefined4 *)&(this->BundleStatusCache).field_0x30 =
           *(undefined4 *)&(param_1->BundleStatusCache).field_0x30;
      *(undefined4 *)&(this->BundleStatusCache).field_0x34 =
           *(undefined4 *)&(param_1->BundleStatusCache).field_0x34;
      *(undefined4 *)&(param_1->BundleStatusCache).field_0x30 = 0xffffffff;
      *(undefined4 *)&(param_1->BundleStatusCache).field_0x34 = 0;
      if (*(longlong *)&(param_1->BundleStatusCache).field_0x40 == 0) {
        *(undefined4 *)&(this->BundleStatusCache).field_0x38 =
             *(undefined4 *)&(param_1->BundleStatusCache).field_0x38;
      }
      pvVar11 = *(void **)&(this->BundleStatusCache).field_0x40;
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
      *(undefined8 *)&(this->BundleStatusCache).field_0x40 =
           *(undefined8 *)&(param_1->BundleStatusCache).field_0x40;
      *(undefined8 *)&(param_1->BundleStatusCache).field_0x40 = 0;
      *(undefined4 *)&(this->BundleStatusCache).field_0x48 =
           *(undefined4 *)&(param_1->BundleStatusCache).field_0x48;
      *(undefined4 *)&(param_1->BundleStatusCache).field_0x48 = 0;
    }
    pTVar5 = &param_1->CachedBundleWeights;
    pTVar6 = &this->CachedBundleWeights;
    if (pTVar6 != pTVar5) {
      if (*(void **)pTVar6 != (void *)0x0) {
        FMemory::Free(*(void **)pTVar6);
      }
      puVar3 = &(param_1->CachedBundleWeights).field_0x10;
      *(undefined8 *)pTVar6 = *(undefined8 *)pTVar5;
      puVar4 = &(this->CachedBundleWeights).field_0x10;
      *(undefined8 *)pTVar5 = 0;
      *(undefined4 *)&(this->CachedBundleWeights).field_0x8 =
           *(undefined4 *)&(param_1->CachedBundleWeights).field_0x8;
      *(undefined4 *)&(this->CachedBundleWeights).field_0xc =
           *(undefined4 *)&(param_1->CachedBundleWeights).field_0xc;
      *(undefined8 *)&(param_1->CachedBundleWeights).field_0x8 = 0;
      if (puVar4 != puVar3) {
        if (*(longlong *)&(param_1->CachedBundleWeights).field_0x20 == 0) {
          memmove(puVar4,puVar3,0x10);
        }
        pvVar11 = *(void **)&(this->CachedBundleWeights).field_0x20;
        if (pvVar11 != (void *)0x0) {
          FMemory::Free(pvVar11);
        }
        *(undefined8 *)&(this->CachedBundleWeights).field_0x20 =
             *(undefined8 *)&(param_1->CachedBundleWeights).field_0x20;
        *(undefined8 *)&(param_1->CachedBundleWeights).field_0x20 = 0;
        *(undefined4 *)&(this->CachedBundleWeights).field_0x28 =
             *(undefined4 *)&(param_1->CachedBundleWeights).field_0x28;
        *(undefined4 *)&(this->CachedBundleWeights).field_0x2c =
             *(undefined4 *)&(param_1->CachedBundleWeights).field_0x2c;
        *(undefined8 *)&(param_1->CachedBundleWeights).field_0x28 = 0;
      }
      *(undefined4 *)&(this->CachedBundleWeights).field_0x30 =
           *(undefined4 *)&(param_1->CachedBundleWeights).field_0x30;
      *(undefined4 *)&(this->CachedBundleWeights).field_0x34 =
           *(undefined4 *)&(param_1->CachedBundleWeights).field_0x34;
      *(undefined4 *)&(param_1->CachedBundleWeights).field_0x30 = 0xffffffff;
      *(undefined4 *)&(param_1->CachedBundleWeights).field_0x34 = 0;
      if (*(longlong *)&(param_1->CachedBundleWeights).field_0x40 == 0) {
        *(undefined4 *)&(this->CachedBundleWeights).field_0x38 =
             *(undefined4 *)&(param_1->CachedBundleWeights).field_0x38;
      }
      pvVar11 = *(void **)&(this->CachedBundleWeights).field_0x40;
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
      *(undefined8 *)&(this->CachedBundleWeights).field_0x40 =
           *(undefined8 *)&(param_1->CachedBundleWeights).field_0x40;
      *(undefined8 *)&(param_1->CachedBundleWeights).field_0x40 = 0;
      *(undefined4 *)&(this->CachedBundleWeights).field_0x48 =
           *(undefined4 *)&(param_1->CachedBundleWeights).field_0x48;
      *(undefined4 *)&(param_1->CachedBundleWeights).field_0x48 = 0;
    }
    CleanUpDelegates(param_1);
    if ((((param_1->TickHandle).Object != (FElement *)0x0) &&
        (pTVar8 = (param_1->TickHandle).WeakReferenceCount.ReferenceController,
        pTVar8 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar8->SharedReferenceCount)) {
      SetupDelegates(this,true);
      return this;
    }
    SetupDelegates(this,false);
  }
  return this;
}

// operator= @ 148bc48f0

FInstallBundleCombinedProgressTracker * __thiscall
FInstallBundleCombinedProgressTracker::operator=
          (FInstallBundleCombinedProgressTracker *this,
          FInstallBundleCombinedProgressTracker *param_1)

{
  int *piVar1;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this_00;
  undefined1 *puVar2;
  undefined1 *this_01;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar7;
  IInstallBundleManager *pIVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  if (this != param_1) {
    iVar5 = (this->RequiredBundleNames).ArrayMax;
    piVar1 = &(this->RequiredBundleNames).ArrayMax;
    _Src = (param_1->RequiredBundleNames).AllocatorInstance.Data;
    iVar6 = (param_1->RequiredBundleNames).ArrayNum;
    (this->RequiredBundleNames).ArrayNum = iVar6;
    if ((iVar6 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar6,iVar5,(ForAnyElementType *)this,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((this->RequiredBundleNames).AllocatorInstance.Data,_Src,(longlong)iVar6 << 3);
      }
    }
    TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
                 *)&this->BundleStatusCache,
                (TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
                 *)&param_1->BundleStatusCache);
    this_00 = &this->CachedBundleWeights;
    if (this_00 != &param_1->CachedBundleWeights) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)&(this->CachedBundleWeights).field_0x38,
                 (int *)&(this->CachedBundleWeights).field_0x48,
                 (ForElementType<FSetElementId> *)&(param_1->CachedBundleWeights).field_0x38,
                 *(int *)&(param_1->CachedBundleWeights).field_0x48);
      iVar5 = *(int *)&(param_1->CachedBundleWeights).field_0x8;
      TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,iVar5);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar5,(ForAnyElementType *)this_00,
                 (int *)&(this->CachedBundleWeights).field_0x8,
                 (int *)&(this->CachedBundleWeights).field_0xc);
      puVar2 = &(param_1->CachedBundleWeights).field_0x10;
      this_01 = &(this->CachedBundleWeights).field_0x10;
      *(undefined4 *)&(this->CachedBundleWeights).field_0x30 =
           *(undefined4 *)&(param_1->CachedBundleWeights).field_0x30;
      *(undefined4 *)&(this->CachedBundleWeights).field_0x34 =
           *(undefined4 *)&(param_1->CachedBundleWeights).field_0x34;
      if (this_01 != puVar2) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                   (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
      }
      if (iVar5 != 0) {
        memcpy(*(void **)this_00,*(void **)&param_1->CachedBundleWeights,(longlong)iVar5 * 0x14);
      }
    }
    FCombinedProgress::operator=(&this->CurrentCombinedProgress,&param_1->CurrentCombinedProgress);
    pTVar7 = (param_1->InstallBundleManager).WeakReferenceCount.ReferenceController;
    pIVar8 = (param_1->InstallBundleManager).Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = (this->InstallBundleManager).WeakReferenceCount.ReferenceController;
    (this->InstallBundleManager).Object = pIVar8;
    (this->InstallBundleManager).WeakReferenceCount.ReferenceController = pTVar7;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar9->WeakReferenceCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar9->_padding_ + 8))();
      }
    }
    if ((((param_1->TickHandle).Object == (FElement *)0x0) ||
        (pTVar7 = (param_1->TickHandle).WeakReferenceCount.ReferenceController,
        pTVar7 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar7->SharedReferenceCount < 1)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    SetupDelegates(this,bVar10);
  }
  return this;
}

// CleanUpDelegates @ 148bc62c0

void __thiscall
FInstallBundleCombinedProgressTracker::CleanUpDelegates(FInstallBundleCombinedProgressTracker *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TWeakPtr<FTSTicker::FElement,1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &IInstallBundleManager::InstallBundleCompleteDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &IInstallBundleManager::PausedBundleDelegate,this);
  pTVar4 = &this->TickHandle;
  if (((pTVar4->Object != (FElement *)0x0) &&
      (pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    local_28.Object = pTVar4->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->TickHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar4 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      pTVar4->Object = (FElement *)0x0;
      (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000148bc6360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          return;
        }
      }
    }
  }
  return;
}

// GetCurrentCombinedProgress @ 148bcb130

FCombinedProgress * __thiscall
FInstallBundleCombinedProgressTracker::GetCurrentCombinedProgress
          (FInstallBundleCombinedProgressTracker *this)

{
  return &this->CurrentCombinedProgress;
}

// OnBundleInstallComplete @ 148bd1830

void __thiscall
FInstallBundleCombinedProgressTracker::OnBundleInstallComplete
          (FInstallBundleCombinedProgressTracker *this,FInstallBundleRequestResultInfo *param_1)

{
  FName *pFVar1;
  longlong lVar2;
  FName FVar3;
  IInstallBundleManager *pIVar4;
  FScriptContainerElement *pFVar5;
  ITextData *pIVar6;
  code *pcVar7;
  atomic<int> aVar8;
  uint uVar9;
  atomic<int> aVar10;
  FInstallBundleProgress *pFVar11;
  undefined1 *puVar12;
  IInstallBundleManager *pIVar13;
  IInstallBundleManager *pIVar14;
  int iVar15;
  FName *pFVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18 [2];
  FName local_68;
  EInstallBundleStatus local_60;
  EInstallBundlePauseFlags local_5c;
  float local_58;
  float local_54;
  float local_50;
  TArray<FBuildInstallerStat,TSizedDefaultAllocator<32>_> local_48;
  float local_38;
  char local_30;
  
  FVar3 = param_1->BundleName;
  pFVar16 = (FName *)(this->RequiredBundleNames).AllocatorInstance.Data;
  pFVar1 = pFVar16 + (this->RequiredBundleNames).ArrayNum;
  for (; pFVar16 != pFVar1; pFVar16 = pFVar16 + 1) {
    if (*pFVar16 == FVar3) {
      bVar17 = true;
      goto LAB_148bd1876;
    }
  }
  bVar17 = false;
LAB_148bd1876:
  local_res18[0] = FVar3;
  if ((param_1->Result != OK) || (!bVar17)) goto LAB_148bd1a8e;
  uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar9 = uVar9 + FVar3.Number;
  if (*(int *)&(this->BundleStatusCache).field_0x8 != *(int *)&(this->BundleStatusCache).field_0x34)
  {
    puVar12 = *(undefined1 **)&(this->BundleStatusCache).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->BundleStatusCache).field_0x38;
    }
    iVar15 = *(int *)(puVar12 +
                     (ulonglong)(*(int *)&(this->BundleStatusCache).field_0x48 - 1U & uVar9) * 4);
    if (iVar15 != -1) {
      do {
        lVar2 = *(longlong *)&this->BundleStatusCache + (longlong)iVar15 * 0x48;
        if (*(FName *)(*(longlong *)&this->BundleStatusCache + (longlong)iVar15 * 0x48) ==
            local_res18[0]) {
          if (lVar2 != 0) {
            pFVar11 = (FInstallBundleProgress *)(lVar2 + 8);
            goto LAB_148bd1926;
          }
          break;
        }
        iVar15 = *(int *)(lVar2 + 0x40);
      } while (iVar15 != -1);
    }
  }
  pFVar11 = TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
            ::EmplaceByHash<FName_const_&>
                      ((TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
                        *)&this->BundleStatusCache,uVar9,local_res18);
LAB_148bd1926:
  pFVar11->Status = Ready;
  pIVar14 = (IInstallBundleManager *)0x0;
  pIVar4 = (IInstallBundleManager *)
           (this->InstallBundleManager).WeakReferenceCount.ReferenceController;
  pIVar13 = pIVar4;
  if (pIVar4 == (IInstallBundleManager *)0x0) {
LAB_148bd1957:
    local_res8[0] = 0;
    bVar17 = `FInstallBundleCombinedProgressTracker::OnBundleInstallComplete'::__l6::<lambda_1>::
             operator()(local_res8);
    if (bVar17) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_148bd199a;
    }
  }
  else {
    aVar8 = *(atomic<int> *)&pIVar4->field_0x8;
    do {
      pIVar13 = pIVar14;
      if (aVar8 == (atomic<int>)0x0) goto LAB_148bd1957;
      LOCK();
      aVar10 = *(atomic<int> *)&pIVar4->field_0x8;
      bVar17 = aVar8 == aVar10;
      if (bVar17) {
        *(atomic<int> *)&pIVar4->field_0x8 = (atomic<int>)((int)aVar8 + 1);
        aVar10 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar10;
    } while (!bVar17);
    pIVar14 = (this->InstallBundleManager).Object;
    pIVar13 = pIVar4;
    if (pIVar14 == (IInstallBundleManager *)0x0) goto LAB_148bd1957;
LAB_148bd199a:
    (**(code **)(*(longlong *)&pIVar14->field_0x0 + 0x100))(pIVar14,&local_68,local_res18[0]);
    if (local_30 == '\0') {
      local_res10[0] = 0;
      bVar17 = `FInstallBundleCombinedProgressTracker::OnBundleInstallComplete'::__l9::<lambda_2>::
               operator()(local_res10);
      if (bVar17) {
        if ((local_30 == '\0') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        goto LAB_148bd1a00;
      }
    }
    else {
LAB_148bd1a00:
      pFVar11->BundleName = local_68;
      pFVar11->BackgroundDownload_Percent = local_58;
      pFVar11->Status = local_60;
      pFVar11->PauseFlags = local_5c;
      pFVar11->InstallOnly_Percent = local_54;
      pFVar11->Install_Percent = local_50;
      TArray<FBuildInstallerStat,TSizedDefaultAllocator<32>_>::operator=(&pFVar11->Stats,&local_48);
      pFVar11->Finishing_Percent = local_38;
    }
    if ((local_30 != '\0') &&
       (DestructItems<FBuildInstallerStat,int>
                  ((FBuildInstallerStat *)local_48.AllocatorInstance.Data,local_48.ArrayNum),
       (FBuildInstallerStat *)local_48.AllocatorInstance.Data != (FBuildInstallerStat *)0x0)) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar13);
LAB_148bd1a8e:
  pFVar5 = (param_1->OptionalErrorCode).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pIVar6 = (param_1->OptionalErrorText).TextData.Reference;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  return;
}

// OnBundleInstallPauseChanged @ 148bd1b00

void __thiscall
FInstallBundleCombinedProgressTracker::OnBundleInstallPauseChanged
          (FInstallBundleCombinedProgressTracker *this,FInstallBundlePauseInfo *param_1)

{
  FName *pFVar1;
  FName FVar2;
  uint uVar3;
  FName *pFVar4;
  FInstallBundleProgress *pFVar5;
  
  pFVar4 = (FName *)(this->RequiredBundleNames).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (this->RequiredBundleNames).ArrayNum;
  if (pFVar4 != pFVar1) {
    FVar2 = param_1->BundleName;
    while (*pFVar4 != FVar2) {
      pFVar4 = pFVar4 + 1;
      if (pFVar4 == pFVar1) {
        return;
      }
    }
    uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    pFVar5 = TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
                         *)&this->BundleStatusCache,uVar3 + FVar2.Number,&param_1->BundleName);
    pFVar5->PauseFlags = param_1->PauseFlags;
  }
  return;
}

// SetBundlesToTrackFromContentState @ 148bd74c0

void __thiscall
FInstallBundleCombinedProgressTracker::SetBundlesToTrackFromContentState
          (FInstallBundleCombinedProgressTracker *this,FInstallBundleCombinedContentState *param_1,
          TArrayView<FName,int> *param_2)

{
  int *piVar1;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar2;
  FName *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  FName *pFVar6;
  FName FVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  FInstallBundleCombinedContentState *pFVar11;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FInstallBundleContentState *pFVar17;
  float *pfVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  FName *pFVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  undefined1 local_res20 [8];
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  FInstallBundleCombinedContentState *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  int local_164;
  int local_160;
  FName *local_158;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  FInstallBundleCombinedContentState *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  
  iVar27 = 0;
  piVar1 = &(this->RequiredBundleNames).ArrayMax;
  (this->RequiredBundleNames).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  bVar15 = 1 < *(int *)&(this->CachedBundleWeights).field_0x48;
  if (!bVar15) {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                    *)&this->CachedBundleWeights);
  }
  puVar23 = &(this->CachedBundleWeights).field_0xc;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x8 = 0;
  if (*(int *)puVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)&this->CachedBundleWeights,0,(int *)puVar23);
  }
  *(undefined4 *)&(this->CachedBundleWeights).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x34 = 0;
  iVar16 = *(int *)&(this->CachedBundleWeights).field_0x2c;
  *(undefined4 *)&(this->CachedBundleWeights).field_0x28 = 0;
  if ((iVar16 < 0) || (0x80 < iVar16)) {
    *(undefined4 *)&(this->CachedBundleWeights).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedBundleWeights).field_0x10,0);
  }
  local_1a0 = 1;
  if (bVar15) {
    *(undefined4 *)&(this->CachedBundleWeights).field_0x48 = 1;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            *)&this->CachedBundleWeights);
  }
  bVar15 = 1 < *(int *)&(this->BundleStatusCache).field_0x48;
  if (!bVar15) {
    TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
                      *)&this->BundleStatusCache);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->BundleStatusCache,0,*(int *)&(this->BundleStatusCache).field_0x8);
  puVar23 = &(this->BundleStatusCache).field_0xc;
  *(undefined4 *)&(this->BundleStatusCache).field_0x8 = 0;
  if (*(int *)puVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)&this->BundleStatusCache,0,(int *)puVar23);
  }
  *(undefined4 *)&(this->BundleStatusCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BundleStatusCache).field_0x34 = 0;
  iVar16 = *(int *)&(this->BundleStatusCache).field_0x2c;
  *(undefined4 *)&(this->BundleStatusCache).field_0x28 = 0;
  if ((iVar16 < 0) || (0x80 < iVar16)) {
    *(undefined4 *)&(this->BundleStatusCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BundleStatusCache).field_0x10,0);
  }
  if (bVar15) {
    *(undefined4 *)&(this->BundleStatusCache).field_0x48 = 1;
    TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
              *)&this->BundleStatusCache);
  }
  iVar16 = *(int *)&(param_1->IndividualBundleStates).field_0x28;
  puVar23 = &(param_1->IndividualBundleStates).field_0x10;
  bVar15 = true;
  iStack_190 = 0;
  local_178 = 0;
  uStack_18c = 1;
  iStack_17c = 0;
  if (iVar16 != 0) {
    puVar26 = *(uint **)&(param_1->IndividualBundleStates).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar23;
    }
    uStack_18c = *puVar26;
    while (uStack_18c == 0) {
      lVar19 = (longlong)iStack_190;
      local_178 = local_178 + 0x20;
      iStack_190 = iStack_190 + 1;
      uStack_18c = 1;
      iStack_17c = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190) goto LAB_148bd76ed;
      uStack_18c = puVar26[lVar19 + 1];
    }
    uStack_18c = -uStack_18c & uStack_18c;
    uVar4 = (ulonglong)uStack_18c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_168 = (int)lVar19;
    iStack_17c = local_178 + -1 + local_168;
    if (iVar16 < iStack_17c) {
      iStack_17c = iVar16;
    }
  }
LAB_148bd76ed:
  uVar21 = *(uint *)&(param_1->IndividualBundleStates).field_0x28;
  uStack_174 = local_a4;
  iStack_170 = *(int *)&(param_1->IndividualBundleStates).field_0x8 -
               *(int *)&(param_1->IndividualBundleStates).field_0x34;
  uVar28 = uVar21 & 0xffffffe0;
  uStack_180 = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_18c,iStack_190);
  TStack_118.CurrentBitIndex = iStack_17c;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar21 >> 5;
  TStack_118._28_4_ = local_a4;
  TStack_118.BaseBitIndex = local_178;
  uStack_f8 = CONCAT44(uStack_16c,iStack_170);
  local_198 = param_1;
  local_188 = puVar23;
  local_120 = param_1;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar23;
  if ((((int)uVar21 < 0) || (iVar16 < (int)uVar21)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar9 = __real_322bcc77;
  uVar5 = *(uint *)&(param_1->IndividualBundleStates).field_0x28;
  if (uVar21 != uVar5) {
    puVar24 = *(undefined1 **)&(param_1->IndividualBundleStates).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar23;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
    while (uVar21 == 0) {
      lVar19 = (longlong)iVar20;
      uVar28 = uVar28 + 0x20;
      iVar20 = iVar20 + 1;
      uVar21 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_148bd7800;
      uVar21 = *(uint *)(puVar24 + lVar19 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_164 = (int)lVar19;
    uVar21 = local_164 + -1 + uVar28;
    if ((int)uVar5 < (int)uVar21) {
      uVar21 = uVar5;
    }
  }
LAB_148bd7800:
  do {
    pFVar11 = local_120;
    if (*(int *)&(local_120->IndividualBundleStates).field_0x8 -
        *(int *)&(local_120->IndividualBundleStates).field_0x34 != (int)uStack_f8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleContentState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    fVar10 = __real_3f800000;
    if (((TStack_118.CurrentBitIndex == uVar21) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar23)) &&
       (pFVar11 == param_1)) goto LAB_148bd786d;
    if (fVar9 < *(float *)((longlong)TStack_118.CurrentBitIndex * 0x68 + 0xc +
                          *(longlong *)&pFVar11->IndividualBundleStates)) break;
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  } while( true );
  bVar15 = false;
LAB_148bd786d:
  bVar13 = false;
  fVar30 = 0.0;
  pFVar22 = param_2->DataPtr;
  pFVar3 = pFVar22 + param_2->ArrayNum;
  for (; pFVar22 != pFVar3; pFVar22 = pFVar22 + 1) {
    pFVar17 = TMapBase<FName,FInstallBundleContentState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleContentState,0>_>
              ::Find((TMapBase<FName,FInstallBundleContentState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleContentState,0>_>
                      *)param_1,*pFVar22);
    if (((pFVar17 != (FInstallBundleContentState *)0x0) ||
        (local_158 = pFVar22,
        bVar14 = `FInstallBundleCombinedProgressTracker::SetBundlesToTrackFromContentState'::__l14::
                 <lambda_1>::operator()(&local_158), bVar14)) &&
       ((bVar15 || (fVar9 < pFVar17->Weight)))) {
      if ((pFVar17->State == NotInstalled) || (pFVar17->State == NeedsUpdate)) {
        bVar13 = true;
      }
      pFVar6 = (FName *)(this->RequiredBundleNames).AllocatorInstance.Data;
      if (((pFVar6 <= pFVar22) && (pFVar22 < pFVar6 + (this->RequiredBundleNames).ArrayMax)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = (this->RequiredBundleNames).ArrayNum;
      if (iVar16 == (this->RequiredBundleNames).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,(ForAnyElementType *)this,&(this->RequiredBundleNames).ArrayMax);
      }
      (this->RequiredBundleNames).ArrayNum = iVar16 + 1;
      *(FName *)((this->RequiredBundleNames).AllocatorInstance.Data + (longlong)iVar16 * 8) =
           *pFVar22;
      fVar29 = fVar10;
      if (!bVar15) {
        fVar29 = pFVar17->Weight;
      }
      FVar7 = *pFVar22;
      uVar21 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
      pfVar18 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                ::FindOrAddImpl<FName_const_&>
                          ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                            *)&this->CachedBundleWeights,uVar21 + FVar7.Number,pFVar22);
      fVar30 = fVar30 + fVar29;
      *pfVar18 = fVar29;
    }
  }
  (this->CurrentCombinedProgress).bBundleRequiresUpdate = bVar13;
  if (0.0 < fVar30) {
    local_140 = &(this->CachedBundleWeights).field_0x10;
    iVar16 = *(int *)&(this->CachedBundleWeights).field_0x28;
    pTVar2 = &this->CachedBundleWeights;
    local_130 = 0;
    iStack_134 = 0;
    if (iVar16 == 0) {
LAB_148bd7a8b:
      uStack_144 = (uint)local_1a0;
    }
    else {
      puVar26 = *(uint **)&(this->CachedBundleWeights).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)local_140;
      }
      uStack_144 = *puVar26;
      while (uStack_144 == 0) {
        lVar19 = (longlong)iVar27;
        local_130 = local_130 + 0x20;
        iVar27 = iVar27 + 1;
        iStack_134 = iVar16;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_148bd7a8b;
        uStack_144 = puVar26[lVar19 + 1];
      }
      uStack_144 = -uStack_144 & uStack_144;
      uVar4 = (ulonglong)uStack_144 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_160 = (int)lVar19;
      iStack_134 = local_160 + -1 + local_130;
      if (iVar16 < iStack_134) {
        iStack_134 = iVar16;
      }
    }
    puVar23 = &(this->CachedBundleWeights).field_0x10;
    uVar21 = *(uint *)&(this->CachedBundleWeights).field_0x28;
    iStack_128 = *(int *)&(this->CachedBundleWeights).field_0x8 -
                 *(int *)&(this->CachedBundleWeights).field_0x34;
    uStack_138 = 0xffffffff;
    uVar28 = uVar21 & 0xffffffe0;
    TStack_e8._padding_ = CONCAT44(uStack_144,iVar27);
    TStack_e8.CurrentBitIndex = iStack_134;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar21 >> 5;
    TStack_e8._28_4_ = iStack_17c;
    TStack_e8.BaseBitIndex = local_130;
    uStack_c8 = CONCAT44(uStack_124,iStack_128);
    local_150 = pTVar2;
    iStack_148 = iVar27;
    iStack_12c = iStack_17c;
    local_f0 = pTVar2;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140;
    if (((int)uVar21 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar5 = *(uint *)&(this->CachedBundleWeights).field_0x28;
    if (uVar21 != uVar5) {
      puVar24 = *(undefined1 **)&(this->CachedBundleWeights).field_0x20;
      puVar25 = puVar23;
      if (puVar24 != (undefined1 *)0x0) {
        puVar25 = puVar24;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar16 * 4);
      while (uVar21 == 0) {
        lVar19 = (longlong)iVar16;
        uVar28 = uVar28 + 0x20;
        iVar16 = iVar16 + 1;
        uVar21 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_148bd7ba0;
        uVar21 = *(uint *)(puVar25 + lVar19 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar21 = (int)lVar19 + -1 + uVar28;
      if ((int)uVar5 < (int)uVar21) {
        uVar21 = uVar5;
      }
    }
LAB_148bd7ba0:
    while( true ) {
      pTVar12 = local_f0;
      if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
        `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      if (((TStack_e8.CurrentBitIndex == uVar21) &&
          (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar23)) &&
         (pTVar12 == pTVar2)) break;
      lVar19 = *(longlong *)pTVar12;
      *(float *)(lVar19 + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x14) =
           *(float *)(lVar19 + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x14) / fVar30;
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
  }
  if ((this->RequiredBundleNames).ArrayNum == 0) {
    (this->CurrentCombinedProgress).BackgroundDownloadProgressPercent = 1.0;
    (this->CurrentCombinedProgress).InstallOnlyProgressPercent = 1.0;
    (this->CurrentCombinedProgress).ProgressPercent = 1.0;
    (this->CurrentCombinedProgress).CombinedStatus = Finished;
  }
  UpdateBundleCache(this);
  return;
}

// SetupDelegates @ 148bd7f50

void __thiscall
FInstallBundleCombinedProgressTracker::SetupDelegates
          (FInstallBundleCombinedProgressTracker *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FTSTicker *this_00;
  undefined8 *puVar6;
  ulong64 uVar7;
  TWeakPtr<FTSTicker::FElement,1> *pTVar8;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  CleanUpDelegates(this);
  TMulticastDelegateRegistration<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
  ::AddRaw<FInstallBundleCombinedProgressTracker>
            ((TMulticastDelegateRegistration<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
              *)&IInstallBundleManager::InstallBundleCompleteDelegate,
             (FInstallBundleCombinedProgressTracker *)&stack0x00000018,(pmf_18ecd34c)this);
  TMulticastDelegateRegistration<void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>::
  AddRaw<FInstallBundleCombinedProgressTracker>
            ((TMulticastDelegateRegistration<void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
              *)&IInstallBundleManager::PausedBundleDelegate,
             (FInstallBundleCombinedProgressTracker *)&stack0x00000020,(pmf_8a865c22)this);
  if (param_1) {
    this_00 = FTSTicker::GetCoreTicker();
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFInstallBundleCombinedProgressTracker____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[4] = Tick;
      puVar6[3] = this;
      if (this == (FInstallBundleCombinedProgressTracker *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    pTVar8 = FTSTicker::AddTicker
                       (this_00,&local_78,
                        (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
    if (&this->TickHandle != pTVar8) {
      (this->TickHandle).Object = pTVar8->Object;
      pTVar8->Object = (FElement *)0x0;
      pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      (this->TickHandle).WeakReferenceCount.ReferenceController =
           (pTVar8->WeakReferenceCount).ReferenceController;
      (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
    }
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return;
}

// Tick @ 148bdaed0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInstallBundleCombinedProgressTracker::Tick
          (FInstallBundleCombinedProgressTracker *this,float param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_bool___cdecl_FInstallBundleCombinedProgressTracker::Tick(float)_::_2_::FStat_STAT_FBundlePrereqCombinedStatusHelper_Tick>
  FVar8;
  undefined8 uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  longlong *plVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_28;
  
  FVar14.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FBundlePrereqCombinedStatusHelper_Tick ==
          (FThreadSafeStaticStat<_private:_bool___cdecl_FInstallBundleCombinedProgressTracker::Tick(float)_::_2_::FStat_STAT_FBundlePrereqCombinedStatusHelper_Tick>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_FBundlePrereqCombinedStatusHelper_Tick"
                               );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FBundlePrereqCombinedStatusHelper_Tick
                   ,*pFVar7,L"STAT_FBundlePrereqCombinedStatusHelper_Tick","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_FBundlePrereqCombinedStatusHelper_Tick;
  if (StatPtr_STAT_FBundlePrereqCombinedStatusHelper_Tick ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FInstallBundleCombinedProgressTracker::Tick(float)_::_2_::FStat_STAT_FBundlePrereqCombinedStatusHelper_Tick>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res18,"STAT_FBundlePrereqCombinedStatusHelper_Tick");
    FVar8 = (FThreadSafeStaticStat<_private:_bool___cdecl_FInstallBundleCombinedProgressTracker::Tick(float)_::_2_::FStat_STAT_FBundlePrereqCombinedStatusHelper_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FBundlePrereqCombinedStatusHelper_Tick,*pFVar7,
                         L"STAT_FBundlePrereqCombinedStatusHelper_Tick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\BundlePrereqCombinedStatusHelper.cpp"
                   ,0x152);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      FVar14.Value = FVar12.Value;
      goto LAB_148bdb055;
    }
  }
  bVar5 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_148bdb055:
  UpdateBundleCache(this);
  UpdateCombinedStatus(this);
  if (*(void **)&this->OnTick != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnTick);
    pcVar2 = *(code **)&this->OnTick;
    plVar3 = *(longlong **)&(this->OnTick).field_0x28;
    plVar11 = (longlong *)&(this->OnTick).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar2)(uVar9,&this->CurrentCombinedProgress);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return true;
}

// UpdateBundleCache @ 148bdcf00

void __thiscall
FInstallBundleCombinedProgressTracker::UpdateBundleCache
          (FInstallBundleCombinedProgressTracker *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  atomic<int> aVar7;
  FModuleManager *pFVar8;
  FName *pFVar9;
  IInstallBundleManager *pIVar10;
  ForAnyElementType FVar11;
  TReferenceControllerBase<1> *pTVar12;
  FName *pFVar13;
  IInstallBundleManager *pIVar14;
  IInstallBundleManager *pIVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18;
  FString local_78;
  FInstallBundleProgress local_68;
  char local_30;
  
  pIVar15 = (IInstallBundleManager *)0x0;
  if ((((this->InstallBundleManager).Object == (IInstallBundleManager *)0x0) ||
      (pTVar12 = (this->InstallBundleManager).WeakReferenceCount.ReferenceController,
      pTVar12 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar12->SharedReferenceCount < 1)) {
    if (Module == (IInstallBundleManagerModule *)0x0) {
      if ((!bCheckedIni) && (1 < GEngineIni.Data.ArrayNum)) {
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        FConfigCacheIni::GetString
                  (GConfig,L"InstallBundleManager",L"ModuleName",&local_78,&GEngineIni);
        pFVar8 = FModuleManager::Get();
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar11.Data = local_78.Data.AllocatorInstance.Data;
        }
        bVar16 = FModuleManager::ModuleExists(pFVar8,(wchar_t *)FVar11.Data,(FString *)0x0);
        if (bVar16) {
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar11.Data = local_78.Data.AllocatorInstance.Data;
          }
          pFVar9 = ::FName::FName(&local_res18,(wchar_t *)FVar11.Data);
          FVar4 = *pFVar9;
          pFVar8 = FModuleManager::Get();
          Module = (IInstallBundleManagerModule *)FModuleManager::LoadModule(pFVar8,FVar4,None);
        }
        bCheckedIni = true;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (Module != (IInstallBundleManagerModule *)0x0) {
          pTVar12 = (Module->InstallBundleManager).SharedReferenceCount.ReferenceController;
          pIVar10 = (Module->InstallBundleManager).Object;
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          goto LAB_148bdd04a;
        }
      }
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      pIVar10 = (IInstallBundleManager *)0x0;
    }
    else {
      pIVar10 = (Module->InstallBundleManager).Object;
      pTVar12 = (Module->InstallBundleManager).SharedReferenceCount.ReferenceController;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
LAB_148bdd04a:
    (this->InstallBundleManager).Object = pIVar10;
    if (pTVar12 != (this->InstallBundleManager).WeakReferenceCount.ReferenceController) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = (this->InstallBundleManager).WeakReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      (this->InstallBundleManager).WeakReferenceCount.ReferenceController = pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  pIVar10 = (IInstallBundleManager *)
            (this->InstallBundleManager).WeakReferenceCount.ReferenceController;
  pIVar14 = pIVar10;
  if (pIVar10 == (IInstallBundleManager *)0x0) {
LAB_148bdd0c5:
    local_res8[0] = 0;
    bVar16 = `FInstallBundleCombinedProgressTracker::UpdateBundleCache'::__l6::<lambda_1>::
             operator()(local_res8);
    pIVar10 = pIVar14;
    if (!bVar16) goto LAB_148bdd1cd;
  }
  else {
    aVar2 = *(atomic<int> *)&pIVar10->field_0x8;
    do {
      pIVar14 = pIVar15;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148bdd0c5;
      LOCK();
      aVar7 = *(atomic<int> *)&pIVar10->field_0x8;
      bVar16 = aVar2 == aVar7;
      if (bVar16) {
        *(atomic<int> *)&pIVar10->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar16);
    pIVar15 = (this->InstallBundleManager).Object;
    pIVar14 = pIVar10;
    if (pIVar15 == (IInstallBundleManager *)0x0) goto LAB_148bdd0c5;
  }
  pFVar13 = (FName *)(this->RequiredBundleNames).AllocatorInstance.Data;
  iVar3 = (this->RequiredBundleNames).ArrayNum;
  pFVar9 = pFVar13 + iVar3;
  while( true ) {
    if ((this->RequiredBundleNames).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar9) break;
    if ((pIVar15 == (IInstallBundleManager *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*(longlong *)&pIVar15->field_0x0 + 0x100))(pIVar15,&local_68,*pFVar13);
    if (((local_30 != '\0') &&
        (TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
         ::Emplace<FName_const_&,FInstallBundleProgress_const_&>
                   ((TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
                     *)&this->BundleStatusCache,pFVar13,&local_68), local_30 != '\0')) &&
       (DestructItems<FBuildInstallerStat,int>
                  ((FBuildInstallerStat *)local_68.Stats.AllocatorInstance.Data,
                   local_68.Stats.ArrayNum),
       (FBuildInstallerStat *)local_68.Stats.AllocatorInstance.Data != (FBuildInstallerStat *)0x0))
    {
      FMemory::Free(local_68.Stats.AllocatorInstance.Data);
    }
    pFVar13 = pFVar13 + 1;
  }
LAB_148bdd1cd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar10);
  return;
}

// UpdateCombinedProgress @ 148bdd910

void __thiscall
FInstallBundleCombinedProgressTracker::UpdateCombinedProgress
          (FInstallBundleCombinedProgressTracker *this)

{
  TArray<FBuildInstallerStat,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  TMap<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
  *pTVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  longlong local_120;
  TMap<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
  *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TMap<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  
  pTVar1 = &(this->CurrentCombinedProgress).Stats;
  iVar23 = 0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  local_res18 = 0;
  DestructItems<FBuildInstallerStat,int>
            ((FBuildInstallerStat *)(pTVar1->AllocatorInstance).Data,
             (this->CurrentCombinedProgress).Stats.ArrayNum);
  piVar4 = &(this->CurrentCombinedProgress).Stats.ArrayMax;
  (this->CurrentCombinedProgress).Stats.ArrayNum = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar4);
  }
  if (*(int *)&(this->CachedBundleWeights).field_0x8 -
      *(int *)&(this->CachedBundleWeights).field_0x34 <
      *(int *)&(this->BundleStatusCache).field_0x8 - *(int *)&(this->BundleStatusCache).field_0x34)
  {
    local_res8[0] = 0;
    `FInstallBundleCombinedProgressTracker::UpdateCombinedProgress'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  iVar14 = *(int *)&(this->BundleStatusCache).field_0x28;
  local_118 = &this->BundleStatusCache;
  iStack_110 = 0;
  uStack_10c = 1;
  local_f8 = 0;
  iStack_fc = 0;
  if (iVar14 != 0) {
    puVar22 = *(uint **)&(this->BundleStatusCache).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)&(this->BundleStatusCache).field_0x10;
    }
    uVar20 = *puVar22;
    while (uVar20 == 0) {
      lVar15 = (longlong)iStack_110;
      local_f8 = local_f8 + 0x20;
      iStack_110 = iStack_110 + 1;
      iStack_fc = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_110) goto LAB_148bdda61;
      uVar20 = puVar22[lVar15 + 1];
    }
    uStack_10c = -uVar20 & uVar20;
    uVar3 = (ulonglong)uStack_10c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res20 = (int)lVar15;
    iStack_fc = local_f8 + -1 + local_res20;
    if (iVar14 < iStack_fc) {
      iStack_fc = iVar14;
    }
  }
LAB_148bdda61:
  local_108 = &(this->BundleStatusCache).field_0x10;
  uVar20 = *(uint *)&(this->BundleStatusCache).field_0x28;
  iStack_f0 = *(int *)&(this->BundleStatusCache).field_0x8 -
              *(int *)&(this->BundleStatusCache).field_0x34;
  uVar19 = uVar20 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uStack_10c,iStack_110);
  uStack_100 = 0xffffffff;
  TStack_e0.CurrentBitIndex = iStack_fc;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_e0._28_4_ = iStack_fc;
  TStack_e0.BaseBitIndex = local_f8;
  uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
  iStack_f4 = iStack_fc;
  local_e8 = local_118;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_108;
  if ((((int)uVar20 < 0) || (iVar14 < (int)uVar20)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_3f800000;
  fVar9 = __real_322bcc77;
  uVar6 = *(uint *)&(this->BundleStatusCache).field_0x28;
  if (uVar20 != uVar6) {
    puVar21 = *(undefined1 **)&(this->BundleStatusCache).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(this->BundleStatusCache).field_0x10;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_148bddb6e;
      uVar20 = *(uint *)(puVar21 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar20 = (int)lVar15 + -1 + uVar19;
    if ((int)uVar6 < (int)uVar20) {
      uVar20 = uVar6;
    }
  }
LAB_148bddb6e:
  do {
    pTVar12 = local_e8;
    if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_e0.CurrentBitIndex == uVar20) &&
        (TStack_e0.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->BundleStatusCache).field_0x10)) &&
       (pTVar12 == &this->BundleStatusCache)) {
      if (fVar10 <= fVar24) {
        fVar24 = fVar10;
      }
      if (fVar10 <= fVar25) {
        fVar25 = fVar10;
      }
      if (fVar10 <= fVar26) {
        fVar26 = fVar10;
      }
      (this->CurrentCombinedProgress).InstalledBundlesCount = iVar23;
      (this->CurrentCombinedProgress).TotalBundlesCount = local_res18;
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      (this->CurrentCombinedProgress).ProgressPercent = fVar24;
      (this->CurrentCombinedProgress).BackgroundDownloadProgressPercent = fVar25;
      (this->CurrentCombinedProgress).InstallOnlyProgressPercent = fVar26;
      return;
    }
    lVar15 = *(longlong *)pTVar12;
    lVar7 = *(longlong *)(lVar15 + (longlong)TStack_e0.CurrentBitIndex * 0x48);
    lVar15 = lVar15 + (longlong)TStack_e0.CurrentBitIndex * 0x48;
    uVar19 = ::GetTypeHash((FNameEntryId)(uint)lVar7);
    if (*(int *)&(this->CachedBundleWeights).field_0x8 !=
        *(int *)&(this->CachedBundleWeights).field_0x34) {
      puVar21 = *(undefined1 **)&(this->CachedBundleWeights).field_0x40;
      puVar16 = &(this->CachedBundleWeights).field_0x38;
      if (puVar21 != (undefined1 *)0x0) {
        puVar16 = puVar21;
      }
      iVar14 = *(int *)(puVar16 +
                       (ulonglong)
                       (*(int *)&(this->CachedBundleWeights).field_0x48 - 1U &
                       (int)((ulonglong)lVar7 >> 0x20) + uVar19) * 4);
      if (iVar14 != -1) {
        do {
          lVar2 = *(longlong *)&this->CachedBundleWeights + (longlong)iVar14 * 0x14;
          if (*(longlong *)(*(longlong *)&this->CachedBundleWeights + (longlong)iVar14 * 0x14) ==
              lVar7) {
            pfVar18 = (float *)(lVar2 + 8);
            if (lVar2 == 0) {
              pfVar18 = (float *)0x0;
            }
            if (pfVar18 == (float *)0x0) goto LAB_148bddc50;
            goto LAB_148bddc67;
          }
          iVar14 = *(int *)(lVar2 + 0xc);
        } while (iVar14 != -1);
      }
    }
    pfVar18 = (float *)0x0;
LAB_148bddc50:
    local_120 = lVar15;
    bVar13 = `FInstallBundleCombinedProgressTracker::UpdateCombinedProgress'::__l7::<lambda_2>::
             operator()(&local_120);
    if (bVar13) {
LAB_148bddc67:
      fVar5 = *pfVar18;
      fVar24 = fVar24 + *(float *)(lVar15 + 0x20) * fVar5;
      fVar25 = fVar25 + fVar5 * *(float *)(lVar15 + 0x18);
      fVar26 = fVar26 + fVar5 * *(float *)(lVar15 + 0x1c);
      iVar14 = iVar23 + 1;
      if (fVar9 < (float)((uint)(*(float *)(lVar15 + 0x20) - fVar10) & uVar11)) {
        iVar14 = iVar23;
      }
      iVar23 = iVar14;
      local_res18 = local_res18 + 1;
      if ((pTVar1 == (TArray<FBuildInstallerStat,TSizedDefaultAllocator<32>_> *)(lVar15 + 0x28)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = *(int *)(lVar15 + 0x30);
      if (iVar14 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x28,8,iVar14,&pTVar1->AllocatorInstance,
                            &(this->CurrentCombinedProgress).Stats.ArrayNum,
                            &(this->CurrentCombinedProgress).Stats.ArrayMax);
        ConstructItems<FBuildInstallerStat,FBuildInstallerStat,int>
                  ((pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 0x28,
                   *(FBuildInstallerStat **)(lVar15 + 0x28),iVar14);
      }
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  } while( true );
}

// UpdateCombinedStatus @ 148bdddf0

void __thiscall
FInstallBundleCombinedProgressTracker::UpdateCombinedStatus
          (FInstallBundleCombinedProgressTracker *this)

{
  float *pfVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  EInstallBundlePauseFlags EVar18;
  uint uVar19;
  float fVar20;
  uint local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  
  if ((this->RequiredBundleNames).ArrayNum != 0) {
    UpdateCombinedProgress(this);
    fVar20 = __real_3f800000;
    EVar18 = None;
    iVar16 = *(int *)&(this->BundleStatusCache).field_0x8 -
             *(int *)&(this->BundleStatusCache).field_0x34;
    bVar7 = false;
    uVar12 = 4;
    if (((iVar16 < (this->RequiredBundleNames).ArrayNum) && (0 < iVar16)) &&
       (pfVar1 = &(this->CurrentCombinedProgress).ProgressPercent, uVar12 = 4,
       *pfVar1 <= __real_3f800000 && __real_3f800000 != *pfVar1)) {
      uVar12 = 1;
    }
    iVar3 = *(int *)&(this->BundleStatusCache).field_0x28;
    iVar13 = 0;
    iVar15 = 0;
    iVar10 = 0;
    uVar9 = 1;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&(this->BundleStatusCache).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)&(this->BundleStatusCache).field_0x10;
      }
      uVar9 = *puVar17;
      while (uVar9 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar3;
        uVar9 = 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148bddef7;
        uVar9 = puVar17[lVar11 + 1];
      }
      uVar9 = -uVar9 & uVar9;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar10 = local_res20 + -1 + iVar15;
      if (iVar3 < iVar10) {
        iVar10 = iVar3;
      }
    }
LAB_148bddef7:
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->BundleStatusCache).field_0x10;
    local_res10 = *(uint *)&(this->BundleStatusCache).field_0x28;
    TStack_80._padding_ = CONCAT44(uVar9,iVar13);
    uVar9 = local_res10 & 0xffffffe0;
    TStack_80.CurrentBitIndex = iVar10;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    TStack_80._28_4_ = iVar10;
    TStack_80.BaseBitIndex = iVar15;
    uStack_60 = CONCAT44(uStack_8c,iVar16);
    iVar16 = (int)local_res10 >> 5;
    if ((((int)local_res10 < 0) || (iVar3 < (int)local_res10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = *(uint *)&(this->BundleStatusCache).field_0x28;
    if (local_res10 != uVar4) {
      puVar14 = *(undefined1 **)&(this->BundleStatusCache).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(this->BundleStatusCache).field_0x10;
      }
      uVar19 = -1 << ((byte)local_res10 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar16 * 4);
      while (uVar19 == 0) {
        lVar11 = (longlong)iVar16;
        uVar9 = uVar9 + 0x20;
        iVar16 = iVar16 + 1;
        local_res10 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_148bddffe;
        uVar19 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res10 = (int)lVar11 + -1 + uVar9;
      if ((int)uVar4 < (int)local_res10) {
        local_res10 = uVar4;
      }
    }
LAB_148bddffe:
    bVar8 = false;
    while( true ) {
      if (*(int *)&(this->BundleStatusCache).field_0x8 -
          *(int *)&(this->BundleStatusCache).field_0x34 != (int)uStack_60) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      lVar11 = (longlong)TStack_80.CurrentBitIndex;
      if ((TStack_80.CurrentBitIndex == local_res10) &&
         (TStack_80.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)&(this->BundleStatusCache).field_0x10)) break;
      lVar5 = *(longlong *)&this->BundleStatusCache;
      uVar9 = *(uint *)(lVar5 + 0x10 + lVar11 * 0x48);
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
      if ((!bVar8) && (uVar9 == 2)) {
        fVar20 = *(float *)(lVar5 + 0x38 + lVar11 * 0x48);
        bVar8 = true;
      }
      if ((bVar7) || (*(int *)(lVar5 + 0x14 + lVar11 * 0x48) != 0)) {
        bVar7 = true;
      }
      EVar18 = EVar18 | *(EInstallBundlePauseFlags *)(lVar5 + 0x14 + lVar11 * 0x48);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    if ((bVar7) && ((int)uVar12 < 3)) {
      (this->CurrentCombinedProgress).bIsPaused = true;
    }
    else {
      (this->CurrentCombinedProgress).bIsPaused = false;
      EVar18 = None;
    }
    (this->CurrentCombinedProgress).CombinedPauseFlags = EVar18;
    (this->CurrentCombinedProgress).bDoesCurrentStateSupportPausing =
         (this->CurrentCombinedProgress).bBundleRequiresUpdate;
    if ((uVar12 & 0xfffffffb) == 0) {
      (this->CurrentCombinedProgress).CombinedStatus = Initializing;
    }
    else if ((int)uVar12 < 2) {
      (this->CurrentCombinedProgress).CombinedStatus = Updating;
    }
    else if ((int)uVar12 < 3) {
      if (bVar8) {
        (this->CurrentCombinedProgress).ProgressPercent = fVar20;
        (this->CurrentCombinedProgress).CombinedStatus = Finishing;
      }
      else {
        (this->CurrentCombinedProgress).CombinedStatus = Updating;
      }
    }
    else if (uVar12 == 3) {
      (this->CurrentCombinedProgress).CombinedStatus = Finished;
      (this->CurrentCombinedProgress).bDoesCurrentStateSupportPausing = false;
    }
    else {
      (this->CurrentCombinedProgress).CombinedStatus = Unknown;
    }
  }
  return;
}

// operator() @ 150537cb0

bool __thiscall
`FInstallBundleCombinedProgressTracker::UpdateCombinedProgress'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5382377015900896971>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5382377015900896971>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150538090

bool __thiscall
`FInstallBundleCombinedProgressTracker::OnBundleInstallComplete'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5382377015900896911>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5382377015900896911>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505380d0

bool __thiscall
`FInstallBundleCombinedProgressTracker::UpdateBundleCache'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5382377015900897087>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5382377015900897087>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505381b0

bool __thiscall
`FInstallBundleCombinedProgressTracker::SetBundlesToTrackFromContentState'::__l14::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5382377015900897144>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5382377015900897144>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150538217;
    }
  }
  bVar2 = false;
LAB_150538217:
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

// operator() @ 150538430

bool __thiscall
`FInstallBundleCombinedProgressTracker::UpdateCombinedProgress'::__l7::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5382377015900896966>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5382377015900896966>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150538497;
    }
  }
  bVar2 = false;
LAB_150538497:
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

// operator() @ 1505384d0

bool __thiscall
`FInstallBundleCombinedProgressTracker::OnBundleInstallComplete'::__l9::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5382377015900896908>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5382377015900896908>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

