// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 9

// ~<lambda_1> @ 148d9c4a0

void __thiscall
`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_char> aVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FQueuedLowLevelThreadPool *this_00;
  undefined8 *puVar6;
  FManualResetEvent *pFVar7;
  bool local_res8 [8];
  
  this_00 = *(FQueuedLowLevelThreadPool **)((longlong)this + 0x10);
  if (this_00 != (FQueuedLowLevelThreadPool *)0x0) {
    LOCK();
    paVar2 = &this_00->TaskCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if ((aVar4 == (atomic<unsigned_int>)0x1) && (this_00->bIsExiting != (atomic<bool>)0x0)) {
      pFVar7 = &this_00->Finished;
      LOCK();
      aVar3 = pFVar7->State;
      pFVar7->State = (atomic<unsigned_char>)0x1;
      UNLOCK();
      if (((byte)aVar3 & 3) == 2) {
        UE::ParkingLot::WakeAll(pFVar7);
      }
    }
    else {
      local_res8[0] = false;
      FQueuedLowLevelThreadPool::ScheduleTasks(this_00,local_res8);
    }
  }
  puVar6 = *(undefined8 **)((longlong)this + 8);
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    LOCK();
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  return;
}

// ~FQueuedLowLevelThreadPool @ 148d9cb30

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FQueuedLowLevelThreadPool::~FQueuedLowLevelThreadPool(FQueuedLowLevelThreadPool *this)

{
  int *piVar1;
  int iVar2;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> aVar3;
  longlong *plVar4;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> aVar5;
  longlong lVar6;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *paVar7;
  FHazardRecord *pFVar8;
  ulonglong uVar9;
  longlong *plVar10;
  FHazardPointerCollection *this_00;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *paVar11;
  ulonglong uVar12;
  longlong lVar13;
  THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0> local_58
  ;
  FHazardDeleter local_48;
  
  *(undefined ***)this = &___7FQueuedLowLevelThreadPool__6B_;
  Destroy(this);
  if (*(longlong *)&this->PriorityMapper != 0) {
    plVar4 = *(longlong **)&(this->PriorityMapper).field_0x28;
    plVar10 = (longlong *)&(this->PriorityMapper).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar10 = plVar4;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  paVar11 = (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *)
            &this->Scheduler;
  lVar13 = 6;
  this_00 = (FHazardPointerCollection *)this[1].PendingWork;
  uVar12 = 0;
  do {
    lVar13 = lVar13 + -1;
    paVar11 = paVar11 + -0x240;
    this_00 = (FHazardPointerCollection *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x1000);
    do {
      THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>::
      THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>
                (&local_58,paVar11,this_00);
      pFVar8 = local_58.Record;
      paVar7 = local_58.Hazard;
      do {
        while( true ) {
          do {
            pFVar8->Hazard = (atomic<unsigned___int64>)*paVar7;
            LOCK();
            UNLOCK();
            aVar5 = *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
                      *)&pFVar8->Hazard;
          } while (aVar5 != *paVar7);
          uVar9 = uVar12;
          if ((*(int *)((longlong)aVar5 + 0x2008) <= *(int *)aVar5) &&
             (*(longlong *)((longlong)aVar5 + 0x2010) == 0)) goto code_r0x000148d9ccbd;
          LOCK();
          iVar2 = *(int *)aVar5;
          *(int *)aVar5 = *(int *)aVar5 + 1;
          UNLOCK();
          if (iVar2 < 0x400) break;
          if (*(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *)
               ((longlong)aVar5 + 0x2010) ==
              (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)0x0
             ) goto code_r0x000148d9ccbd;
          LOCK();
          aVar3 = *paVar11;
          if (aVar5 == aVar3) {
            *paVar11 = *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
                         *)((longlong)aVar5 + 0x2010);
          }
          UNLOCK();
          if (aVar5 == aVar3) {
            local_48._padding_ =
                 (longlong)
                 &
                 ___7__THazardDeleter_UNode___FAAArrayQueue_UFQueuedWorkInternalData_FQueuedLowLevelThreadPool_____FHazardPointerCollection__6B_
            ;
            pFVar8->Hazard = (atomic<unsigned___int64>)0x0;
            local_48.Pointer = (void *)aVar5;
            FHazardPointerCollection::Delete(this_00,&local_48,-1);
          }
        }
        piVar1 = (int *)((longlong)aVar5 + (longlong)iVar2 * 8);
        if ((*(longlong *)((int *)((longlong)aVar5 + 8) + (longlong)iVar2 * 2) == 0) &&
           (iVar2 <= *(int *)((longlong)aVar5 + 0x2008))) {
          lVar6 = *(longlong *)(piVar1 + 2);
          for (; (lVar6 == 0 && ((int)uVar9 < 10)); uVar9 = (ulonglong)((int)uVar9 + 1)) {
            lVar6 = *(longlong *)(piVar1 + 2);
          }
        }
        LOCK();
        uVar9 = *(ulonglong *)(piVar1 + 2);
        *(ulonglong *)(piVar1 + 2) = 0xffffffffffffffff;
        UNLOCK();
      } while (uVar9 == 0);
code_r0x000148d9ccbd:
      pFVar8->Hazard = (atomic<unsigned___int64>)0x0;
      pFVar8->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
    } while (uVar9 != 0);
    ::operator_delete((void *)*paVar11,0x2018);
    FHazardPointerCollection::~FHazardPointerCollection(this_00);
    if (lVar13 == 0) {
      FQueuedThreadPool::~FQueuedThreadPool((FQueuedThreadPool *)this);
      return;
    }
  } while( true );
}

// AddQueuedWork @ 148d9e7e0

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __thiscall
FQueuedLowLevelThreadPool::AddQueuedWork
          (FQueuedLowLevelThreadPool *this,IQueuedWork *param_1,EQueuedWorkPriority param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  IQueuedWorkInternalData *pIVar3;
  FScheduler *this_00;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  FQueuedWorkInternalData *pFVar9;
  undefined8 uVar10;
  FTask *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  FQueuedWorkInternalData *pFVar16;
  FQueuedWorkInternalData *pFVar17;
  byte local_res8 [8];
  ulonglong local_res10;
  EQueuedWorkPriority local_res18 [8];
  ulonglong local_res20;
  THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0> local_58
  ;
  
  if ((this->bIsExiting != (atomic<bool>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsExiting == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\QueuedThreadPoolWrapper.h"
                         ,0x1db,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x50,8);
  pFVar16 = (FQueuedWorkInternalData *)0x0;
  pFVar17 = pFVar16;
  if (pFVar9 != (FQueuedWorkInternalData *)0x0) {
    *(undefined8 *)((longlong)&pFVar9->_padding_ + 4) = 0;
    *(undefined8 *)&(pFVar9->Task).field_0x4 = 0;
    *(undefined8 *)&(pFVar9->Task).field_0xc = 0;
    *(undefined8 *)&(pFVar9->Task).field_0x14 = 0;
    *(undefined8 *)&(pFVar9->Task).field_0x1c = 0;
    *(undefined4 *)&(pFVar9->Task).field_0x24 = 0;
    *(undefined4 *)&pFVar9->_padding_ = 0;
    pFVar9->_padding_ = (longlong)&___7FQueuedWorkInternalData_FQueuedLowLevelThreadPool__6B_;
    *(undefined ***)&(pFVar9->Task).field_0x28 =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)&(pFVar9->Task).field_0x38 = 0xe800000000000020;
    *(undefined8 *)&(pFVar9->Task).field_0x30 = 0;
    pFVar17 = pFVar9;
  }
  pFVar9 = (FQueuedWorkInternalData *)(param_1->InternalData).Reference;
  if (pFVar9 != pFVar17) {
    (param_1->InternalData).Reference = (IQueuedWorkInternalData *)pFVar17;
    if (pFVar17 != (FQueuedWorkInternalData *)0x0) {
      LOCK();
      *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar9 != (FQueuedWorkInternalData *)0x0) {
      plVar2 = &pFVar9->_padding_;
      LOCK();
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar9->_padding_)(pFVar9,1);
      }
    }
  }
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->PriorityMapper);
  pcVar4 = *(code **)&this->PriorityMapper;
  plVar2 = *(longlong **)&(this->PriorityMapper).field_0x28;
  plVar14 = (longlong *)&(this->PriorityMapper).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar14 = plVar2;
  }
  uVar10 = (**(code **)(*plVar14 + 8))();
  bVar7 = (*pcVar4)(uVar10,local_res18);
  local_res20 = (ulonglong)bVar7;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 2;
  local_res8[3] = 3;
  local_res8[4] = 4;
  local_res8[5] = 4;
  bVar7 = local_res8[bVar7];
  uVar15 = (uint)bVar7;
  bVar8 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  pIVar3 = (param_1->InternalData).Reference;
  local_res10 = (ulonglong)((byte)~bVar8 & 1);
  if (pIVar3 != (IQueuedWorkInternalData *)0x0) {
    LOCK();
    *(int *)&pIVar3->field_0x8 = *(int *)&pIVar3->field_0x8 + 1;
    UNLOCK();
  }
  if (((*(ulonglong *)&(pFVar17->Task).field_0x38 & 0x20) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(*(longlong *)&(pFVar17->Task).field_0x28 + 0x18))
            (&(pFVar17->Task).field_0x28,&pFVar17->Task);
  *(IQueuedWork **)&pFVar17->Task = param_1;
  *(undefined ***)&(pFVar17->Task).field_0x28 =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(IQueuedWorkInternalData **)&(pFVar17->Task).field_0x8 = pIVar3;
  *(FQueuedLowLevelThreadPool **)&(pFVar17->Task).field_0x10 = this;
  pFVar11 = LowLevelTasks::FTask::GetActiveTask();
  uVar12 = local_res20;
  if (pFVar11 == (FTask *)0x0) {
    if (bVar7 == 6) {
      bVar7 = 1;
    }
    uVar15 = (uint)bVar7;
  }
  else {
    if (bVar7 == 6) {
      uVar15 = (uint)((ulonglong)*(undefined8 *)&pFVar11->field_0x38 >> 0x3b);
    }
    pFVar16 = *(FQueuedWorkInternalData **)&pFVar11->field_0x30;
  }
  *(FQueuedWorkInternalData **)&(pFVar17->Task).field_0x30 = pFVar16;
  *(ulonglong *)&(pFVar17->Task).field_0x38 =
       (((ulonglong)(uVar15 & 7) | local_res10 * 8 + 0x10) << 0x35 | 0x151ce5a20) << 6;
  if (this->bIsPaused == (atomic<bool>)0x0) {
    LOCK();
    this->TaskCount = (atomic<unsigned_int>)((int)this->TaskCount + 1);
    UNLOCK();
    this_00 = this->Scheduler;
    uVar12 = *(ulonglong *)&(pFVar17->Task).field_0x38;
    do {
      puVar1 = &(pFVar17->Task).field_0x38;
      LOCK();
      uVar13 = *(ulonglong *)puVar1;
      bVar6 = uVar12 == uVar13;
      if (bVar6) {
        *(ulonglong *)puVar1 = uVar12 | 2;
        uVar13 = uVar12;
      }
      UNLOCK();
      uVar12 = uVar13;
    } while (!bVar6);
    if ((uVar13 & 2) == 0) {
      LowLevelTasks::FScheduler::LaunchInternal(this_00,&pFVar17->Task,GlobalQueuePreference,true);
    }
  }
  else {
    THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>::
    THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>
              (&local_58,&this->PendingWork[local_res20].tail,
               &this->PendingWork[local_res20].Hazards);
    FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::
    enqueueInternal<THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>_>
              (this->PendingWork + uVar12,pFVar17,&local_58);
    if (local_58.Record != (FHazardRecord *)0x0) {
      (local_58.Record)->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
    }
  }
  return;
}

// Create @ 148da09a0

bool __thiscall
FQueuedLowLevelThreadPool::Create
          (FQueuedLowLevelThreadPool *this,uint param_1,uint param_2,EThreadPriority param_3,
          wchar_t *param_4)

{
  return true;
}

// Destroy @ 148da1110

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __thiscall FQueuedLowLevelThreadPool::Destroy(FQueuedLowLevelThreadPool *this)

{
  int *piVar1;
  int iVar2;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> aVar3;
  longlong lVar4;
  FScheduler *this_00;
  code *pcVar5;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *paVar6;
  FHazardRecord *pFVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  bool bVar15;
  THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0> local_58
  ;
  FHazardDeleter local_48;
  
  LOCK();
  this->bIsExiting = (atomic<bool>)0x1;
  UNLOCK();
  plVar13 = (longlong *)0x0;
  plVar11 = plVar13;
  do {
    iVar14 = (int)plVar11;
    THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>::
    THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>
              (&local_58,&this->PendingWork[iVar14].head,&this->PendingWork[iVar14].Hazards);
    pFVar7 = local_58.Record;
    paVar6 = local_58.Hazard;
    do {
      while( true ) {
        do {
          pFVar7->Hazard = (atomic<unsigned___int64>)*paVar6;
          LOCK();
          UNLOCK();
          aVar3 = *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
                    *)&pFVar7->Hazard;
        } while (aVar3 != *paVar6);
        plVar12 = plVar13;
        if ((*(int *)((longlong)aVar3 + 0x2008) <= *(int *)aVar3) &&
           (*(longlong *)((longlong)aVar3 + 0x2010) == 0)) goto code_r0x000148da1279;
        LOCK();
        iVar2 = *(int *)aVar3;
        *(int *)aVar3 = *(int *)aVar3 + 1;
        UNLOCK();
        if (iVar2 < 0x400) break;
        if (*(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *)
             ((longlong)aVar3 + 0x2010) ==
            (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)0x0)
        goto code_r0x000148da1279;
        LOCK();
        bVar15 = aVar3 == this->PendingWork[iVar14].head;
        if (bVar15) {
          this->PendingWork[iVar14].head =
               *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *
                )((longlong)aVar3 + 0x2010);
        }
        UNLOCK();
        if (bVar15) {
          local_48._padding_ =
               (longlong)
               &
               ___7__THazardDeleter_UNode___FAAArrayQueue_UFQueuedWorkInternalData_FQueuedLowLevelThreadPool_____FHazardPointerCollection__6B_
          ;
          pFVar7->Hazard = (atomic<unsigned___int64>)0x0;
          local_48.Pointer = (void *)aVar3;
          FHazardPointerCollection::Delete(&this->PendingWork[iVar14].Hazards,&local_48,-1);
        }
      }
      piVar1 = (int *)((longlong)aVar3 + (longlong)iVar2 * 8);
      if ((*(longlong *)((int *)((longlong)aVar3 + 8) + (longlong)iVar2 * 2) == 0) &&
         (iVar2 <= *(int *)((longlong)aVar3 + 0x2008))) {
        lVar4 = *(longlong *)(piVar1 + 2);
        for (plVar11 = plVar13; (lVar4 == 0 && ((int)plVar11 < 10));
            plVar11 = (longlong *)(ulonglong)((int)plVar11 + 1)) {
          lVar4 = *(longlong *)(piVar1 + 2);
        }
      }
      LOCK();
      plVar12 = *(longlong **)(piVar1 + 2);
      *(longlong *)(piVar1 + 2) = -1;
      UNLOCK();
    } while (plVar12 == (longlong *)0x0);
code_r0x000148da1279:
    pFVar7->Hazard = (atomic<unsigned___int64>)0x0;
    pFVar7->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
    if (plVar12 == (longlong *)0x0) {
      plVar11 = (longlong *)(ulonglong)(iVar14 + 1U);
      if (5 < (int)(iVar14 + 1U)) {
        if (this->TaskCount != (atomic<unsigned_int>)0x0) {
          UE::FManualResetEvent::Wait(&this->Finished);
        }
        return;
      }
    }
    else {
      cVar8 = (**(code **)(*plVar12 + 8))(plVar12);
      if ((cVar8 == '\0') &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("QueuedWork->Retract()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\QueuedThreadPoolWrapper.h"
                              ,0x21b,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      this->TaskCount = (atomic<unsigned_int>)((int)this->TaskCount + 1);
      UNLOCK();
      this_00 = this->Scheduler;
      uVar9 = plVar12[9];
      do {
        LOCK();
        uVar10 = plVar12[9];
        bVar15 = uVar9 == uVar10;
        if (bVar15) {
          plVar12[9] = uVar9 | 2;
          uVar10 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar10;
      } while (!bVar15);
      plVar11 = plVar13;
      if ((uVar10 & 2) == 0) {
        LowLevelTasks::FScheduler::LaunchInternal
                  (this_00,(FTask *)(plVar12 + 2),GlobalQueuePreference,true);
      }
    }
  } while( true );
}

// FinalizeExecution @ 148da30c0

void __thiscall FQueuedLowLevelThreadPool::FinalizeExecution(FQueuedLowLevelThreadPool *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_char> aVar2;
  atomic<unsigned_int> aVar3;
  FManualResetEvent *pFVar4;
  bool local_res8 [32];
  
  LOCK();
  paVar1 = &this->TaskCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((aVar3 == (atomic<unsigned_int>)0x1) && (this->bIsExiting != (atomic<bool>)0x0)) {
    pFVar4 = &this->Finished;
    LOCK();
    aVar2 = pFVar4->State;
    pFVar4->State = (atomic<unsigned_char>)0x1;
    UNLOCK();
    if (((byte)aVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pFVar4);
      return;
    }
  }
  else {
    local_res8[0] = false;
    ScheduleTasks(this,local_res8);
  }
  return;
}

// GetNumThreads @ 148da3e00

int __thiscall FQueuedLowLevelThreadPool::GetNumThreads(FQueuedLowLevelThreadPool *this)

{
  return (int)this->Scheduler->ActiveWorkers;
}

// RetractQueuedWork @ 148db1a20

bool __thiscall
FQueuedLowLevelThreadPool::RetractQueuedWork(FQueuedLowLevelThreadPool *this,IQueuedWork *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  IQueuedWorkInternalData *pIVar3;
  undefined1 uVar4;
  bool local_res10 [8];
  
  uVar4 = 0;
  pIVar3 = (param_1->InternalData).Reference;
  if (pIVar3 != (IQueuedWorkInternalData *)0x0) {
    uVar4 = (**(code **)(*(longlong *)pIVar3 + 8))();
    pIVar3 = (param_1->InternalData).Reference;
    if (pIVar3 != (IQueuedWorkInternalData *)0x0) {
      (param_1->InternalData).Reference = (IQueuedWorkInternalData *)0x0;
      puVar1 = &pIVar3->field_0x8;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)pIVar3)();
      }
    }
  }
  local_res10[0] = true;
  ScheduleTasks(this,local_res10);
  return (bool)uVar4;
}

// ScheduleTasks @ 148db1ab0

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __thiscall
FQueuedLowLevelThreadPool::ScheduleTasks(FQueuedLowLevelThreadPool *this,bool *param_1)

{
  int *piVar1;
  int iVar2;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> aVar3;
  longlong lVar4;
  FScheduler *this_00;
  atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *paVar5;
  FHazardRecord *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0> local_58
  ;
  FHazardDeleter local_48;
  
  if (this->bIsPaused != (atomic<bool>)0x0) {
    return;
  }
  uVar10 = 0;
  uVar7 = uVar10;
  do {
    iVar11 = (int)uVar7;
    THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>::
    THazardPointer<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node,0>
              (&local_58,&this->PendingWork[iVar11].head,&this->PendingWork[iVar11].Hazards);
    pFVar6 = local_58.Record;
    paVar5 = local_58.Hazard;
    do {
      while( true ) {
        do {
          pFVar6->Hazard = (atomic<unsigned___int64>)*paVar5;
          LOCK();
          UNLOCK();
          aVar3 = *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>
                    *)&pFVar6->Hazard;
        } while (aVar3 != *paVar5);
        uVar7 = uVar10;
        if ((*(int *)((longlong)aVar3 + 0x2008) <= *(int *)aVar3) &&
           (*(longlong *)((longlong)aVar3 + 0x2010) == 0)) goto code_r0x000148db1c2d;
        LOCK();
        iVar2 = *(int *)aVar3;
        *(int *)aVar3 = *(int *)aVar3 + 1;
        UNLOCK();
        if (iVar2 < 0x400) break;
        if (*(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *)
             ((longlong)aVar3 + 0x2010) ==
            (atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*>)0x0)
        goto code_r0x000148db1c2d;
        LOCK();
        bVar12 = aVar3 == this->PendingWork[iVar11].head;
        if (bVar12) {
          this->PendingWork[iVar11].head =
               *(atomic<FAAArrayQueue<FQueuedLowLevelThreadPool::FQueuedWorkInternalData>::Node_*> *
                )((longlong)aVar3 + 0x2010);
        }
        UNLOCK();
        if (bVar12) {
          local_48._padding_ =
               (longlong)
               &
               ___7__THazardDeleter_UNode___FAAArrayQueue_UFQueuedWorkInternalData_FQueuedLowLevelThreadPool_____FHazardPointerCollection__6B_
          ;
          pFVar6->Hazard = (atomic<unsigned___int64>)0x0;
          local_48.Pointer = (void *)aVar3;
          FHazardPointerCollection::Delete(&this->PendingWork[iVar11].Hazards,&local_48,-1);
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
code_r0x000148db1c2d:
    pFVar6->Hazard = (atomic<unsigned___int64>)0x0;
    pFVar6->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
    if (uVar7 == 0) {
      uVar7 = (ulonglong)(iVar11 + 1U);
      if (5 < (int)(iVar11 + 1U)) {
        return;
      }
    }
    else {
      this_00 = this->Scheduler;
      bVar12 = *param_1;
      uVar8 = *(ulonglong *)(uVar7 + 0x48);
      do {
        LOCK();
        uVar9 = *(ulonglong *)(uVar7 + 0x48);
        bVar13 = uVar8 == uVar9;
        if (bVar13) {
          *(ulonglong *)(uVar7 + 0x48) = uVar8 | 2;
          uVar9 = uVar8;
        }
        UNLOCK();
        uVar8 = uVar9;
      } while (!bVar13);
      if ((uVar9 & 2) == 0) {
        LowLevelTasks::FScheduler::LaunchInternal
                  (this_00,(FTask *)(uVar7 + 0x10),(uint)(bVar12 == false),bVar12);
      }
      LOCK();
      this->TaskCount = (atomic<unsigned_int>)((int)this->TaskCount + 1);
      UNLOCK();
      *param_1 = true;
      uVar7 = uVar10;
      if (this->bIsPaused != (atomic<bool>)0x0) {
        return;
      }
    }
  } while( true );
}

