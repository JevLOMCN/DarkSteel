// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 8

// FMutablePendingInstanceWork @ 14abbcab0

FMutablePendingInstanceWork * __thiscall
FMutablePendingInstanceWork::FMutablePendingInstanceWork(FMutablePendingInstanceWork *this)

{
  *(undefined8 *)&(this->PendingInstanceUpdates).Elements = 0;
  *(undefined8 *)&(this->PendingInstanceUpdates).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingInstanceUpdates).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingInstanceUpdates).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingInstanceUpdates).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingInstanceUpdates).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingInstanceUpdates).Elements.field_0x30 = 0xffffffff;
  (this->PendingInstanceUpdates).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingInstanceUpdates).HashSize = 0;
  *(undefined8 *)&(this->PendingInstanceDiscards).Elements = 0;
  *(undefined8 *)&(this->PendingInstanceDiscards).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingInstanceDiscards).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingInstanceDiscards).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingInstanceDiscards).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingInstanceDiscards).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingInstanceDiscards).Elements.field_0x30 = 0xffffffff;
  (this->PendingInstanceDiscards).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingInstanceDiscards).HashSize = 0;
  *(undefined8 *)&(this->PendingIDsToRelease).Elements = 0;
  *(undefined8 *)&(this->PendingIDsToRelease).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingIDsToRelease).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingIDsToRelease).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingIDsToRelease).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingIDsToRelease).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingIDsToRelease).Elements.field_0x30 = 0xffffffff;
  (this->PendingIDsToRelease).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingIDsToRelease).HashSize = 0;
  return this;
}

// ~FMutablePendingInstanceWork @ 14abbf010

void __thiscall
FMutablePendingInstanceWork::~FMutablePendingInstanceWork(FMutablePendingInstanceWork *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->PendingIDsToRelease).HashSize = 0;
  FVar1 = (this->PendingIDsToRelease).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingIDsToRelease).Elements);
  (this->PendingInstanceDiscards).HashSize = 0;
  FVar1 = (this->PendingInstanceDiscards).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FMutablePendingInstanceDiscard>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMutablePendingInstanceDiscard>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingInstanceDiscards).Elements);
  (this->PendingInstanceUpdates).HashSize = 0;
  FVar1 = (this->PendingInstanceUpdates).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FMutablePendingInstanceUpdate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMutablePendingInstanceUpdate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FMutablePendingInstanceUpdate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddDiscard @ 14ac13ed0

void __thiscall
FMutablePendingInstanceWork::AddDiscard
          (FMutablePendingInstanceWork *this,FMutablePendingInstanceDiscard *param_1)

{
  TSharedRef<FUpdateContextPrivate,1> *pTVar1;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  local_res10 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pTVar1 = &TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>
            ::Find(&this->PendingInstanceUpdates,
                   (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)local_res8)->
            Context;
  if (pTVar1 != (TSharedRef<FUpdateContextPrivate,1> *)0x0) {
    pTVar1->Object->UpdateResult = ErrorDiscarded;
    FinishUpdateGlobal(pTVar1);
    RemoveUpdate(this,&pTVar1->Object->Instance);
  }
  TSet<FMutablePendingInstanceDiscard,FPendingInstanceDiscardKeyFuncs,FDefaultSetAllocator>::
  Emplace<FMutablePendingInstanceDiscard_const_&>
            (&this->PendingInstanceDiscards,(FMutablePendingInstanceDiscard *)&local_res8,
             (bool *)param_1);
  return;
}

// AddIDRelease @ 14ac14170

void __thiscall
FMutablePendingInstanceWork::AddIDRelease(FMutablePendingInstanceWork *this,uint param_1)

{
  uint local_res8 [2];
  uint local_res10 [6];
  
  local_res10[0] = param_1;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>(&this->PendingIDsToRelease,local_res8,(bool *)local_res10);
  return;
}

// AddUpdate @ 14ac14ac0

void __thiscall
FMutablePendingInstanceWork::AddUpdate
          (FMutablePendingInstanceWork *this,FMutablePendingInstanceUpdate *param_1)

{
  ForElementType<FSetElementId> *pFVar1;
  double dVar2;
  EQueuePriorityType EVar3;
  FUpdateContextPrivate *pFVar4;
  longlong lVar5;
  TSharedRef<FUpdateContextPrivate,1> *pTVar6;
  longlong lVar7;
  EQueuePriorityType EVar8;
  DWORD DVar9;
  int iVar10;
  _struct_19 *p_Var11;
  ForElementType<FSetElementId> FVar12;
  double dVar13;
  LARGE_INTEGER local_res8;
  FUpdateContextPrivate *local_18;
  TReferenceControllerBase<1> *local_10;
  
  QueryPerformanceCounter(&local_res8);
  ((param_1->Context).Object)->StartQueueTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  pTVar6 = &TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>
            ::Find(&this->PendingInstanceUpdates,
                   (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)
                   (((param_1->Context).Object)->Instance).WeakPtr)->Context;
  if (pTVar6 == (TSharedRef<FUpdateContextPrivate,1> *)0x0) {
    TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>::
    Emplace<FMutablePendingInstanceUpdate_const_&>
              (&this->PendingInstanceUpdates,(FMutablePendingInstanceUpdate *)&local_res8.s,
               (bool *)param_1);
  }
  else {
    pTVar6->Object->UpdateResult = ErrorReplaced;
    FinishUpdateGlobal(pTVar6);
    local_10 = (param_1->Context).SharedReferenceCount.ReferenceController;
    local_18 = (param_1->Context).Object;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    EVar8 = ((param_1->Context).Object)->PriorityType;
    EVar3 = pTVar6->Object->PriorityType;
    if (EVar3 < EVar8) {
      EVar8 = EVar3;
    }
    local_18->PriorityType = EVar8;
    dVar13 = ((param_1->Context).Object)->StartQueueTime;
    dVar2 = pTVar6->Object->StartQueueTime;
    if (dVar2 <= dVar13) {
      dVar13 = dVar2;
    }
    local_18->StartQueueTime = dVar13;
    RemoveUpdate(this,&pTVar6->Object->Instance);
    TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>::
    Emplace<FMutablePendingInstanceUpdate_const_&>
              (&this->PendingInstanceUpdates,(FMutablePendingInstanceUpdate *)&local_res8.s,
               (bool *)&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  pFVar4 = (param_1->Context).Object;
  local_res8 = (LARGE_INTEGER)*(LARGE_INTEGER *)&(pFVar4->Instance).WeakPtr;
  if (*(int *)&(this->PendingInstanceDiscards).Elements.field_0x8 ==
      *(int *)&(this->PendingInstanceDiscards).Elements.field_0x34) {
    return;
  }
  FVar12 = (this->PendingInstanceDiscards).Hash.SecondaryData;
  pFVar1 = &(this->PendingInstanceDiscards).Hash;
  if (FVar12 == (ForElementType<FSetElementId>)0x0) {
    FVar12 = (ForElementType<FSetElementId>)pFVar1;
  }
  DVar9 = *(DWORD *)((longlong)FVar12 +
                    (((ulonglong)local_res8.QuadPart >> 0x20 ^ local_res8.QuadPart & 0xffffffffU) &
                    (ulonglong)((this->PendingInstanceDiscards).HashSize - 1)) * 4);
  if (DVar9 == 0xffffffff) {
    return;
  }
  while ((p_Var11 = (_struct_19 *)
                    ((longlong)(int)DVar9 * 0x10 +
                    *(longlong *)&(this->PendingInstanceDiscards).Elements),
         p_Var11->LowPart != local_res8.s.LowPart || (p_Var11->HighPart != local_res8.s.HighPart)))
  {
    DVar9 = p_Var11[1].LowPart;
    if (DVar9 == 0xffffffff) {
      return;
    }
  }
  if (DVar9 == 0xffffffff) {
    return;
  }
  if (p_Var11 == (_struct_19 *)0x0) {
    return;
  }
  pFVar4->UpdateResult = ErrorReplaced;
  FinishUpdateGlobal(&param_1->Context);
  local_res8.s = *p_Var11;
  if (*(int *)&(this->PendingInstanceDiscards).Elements.field_0x8 ==
      *(int *)&(this->PendingInstanceDiscards).Elements.field_0x34) {
    return;
  }
  FVar12 = (this->PendingInstanceDiscards).Hash.SecondaryData;
  if (FVar12 == (ForElementType<FSetElementId>)0x0) {
    FVar12 = (ForElementType<FSetElementId>)pFVar1;
  }
  iVar10 = *(int *)((longlong)FVar12 +
                   ((longlong)(int)(local_res8.s.HighPart ^ local_res8.s.LowPart) &
                   (longlong)(this->PendingInstanceDiscards).HashSize - 1U) * 4);
  if (iVar10 == -1) {
    return;
  }
  lVar5 = *(longlong *)&(this->PendingInstanceDiscards).Elements;
  while ((lVar7 = (longlong)iVar10, *(uint *)(lVar5 + lVar7 * 0x10) != local_res8.s.LowPart ||
         (*(uint *)(lVar5 + 4 + lVar7 * 0x10) != local_res8.s.HighPart))) {
    iVar10 = *(int *)(lVar5 + 8 + lVar7 * 0x10);
    if (iVar10 == -1) {
      return;
    }
  }
  TSet<FMutablePendingInstanceDiscard,FPendingInstanceDiscardKeyFuncs,FDefaultSetAllocator>::
  RemoveByIndex(&this->PendingInstanceDiscards,iVar10);
  return;
}

// GetUpdate @ 14ac25970

FMutablePendingInstanceUpdate * __thiscall
FMutablePendingInstanceWork::GetUpdate
          (FMutablePendingInstanceWork *this,
          TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr> *param_1)

{
  FMutablePendingInstanceUpdate *pFVar1;
  
  pFVar1 = TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>::
           Find(&this->PendingInstanceUpdates,
                (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)param_1->WeakPtr)
  ;
  return pFVar1;
}

// Num @ 14ac2b060

int __thiscall FMutablePendingInstanceWork::Num(FMutablePendingInstanceWork *this)

{
  return (((*(int *)&(this->PendingIDsToRelease).Elements.field_0x8 -
           *(int *)&(this->PendingIDsToRelease).Elements.field_0x34) -
          *(int *)&(this->PendingInstanceDiscards).Elements.field_0x34) -
         *(int *)&(this->PendingInstanceUpdates).Elements.field_0x34) +
         *(int *)&(this->PendingInstanceDiscards).Elements.field_0x8 +
         *(int *)&(this->PendingInstanceUpdates).Elements.field_0x8;
}

// RemoveUpdate @ 14ac32180

void __thiscall
FMutablePendingInstanceWork::RemoveUpdate
          (FMutablePendingInstanceWork *this,
          TWeakObjectPtr<UCustomizableObjectInstance,FWeakObjectPtr> *param_1)

{
  FUpdateContextPrivate *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  FMutablePendingInstanceUpdate *pFVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  LARGE_INTEGER local_res8;
  
  pFVar4 = TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>::
           Find(&this->PendingInstanceUpdates,
                (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)param_1->WeakPtr)
  ;
  if (pFVar4 != (FMutablePendingInstanceUpdate *)0x0) {
    QueryPerformanceCounter(&local_res8);
    pFVar1 = (pFVar4->Context).Object;
    pFVar1->QueueTime =
         ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000) - pFVar1->StartQueueTime;
    local_res8.s = *(_struct_19 *)&param_1->WeakPtr;
    if (*(int *)&(this->PendingInstanceUpdates).Elements.field_0x8 !=
        *(int *)&(this->PendingInstanceUpdates).Elements.field_0x34) {
      FVar5 = (this->PendingInstanceUpdates).Hash.SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&(this->PendingInstanceUpdates).Hash;
      }
      iVar6 = *(int *)((longlong)FVar5 +
                      ((longlong)(int)(local_res8.s.HighPart ^ local_res8.s.LowPart) &
                      (longlong)(this->PendingInstanceUpdates).HashSize - 1U) * 4);
      if (iVar6 != -1) {
        lVar2 = *(longlong *)&(this->PendingInstanceUpdates).Elements;
        while( true ) {
          uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + (longlong)iVar6 * 0x18) + 0x40);
          if (((uint)uVar3 == local_res8.s.LowPart) &&
             ((uint)((ulonglong)uVar3 >> 0x20) == local_res8.s.HighPart)) break;
          iVar6 = *(int *)(lVar2 + 0x10 + (longlong)iVar6 * 0x18);
          if (iVar6 == -1) {
            return;
          }
        }
        TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>::
        RemoveByIndex(&this->PendingInstanceUpdates,iVar6);
      }
    }
  }
  return;
}

