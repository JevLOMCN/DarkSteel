// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 6

// TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits> @ 14314c290

TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits> * __thiscall
UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::
TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>
          (TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits> *this)

{
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
  aVar1;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
  aVar2;
  
  *(undefined8 *)&(this->Storage).Storage.field_0x10 = 0;
  *(undefined8 *)&(this->Storage).Storage.field_0x18 = 0;
  *(undefined8 *)&(this->Storage).Storage = 0;
  *(undefined8 *)&(this->Storage).Storage.field_0x8 = 0;
  *(undefined8 *)&(this->Storage).Storage.field_0x20 = 0;
  *(undefined4 *)&(this->Storage).Storage.field_0x28 = 0;
  *(undefined4 *)&(this->Storage).Storage.field_0x2c = 0x80;
  *(undefined4 *)&(this->Storage).Storage.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Storage).Storage.field_0x34 = 0;
  *(undefined8 *)&(this->Storage).StorageHandleIndex.field_0x10 = 0;
  *(undefined8 *)&(this->Storage).StorageHandleIndex.field_0x18 = 0;
  *(undefined8 *)&(this->Storage).StorageHandleIndex.field_0x38 = 0;
  *(undefined8 *)&(this->Storage).StorageHandleIndex.field_0x48 = 0;
  *(undefined8 *)&(this->Storage).StorageHandleIndex = 0;
  *(undefined8 *)&(this->Storage).StorageHandleIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Storage).StorageHandleIndex.field_0x20 = 0;
  *(undefined4 *)&(this->Storage).StorageHandleIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Storage).StorageHandleIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Storage).StorageHandleIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Storage).StorageHandleIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Storage).StorageHandleIndex.field_0x40 = 0;
  (this->Storage).AddRequests.Head =
       (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
        )0x0;
  aVar1 = (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
           )FMemory::Malloc(0x80,0x10);
  *(undefined8 *)aVar1 = 0;
  (this->Storage).AddRequests.Head = aVar1;
  (this->Storage).AddRequests.Tail = (FNode *)aVar1;
  (this->Storage).RemoveRequests.Head =
       (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
        )0x0;
  aVar2 = (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
           )FMemory::Malloc(0x50,0x10);
  *(undefined8 *)aVar2 = 0;
  (this->Storage).RemoveRequests.Head = aVar2;
  (this->Storage).RemoveRequests.Tail = (FNode *)aVar2;
  (this->Storage).ManagerThreadId = (TAtomic<unsigned_int>)0x0;
  (this->ActiveTimerHeap).AllocatorInstance.SecondaryData =
       (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
        )0x0;
  (this->ActiveTimerHeap).ArrayNum = 0;
  (this->ActiveTimerHeap).ArrayMax = 0x20;
  (this->PendingRepeatTimers).AllocatorInstance.SecondaryData =
       (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
        )0x0;
  (this->PendingRepeatTimers).ArrayNum = 0;
  (this->PendingRepeatTimers).ArrayMax = 0x20;
  (this->InternalTime).Ticks = 0;
  this->bIsTicking = false;
  return this;
}

// ~TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits> @ 14314fea0

void __thiscall
UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::
~TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>
          (TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits> *this)

{
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  FVar1;
  void *pvVar2;
  
  FVar1 = (this->PendingRepeatTimers).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>
  ::
  ~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>
            (&(this->Storage).RemoveRequests);
  TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>
  ::
  ~TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>
            (&(this->Storage).AddRequests);
  *(undefined4 *)&(this->Storage).StorageHandleIndex.field_0x48 = 0;
  pvVar2 = *(void **)&(this->Storage).StorageHandleIndex.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Storage).StorageHandleIndex);
  TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
            ((TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
              *)this);
  return;
}

// ClearTimer @ 143158500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143158687) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014315868b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::ClearTimer
          (TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits> *this,
          TResourceHandle<UE::EventLoop::FTimerHandleTraits> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>
  *pTVar1;
  longlong lVar2;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
  aVar3;
  TAtomic<unsigned_int> TVar4;
  ulonglong uVar5;
  TAtomic<unsigned_int> TVar6;
  int iVar7;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
  aVar8;
  int *piVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  ulong64 local_78;
  int *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  TVar4 = (this->Storage).ManagerThreadId;
  TVar6 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  if ((TVar4 == TVar6) && (this->bIsTicking != false)) {
    uVar5 = param_1->ID;
    if (*(int *)&(this->Storage).StorageHandleIndex.field_0x8 !=
        *(int *)&(this->Storage).StorageHandleIndex.field_0x34) {
      puVar10 = *(undefined1 **)&(this->Storage).StorageHandleIndex.field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->Storage).StorageHandleIndex.field_0x38;
      }
      iVar7 = *(int *)(puVar10 +
                      ((ulonglong)(*(int *)&(this->Storage).StorageHandleIndex.field_0x48 - 1) &
                      (uVar5 >> 0x20) * 0x17 + uVar5) * 4);
      if (iVar7 != -1) {
        lVar11 = *(longlong *)&(this->Storage).StorageHandleIndex;
        do {
          lVar2 = lVar11 + (longlong)iVar7 * 0x18;
          if (*(ulonglong *)(lVar11 + (longlong)iVar7 * 0x18) == uVar5) {
            piVar9 = (int *)(lVar2 + 8);
            if (lVar2 == 0) {
              piVar9 = (int *)0x0;
            }
            if ((piVar9 != (int *)0x0) &&
               (lVar11 = *(longlong *)&(this->Storage).Storage + 0x10 + (longlong)*piVar9 * 0x70,
               lVar11 != 0)) {
              *(undefined1 *)(lVar11 + 0x50) = 2;
            }
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x10);
        } while (iVar7 != -1);
      }
    }
  }
  local_78 = param_1->ID;
  local_68 = *(int **)param_2;
  local_40 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_48 = *(undefined8 *)&param_2->field_0x20;
  local_58 = *(longlong *)&param_2->field_0x10;
  uStack_50 = *(undefined8 *)&param_2->field_0x18;
  if (local_68 != (int *)0x0) {
    *(undefined8 *)param_2 = 0;
  }
  aVar8 = (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
           )FMemory::Malloc(0x50,0x10);
  *(undefined8 *)aVar8 = 0;
  *(ulong64 *)((longlong)aVar8 + 0x10) = local_78;
  *(int **)((longlong)aVar8 + 0x20) = local_68;
  *(undefined8 *)((longlong)aVar8 + 0x48) = local_40;
  local_40 = 0;
  *(undefined4 *)((longlong)aVar8 + 0x30) = (undefined4)local_58;
  *(undefined4 *)((longlong)aVar8 + 0x34) = local_58._4_4_;
  *(undefined4 *)((longlong)aVar8 + 0x38) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)aVar8 + 0x3c) = uStack_50._4_4_;
  *(undefined8 *)((longlong)aVar8 + 0x40) = local_48;
  if (*(longlong *)((longlong)aVar8 + 0x20) != 0) {
    local_68 = (int *)0x0;
  }
  LOCK();
  pTVar1 = &(this->Storage).RemoveRequests;
  aVar3 = pTVar1->Head;
  pTVar1->Head = aVar8;
  UNLOCK();
  *(atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
    *)aVar3 = aVar8;
  if (local_68 != (int *)0x0) {
    (**(code **)(local_58 + 0x10))();
  }
  param_1->ID = 0;
  return;
}

// GetNextTimeout @ 143163e90

bool __thiscall
UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::GetNextTimeout
          (TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits> *this,FTimespan *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  FVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  
  iVar1 = (this->ActiveTimerHeap).ArrayNum;
  if (iVar1 == 0) {
    return false;
  }
  plVar8 = (longlong *)0x0;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FVar5 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )0x0) {
    FVar5 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
             )&this->ActiveTimerHeap;
  }
  uVar7 = (uint)*(longlong *)((longlong)FVar5 + 8);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Storage).Storage.field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Storage).Storage.field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Storage).Storage.field_0x10;
    }
    if (((*(uint *)(puVar9 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (uVar7 & 0x1f) & 1) != 0) &&
       (plVar6 = (longlong *)((longlong)(int)uVar7 * 0x70 + *(longlong *)&(this->Storage).Storage),
       plVar8 = (longlong *)0x0, *plVar6 == *(longlong *)FVar5)) {
      plVar8 = plVar6 + 2;
    }
  }
  param_1->Ticks = plVar8[9] - (this->InternalTime).Ticks;
  return true;
}

// SetTimer @ 14317f7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TResourceHandle<UE::EventLoop::FTimerHandleTraits> __thiscall
UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::SetTimer
          (TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits> *this,
          TUniqueFunction<void___cdecl(void)> *param_1,FTimespan param_2,bool param_3,
          TOptional<FTimespan> *param_4)

{
  TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>
  *pTVar1;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
  aVar2;
  bool bVar3;
  atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
  aVar4;
  longlong *plVar5;
  int7 in_register_00000089;
  bool bVar6;
  longlong *in_stack_00000030;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  longlong local_d8;
  char local_d0;
  long64 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  byte local_b7;
  TAtomic<unsigned___int64> local_a8;
  undefined1 local_98 [48];
  FTimespan local_68;
  bool local_60;
  FTimespan local_58;
  FTimespan local_50;
  ETimerStatus local_48;
  byte local_47;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_d0 = (char)in_stack_00000030[1];
  if ((local_d0 == '\0') || ((byte)param_4 != 0)) {
    bVar6 = true;
    if (local_d0 != '\0') goto LAB_14317f7ec;
  }
  else {
    bVar6 = false;
LAB_14317f7ec:
    if (*in_stack_00000030 < 0) {
      bVar3 = false;
      goto LAB_14317f7fd;
    }
  }
  bVar3 = true;
LAB_14317f7fd:
  if ((((*(longlong *)param_2.Ticks == 0) || (in_register_00000089 < 0)) || (!bVar6)) || (!bVar3)) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    if (local_d0 != '\0') {
      local_118 = *in_stack_00000030;
    }
    local_98._0_8_ = *(undefined8 *)param_2.Ticks;
    local_98._40_8_ = *(undefined8 *)(param_2.Ticks + 0x28);
    *(undefined8 *)(param_2.Ticks + 0x28) = 0;
    local_f8[2] = *(undefined8 *)(param_2.Ticks + 0x20);
    local_f8[0] = *(longlong *)(param_2.Ticks + 0x10);
    local_f8[1] = *(undefined8 *)(param_2.Ticks + 0x18);
    if (local_98._0_8_ != 0) {
      *(undefined8 *)param_2.Ticks = 0;
    }
    if (local_d0 != '\0') {
      local_d8 = local_118;
    }
    local_c8 = CONCAT71(in_register_00000089,param_3);
    local_b7 = local_b7 & 0xfe | (byte)param_4;
    local_c0 = 0;
    local_b8 = 0;
    LOCK();
    UNLOCK();
    bVar6 = TResourceHandle<UE::EventLoop::FTimerHandleTraits>::NextID ==
            (TAtomic<unsigned___int64>)0x0;
    local_a8 = TResourceHandle<UE::EventLoop::FTimerHandleTraits>::NextID;
    TResourceHandle<UE::EventLoop::FTimerHandleTraits>::NextID =
         (TAtomic<unsigned___int64>)
         ((longlong)TResourceHandle<UE::EventLoop::FTimerHandleTraits>::NextID + 1);
    if (bVar6) {
      LOCK();
      TResourceHandle<UE::EventLoop::FTimerHandleTraits>::NextID = (TAtomic<unsigned___int64>)0x2;
      UNLOCK();
      local_a8 = (TAtomic<unsigned___int64>)0x2;
    }
    *(TAtomic<unsigned___int64> *)param_1 = local_a8;
    local_e0 = (longlong *)0x0;
    local_108 = local_98._0_8_;
    if (local_98._0_8_ != 0) {
      local_108 = 0;
    }
    if (local_d0 != '\0') {
      local_68.Ticks = local_d8;
    }
    local_50.Ticks = 0;
    local_48 = Pending;
    local_47 = local_47 & 0xfe | (byte)param_4 & 1;
    local_98._16_8_ = local_f8[0];
    local_98._24_8_ = local_f8[1];
    local_98._32_8_ = local_f8[2];
    local_60 = (bool)local_d0;
    local_58.Ticks = local_c8;
    aVar4 = (atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
             )FMemory::Malloc(0x80,0x10);
    *(undefined8 *)aVar4 = 0;
    *(TAtomic<unsigned___int64> *)((longlong)aVar4 + 0x10) = local_a8;
    FTimerData::FTimerData((FTimerData *)((longlong)aVar4 + 0x20),(FTimerData *)local_98);
    LOCK();
    pTVar1 = &(this->Storage).AddRequests;
    aVar2 = pTVar1->Head;
    pTVar1->Head = aVar4;
    UNLOCK();
    *(atomic<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
      *)aVar2 = aVar4;
    if (local_98._0_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x10);
      if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._40_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_108 != 0) {
      plVar5 = local_f8;
      if (local_e0 != (longlong *)0x0) {
        plVar5 = local_e0;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return (TResourceHandle<UE::EventLoop::FTimerHandleTraits>)(ulong64)param_1;
}

// Tick @ 1431860b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143186bea) */
/* WARNING: Removing unreachable block (ram,0x000143187124) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick
          (TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits> *this,FTimespan param_1)

{
  int *piVar1;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  ulong64 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  TAtomic<unsigned_int> TVar5;
  undefined1 *puVar6;
  FName FVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  TAtomic<unsigned_int> TVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  FNameEntryId FVar19;
  FName *pFVar20;
  TStatId TVar21;
  longlong lVar22;
  TStatIdData *pTVar23;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  FVar24;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  FVar25;
  undefined8 uVar26;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  FVar27;
  longlong *plVar28;
  FName FVar29;
  ulonglong uVar30;
  longlong *plVar31;
  FNameEntryId FVar32;
  FName FVar33;
  undefined1 *puVar34;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  FVar35;
  longlong *plVar36;
  ulonglong uVar37;
  longlong *plVar38;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  FVar39;
  ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
  FVar40;
  longlong lVar41;
  undefined1 auStackY_758 [32];
  undefined1 local_6f7;
  undefined1 local_6f6;
  undefined1 local_6f5 [5];
  uint local_6f0;
  uint uStack_6ec;
  FIdentityFunctor local_6e8;
  FIdentityFunctor local_6e7;
  FIdentityFunctor local_6e6 [2];
  uint local_6e4;
  FName local_6e0;
  FName FStack_6d8;
  FColor_u_0 local_6d0;
  FColor_u_0 local_6cc;
  FColor_u_0 local_6c8 [2];
  FName local_6c0;
  byte local_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  FName local_6a0;
  byte local_698;
  FName local_690;
  FName local_688;
  FName local_680;
  FName local_678;
  FName local_668;
  FName local_658;
  longlong local_648;
  longlong lStack_640;
  longlong local_638;
  longlong lStack_630;
  TDereferenceWrapper<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder>
  local_628;
  TDereferenceWrapper<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder>
  local_620;
  TDereferenceWrapper<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder>
  local_618;
  FName local_610;
  FTimerHeapOrder local_608;
  FSourceLocation local_5f8;
  FSourceLocation local_5d8;
  longlong local_5b8;
  longlong lStack_5b0;
  FTimerHeapOrder local_5a8;
  longlong local_598;
  longlong lStack_590;
  FTimerHeapOrder local_588;
  FName local_578;
  FName FStack_570;
  FTimerHeapOrder local_568;
  FTimerHeapOrder local_558;
  FName local_548;
  FName local_540;
  FName local_538 [3];
  FName local_520;
  FName local_518;
  FName local_510;
  TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
  local_508;
  TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
  local_4f8;
  longlong local_4e8;
  longlong lStack_4e0;
  TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
  local_4d8;
  TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
  local_4c8;
  TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
  local_4b8;
  TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
  local_4a8;
  FName local_498;
  FName local_490;
  code *local_488;
  longlong local_478 [3];
  longlong *local_460;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_458;
  TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_248;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_758;
  uVar30 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar30 * 8) + 0x9d4c) <
       `public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_EventLoop_TTimerManager_Tick = 0;
    pFVar20 = ::FName::FName(local_538,"STAT_EventLoop_TTimerManager_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                ::__l2::StatPtr_STAT_EventLoop_TTimerManager_Tick,*pFVar20,
               L"STAT_EventLoop_TTimerManager_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar21 = FThreadSafeStaticStatInner<`UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick'::__l2::FStat_STAT_EventLoop_TTimerManager_Tick,1>
           ::GetStatId(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                        ::__l2::StatPtr_STAT_EventLoop_TTimerManager_Tick);
  local_5f8.Impl._Line = 0x139;
  local_5f8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopTimer.h"
  ;
  local_5f8.Impl._Column = 2;
  local_5f8.Impl._Function =
       "void __cdecl UE::EventLoop::TTimerManager<struct UE::EventLoop::FTimerManagerDefaultTraits>::Tick(struct FTimespan)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_6a0,*(TStatIdData **)&(TVar21.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_5f8);
  TVar5 = (this->Storage).ManagerThreadId;
  TVar15 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  if ((TVar5 != TVar15) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsManagerThread",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopTimer.h"
                          ,0x59,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this->bIsTicking = true;
  (this->InternalTime).Ticks = (this->InternalTime).Ticks + param_1.Ticks;
  local_248.AllocatorInstance.SecondaryData =
       (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
        )0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0x20;
  local_458.AllocatorInstance.SecondaryData =
       (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
        )0x0;
  local_458.ArrayNum = 0;
  local_458.ArrayMax = 0x20;
  TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>
  ::Update(&this->Storage,&local_248,&local_458);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar30 * 8) + 0x9d4c) <
       `public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
       ::__l3::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                           ::__l3::_thread_safe_static_guard_1__),
     `public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
     ::__l3::_thread_safe_static_guard_1__ == -1)) {
    _StatPtr_STAT_EventLoop_TTimerManager_Tick_AddTimers = 0;
    pFVar20 = ::FName::FName(&local_540,"STAT_EventLoop_TTimerManager_Tick_AddTimers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                ::__l3::StatPtr_STAT_EventLoop_TTimerManager_Tick_AddTimers,*pFVar20,
               L"STAT_EventLoop_TTimerManager_Tick_AddTimers","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                         ::__l3::_thread_safe_static_guard_1__);
  }
  TVar21 = FThreadSafeStaticStatInner<`UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick'::__l3::FStat_STAT_EventLoop_TTimerManager_Tick_AddTimers,1>
           ::GetStatId(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                        ::__l3::StatPtr_STAT_EventLoop_TTimerManager_Tick_AddTimers);
  local_5d8.Impl._Line = 0x149;
  local_5d8.Impl._Column = 3;
  local_5d8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopTimer.h"
  ;
  local_5d8.Impl._Function =
       "void __cdecl UE::EventLoop::TTimerManager<struct UE::EventLoop::FTimerManagerDefaultTraits>::Tick(struct FTimespan)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_6c0,*(TStatIdData **)&(TVar21.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_5d8);
  uVar30 = (ulonglong)local_248.ArrayNum;
  local_6f0 = local_248.ArrayNum;
  FVar39 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
            )&local_248;
  if (local_248.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
       )0x0) {
    FVar39 = local_248.AllocatorInstance.SecondaryData;
  }
  FVar40 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
            )(uVar30 * 0x10 + (longlong)FVar39);
  while( true ) {
    if (local_248.ArrayNum != (uint)uVar30) {
      local_6f7 = 0;
      `TCheckedPointerIterator<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_6f7);
    }
    if (FVar39 == FVar40) break;
    local_648 = *(longlong *)FVar39;
    lStack_640 = *(longlong *)((longlong)FVar39 + 8);
    uVar18 = (uint)*(undefined8 *)((longlong)FVar39 + 8);
    local_5b8 = local_648;
    lStack_5b0 = lStack_640;
    if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)&(this->Storage).Storage.field_0x28)) {
      if ((*(int *)&(this->Storage).Storage.field_0x28 <= (int)uVar18) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar6 = *(undefined1 **)&(this->Storage).Storage.field_0x20;
      puVar34 = &(this->Storage).Storage.field_0x10;
      if (puVar6 != (undefined1 *)0x0) {
        puVar34 = puVar6;
      }
      uVar16 = uVar18;
      if ((int)uVar18 < 0) {
        uVar16 = uVar18 + 0x1f;
      }
      if ((*(uint *)(puVar34 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar18 & 0x1f) & 1) != 0) {
        plVar31 = (longlong *)((longlong)(int)uVar18 * 0x70 + *(longlong *)&(this->Storage).Storage)
        ;
        if (*plVar31 == local_5b8) {
          plVar28 = plVar31 + 2;
          plVar36 = plVar31 + 9;
          plVar38 = plVar31 + 0xb;
          plVar31 = plVar31 + 0xc;
        }
        else {
          plVar28 = (longlong *)0x0;
          plVar31 = (longlong *)&DAT_00000050;
          plVar36 = (longlong *)&DAT_00000038;
          plVar38 = (longlong *)&DAT_00000048;
        }
        if (plVar28 != (longlong *)0x0) {
          FVar27 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                    )&this->ActiveTimerHeap;
          lVar22 = 0x30;
          if ((char)*plVar36 == '\0') {
            lVar22 = 0x40;
          }
          *plVar38 = *(longlong *)(lVar22 + (longlong)plVar28) + (this->InternalTime).Ticks;
          *(undefined1 *)plVar31 = 1;
          local_5a8.NumTimers =
               *(int *)&(this->Storage).Storage.field_0x8 -
               *(int *)&(this->Storage).Storage.field_0x34;
          FVar35 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
          FVar25 = FVar27;
          if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                         )0x0) {
            FVar25 = FVar35;
          }
          local_5a8.Storage = &this->Storage;
          if ((ulonglong)FVar25 <= &local_648) {
            FVar25 = FVar27;
            if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                           )0x0) {
              FVar25 = FVar35;
            }
            if ((&local_648 <
                 (longlong *)((longlong)(this->ActiveTimerHeap).ArrayMax * 0x10 + (longlong)FVar25))
               && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar17 = (this->ActiveTimerHeap).ArrayNum;
          piVar1 = &(this->ActiveTimerHeap).ArrayMax;
          if (iVar17 == *piVar1) {
            iVar17 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_>
                               (0x810,(ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                                       *)FVar27,piVar1);
          }
          (this->ActiveTimerHeap).ArrayNum = iVar17 + 1;
          FVar35 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
          FVar25 = FVar27;
          if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                         )0x0) {
            FVar25 = FVar35;
          }
          plVar31 = (longlong *)((longlong)FVar25 + (longlong)iVar17 * 0x10);
          *plVar31 = local_648;
          plVar31[1] = lStack_640;
          FVar35 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
          iVar17 = (this->ActiveTimerHeap).ArrayNum + -1;
          if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                         )0x0) {
            FVar27 = FVar35;
          }
          while (0 < iVar17) {
            lVar41 = (longlong)iVar17;
            iVar17 = (iVar17 + -1) / 2;
            lVar22 = (longlong)iVar17;
            puVar2 = (ulong64 *)((longlong)FVar27 + lVar22 * 0x10);
            local_508.ExternalHandle.ID = *puVar2;
            local_508._8_8_ = puVar2[1];
            puVar2 = (ulong64 *)((longlong)FVar27 + lVar41 * 0x10);
            local_4f8.ExternalHandle.ID = *puVar2;
            local_4f8._8_8_ = puVar2[1];
            bVar13 = FTimerHeapOrder::operator()(&local_5a8,&local_4f8,&local_508);
            if (!bVar13) break;
            puVar3 = (undefined8 *)((longlong)FVar27 + lVar22 * 0x10);
            uVar26 = puVar3[1];
            puVar4 = (undefined8 *)((longlong)FVar27 + lVar41 * 0x10);
            uVar9 = *puVar4;
            uVar10 = puVar4[1];
            puVar4 = (undefined8 *)((longlong)FVar27 + lVar41 * 0x10);
            *puVar4 = *puVar3;
            puVar4[1] = uVar26;
            puVar3 = (undefined8 *)((longlong)FVar27 + lVar22 * 0x10);
            *puVar3 = uVar9;
            puVar3[1] = uVar10;
          }
        }
      }
    }
    uVar30 = (ulonglong)local_6f0;
    FVar39 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
              )((longlong)FVar39 + 0x10);
  }
  if ((local_6b8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_6b8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_6b8 & 4) != 0) {
    FThreadStats::AddMessage(local_6c0,CycleScopeEnd);
  }
  local_6b8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
       ::__l11::_thread_safe_static_guard_3__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                           ::__l11::_thread_safe_static_guard_3__),
     `public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
     ::__l11::_thread_safe_static_guard_3__ == -1)) {
    _StatPtr_STAT_EventLoop_TTimerManager_Tick_RemoveTimers = (TStatIdData *)0x0;
    pFVar20 = ::FName::FName(&local_520,"STAT_EventLoop_TTimerManager_Tick_RemoveTimers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                ::__l11::StatPtr_STAT_EventLoop_TTimerManager_Tick_RemoveTimers,*pFVar20,
               L"STAT_EventLoop_TTimerManager_Tick_RemoveTimers","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                         ::__l11::_thread_safe_static_guard_3__);
  }
  pTVar23 = _StatPtr_STAT_EventLoop_TTimerManager_Tick_RemoveTimers;
  if (_StatPtr_STAT_EventLoop_TTimerManager_Tick_RemoveTimers == (TStatIdData *)0x0) {
    pFVar20 = ::FName::FName(&local_518,"STAT_EventLoop_TTimerManager_Tick_RemoveTimers");
    pTVar23 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                          ::__l11::StatPtr_STAT_EventLoop_TTimerManager_Tick_RemoveTimers,*pFVar20,
                         L"STAT_EventLoop_TTimerManager_Tick_RemoveTimers","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)&pTVar23->Name;
  bVar13 = false;
  bVar11 = false;
  local_678.ComparisonIndex.Value = 0;
  local_678.Number = 0;
  bVar12 = false;
  bVar14 = false;
  FVar32 = FVar33.ComparisonIndex.Value;
  uVar18 = FVar33.Number;
  if ((FVar32.Value == 0) && (uVar18 == 0)) {
LAB_1431868c9:
    bVar11 = bVar14;
    bVar13 = bVar12;
    bVar12 = false;
    local_6e0 = local_678;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6d0._s_0,(pTVar23->StatDescriptionAnsi).Ptr);
      bVar13 = false;
      bVar11 = true;
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_690.ComparisonIndex.Value = FVar32.Value;
        local_690.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_690,(pTVar23->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopTimer.h"
                   ,0x15c);
        bVar13 = true;
        bVar11 = true;
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1431868c9;
    local_6f0 = FVar32.Value;
    uStack_6ec = uVar18;
    local_6e0 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar12 = true;
  }
  uVar30 = (ulonglong)local_458.ArrayNum;
  local_6f0 = local_458.ArrayNum;
  FVar39 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
            )&local_458;
  if (local_458.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
       )0x0) {
    FVar39 = local_458.AllocatorInstance.SecondaryData;
  }
  FVar40 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
            )(uVar30 * 0x10 + (longlong)FVar39);
  while( true ) {
    if (local_458.ArrayNum != (uint)uVar30) {
      local_6f6 = 0;
      `TCheckedPointerIterator<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_6f6);
    }
    FVar33 = local_6e0;
    if (FVar39 == FVar40) break;
    FVar35 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
    FVar27 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
              )&this->ActiveTimerHeap;
    iVar17 = (this->ActiveTimerHeap).ArrayNum;
    local_4e8 = *(longlong *)FVar39;
    lStack_4e0 = *(longlong *)((longlong)FVar39 + 8);
    FVar25 = FVar27;
    if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                   )0x0) {
      FVar25 = FVar35;
    }
    FVar24 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
              )((longlong)iVar17 * 0x10 + (longlong)FVar25);
    FVar35 = FVar25;
    if (FVar25 == FVar24) {
LAB_143186adf:
      uVar30 = (ulonglong)local_6f0;
      FVar39 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )((longlong)FVar39 + 0x10);
    }
    else {
      do {
        if (*(longlong *)FVar35 == local_4e8) {
          uVar30 = (longlong)FVar35 - (longlong)FVar25 >> 4;
          uVar18 = (uint)uVar30;
          if (uVar18 == 0xffffffff) goto LAB_143186adf;
          local_608.NumTimers =
               *(int *)&(this->Storage).Storage.field_0x8 -
               *(int *)&(this->Storage).Storage.field_0x34;
          uVar16 = 0;
          if ((int)(uVar18 + 1) <= iVar17) {
            uVar16 = ~uVar18 >> 0x1f;
          }
          local_608.Storage = &this->Storage;
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          ::RemoveAtSwapImpl((TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                              *)FVar27,uVar18,1);
          local_628.Predicate = &local_608;
          FVar35 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
          FVar25 = FVar27;
          if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                         )0x0) {
            FVar25 = FVar35;
          }
          AlgoImpl::
          HeapSiftDown<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,int,FIdentityFunctor,TDereferenceWrapper<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder>_>
                    ((TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
                      *)FVar25,uVar18,(this->ActiveTimerHeap).ArrayNum,&local_6e8,&local_628);
          FVar35 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
          uVar16 = (this->ActiveTimerHeap).ArrayNum - 1;
          uVar37 = (ulonglong)uVar16;
          if ((int)uVar18 < (int)uVar16) {
            uVar37 = uVar30 & 0xffffffff;
          }
          if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                         )0x0) {
            FVar27 = FVar35;
          }
          uVar18 = (uint)uVar37;
          goto joined_r0x000143186a62;
        }
        FVar35 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                  )((longlong)FVar35 + 0x10);
      } while (FVar35 != FVar24);
      uVar30 = (ulonglong)local_6f0;
      FVar39 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )((longlong)FVar39 + 0x10);
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
       ::__l19::_thread_safe_static_guard_5__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                           ::__l19::_thread_safe_static_guard_5__),
     `public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
     ::__l19::_thread_safe_static_guard_5__ == -1)) {
    _StatPtr_STAT_EventLoop_TTimerManager_Tick_RescheduleTimers = (TStatIdData *)0x0;
    pFVar20 = ::FName::FName(&local_510,"STAT_EventLoop_TTimerManager_Tick_RescheduleTimers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                ::__l19::StatPtr_STAT_EventLoop_TTimerManager_Tick_RescheduleTimers,*pFVar20,
               L"STAT_EventLoop_TTimerManager_Tick_RescheduleTimers","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                         ::__l19::_thread_safe_static_guard_5__);
  }
  pTVar23 = _StatPtr_STAT_EventLoop_TTimerManager_Tick_RescheduleTimers;
  if (_StatPtr_STAT_EventLoop_TTimerManager_Tick_RescheduleTimers == (TStatIdData *)0x0) {
    pFVar20 = ::FName::FName(&local_490,"STAT_EventLoop_TTimerManager_Tick_RescheduleTimers");
    pTVar23 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                          ::__l19::StatPtr_STAT_EventLoop_TTimerManager_Tick_RescheduleTimers,
                         *pFVar20,L"STAT_EventLoop_TTimerManager_Tick_RescheduleTimers",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar33 = *(FName *)&pTVar23->Name;
  bVar11 = false;
  bVar13 = false;
  local_668.ComparisonIndex.Value = 0;
  local_668.Number = 0;
  bVar14 = false;
  bVar12 = false;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_143186d36:
    bVar11 = bVar14;
    bVar13 = bVar12;
    bVar12 = false;
    local_6e0 = local_668;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6cc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6cc._s_0,(pTVar23->StatDescriptionAnsi).Ptr);
      bVar11 = false;
      bVar13 = true;
      bVar14 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_688.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_688.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_688,(pTVar23->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopTimer.h"
                   ,0x16b);
        bVar11 = true;
        bVar13 = true;
        bVar14 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143186d36;
    local_6e0 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar12 = true;
  }
  FVar39 = (this->PendingRepeatTimers).AllocatorInstance.SecondaryData;
  local_6f0 = (this->PendingRepeatTimers).ArrayNum;
  uVar30 = (ulonglong)(int)local_6f0;
  if (FVar39 == (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                 )0x0) {
    FVar39 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
              )&this->PendingRepeatTimers;
  }
  FVar40 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
            )(uVar30 * 0x10 + (longlong)FVar39);
  while( true ) {
    if ((this->PendingRepeatTimers).ArrayNum != (int)uVar30) {
      local_6f5[0] = 0;
      `TCheckedPointerIterator<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_6f5);
    }
    FVar33 = local_6e0;
    if (FVar39 == FVar40) break;
    local_638 = *(longlong *)FVar39;
    lStack_630 = *(longlong *)((longlong)FVar39 + 8);
    uVar18 = (uint)*(undefined8 *)((longlong)FVar39 + 8);
    local_598 = local_638;
    lStack_590 = lStack_630;
    if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)&(this->Storage).Storage.field_0x28)) {
      if ((*(int *)&(this->Storage).Storage.field_0x28 <= (int)uVar18) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar6 = *(undefined1 **)&(this->Storage).Storage.field_0x20;
      puVar34 = &(this->Storage).Storage.field_0x10;
      if (puVar6 != (undefined1 *)0x0) {
        puVar34 = puVar6;
      }
      uVar16 = uVar18;
      if ((int)uVar18 < 0) {
        uVar16 = uVar18 + 0x1f;
      }
      if ((((*(uint *)(puVar34 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar18 & 0x1f) & 1) != 0) &&
          (plVar31 = (longlong *)
                     ((longlong)(int)uVar18 * 0x70 + *(longlong *)&(this->Storage).Storage),
          *plVar31 == local_598)) && (plVar31 != (longlong *)0xfffffffffffffff0)) {
        FVar27 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                  )&this->ActiveTimerHeap;
        plVar31[0xb] = plVar31[10] + (this->InternalTime).Ticks;
        *(undefined1 *)(plVar31 + 0xc) = 1;
        local_588.NumTimers =
             *(int *)&(this->Storage).Storage.field_0x8 -
             *(int *)&(this->Storage).Storage.field_0x34;
        FVar35 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
        FVar25 = FVar27;
        if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                       )0x0) {
          FVar25 = FVar35;
        }
        local_588.Storage = &this->Storage;
        if ((ulonglong)FVar25 <= &local_638) {
          FVar25 = FVar27;
          if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                         )0x0) {
            FVar25 = FVar35;
          }
          if ((&local_638 <
               (longlong *)((longlong)(this->ActiveTimerHeap).ArrayMax * 0x10 + (longlong)FVar25))
             && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar17 = (this->ActiveTimerHeap).ArrayNum;
        piVar1 = &(this->ActiveTimerHeap).ArrayMax;
        if (iVar17 == *piVar1) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_>
                             (0x810,(ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                                     *)FVar27,piVar1);
        }
        (this->ActiveTimerHeap).ArrayNum = iVar17 + 1;
        FVar35 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
        FVar25 = FVar27;
        if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                       )0x0) {
          FVar25 = FVar35;
        }
        plVar31 = (longlong *)((longlong)FVar25 + (longlong)iVar17 * 0x10);
        *plVar31 = local_638;
        plVar31[1] = lStack_630;
        FVar35 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
        iVar17 = (this->ActiveTimerHeap).ArrayNum + -1;
        if (FVar35 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                       )0x0) {
          FVar27 = FVar35;
        }
        while (0 < iVar17) {
          lVar22 = (longlong)iVar17;
          iVar17 = (iVar17 + -1) / 2;
          lVar41 = (longlong)iVar17;
          puVar2 = (ulong64 *)((longlong)FVar27 + lVar41 * 0x10);
          local_4b8.ExternalHandle.ID = *puVar2;
          local_4b8._8_8_ = puVar2[1];
          puVar2 = (ulong64 *)((longlong)FVar27 + lVar22 * 0x10);
          local_4a8.ExternalHandle.ID = *puVar2;
          local_4a8._8_8_ = puVar2[1];
          bVar14 = FTimerHeapOrder::operator()(&local_588,&local_4a8,&local_4b8);
          if (!bVar14) break;
          puVar3 = (undefined8 *)((longlong)FVar27 + lVar41 * 0x10);
          uVar26 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)FVar27 + lVar22 * 0x10);
          uVar9 = *puVar4;
          uVar10 = puVar4[1];
          puVar4 = (undefined8 *)((longlong)FVar27 + lVar22 * 0x10);
          *puVar4 = *puVar3;
          puVar4[1] = uVar26;
          puVar3 = (undefined8 *)((longlong)FVar27 + lVar41 * 0x10);
          *puVar3 = uVar9;
          puVar3[1] = uVar10;
        }
      }
    }
    uVar30 = (ulonglong)local_6f0;
    FVar39 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
              )((longlong)FVar39 + 0x10);
  }
  piVar1 = &(this->PendingRepeatTimers).ArrayMax;
  (this->PendingRepeatTimers).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_>
              (0x10,8,0,&(this->PendingRepeatTimers).AllocatorInstance,0,piVar1);
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
       ::__l27::_thread_safe_static_guard_7__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                           ::__l27::_thread_safe_static_guard_7__),
     `public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
     ::__l27::_thread_safe_static_guard_7__ == -1)) {
    _StatPtr_STAT_EventLoop_TTimerManager_Tick_RunTimers = (TStatIdData *)0x0;
    pFVar20 = ::FName::FName(&local_548,"STAT_EventLoop_TTimerManager_Tick_RunTimers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                ::__l27::StatPtr_STAT_EventLoop_TTimerManager_Tick_RunTimers,*pFVar20,
               L"STAT_EventLoop_TTimerManager_Tick_RunTimers","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                         ::__l27::_thread_safe_static_guard_7__);
  }
  pTVar23 = _StatPtr_STAT_EventLoop_TTimerManager_Tick_RunTimers;
  if (_StatPtr_STAT_EventLoop_TTimerManager_Tick_RunTimers == (TStatIdData *)0x0) {
    pFVar20 = ::FName::FName(&local_498,"STAT_EventLoop_TTimerManager_Tick_RunTimers");
    pTVar23 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(FTimespan)___ptr64'
                          ::__l27::StatPtr_STAT_EventLoop_TTimerManager_Tick_RunTimers,*pFVar20,
                         L"STAT_EventLoop_TTimerManager_Tick_RunTimers","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)&pTVar23->Name;
  bVar13 = false;
  bVar11 = false;
  local_658.ComparisonIndex.Value = 0;
  local_658.Number = 0;
  bVar12 = false;
  bVar14 = false;
  if ((FVar33.ComparisonIndex.Value.Value != 0) || (FVar33.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6c8[0]._s_0,(pTVar23->StatDescriptionAnsi).Ptr);
      bVar13 = false;
      bVar11 = true;
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_680.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_680.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_680,(pTVar23->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopTimer.h"
                   ,0x17c);
        bVar13 = true;
        bVar11 = true;
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_6e0 = FVar33;
      FThreadStats::AddMessage(FVar33,CycleScopeStart);
      bVar12 = true;
      goto LAB_14318726b;
    }
  }
  bVar11 = bVar14;
  bVar13 = bVar12;
  bVar12 = false;
  FVar33 = local_658;
LAB_14318726b:
  if (0 < (this->ActiveTimerHeap).ArrayNum) {
    this_00 = &this->ActiveTimerHeap;
    do {
      FVar39 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )&this->PendingRepeatTimers;
      if (((this->ActiveTimerHeap).ArrayNum < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar40 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
      FVar27 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                )this_00;
      if (FVar40 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                     )0x0) {
        FVar27 = FVar40;
      }
      local_6e0 = *(FName *)FVar27;
      FStack_6d8 = *(FName *)((longlong)FVar27 + 8);
      FVar32 = (*(FName *)((longlong)FVar27 + 8)).ComparisonIndex;
      local_578 = local_6e0;
      FStack_570 = FStack_6d8;
      if (((int)FVar32.Value < 0) ||
         (*(int *)&(this->Storage).Storage.field_0x28 <= (int)FVar32.Value)) {
LAB_14318736b:
        pFVar20 = (FName *)0x0;
LAB_14318736e:
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TimerData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopTimer.h"
                            ,0x184,L"");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        if ((*(int *)&(this->Storage).Storage.field_0x28 <= (int)FVar32.Value) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar6 = *(undefined1 **)&(this->Storage).Storage.field_0x20;
        puVar34 = &(this->Storage).Storage.field_0x10;
        if (puVar6 != (undefined1 *)0x0) {
          puVar34 = puVar6;
        }
        FVar19.Value = FVar32.Value;
        if ((int)FVar32.Value < 0) {
          FVar19.Value = FVar32.Value + 0x1f;
        }
        if (((*(uint *)(puVar34 + (longlong)((int)FVar19.Value >> 5) * 4) >> (FVar32.Value & 0x1f) &
             1) == 0) ||
           (pFVar20 = (FName *)((longlong)(int)FVar32.Value * 0x70 +
                               *(longlong *)&(this->Storage).Storage), *pFVar20 != local_578))
        goto LAB_14318736b;
        pFVar20 = pFVar20 + 2;
        if (pFVar20 == (FName *)0x0) goto LAB_14318736e;
      }
      if ((char)pFVar20[10].ComparisonIndex.Value == '\x02') {
        local_568.NumTimers =
             *(int *)&(this->Storage).Storage.field_0x8 -
             *(int *)&(this->Storage).Storage.field_0x34;
        local_568.Storage = &this->Storage;
        if (((this->ActiveTimerHeap).ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((this->ActiveTimerHeap).ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAtSwapImpl(this_00,0,1);
        local_620.Predicate = &local_568;
        FVar39 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
        FVar40 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                  )this_00;
        if (FVar39 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                       )0x0) {
          FVar40 = FVar39;
        }
        AlgoImpl::
        HeapSiftDown<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,int,FIdentityFunctor,TDereferenceWrapper<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder>_>
                  ((TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
                    *)FVar40,0,(this->ActiveTimerHeap).ArrayNum,&local_6e7,&local_620);
      }
      else {
        if ((this->InternalTime).Ticks < (longlong)pFVar20[9]) break;
        local_558.NumTimers =
             *(int *)&(this->Storage).Storage.field_0x8 -
             *(int *)&(this->Storage).Storage.field_0x34;
        local_6b0 = 0;
        uStack_6a8 = CONCAT44(uStack_6a8._4_4_,0xffffffff);
        local_558.Storage = &this->Storage;
        if (((this->ActiveTimerHeap).ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar40 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
        FVar27 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                  )this_00;
        if (FVar40 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                       )0x0) {
          FVar27 = FVar40;
        }
        local_6b0 = *(undefined8 *)FVar27;
        uStack_6a8 = *(undefined8 *)((longlong)FVar27 + 8);
        if (((this->ActiveTimerHeap).ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAtSwapImpl(this_00,0,1);
        local_618.Predicate = &local_558;
        FVar40 = (this->ActiveTimerHeap).AllocatorInstance.SecondaryData;
        FVar27 = (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                  )this_00;
        if (FVar40 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                       )0x0) {
          FVar27 = FVar40;
        }
        AlgoImpl::
        HeapSiftDown<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,int,FIdentityFunctor,TDereferenceWrapper<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder>_>
                  ((TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
                    *)FVar27,0,(this->ActiveTimerHeap).ArrayNum,local_6e6,&local_618);
        *(undefined1 *)&pFVar20[10].ComparisonIndex.Value = 4;
        Core::Private::Function::CheckCallable((void *)*pFVar20);
        FVar7 = *pFVar20;
        FVar29 = pFVar20[5];
        if (pFVar20[5] == (FName)0x0) {
          FVar29 = (FName)(pFVar20 + 2);
        }
        uVar26 = (**(code **)(*(longlong *)FVar29 + 8))();
        (*(code *)FVar7)(uVar26);
        if ((pFVar20[10].ComparisonIndex.Value & 0x100) == 0) {
          local_6e4 = 0xffffffff;
          local_488 = (code *)0x0;
          local_610 = local_6e0;
          local_460 = (longlong *)0x0;
          bVar14 = TMap<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int,0>_>
                   ::RemoveAndCopyValue
                             (&(this->Storage).StorageHandleIndex,
                              (TResourceHandle<UE::EventLoop::FTimerHandleTraits> *)&local_610,
                              (int *)&local_6e4);
          uVar18 = local_6e4;
          if (((bVar14) && (-1 < (int)local_6e4)) &&
             ((int)local_6e4 < *(int *)&(this->Storage).Storage.field_0x28)) {
            if ((*(int *)&(this->Storage).Storage.field_0x28 <= (int)local_6e4) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar6 = *(undefined1 **)&(this->Storage).Storage.field_0x20;
            puVar34 = &(this->Storage).Storage.field_0x10;
            if (puVar6 != (undefined1 *)0x0) {
              puVar34 = puVar6;
            }
            uVar16 = uVar18;
            if ((int)uVar18 < 0) {
              uVar16 = uVar18 + 0x1f;
            }
            if ((*(uint *)(puVar34 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar18 & 0x1f) & 1) != 0)
            {
              TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
              ::RemoveAt((TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
                          *)this,uVar18,1);
            }
          }
          if (local_488 != (code *)0x0) {
            Core::Private::Function::CheckCallable(local_488);
            pcVar8 = local_488;
            plVar31 = local_478;
            if (local_460 != (longlong *)0x0) {
              plVar31 = local_460;
            }
            uVar26 = (**(code **)(*plVar31 + 8))();
            (*pcVar8)(uVar26);
            if (local_488 != (code *)0x0) {
              plVar31 = local_478;
              if (local_460 != (longlong *)0x0) {
                plVar31 = local_460;
              }
              (**(code **)(*plVar31 + 0x10))();
            }
          }
        }
        else {
          *(undefined1 *)&pFVar20[10].ComparisonIndex.Value = 3;
          FVar40 = (this->PendingRepeatTimers).AllocatorInstance.SecondaryData;
          FVar27 = FVar39;
          if (FVar40 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                         )0x0) {
            FVar27 = FVar40;
          }
          if ((ulonglong)FVar27 <= &local_6b0) {
            FVar27 = FVar39;
            if (FVar40 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                           )0x0) {
              FVar27 = FVar40;
            }
            if ((&local_6b0 < (undefined8 *)((longlong)*piVar1 * 0x10 + (longlong)FVar27)) &&
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
          }
          iVar17 = (this->PendingRepeatTimers).ArrayNum;
          if (iVar17 == *piVar1) {
            iVar17 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_>
                               (0x810,(ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                                       *)FVar39,piVar1);
          }
          (this->PendingRepeatTimers).ArrayNum = iVar17 + 1;
          FVar40 = (this->PendingRepeatTimers).AllocatorInstance.SecondaryData;
          if (FVar40 != (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
                         )0x0) {
            FVar39 = FVar40;
          }
          puVar3 = (undefined8 *)((longlong)FVar39 + (longlong)iVar17 * 0x10);
          *puVar3 = local_6b0;
          puVar3[1] = uStack_6a8;
        }
      }
    } while (0 < (this->ActiveTimerHeap).ArrayNum);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  if (local_458.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
       )0x0) {
    FMemory::Free((void *)local_458.AllocatorInstance.SecondaryData);
  }
  if (local_248.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
       )0x0) {
    FMemory::Free((void *)local_248.AllocatorInstance.SecondaryData);
  }
  this->bIsTicking = false;
  if ((local_698 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_698 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_698 & 4) != 0) {
    FThreadStats::AddMessage(local_6a0,CycleScopeEnd);
  }
  return;
joined_r0x000143186a62:
  if ((int)uVar18 < 1) goto LAB_143186adf;
  uVar18 = ((int)uVar37 + -1) / 2;
  lVar22 = (longlong)(int)uVar18;
  puVar2 = (ulong64 *)((longlong)FVar27 + lVar22 * 0x10);
  local_4d8.ExternalHandle.ID = *puVar2;
  local_4d8._8_8_ = puVar2[1];
  puVar2 = (ulong64 *)((longlong)FVar27 + uVar37 * 0x10);
  local_4c8.ExternalHandle.ID = *puVar2;
  local_4c8._8_8_ = puVar2[1];
  bVar14 = FTimerHeapOrder::operator()(&local_608,&local_4c8,&local_4d8);
  if (!bVar14) goto LAB_143186adf;
  puVar3 = (undefined8 *)((longlong)FVar27 + lVar22 * 0x10);
  uVar26 = puVar3[1];
  puVar4 = (undefined8 *)((longlong)FVar27 + uVar37 * 0x10);
  uVar9 = *puVar4;
  uVar10 = puVar4[1];
  puVar4 = (undefined8 *)((longlong)FVar27 + uVar37 * 0x10);
  *puVar4 = *puVar3;
  puVar4[1] = uVar26;
  puVar3 = (undefined8 *)((longlong)FVar27 + lVar22 * 0x10);
  *puVar3 = uVar9;
  puVar3[1] = uVar10;
  uVar37 = (ulonglong)uVar18;
  goto joined_r0x000143186a62;
}

