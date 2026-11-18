// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 8

// FHttpQueue @ 1445a3380

FHttpQueue * __thiscall UE::IoStore::HttpIoDispatcher::FHttpQueue::FHttpQueue(FHttpQueue *this)

{
  TMap<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>_>
  *this_00;
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  uVar10 = 0;
  this_00 = &this->ByChunkKey;
  (this->Heap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Heap).ArrayMax;
  (this->Heap).ArrayNum = 0;
  puVar2 = &(this->ByChunkKey).field_0x48;
  *piVar1 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->ByChunkKey).field_0x8 = 0;
  *(undefined8 *)&(this->ByChunkKey).field_0x20 = 0;
  *(undefined4 *)&(this->ByChunkKey).field_0x28 = 0;
  *(undefined4 *)&(this->ByChunkKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->ByChunkKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ByChunkKey).field_0x34 = 0;
  *(undefined8 *)&(this->ByChunkKey).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  this->Mutex = (atomic<unsigned_char>)0x0;
  this->PauseFilter = None;
  (this->PausedRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PausedRequests).ArrayNum = 0;
  (this->PausedRequests).ArrayMax = 0;
  this->bReprioritize = false;
  if (*piVar1 < 0x10) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x10,(ForAnyElementType *)this,(this->Heap).ArrayNum,piVar1);
  }
  if (0xf < (uint)(*(int *)&(this->ByChunkKey).field_0x8 - *(int *)&(this->ByChunkKey).field_0x34))
  {
    return this;
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,0x10);
  for (lVar5 = 0x3f; 0x1fUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
  }
  uVar14 = 1 << ((byte)lVar5 & 0x1f);
  if ((*(int *)puVar2 != 0) && ((int)uVar14 <= *(int *)puVar2)) {
    return this;
  }
  puVar3 = &(this->ByChunkKey).field_0x38;
  *(uint *)puVar2 = uVar14;
  if (*(longlong *)&(this->ByChunkKey).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ByChunkKey).field_0x40,0,0,4);
  }
  if (uVar14 == 0) goto LAB_1445a34e4;
  uVar11 = uVar14;
  if (uVar14 < 2) {
    if (*(longlong *)&(this->ByChunkKey).field_0x40 != 0) {
      uVar11 = 0;
      goto LAB_1445a3499;
    }
  }
  else {
LAB_1445a3499:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ByChunkKey).field_0x40,0,uVar11,4);
  }
  if (0 < (int)uVar14) {
    uVar12 = (ulonglong)uVar14;
    uVar8 = uVar10;
    do {
      puVar4 = *(undefined1 **)&(this->ByChunkKey).field_0x40;
      puVar7 = puVar3;
      if (puVar4 != (undefined1 *)0x0) {
        puVar7 = puVar4;
      }
      uVar6 = uVar8 & (longlong)(int)uVar14 - 1U;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(puVar7 + uVar6 * 4) = 0xffffffff;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
LAB_1445a34e4:
  if (*(int *)puVar2 != 0) {
    uVar14 = *(uint *)&(this->ByChunkKey).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ByChunkKey).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar14 != 0) {
      puVar13 = *(uint **)&(this->ByChunkKey).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar11 = *puVar13;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_1445a358c;
        uVar11 = puVar13[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar5;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar14 < (int)uStack_64) {
LAB_1445a358c:
        uVar10 = (ulonglong)uVar14;
        uStack_64 = uVar14;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar14) {
      do {
        puVar13 = (uint *)((longlong)(int)uVar10 * 0x30 + *(longlong *)&this_00->field_0x0);
        uVar14 = *(int *)puVar2 - 1U & *puVar13;
        puVar13[0xb] = uVar14;
        puVar4 = *(undefined1 **)&(this->ByChunkKey).field_0x40;
        puVar7 = puVar3;
        if (puVar4 != (undefined1 *)0x0) {
          puVar7 = puVar4;
        }
        uVar8 = (longlong)*(int *)puVar2 - 1U & (longlong)(int)uVar14;
        puVar13[10] = *(uint *)(puVar7 + uVar8 * 4);
        *(int *)(puVar7 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return this;
}

// Cancel @ 1445b5e60

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::IoStore::HttpIoDispatcher::FHttpQueue::Cancel(FHttpQueue *this,FHttpRequest *param_1)

{
  FIoHash *pFVar1;
  atomic<unsigned_char> aVar2;
  FHttpRequest *pFVar3;
  FHttpRequest *pFVar4;
  code *pcVar5;
  undefined1 uVar6;
  EHttpRequestTypeFilter EVar7;
  int iVar8;
  FIoHash *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FMutex *pFVar12;
  longlong *plVar13;
  FHttpRequest *pFVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar20;
  longlong *plVar21;
  bool bVar22;
  FHttpRequest *local_res10;
  byte local_res18;
  FHttpRequest *local_58;
  FScriptContainerElement *local_50;
  longlong *plVar19;
  
  pFVar12 = &this->Mutex;
  LOCK();
  bVar22 = pFVar12->State == (atomic<unsigned_char>)0x0;
  if (bVar22) {
    pFVar12->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  local_res10 = param_1;
  if (!bVar22) {
    FMutex::LockSlow(pFVar12);
  }
  pFVar14 = local_res10;
  if ((local_res10 == (FHttpRequest *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Request != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                          ,0x266,L""), bVar22)) {
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return (bool)uVar6;
  }
  plVar21 = (longlong *)0x0;
  bVar22 = (pFVar14->Options).Category == '\x01';
  if (bVar22) {
    if (bVar22) {
      EVar7 = this->PauseFilter >> 1;
      goto LAB_1445b6000;
    }
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                        ,0x274,L"");
    pFVar14 = local_res10;
    if (bVar22) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
  }
  else {
    EVar7 = this->PauseFilter;
LAB_1445b6000:
    pFVar14 = local_res10;
    if ((EVar7 & Streaming) != None) {
      pFVar16 = (this->PausedRequests).AllocatorInstance.Data;
      if (((pFVar16 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 <
           pFVar16 + (longlong)(this->PausedRequests).ArrayMax * 8)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      iVar8 = (this->PausedRequests).ArrayNum;
      pFVar14 = local_res10;
      if (iVar8 != 0) {
        pFVar16 = (this->PausedRequests).AllocatorInstance.Data;
        local_res18 = *(FHttpRequest **)pFVar16 != local_res10;
        plVar13 = plVar21;
        plVar15 = plVar21;
        plVar19 = plVar21;
        local_50 = pFVar16;
        do {
          uVar17 = (uint)plVar19;
          uVar18 = uVar17;
          do {
            plVar15 = (longlong *)((longlong)plVar15 + 1);
            uVar18 = uVar18 + 1;
            plVar19 = (longlong *)(ulonglong)uVar18;
            if ((longlong)iVar8 <= (longlong)plVar15) break;
          } while ((bool)local_res18 ==
                   (*(FHttpRequest **)(pFVar16 + (longlong)plVar15 * 8) != pFVar14));
          if (local_res18 != 0) {
            uVar11 = (uint)plVar13;
            if (uVar11 != uVar17) {
              memmove(pFVar16 + (longlong)(int)uVar11 * 8,pFVar16 + (longlong)(int)uVar17 * 8,
                      (longlong)(int)(uVar18 - uVar17) << 3);
              pFVar14 = local_res10;
              pFVar16 = local_50;
            }
            plVar13 = (longlong *)(ulonglong)(uVar11 + (uVar18 - uVar17));
          }
          local_res18 = local_res18 ^ 1;
        } while ((longlong)plVar15 < (longlong)iVar8);
        (this->PausedRequests).ArrayNum = (int)plVar13;
        if (iVar8 != (int)plVar13) {
          FOnDemandIoBackendStats::OnHttpEnqueue(GStatistics,(pFVar14->Options).Category == '\x01');
          FOnDemandIoBackendStats::OnHttpCancel
                    (GStatistics,(local_res10->Options).Category == '\x01');
          bVar22 = true;
          if ((local_res10->Options).Category == '\x01') {
            plVar21 = (longlong *)&DAT_00000004;
          }
          LOCK();
          *(int *)(plVar21 + 0x2aa10084) = (int)plVar21[0x2aa10084] + -1;
          UNLOCK();
          goto LAB_1445b5fb5;
        }
      }
    }
  }
  pFVar1 = &pFVar14->ChunkHash;
  for (pFVar9 = pFVar1; pFVar9 != &pFVar14->CacheKey; pFVar9 = (FIoHash *)(pFVar9->Hash + 4)) {
    if (*(int *)pFVar9->Hash != 0) {
      iVar8 = TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FIoHash>
                        ((TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
                          *)&this->ByChunkKey,*(uint *)pFVar1->Hash,pFVar1);
      if (iVar8 == -1) goto LAB_1445b637b;
      lVar20 = (longlong)iVar8 * 0x30 + *(longlong *)&this->ByChunkKey;
      plVar15 = (longlong *)(lVar20 + 0x18);
      if (lVar20 == 0) {
        plVar15 = plVar21;
      }
      if (((plVar15 == (longlong *)0x0) || (pFVar14 == (FHttpRequest *)0x0)) ||
         (pFVar3 = (FHttpRequest *)*plVar15, pFVar3 == (FHttpRequest *)0x0)) goto LAB_1445b637b;
      pFVar4 = pFVar3->Next;
      if (pFVar14 != pFVar3) goto joined_r0x0001445b61fc;
      *plVar15 = (longlong)pFVar4;
      if (pFVar4 == (FHttpRequest *)0x0) {
        plVar15[1] = 0;
      }
      pFVar3->Next = (FHttpRequest *)0x0;
      goto LAB_1445b623c;
    }
  }
  if ((pFVar14->Next != (FHttpRequest *)0x0) &&
     (bVar22 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4214109730584395414>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                          ,0x16a,"Request->Next == nullptr"), pFVar14 = local_res10, bVar22)) {
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return (bool)uVar6;
  }
  pFVar16 = (this->Heap).AllocatorInstance.Data;
  for (pFVar10 = pFVar16; pFVar10 != pFVar16 + (longlong)(this->Heap).ArrayNum * 8;
      pFVar10 = pFVar10 + 8) {
    if (*(FHttpRequest **)pFVar10 == pFVar14) {
      iVar8 = (int)((longlong)pFVar10 - (longlong)pFVar16 >> 3);
      if (iVar8 != -1) {
        TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_>::
        HeapRemoveAt<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
                  (&this->Heap,iVar8,HttpRequestSortPredicate,Default);
        FOnDemandIoBackendStats::OnHttpDequeue
                  (GStatistics,(local_res10->Options).Category == '\x01');
        FOnDemandIoBackendStats::OnHttpCancel(GStatistics,(local_res10->Options).Category == '\x01')
        ;
        goto LAB_1445b6441;
      }
      break;
    }
  }
LAB_1445b5fb2:
  bVar22 = false;
LAB_1445b5fb5:
  pFVar12 = &this->Mutex;
  LOCK();
  aVar2 = pFVar12->State;
  pFVar12->State = (atomic<unsigned_char>)((char)pFVar12->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(pFVar12);
  }
  return bVar22;
joined_r0x0001445b61fc:
  if (pFVar4 == (FHttpRequest *)0x0) goto LAB_1445b6214;
  if (pFVar4 == pFVar14) goto LAB_1445b621d;
  pFVar3 = pFVar4;
  pFVar4 = pFVar4->Next;
  goto joined_r0x0001445b61fc;
LAB_1445b6214:
  if (pFVar14 == (FHttpRequest *)0x0) {
LAB_1445b621d:
    pFVar3->Next = pFVar14->Next;
    pFVar14->Next = (FHttpRequest *)0x0;
    if (pFVar14 == (FHttpRequest *)plVar15[1]) {
      plVar15[1] = (longlong)pFVar3;
    }
LAB_1445b623c:
    pFVar16 = (this->Heap).AllocatorInstance.Data;
    for (pFVar10 = pFVar16; pFVar10 != pFVar16 + (longlong)(this->Heap).ArrayNum * 8;
        pFVar10 = pFVar10 + 8) {
      if (*(FHttpRequest **)pFVar10 == local_res10) {
        iVar8 = (int)((longlong)pFVar10 - (longlong)pFVar16 >> 3);
        if (iVar8 != -1) {
          TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_>::
          HeapRemoveAt<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
                    (&this->Heap,iVar8,HttpRequestSortPredicate,Default);
          FOnDemandIoBackendStats::OnHttpDequeue
                    (GStatistics,(local_res10->Options).Category == '\x01');
          FOnDemandIoBackendStats::OnHttpCancel
                    (GStatistics,(local_res10->Options).Category == '\x01');
          pFVar14 = (FHttpRequest *)*plVar15;
          if (pFVar14 != (FHttpRequest *)0x0) {
            pFVar16 = (this->Heap).AllocatorInstance.Data;
            pFVar10 = pFVar16;
            goto joined_r0x0001445b62e1;
          }
        }
        break;
      }
    }
    goto LAB_1445b635d;
  }
LAB_1445b637b:
  pFVar16 = (this->Heap).AllocatorInstance.Data;
  for (pFVar10 = pFVar16; pFVar10 != pFVar16 + (longlong)(this->Heap).ArrayNum * 8;
      pFVar10 = pFVar10 + 8) {
    if (*(FHttpRequest **)pFVar10 == pFVar14) {
      if (((int)((longlong)pFVar10 - (longlong)pFVar16 >> 3) != -1) &&
         (bVar22 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4214109730584395399>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                              ,0x179,"Heap.Find(Request) == INDEX_NONE"), bVar22)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      break;
    }
  }
  goto LAB_1445b5fb2;
joined_r0x0001445b62e1:
  local_58 = pFVar14;
  if (pFVar10 == pFVar16 + (longlong)(this->Heap).ArrayNum * 8) goto LAB_1445b632c;
  if (*(FHttpRequest **)pFVar10 == pFVar14) {
    if (((int)((longlong)pFVar10 - (longlong)pFVar16 >> 3) != -1) &&
       (bVar22 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4214109730584395385>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                            ,0x187,"Heap.Find(Head) == INDEX_NONE"), bVar22)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    goto LAB_1445b632c;
  }
  pFVar10 = pFVar10 + 8;
  goto joined_r0x0001445b62e1;
LAB_1445b632c:
  TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_>::
  HeapPush<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
            (&this->Heap,&local_58,HttpRequestSortPredicate);
  FOnDemandIoBackendStats::OnHttpEnqueue(GStatistics,(local_58->Options).Category == '\x01');
LAB_1445b635d:
  if (*plVar15 == 0) {
    TMapBase<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>_>
    ::Remove((TMapBase<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>_>
              *)&this->ByChunkKey,&local_res10->ChunkHash);
    bVar22 = true;
  }
  else {
LAB_1445b6441:
    bVar22 = true;
  }
  goto LAB_1445b5fb5;
}

// Dequeue @ 1445c6cb0

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FHttpRequest * __thiscall UE::IoStore::HttpIoDispatcher::FHttpQueue::Dequeue(FHttpQueue *this)

{
  FMutex *this_00;
  int *piVar1;
  TMap<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>_>
  *this_01;
  FHttpRequest **ppFVar2;
  atomic<unsigned_char> aVar3;
  longlong lVar4;
  code *pcVar5;
  FHttpRequest *pFVar6;
  FHttpRequest *pFVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  FHttpRequest *local_res8;
  
  this_00 = &this->Mutex;
  LOCK();
  bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(this_00);
  }
  iVar10 = (this->Heap).ArrayNum;
  pFVar6 = (FHttpRequest *)0x0;
  if (iVar10 == 0) {
    if ((*(int *)&(this->ByChunkKey).field_0x8 != *(int *)&(this->ByChunkKey).field_0x34) &&
       (bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4214109730584395305>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                            ,0x1d7,"ByChunkKey.IsEmpty()"), bVar12)) {
      pcVar5 = (code *)swi(3);
      pFVar6 = (FHttpRequest *)(*pcVar5)();
      return pFVar6;
    }
  }
  else {
    if (this->bReprioritize != false) {
      this->bReprioritize = false;
      AlgoImpl::
      HeapifyInternal<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>_>
                ((FHttpRequest **)(this->Heap).AllocatorInstance.Data,iVar10,local_res8._0_1_,
                 (TDereferenceWrapper<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
                  )0x1445d9590);
    }
    local_res8 = (FHttpRequest *)0x0;
    TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_>::
    HeapPop<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
              (&this->Heap,&local_res8,HttpRequestSortPredicate,No);
    if ((this->Heap).ArrayNum == 0) {
      piVar1 = &(this->Heap).ArrayMax;
      (this->Heap).ArrayNum = 0;
      if (*piVar1 != 0x10) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0x10,(ForAnyElementType *)this,0,piVar1);
      }
    }
    if (local_res8 != (FHttpRequest *)0x0) {
      this_01 = &this->ByChunkKey;
      pFVar6 = local_res8;
      if (*(int *)&(this->ByChunkKey).field_0x8 != *(int *)&(this->ByChunkKey).field_0x34) {
        puVar8 = *(undefined1 **)&(this->ByChunkKey).field_0x40;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(this->ByChunkKey).field_0x38;
        }
        iVar10 = *(int *)(puVar8 + (ulonglong)
                                   (*(int *)&(this->ByChunkKey).field_0x48 - 1U &
                                   *(uint *)(local_res8->ChunkHash).Hash) * 4);
        if (iVar10 != -1) {
          do {
            plVar9 = (longlong *)((longlong)iVar10 * 0x30 + *(longlong *)&this_01->field_0x0);
            if (((*plVar9 == *(longlong *)(local_res8->ChunkHash).Hash) &&
                (plVar9[1] == *(longlong *)((local_res8->ChunkHash).Hash + 8))) &&
               ((int)plVar9[2] == *(int *)((local_res8->ChunkHash).Hash + 0x10))) {
              pFVar6 = (FHttpRequest *)plVar9[3];
              plVar9[3] = 0;
              plVar9[4] = 0;
              TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
                               *)this_01,iVar10);
              if (*(int *)&(this->ByChunkKey).field_0x8 == *(int *)&(this->ByChunkKey).field_0x34) {
                for (lVar4 = 0x3f; 0x1fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
                iVar11 = 1 << ((byte)lVar4 & 0x1f);
                iVar10 = *(int *)&(this->ByChunkKey).field_0x48;
                if ((iVar10 < iVar11) || (iVar11 < iVar10)) {
                  bVar12 = true;
                }
                else {
                  bVar12 = false;
                  TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
                  ::UnhashElements((TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
                                    *)this_01);
                }
                *(undefined4 *)&(this->ByChunkKey).field_0x8 = 0;
                if (*(int *)&(this->ByChunkKey).field_0xc != 0x10) {
                  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x30,8,0x10,(ForAnyElementType *)this_01,0,
                             (int *)&(this->ByChunkKey).field_0xc);
                }
                *(undefined4 *)&(this->ByChunkKey).field_0x30 = 0xffffffff;
                *(undefined4 *)&(this->ByChunkKey).field_0x34 = 0;
                iVar10 = *(int *)&(this->ByChunkKey).field_0x2c;
                *(undefined4 *)&(this->ByChunkKey).field_0x28 = 0;
                if ((iVar10 < 0x20) || (0x80 < iVar10)) {
                  *(undefined4 *)&(this->ByChunkKey).field_0x2c = 0x80;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ByChunkKey).field_0x10,
                             0);
                }
                if (bVar12) {
                  *(int *)&(this->ByChunkKey).field_0x48 = iVar11;
                  TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
                  ::Rehash((TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
                            *)this_01);
                }
              }
              break;
            }
            iVar10 = (int)plVar9[5];
          } while (iVar10 != -1);
        }
      }
      pFVar7 = pFVar6;
      if (pFVar6 != (FHttpRequest *)0x0) {
        do {
          LOCK();
          (pFVar7->Flags).Flags = (atomic<unsigned_int>)((uint)(pFVar7->Flags).Flags | 8);
          UNLOCK();
          LOCK();
          (pFVar7->Flags).Flags = (atomic<unsigned_int>)((uint)(pFVar7->Flags).Flags & 0xfffffffb);
          UNLOCK();
          ppFVar2 = &pFVar7->Next;
          pFVar7 = *ppFVar2;
        } while (*ppFVar2 != (FHttpRequest *)0x0);
        FOnDemandIoBackendStats::OnHttpDequeue(GStatistics,(pFVar6->Options).Category == '\x01');
      }
    }
  }
  LOCK();
  aVar3 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return pFVar6;
}

// Enqueue @ 1445c9ec0

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpQueue::Enqueue(FHttpQueue *this,FHttpRequest *param_1)

{
  FMutex *pFVar1;
  int *piVar2;
  atomic<unsigned_char> aVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FHttpRequest *pFVar6;
  EHttpRequestTypeFilter EVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  FHttpRequest *local_res10;
  
  LOCK();
  bVar10 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar10) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  local_res10 = param_1;
  if (!bVar10) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = local_res10;
  if ((local_res10 == (FHttpRequest *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Request != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                          ,0x266,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar9 = 0;
  bVar10 = (pFVar6->Options).Category == '\x01';
  if (bVar10) {
    if (bVar10) {
      EVar7 = this->PauseFilter >> 1;
      goto LAB_1445c9f98;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                        ,0x274,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    EVar7 = this->PauseFilter;
LAB_1445c9f98:
    if ((EVar7 & Streaming) != None) {
      pFVar4 = (this->PausedRequests).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 <
           pFVar4 + (longlong)(this->PausedRequests).ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->PausedRequests).ArrayNum;
      piVar2 = &(this->PausedRequests).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->PausedRequests).AllocatorInstance,piVar2);
      }
      (this->PausedRequests).ArrayNum = iVar8 + 1;
      *(FHttpRequest **)((this->PausedRequests).AllocatorInstance.Data + (longlong)iVar8 * 8) =
           local_res10;
      if ((local_res10->Options).Category == '\x01') {
        lVar9 = 4;
      }
      LOCK();
      *(int *)(&GHttpNumPausedRequests[0].field_0x0 + lVar9) =
           *(int *)(&GHttpNumPausedRequests[0].field_0x0 + lVar9) + 1;
      UNLOCK();
      goto LAB_1445c9f65;
    }
  }
  EnqueueInternal(this,local_res10);
LAB_1445c9f65:
  LOCK();
  pFVar1 = &this->Mutex;
  aVar3 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// EnqueueInternal @ 1445ca720

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpQueue::EnqueueInternal(FHttpQueue *this,FHttpRequest *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FIoHash *pFVar5;
  FIoHash *pFVar6;
  longlong lVar7;
  TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest> *this_00;
  FHttpRequest *local_res10 [2];
  FHttpRequest *local_28;
  FHttpRequest *local_20;
  FIoHash *local_18;
  FHttpRequest **local_10;
  
  local_res10[0] = param_1;
  if ((param_1->Next != (FHttpRequest *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request->Next == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                         ,0x1a8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  (local_res10[0]->Flags).Flags =
       (atomic<unsigned_int>)((uint)(local_res10[0]->Flags).Flags & 0xfffffffd);
  UNLOCK();
  pFVar6 = &local_res10[0]->ChunkHash;
  pFVar5 = pFVar6;
  while( true ) {
    if (pFVar5 == &local_res10[0]->CacheKey) {
      TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_>::
      HeapPush<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
                (&this->Heap,local_res10,HttpRequestSortPredicate);
      LOCK();
      (local_res10[0]->Flags).Flags =
           (atomic<unsigned_int>)((uint)(local_res10[0]->Flags).Flags | 4);
      UNLOCK();
      FOnDemandIoBackendStats::OnHttpEnqueue
                (GStatistics,(local_res10[0]->Options).Category == '\x01');
      return;
    }
    if (*(int *)pFVar5->Hash != 0) break;
    pFVar5 = (FIoHash *)(pFVar5->Hash + 4);
  }
  iVar4 = TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FIoHash>
                    ((TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
                      *)&this->ByChunkKey,*(uint *)pFVar6->Hash,pFVar6);
  if (iVar4 != -1) {
    lVar7 = (longlong)iVar4 * 0x30 + *(longlong *)&this->ByChunkKey;
    this_00 = (TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest> *)(lVar7 + 0x18);
    if (lVar7 == 0) {
      this_00 = (TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest> *)0x0;
    }
    if (this_00 != (TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest> *)0x0) {
      if ((this_00->Head == (FHttpRequest *)0x0) &&
         (bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4214109730584395337>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                             ,0x1b7,"List->IsEmpty() == false"), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (this_00->Head->Options).Priority;
      iVar1 = (local_res10[0]->Options).Priority;
      if (iVar4 < iVar1) {
        (this_00->Head->Options).Priority = iVar1;
        this->bReprioritize = true;
      }
      else {
        (local_res10[0]->Options).Priority = iVar4;
      }
      TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>::
      AddOrInsertBefore<_UE::IoStore::HttpIoDispatcher::FHttpQueue::EnqueueInternal_::__l15::<lambda_1>_>
                (this_00,local_res10[0],local_res10[0]._0_1_);
      goto LAB_1445ca8dd;
    }
  }
  TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_>::
  HeapPush<bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
            (&this->Heap,local_res10,HttpRequestSortPredicate);
  local_20 = local_res10[0];
  local_28 = local_res10[0];
  local_18 = &local_res10[0]->ChunkHash;
  local_10 = &local_28;
  TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FIoHash_const_&,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_&&>_>
            ((TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
              *)&this->ByChunkKey,
             (TPairInitializer<FIoHash_const_&,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_&&>
              *)(local_res10 + 1),(bool *)&local_18);
  FOnDemandIoBackendStats::OnHttpEnqueue(GStatistics,(local_res10[0]->Options).Category == '\x01');
LAB_1445ca8dd:
  LOCK();
  (local_res10[0]->Flags).Flags = (atomic<unsigned_int>)((uint)(local_res10[0]->Flags).Flags | 4);
  UNLOCK();
  return;
}

// IsPaused @ 1445ddf50

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::IoStore::HttpIoDispatcher::FHttpQueue::IsPaused(FHttpQueue *this,FHttpRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == (FHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Request != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                       ,0x266,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = (param_1->Options).Category == '\x01';
  if (!bVar2) {
    return (bool)(this->PauseFilter & Streaming);
  }
  if (bVar2) {
    return (bool)(this->PauseFilter >> 1 & 1);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                     ,0x274,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// OnTogglePause @ 1445e6ee0

/* WARNING: Removing unreachable block (ram,0x0001445e7027) */
/* WARNING: Removing unreachable block (ram,0x0001445e7050) */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpQueue::OnTogglePause
          (FHttpQueue *this,bool param_1,EHttpRequestTypeFilter param_2)

{
  TMap<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>_>
  *this_00;
  int *piVar1;
  TArray<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<unsigned_char> aVar3;
  longlong lVar4;
  FHttpRequest *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  EHttpRequestTypeFilter EVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  atomic<unsigned_char> *this_01;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 local_res10;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  FScriptContainerElement *local_70;
  atomic<unsigned_char> *local_68;
  TMap<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>_>
  *local_60;
  FScriptContainerElement *local_58;
  ForAnyElementType local_50;
  uint local_48;
  uint uStack_44;
  
  this_01 = &(this->Mutex).State;
  LOCK();
  bVar22 = ((FMutex *)this_01)->State == (atomic<unsigned_char>)0x0;
  if (bVar22) {
    ((FMutex *)this_01)->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  local_68 = this_01;
  if (!bVar22) {
    FMutex::LockSlow((FMutex *)this_01);
  }
  if (param_1) {
    this->PauseFilter = this->PauseFilter | param_2;
    plVar20 = (longlong *)0x0;
    uVar12 = (this->Heap).ArrayNum;
    uVar14 = (ulonglong)(int)uVar12;
    pFVar18 = (this->Heap).AllocatorInstance.Data;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    uStack_44 = 0;
    local_58 = pFVar18 + uVar14 * 8;
    while( true ) {
      pFVar7 = local_58;
      local_70 = pFVar18;
      if ((this->Heap).ArrayNum != (int)uVar14) {
        local_res10 = 0;
        `TCheckedPointerIterator<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&stack0x00000010);
      }
      this_01 = local_68;
      if (pFVar18 == pFVar7) break;
      lVar16 = *(longlong *)pFVar18;
      this_00 = &this->ByChunkKey;
      local_88 = lVar16;
      local_60 = this_00;
      iVar10 = TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FIoHash>
                         ((TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
                           *)this_00,*(uint *)(lVar16 + 4),(FIoHash *)(lVar16 + 4));
      if (iVar10 == -1) {
LAB_1445e7380:
        if ((lVar16 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Request != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                                ,0x266,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar22 = *(char *)(lVar16 + 0x84) == '\x01';
        if (bVar22) {
          if (bVar22) {
            EVar8 = this->PauseFilter >> 1;
            goto LAB_1445e74ee;
          }
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                              ,0x274,L"");
          if (bVar22) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_1445e73ef:
          if (((local_50.Data <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 < local_50.Data + (longlong)(int)uStack_44 * 8))
             && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_48 == uStack_44) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&stack0xffffffffffffffb0,(int *)&stack0xffffffffffffffbc);
            local_48 = iVar10;
          }
          uVar11 = local_48;
          lVar16 = (longlong)(int)local_48;
          local_48 = local_48 + 1;
          *(longlong *)(local_50.Data + lVar16 * 8) = local_88;
          if ((int)uVar11 < 1) goto LAB_1445e7228;
          do {
            uVar14 = (ulonglong)uVar11;
            uVar11 = (int)(uVar11 - 1) / 2;
            lVar16 = *(longlong *)(local_50.Data + (longlong)(int)uVar11 * 8);
            lVar19 = *(longlong *)(local_50.Data + uVar14 * 8);
            if (*(int *)(lVar19 + 0x78) == *(int *)(lVar16 + 0x78)) {
              bVar22 = *(uint *)(lVar19 + 0xb8) < *(uint *)(lVar16 + 0xb8);
            }
            else {
              bVar22 = *(int *)(lVar16 + 0x78) < *(int *)(lVar19 + 0x78);
            }
            if (!bVar22) goto LAB_1445e7228;
            *(longlong *)(local_50.Data + uVar14 * 8) = lVar16;
            *(longlong *)(local_50.Data + (longlong)(int)uVar11 * 8) = lVar19;
          } while (0 < (int)uVar11);
          uVar14 = (ulonglong)uVar12;
          pFVar18 = local_70 + 8;
        }
        else {
          EVar8 = this->PauseFilter;
LAB_1445e74ee:
          if ((EVar8 & Streaming) == None) goto LAB_1445e73ef;
          if ((*(longlong *)(local_88 + 0x98) != 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("HeadRequest->Next == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                                  ,0x241,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = (this->PausedRequests).AllocatorInstance.Data;
          if (((pFVar18 <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 <
               pFVar18 + (longlong)(this->PausedRequests).ArrayMax * 8)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = (this->PausedRequests).ArrayNum;
          piVar1 = &(this->PausedRequests).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->PausedRequests).AllocatorInstance,piVar1);
          }
          (this->PausedRequests).ArrayNum = iVar10 + 1;
          *(longlong *)((this->PausedRequests).AllocatorInstance.Data + (longlong)iVar10 * 8) =
               local_88;
          FOnDemandIoBackendStats::OnHttpOnRemovedPending
                    (GStatistics,*(char *)(local_88 + 0x84) == '\x01');
          plVar17 = plVar20;
          if (*(char *)(local_88 + 0x84) == '\x01') {
            plVar17 = (longlong *)&DAT_00000004;
          }
          LOCK();
          *(int *)(plVar17 + 0x2aa10084) = (int)plVar17[0x2aa10084] + 1;
          UNLOCK();
          uVar14 = (ulonglong)uVar12;
          pFVar18 = local_70 + 8;
        }
      }
      else {
        lVar19 = (longlong)iVar10 * 0x30 + *(longlong *)&this_00->field_0x0;
        plVar17 = (longlong *)(lVar19 + 0x18);
        if (lVar19 == 0) {
          plVar17 = plVar20;
        }
        if (plVar17 == (longlong *)0x0) goto LAB_1445e7380;
        bVar22 = false;
        lVar16 = *plVar17;
        lVar19 = local_80;
        bVar9 = false;
        while (local_80 = lVar16, local_80 != 0) {
          lVar16 = *(longlong *)(local_80 + 0x98);
          if (*(char *)(local_80 + 0x84) == '\x01') {
            EVar8 = this->PauseFilter >> 1;
          }
          else {
            EVar8 = this->PauseFilter;
          }
          this_00 = local_60;
          lVar19 = local_80;
          if ((EVar8 & Streaming) != None) {
            if (local_80 == local_88) {
              bVar22 = true;
            }
            if ((local_80 != 0) && (lVar19 = *plVar17, lVar19 != 0)) {
              lVar4 = *(longlong *)(lVar19 + 0x98);
              if (local_80 == lVar19) {
                *plVar17 = lVar4;
                if (lVar4 == 0) {
                  plVar17[1] = 0;
                }
                *(undefined8 *)(lVar19 + 0x98) = 0;
              }
              else {
                for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x98)) {
                  if (lVar4 == local_80) goto LAB_1445e70ca;
                  lVar19 = lVar4;
                }
                if (local_80 == 0) {
LAB_1445e70ca:
                  *(undefined8 *)(lVar19 + 0x98) = *(undefined8 *)(local_80 + 0x98);
                  *(undefined8 *)(local_80 + 0x98) = 0;
                  if (local_80 == plVar17[1]) {
                    plVar17[1] = lVar19;
                  }
                }
              }
            }
            if ((*(longlong *)(local_80 + 0x98) != 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ListRequest->Next == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                                   ,0x229,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar18 = (this->PausedRequests).AllocatorInstance.Data;
            if (((pFVar18 <= (FScriptContainerElement *)&local_80) &&
                ((FScriptContainerElement *)&local_80 <
                 pFVar18 + (longlong)(this->PausedRequests).ArrayMax * 8)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar10 = (this->PausedRequests).ArrayNum;
            piVar1 = &(this->PausedRequests).ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(this->PausedRequests).AllocatorInstance,piVar1);
            }
            (this->PausedRequests).ArrayNum = iVar10 + 1;
            *(longlong *)((this->PausedRequests).AllocatorInstance.Data + (longlong)iVar10 * 8) =
                 local_80;
            plVar15 = plVar20;
            if (*(char *)(local_80 + 0x84) == '\x01') {
              plVar15 = (longlong *)&DAT_00000004;
            }
            LOCK();
            *(int *)(plVar15 + 0x2aa10084) = (int)plVar15[0x2aa10084] + 1;
            UNLOCK();
            this_00 = local_60;
            lVar19 = local_80;
            bVar9 = bVar22;
          }
        }
        local_80 = lVar19;
        if (*plVar17 == 0) {
          FOnDemandIoBackendStats::OnHttpOnRemovedPending
                    (GStatistics,*(char *)(local_88 + 0x84) == '\x01');
          TMapBase<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>_>
          ::Remove((TMapBase<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>_>
                    *)this_00,(FIoHash *)(local_88 + 4));
        }
        else if (bVar9) {
          FOnDemandIoBackendStats::OnHttpOnRemovedPending
                    (GStatistics,*(char *)(local_88 + 0x84) == '\x01');
          local_78 = *plVar17;
          if (((local_50.Data <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 < local_50.Data + (longlong)(int)uStack_44 * 8))
             && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = local_48;
          if (local_48 == uStack_44) {
            uVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&stack0xffffffffffffffb0,(int *)&stack0xffffffffffffffbc);
          }
          local_48 = uVar11 + 1;
          *(longlong *)(local_50.Data + (longlong)(int)uVar11 * 8) = local_78;
          while (0 < (int)uVar11) {
            uVar14 = (ulonglong)uVar11;
            uVar11 = (int)(uVar11 - 1) / 2;
            lVar16 = *(longlong *)(local_50.Data + (longlong)(int)uVar11 * 8);
            lVar19 = *(longlong *)(local_50.Data + uVar14 * 8);
            if (*(int *)(lVar19 + 0x78) == *(int *)(lVar16 + 0x78)) {
              bVar22 = *(uint *)(lVar19 + 0xb8) < *(uint *)(lVar16 + 0xb8);
            }
            else {
              bVar22 = *(int *)(lVar16 + 0x78) < *(int *)(lVar19 + 0x78);
            }
            if (!bVar22) break;
            *(longlong *)(local_50.Data + uVar14 * 8) = lVar16;
            *(longlong *)(local_50.Data + (longlong)(int)uVar11 * 8) = lVar19;
          }
          FOnDemandIoBackendStats::OnHttpEnqueue(GStatistics,*(char *)(local_78 + 0x84) == '\x01');
        }
LAB_1445e7228:
        uVar14 = (ulonglong)uVar12;
        pFVar18 = local_70 + 8;
      }
    }
    if (this != (FHttpQueue *)&stack0xffffffffffffffb0) {
      pFVar18 = (this->Heap).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (this->Heap).AllocatorInstance.Data = local_50.Data;
      (this->Heap).ArrayNum = local_48;
      (this->Heap).ArrayMax = uStack_44;
      local_48 = 0;
      uStack_44 = 0;
      local_50.Data = (FScriptContainerElement *)0x0;
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  else {
    uVar14 = 0;
    this->PauseFilter = ~param_2 & this->PauseFilter;
    if (0 < (this->PausedRequests).ArrayNum) {
      pTVar2 = &this->PausedRequests;
      uVar13 = uVar14;
      uVar21 = uVar14;
      do {
        uVar11 = (uint)uVar13;
        uVar12 = 0;
        if ((int)uVar11 < (this->PausedRequests).ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = *(FHttpRequest **)((pTVar2->AllocatorInstance).Data + uVar21);
        if ((pFVar5 == (FHttpRequest *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Request != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                                ,0x266,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar22 = (pFVar5->Options).Category == '\x01';
        if (bVar22) {
          if (bVar22) {
            EVar8 = this->PauseFilter >> 1;
            goto LAB_1445e777f;
          }
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                              ,0x274,L"");
          if (bVar22) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_1445e7787:
          EnqueueInternal(this,pFVar5);
          uVar13 = uVar14;
          if ((pFVar5->Options).Category == '\x01') {
            uVar13 = 4;
          }
          LOCK();
          *(int *)(&GHttpNumPausedRequests[0].field_0x0 + uVar13) =
               *(int *)(&GHttpNumPausedRequests[0].field_0x0 + uVar13) + -1;
          UNLOCK();
          uVar12 = 0;
          if ((int)uVar11 < (this->PausedRequests).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
          iVar10 = ~uVar11 + (this->PausedRequests).ArrayNum;
          if (iVar10 != 0) {
            memmove(pFVar18,pFVar18 + 8,(longlong)iVar10 << 3);
          }
          piVar1 = &(this->PausedRequests).ArrayNum;
          *piVar1 = *piVar1 + -1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,(this->PausedRequests).ArrayNum,
                     &(this->PausedRequests).ArrayMax);
          uVar11 = uVar11 - 1;
          uVar21 = uVar21 - 8;
        }
        else {
          EVar8 = this->PauseFilter;
LAB_1445e777f:
          if ((EVar8 & Streaming) == None) goto LAB_1445e7787;
        }
        uVar13 = (ulonglong)(uVar11 + 1);
        uVar21 = uVar21 + 8;
        this_01 = local_68;
      } while ((int)(uVar11 + 1) < (this->PausedRequests).ArrayNum);
    }
  }
  LOCK();
  aVar3 = *this_01;
  *this_01 = (atomic<unsigned_char>)((char)*this_01 + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)this_01);
  }
  return;
}

// Reprioritize @ 1445f7f30

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpQueue::Reprioritize
          (FHttpQueue *this,FHttpRequest *param_1,int param_2)

{
  FMutex *this_00;
  FIoHash *pFVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  EHttpRequestTypeFilter EVar5;
  int iVar6;
  FIoHash *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  
  this_00 = &this->Mutex;
  LOCK();
  bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar11) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar11) {
    FMutex::LockSlow(this_00);
  }
  if ((param_1 == (FHttpRequest *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Request != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                          ,0x266,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar11 = (param_1->Options).Category == '\x01';
  if (bVar11) {
    if (bVar11) {
      EVar5 = this->PauseFilter >> 1;
      goto LAB_1445f8038;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                        ,0x274,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    EVar5 = this->PauseFilter;
LAB_1445f8038:
    if ((EVar5 & Streaming) != None) {
      (param_1->Options).Priority = param_2;
      goto LAB_1445f810e;
    }
  }
  pFVar1 = &param_1->ChunkHash;
  for (pFVar7 = pFVar1; pFVar7 != &param_1->CacheKey; pFVar7 = (FIoHash *)(pFVar7->Hash + 4)) {
    if (*(int *)pFVar7->Hash != 0) {
      iVar6 = TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FIoHash>
                        ((TSet<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>,TDefaultMapHashableKeyFuncs<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>,0>,FDefaultSetAllocator>
                          *)&this->ByChunkKey,*(uint *)pFVar1->Hash,pFVar1);
      if (iVar6 != -1) {
        lVar8 = (longlong)iVar6 * 0x30 + *(longlong *)&this->ByChunkKey;
        plVar9 = (longlong *)(lVar8 + 0x18);
        if (lVar8 == 0) {
          plVar9 = (longlong *)0x0;
        }
        if (plVar9 != (longlong *)0x0) {
          for (lVar8 = *plVar9; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x98)) {
            if (*(int *)(lVar8 + 0x78) < param_2) {
              *(int *)(lVar8 + 0x78) = param_2;
              this->bReprioritize = true;
            }
          }
          goto LAB_1445f810e;
        }
      }
      pFVar3 = (this->Heap).AllocatorInstance.Data;
      pFVar10 = pFVar3;
      if (pFVar3 == pFVar3 + (longlong)(this->Heap).ArrayNum * 8) goto LAB_1445f810e;
      goto LAB_1445f80b0;
    }
  }
  pFVar3 = (this->Heap).AllocatorInstance.Data;
  for (pFVar10 = pFVar3; pFVar10 != pFVar3 + (longlong)(this->Heap).ArrayNum * 8;
      pFVar10 = pFVar10 + 8) {
    if (*(FHttpRequest **)pFVar10 == param_1) {
      if ((int)((longlong)pFVar10 - (longlong)pFVar3 >> 3) != -1) {
        (param_1->Options).Priority = param_2;
        this->bReprioritize = true;
      }
      break;
    }
  }
LAB_1445f810e:
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) == 0) {
    return;
  }
  FMutex::WakeWaitingThread(this_00);
  return;
  while (pFVar10 = pFVar10 + 8, pFVar10 != pFVar3 + (longlong)(this->Heap).ArrayNum * 8) {
LAB_1445f80b0:
    if (*(FHttpRequest **)pFVar10 == param_1) {
      if (((int)((longlong)pFVar10 - (longlong)pFVar3 >> 3) != -1) &&
         (bVar11 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4214109730584395450>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                              ,0x146,"Heap.Find(Request) == INDEX_NONE"), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      break;
    }
  }
  goto LAB_1445f810e;
}

