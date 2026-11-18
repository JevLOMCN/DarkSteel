// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 22

// FAllocationsQuery @ 14d420990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAllocationsQuery * __thiscall
TraceServices::FAllocationsQuery::FAllocationsQuery
          (FAllocationsQuery *this,FAllocationsProvider *param_1,FQueryParams *param_2)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  double dVar4;
  undefined4 uVar5;
  FTaskBase *pFVar6;
  FTaskBase *pFVar7;
  undefined8 *puVar8;
  FTaskBase *this_00;
  EExtendedTaskPriority local_res8 [8];
  ETaskPriority local_res10 [8];
  longlong local_28 [2];
  
  this->AllocationsProvider = param_1;
  uVar5 = *(undefined4 *)&param_2->field_0x4;
  dVar4 = param_2->TimeA;
  (this->Params).Rule = param_2->Rule;
  *(undefined4 *)&(this->Params).field_0x4 = uVar5;
  (this->Params).TimeA = dVar4;
  dVar4 = param_2->TimeC;
  (this->Params).TimeB = param_2->TimeB;
  (this->Params).TimeC = dVar4;
  (this->Params).TimeD = param_2->TimeD;
  pFVar6 = ::operator_new(0x10);
  this_00 = (FTaskBase *)0x0;
  pFVar7 = this_00;
  if (pFVar6 != (FTaskBase *)0x0) {
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar7 = pFVar6;
  }
  (this->Results).Tail = (TNode *)pFVar7;
  pTVar1 = &this->CompletedEvent;
  (this->Results).Head = (TNode *)pFVar7;
  this->IsWorking = (atomic<bool>)0x1;
  this->IsCanceling = (atomic<bool>)0x0;
  pTVar1->Reference = (FBaseGraphTask *)0x0;
  pFVar7 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
  if (pFVar7 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)pFVar7,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    pFVar7->_padding_ = (longlong)&___7__TGraphTask_VFAllocationsQueryAsyncTask_TraceServices____6B_
    ;
    this_00 = pFVar7;
  }
  this_00[1]._padding_ = (longlong)this;
  UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_res10,local_res8);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res10[0],local_res8[0],None);
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xe0);
  if (pTVar1 == (TRefCountPtr<FBaseGraphTask> *)local_28) {
    if (this_00 == (FTaskBase *)0x0) {
      return this;
    }
    LOCK();
    paVar2 = &this_00->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return this;
    }
    puVar8 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar7 = (FTaskBase *)pTVar1->Reference;
    pTVar1->Reference = (FBaseGraphTask *)this_00;
    if (pFVar7 == (FTaskBase *)0x0) {
      return this;
    }
    LOCK();
    paVar2 = &pFVar7->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return this;
    }
    puVar8 = (undefined8 *)pFVar7->_padding_;
    this_00 = pFVar7;
  }
  (*(code *)*puVar8)(this_00,1);
  return this;
}

// operator() @ 14d42d500

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l14::<lambda_10>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAllocationItem *local_18 [2];
  
  if ((param_1->StartTime <= *(double *)this) &&
     (*(double *)((longlong)this + 8) < param_1->EndTime ||
      *(double *)((longlong)this + 8) == param_1->EndTime)) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    local_18[0] = param_1;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FAllocationItem **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d42d5e0

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l15::<lambda_11>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  dVar2 = param_1->StartTime;
  if (((*(double *)this <= dVar2) &&
      (dVar2 < *(double *)((longlong)this + 8) || dVar2 == *(double *)((longlong)this + 8))) &&
     (*(double *)((longlong)this + 0x10) < param_1->EndTime ||
      *(double *)((longlong)this + 0x10) == param_1->EndTime)) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
    local_18[0] = param_1;
    if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d42d6c0

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l16::<lambda_12>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  if ((((*(double *)this <= param_1->StartTime) &&
       (param_1->StartTime <= *(double *)((longlong)this + 8))) &&
      (dVar2 = param_1->EndTime, *(double *)((longlong)this + 8) <= dVar2)) &&
     (dVar2 < *(double *)((longlong)this + 0x10) || dVar2 == *(double *)((longlong)this + 0x10))) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
    local_18[0] = param_1;
    if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d42d7b0

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l17::<lambda_13>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  if (((param_1->StartTime <= *(double *)this) &&
      (dVar2 = param_1->EndTime, *(double *)((longlong)this + 8) <= dVar2)) &&
     (dVar2 < *(double *)((longlong)this + 0x10) || dVar2 == *(double *)((longlong)this + 0x10))) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
    local_18[0] = param_1;
    if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d42d890

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l18::<lambda_14>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  dVar2 = param_1->StartTime;
  if ((((*(double *)this <= dVar2) &&
       (dVar2 < *(double *)((longlong)this + 8) || dVar2 == *(double *)((longlong)this + 8))) &&
      (dVar2 = param_1->EndTime, *(double *)((longlong)this + 0x10) <= dVar2)) &&
     (dVar2 < *(double *)((longlong)this + 0x18) || dVar2 == *(double *)((longlong)this + 0x18))) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x20);
    local_18[0] = param_1;
    if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d42d980

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l19::<lambda_15>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  dVar2 = param_1->StartTime;
  if ((param_1->Flags & Swap) == None) {
    if (*(double *)((longlong)this + 8) <= dVar2 && dVar2 != *(double *)((longlong)this + 8)) {
      return;
    }
    if (param_1->EndTime <= *(double *)this && *(double *)this != param_1->EndTime) {
      return;
    }
  }
  else {
    if (dVar2 < *(double *)this) {
      return;
    }
    if (*(double *)((longlong)this + 8) <= dVar2 && dVar2 != *(double *)((longlong)this + 8)) {
      return;
    }
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
  local_18[0] = param_1;
  if (((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar6 + 1;
  *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// operator() @ 14d42da80

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l20::<lambda_16>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  if ((param_1->Flags & Swap) == None) {
    if (*(double *)((longlong)this + 8) < param_1->StartTime) {
      return;
    }
    if (param_1->EndTime <= *(double *)this && *(double *)this != param_1->EndTime) {
      return;
    }
  }
  else {
    dVar2 = param_1->EndTime;
    if (dVar2 < *(double *)this) {
      return;
    }
    if (*(double *)((longlong)this + 8) <= dVar2 && dVar2 != *(double *)((longlong)this + 8)) {
      return;
    }
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
  local_18[0] = param_1;
  if (((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar6 + 1;
  *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// operator() @ 14d4313a0

void __thiscall
`TraceServices::FAllocationsQuery::Run'::__l2::<lambda_1>::operator()
          (void *this,uint param_1,FHeapSpec *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(uint *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14d431730

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l5::<lambda_1>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  dVar2 = *(double *)this;
  if ((param_1->StartTime <= dVar2) && (dVar2 < param_1->EndTime || dVar2 == param_1->EndTime)) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    local_18[0] = param_1;
    if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d434630

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l6::<lambda_2>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAllocationItem *local_18 [2];
  
  if (param_1->EndTime <= *(double *)this) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    local_18[0] = param_1;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FAllocationItem **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d4347e0

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l7::<lambda_3>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAllocationItem *local_18 [2];
  
  if (*(double *)this < param_1->StartTime || *(double *)this == param_1->StartTime) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    local_18[0] = param_1;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FAllocationItem **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d4348b0

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l8::<lambda_4>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  if (((param_1->StartTime <= *(double *)this) &&
      (dVar2 = param_1->EndTime, *(double *)this <= dVar2)) &&
     (dVar2 < *(double *)((longlong)this + 8) || dVar2 == *(double *)((longlong)this + 8))) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    local_18[0] = param_1;
    if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d434990

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l9::<lambda_5>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  if (((*(double *)this <= param_1->StartTime) &&
      (dVar2 = *(double *)((longlong)this + 8), param_1->StartTime <= dVar2)) &&
     (dVar2 < param_1->EndTime || dVar2 == param_1->EndTime)) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    local_18[0] = param_1;
    if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d434a70

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l10::<lambda_6>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FAllocationItem *local_18 [2];
  
  dVar2 = *(double *)this;
  dVar3 = param_1->StartTime;
  if (dVar3 <= dVar2) {
    dVar4 = param_1->EndTime;
    if ((dVar2 <= dVar4) &&
       (dVar4 < *(double *)((longlong)this + 8) || dVar4 == *(double *)((longlong)this + 8)))
    goto LAB_14d434ab9;
    if (dVar3 < dVar2) {
      return;
    }
  }
  dVar2 = *(double *)((longlong)this + 8);
  if (dVar2 < dVar3) {
    return;
  }
  if (param_1->EndTime <= dVar2 && dVar2 != param_1->EndTime) {
    return;
  }
LAB_14d434ab9:
  pFVar5 = *(ForAnyElementType **)((longlong)this + 0x10);
  local_18[0] = param_1;
  if (((pFVar5->Data <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = *(int *)&pFVar5[1].Data;
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar8 + 1;
  *(FAllocationItem **)(pFVar5->Data + (longlong)iVar8 * 8) = local_18[0];
  return;
}

// operator() @ 14d434b70

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l11::<lambda_7>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  dVar2 = param_1->EndTime;
  if ((*(double *)this <= dVar2) &&
     (dVar2 < *(double *)((longlong)this + 8) || dVar2 == *(double *)((longlong)this + 8))) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    local_18[0] = param_1;
    if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d434c40

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l12::<lambda_8>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_18 [2];
  
  dVar2 = param_1->StartTime;
  if ((*(double *)this <= dVar2) &&
     (dVar2 < *(double *)((longlong)this + 8) || dVar2 == *(double *)((longlong)this + 8))) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    local_18[0] = param_1;
    if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(FAllocationItem **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// operator() @ 14d434d10

void __thiscall
`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l13::<lambda_9>::operator()
          (void *this,FAllocationItem *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAllocationItem *local_18 [2];
  
  if ((*(double *)this < param_1->StartTime || *(double *)this == param_1->StartTime) &&
     (param_1->EndTime <= *(double *)((longlong)this + 8))) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    local_18[0] = param_1;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FAllocationItem **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  }
  return;
}

// Cancel @ 14d444a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FAllocationsQuery::Cancel(FAllocationsQuery *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  TNode *pTVar4;
  
  if ((this->CompletedEvent).Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    this->IsCanceling = (atomic<bool>)0x1;
    UNLOCK();
    FBaseGraphTask::Wait((this->CompletedEvent).Reference,AnyNormalThreadNormalTask);
  }
  pFVar3 = (this->CompletedEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  pTVar4 = (this->Results).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->Results).Tail = pTVar4->NextNode;
    ::operator_delete(pTVar4,0x10);
    pTVar4 = (this->Results).Tail;
  }
  ::operator_delete(this,0x50);
  return;
}

// Poll @ 14d47cdb0

FQueryStatus * __thiscall
TraceServices::FAllocationsQuery::Poll(FAllocationsQuery *this,FQueryStatus *__return_storage_ptr__)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FAllocationsImpl *pFVar3;
  
  pTVar1 = ((this->Results).Tail)->NextNode;
  *(undefined8 *)__return_storage_ptr__ = 0;
  __return_storage_ptr__->Handle = 0;
  if (pTVar1 != (TNode *)0x0) {
    pTVar2 = (this->Results).Tail;
    pFVar3 = pTVar1->Item;
    (this->Results).Tail = pTVar1;
    pTVar1->Item = (FAllocationsImpl *)0x0;
    ::operator_delete(pTVar2,0x10);
    __return_storage_ptr__->Handle = (ulong64)pFVar3;
    __return_storage_ptr__->Status = Available;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Status = (this->IsWorking != (atomic<bool>)0x0) + Done;
  __return_storage_ptr__->Handle = 0;
  return __return_storage_ptr__;
}

// QueryLiveAllocs @ 14d47f900

void __thiscall
TraceServices::FAllocationsQuery::QueryLiveAllocs
          (FAllocationsQuery *this,
          TArray<TraceServices::FAllocationItem_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 local_48 [16];
  TArray<TraceServices::FAllocationItem_const_*,TSizedDefaultAllocator<32>_> *local_38;
  TArray<TraceServices::FAllocationItem_const_*,TSizedDefaultAllocator<32>_> *pTStack_30;
  TArray<TraceServices::FAllocationItem_const_*,TSizedDefaultAllocator<32>_> *local_28;
  undefined1 local_20 [24];
  
  local_20._8_8_ = param_1;
  switch((this->Params).Rule) {
  case aAf:
    local_48._0_8_ = (this->Params).TimeA;
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l5::<lambda_1>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    local_48._8_8_ = param_1;
    goto LAB_14d47fb08;
  case afA:
    local_20._0_8_ = (this->Params).TimeA;
    local_48._8_8_ = local_20;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l6::<lambda_2>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    FAllocationsProvider::EnumerateLiveAllocs
              (this->AllocationsProvider,
               (TFunctionRef<void___cdecl(TraceServices::FAllocationItem_const_&)> *)local_48);
    return;
  case Aaf:
    local_20._0_8_ = (this->Params).TimeA;
    local_48._8_8_ = local_20;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l7::<lambda_3>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    FAllocationsProvider::EnumerateLiveAllocs
              (this->AllocationsProvider,
               (TFunctionRef<void___cdecl(TraceServices::FAllocationItem_const_&)> *)local_48);
    return;
  case aAfB:
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l8::<lambda_4>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    break;
  case AaBf:
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l9::<lambda_5>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    break;
  case aAfaBf:
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l10::<lambda_6>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    break;
  case AfB:
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l11::<lambda_7>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    break;
  case AaB:
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l12::<lambda_8>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    break;
  case AafB:
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l13::<lambda_9>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    break;
  case aABf:
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l14::<lambda_10>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    break;
  case AaBCf:
    local_48._0_8_ = (this->Params).TimeA;
    local_48._8_8_ = (this->Params).TimeB;
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l15::<lambda_11>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    local_38 = (TArray<TraceServices::FAllocationItem_const_*,TSizedDefaultAllocator<32>_> *)
               (this->Params).TimeC;
    pTStack_30 = param_1;
    goto LAB_14d47fb08;
  case AaBfC:
    local_48._0_8_ = (this->Params).TimeA;
    local_48._8_8_ = (this->Params).TimeB;
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l16::<lambda_12>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    local_38 = (TArray<TraceServices::FAllocationItem_const_*,TSizedDefaultAllocator<32>_> *)
               (this->Params).TimeC;
    pTStack_30 = param_1;
    goto LAB_14d47fb08;
  case aABfC:
    local_48._0_8_ = (this->Params).TimeA;
    local_48._8_8_ = (this->Params).TimeB;
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l17::<lambda_13>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    local_38 = (TArray<TraceServices::FAllocationItem_const_*,TSizedDefaultAllocator<32>_> *)
               (this->Params).TimeC;
    pTStack_30 = param_1;
    goto LAB_14d47fb08;
  case AaBCfD:
    local_48._0_8_ = (this->Params).TimeA;
    local_48._8_8_ = (this->Params).TimeB;
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l18::<lambda_14>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    local_38 = (TArray<TraceServices::FAllocationItem_const_*,TSizedDefaultAllocator<32>_> *)
               (this->Params).TimeC;
    pTStack_30 = (TArray<TraceServices::FAllocationItem_const_*,TSizedDefaultAllocator<32>_> *)
                 (this->Params).TimeD;
    local_28 = param_1;
    goto LAB_14d47fb08;
  case AoB:
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l19::<lambda_15>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    break;
  case AiB:
    local_20._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TraceServices::FAllocationsQuery::QueryLiveAllocs'::__l20::<lambda_16>,void,TraceServices::FAllocationItem_const_&>
         ::Call;
    break;
  default:
    goto switchD_14d47f928_default;
  }
  local_48._0_8_ = (this->Params).TimeA;
  local_48._8_8_ = (this->Params).TimeB;
  local_38 = param_1;
LAB_14d47fb08:
  local_20._8_8_ = local_48;
  FAllocationsProvider::EnumerateLiveAllocs
            (this->AllocationsProvider,
             (TFunctionRef<void___cdecl(TraceServices::FAllocationItem_const_&)> *)local_20);
switchD_14d47f928_default:
  return;
}

// Run @ 14d4884f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FAllocationsQuery::Run(FAllocationsQuery *this)

{
  uint *puVar1;
  int iVar2;
  TNode *pTVar3;
  FAllocationsProvider *pFVar4;
  FSbTreeCell *this_00;
  FScriptContainerElement *pFVar5;
  FAllocationsImpl *pFVar6;
  TNode *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  FAllocationsImpl *pFVar10;
  uint *puVar11;
  ForAnyElementType FVar12;
  LARGE_INTEGER local_res8;
  int local_res10;
  uint local_res18;
  uint local_res20;
  FScriptContainerElement *local_88;
  LARGE_INTEGER *local_80;
  LARGE_INTEGER local_78;
  TArray<TraceServices::FSbTreeCell_const_*,TSizedDefaultAllocator<32>_> local_70;
  uint *local_60;
  ulonglong local_58;
  
  QueryPerformanceCounter(&local_78);
  local_res10 = 0;
  (**(code **)(this->AllocationsProvider->_padding_ + 8))();
  if (4 < (byte)LogTraceServices._0_1_) {
    FAllocationsProvider::GetNumLiveAllocs(this->AllocationsProvider);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  pFVar6 = ::operator_new(0x18);
  pFVar10 = (FAllocationsImpl *)0x0;
  if (pFVar6 != (FAllocationsImpl *)0x0) {
    pFVar6->Next = (FAllocationsImpl *)0x0;
    (pFVar6->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Items).ArrayNum = 0;
    (pFVar6->Items).ArrayMax = 0;
    pFVar10 = pFVar6;
  }
  QueryLiveAllocs(this,&pFVar10->Items);
  iVar2 = (pFVar10->Items).ArrayNum;
  if (iVar2 == 0) {
    pFVar5 = (pFVar10->Items).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar10,0x18);
  }
  else {
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    local_res10 = iVar2;
    pTVar7 = ::operator_new(0x10);
    if (pTVar7 != (TNode *)0x0) {
      pTVar7->NextNode = (TNode *)0x0;
      pTVar7->Item = pFVar10;
      pTVar3 = (this->Results).Head;
      (this->Results).Head = pTVar7;
      pTVar3->NextNode = pTVar7;
    }
  }
  if (4 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  local_res8.QuadPart = (LONGLONG)&local_60;
  local_60 = (uint *)0x0;
  local_58 = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  local_80 = &local_res8;
  local_88 = (FScriptContainerElement *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::FAllocationsQuery::Run'::__l2::<lambda_1>,void,unsigned_int,TraceServices::IAllocationsProvider::FHeapSpec_const_&>
             ::Call;
  (**(code **)(this->AllocationsProvider->_padding_ + 0x50))(this->AllocationsProvider,&local_88);
  iVar2 = (int)local_58;
  uVar9 = (ulonglong)(int)local_58;
  puVar1 = local_60 + uVar9;
  puVar11 = local_60;
  while( true ) {
    if ((int)uVar9 != iVar2) {
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (puVar11 == puVar1) break;
    uVar8 = *puVar11;
    if (this->IsCanceling == (atomic<bool>)0x0) {
      pFVar4 = this->AllocationsProvider;
      (**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
      FSbTree::Query(pFVar4->RootHeaps[uVar8]->SbTree,&local_70,&this->Params);
    }
    uVar9 = local_58 & 0xffffffff;
    puVar11 = puVar11 + 1;
  }
  local_res20 = local_70.ArrayNum;
  if (4 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  uVar9 = (ulonglong)local_70.ArrayNum;
  local_88 = local_70.AllocatorInstance.Data + uVar9 * 8;
  FVar12.Data = local_70.AllocatorInstance.Data;
  uVar8 = local_70.ArrayNum;
  local_res18 = local_70.ArrayNum;
LAB_14d4886d0:
  do {
    pFVar5 = local_88;
    if (uVar8 != (uint)uVar9) {
      `TCheckedPointerIterator<TraceServices::FSbTreeCell_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if ((FVar12.Data == pFVar5) ||
       (this_00 = *(FSbTreeCell **)FVar12.Data, this->IsCanceling != (atomic<bool>)0x0)) {
      (**(code **)(this->AllocationsProvider->_padding_ + 0x10))();
      LOCK();
      this->IsWorking = (atomic<bool>)0x0;
      UNLOCK();
      QueryPerformanceCounter(&local_res8);
      if (4 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u__MemAlloc__Allo_152b130d0,
                   (FLogCategoryBase *)&LogTraceServices);
      }
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      if (local_60 != (uint *)0x0) {
        FMemory::Free(local_60);
      }
      return;
    }
    if (4 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    pFVar6 = ::operator_new(0x18);
    pFVar10 = (FAllocationsImpl *)0x0;
    if (pFVar6 != (FAllocationsImpl *)0x0) {
      pFVar6->Next = (FAllocationsImpl *)0x0;
      (pFVar6->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->Items).ArrayNum = 0;
      (pFVar6->Items).ArrayMax = 0;
      pFVar10 = pFVar6;
    }
    FSbTreeCell::Query(this_00,&pFVar10->Items,&this->Params);
    iVar2 = (pFVar10->Items).ArrayNum;
    if (iVar2 == 0) {
      pFVar5 = (pFVar10->Items).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      ::operator_delete(pFVar10,0x18);
    }
    else {
      if (4 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      local_res10 = local_res10 + iVar2;
      pTVar7 = ::operator_new(0x10);
      if (pTVar7 != (TNode *)0x0) {
        pTVar7->NextNode = (TNode *)0x0;
        pTVar7->Item = pFVar10;
        pTVar3 = (this->Results).Head;
        (this->Results).Head = pTVar7;
        uVar9 = (ulonglong)local_res18;
        FVar12.Data = FVar12.Data + 8;
        pTVar3->NextNode = pTVar7;
        uVar8 = local_70.ArrayNum;
        goto LAB_14d4886d0;
      }
    }
    FVar12.Data = FVar12.Data + 8;
    uVar9 = (ulonglong)local_res18;
    uVar8 = local_70.ArrayNum;
  } while( true );
}

