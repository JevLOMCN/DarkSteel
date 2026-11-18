// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~TLocalQueueRegistry<1024,1024> @ 1414803b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::~TLocalQueueRegistry<1024,1024>
          (TLocalQueueRegistry<1024,1024> *this)

{
  int *piVar1;
  int iVar2;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> aVar3;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> aVar4;
  longlong lVar5;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *paVar6;
  FHazardRecord *pFVar7;
  ulonglong uVar8;
  FHazardPointerCollection *this_00;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *paVar9;
  longlong lVar10;
  ulonglong uVar11;
  THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0> local_48;
  FHazardDeleter local_38;
  
  paVar9 = (atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)this->LocalQueues;
  lVar10 = 5;
  this_00 = (FHazardPointerCollection *)(this->LocalQueues + 0x20);
  uVar11 = 0;
  do {
    lVar10 = lVar10 + -1;
    paVar9 = paVar9 + -0x240;
    this_00 = (FHazardPointerCollection *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x1000);
    do {
      THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>::
      THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>(&local_48,paVar9,this_00);
      pFVar7 = local_48.Record;
      paVar6 = local_48.Hazard;
      do {
        while( true ) {
          do {
            pFVar7->Hazard = (atomic<unsigned___int64>)*paVar6;
            LOCK();
            UNLOCK();
            aVar4 = *(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)&pFVar7->Hazard;
          } while (aVar4 != *paVar6);
          uVar8 = uVar11;
          if ((*(int *)((longlong)aVar4 + 0x2008) <= *(int *)aVar4) &&
             (*(longlong *)((longlong)aVar4 + 0x2010) == 0)) goto code_r0x00014148050d;
          LOCK();
          iVar2 = *(int *)aVar4;
          *(int *)aVar4 = *(int *)aVar4 + 1;
          UNLOCK();
          if (iVar2 < 0x400) break;
          if (*(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)((longlong)aVar4 + 0x2010) ==
              (atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*>)0x0) goto code_r0x00014148050d;
          LOCK();
          aVar3 = *paVar9;
          if (aVar4 == aVar3) {
            *paVar9 = *(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)
                       ((longlong)aVar4 + 0x2010);
          }
          UNLOCK();
          if (aVar4 == aVar3) {
            local_38._padding_ = 0x1506141e8;
            pFVar7->Hazard = (atomic<unsigned___int64>)0x0;
            local_38.Pointer = (void *)aVar4;
            FHazardPointerCollection::Delete(this_00,&local_38,-1);
          }
        }
        piVar1 = (int *)((longlong)aVar4 + (longlong)iVar2 * 8);
        if ((*(longlong *)((int *)((longlong)aVar4 + 8) + (longlong)iVar2 * 2) == 0) &&
           (iVar2 <= *(int *)((longlong)aVar4 + 0x2008))) {
          lVar5 = *(longlong *)(piVar1 + 2);
          for (; (lVar5 == 0 && ((int)uVar8 < 10)); uVar8 = (ulonglong)((int)uVar8 + 1)) {
            lVar5 = *(longlong *)(piVar1 + 2);
          }
        }
        LOCK();
        uVar8 = *(ulonglong *)(piVar1 + 2);
        *(ulonglong *)(piVar1 + 2) = 0xffffffffffffffff;
        UNLOCK();
      } while (uVar8 == 0);
code_r0x00014148050d:
      pFVar7->Hazard = (atomic<unsigned___int64>)0x0;
      pFVar7->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
    } while (uVar8 != 0);
    ::operator_delete((void *)*paVar9,0x2018);
    FHazardPointerCollection::~FHazardPointerCollection(this_00);
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}

// DequeueGlobal @ 141491250

FTask * __thiscall
LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::DequeueGlobal
          (TLocalQueueRegistry<1024,1024> *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> aVar3;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> aVar4;
  longlong lVar5;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *paVar6;
  FHazardRecord *pFVar7;
  FTask *pFVar8;
  uint uVar9;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *paVar11;
  FTask *pFVar12;
  int iVar13;
  THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0> local_58;
  FHazardDeleter local_48;
  FTask *pFVar10;
  
  iVar13 = 2;
  if (param_1) {
    iVar13 = 5;
  }
  pFVar12 = (FTask *)0x0;
  pFVar10 = pFVar12;
  do {
    paVar11 = &this->OverflowQueues[(int)pFVar10].head;
    THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>::
    THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>
              (&local_58,paVar11,(FHazardPointerCollection *)(paVar11 + 0x20));
    pFVar7 = local_58.Record;
    paVar6 = local_58.Hazard;
    do {
      while( true ) {
        do {
          pFVar7->Hazard = (atomic<unsigned___int64>)*paVar6;
          LOCK();
          UNLOCK();
          aVar4 = *(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)&pFVar7->Hazard;
        } while (aVar4 != *paVar6);
        pFVar8 = pFVar12;
        if ((*(int *)((longlong)aVar4 + 0x2008) <= *(int *)aVar4) &&
           (*(longlong *)((longlong)aVar4 + 0x2010) == 0)) goto code_r0x0001414913ad;
        LOCK();
        iVar2 = *(int *)aVar4;
        *(int *)aVar4 = *(int *)aVar4 + 1;
        UNLOCK();
        if (iVar2 < 0x400) break;
        if (*(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)((longlong)aVar4 + 0x2010) ==
            (atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*>)0x0) goto code_r0x0001414913ad;
        LOCK();
        aVar3 = *paVar11;
        if (aVar4 == aVar3) {
          *paVar11 = *(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)
                      ((longlong)aVar4 + 0x2010);
        }
        UNLOCK();
        if (aVar4 == aVar3) {
          local_48._padding_ = 0x1506141e8;
          pFVar7->Hazard = (atomic<unsigned___int64>)0x0;
          local_48.Pointer = (void *)aVar4;
          FHazardPointerCollection::Delete
                    ((FHazardPointerCollection *)(paVar11 + 0x20),&local_48,-1);
        }
      }
      piVar1 = (int *)((longlong)aVar4 + (longlong)iVar2 * 8);
      if ((*(longlong *)((int *)((longlong)aVar4 + 8) + (longlong)iVar2 * 2) == 0) &&
         (iVar2 <= *(int *)((longlong)aVar4 + 0x2008))) {
        lVar5 = *(longlong *)(piVar1 + 2);
        for (; (lVar5 == 0 && ((int)pFVar8 < 10)); pFVar8 = (FTask *)(ulonglong)((int)pFVar8 + 1)) {
          lVar5 = *(longlong *)(piVar1 + 2);
        }
      }
      LOCK();
      pFVar8 = *(FTask **)(piVar1 + 2);
      *(longlong *)(piVar1 + 2) = -1;
      UNLOCK();
    } while (pFVar8 == (FTask *)0x0);
code_r0x0001414913ad:
    pFVar7->Hazard = (atomic<unsigned___int64>)0x0;
    pFVar7->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
    if ((pFVar8 != (FTask *)0x0) ||
       (uVar9 = (int)pFVar10 + 1, pFVar10 = (FTask *)(ulonglong)uVar9, iVar13 <= (int)uVar9)) {
      return pFVar8;
    }
  } while( true );
}

