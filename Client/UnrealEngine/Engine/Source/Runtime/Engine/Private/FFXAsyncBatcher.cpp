// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Flush @ 148174bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FFXAsyncBatcher::Flush(FFXAsyncBatcher *this)

{
  atomic<unsigned_int> *paVar1;
  undefined1 *puVar2;
  int *piVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  FBaseGraphTask *pFVar7;
  code *pcVar8;
  bool bVar9;
  Type TVar10;
  FTaskBase *pFVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  FTaskBase *this_00;
  EExtendedTaskPriority local_res8 [8];
  ETaskPriority local_res10 [8];
  
  if (this->NumBatched == 0) {
    return;
  }
  if (((this->FinalizeDispatchCounter == (FThreadSafeCounter *)0x0) ||
      (this->FinalizeDispatchCounter->Counter != this->NumBatched)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FinalizeDispatchCounter && FinalizeDispatchCounter->GetValue() == NumBatched"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                         ,0x82c,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar5 = (this->DispatchEvent).ArrayNum;
  this_00 = (FTaskBase *)0x0;
  if (iVar5 != 0) {
    if ((iVar5 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar6 = (this->DispatchEvent).AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
    if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar12 = FVar6;
    }
    if (*(longlong *)FVar12 != 0) {
      if (((this->DispatchEvent).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar6 = (this->DispatchEvent).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
      if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar12 = FVar6;
      }
      if (*(char *)(*(longlong *)FVar12 + 0xd0) == '\0') goto LAB_148174cf7;
    }
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("DispatchEvent.Num() && DispatchEvent[0].GetReference() && !DispatchEvent[0]->IsComplete()"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                     ,0x82d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148174cf7:
  if (((this->DispatchEvent).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar6 = (this->DispatchEvent).AllocatorInstance.SecondaryData;
  FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
  if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar12 = FVar6;
  }
  pFVar11 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
  if (pFVar11 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)pFVar11,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    pFVar11->_padding_ = (longlong)&___7__TGraphTask_VFDispatchBatchedAsyncTasks____6B_;
    this_00 = pFVar11;
  }
  pFVar11 = this_00 + 1;
  ((TRefCountPtr<FBaseGraphTask> *)&pFVar11->_padding_)->Reference = (FBaseGraphTask *)0x0;
  pFVar7 = *(FBaseGraphTask **)FVar12;
  ((TRefCountPtr<FBaseGraphTask> *)&pFVar11->_padding_)->Reference = pFVar7;
  if (pFVar7 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar7->field_0x30 = *(int *)&pFVar7->field_0x30 + 1;
    UNLOCK();
  }
  TVar10 = FDispatchBatchedAsyncTasks::GetDesiredThread((FDispatchBatchedAsyncTasks *)pFVar11);
  UE::Tasks::Private::TranslatePriority(TVar10,local_res10,local_res8);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res10[0],local_res8[0],None);
  if (this_00 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0xe0);
  }
  else {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xe0);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  pFVar7 = (this->FinalizeOnGTDispatchEvent).Reference;
  if (pFVar7 != (FBaseGraphTask *)0x0) {
    (this->FinalizeOnGTDispatchEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar2 = &pFVar7->field_0x30;
    iVar5 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
    }
  }
  FVar6 = (this->DispatchEvent).AllocatorInstance.SecondaryData;
  FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
  if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar12 = FVar6;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar12,(this->DispatchEvent).ArrayNum);
  piVar3 = &(this->DispatchEvent).ArrayMax;
  (this->DispatchEvent).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,0,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)this,0,piVar3);
  }
  this->NumBatched = 0;
  this->FinalizeDispatchCounter = (FThreadSafeCounter *)0x0;
  return;
}

// GetAsyncPrereq @ 148177b30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
FFXAsyncBatcher::GetAsyncPrereq
          (FFXAsyncBatcher *this,TRefCountPtr<FBaseGraphTask> *param_1,FThreadSafeCounter **param_2)

{
  int *piVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  atomic<unsigned_int> *paVar3;
  undefined1 *puVar4;
  atomic<unsigned_int> aVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  longlong lVar7;
  FBaseGraphTask *pFVar8;
  FBaseGraphTask *pFVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
  *pTVar14;
  FTaskBase *pFVar15;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar16;
  FTaskBase *pFVar17;
  undefined8 *puVar18;
  FTaskBase *pFVar19;
  EExtendedTaskPriority local_res20 [8];
  ETaskPriority local_48 [8];
  FTaskBase *local_40;
  undefined8 local_38 [2];
  
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0x80c,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)(*pcVar10)();
    return pTVar13;
  }
  if (GBatchParticleAsync == 0) {
    if (((param_1->Reference != (FBaseGraphTask *)0x0) || (*param_2 != (FThreadSafeCounter *)0x0))
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("!OutFinalizeBatchEvent.GetReference() && !OutFinalizeDispatchCounter"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                               ,0x824,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)(*pcVar10)();
      return pTVar13;
    }
    return (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
  }
  pFVar19 = (FTaskBase *)0x0;
  if ((this->NumBatched < GBatchParticleAsyncBatchSize) &&
     (iVar12 = (this->DispatchEvent).ArrayNum, iVar12 != 0)) {
    if ((iVar12 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)(*pcVar10)();
      return pTVar13;
    }
    FVar6 = (this->DispatchEvent).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
    if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar16 = FVar6;
    }
    if (*(longlong *)FVar16 == 0) goto LAB_148177c47;
    if (((this->DispatchEvent).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)(*pcVar10)();
      return pTVar13;
    }
    FVar6 = (this->DispatchEvent).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
    if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar16 = FVar6;
    }
    if (*(char *)(*(longlong *)FVar16 + 0xd0) != '\0') goto LAB_148177c47;
  }
  else {
LAB_148177c47:
    Flush(this);
  }
  if ((this->DispatchEvent).ArrayNum != 0) goto LAB_148177fb9;
  if ((((this->NumBatched != 0) || (this->FinalizeDispatchCounter != (FThreadSafeCounter *)0x0)) ||
      ((this->FinalizeOnGTDispatchEvent).Reference != (FBaseGraphTask *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBatched == 0 && !FinalizeDispatchCounter && !FinalizeOnGTDispatchEvent.GetReference()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0x816,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)(*pcVar10)();
    return pTVar13;
  }
  pTVar14 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             *)GetGraphEventImplAllocator();
  pFVar15 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate(pTVar14);
  local_40 = pFVar19;
  if (pFVar15 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)pFVar15,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    pFVar15->_padding_ = (longlong)&___7FGraphEventImpl__6B_;
    TaskTrace::Created((ulong64)pFVar15->TraceId,0xd8);
    UE::Tasks::Private::FTaskBase::Init(pFVar15,L"GraphEvent",Default,TaskEvent,None);
    local_40 = pFVar15;
  }
  FVar6 = (this->DispatchEvent).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
  if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar16 = FVar6;
  }
  if ((ulonglong)FVar16 <= &local_40) {
    FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
    if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar16 = FVar6;
    }
    if ((&local_40 < (FTaskBase **)((longlong)FVar16 + (longlong)(this->DispatchEvent).ArrayMax * 8)
        ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)(*pcVar10)();
      return pTVar13;
    }
  }
  iVar12 = (this->DispatchEvent).ArrayNum;
  piVar1 = &(this->DispatchEvent).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)this,piVar1);
    (this->DispatchEvent).ArrayNum = iVar12;
  }
  (this->DispatchEvent).ArrayNum = iVar12 + 1;
  FVar6 = (this->DispatchEvent).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
  if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar16 = FVar6;
  }
  puVar18 = (undefined8 *)((longlong)FVar16 + (longlong)iVar12 * 8);
  *puVar18 = 0;
  *puVar18 = local_40;
  local_40 = (FTaskBase *)0x0;
  pTVar14 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             *)GetGraphEventImplAllocator();
  pFVar17 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate(pTVar14);
  pFVar15 = pFVar19;
  if (pFVar17 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)pFVar17,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    pFVar17->_padding_ = (longlong)&___7FGraphEventImpl__6B_;
    TaskTrace::Created((ulong64)pFVar17->TraceId,0xd8);
    UE::Tasks::Private::FTaskBase::Init(pFVar17,L"GraphEvent",Default,TaskEvent,None);
    pFVar15 = pFVar17;
  }
  pTVar2 = &this->FinalizeOnGTDispatchEvent;
  if (pTVar2 == (TRefCountPtr<FBaseGraphTask> *)local_38) {
    if (pFVar15 != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = &pFVar15->RefCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        puVar18 = (undefined8 *)pFVar15->_padding_;
        goto LAB_148177e5e;
      }
    }
  }
  else {
    pFVar17 = (FTaskBase *)pTVar2->Reference;
    pTVar2->Reference = (FBaseGraphTask *)pFVar15;
    if (pFVar17 != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = &pFVar17->RefCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        puVar18 = (undefined8 *)pFVar17->_padding_;
        pFVar15 = pFVar17;
LAB_148177e5e:
        (*(code *)*puVar18)(pFVar15,1);
      }
    }
  }
  if (((this->DispatchEvent).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)(*pcVar10)();
    return pTVar13;
  }
  FVar6 = (this->DispatchEvent).AllocatorInstance.SecondaryData;
  FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
  if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar16 = FVar6;
  }
  pFVar17 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
  pFVar15 = pFVar19;
  if (pFVar17 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)pFVar17,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    pFVar17->_padding_ = (longlong)&___7__TGraphTask_VFGameThreadDispatchBatchedAsyncTasks____6B_;
    pFVar15 = pFVar17;
  }
  pFVar15[1]._padding_ = 0;
  lVar7 = *(longlong *)FVar16;
  pFVar15[1]._padding_ = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
    UNLOCK();
  }
  UE::Tasks::Private::TranslatePriority(GameThread,local_48,local_res20);
  UE::Tasks::Private::FTaskBase::Init(pFVar15,L"GraphTask",local_48[0],local_res20[0],None);
  if (pFVar15 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0xe0);
  }
  else {
    LOCK();
    pFVar15->RefCount = (atomic<unsigned_int>)((int)pFVar15->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar15,0xe0);
    LOCK();
    paVar3 = &pFVar15->RefCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar15->_padding_)(pFVar15,1);
    }
  }
  if ((this->FinalizeDispatchCounter != (FThreadSafeCounter *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!FinalizeDispatchCounter",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                          ,0x81a,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)(*pcVar10)();
    return pTVar13;
  }
  pFVar15 = ::operator_new(4);
  if (pFVar15 != (FTaskBase *)0x0) {
    *(undefined4 *)&pFVar15->_padding_ = 0;
    pFVar19 = pFVar15;
  }
  this->FinalizeDispatchCounter = (FThreadSafeCounter *)pFVar19;
LAB_148177fb9:
  pFVar8 = (this->FinalizeOnGTDispatchEvent).Reference;
  pFVar9 = param_1->Reference;
  if (pFVar9 != pFVar8) {
    param_1->Reference = pFVar8;
    if (pFVar8 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar8->field_0x30 = *(int *)&pFVar8->field_0x30 + 1;
      UNLOCK();
    }
    if (pFVar9 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar4 = &pFVar9->field_0x30;
      iVar12 = *(int *)puVar4;
      *(int *)puVar4 = *(int *)puVar4 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
      }
    }
  }
  LOCK();
  this->FinalizeDispatchCounter->Counter = this->FinalizeDispatchCounter->Counter + 1;
  UNLOCK();
  *param_2 = this->FinalizeDispatchCounter;
  this->NumBatched = this->NumBatched + 1;
  return &this->DispatchEvent;
}

