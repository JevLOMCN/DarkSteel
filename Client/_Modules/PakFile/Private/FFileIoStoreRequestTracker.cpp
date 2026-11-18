// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 12

// FFileIoStoreRequestTracker @ 142a51d30

FFileIoStoreRequestTracker * __thiscall
FFileIoStoreRequestTracker::FFileIoStoreRequestTracker
          (FFileIoStoreRequestTracker *this,FFileIoStoreRequestAllocator *param_1,
          FFileIoStoreRequestQueue *param_2)

{
  this->RequestAllocator = param_1;
  *(undefined8 *)&this->CompressedBlocksMap = 0;
  *(undefined8 *)&(this->CompressedBlocksMap).field_0x8 = 0;
  *(undefined8 *)&(this->CompressedBlocksMap).field_0x20 = 0;
  this->RequestQueue = param_2;
  *(undefined4 *)&(this->CompressedBlocksMap).field_0x28 = 0;
  *(undefined4 *)&(this->CompressedBlocksMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompressedBlocksMap).field_0x34 = 0;
  *(undefined4 *)&(this->CompressedBlocksMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CompressedBlocksMap).field_0x40 = 0;
  *(undefined4 *)&(this->CompressedBlocksMap).field_0x48 = 0;
  *(undefined8 *)&this->RawBlocksMap = 0;
  *(undefined8 *)&(this->RawBlocksMap).field_0x8 = 0;
  *(undefined8 *)&(this->RawBlocksMap).field_0x20 = 0;
  *(undefined4 *)&(this->RawBlocksMap).field_0x28 = 0;
  *(undefined4 *)&(this->RawBlocksMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RawBlocksMap).field_0x34 = 0;
  *(undefined4 *)&(this->RawBlocksMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RawBlocksMap).field_0x40 = 0;
  *(undefined4 *)&(this->RawBlocksMap).field_0x48 = 0;
  return this;
}

// ~FFileIoStoreRequestTracker @ 142a56380

void __thiscall
FFileIoStoreRequestTracker::~FFileIoStoreRequestTracker(FFileIoStoreRequestTracker *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->RawBlocksMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RawBlocksMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RawBlocksMap);
  *(undefined4 *)&(this->CompressedBlocksMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CompressedBlocksMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompressedBlocksMap);
  return;
}

// AddReadRequestsToResolvedRequest @ 142a5e4c0

void __thiscall
FFileIoStoreRequestTracker::AddReadRequestsToResolvedRequest
          (FFileIoStoreRequestTracker *this,FFileIoStoreReadRequestList *param_1,
          FFileIoStoreResolvedRequest *param_2)

{
  FFileIoStoreReadRequestLink *pFVar1;
  ushort uVar2;
  FFileIoStoreRequestAllocator *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSlab *pFVar6;
  FSlab *pFVar7;
  longlong lVar8;
  FFileIoStoreReadRequest *pFVar9;
  FSlab *pFVar10;
  FFileIoStoreReadRequest *pFVar11;
  
  pFVar9 = param_1->Head;
  if (pFVar9 != (FFileIoStoreReadRequest *)0x0) {
    pFVar11 = pFVar9->Next;
    while( true ) {
      param_2->UnfinishedReadsCount = param_2->UnfinishedReadsCount + 1;
      pFVar3 = this->RequestAllocator;
      pFVar10 = (pFVar3->RequestLinkAllocator).CurrentSlab;
      uVar2 = pFVar10->Allocated;
      pFVar10->Allocated = uVar2 + 1;
      if ((0xfff < uVar2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementIndex < SlabSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                             ,0x36,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (pFVar3->RequestLinkAllocator).CurrentSlab;
      pFVar10->Elements[uVar2].Slab = pFVar10;
      pFVar1 = (FFileIoStoreReadRequestLink *)(pFVar10->Elements + uVar2);
      if (((pFVar3->RequestLinkAllocator).CurrentSlab)->Allocated == 0x1000) {
        pFVar6 = ::operator_new(0x18008);
        pFVar10 = (FSlab *)0x0;
        if (pFVar6 != (FSlab *)0x0) {
          memset(&pFVar6->field_0x4,0,0x18004);
          lVar8 = 0x1000;
          pFVar6->Allocated = 0;
          pFVar6->Freed = 0;
          pFVar7 = pFVar6;
          do {
            pFVar7 = (FSlab *)&pFVar7->Elements[0].Slab;
            *(FSlab **)pFVar7 = (FSlab *)0x0;
            lVar8 = lVar8 + -1;
            pFVar10 = pFVar6;
          } while (lVar8 != 0);
        }
        (pFVar3->RequestLinkAllocator).CurrentSlab = pFVar10;
      }
      *(uchar *)&pFVar1->Next = '\0';
      *(uchar *)((longlong)&pFVar1->Next + 1) = '\0';
      *(uchar *)((longlong)&pFVar1->Next + 2) = '\0';
      *(uchar *)((longlong)&pFVar1->Next + 3) = '\0';
      *(uchar *)((longlong)&pFVar1->Next + 4) = '\0';
      *(uchar *)((longlong)&pFVar1->Next + 5) = '\0';
      *(uchar *)((longlong)&pFVar1->Next + 6) = '\0';
      *(uchar *)((longlong)&pFVar1->Next + 7) = '\0';
      pFVar1->ReadRequest = pFVar9;
      pFVar9->RefCount = pFVar9->RefCount + 1;
      if ((*(longlong *)((TTypeCompatibleBytes<FFileIoStoreReadRequestLink> *)&pFVar1->Next)->Pad !=
           0) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!ReadRequestLink->Next",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                     ,0x3dc,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (param_2->ReadRequestsTail == (FFileIoStoreReadRequestLink *)0x0) {
        param_2->ReadRequestsHead = pFVar1;
      }
      else {
        param_2->ReadRequestsTail->Next = pFVar1;
      }
      param_2->ReadRequestsTail = pFVar1;
      if ((param_2->Priority != pFVar9->Priority) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResolvedRequest.GetPriority() == Request->Priority",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                             ,0x43a,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pFVar9->Next != pFVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Current->Next == Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                             ,0x107,
                             L"FFileIoStoreReadRequestListIterator cached Next pointer != Current->Next - was list modified during iteration?"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pFVar11 == (FFileIoStoreReadRequest *)0x0) break;
      pFVar9 = pFVar11;
      pFVar11 = pFVar11->Next;
    }
  }
  return;
}

// AddReadRequestsToResolvedRequest @ 142a5e690

void __thiscall
FFileIoStoreRequestTracker::AddReadRequestsToResolvedRequest
          (FFileIoStoreRequestTracker *this,FFileIoStoreCompressedBlock *param_1,
          FFileIoStoreResolvedRequest *param_2)

{
  ForElementType<FFileIoStoreReadRequest_*> FVar1;
  FFileIoStoreReadRequestLink *pFVar2;
  ushort uVar3;
  FFileIoStoreReadRequest *pFVar4;
  FFileIoStoreRequestAllocator *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FSlab *pFVar9;
  FSlab *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  ForElementType<FFileIoStoreReadRequest_*> FVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  TArray<FFileIoStoreReadRequest_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *local_res20;
  
  param_2->UnfinishedReadsCount = param_2->UnfinishedReadsCount + 1;
  local_res20 = &param_1->RawBlocks;
  bVar7 = false;
  FVar13 = (param_1->RawBlocks).AllocatorInstance.SecondaryData;
  local_res18 = (param_1->RawBlocks).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18;
  if (FVar13 == (ForElementType<FFileIoStoreReadRequest_*>)0x0) {
    FVar13 = (ForElementType<FFileIoStoreReadRequest_*>)local_res20;
  }
  FVar1 = (ForElementType<FFileIoStoreReadRequest_*>)((longlong)FVar13 + uVar11 * 8);
  while( true ) {
    if (local_res20->ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FFileIoStoreReadRequest_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar13 == FVar1) {
      if (!bVar7) {
        return;
      }
      if (CpuChannel->Enabled < 0) {
        FFileIoStoreRequestQueue::UpdateOrder(this->RequestQueue);
        return;
      }
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1068,"RequestTrackerAddIoRequestUpdateOrder",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                 ,0x42c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1068);
      FFileIoStoreRequestQueue::UpdateOrder(this->RequestQueue);
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
    pFVar4 = *(FFileIoStoreReadRequest **)FVar13;
    pFVar5 = this->RequestAllocator;
    if ((pFVar4 == (FFileIoStoreReadRequest *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReadRequest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                           ,0x2f2,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar9 = (pFVar5->RequestLinkAllocator).CurrentSlab;
    uVar3 = pFVar9->Allocated;
    pFVar9->Allocated = uVar3 + 1;
    if ((0xfff < uVar3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementIndex < SlabSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                           ,0x36,L""), bVar8)) break;
    pFVar9 = (pFVar5->RequestLinkAllocator).CurrentSlab;
    pFVar9->Elements[uVar3].Slab = pFVar9;
    pFVar2 = (FFileIoStoreReadRequestLink *)(pFVar9->Elements + uVar3);
    if (((pFVar5->RequestLinkAllocator).CurrentSlab)->Allocated == 0x1000) {
      pFVar9 = ::operator_new(0x18008);
      if (pFVar9 == (FSlab *)0x0) {
        pFVar9 = (FSlab *)0x0;
      }
      else {
        memset(&pFVar9->field_0x4,0,0x18004);
        pFVar9->Allocated = 0;
        pFVar9->Freed = 0;
        lVar12 = 0x1000;
        pFVar10 = pFVar9;
        do {
          pFVar10 = (FSlab *)&pFVar10->Elements[0].Slab;
          *(FSlab **)pFVar10 = (FSlab *)0x0;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      (pFVar5->RequestLinkAllocator).CurrentSlab = pFVar9;
    }
    pFVar2->ReadRequest = pFVar4;
    *(uchar *)&pFVar2->Next = '\0';
    *(uchar *)((longlong)&pFVar2->Next + 1) = '\0';
    *(uchar *)((longlong)&pFVar2->Next + 2) = '\0';
    *(uchar *)((longlong)&pFVar2->Next + 3) = '\0';
    *(uchar *)((longlong)&pFVar2->Next + 4) = '\0';
    *(uchar *)((longlong)&pFVar2->Next + 5) = '\0';
    *(uchar *)((longlong)&pFVar2->Next + 6) = '\0';
    *(uchar *)((longlong)&pFVar2->Next + 7) = '\0';
    pFVar4->RefCount = pFVar4->RefCount + 1;
    if ((*(longlong *)((TTypeCompatibleBytes<FFileIoStoreReadRequestLink> *)&pFVar2->Next)->Pad != 0
        ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ReadRequestLink->Next",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                 ,0x3dc,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_2->ReadRequestsTail == (FFileIoStoreReadRequestLink *)0x0) {
      param_2->ReadRequestsHead = pFVar2;
    }
    else {
      param_2->ReadRequestsTail->Next = pFVar2;
    }
    param_2->ReadRequestsTail = pFVar2;
    if (pFVar4->Priority < param_2->Priority) {
      pFVar4->Priority = param_2->Priority;
      bVar7 = true;
    }
    FVar13 = (ForElementType<FFileIoStoreReadRequest_*>)((longlong)FVar13 + 8);
    uVar11 = (ulonglong)local_res18;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// CancelIoRequest @ 142a60ca0

bool __thiscall
FFileIoStoreRequestTracker::CancelIoRequest
          (FFileIoStoreRequestTracker *this,FFileIoStoreResolvedRequest *param_1)

{
  uchar *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FFileIoStoreResolvedRequest *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  FFileIoStoreReadRequestLink *pFVar10;
  int *piVar11;
  bool bVar12;
  undefined1 uVar13;
  ForElementType<FFileIoStoreBlockScatter> FVar14;
  undefined8 *puVar15;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar16;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar17;
  undefined8 *puVar18;
  ForElementType<FFileIoStoreBlockScatter> FVar19;
  bool bVar20;
  bool local_res18;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84 [4];
  int local_80;
  int *local_78;
  ForElementType<FFileIoStoreCompressedBlock_*> local_70;
  FFileIoStoreReadRequestLink *local_68;
  FFileIoStoreCompressedBlock *local_60;
  FFileIoStoreReadRequest *local_58;
  ForElementType<FFileIoStoreCompressedBlock_*> local_50;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1100,"RequestTrackerCancelIoRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
               ,0x44c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1100);
  }
  if ((param_1->bCancelled != false) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ResolvedRequest.bCancelled",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                          ,0x44d,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  local_res18 = true;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->RequestQueue->CriticalSection);
  pFVar10 = param_1->ReadRequestsHead;
  do {
    do {
      while( true ) {
        do {
          if (pFVar10 == (FFileIoStoreReadRequestLink *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&this->RequestQueue->CriticalSection);
            if (bVar20) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            return local_res18;
          }
          local_58 = pFVar10->ReadRequest;
          local_68 = pFVar10->Next;
          pFVar10 = local_68;
        } while (local_58->bCancelled != false);
        if ((int)local_58->QueueStatus < 2) break;
        local_res18 = false;
      }
      piVar2 = &(local_58->CompressedBlocks).ArrayNum;
      bVar12 = true;
      local_80 = *piVar2;
      local_50 = (ForElementType<FFileIoStoreCompressedBlock_*>)&local_58->CompressedBlocks;
      FVar17 = (local_58->CompressedBlocks).AllocatorInstance.SecondaryData;
      FVar16 = local_50;
      if (FVar17 != (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
        FVar16 = FVar17;
      }
      FVar17 = (ForElementType<FFileIoStoreCompressedBlock_*>)
               ((longlong)FVar16 + (longlong)local_80 * 8);
      local_78 = piVar2;
      local_70 = FVar17;
      while( true ) {
        piVar11 = local_78;
        if (*piVar2 != local_80) {
          local_87 = 0;
          `TCheckedPointerIterator<FFileIoStoreCompressedBlock_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_87);
        }
        if (FVar16 == FVar17) break;
        local_60 = *(FFileIoStoreCompressedBlock **)FVar16;
        if (local_60->bCancelled == false) {
          FVar14 = (ForElementType<FFileIoStoreBlockScatter>)&local_60->ScatterList;
          FVar19 = (local_60->ScatterList).AllocatorInstance.SecondaryData;
          piVar3 = &(local_60->ScatterList).ArrayNum;
          iVar4 = *piVar3;
          bVar9 = true;
          if (FVar19 != (ForElementType<FFileIoStoreBlockScatter>)0x0) {
            FVar14 = FVar19;
          }
          FVar19 = (ForElementType<FFileIoStoreBlockScatter>)
                   ((longlong)iVar4 * 0x20 + (longlong)FVar14);
          local_78 = piVar11;
          while( true ) {
            if (*piVar3 != iVar4) {
              local_86 = 0;
              `TCheckedPointerIterator<FFileIoStoreBlockScatter,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_86);
            }
            if (FVar14 == FVar19) break;
            if ((*(longlong *)((longlong)FVar14 + 0x18) == 0) ||
               (*(FFileIoStoreResolvedRequest **)FVar14 == param_1)) {
              puVar1 = (uchar *)((longlong)FVar14 + 0x18);
              puVar1[0] = '\0';
              puVar1[1] = '\0';
              puVar1[2] = '\0';
              puVar1[3] = '\0';
              puVar1[4] = '\0';
              puVar1[5] = '\0';
              puVar1[6] = '\0';
              puVar1[7] = '\0';
              FVar14 = (ForElementType<FFileIoStoreBlockScatter>)((longlong)FVar14 + 0x20);
            }
            else {
              bVar9 = false;
              bVar12 = false;
              FVar14 = (ForElementType<FFileIoStoreBlockScatter>)((longlong)FVar14 + 0x20);
            }
          }
          FVar17 = local_70;
          if (bVar9) {
            local_60->bCancelled = true;
            RemoveCompressedBlock(this,local_60,true);
            FVar17 = local_70;
          }
        }
        FVar16 = (ForElementType<FFileIoStoreCompressedBlock_*>)((longlong)FVar16 + 8);
      }
      pFVar10 = local_68;
    } while (!bVar12);
    pFVar6 = (local_58->ImmediateScatter).Request;
    local_58->bCancelled = true;
    if (pFVar6 == (FFileIoStoreResolvedRequest *)0x0) {
      RemoveRawBlock(this,local_58,true);
    }
    iVar4 = *local_78;
    FVar17 = local_50;
    if (*(ForElementType<FFileIoStoreCompressedBlock_*> *)((longlong)local_50 + 0x40) !=
        (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
      FVar17 = *(ForElementType<FFileIoStoreCompressedBlock_*> *)((longlong)local_50 + 0x40);
    }
    FVar16 = (ForElementType<FFileIoStoreCompressedBlock_*>)((longlong)FVar17 + (longlong)iVar4 * 8)
    ;
    while( true ) {
      piVar2 = local_78;
      if (*local_78 != iVar4) {
        local_85 = 0;
        `TCheckedPointerIterator<FFileIoStoreCompressedBlock_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_85);
      }
      pFVar10 = local_68;
      if (FVar17 == FVar16) break;
      lVar7 = *(longlong *)FVar17;
      if ((*(char *)(lVar7 + 0xf1) == '\0') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompressedBlock->bCancelled",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                              ,0x485,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      iVar5 = *(int *)(lVar7 + 0xa0);
      puVar15 = (undefined8 *)(lVar7 + 0x58);
      if (*(undefined8 **)(lVar7 + 0x98) != (undefined8 *)0x0) {
        puVar15 = *(undefined8 **)(lVar7 + 0x98);
      }
      puVar18 = puVar15 + (longlong)iVar5 * 4;
      local_78 = piVar2;
      while( true ) {
        if (*(int *)(lVar7 + 0xa0) != iVar5) {
          local_84[0] = 0;
          `TCheckedPointerIterator<FFileIoStoreBlockScatter,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_84);
        }
        if (puVar15 == puVar18) break;
        if (((*(longlong *)*puVar15 != 0) && (*(int *)(*(longlong *)*puVar15 + 0xd8) != 3)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Scatter.Request->DispatcherRequest || Scatter.Request->DispatcherRequest->IsCancelled()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                ,0x488,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        puVar15 = puVar15 + 4;
      }
      FVar17 = (ForElementType<FFileIoStoreCompressedBlock_*>)((longlong)FVar17 + 8);
    }
  } while( true );
}

// FindOrAddCompressedBlock @ 142a6ff80

FFileIoStoreCompressedBlock * __thiscall
FFileIoStoreRequestTracker::FindOrAddCompressedBlock
          (FFileIoStoreRequestTracker *this,FFileIoStoreBlockKey param_1,bool *param_2)

{
  ushort uVar1;
  FFileIoStoreRequestAllocator *pFVar2;
  FSlab *pFVar3;
  code *pcVar4;
  FElement *pFVar5;
  bool bVar6;
  FFileIoStoreCompressedBlock **ppFVar7;
  FFileIoStoreCompressedBlock *pFVar8;
  FSlab *pFVar9;
  FSlab *pFVar10;
  longlong lVar11;
  FFileIoStoreBlockKey_u_0 local_res10;
  
  *param_2 = false;
  local_res10 = param_1.field0_0x0;
  ppFVar7 = TMapBase<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>_>
            ::FindOrAddImpl<FFileIoStoreBlockKey_const_&>
                      ((TMapBase<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>_>
                        *)&this->CompressedBlocksMap,
                       param_1.field0_0x0._0_4_ + param_1.field0_0x0._4_4_ * 0x17,
                       (FFileIoStoreBlockKey *)&local_res10._s_0);
  if (*ppFVar7 != (FFileIoStoreCompressedBlock *)0x0) {
    return *ppFVar7;
  }
  pFVar2 = this->RequestAllocator;
  lVar11 = 0x1000;
  pFVar3 = (pFVar2->CompressedBlockAllocator).CurrentSlab;
  uVar1 = pFVar3->Allocated;
  pFVar3->Allocated = uVar1 + 1;
  if ((0xfff < uVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < SlabSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x36,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FFileIoStoreCompressedBlock *)(*pcVar4)();
    return pFVar8;
  }
  pFVar3 = (pFVar2->CompressedBlockAllocator).CurrentSlab;
  pFVar3->Elements[uVar1].Slab = pFVar3;
  if (((pFVar2->CompressedBlockAllocator).CurrentSlab)->Allocated == 0x1000) {
    pFVar9 = ::operator_new(0x100008);
    if (pFVar9 == (FSlab *)0x0) {
      pFVar9 = (FSlab *)0x0;
    }
    else {
      memset(&pFVar9->field_0x4,0,0x100004);
      pFVar9->Allocated = 0;
      pFVar9->Freed = 0;
      pFVar10 = pFVar9;
      do {
        pFVar10 = (FSlab *)&pFVar10->Elements[0].Slab;
        *(FSlab **)pFVar10 = (FSlab *)0x0;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    (pFVar2->CompressedBlockAllocator).CurrentSlab = pFVar9;
  }
  memset((FFileIoStoreCompressedBlock *)(pFVar3->Elements + uVar1),0,0xf8);
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x18] = 0xff;
  (pFVar5->Data).Pad[0x19] = 0xff;
  (pFVar5->Data).Pad[0x1a] = 0xff;
  (pFVar5->Data).Pad[0x1b] = 0xff;
  (pFVar5->Data).Pad[0x1c] = 0xff;
  (pFVar5->Data).Pad[0x1d] = 0xff;
  (pFVar5->Data).Pad[0x1e] = 0xff;
  (pFVar5->Data).Pad[0x1f] = 0xff;
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x20] = 0xff;
  (pFVar5->Data).Pad[0x21] = 0xff;
  (pFVar5->Data).Pad[0x22] = 0xff;
  (pFVar5->Data).Pad[0x23] = 0xff;
  (pFVar5->Data).Pad[0x24] = 0xff;
  (pFVar5->Data).Pad[0x25] = 0xff;
  (pFVar5->Data).Pad[0x26] = 0xff;
  (pFVar5->Data).Pad[0x27] = 0xff;
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x28] = 0xff;
  (pFVar5->Data).Pad[0x29] = 0xff;
  (pFVar5->Data).Pad[0x2a] = 0xff;
  (pFVar5->Data).Pad[0x2b] = 0xff;
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x54] = '\x02';
  (pFVar5->Data).Pad[0x55] = '\0';
  (pFVar5->Data).Pad[0x56] = '\0';
  (pFVar5->Data).Pad[0x57] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0xa4] = '\x02';
  (pFVar5->Data).Pad[0xa5] = '\0';
  (pFVar5->Data).Pad[0xa6] = '\0';
  (pFVar5->Data).Pad[0xa7] = '\0';
  *ppFVar7 = (FFileIoStoreCompressedBlock *)(pFVar3->Elements + uVar1);
  ((FFileIoStoreBlockKey_u_0 *)(pFVar3->Elements[uVar1].Data.Pad + 8))->_s_0 =
       (FFileIoStoreBlockKey_u_0_s_0)local_res10;
  *param_2 = true;
  return *ppFVar7;
}

// FindOrAddRawBlock @ 142a70110

FFileIoStoreReadRequest * __thiscall
FFileIoStoreRequestTracker::FindOrAddRawBlock
          (FFileIoStoreRequestTracker *this,FFileIoStoreBlockKey param_1,bool *param_2)

{
  ushort uVar1;
  FFileIoStoreRequestAllocator *pFVar2;
  FSlab *pFVar3;
  code *pcVar4;
  FElement *pFVar5;
  uint uVar6;
  bool bVar7;
  FFileIoStoreReadRequest **ppFVar8;
  FFileIoStoreReadRequest *pFVar9;
  FSlab *pFVar10;
  FSlab *pFVar11;
  FSlab *pFVar12;
  longlong lVar13;
  LARGE_INTEGER local_res8;
  FFileIoStoreBlockKey_u_0 local_res10;
  
  *param_2 = false;
  local_res10 = param_1.field0_0x0;
  ppFVar8 = TMapBase<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>_>
            ::FindOrAddImpl<FFileIoStoreBlockKey_const_&>
                      ((TMapBase<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>_>
                        *)&this->RawBlocksMap,
                       param_1.field0_0x0._0_4_ + param_1.field0_0x0._4_4_ * 0x17,
                       (FFileIoStoreBlockKey *)&local_res10._s_0);
  if (*ppFVar8 != (FFileIoStoreReadRequest *)0x0) {
    return *ppFVar8;
  }
  pFVar2 = this->RequestAllocator;
  lVar13 = 0x1000;
  pFVar2->LiveReadRequestsCount = pFVar2->LiveReadRequestsCount + 1;
  pFVar3 = (pFVar2->ReadRequestAllocator).CurrentSlab;
  uVar1 = pFVar3->Allocated;
  pFVar3->Allocated = uVar1 + 1;
  if ((0xfff < uVar1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < SlabSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x36,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FFileIoStoreReadRequest *)(*pcVar4)();
    return pFVar9;
  }
  pFVar3 = (pFVar2->ReadRequestAllocator).CurrentSlab;
  pFVar3->Elements[uVar1].Slab = pFVar3;
  if (((pFVar2->ReadRequestAllocator).CurrentSlab)->Allocated == 0x1000) {
    pFVar10 = ::operator_new(0xd8008);
    pFVar12 = (FSlab *)0x0;
    if (pFVar10 != (FSlab *)0x0) {
      memset(&pFVar10->field_0x4,0,0xd8004);
      pFVar10->Allocated = 0;
      pFVar10->Freed = 0;
      pFVar11 = pFVar10;
      do {
        pFVar11 = (FSlab *)&pFVar11->Elements[0].Slab;
        *(FSlab **)pFVar11 = (FSlab *)0x0;
        lVar13 = lVar13 + -1;
        pFVar12 = pFVar10;
      } while (lVar13 != 0);
    }
    (pFVar2->ReadRequestAllocator).CurrentSlab = pFVar12;
  }
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x80] = '\0';
  (pFVar5->Data).Pad[0x81] = '\0';
  (pFVar5->Data).Pad[0x82] = '\0';
  (pFVar5->Data).Pad[0x83] = '\0';
  (pFVar5->Data).Pad[0x84] = '\0';
  (pFVar5->Data).Pad[0x85] = '\0';
  (pFVar5->Data).Pad[0x86] = '\0';
  (pFVar5->Data).Pad[0x87] = '\0';
  ((FFileIoStoreReadRequest *)(pFVar3->Elements + uVar1))->Next = (FFileIoStoreReadRequest *)0x0;
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[8] = '\0';
  (pFVar5->Data).Pad[9] = '\0';
  (pFVar5->Data).Pad[10] = '\0';
  (pFVar5->Data).Pad[0xb] = '\0';
  (pFVar5->Data).Pad[0xc] = '\0';
  (pFVar5->Data).Pad[0xd] = '\0';
  (pFVar5->Data).Pad[0xe] = '\0';
  (pFVar5->Data).Pad[0xf] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x10] = '\0';
  (pFVar5->Data).Pad[0x11] = '\0';
  (pFVar5->Data).Pad[0x12] = '\0';
  (pFVar5->Data).Pad[0x13] = '\0';
  (pFVar5->Data).Pad[0x14] = '\0';
  (pFVar5->Data).Pad[0x15] = '\0';
  (pFVar5->Data).Pad[0x16] = '\0';
  (pFVar5->Data).Pad[0x17] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x18] = 0xff;
  (pFVar5->Data).Pad[0x19] = 0xff;
  (pFVar5->Data).Pad[0x1a] = 0xff;
  (pFVar5->Data).Pad[0x1b] = 0xff;
  (pFVar5->Data).Pad[0x1c] = 0xff;
  (pFVar5->Data).Pad[0x1d] = 0xff;
  (pFVar5->Data).Pad[0x1e] = 0xff;
  (pFVar5->Data).Pad[0x1f] = 0xff;
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x20] = 0xff;
  (pFVar5->Data).Pad[0x21] = 0xff;
  (pFVar5->Data).Pad[0x22] = 0xff;
  (pFVar5->Data).Pad[0x23] = 0xff;
  (pFVar5->Data).Pad[0x24] = 0xff;
  (pFVar5->Data).Pad[0x25] = 0xff;
  (pFVar5->Data).Pad[0x26] = 0xff;
  (pFVar5->Data).Pad[0x27] = 0xff;
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x30] = '\0';
  (pFVar5->Data).Pad[0x31] = '\0';
  (pFVar5->Data).Pad[0x32] = '\0';
  (pFVar5->Data).Pad[0x33] = '\0';
  (pFVar5->Data).Pad[0x34] = '\0';
  (pFVar5->Data).Pad[0x35] = '\0';
  (pFVar5->Data).Pad[0x36] = '\0';
  (pFVar5->Data).Pad[0x37] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x38] = '\0';
  (pFVar5->Data).Pad[0x39] = '\0';
  (pFVar5->Data).Pad[0x3a] = '\0';
  (pFVar5->Data).Pad[0x3b] = '\0';
  (pFVar5->Data).Pad[0x3c] = '\0';
  (pFVar5->Data).Pad[0x3d] = '\0';
  (pFVar5->Data).Pad[0x3e] = '\0';
  (pFVar5->Data).Pad[0x3f] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x88] = '\0';
  (pFVar5->Data).Pad[0x89] = '\0';
  (pFVar5->Data).Pad[0x8a] = '\0';
  (pFVar5->Data).Pad[0x8b] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x8c] = '\b';
  (pFVar5->Data).Pad[0x8d] = '\0';
  (pFVar5->Data).Pad[0x8e] = '\0';
  (pFVar5->Data).Pad[0x8f] = '\0';
  uVar6 = FFileIoStoreReadRequest::NextSequence + 1;
  *(uint *)(pFVar3->Elements[uVar1].Data.Pad + 0x90) = FFileIoStoreReadRequest::NextSequence;
  FFileIoStoreReadRequest::NextSequence = uVar6;
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0x94] = '\0';
  (pFVar5->Data).Pad[0x95] = '\0';
  (pFVar5->Data).Pad[0x96] = '\0';
  (pFVar5->Data).Pad[0x97] = '\0';
  QueryPerformanceCounter(&local_res8);
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0xa0] = '\0';
  (pFVar5->Data).Pad[0xa1] = '\0';
  (pFVar5->Data).Pad[0xa2] = '\0';
  (pFVar5->Data).Pad[0xa3] = '\0';
  (pFVar5->Data).Pad[0xa4] = '\0';
  (pFVar5->Data).Pad[0xa5] = '\0';
  (pFVar5->Data).Pad[0xa6] = '\0';
  (pFVar5->Data).Pad[0xa7] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0xa8] = '\0';
  (pFVar5->Data).Pad[0xa9] = '\0';
  (pFVar5->Data).Pad[0xaa] = '\0';
  (pFVar5->Data).Pad[0xab] = '\0';
  (pFVar5->Data).Pad[0xac] = '\0';
  (pFVar5->Data).Pad[0xad] = '\0';
  (pFVar5->Data).Pad[0xae] = '\0';
  (pFVar5->Data).Pad[0xaf] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0xb0] = '\0';
  (pFVar5->Data).Pad[0xb1] = '\0';
  (pFVar5->Data).Pad[0xb2] = '\0';
  (pFVar5->Data).Pad[0xb3] = '\0';
  (pFVar5->Data).Pad[0xb4] = '\0';
  (pFVar5->Data).Pad[0xb5] = '\0';
  (pFVar5->Data).Pad[0xb6] = '\0';
  (pFVar5->Data).Pad[0xb7] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0xb8] = '\0';
  (pFVar5->Data).Pad[0xb9] = '\0';
  (pFVar5->Data).Pad[0xba] = '\0';
  (pFVar5->Data).Pad[0xbb] = '\0';
  (pFVar5->Data).Pad[0xbc] = '\0';
  (pFVar5->Data).Pad[0xbd] = '\0';
  (pFVar5->Data).Pad[0xbe] = '\0';
  (pFVar5->Data).Pad[0xbf] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[0xc0] = '\0';
  (pFVar5->Data).Pad[0xc1] = '\0';
  (pFVar5->Data).Pad[0xc2] = '\0';
  (pFVar5->Data).Pad[0xc3] = '\0';
  pFVar3->Elements[uVar1].Data.Pad[0xc4] = '\0';
  pFVar3->Elements[uVar1].Data.Pad[0xc5] = '\0';
  pFVar3->Elements[uVar1].Data.Pad[0xc6] = '\0';
  pFVar5 = pFVar3->Elements + uVar1;
  (pFVar5->Data).Pad[200] = '\0';
  (pFVar5->Data).Pad[0xc9] = '\0';
  (pFVar5->Data).Pad[0xca] = '\0';
  (pFVar5->Data).Pad[0xcb] = '\0';
  (pFVar5->Data).Pad[0xcc] = '\0';
  (pFVar5->Data).Pad[0xcd] = '\0';
  (pFVar5->Data).Pad[0xce] = '\0';
  (pFVar5->Data).Pad[0xcf] = '\0';
  *(LARGE_INTEGER *)(pFVar3->Elements[uVar1].Data.Pad + 0x98) = local_res8;
  *ppFVar8 = (FFileIoStoreReadRequest *)(pFVar3->Elements + uVar1);
  ((FFileIoStoreBlockKey_u_0 *)(pFVar3->Elements[uVar1].Data.Pad + 0x28))->_s_0 =
       (FFileIoStoreBlockKey_u_0_s_0)local_res10;
  *param_2 = true;
  return *ppFVar8;
}

// GetLiveReadRequestsCount @ 142a754b0

long64 __thiscall
FFileIoStoreRequestTracker::GetLiveReadRequestsCount(FFileIoStoreRequestTracker *this)

{
  return this->RequestAllocator->LiveReadRequestsCount;
}

// ReleaseIoRequestReferences @ 142a96130

void __thiscall
FFileIoStoreRequestTracker::ReleaseIoRequestReferences
          (FFileIoStoreRequestTracker *this,FFileIoStoreResolvedRequest *param_1)

{
  uint *puVar1;
  int *piVar2;
  long64 *plVar3;
  int *piVar4;
  int iVar5;
  FFileIoStoreReadRequestLink *pFVar6;
  FFileIoStoreReadRequest *pFVar7;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar8;
  longlong lVar9;
  short *psVar10;
  FFileIoStoreRequestAllocator *pFVar11;
  FFileIoStoreReadRequestLink *pFVar12;
  FIoRequestImpl *pFVar13;
  code *pcVar14;
  FFileIoStoreReadRequestLink *pFVar15;
  bool bVar16;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar17;
  FFileIoStoreRequestTracker *local_res8;
  FFileIoStoreResolvedRequest *local_res10;
  
  pFVar15 = param_1->ReadRequestsHead;
  local_res8 = this;
  local_res10 = param_1;
  while (pFVar15 != (FFileIoStoreReadRequestLink *)0x0) {
    pFVar6 = pFVar15->Next;
    if ((pFVar15->ReadRequest->RefCount == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Link->ReadRequest.RefCount > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                            ,0x4ae,L""), bVar16)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    puVar1 = &pFVar15->ReadRequest->RefCount;
    *puVar1 = *puVar1 - 1;
    if (*puVar1 == 0) {
      pFVar7 = pFVar15->ReadRequest;
      FVar17 = (ForElementType<FFileIoStoreCompressedBlock_*>)&pFVar7->CompressedBlocks;
      FVar8 = (pFVar7->CompressedBlocks).AllocatorInstance.SecondaryData;
      piVar4 = &(pFVar7->CompressedBlocks).ArrayNum;
      iVar5 = *piVar4;
      if (FVar8 != (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
        FVar17 = FVar8;
      }
      FVar8 = (ForElementType<FFileIoStoreCompressedBlock_*>)
              ((longlong)FVar17 + (longlong)iVar5 * 8);
      while( true ) {
        if (*piVar4 != iVar5) {
          local_res8 = (FFileIoStoreRequestTracker *)((ulonglong)local_res8 & 0xffffffffffffff00);
          `TCheckedPointerIterator<FFileIoStoreCompressedBlock_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (FVar17 == FVar8) break;
        lVar9 = *(longlong *)FVar17;
        if ((*(int *)(lVar9 + 0x2c) == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("CompressedBlock->RefCount > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                ,0x4b3,L""), bVar16)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        piVar2 = (int *)(lVar9 + 0x2c);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          if (*(void **)(lVar9 + 0x98) != (void *)0x0) {
            FMemory::Free(*(void **)(lVar9 + 0x98));
          }
          if (*(void **)(lVar9 + 0x48) != (void *)0x0) {
            FMemory::Free(*(void **)(lVar9 + 0x48));
          }
          psVar10 = *(short **)(lVar9 + 0xf8);
          psVar10[1] = psVar10[1] + 1;
          if (psVar10[1] == 0x1000) {
            if ((*psVar10 != 0x1000) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Slab->Freed == Slab->Allocated",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                    ,0x48,L""), bVar16)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            ::operator_delete(psVar10,0x100008);
          }
        }
        FVar17 = (ForElementType<FFileIoStoreCompressedBlock_*>)((longlong)FVar17 + 8);
      }
      pFVar7 = pFVar15->ReadRequest;
      pFVar11 = this->RequestAllocator;
      FVar17 = (pFVar7->CompressedBlocks).AllocatorInstance.SecondaryData;
      if (FVar17 != (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
        FMemory::Free((void *)FVar17);
      }
      pFVar7 = pFVar7[1].Next;
      psVar10 = (short *)((longlong)&pFVar7->Next + 2);
      *psVar10 = *psVar10 + 1;
      if (*(short *)((longlong)&pFVar7->Next + 2) == 0x1000) {
        if ((*(short *)&pFVar7->Next != 0x1000) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Slab->Freed == Slab->Allocated",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                ,0x48,L""), bVar16)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        ::operator_delete(pFVar7,0xd8008);
      }
      plVar3 = &pFVar11->LiveReadRequestsCount;
      *plVar3 = *plVar3 + -1;
    }
    pFVar12 = pFVar15[1].Next;
    psVar10 = (short *)((longlong)&pFVar12->Next + 2);
    *psVar10 = *psVar10 + 1;
    pFVar15 = pFVar6;
    if (*(short *)((longlong)&pFVar12->Next + 2) == 0x1000) {
      if ((*(short *)&pFVar12->Next != 0x1000) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Slab->Freed == Slab->Allocated",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                              ,0x48,L""), bVar16)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      ::operator_delete(pFVar12,0x18008);
    }
  }
  pFVar13 = local_res10[1].DispatcherRequest;
  local_res10->ReadRequestsHead = (FFileIoStoreReadRequestLink *)0x0;
  local_res10->ReadRequestsTail = (FFileIoStoreReadRequestLink *)0x0;
  psVar10 = (short *)((longlong)&pFVar13->_padding_ + 2);
  *psVar10 = *psVar10 + 1;
  if (*(short *)((longlong)&pFVar13->_padding_ + 2) != 0x1000) {
    return;
  }
  if (((short)pFVar13->_padding_ != 0x1000) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Slab->Freed == Slab->Allocated",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                          ,0x48,L""), bVar16)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  ::operator_delete(pFVar13,0x48008);
  return;
}

// RemoveCompressedBlock @ 142a97a20

void __thiscall
FFileIoStoreRequestTracker::RemoveCompressedBlock
          (FFileIoStoreRequestTracker *this,FFileIoStoreCompressedBlock *param_1,bool param_2)

{
  TMap<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FFileIoStoreBlockKey_u_0 local_res10;
  
  if ((param_1->bCancelled == false) || (param_2)) {
    this_00 = &this->CompressedBlocksMap;
    local_res10 = (FFileIoStoreBlockKey_u_0)
                  *(FFileIoStoreBlockKey_u_0 *)&(param_1->Key).field0_0x0._s_0;
    if (*(int *)&(this->CompressedBlocksMap).field_0x8 !=
        *(int *)&(this->CompressedBlocksMap).field_0x34) {
      TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FFileIoStoreBlockKey>
                ((TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>,FDefaultSetAllocator>
                  *)this_00,local_res10._s_0.BlockIndex * 0x17 + local_res10._s_0.FileIndex,
                 (FFileIoStoreBlockKey *)&local_res10._s_0);
    }
    if (*(int *)&(this->CompressedBlocksMap).field_0x8 ==
        *(int *)&(this->CompressedBlocksMap).field_0x34) {
      for (lVar3 = 0x3f; 0x20fUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
      iVar5 = 1 << ((byte)lVar3 & 0x1f);
      iVar2 = *(int *)&(this->CompressedBlocksMap).field_0x48;
      if ((iVar2 < iVar5) || (iVar5 < iVar2)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
        TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar1 = &(this->CompressedBlocksMap).field_0xc;
      *(undefined4 *)&(this->CompressedBlocksMap).field_0x8 = 0;
      if (*(int *)puVar1 != 0x200) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0x200,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->CompressedBlocksMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->CompressedBlocksMap).field_0x34 = 0;
      *(undefined4 *)&(this->CompressedBlocksMap).field_0x28 = 0;
      *(undefined4 *)&(this->CompressedBlocksMap).field_0x2c = 0x200;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CompressedBlocksMap).field_0x10,0);
      if (bVar4) {
        *(int *)&(this->CompressedBlocksMap).field_0x48 = iVar5;
        TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
  }
  return;
}

// RemoveRawBlock @ 142a97ef0

void __thiscall
FFileIoStoreRequestTracker::RemoveRawBlock
          (FFileIoStoreRequestTracker *this,FFileIoStoreReadRequest *param_1,bool param_2)

{
  TMap<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FFileIoStoreBlockKey_u_0 local_res10;
  
  if ((param_1->bCancelled == false) || (param_2)) {
    this_00 = &this->RawBlocksMap;
    local_res10 = (FFileIoStoreBlockKey_u_0)
                  *(FFileIoStoreBlockKey_u_0 *)&(param_1->Key).field0_0x0._s_0;
    if (*(int *)&(this->RawBlocksMap).field_0x8 != *(int *)&(this->RawBlocksMap).field_0x34) {
      TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FFileIoStoreBlockKey>
                ((TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>,FDefaultSetAllocator>
                  *)this_00,local_res10._s_0.BlockIndex * 0x17 + local_res10._s_0.FileIndex,
                 (FFileIoStoreBlockKey *)&local_res10._s_0);
    }
    if (*(int *)&(this->RawBlocksMap).field_0x8 == *(int *)&(this->RawBlocksMap).field_0x34) {
      for (lVar3 = 0x3f; 0x8fUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
      iVar5 = 1 << ((byte)lVar3 & 0x1f);
      iVar2 = *(int *)&(this->RawBlocksMap).field_0x48;
      if ((iVar2 < iVar5) || (iVar5 < iVar2)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
        TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar1 = &(this->RawBlocksMap).field_0xc;
      *(undefined4 *)&(this->RawBlocksMap).field_0x8 = 0;
      if (*(int *)puVar1 != 0x80) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0x80,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->RawBlocksMap).field_0x34 = 0;
      *(undefined4 *)&(this->RawBlocksMap).field_0x30 = 0xffffffff;
      iVar2 = *(int *)&(this->RawBlocksMap).field_0x2c;
      *(undefined4 *)&(this->RawBlocksMap).field_0x28 = 0;
      if ((iVar2 < 0x80) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->RawBlocksMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RawBlocksMap).field_0x10,0);
      }
      if (bVar4) {
        *(int *)&(this->RawBlocksMap).field_0x48 = iVar5;
        TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*,0>,FDefaultSetAllocator>
                  *)this_00);
      }
    }
  }
  return;
}

// UpdatePriorityForIoRequest @ 142aab440

void __thiscall
FFileIoStoreRequestTracker::UpdatePriorityForIoRequest
          (FFileIoStoreRequestTracker *this,FFileIoStoreResolvedRequest *param_1)

{
  FFileIoStoreReadRequest **ppFVar1;
  bool bVar2;
  FFileIoStoreReadRequestLink *pFVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1173,"RequestTrackerUpdatePriorityForIoRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
               ,0x495);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1173);
  }
  pFVar3 = param_1->ReadRequestsHead;
  bVar2 = false;
  if (pFVar3 != (FFileIoStoreReadRequestLink *)0x0) {
    do {
      ppFVar1 = &pFVar3->ReadRequest;
      pFVar3 = pFVar3->Next;
      if ((*ppFVar1)->Priority < param_1->Priority) {
        (*ppFVar1)->Priority = param_1->Priority;
        bVar2 = true;
      }
    } while (pFVar3 != (FFileIoStoreReadRequestLink *)0x0);
    if (bVar2) {
      FFileIoStoreRequestQueue::UpdateOrder(this->RequestQueue);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

