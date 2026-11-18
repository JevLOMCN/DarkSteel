// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 4

// enqueueInternal<THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>_> @ 148d9bc10

void __thiscall
FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::
enqueueInternal<THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>_>
          (FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData> *this,
          FQueuedWorkInternalData *param_1,
          THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>
          *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FHazardRecord *pFVar4;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> aVar5;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> aVar6;
  longlong lVar7;
  undefined4 *_Dst;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> aVar8;
  bool bVar9;
  
  while( true ) {
    while( true ) {
      do {
        while( true ) {
          do {
            pFVar4 = param_2->Record;
            pFVar4->Hazard = (atomic<unsigned___int64>)*param_2->Hazard;
            LOCK();
            UNLOCK();
            aVar5 = *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
                      *)&pFVar4->Hazard;
          } while (aVar5 != *param_2->Hazard);
          LOCK();
          piVar2 = (int *)((longlong)aVar5 + 0x2008);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + 1;
          UNLOCK();
          if (0x3ff < iVar3) break;
          plVar1 = (longlong *)((longlong)aVar5 + (longlong)iVar3 * 8 + 8);
          LOCK();
          bVar9 = *plVar1 == 0;
          if (bVar9) {
            *plVar1 = (longlong)param_1;
          }
          UNLOCK();
          if (bVar9) {
            param_2->Record->Hazard = (atomic<unsigned___int64>)0x0;
            return;
          }
        }
      } while (aVar5 != this->tail);
      if (*(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *)
           ((longlong)aVar5 + 0x2010) ==
          (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)0x0)
      break;
      LOCK();
      if (aVar5 == this->tail) {
        this->tail = *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
                       *)((longlong)aVar5 + 0x2010);
      }
      UNLOCK();
    }
    aVar6 = (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)
            ::operator_new(0x2018);
    aVar8 = (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)0x0;
    if (aVar6 != (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)
                 0x0) {
      _Dst = (undefined4 *)((longlong)aVar6 + 8);
      *(undefined4 *)aVar6 = 0;
      memset(_Dst,0,0x2000);
      *(undefined4 *)((longlong)aVar6 + 0x2008) = 1;
      lVar7 = 0x3ff;
      *(undefined8 *)((longlong)aVar6 + 0x2010) = 0;
      *(FQueuedWorkInternalData **)((longlong)aVar6 + 8) = param_1;
      do {
        *(undefined8 *)(_Dst + 2) = 0;
        _Dst = _Dst + 2;
        lVar7 = lVar7 + -1;
        aVar8 = aVar6;
      } while (lVar7 != 0);
    }
    LOCK();
    bVar9 = *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *)
             ((longlong)aVar5 + 0x2010) ==
            (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)0x0;
    if (bVar9) {
      *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *)
       ((longlong)aVar5 + 0x2010) = aVar8;
    }
    UNLOCK();
    if (bVar9) break;
    ::operator_delete((void *)aVar8,0x2018);
  }
  LOCK();
  if (aVar5 == this->tail) {
    this->tail = aVar8;
  }
  UNLOCK();
  param_2->Record->Hazard = (atomic<unsigned___int64>)0x0;
  return;
}

// FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData> @ 148d9bd70

FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData> * __thiscall
FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::
FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>
          (FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData> *this)

{
  DWORD DVar1;
  Node *this_00;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> aVar2;
  
  this->head = (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)
               0x0;
  this->tail = (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)
               0x0;
  FHazardPointerCollection::FHazardRecordChunk::FHazardRecordChunk(&(this->Hazards).Head);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Hazards).AllTlsVariablesCS,4000)
  ;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Hazards).HazardRecordBlocksCS,4000);
  aVar2 = (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)0x0;
  (this->Hazards).AllTlsVariables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hazards).AllTlsVariables.ArrayNum = 0;
  (this->Hazards).AllTlsVariables.ArrayMax = 0;
  (this->Hazards).HazardRecordBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hazards).HazardRecordBlocks.ArrayNum = 0;
  (this->Hazards).HazardRecordBlocks.ArrayMax = 0;
  (this->Hazards).CollectablesTlsSlot = 0xffffffff;
  (this->Hazards).TotalNumHazardRecords = (atomic<unsigned_int>)0x20;
  DVar1 = TlsAlloc();
  (this->Hazards).CollectablesTlsSlot = DVar1;
  this_00 = ::operator_new(0x2018);
  if (this_00 != (Node *)0x0) {
    aVar2 = (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)
            Node::Node(this_00,(FQueuedWorkInternalData *)0x0);
  }
  *(atomic<int> *)((longlong)aVar2 + 0x2008) = (atomic<int>)0x0;
  this->head = aVar2;
  this->tail = aVar2;
  return this;
}

// Node @ 148d9c420

Node * __thiscall
FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node::Node
          (Node *this,FQueuedWorkInternalData *param_1)

{
  atomic<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*> *paVar1;
  longlong lVar2;
  
  this->deqidx = (atomic<int>)0x0;
  memset(this->items,0,0x2000);
  this->enqidx = (atomic<int>)0x1;
  paVar1 = this->items;
  this->next = (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)
               0x0;
  lVar2 = 0x3ff;
  this->items[0] = (atomic<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*>)param_1;
  do {
    paVar1 = paVar1 + 1;
    *paVar1 = (atomic<FQueuedLowLevelThreadPool::FQueuedWorkInternalData_*>)0x0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return this;
}

// ~FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData> @ 148d9c540

void __thiscall
FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::
~FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>
          (FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData> *this)

{
  int *piVar1;
  int iVar2;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> aVar3;
  longlong lVar4;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *paVar5;
  FHazardRecord *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0> local_48
  ;
  FHazardDeleter local_38;
  
  uVar8 = 0;
  do {
    THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>::
    THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>
              (&local_48,&this->head,&this->Hazards);
    pFVar6 = local_48.Record;
    paVar5 = local_48.Hazard;
    do {
      while( true ) {
        do {
          pFVar6->Hazard = (atomic<unsigned___int64>)*paVar5;
          LOCK();
          UNLOCK();
          aVar3 = *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
                    *)&pFVar6->Hazard;
        } while (aVar3 != *paVar5);
        uVar7 = uVar8;
        if ((*(int *)((longlong)aVar3 + 0x2008) <= *(int *)aVar3) &&
           (*(longlong *)((longlong)aVar3 + 0x2010) == 0)) goto code_r0x000148d9c66d;
        LOCK();
        iVar2 = *(int *)aVar3;
        *(int *)aVar3 = *(int *)aVar3 + 1;
        UNLOCK();
        if (iVar2 < 0x400) break;
        if (*(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *)
             ((longlong)aVar3 + 0x2010) ==
            (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)0x0)
        goto code_r0x000148d9c66d;
        LOCK();
        bVar9 = aVar3 == this->head;
        if (bVar9) {
          this->head = *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
                         *)((longlong)aVar3 + 0x2010);
        }
        UNLOCK();
        if (bVar9) {
          local_38._padding_ =
               (longlong)
               &
               ___7__THazardDeleter_UNode___FAAArrayQueue_UFQueuedWorkInternalData_FQueuedLowLevelThreadPool_____FHazardPointerCollection__6B_
          ;
          pFVar6->Hazard = (atomic<unsigned___int64>)0x0;
          local_38.Pointer = (void *)aVar3;
          FHazardPointerCollection::Delete(&this->Hazards,&local_38,-1);
        }
      }
      piVar1 = (int *)((longlong)aVar3 + (longlong)iVar2 * 8);
      if ((*(longlong *)((int *)((longlong)aVar3 + 8) + (longlong)iVar2 * 2) == 0) &&
         (iVar2 <= *(int *)((longlong)aVar3 + 0x2008))) {
        lVar4 = *(longlong *)(piVar1 + 2);
        for (; (lVar4 == 0 && ((int)uVar7 < 10)); uVar7 = (ulonglong)((int)uVar7 + 1)) {
          lVar4 = *(longlong *)(piVar1 + 2);
        }
      }
      LOCK();
      uVar7 = *(ulonglong *)(piVar1 + 2);
      *(ulonglong *)(piVar1 + 2) = 0xffffffffffffffff;
      UNLOCK();
    } while (uVar7 == 0);
code_r0x000148d9c66d:
    pFVar6->Hazard = (atomic<unsigned___int64>)0x0;
    pFVar6->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
    if (uVar7 == 0) {
      ::operator_delete((void *)this->head,0x2018);
      FHazardPointerCollection::~FHazardPointerCollection(&this->Hazards);
      return;
    }
  } while( true );
}

