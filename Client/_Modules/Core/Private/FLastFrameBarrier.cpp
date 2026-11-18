// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~FLastFrameBarrier @ 1419d2b50

void __thiscall FLastFrameBarrier::~FLastFrameBarrier(FLastFrameBarrier *this)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  FBaseGraphTask *pFVar5;
  FTaskBase *pFVar6;
  
  pFVar5 = (this->Event).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pFVar6 = (this->Barrier).Pimpl.Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &pFVar6->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  return;
}

// Reset @ 141a1a310

void __thiscall FLastFrameBarrier::Reset(FLastFrameBarrier *this)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  FBaseGraphTask *pFVar5;
  FTaskBase *pFVar6;
  FLastFrameBarrier local_18;
  
  pFVar5 = (this->Event).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->Event).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  if (this != &local_18) {
    pFVar6 = (this->Barrier).Pimpl.Reference;
    (this->Barrier).Pimpl.Reference = (FTaskBase *)0x0;
    if (pFVar6 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar6->RefCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  return;
}

// Wait @ 141a2f460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FLastFrameBarrier::Wait(FLastFrameBarrier *this)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FTaskBase *pFVar7;
  FTask *pFVar8;
  FTaskGraphInterface *pFVar9;
  FTaskBase *pFVar10;
  undefined8 *puVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  undefined8 uVar13;
  TRefCountPtr<FBaseGraphTask> *pTVar14;
  undefined1 auStackY_b8 [32];
  EExtendedTaskPriority local_78;
  ETaskPriority local_77 [7];
  TRefCountPtr<FBaseGraphTask> local_70;
  FLastFrameBarrier local_68;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_58;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar6 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar6) {
    pFVar7 = (this->Barrier).Pimpl.Reference;
    if (pFVar7 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar7);
    }
    pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                         *)&UE::Tasks::Private::SmallTaskAllocator);
    if (pFVar7 == (FTaskBase *)0x0) {
      pFVar7 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
      pFVar7->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FLastFrameBarrier::Wait'::`5'::<lambda_1>,void,void>::_vftable_;
      if (((*(ulonglong *)&(pFVar7->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*(longlong *)&(pFVar7->LowLevelTask).field_0x28 + 0x18))
                (&(pFVar7->LowLevelTask).field_0x28,&pFVar7->LowLevelTask);
      *(FTaskBase **)&pFVar7->LowLevelTask = pFVar7;
      *(undefined ***)&(pFVar7->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(pFVar7->LowLevelTask).field_0x8 = pFVar7;
      pFVar8 = LowLevelTasks::FTask::GetActiveTask();
      if (pFVar8 == (FTask *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)&pFVar8->field_0x30;
      }
      *(undefined8 *)&(pFVar7->LowLevelTask).field_0x30 = uVar13;
      *(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 = 0xc80000541b52cc00;
      pFVar7->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&pFVar7->_padding_);
      pFVar7->_padding_ =
           (longlong)
           &UE::Tasks::Private::TExecutableTask<`FLastFrameBarrier::Wait'::`5'::<lambda_1>_>::
            _vftable_;
    }
    LOCK();
    GStatsPipe.TaskCount = (atomic<unsigned___int64>)((longlong)GStatsPipe.TaskCount + 1);
    UNLOCK();
    LOCK();
    pFVar7->NumLocks = (atomic<unsigned_int>)((int)pFVar7->NumLocks + 1);
    UNLOCK();
    pFVar7->Pipe = &GStatsPipe;
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x100);
    if (this != &local_68) {
      pFVar10 = (this->Barrier).Pimpl.Reference;
      (this->Barrier).Pimpl.Reference = pFVar7;
      if (pFVar10 == (FTaskBase *)0x0) {
        return;
      }
      LOCK();
      paVar2 = &pFVar10->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 != (atomic<unsigned_int>)0x1) {
        return;
      }
      puVar11 = (undefined8 *)pFVar10->_padding_;
      goto LAB_141a2f80e;
    }
    if (pFVar7 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar2 = &pFVar7->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    pFVar10 = pFVar7;
  }
  else {
    pTVar14 = &this->Event;
    pFVar7 = (FTaskBase *)0x0;
    if (pTVar14->Reference != (FBaseGraphTask *)0x0) {
      pFVar9 = FTaskGraphInterface::Get();
      pcVar5 = *(code **)((longlong)*pFVar9 + 0x60);
      local_70.Reference = pTVar14->Reference;
      if (local_70.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&(local_70.Reference)->field_0x30 = *(int *)&(local_70.Reference)->field_0x30 + 1;
        UNLOCK();
      }
      local_58.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_30 = 1;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,1,0,&local_58,1,&local_2c);
      FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
      if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar12 = local_58.SecondaryData;
      }
      ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                ((void *)FVar12,&local_70,1);
      (*pcVar5)(pFVar9,&local_58,0x101);
      FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
      if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar12 = local_58.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar12,local_30);
      if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_58.SecondaryData);
      }
      if (local_70.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(local_70.Reference)->field_0x30;
        iVar4 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
        }
      }
    }
    pFVar10 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
    if (pFVar10 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar10,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar10->_padding_ = (longlong)&___7__TGraphTask_VFNullGraphTask____6B_;
      pFVar7 = pFVar10;
    }
    pFVar7[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    *(undefined4 *)&pFVar7[1]._padding_ = 1;
    UE::Tasks::Private::TranslatePriority(GameThread,local_77,&local_78);
    UE::Tasks::Private::FTaskBase::Init(pFVar7,L"GraphTask",local_77[0],local_78,None);
    if (pFVar7 != (FTaskBase *)0x0) {
      LOCK();
      pFVar7->RefCount = (atomic<unsigned_int>)((int)pFVar7->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar7,0xe8);
    if (pTVar14 != &local_68.Event) {
      pFVar10 = (FTaskBase *)pTVar14->Reference;
      pTVar14->Reference = (FBaseGraphTask *)pFVar7;
      if (pFVar10 == (FTaskBase *)0x0) {
        return;
      }
      LOCK();
      paVar2 = &pFVar10->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 != (atomic<unsigned_int>)0x1) {
        return;
      }
      puVar11 = (undefined8 *)pFVar10->_padding_;
      goto LAB_141a2f80e;
    }
    if (pFVar7 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar2 = &pFVar7->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    pFVar10 = pFVar7;
  }
  if (aVar3 != (atomic<unsigned_int>)0x1) {
    return;
  }
  puVar11 = (undefined8 *)pFVar10->_padding_;
LAB_141a2f80e:
  (*(code *)*puVar11)(pFVar10,1);
  return;
}

