// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// operator= @ 14422b660

FPerConnectionInfo * __thiscall
UNetObjectGridFilter::FPerConnectionInfo::operator=
          (FPerConnectionInfo *this,FPerConnectionInfo *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  TMap<unsigned_int,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>_>
  *pTVar1;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> FVar2;
  void *pvVar3;
  TMap<unsigned_int,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>_>
  *pTVar4;
  
  if (this != param_1) {
    if ((param_1->RecentCells).AllocatorInstance.SecondaryData ==
        (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
      memmove(this,param_1,0x180);
    }
    FVar2 = (this->RecentCells).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    (this->RecentCells).AllocatorInstance.SecondaryData =
         (param_1->RecentCells).AllocatorInstance.SecondaryData;
    (param_1->RecentCells).AllocatorInstance.SecondaryData =
         (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0;
    (this->RecentCells).ArrayNum = (param_1->RecentCells).ArrayNum;
    (this->RecentCells).ArrayMax = (param_1->RecentCells).ArrayMax;
    (param_1->RecentCells).ArrayNum = 0;
    (param_1->RecentCells).ArrayMax = 0x20;
  }
  pTVar4 = &param_1->RecentObjectFrameCount;
  pTVar1 = &this->RecentObjectFrameCount;
  if (pTVar1 != pTVar4) {
    if (*(void **)pTVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar1);
    }
    _Src = &(param_1->RecentObjectFrameCount).field_0x10;
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar4;
    _Dst = &(this->RecentObjectFrameCount).field_0x10;
    *(undefined8 *)pTVar4 = 0;
    *(undefined4 *)&(this->RecentObjectFrameCount).field_0x8 =
         *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0x8;
    *(undefined4 *)&(this->RecentObjectFrameCount).field_0xc =
         *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0xc;
    *(undefined8 *)&(param_1->RecentObjectFrameCount).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->RecentObjectFrameCount).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->RecentObjectFrameCount).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->RecentObjectFrameCount).field_0x20 =
           *(undefined8 *)&(param_1->RecentObjectFrameCount).field_0x20;
      *(undefined8 *)&(param_1->RecentObjectFrameCount).field_0x20 = 0;
      *(undefined4 *)&(this->RecentObjectFrameCount).field_0x28 =
           *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0x28;
      *(undefined4 *)&(this->RecentObjectFrameCount).field_0x2c =
           *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0x2c;
      *(undefined8 *)&(param_1->RecentObjectFrameCount).field_0x28 = 0;
    }
    *(undefined4 *)&(this->RecentObjectFrameCount).field_0x30 =
         *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0x30;
    *(undefined4 *)&(this->RecentObjectFrameCount).field_0x34 =
         *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0x34;
    *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0x34 = 0;
    if (*(longlong *)&(param_1->RecentObjectFrameCount).field_0x40 == 0) {
      *(undefined4 *)&(this->RecentObjectFrameCount).field_0x38 =
           *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0x38;
    }
    pvVar3 = *(void **)&(this->RecentObjectFrameCount).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(undefined8 *)&(this->RecentObjectFrameCount).field_0x40 =
         *(undefined8 *)&(param_1->RecentObjectFrameCount).field_0x40;
    *(undefined8 *)&(param_1->RecentObjectFrameCount).field_0x40 = 0;
    *(undefined4 *)&(this->RecentObjectFrameCount).field_0x48 =
         *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0x48;
    *(undefined4 *)&(param_1->RecentObjectFrameCount).field_0x48 = 0;
  }
  return this;
}

// Deinit @ 144235dc0

void __thiscall
UE::Net::Private::FReplicationFiltering::FPerConnectionInfo::Deinit(FPerConnectionInfo *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = &(this->ConnectionFilteredObjects).Storage.ArrayMax;
  (this->ConnectionFilteredObjects).BitCount = 0;
  (this->ConnectionFilteredObjects).Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  (this->GroupExcludedObjects).BitCount = 0;
  piVar1 = &(this->GroupExcludedObjects).Storage.ArrayMax;
  (this->GroupExcludedObjects).Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->GroupExcludedObjects,0,piVar1);
  }
  (this->ObjectsInScopeBeforeDynamicFiltering).BitCount = 0;
  piVar1 = &(this->ObjectsInScopeBeforeDynamicFiltering).Storage.ArrayMax;
  (this->ObjectsInScopeBeforeDynamicFiltering).Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->ObjectsInScopeBeforeDynamicFiltering,0,piVar1);
  }
  (this->GroupIncludedObjects).BitCount = 0;
  piVar1 = &(this->GroupIncludedObjects).Storage.ArrayMax;
  (this->GroupIncludedObjects).Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->GroupIncludedObjects,0,piVar1);
  }
  (this->ObjectsInScope).BitCount = 0;
  piVar1 = &(this->ObjectsInScope).Storage.ArrayMax;
  (this->ObjectsInScope).Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->ObjectsInScope,0,piVar1);
  }
  (this->DynamicFilteredOutObjects).BitCount = 0;
  piVar1 = &(this->DynamicFilteredOutObjects).Storage.ArrayMax;
  (this->DynamicFilteredOutObjects).Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->DynamicFilteredOutObjects,0,piVar1);
  }
  (this->InProgressDynamicFilteredOutObjects).BitCount = 0;
  piVar1 = &(this->InProgressDynamicFilteredOutObjects).Storage.ArrayMax;
  (this->InProgressDynamicFilteredOutObjects).Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->InProgressDynamicFilteredOutObjects,0,piVar1);
  }
  (this->DynamicFilteredOutObjectsHysteresisAdjusted).BitCount = 0;
  piVar1 = &(this->DynamicFilteredOutObjectsHysteresisAdjusted).Storage.ArrayMax;
  (this->DynamicFilteredOutObjectsHysteresisAdjusted).Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->DynamicFilteredOutObjectsHysteresisAdjusted,0,
               piVar1);
  }
  piVar1 = &(this->HysteresisUpdater).FrameCounters.ArrayMax;
  (this->HysteresisUpdater).FrameCounters.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)&this->HysteresisUpdater,0,piVar1);
  }
  piVar1 = &(this->HysteresisUpdater).LocalIndexToNetRefIndex.ArrayMax;
  (this->HysteresisUpdater).LocalIndexToNetRefIndex.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->HysteresisUpdater).LocalIndexToNetRefIndex.AllocatorInstance,0,piVar1);
  }
  bVar4 = 1 < *(int *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex.field_0x48;
  if (!bVar4) {
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                      *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex);
  }
  puVar2 = &(this->HysteresisUpdater).NetRefIndexToLocalIndex.field_0xc;
  *(undefined4 *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex,0,
               (int *)puVar2);
  }
  *(undefined4 *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex.field_0x34 = 0;
  iVar3 = *(int *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex.field_0x2c;
  *(undefined4 *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->HysteresisUpdater).NetRefIndexToLocalIndex.field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex.field_0x48 = 1;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&(this->HysteresisUpdater).NetRefIndexToLocalIndex);
  }
  (this->HysteresisUpdater).UsedLocalIndices.BitCount = 0;
  piVar1 = &(this->HysteresisUpdater).UsedLocalIndices.Storage.ArrayMax;
  (this->HysteresisUpdater).UsedLocalIndices.Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&(this->HysteresisUpdater).UsedLocalIndices,0,piVar1);
  }
  (this->HysteresisUpdater).ObjectsToUpdate.BitCount = 0;
  piVar1 = &(this->HysteresisUpdater).ObjectsToUpdate.Storage.ArrayMax;
  (this->HysteresisUpdater).ObjectsToUpdate.Storage.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&(this->HysteresisUpdater).ObjectsToUpdate,0,piVar1);
  }
  return;
}

