// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FIoQueue @ 14147e300

FIoQueue * __thiscall UE::FIoQueue::FIoQueue(FIoQueue *this,FPlatformIoDispatcherStats *param_1)

{
  this->Stats = param_1;
  (this->Heap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Heap).ArrayNum = 0;
  (this->Heap).ArrayMax = 0;
  (this->CancelledHeap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CancelledHeap).ArrayNum = 0;
  (this->CancelledHeap).ArrayMax = 0;
  (this->PrioQueues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrioQueues).ArrayNum = 0;
  (this->PrioQueues).ArrayMax = 0;
  (this->LastFileOffset).FileHandle.Handle = 0;
  (this->LastFileOffset).Priority = 0;
  this->Mutex = (atomic<unsigned_char>)0x0;
  this->bSortByOffset = false;
  this->bReprioritizeCancelled = false;
  (this->LastFileOffset).FileOffset = 0xffffffffffffffff;
  return this;
}

// AddToPrioQueue @ 141485c40

/* WARNING: Removing unreachable block (ram,0x000141485e35) */

void __thiscall UE::FIoQueue::AddToPrioQueue(FIoQueue *this,FIoFileBlockRequest *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FFileOffset *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FIoFileBlockRequest *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  int local_8c;
  ulong64 local_88;
  ulong64 uStack_80;
  int local_78;
  undefined4 uStack_74;
  ulong64 local_70;
  ulong64 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  FFileOffset local_40;
  
  uVar7 = (this->PrioQueues).ArrayNum;
  pFVar10 = (this->PrioQueues).AllocatorInstance.Data;
  iVar6 = param_1->Priority;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = uVar7;
  uVar14 = uVar12;
  if ((int)uVar7 < 1) {
LAB_141485cac:
    if ((this->PrioQueues).ArrayNum <= (int)uVar14) goto LAB_141485d12;
    uVar11 = uVar12;
    if ((int)uVar14 < (int)uVar7) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10 = (this->PrioQueues).AllocatorInstance.Data;
    iVar6 = param_1->Priority;
    if (*(int *)(pFVar10 + (ulonglong)uVar14 * 0x28 + 0x24) != iVar6) goto LAB_141485d12;
LAB_141485e3e:
    if ((int)uVar14 < (this->PrioQueues).ArrayNum) goto LAB_141485e6a;
  }
  else {
    do {
      iVar2 = (uVar11 >> 1) + uVar14;
      if (*(int *)(pFVar10 + (longlong)iVar2 * 0x28 + 0x24) < iVar6) {
        uVar14 = (uVar11 & 1) + iVar2;
      }
      uVar4 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar4 != 0);
    if (-1 < (int)uVar14) goto LAB_141485cac;
LAB_141485d12:
    local_b0 = 0;
    local_a8 = 0;
    local_90 = 0xffffffff;
    local_a0 = 0;
    uStack_98 = 0;
    local_8c = iVar6;
    if (((pFVar10 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 <
         pFVar10 + (longlong)(this->PrioQueues).ArrayMax * 0x28)) &&
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
    iVar6 = (this->PrioQueues).ArrayNum;
    piVar1 = &(this->PrioQueues).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->PrioQueues).AllocatorInstance,piVar1);
    }
    (this->PrioQueues).ArrayNum = iVar6 + 1;
    pFVar10 = (this->PrioQueues).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x28;
    memmove(pFVar10 + 0x28,pFVar10,(longlong)(int)(iVar6 - uVar14) * 0x28);
    pFVar10 = (this->PrioQueues).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x28;
    *(undefined8 *)pFVar10 = 0;
    *(undefined8 *)pFVar10 = local_b0;
    *(undefined4 *)(pFVar10 + 8) = (undefined4)local_a8;
    *(undefined4 *)(pFVar10 + 0xc) = local_a8._4_4_;
    *(undefined8 *)(pFVar10 + 0x10) = local_a0;
    *(undefined8 *)(pFVar10 + 0x18) = uStack_98;
    *(undefined4 *)(pFVar10 + 0x20) = local_90;
    *(int *)(pFVar10 + 0x24) = local_8c;
    uStack_98 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    if (-1 < (int)uVar14) goto LAB_141485e3e;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("PrioQueues.IsValidIndex(QueueIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                     ,0x91,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_141485e6a:
  iVar6 = (this->PrioQueues).ArrayNum;
  pFVar10 = (this->PrioQueues).AllocatorInstance.Data;
  if ((iVar6 != 0) && (iVar6 = iVar6 + -1, iVar6 != 0)) {
    pFVar9 = pFVar10 + 0x24;
    pFVar10 = pFVar10 + 0x4c;
    do {
      if (*(int *)pFVar10 < *(int *)pFVar9) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSortedBy(PrioQueues, QueueToPriority, TLess<int32>())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                           ,0x92,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      pFVar9 = pFVar9 + 0x28;
      pFVar10 = pFVar10 + 0x28;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar7 = 0;
  if ((int)uVar14 < (this->PrioQueues).ArrayNum) {
    uVar7 = ~uVar14 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = (this->PrioQueues).AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar10 + (longlong)(int)uVar14 * 0x28 + 8);
  pFVar10 = pFVar10 + (longlong)(int)uVar14 * 0x28;
  local_88 = (param_1->FileHandle).Handle;
  pFVar9 = *(FScriptContainerElement **)&pFVar10->field_0x0;
  uStack_80 = param_1->FileOffset;
  local_78 = param_1->Priority;
  local_60 = CONCAT44(uStack_74,local_78);
  local_70 = local_88;
  uStack_68 = uStack_80;
  if (0 < (int)uVar7) {
    do {
      uVar11 = uVar7 >> 1;
      pFVar8 = ToFileOffset(&local_40,
                            *(FIoFileBlockRequest **)(pFVar9 + (longlong)(int)(uVar11 + uVar13) * 8)
                           );
      local_58 = (pFVar8->FileHandle).Handle;
      uStack_50 = pFVar8->FileOffset;
      local_48 = *(undefined8 *)&pFVar8->Priority;
      bVar5 = local_70 < local_58;
      if (local_70 == local_58) {
        bVar5 = uStack_68 < uStack_50;
      }
      uVar12 = uVar13;
      if (!bVar5) {
        uVar12 = uVar11 + uVar13 + (uVar7 & 1);
      }
      uVar7 = uVar11;
      uVar13 = uVar12;
    } while (uVar11 != 0);
  }
  if ((*(int *)(pFVar10 + 0x24) != param_1->Priority) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrioQueue.Priority == Request.Priority",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x96,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_b8 = param_1;
  if (((*(FScriptContainerElement **)&pFVar10->field_0x0 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 <
       *(FScriptContainerElement **)&pFVar10->field_0x0 + (longlong)*(int *)(pFVar10 + 0xc) * 8)) &&
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
  iVar6 = *(int *)&pFVar10[8].field_0x0;
  if (iVar6 == *(int *)(pFVar10 + 0xc)) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 0xc));
  }
  *(int *)&pFVar10[8].field_0x0 = iVar6 + 1;
  memmove(*(FScriptContainerElement **)&pFVar10->field_0x0 + (longlong)(int)uVar12 * 8 + 8,
          *(FScriptContainerElement **)&pFVar10->field_0x0 + (longlong)(int)uVar12 * 8,
          (longlong)(int)(iVar6 - uVar12) << 3);
  *(FIoFileBlockRequest **)
   (*(FScriptContainerElement **)&pFVar10->field_0x0 + (longlong)(int)uVar12 * 8) = local_b8;
  if (((param_1->Next != (FIoFileBlockRequest *)0x0) ||
      (param_1->Prev != (FIoFileBlockRequest *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr && TypeTraits::GetPrev(Element) == nullptr"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,0x143,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(FScriptContainerElement **)&pFVar10[0x18].field_0x0 == (FScriptContainerElement *)0x0) {
    if ((*(FScriptContainerElement **)&pFVar10[0x10].field_0x0 != (FScriptContainerElement *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x14e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(FIoFileBlockRequest **)&pFVar10[0x10].field_0x0 = param_1;
  }
  else {
    if ((*(FScriptContainerElement **)&pFVar10[0x10].field_0x0 == (FScriptContainerElement *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x147,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(FIoFileBlockRequest **)(*(FScriptContainerElement **)&pFVar10[0x18].field_0x0 + 0x50) =
         param_1;
    param_1->Prev = *(FIoFileBlockRequest **)&pFVar10[0x18].field_0x0;
  }
  *(FIoFileBlockRequest **)&pFVar10[0x18].field_0x0 = param_1;
  *(undefined4 *)&pFVar10[0x20].field_0x0 = 0xffffffff;
  return;
}

// Dequeue @ 141491000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FIoFileBlockRequest * __thiscall UE::FIoQueue::Dequeue(FIoQueue *this)

{
  FIoFileBlockRequest *local_res10 [3];
  
  local_res10[0] = GetCancelled(this,true);
  if (local_res10[0] == (FIoFileBlockRequest *)0x0) {
    if (this->bSortByOffset == false) {
      if ((this->Heap).ArrayNum != 0) {
        TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_>::
        HeapPop<bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)>
                  (&this->Heap,local_res10,SeqNoLess,No);
      }
    }
    else {
      local_res10[0] = GetByOffset(this,true);
    }
    if (local_res10[0] == (FIoFileBlockRequest *)0x0) {
      return (FIoFileBlockRequest *)0x0;
    }
  }
  local_res10[0]->QueueStatus = Dequeued;
  return local_res10[0];
}

// Enqueue @ 141493230

void __thiscall
UE::FIoQueue::Enqueue(FIoQueue *this,TIntrusiveList<UE::FIoFileBlockRequest> *param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned___int64> *paVar3;
  FIoFileBlockRequest *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  FPlatformIoDispatcherStats *pFVar8;
  ulong64 uVar9;
  code *pcVar10;
  bool bVar11;
  ushort uVar12;
  int iVar13;
  atomic<unsigned_int> aVar14;
  longlong lVar15;
  FIoFileBlockRequest *local_18 [2];
  
  do {
    local_18[0] = param_1->Head;
    if (local_18[0] == (FIoFileBlockRequest *)0x0) {
      return;
    }
    pFVar4 = local_18[0]->Next;
    param_1->Head = pFVar4;
    if (pFVar4 == (FIoFileBlockRequest *)0x0) {
      param_1->Tail = (FIoFileBlockRequest *)0x0;
    }
    local_18[0]->Next = (FIoFileBlockRequest *)0x0;
    if ((local_18[0]->QueueStatus != None) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Request->QueueStatus == FIoFileBlockRequest::EQueueStatus::None",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                            ,0x2a,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_18[0]->QueueStatus = Enqueued;
    if (this->bSortByOffset == false) {
      pFVar5 = (this->Heap).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar5 + (longlong)(this->Heap).ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = (this->Heap).ArrayNum;
      piVar1 = &(this->Heap).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->Heap).AllocatorInstance,piVar1);
      }
      (this->Heap).ArrayNum = iVar13 + 1;
      *(FIoFileBlockRequest **)((this->Heap).AllocatorInstance.Data + (longlong)iVar13 * 8) =
           local_18[0];
      pFVar5 = (this->Heap).AllocatorInstance.Data;
      iVar13 = (this->Heap).ArrayNum + -1;
      while (0 < iVar13) {
        lVar15 = (longlong)iVar13;
        iVar13 = (iVar13 + -1) / 2;
        lVar6 = *(longlong *)(pFVar5 + (longlong)iVar13 * 8);
        lVar7 = *(longlong *)(pFVar5 + lVar15 * 8);
        if (*(int *)(lVar7 + 0xb4) == *(int *)(lVar6 + 0xb4)) {
          bVar11 = *(uint *)(lVar7 + 0xa8) < *(uint *)(lVar6 + 0xa8);
        }
        else {
          bVar11 = *(int *)(lVar6 + 0xb4) < *(int *)(lVar7 + 0xb4);
        }
        if (!bVar11) break;
        *(longlong *)(pFVar5 + lVar15 * 8) = lVar6;
        *(longlong *)(pFVar5 + (longlong)iVar13 * 8) = lVar7;
      }
    }
    else {
      AddToPrioQueue(this,local_18[0]);
    }
    pFVar8 = this->Stats;
    uVar9 = local_18[0]->Size;
    LOCK();
    paVar3 = &(pFVar8->Stats).QueuedFilesystemReadBytes;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + uVar9);
    UNLOCK();
    LOCK();
    paVar3 = &(pFVar8->Stats).QueuedFilesystemReads;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
    UNLOCK();
    if (uVar9 != 0) {
      LOCK();
      (pFVar8->Stats).QueuedReadRequestsSizeCounter.Value =
           (atomic<__int64>)((longlong)(pFVar8->Stats).QueuedReadRequestsSizeCounter.Value + uVar9);
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if ((pFVar8->Stats).QueuedReadRequestsSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
          uVar12 = FCountersTrace::OutputInitCounter
                             ((pFVar8->Stats).QueuedReadRequestsSizeCounter.CounterName,
                              TraceCounterType_Int,
                              (pFVar8->Stats).QueuedReadRequestsSizeCounter.CounterFlags & 0xf);
          paVar2 = &(pFVar8->Stats).QueuedReadRequestsSizeCounter.CounterId;
          LOCK();
          if (*paVar2 == (atomic<unsigned_int>)0x0) {
            aVar14._2_2_ = 0;
            aVar14._0_2_ = uVar12;
            *paVar2 = aVar14;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (SUB42((pFVar8->Stats).QueuedReadRequestsSizeCounter.CounterId,0),
                   (long64)(pFVar8->Stats).QueuedReadRequestsSizeCounter.Value);
      }
    }
  } while( true );
}

// FileOffsetLess @ 1414953f0

bool __cdecl UE::FIoQueue::FileOffsetLess(FFileOffset *param_1,FFileOffset *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar1 = (param_2->FileHandle).Handle;
  uVar2 = (param_1->FileHandle).Handle;
  bVar3 = uVar2 < uVar1;
  if (uVar2 == uVar1) {
    bVar3 = param_1->FileOffset < param_2->FileOffset;
  }
  return bVar3;
}

// GetByOffset @ 141497590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FIoFileBlockRequest * __thiscall
UE::FIoQueue::GetByOffset(FIoQueue *this,FPrioQueue *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  FIoFileBlockRequest *pFVar7;
  longlong lVar8;
  FFileOffset *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  double dVar16;
  LARGE_INTEGER local_res20;
  undefined8 local_58;
  FFileOffset local_50;
  
  if ((((param_1->ByOffset).ArrayNum == 0) ||
      ((param_1->BySequence).Head == (FIoFileBlockRequest *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PrioQueue.ByOffset.IsEmpty() && !PrioQueue.BySequence.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0xaf,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FIoFileBlockRequest *)(*pcVar4)();
    return pFVar7;
  }
  uVar10 = param_1->PeekIndex;
  uVar12 = 0;
  if (uVar10 == 0xffffffff) {
    bVar6 = false;
    if (0 < GIoDispatcherRequestLatencyCircuitBreakerMS) {
      lVar8 = 0;
      dVar16 = ((double)GIoDispatcherRequestLatencyCircuitBreakerMS * __real_408f400000000000) /
               FGenericPlatformTime::SecondsPerCycle64;
      if ((__real_43e0000000000000 <= dVar16) &&
         (dVar16 = dVar16 - __real_43e0000000000000, dVar16 < __real_43e0000000000000)) {
        lVar8 = -0x8000000000000000;
      }
      QueryPerformanceCounter(&local_res20);
      bVar6 = (ulonglong)((longlong)dVar16 + lVar8) <=
              local_res20.QuadPart - ((param_1->BySequence).Head)->TimeCreated;
    }
    if ((((this->LastFileOffset).FileHandle.Handle == 0) || (bVar6)) ||
       ((GIoDispatcherMaintainSortingOnPriorityChange == 0 &&
        ((this->LastFileOffset).Priority != param_1->Priority)))) {
LAB_141497783:
      pFVar1 = (param_1->ByOffset).AllocatorInstance.Data;
      for (pFVar11 = pFVar1; pFVar11 != pFVar1 + (longlong)(param_1->ByOffset).ArrayNum * 8;
          pFVar11 = pFVar11 + 8) {
        if (*(FIoFileBlockRequest **)pFVar11 == (param_1->BySequence).Head) {
          uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar1 >> 3);
          uVar14 = 0;
          if ((int)uVar10 < (param_1->ByOffset).ArrayNum) {
            uVar14 = ~uVar10 >> 0x1f;
          }
          if (uVar14 != 0) goto LAB_1414977f2;
          goto LAB_1414977bc;
        }
      }
      uVar10 = 0xffffffff;
LAB_1414977bc:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FIoFileBlockRequest *)(*pcVar4)();
        return pFVar7;
      }
LAB_1414977f2:
      if ((*(FIoFileBlockRequest **)
            ((param_1->ByOffset).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) !=
           (param_1->BySequence).Head) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrioQueue.ByOffset[RequestIndex] == PrioQueue.BySequence.PeekHead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                             ,0xd4,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FIoFileBlockRequest *)(*pcVar4)();
        return pFVar7;
      }
      goto LAB_141497828;
    }
    uVar14 = (param_1->ByOffset).ArrayNum;
    pFVar1 = (param_1->ByOffset).AllocatorInstance.Data;
    if ((int)uVar14 < 1) {
      uVar10 = 0;
LAB_141497776:
      if ((int)uVar10 < 0) goto LAB_141497783;
    }
    else {
      do {
        uVar13 = uVar14 >> 1;
        iVar15 = uVar13 + (int)uVar12;
        pFVar9 = ToFileOffset(&local_50,*(FIoFileBlockRequest **)(pFVar1 + (longlong)iVar15 * 8));
        uVar5 = (pFVar9->FileHandle).Handle;
        local_58._4_4_ = (undefined4)((ulonglong)*(undefined8 *)&pFVar9->Priority >> 0x20);
        uVar2 = (this->LastFileOffset).FileHandle.Handle;
        bVar6 = uVar5 < uVar2;
        if (uVar5 == uVar2) {
          bVar6 = pFVar9->FileOffset < (this->LastFileOffset).FileOffset;
        }
        if (bVar6) {
          uVar12 = (ulonglong)(iVar15 + (uVar14 & 1));
        }
        uVar10 = (uint)uVar12;
        uVar14 = uVar13;
      } while (uVar13 != 0);
      uVar14 = (param_1->ByOffset).ArrayNum;
      if (((int)uVar10 < 0) || ((int)uVar14 <= (int)uVar10)) goto LAB_141497776;
      if (((int)uVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FIoFileBlockRequest *)(*pcVar4)();
        return pFVar7;
      }
      if (*(ulong64 *)
           (*(longlong *)((param_1->ByOffset).AllocatorInstance.Data + uVar12 * 8) + 0x70) !=
          (this->LastFileOffset).FileHandle.Handle) goto LAB_141497783;
      uVar14 = (param_1->ByOffset).ArrayNum;
    }
    if ((int)uVar14 <= (int)uVar10) goto LAB_141497783;
LAB_14149782c:
    if ((int)uVar10 < (param_1->ByOffset).ArrayNum) goto LAB_141497857;
  }
  else {
LAB_141497828:
    if (-1 < (int)uVar10) goto LAB_14149782c;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("PrioQueue.ByOffset.IsValidIndex(RequestIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                     ,0xd8,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FIoFileBlockRequest *)(*pcVar4)();
    return pFVar7;
  }
LAB_141497857:
  uVar14 = 0;
  if ((int)uVar10 < (param_1->ByOffset).ArrayNum) {
    uVar14 = ~uVar10 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FIoFileBlockRequest *)(*pcVar4)();
    return pFVar7;
  }
  pFVar7 = *(FIoFileBlockRequest **)
            ((param_1->ByOffset).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if (param_2) {
    TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_>::RemoveAt
              (&param_1->ByOffset,uVar10,No);
    TIntrusiveTwoWayList<UE::FIoFileBlockRequest,TIntrusiveTwoWayListTraits<UE::FIoFileBlockRequest>_>
    ::Remove(&param_1->BySequence,pFVar7);
    param_1->PeekIndex = -1;
    uVar3 = pFVar7->FileOffset;
    local_58 = CONCAT44(local_58._4_4_,pFVar7->Priority);
    (this->LastFileOffset).FileHandle.Handle = (pFVar7->FileHandle).Handle;
    (this->LastFileOffset).FileOffset = uVar3;
    *(undefined8 *)&(this->LastFileOffset).Priority = local_58;
    return pFVar7;
  }
  param_1->PeekIndex = uVar10;
  return pFVar7;
}

// GetByOffset @ 141497970

FIoFileBlockRequest * __thiscall UE::FIoQueue::GetByOffset(FIoQueue *this,bool param_1)

{
  TArray<UE::FIoQueue::FPrioQueue,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FIoFileBlockRequest *pFVar10;
  longlong lVar11;
  uint uVar12;
  
  iVar9 = (this->PrioQueues).ArrayNum;
  if (iVar9 == 0) {
    return (FIoFileBlockRequest *)0x0;
  }
  pTVar1 = &this->PrioQueues;
  uVar12 = 0;
  if ((int)(iVar9 - 1U) < iVar9) {
    uVar12 = ~(iVar9 - 1U) >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FIoFileBlockRequest *)(*pcVar7)();
    return pFVar10;
  }
  iVar9 = (this->PrioQueues).ArrayNum;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  pFVar10 = GetByOffset(this,(FPrioQueue *)(pFVar3 + (longlong)iVar9 * 0x28 + -0x28),param_1);
  if (*(int *)(pFVar3 + (longlong)iVar9 * 0x28 + -0x20) == 0) {
    if (((this->PrioQueues).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FIoFileBlockRequest *)(*pcVar7)();
      return pFVar10;
    }
    lVar11 = (longlong)(this->PrioQueues).ArrayNum;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    pvVar4 = *(void **)(pFVar3 + lVar11 * 0x28 + -0x28);
    *(undefined8 *)(pFVar3 + lVar11 * 0x28 + -0x28) = 0;
    *(undefined8 *)(pFVar3 + lVar11 * 0x28 + -0x20) = 0;
    *(undefined8 *)(pFVar3 + lVar11 * 0x28 + -0x10) = 0;
    *(undefined8 *)(pFVar3 + lVar11 * 0x28 + -0x18) = 0;
    iVar9 = (this->PrioQueues).ArrayNum;
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar5 + (longlong)iVar9 * 0x28;
    pvVar6 = *(void **)(pFVar5 + (longlong)iVar9 * 0x28 + -0x28);
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    iVar9 = (this->PrioQueues).ArrayNum - iVar9;
    if (iVar9 != 0) {
      memmove(pFVar3 + -0x28,pFVar3,(longlong)iVar9 * 0x28);
    }
    piVar2 = &(this->PrioQueues).ArrayNum;
    *piVar2 = *piVar2 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,&pTVar1->AllocatorInstance,(this->PrioQueues).ArrayNum,
               &(this->PrioQueues).ArrayMax);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
  }
  return pFVar10;
}

// GetCancelled @ 141497b20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FIoFileBlockRequest * __thiscall UE::FIoQueue::GetCancelled(FIoQueue *this,bool param_1)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FIoFileBlockRequest *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  bool bVar22;
  FIdentityFunctor local_res8;
  undefined1 local_res20 [8];
  longlong local_70;
  longlong local_68;
  FIoFileBlockRequest *local_60;
  FScriptContainerElement *local_58;
  
  if (this->bReprioritizeCancelled != false) {
    this->bReprioritizeCancelled = false;
    bVar22 = -1 < CpuChannel->Enabled;
    if (bVar22) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId238,"RequestQueueRemoveCancelled",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                 ,0xee);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId238);
    }
    if (this->bSortByOffset == false) {
      uVar15 = (this->Heap).ArrayNum - 1;
      if (-1 < (int)uVar15) {
        lVar18 = (longlong)(int)uVar15 * 8;
        do {
          uVar19 = 0;
          if ((int)uVar15 < (this->Heap).ArrayNum) {
            uVar19 = ~uVar15 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
            return pFVar7;
          }
          local_68 = *(longlong *)((this->Heap).AllocatorInstance.Data + lVar18);
          if (*(int *)(local_68 + 0xb0) == 3) {
            pFVar16 = (this->CancelledHeap).AllocatorInstance.Data;
            if (((pFVar16 <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 <
                 pFVar16 + (longlong)(this->CancelledHeap).ArrayMax * 8)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
              return pFVar7;
            }
            iVar6 = (this->CancelledHeap).ArrayNum;
            piVar1 = &(this->CancelledHeap).ArrayMax;
            if (iVar6 == *piVar1) {
              iVar6 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(this->CancelledHeap).AllocatorInstance,piVar1);
            }
            (this->CancelledHeap).ArrayNum = iVar6 + 1;
            *(longlong *)((this->CancelledHeap).AllocatorInstance.Data + (longlong)iVar6 * 8) =
                 local_68;
            pFVar16 = (this->CancelledHeap).AllocatorInstance.Data;
            iVar6 = (this->CancelledHeap).ArrayNum + -1;
            while (0 < iVar6) {
              lVar10 = (longlong)iVar6;
              iVar6 = (iVar6 + -1) / 2;
              lVar17 = *(longlong *)(pFVar16 + (longlong)iVar6 * 8);
              lVar2 = *(longlong *)(pFVar16 + lVar10 * 8);
              if (*(int *)(lVar2 + 0xb4) == *(int *)(lVar17 + 0xb4)) {
                bVar4 = *(uint *)(lVar2 + 0xa8) < *(uint *)(lVar17 + 0xa8);
              }
              else {
                bVar4 = *(int *)(lVar17 + 0xb4) < *(int *)(lVar2 + 0xb4);
              }
              if (!bVar4) break;
              *(longlong *)(pFVar16 + lVar10 * 8) = lVar17;
              *(longlong *)(pFVar16 + (longlong)iVar6 * 8) = lVar2;
            }
            TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_>::RemoveAt
                      (&this->Heap,uVar15,No);
          }
          lVar18 = lVar18 + -8;
          uVar15 = uVar15 - 1;
        } while (-1 < (int)uVar15);
      }
      local_res8 = SUB81(this,0);
      AlgoImpl::
      HeapifyInternal<UE::FIoFileBlockRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::FIoFileBlockRequest_*,bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)>_>
                ((FIoFileBlockRequest **)(this->Heap).AllocatorInstance.Data,(this->Heap).ArrayNum,
                 local_res8,
                 (TDereferenceWrapper<UE::FIoFileBlockRequest_*,bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)>
                  )0x1414b04e0);
    }
    else {
      uVar15 = (this->PrioQueues).ArrayNum;
      uVar11 = (ulonglong)(int)uVar15;
      pFVar9 = (this->PrioQueues).AllocatorInstance.Data;
      pFVar16 = pFVar9 + uVar11 * 0x28;
      local_58 = pFVar16;
      while( true ) {
        uVar14 = 0;
        if ((this->PrioQueues).ArrayNum != (int)uVar11) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<UE::FIoQueue::FPrioQueue,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar9 == pFVar16) break;
        uVar19 = *(int *)(pFVar9 + 8) - 1;
        *(undefined4 *)(pFVar9 + 0x20) = 0xffffffff;
        if (-1 < (int)uVar19) {
          lVar17 = (longlong)(int)uVar19;
          lVar18 = lVar17 * 8;
          do {
            uVar12 = ~uVar19 >> 0x1f;
            uVar5 = 0;
            if ((int)uVar19 < *(int *)(pFVar9 + 8)) {
              uVar5 = uVar12;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
              return pFVar7;
            }
            local_70 = *(longlong *)(*(longlong *)pFVar9 + lVar18);
            if (*(int *)(local_70 + 0xb0) == 3) {
              pFVar16 = (this->CancelledHeap).AllocatorInstance.Data;
              if (((pFVar16 <= (FScriptContainerElement *)&local_70) &&
                  ((FScriptContainerElement *)&local_70 <
                   pFVar16 + (longlong)(this->CancelledHeap).ArrayMax * 8)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
                return pFVar7;
              }
              iVar6 = (this->CancelledHeap).ArrayNum;
              piVar1 = &(this->CancelledHeap).ArrayMax;
              if (iVar6 == *piVar1) {
                iVar6 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&(this->CancelledHeap).AllocatorInstance,piVar1);
              }
              (this->CancelledHeap).ArrayNum = iVar6 + 1;
              *(longlong *)((this->CancelledHeap).AllocatorInstance.Data + (longlong)iVar6 * 8) =
                   local_70;
              pFVar16 = (this->CancelledHeap).AllocatorInstance.Data;
              iVar6 = (this->CancelledHeap).ArrayNum + -1;
              while (0 < iVar6) {
                lVar8 = (longlong)iVar6;
                iVar6 = (iVar6 + -1) / 2;
                lVar2 = *(longlong *)(pFVar16 + (longlong)iVar6 * 8);
                lVar10 = *(longlong *)(pFVar16 + lVar8 * 8);
                if (*(int *)(lVar10 + 0xb4) == *(int *)(lVar2 + 0xb4)) {
                  bVar4 = *(uint *)(lVar10 + 0xa8) < *(uint *)(lVar2 + 0xa8);
                }
                else {
                  bVar4 = *(int *)(lVar2 + 0xb4) < *(int *)(lVar10 + 0xb4);
                }
                if (!bVar4) break;
                *(longlong *)(pFVar16 + lVar8 * 8) = lVar2;
                *(longlong *)(pFVar16 + (longlong)iVar6 * 8) = lVar10;
              }
              uVar5 = 0;
              if ((int)uVar19 < *(int *)(pFVar9 + 8)) {
                uVar5 = uVar12;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
                return pFVar7;
              }
              _Dst = (void *)(*(longlong *)pFVar9 + lVar17 * 8);
              iVar6 = *(int *)(pFVar9 + 8) + ~uVar19;
              if (iVar6 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
              }
              lVar2 = local_70;
              *(int *)(pFVar9 + 8) = *(int *)(pFVar9 + 8) + -1;
              if ((local_70 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Element != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                     ,0x18c,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
                return pFVar7;
              }
              if (*(longlong *)(pFVar9 + 0x10) == lVar2) {
                if (*(longlong *)(pFVar9 + 0x18) == lVar2) {
                  if ((*(longlong *)(lVar2 + 0x50) != 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("TypeTraits::GetNext(Element) == nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                         ,400,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
                    return pFVar7;
                  }
                  if ((*(longlong *)(lVar2 + 0x58) != 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("TypeTraits::GetPrev(Element) == nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                         ,0x191,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
                    return pFVar7;
                  }
                  *(longlong *)(pFVar9 + 0x18) = 0;
                  *(longlong *)(pFVar9 + 0x10) = 0;
                }
                else {
                  if ((*(longlong *)(lVar2 + 0x58) != 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("TypeTraits::GetPrev(Element) == nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                         ,0x197,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
                    return pFVar7;
                  }
                  lVar10 = *(longlong *)(lVar2 + 0x50);
                  *(longlong *)(pFVar9 + 0x10) = lVar10;
                  *(undefined8 *)(lVar10 + 0x58) = 0;
                  *(undefined8 *)(lVar2 + 0x50) = 0;
                }
              }
              else if (*(longlong *)(pFVar9 + 0x18) == lVar2) {
                if ((*(longlong *)(lVar2 + 0x50) != 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Element->Next == nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                       ,0x19f,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
                  return pFVar7;
                }
                lVar10 = *(longlong *)(lVar2 + 0x58);
                *(longlong *)(pFVar9 + 0x18) = lVar10;
                *(undefined8 *)(lVar10 + 0x50) = 0;
                *(undefined8 *)(lVar2 + 0x58) = 0;
              }
              else {
                lVar10 = *(longlong *)(lVar2 + 0x50);
                lVar8 = *(longlong *)(lVar2 + 0x58);
                *(longlong *)(lVar10 + 0x58) = lVar8;
                *(longlong *)(lVar8 + 0x50) = lVar10;
                *(undefined8 *)(lVar2 + 0x50) = 0;
                *(undefined8 *)(lVar2 + 0x58) = 0;
              }
            }
            lVar17 = lVar17 + -1;
            lVar18 = lVar18 + -8;
            uVar19 = uVar19 - 1;
            pFVar16 = local_58;
          } while (-1 < (int)uVar19);
        }
        uVar11 = (ulonglong)uVar15;
        pFVar9 = pFVar9 + 0x28;
      }
      iVar6 = (this->PrioQueues).ArrayNum;
      lVar18 = (longlong)iVar6;
      if (iVar6 != 0) {
        pFVar16 = (this->PrioQueues).AllocatorInstance.Data;
        bVar4 = *(int *)(pFVar16 + 8) != 0;
        uVar11 = uVar14;
        uVar21 = uVar14;
        do {
          iVar6 = (int)uVar14;
          uVar11 = uVar11 + 1;
          uVar14 = (ulonglong)(iVar6 + 1);
          if ((longlong)uVar11 < lVar18) {
            pFVar9 = pFVar16 + uVar11 * 0x28 + 8;
            do {
              if (bVar4 != (*(int *)pFVar9 != 0)) break;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + 1;
              pFVar9 = pFVar9 + 0x28;
            } while ((longlong)uVar11 < lVar18);
          }
          iVar13 = (int)uVar14 - iVar6;
          if (bVar4 == false) {
            DestructItems<UE::FIoQueue::FPrioQueue,int>
                      ((FPrioQueue *)(pFVar16 + (longlong)iVar6 * 0x28),iVar13);
          }
          else {
            iVar20 = (int)uVar21;
            if (iVar20 != iVar6) {
              memmove(pFVar16 + (longlong)iVar20 * 0x28,pFVar16 + (longlong)iVar6 * 0x28,
                      (longlong)iVar13 * 0x28);
            }
            uVar21 = (ulonglong)(uint)(iVar20 + iVar13);
          }
          bVar4 = (bool)(bVar4 ^ 1);
        } while ((longlong)uVar11 < lVar18);
        (this->PrioQueues).ArrayNum = (int)uVar21;
      }
    }
    if (bVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  iVar6 = (this->CancelledHeap).ArrayNum;
  local_60 = (FIoFileBlockRequest *)0x0;
  if (iVar6 == 0) {
    return (FIoFileBlockRequest *)0x0;
  }
  if (param_1) {
    TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_>::
    HeapPop<bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)>
              (&this->CancelledHeap,&local_60,SeqNoLess,No);
    return local_60;
  }
  if ((iVar6 < 1) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
    return pFVar7;
  }
  return *(FIoFileBlockRequest **)(this->CancelledHeap).AllocatorInstance.Data;
}

// Peek @ 1414a8070

FIoFileBlockRequest * __thiscall UE::FIoQueue::Peek(FIoQueue *this)

{
  FIoFileBlockRequest *pFVar1;
  FIoFileBlockRequest **ppFVar2;
  
  pFVar1 = GetCancelled(this,false);
  if (pFVar1 == (FIoFileBlockRequest *)0x0) {
    if (this->bSortByOffset != false) {
      pFVar1 = GetByOffset(this,false);
      return pFVar1;
    }
    if ((this->Heap).ArrayNum != 0) {
      ppFVar2 = TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_>::HeapTop(&this->Heap);
      pFVar1 = *ppFVar2;
    }
  }
  return pFVar1;
}

// QueueToPriority @ 1414ac150

int __cdecl UE::FIoQueue::QueueToPriority(FPrioQueue *param_1)

{
  return param_1->Priority;
}

// Reprioritize @ 1414adf60

void __thiscall UE::FIoQueue::Reprioritize(FIoQueue *this)

{
  void *_Dst;
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_70;
  FScriptContainerElement *local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId103,"RequestQueueUpdateOrder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
               ,0x67);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId103);
  }
  if (this->bSortByOffset == false) {
    iVar8 = (this->Heap).ArrayNum;
    if (iVar8 != 0) {
      local_res8 = SUB81(this,0);
      AlgoImpl::
      HeapifyInternal<UE::FIoFileBlockRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::FIoFileBlockRequest_*,bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)>_>
                ((FIoFileBlockRequest **)(this->Heap).AllocatorInstance.Data,iVar8,local_res8,
                 (TDereferenceWrapper<UE::FIoFileBlockRequest_*,bool___cdecl(UE::FIoFileBlockRequest_const_&,UE::FIoFileBlockRequest_const_&)>
                  )0x1414b04e0);
    }
  }
  else {
    uVar1 = (this->PrioQueues).ArrayNum;
    uVar10 = (ulonglong)(int)uVar1;
    pFVar9 = (this->PrioQueues).AllocatorInstance.Data;
    local_60.Data = (FScriptContainerElement *)0x0;
    pFVar12 = pFVar9 + uVar10 * 0x28;
    local_58 = 0;
    local_68 = pFVar12;
    while( true ) {
      if ((this->PrioQueues).ArrayNum != (int)uVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::FIoQueue::FPrioQueue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      uVar10 = 0;
      if (pFVar9 == pFVar12) break;
      uVar19 = *(int *)(pFVar9 + 8) - 1;
      *(undefined4 *)(pFVar9 + 0x20) = 0xffffffff;
      if (-1 < (int)uVar19) {
        lVar16 = (longlong)(int)uVar19;
        lVar18 = lVar16 * 8;
        do {
          uVar11 = ~uVar19 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar19 < *(int *)(pFVar9 + 8)) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_70 = *(longlong *)(*(longlong *)pFVar9 + lVar18);
          if (*(int *)(local_70 + 0xb4) != *(int *)(pFVar9 + 0x24)) {
            if (((local_60.Data <= (FScriptContainerElement *)&local_70) &&
                ((FScriptContainerElement *)&local_70 < local_60.Data + (longlong)local_58._4_4_ * 8
                )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = (int)local_58;
            if ((int)local_58 == local_58._4_4_) {
              iVar8 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_60,(int *)((longlong)&local_58 + 4));
            }
            local_58 = CONCAT44(local_58._4_4_,iVar8 + 1);
            *(longlong *)(local_60.Data + (longlong)iVar8 * 8) = local_70;
            uVar7 = 0;
            if ((int)uVar19 < *(int *)(pFVar9 + 8)) {
              uVar7 = uVar11;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            _Dst = (void *)(*(longlong *)pFVar9 + lVar16 * 8);
            iVar8 = *(int *)(pFVar9 + 8) + ~uVar19;
            if (iVar8 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar8 << 3);
            }
            lVar5 = local_70;
            *(int *)(pFVar9 + 8) = *(int *)(pFVar9 + 8) + -1;
            if ((local_70 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Element != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                   ,0x18c,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(longlong *)(pFVar9 + 0x10) == lVar5) {
              if (*(longlong *)(pFVar9 + 0x18) == lVar5) {
                if ((*(longlong *)(lVar5 + 0x50) != 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypeTraits::GetNext(Element) == nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                       ,400,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if ((*(longlong *)(lVar5 + 0x58) != 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypeTraits::GetPrev(Element) == nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                       ,0x191,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(longlong *)(pFVar9 + 0x18) = 0;
                *(longlong *)(pFVar9 + 0x10) = 0;
              }
              else {
                if ((*(longlong *)(lVar5 + 0x58) != 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypeTraits::GetPrev(Element) == nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                       ,0x197,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar2 = *(longlong *)(lVar5 + 0x50);
                *(longlong *)(pFVar9 + 0x10) = lVar2;
                *(undefined8 *)(lVar2 + 0x58) = 0;
LAB_1414ae310:
                *(undefined8 *)(lVar5 + 0x50) = 0;
              }
            }
            else {
              if (*(longlong *)(pFVar9 + 0x18) != lVar5) {
                lVar2 = *(longlong *)(lVar5 + 0x58);
                lVar3 = *(longlong *)(lVar5 + 0x50);
                *(longlong *)(lVar3 + 0x58) = lVar2;
                *(longlong *)(lVar2 + 0x50) = lVar3;
                *(undefined8 *)(lVar5 + 0x58) = 0;
                goto LAB_1414ae310;
              }
              if ((*(longlong *)(lVar5 + 0x50) != 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Element->Next == nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                     ,0x19f,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar2 = *(longlong *)(lVar5 + 0x58);
              *(longlong *)(pFVar9 + 0x18) = lVar2;
              *(undefined8 *)(lVar2 + 0x50) = 0;
              *(undefined8 *)(lVar5 + 0x58) = 0;
            }
          }
          lVar16 = lVar16 + -1;
          lVar18 = lVar18 + -8;
          uVar19 = uVar19 - 1;
          pFVar12 = local_68;
        } while (-1 < (int)uVar19);
      }
      uVar10 = (ulonglong)uVar1;
      pFVar9 = pFVar9 + 0x28;
    }
    iVar8 = (this->PrioQueues).ArrayNum;
    lVar18 = (longlong)iVar8;
    if (iVar8 != 0) {
      pFVar12 = (this->PrioQueues).AllocatorInstance.Data;
      bVar6 = *(int *)(pFVar12 + 8) != 0;
      uVar13 = uVar10;
      uVar17 = uVar10;
      do {
        iVar8 = (int)uVar10;
        uVar13 = uVar13 + 1;
        uVar10 = (ulonglong)(iVar8 + 1);
        if ((longlong)uVar13 < lVar18) {
          pFVar9 = pFVar12 + (uVar13 * 5 + 1) * 8;
          do {
            if (bVar6 != (*(int *)pFVar9 != 0)) break;
            uVar10 = (ulonglong)((int)uVar10 + 1);
            uVar13 = uVar13 + 1;
            pFVar9 = pFVar9 + 0x28;
          } while ((longlong)uVar13 < lVar18);
        }
        iVar20 = (int)uVar10 - iVar8;
        if (bVar6 == false) {
          DestructItems<UE::FIoQueue::FPrioQueue,int>
                    ((FPrioQueue *)(pFVar12 + (longlong)iVar8 * 0x28),iVar20);
        }
        else {
          iVar15 = (int)uVar17;
          if (iVar15 != iVar8) {
            memmove(pFVar12 + (longlong)iVar15 * 0x28,pFVar12 + (longlong)iVar8 * 0x28,
                    (longlong)iVar20 * 0x28);
          }
          uVar17 = (ulonglong)(uint)(iVar15 + iVar20);
        }
        bVar6 = (bool)(bVar6 ^ 1);
      } while ((longlong)uVar13 < lVar18);
      (this->PrioQueues).ArrayNum = (int)uVar17;
    }
    iVar8 = (int)local_58;
    pFVar12 = local_60.Data + (longlong)(int)local_58 * 8;
    FVar14.Data = local_60.Data;
    while( true ) {
      if ((int)local_58 != iVar8) {
        `TCheckedPointerIterator<UE::FIoFileBlockRequest_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (FVar14.Data == pFVar12) break;
      AddToPrioQueue(this,*(FIoFileBlockRequest **)FVar14.Data);
      FVar14.Data = FVar14.Data + 8;
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SeqNoLess @ 1414b04e0

bool __cdecl UE::FIoQueue::SeqNoLess(FIoFileBlockRequest *param_1,FIoFileBlockRequest *param_2)

{
  if (param_1->Priority == param_2->Priority) {
    return param_1->SeqNo < param_2->SeqNo;
  }
  return param_2->Priority < param_1->Priority;
}

// ToFileOffset @ 1414b4d80

FFileOffset * __cdecl
UE::FIoQueue::ToFileOffset(FFileOffset *__return_storage_ptr__,FIoFileBlockRequest *param_1)

{
  (__return_storage_ptr__->FileHandle).Handle = (param_1->FileHandle).Handle;
  __return_storage_ptr__->FileOffset = param_1->FileOffset;
  __return_storage_ptr__->Priority = param_1->Priority;
  return __return_storage_ptr__;
}

