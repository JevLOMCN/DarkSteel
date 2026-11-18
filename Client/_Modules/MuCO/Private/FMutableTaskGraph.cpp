// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 21

// FMutableTaskGraph @ 14ac0aba0

FMutableTaskGraph * __thiscall FMutableTaskGraph::FMutableTaskGraph(FMutableTaskGraph *this)

{
  atomic<bool> aVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FTaskEvent FVar4;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  pTVar3 = (TNode *)0x0;
  this->bAllowLaunchMutableTaskLowPriority = true;
  (this->QueueMutableTasksLowPriority).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueueMutableTasksLowPriority).ArrayNum = 0;
  (this->QueueMutableTasksLowPriority).ArrayMax = 0;
  pTVar2 = ::operator_new(0x70);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    pTVar2->_padding_ = 0;
    (pTVar2->Item).DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).DebugName.Data.ArrayNum = 0;
    (pTVar2->Item).DebugName.Data.ArrayMax = 0;
    *(undefined8 *)&(pTVar2->Item).Body = 0;
    *(undefined8 *)&(pTVar2->Item).Body.field_0x8 = 0;
    *(undefined8 *)&(pTVar2->Item).Body.field_0x10 = 0;
    *(undefined8 *)&(pTVar2->Item).Body.field_0x18 = 0;
    *(undefined8 *)&(pTVar2->Item).Body.field_0x20 = 0;
    *(undefined8 *)&(pTVar2->Item).Body.field_0x28 = 0;
    (pTVar2->Item).Prerequisites.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).Prerequisites.ArrayNum = 0;
    (pTVar2->Item).Prerequisites.ArrayMax = 0;
    *(undefined8 *)&(pTVar2->Item).bLockMutableThread = 0;
    *(undefined8 *)&(pTVar2->Item).field_0x58 = 0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).DebugName.Data.ArrayNum = 0;
    (pTVar2->Item).DebugName.Data.ArrayMax = 0;
    *(undefined8 *)&(pTVar2->Item).Body = 0;
    *(undefined8 *)&(pTVar2->Item).Body.field_0x28 = 0;
    (pTVar2->Item).Prerequisites.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->Item).Prerequisites.ArrayNum = 0;
    (pTVar2->Item).Prerequisites.ArrayMax = 0;
    (pTVar2->Item).bLockMutableThread = false;
    pTVar3 = pTVar2;
  }
  (this->GameThreadTasks).Tail = pTVar3;
  (this->GameThreadTasks).Head = pTVar3;
  this->TaskIdGenerator = 0;
  this->LastMutableTaskLowPriorityID = 0;
  (this->LastMutableTaskLowPriority).Pimpl.Reference = (FTaskBase *)0x0;
  (this->LastMutableTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->LastMutableTaskBeforeLock).Pimpl.Reference = (FTaskBase *)0x0;
  FVar4 = (FTaskEvent)
          UE::Tasks::Private::FTaskEventBase::Create
                    (
                    L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Internal\\MuCO\\FMutableTaskGraph.h(148)"
                    );
  this->MutableThreadUnlockEvent = FVar4;
  if ((FVar4 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar4 + 0xd0) == '\0')) {
    FVar4 = this->MutableThreadUnlockEvent;
    LOCK();
    aVar1 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
    *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
    }
  }
  return this;
}

// ~FMutableTaskGraph @ 14ac0cbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMutableTaskGraph::~FMutableTaskGraph(FMutableTaskGraph *this)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  FScriptContainerElement *pFVar7;
  FTaskEvent FVar8;
  FTaskBase *pFVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78 [56];
  longlong *plStack_40;
  ForAnyElementType local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  while (pTVar5 = ((this->GameThreadTasks).Tail)->NextNode, pTVar5 != (TNode *)0x0) {
    pTVar6 = (this->GameThreadTasks).Tail;
    (this->GameThreadTasks).Tail = pTVar5;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_4_ = 0;
    local_78._12_4_ = 0;
    local_78._16_8_ = 0;
    local_78._24_8_ = 0;
    local_78._32_8_ = 0;
    local_78._40_8_ = 0;
    local_78._48_8_ = 0;
    plStack_40 = (longlong *)0x0;
    local_38.Data = (FScriptContainerElement *)0x0;
    uStack_30._0_4_ = 0;
    uStack_30._4_4_ = 0;
    local_28._0_1_ = false;
    local_28._1_7_ = 0;
    uStack_20 = 0;
    FGameThreadTask::operator=(&pTVar5->Item,(FGameThreadTask *)local_78);
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_38.Data,(int)uStack_30);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_78._16_8_ != 0) {
      plVar10 = (longlong *)(local_78 + 0x20);
      if (plStack_40 != (longlong *)0x0) {
        plVar10 = plStack_40;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    if (pTVar6 != (TNode *)0x0) {
      DestructItems<UE::Tasks::Private::FTaskHandle,int>
                ((FTaskHandle *)(pTVar6->Item).Prerequisites.AllocatorInstance.Data,
                 (pTVar6->Item).Prerequisites.ArrayNum);
      pFVar7 = (pTVar6->Item).Prerequisites.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      if (*(longlong *)&(pTVar6->Item).Body != 0) {
        plVar10 = *(longlong **)&(pTVar6->Item).Body.field_0x28;
        plVar11 = (longlong *)&(pTVar6->Item).Body.field_0x10;
        if (plVar10 != (longlong *)0x0) {
          plVar11 = plVar10;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      pFVar7 = (pTVar6->Item).DebugName.Data.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      ::operator_delete(pTVar6,0x70);
    }
  }
  FVar8 = this->MutableThreadUnlockEvent;
  if (FVar8 != (FTaskEvent)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FVar8 + 0x30);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)FVar8)(FVar8,1);
    }
  }
  pFVar9 = (this->LastMutableTaskBeforeLock).Pimpl.Reference;
  if (pFVar9 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &pFVar9->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  pFVar9 = (this->LastMutableTask).Pimpl.Reference;
  if (pFVar9 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &pFVar9->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  pFVar9 = (this->LastMutableTaskLowPriority).Pimpl.Reference;
  if (pFVar9 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &pFVar9->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  TQueue<FMutableTaskGraph::FGameThreadTask,1>::~TQueue<FMutableTaskGraph::FGameThreadTask,1>
            (&this->GameThreadTasks);
  DestructItems<FMutableTaskGraph::FMutableThreadLowPriorityTask,int>
            ((FMutableThreadLowPriorityTask *)
             (this->QueueMutableTasksLowPriority).AllocatorInstance.Data,
             (this->QueueMutableTasksLowPriority).ArrayNum);
  pFVar7 = (this->QueueMutableTasksLowPriority).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// operator() @ 14ac0f8b0

void __thiscall
`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId222,"Mutable_LowPriorityTaskBody",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0xde);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId222);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x30));
  pcVar1 = *(code **)((longlong)this + 0x30);
  plVar3 = (longlong *)((longlong)this + 0x40);
  if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x58);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14ac113c0

void __thiscall
`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  longlong local_18 [2];
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId229,"Mutable_LowPriorityTaskBodyEnd",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0xe5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId229);
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)this;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(*(longlong *)this + 0x54) = 0;
  plVar4 = (longlong *)(*(longlong *)this + 0x58);
  if (plVar4 != local_18) {
    puVar3 = (undefined8 *)*plVar4;
    *plVar4 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  FMutableTaskGraph::TryLaunchMutableTaskLowPriority(*(FMutableTaskGraph **)this,true);
  LeaveCriticalSection(lpCriticalSection);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14ac118b0

void __thiscall
`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l23::<lambda_3>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_18 [2];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId245,"Mutable_LowPriorityTaskBody",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0xf5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId245);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x30));
  pcVar3 = *(code **)((longlong)this + 0x30);
  plVar6 = (longlong *)((longlong)this + 0x40);
  if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
    plVar6 = *(longlong **)((longlong)this + 0x58);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar3)(uVar5);
  lpCriticalSection = *(LPCRITICAL_SECTION *)this;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(*(longlong *)this + 0x54) = 0;
  plVar6 = (longlong *)(*(longlong *)this + 0x58);
  if (plVar6 != local_18) {
    puVar4 = (undefined8 *)*plVar6;
    *plVar6 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  FMutableTaskGraph::TryLaunchMutableTaskLowPriority(*(FMutableTaskGraph **)this,true);
  LeaveCriticalSection(lpCriticalSection);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddAnyThreadTask @ 14ac13e60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FMutableTaskGraph::AddAnyThreadTask
          (FMutableTaskGraph *this,wchar_t *param_1,TUniqueFunction<void___cdecl(void)> *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *this_00;
  
  this_00 = UE::Tasks::Private::TExecutableTask<TUniqueFunction<void___cdecl(void)>_>::Create
                      (param_1,param_2,Default,None,None);
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x140);
  if (this_00 != (TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *)0x0) {
    LOCK();
    puVar1 = &this_00->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ac13eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)this_00)(this_00,1);
      return;
    }
  }
  return;
}

// AddGameThreadTask @ 14ac13fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMutableTaskGraph::AddGameThreadTask
          (FMutableTaskGraph *this,wchar_t *param_1,TUniqueFunction<void___cdecl(void)> *param_2,
          bool param_3,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  longlong *plVar5;
  undefined1 auStackY_d8 [32];
  FString local_98;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  bool local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  ::FString::FString(&local_98,param_1);
  local_88 = *(longlong *)param_2;
  local_60 = *(longlong **)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_68 = *(undefined8 *)&param_2->field_0x20;
  local_78 = *(longlong *)&param_2->field_0x10;
  uStack_70 = *(undefined8 *)&param_2->field_0x18;
  if (local_88 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  iVar1 = param_4->ArrayNum;
  pFVar2 = (param_4->AllocatorInstance).Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = CONCAT44(local_50._4_4_,iVar1);
  if (iVar1 == 0) {
    local_50 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_58,iVar1,(int *)((longlong)&local_50 + 4));
    ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
              (local_58.Data,(FTaskHandle *)pFVar2,iVar1);
  }
  local_48 = param_3;
  pTVar4 = ::operator_new(0x70);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).DebugName.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar4->Item).DebugName.Data.ArrayNum = local_98.Data.ArrayNum;
    (pTVar4->Item).DebugName.Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    *(longlong *)&(pTVar4->Item).Body = local_88;
    *(longlong **)&(pTVar4->Item).Body.field_0x28 = local_60;
    local_60 = (longlong *)0x0;
    *(longlong *)&(pTVar4->Item).Body.field_0x10 = local_78;
    *(undefined8 *)&(pTVar4->Item).Body.field_0x18 = uStack_70;
    *(undefined8 *)&(pTVar4->Item).Body.field_0x20 = local_68;
    if (*(longlong *)&(pTVar4->Item).Body != 0) {
      local_88 = 0;
    }
    (pTVar4->Item).Prerequisites.AllocatorInstance.Data = local_58.Data;
    local_58.Data = (FScriptContainerElement *)0x0;
    (pTVar4->Item).Prerequisites.ArrayNum = (int)local_50;
    (pTVar4->Item).Prerequisites.ArrayMax = local_50._4_4_;
    local_50 = 0;
    (pTVar4->Item).bLockMutableThread = local_48;
    pTVar3 = (this->GameThreadTasks).Head;
    (this->GameThreadTasks).Head = pTVar4;
    pTVar3->NextNode = pTVar4;
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_88 != 0) {
    plVar5 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar5 = local_60;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// AddMutableThreadTask @ 14ac141a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
FMutableTaskGraph::AddMutableThreadTask
          (FMutableTaskGraph *this,wchar_t *param_1,TUniqueFunction<void___cdecl(void)> *param_2,
          TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  FTaskHandle *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar5;
  TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *pTVar6;
  FTaskBase *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FTaskHandle FVar13;
  TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *this_00;
  undefined8 *puVar14;
  ForElementType<UE::Tasks::Private::FTaskHandle> *pFVar15;
  ForElementType<UE::Tasks::Private::FTaskHandle> FVar16;
  longlong lVar17;
  longlong *plVar18;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *in_stack_00000028;
  undefined1 auStackY_128 [32];
  FTaskHandle local_d0;
  FTaskEvent local_c8;
  longlong local_c0;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  ForElementType<UE::Tasks::Private::FTaskHandle> local_98;
  int local_80;
  int local_7c;
  ForElementType<UE::Tasks::Private::FTaskHandle> local_78;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (this == (FMutableTaskGraph *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  TVar5.Reference = (this->LastMutableTask).Pimpl.Reference;
  pFVar1 = &this->LastMutableTask;
  if (TVar5.Reference == (FTaskBase *)0x0) {
    local_78.SecondaryData = (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0;
    local_5c = 2;
    pFVar15 = &local_78;
    local_60 = 0;
    bVar10 = false;
    bVar9 = false;
    bVar11 = true;
  }
  else {
    LOCK();
    (TVar5.Reference)->RefCount = (atomic<unsigned_int>)((int)(TVar5.Reference)->RefCount + 1);
    UNLOCK();
    local_c8 = this->MutableThreadUnlockEvent;
    if (local_c8 != (FTaskEvent)0x0) {
      LOCK();
      *(int *)((longlong)local_c8 + 0x30) = *(int *)((longlong)local_c8 + 0x30) + 1;
      UNLOCK();
    }
    local_98.SecondaryData = (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0;
    local_80 = 2;
    local_d0.Pimpl.Reference =
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar5.Reference;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
              (8,8,2,0,&local_98,2,&local_7c);
    FVar16 = (ForElementType<UE::Tasks::Private::FTaskHandle>)&local_98;
    if (local_98.SecondaryData != (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      FVar16 = local_98.SecondaryData;
    }
    ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
              ((void *)FVar16,&local_d0,2);
    pFVar15 = &local_98;
    bVar10 = true;
    bVar9 = true;
    bVar11 = false;
  }
  lVar17 = 2;
  local_b8.AllocatorInstance.SecondaryData = pFVar15->SecondaryData;
  if (local_b8.AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
    local_b8.AllocatorInstance.InlineData._0_8_ = *(undefined8 *)pFVar15->InlineData;
    local_b8.AllocatorInstance.InlineData._8_8_ = *(undefined8 *)(pFVar15->InlineData + 8);
  }
  pFVar15->SecondaryData = (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0;
  local_b8.ArrayNum = *(int *)pFVar15[1].InlineData;
  local_b8.ArrayMax = *(int *)(pFVar15[1].InlineData + 4);
  pFVar15[1].InlineData[4] = '\x02';
  pFVar15[1].InlineData[5] = '\0';
  pFVar15[1].InlineData[6] = '\0';
  pFVar15[1].InlineData[7] = '\0';
  pFVar15[1].InlineData[0] = '\0';
  pFVar15[1].InlineData[1] = '\0';
  pFVar15[1].InlineData[2] = '\0';
  pFVar15[1].InlineData[3] = '\0';
  if (bVar11) {
    FVar16 = (ForElementType<UE::Tasks::Private::FTaskHandle>)&local_78;
    if (local_78.SecondaryData != (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      FVar16 = local_78.SecondaryData;
    }
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)FVar16,local_60);
    if (local_78.SecondaryData != (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      FMemory::Free((void *)local_78.SecondaryData);
    }
  }
  if (bVar9) {
    FVar16 = (ForElementType<UE::Tasks::Private::FTaskHandle>)&local_98;
    if (local_98.SecondaryData != (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      FVar16 = local_98.SecondaryData;
    }
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)FVar16,local_80);
    if (local_98.SecondaryData != (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      FMemory::Free((void *)local_98.SecondaryData);
    }
  }
  if (bVar10) {
    plVar18 = &local_c0;
    do {
      puVar14 = (undefined8 *)plVar18[-1];
      plVar18 = plVar18 + -1;
      lVar17 = lVar17 + -1;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar14 + 6);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    } while (lVar17 != 0);
  }
  if (&local_b8 == in_stack_00000028) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      FVar13.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar8)();
      return (FTaskHandle)FVar13.Pimpl.Reference;
    }
  }
  iVar4 = *(int *)((in_stack_00000028->AllocatorInstance).InlineData + 8);
  if (iVar4 != 0) {
    iVar12 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                       (8,8,iVar4,&local_b8.AllocatorInstance,&local_b8.ArrayNum,&local_b8.ArrayMax)
    ;
    FVar16 = (ForElementType<UE::Tasks::Private::FTaskHandle>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      FVar16 = local_b8.AllocatorInstance.SecondaryData;
    }
    ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)((longlong)FVar16 + (longlong)iVar12 * 8),
               *(FTaskHandle **)(in_stack_00000028->AllocatorInstance).InlineData,iVar4);
  }
  this_00 = UE::Tasks::Private::TExecutableTask<TUniqueFunction<void___cdecl(void)>_>::Create
                      ((wchar_t *)param_2,(TUniqueFunction<void___cdecl(void)> *)param_3,
                       BackgroundHigh,None,None);
  UE::Tasks::Private::FTaskBase::
  AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>
            ((FTaskBase *)this_00,&local_b8,true);
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x140);
  if (pFVar1 == (FTaskHandle *)&local_c0) {
    if (this_00 == (TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *)0x0) goto LAB_14ac14455;
    LOCK();
    puVar3 = &this_00->field_0x30;
    iVar4 = *(int *)puVar3;
    *(int *)puVar3 = *(int *)puVar3 + -1;
    UNLOCK();
    if (iVar4 != 1) goto LAB_14ac14455;
    puVar14 = *(undefined8 **)&this_00->field_0x0;
  }
  else {
    pTVar6 = (TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *)(pFVar1->Pimpl).Reference;
    (pFVar1->Pimpl).Reference = (FTaskBase *)this_00;
    if (pTVar6 == (TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *)0x0) goto LAB_14ac14455;
    LOCK();
    puVar3 = &pTVar6->field_0x30;
    iVar4 = *(int *)puVar3;
    *(int *)puVar3 = *(int *)puVar3 + -1;
    UNLOCK();
    if (iVar4 != 1) goto LAB_14ac14455;
    puVar14 = *(undefined8 **)&pTVar6->field_0x0;
    this_00 = pTVar6;
  }
  (*(code *)*puVar14)(this_00,1);
LAB_14ac14455:
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  pFVar7 = (pFVar1->Pimpl).Reference;
  *(FTaskBase **)param_1 = pFVar7;
  if (pFVar7 != (FTaskBase *)0x0) {
    LOCK();
    pFVar7->RefCount = (atomic<unsigned_int>)((int)pFVar7->RefCount + 1);
    UNLOCK();
  }
  FVar16 = (ForElementType<UE::Tasks::Private::FTaskHandle>)&local_b8;
  if (local_b8.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
    FVar16 = local_b8.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)FVar16,local_b8.ArrayNum);
  if (local_b8.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// AddMutableThreadTaskLowPriority @ 14ac144e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
FMutableTaskGraph::AddMutableThreadTaskLowPriority
          (FMutableTaskGraph *this,wchar_t *param_1,TFunction<void___cdecl(void)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  FTaskHandle *pFVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStack_138 [32];
  FTaskHandle **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  FTaskHandle *local_e8;
  undefined8 local_e0;
  LARGE_INTEGER local_d8;
  undefined8 *local_d0;
  FTaskHandle *local_c8;
  FString local_c0;
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  double local_78;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (this == (FMutableTaskGraph *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pTVar4 = CVarEnableMutableTaskLowPriority.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar8 = 1;
    if (!bVar6) goto LAB_14ac14545;
  }
  lVar8 = 0;
LAB_14ac14545:
  if (pTVar4->ShadowedValue[lVar8] == false) {
    local_68.AllocatorInstance.Data = *(FScriptContainerElement **)param_2;
    local_e8 = (FTaskHandle *)0x0;
    local_e0 = 0;
    local_40 = (longlong *)0x0;
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      puVar10 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,local_58);
    }
    local_118 = &local_e8;
    AddMutableThreadTask
              (this,(wchar_t *)&local_d0,(TUniqueFunction<void___cdecl(void)> *)param_1,&local_68);
    if (local_d0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_d0 + 6);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*local_d0)(local_d0,1);
      }
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      plVar9 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar9 = local_40;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    pFVar5 = local_e8;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_e8,(int)local_e0);
    if (pFVar5 != (FTaskHandle *)0x0) {
      FMemory::Free(pFVar5);
    }
    uVar11 = 0;
  }
  else {
    uVar11 = this->TaskIdGenerator + 1;
    this->TaskIdGenerator = uVar11;
    local_c8._0_4_ = uVar11;
    ::FString::FString(&local_c0,param_1);
    local_a8 = *(longlong *)param_2;
    local_80 = *(longlong **)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88 = *(undefined8 *)&param_2->field_0x20;
    local_98 = *(undefined4 *)&param_2->field_0x10;
    uStack_94 = *(undefined4 *)&param_2->field_0x14;
    uStack_90 = *(undefined4 *)&param_2->field_0x18;
    uStack_8c = *(undefined4 *)&param_2->field_0x1c;
    if (local_a8 != 0) {
      *(undefined8 *)param_2 = 0;
    }
    QueryPerformanceCounter(&local_d8);
    pFVar2 = (this->QueueMutableTasksLowPriority).AllocatorInstance.Data;
    local_78 = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000;
    if ((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
       (lVar8 = (longlong)(this->QueueMutableTasksLowPriority).ArrayMax,
       (FScriptContainerElement *)&local_c8 < pFVar2 + lVar8 * 0x60)) {
      local_100 = (longlong)(this->QueueMutableTasksLowPriority).ArrayNum;
      local_f8 = 0x60;
      local_118 = &local_c8;
      local_110 = pFVar2;
      local_108 = lVar8;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return uVar11;
      }
    }
    iVar7 = (this->QueueMutableTasksLowPriority).ArrayNum;
    piVar1 = &(this->QueueMutableTasksLowPriority).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1060,&(this->QueueMutableTasksLowPriority).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->QueueMutableTasksLowPriority).AllocatorInstance.Data;
    (this->QueueMutableTasksLowPriority).ArrayNum = iVar7 + 1;
    lVar8 = (longlong)iVar7 * 0x60;
    *(uint *)(pFVar2 + lVar8) = (uint)local_c8;
    ::FString::FString((FString *)(pFVar2 + lVar8 + 8),&local_c0);
    *(longlong *)(pFVar2 + lVar8 + 0x20) = local_a8;
    *(undefined8 *)(pFVar2 + lVar8 + 0x48) = 0;
    if (local_a8 != 0) {
      plVar9 = (longlong *)&local_98;
      if (local_80 != (longlong *)0x0) {
        plVar9 = local_80;
      }
      (**(code **)*plVar9)();
    }
    *(double *)(pFVar2 + lVar8 + 0x50) = local_78;
    TryLaunchMutableTaskLowPriority(this,false);
    if (local_a8 != 0) {
      plVar9 = (longlong *)&local_98;
      if (local_80 != (longlong *)0x0) {
        plVar9 = local_80;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return uVar11;
}

// AllowLaunchingMutableTaskLowPriority @ 14ac15610

void __thiscall
FMutableTaskGraph::AllowLaunchingMutableTaskLowPriority
          (FMutableTaskGraph *this,bool param_1,bool param_2)

{
  if (this != (FMutableTaskGraph *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    this->bAllowLaunchMutableTaskLowPriority = param_1;
    if (param_1) {
      TryLaunchMutableTaskLowPriority(this,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ac1565b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AsyncLockMutableThread @ 14ac156f0

void __thiscall FMutableTaskGraph::AsyncLockMutableThread(FMutableTaskGraph *this)

{
  FTaskEvent *pFVar1;
  atomic<unsigned_int> *paVar2;
  int *piVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FTaskBase *pFVar6;
  FTaskBase *pFVar7;
  FTaskEvent FVar8;
  code *pcVar9;
  bool bVar10;
  FTaskEvent FVar11;
  undefined8 *puVar12;
  bool bVar13;
  longlong local_18 [2];
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId387,"Mutable_FMutableTaskGraph::AsyncLockMutableThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0x183);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId387);
  }
  if (this == (FMutableTaskGraph *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar1 = &this->MutableThreadUnlockEvent;
  if ((this->MutableThreadUnlockEvent != (FTaskEvent)0x0) &&
     (*(char *)((longlong)this->MutableThreadUnlockEvent + 0xd0) == '\0')) goto LAB_14ac1586b;
  if (RegionLockStatus != Requested) {
    if (RegionLockStatus == Locked) {
      FMiscTrace::OutputEndRegion(L"Mutable Thread Lock");
    }
    else if ((RegionLockStatus != Unlocked) &&
            (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Unimplemented function called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
                                 ,0x16b,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FMiscTrace::OutputBeginRegion(L"Mutable Thread Request Lock",(wchar_t *)0x0);
    RegionLockStatus = Requested;
  }
  pFVar6 = (this->LastMutableTask).Pimpl.Reference;
  pFVar7 = (this->LastMutableTaskBeforeLock).Pimpl.Reference;
  if (pFVar7 != pFVar6) {
    (this->LastMutableTaskBeforeLock).Pimpl.Reference = pFVar6;
    if (pFVar6 != (FTaskBase *)0x0) {
      LOCK();
      pFVar6->RefCount = (atomic<unsigned_int>)((int)pFVar6->RefCount + 1);
      UNLOCK();
    }
    if (pFVar7 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar7->RefCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
  }
  FVar11 = (FTaskEvent)
           UE::Tasks::Private::FTaskEventBase::Create
                     (
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp(399)"
                     );
  if (pFVar1 == (FTaskEvent *)local_18) {
    if (FVar11 == (FTaskEvent)0x0) goto LAB_14ac1586b;
    LOCK();
    piVar3 = (int *)((longlong)FVar11 + 0x30);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 != 1) goto LAB_14ac1586b;
    puVar12 = *(undefined8 **)FVar11;
  }
  else {
    FVar8 = *pFVar1;
    *pFVar1 = FVar11;
    if (FVar8 == (FTaskEvent)0x0) goto LAB_14ac1586b;
    LOCK();
    piVar3 = (int *)((longlong)FVar8 + 0x30);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 != 1) goto LAB_14ac1586b;
    puVar12 = *(undefined8 **)FVar8;
    FVar11 = FVar8;
  }
  (*(code *)*puVar12)(FVar11,1);
LAB_14ac1586b:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CancelMutableThreadTaskLowPriority @ 14ac16790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMutableTaskGraph::CancelMutableThreadTaskLowPriority(FMutableTaskGraph *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (this == (FMutableTaskGraph *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar5 = 0;
  if (0 < (this->QueueMutableTasksLowPriority).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->QueueMutableTasksLowPriority).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(uint *)((this->QueueMutableTasksLowPriority).AllocatorInstance.Data + lVar6) == param_1)
      {
        TArray<FMutableTaskGraph::FMutableThreadLowPriorityTask,TSizedDefaultAllocator<32>_>::
        RemoveAt(&this->QueueMutableTasksLowPriority,uVar5,Default);
        bVar2 = true;
        goto LAB_14ac1682f;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x60;
    } while ((int)uVar5 < (this->QueueMutableTasksLowPriority).ArrayNum);
  }
  bVar2 = false;
LAB_14ac1682f:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return bVar2;
}

// IsMutableThreadLocked @ 14ac27bb0

bool __thiscall FMutableTaskGraph::IsMutableThreadLocked(FMutableTaskGraph *this)

{
  FTaskBase *pFVar1;
  ERegionLockStatus EVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId411,"Mutable_FMutableTaskGraph::IsMutableThreadLocked",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0x19b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId411);
  }
  if (this == (FMutableTaskGraph *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (((this->MutableThreadUnlockEvent == (FTaskEvent)0x0) ||
      (*(char *)((longlong)this->MutableThreadUnlockEvent + 0xd0) != '\0')) ||
     ((pFVar1 = (this->LastMutableTaskBeforeLock).Pimpl.Reference, pFVar1 != (FTaskBase *)0x0 &&
      ((pFVar1->Subsequents).bIsClosed == (atomic<bool>)0x0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  EVar2 = RegionLockStatus;
  if (bVar3 != false) {
    EVar2 = Locked;
  }
  UpdateRegions(EVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// IsMutableThreadLockedNoLock @ 14ac27c90

bool __thiscall FMutableTaskGraph::IsMutableThreadLockedNoLock(FMutableTaskGraph *this)

{
  FTaskBase *pFVar1;
  
  if (((this->MutableThreadUnlockEvent != (FTaskEvent)0x0) &&
      (*(char *)((longlong)this->MutableThreadUnlockEvent + 0xd0) == '\0')) &&
     ((pFVar1 = (this->LastMutableTaskBeforeLock).Pimpl.Reference, pFVar1 == (FTaskBase *)0x0 ||
      ((pFVar1->Subsequents).bIsClosed != (atomic<bool>)0x0)))) {
    return true;
  }
  return false;
}

// IsTaskCompleted @ 14ac28690

bool __thiscall FMutableTaskGraph::IsTaskCompleted(FMutableTaskGraph *this,FTaskHandle *param_1)

{
  FTaskBase *pFVar1;
  
  pFVar1 = (param_1->Pimpl).Reference;
  if ((pFVar1 != (FTaskBase *)0x0) && ((pFVar1->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    return false;
  }
  return true;
}

// Tick @ 14ac45b80

int __thiscall FMutableTaskGraph::Tick(FMutableTaskGraph *this)

{
  FTaskBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
                       ,0x14d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  TryLaunchGameThreadTask(this);
  TryLaunchMutableTaskLowPriority(this,false);
  pFVar1 = (this->LastMutableTask).Pimpl.Reference;
  if ((pFVar1 == (FTaskBase *)0x0) ||
     (iVar4 = 1, (pFVar1->Subsequents).bIsClosed != (atomic<bool>)0x0)) {
    iVar4 = 0;
  }
  pFVar1 = (this->LastMutableTaskLowPriority).Pimpl.Reference;
  if ((pFVar1 == (FTaskBase *)0x0) ||
     (iVar5 = 1, (pFVar1->Subsequents).bIsClosed != (atomic<bool>)0x0)) {
    iVar5 = 0;
  }
  return (this->QueueMutableTasksLowPriority).ArrayNum +
         iVar5 + (uint)(((this->GameThreadTasks).Tail)->NextNode != (TNode *)0x0) + iVar4;
}

// TryLaunchGameThreadTask @ 14ac48ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMutableTaskGraph::TryLaunchGameThreadTask(FMutableTaskGraph *this)

{
  int iVar1;
  TNode *pTVar2;
  FTaskBase *pFVar3;
  TNode *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double dVar10;
  TConsoleVariableData<float> *pTVar11;
  bool bVar12;
  undefined8 uVar13;
  ERegionLockStatus EVar14;
  longlong *plVar15;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138 [2];
  undefined1 local_128 [16];
  code *local_118;
  longlong local_108 [3];
  longlong *local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  bool local_d8;
  undefined1 local_c8 [56];
  longlong *plStack_90;
  ForAnyElementType local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId289,"Mutable_AdvanceCurrentOperation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0x121);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId289);
  }
  QueryPerformanceCounter(&local_140);
  pTVar11 = CVarGameThreadTaskMaxTime.Ref;
  dVar10 = __real_4170000000000000;
  dVar7 = (double)local_140.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar8 = (double)pTVar11->ShadowedValue[0] + dVar7;
  while (((dVar7 < dVar8 && (((this->GameThreadTasks).Tail)->NextNode != (TNode *)0x0)) &&
         (pTVar2 = ((this->GameThreadTasks).Tail)->NextNode, pTVar2 != (TNode *)0xfffffffffffffff0))
        ) {
    pFVar17 = (pTVar2->Item).Prerequisites.AllocatorInstance.Data;
    iVar1 = (pTVar2->Item).Prerequisites.ArrayNum;
    pFVar5 = pFVar17 + (longlong)iVar1 * 8;
    while( true ) {
      if ((pTVar2->Item).Prerequisites.ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_148);
      }
      if (pFVar17 == pFVar5) break;
      if ((*(longlong *)pFVar17 != 0) && (*(char *)(*(longlong *)pFVar17 + 0xd0) == '\0'))
      goto LAB_14ac492cd;
      pFVar17 = pFVar17 + 8;
    }
    if ((pTVar2->Item).bLockMutableThread != false) {
      AsyncLockMutableThread(this);
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId411,"Mutable_FMutableTaskGraph::IsMutableThreadLocked",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
                   ,0x19b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId411);
      }
      if (this == (FMutableTaskGraph *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      if (((this->MutableThreadUnlockEvent == (FTaskEvent)0x0) ||
          (*(char *)((longlong)this->MutableThreadUnlockEvent + 0xd0) != '\0')) ||
         ((pFVar3 = (this->LastMutableTaskBeforeLock).Pimpl.Reference, pFVar3 != (FTaskBase *)0x0 &&
          ((pFVar3->Subsequents).bIsClosed == (atomic<bool>)0x0)))) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      EVar14 = RegionLockStatus;
      if (bVar9) {
        EVar14 = Locked;
      }
      UpdateRegions(EVar14);
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar9) break;
    }
    local_128._0_8_ = (FScriptContainerElement *)0x0;
    local_128._8_4_ = 0;
    local_128._12_4_ = 0;
    local_118 = (code *)0x0;
    local_f0 = (longlong *)0x0;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0._0_4_ = 0;
    local_e0._4_4_ = 0;
    local_d8 = false;
    pTVar2 = ((this->GameThreadTasks).Tail)->NextNode;
    if (pTVar2 != (TNode *)0x0) {
      FGameThreadTask::operator=((FGameThreadTask *)local_128,&pTVar2->Item);
      pTVar4 = (this->GameThreadTasks).Tail;
      (this->GameThreadTasks).Tail = pTVar2;
      local_c8._0_8_ = (FScriptContainerElement *)0x0;
      local_c8._8_4_ = 0;
      local_c8._12_4_ = 0;
      local_c8._16_8_ = 0;
      local_c8._24_8_ = 0;
      local_c8._32_8_ = 0;
      local_c8._40_8_ = 0;
      local_c8._48_8_ = 0;
      plStack_90 = (longlong *)0x0;
      local_88.Data = (FScriptContainerElement *)0x0;
      uStack_80._0_4_ = 0;
      uStack_80._4_4_ = 0;
      local_78._0_1_ = false;
      local_78._1_7_ = 0;
      uStack_70 = 0;
      FGameThreadTask::operator=(&pTVar2->Item,(FGameThreadTask *)local_c8);
      DestructItems<UE::Tasks::Private::FTaskHandle,int>
                ((FTaskHandle *)local_88.Data,(int)uStack_80);
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      if (local_c8._16_8_ != 0) {
        plVar16 = (longlong *)(local_c8 + 0x20);
        if (plStack_90 != (longlong *)0x0) {
          plVar16 = plStack_90;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._0_8_);
      }
      if (pTVar4 != (TNode *)0x0) {
        DestructItems<UE::Tasks::Private::FTaskHandle,int>
                  ((FTaskHandle *)(pTVar4->Item).Prerequisites.AllocatorInstance.Data,
                   (pTVar4->Item).Prerequisites.ArrayNum);
        pFVar5 = (pTVar4->Item).Prerequisites.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        if (*(longlong *)&(pTVar4->Item).Body != 0) {
          plVar16 = *(longlong **)&(pTVar4->Item).Body.field_0x28;
          plVar15 = (longlong *)&(pTVar4->Item).Body.field_0x10;
          if (plVar16 != (longlong *)0x0) {
            plVar15 = plVar16;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        pFVar5 = (pTVar4->Item).DebugName.Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        ::operator_delete(pTVar4,0x70);
      }
    }
    UE::Core::Private::Function::CheckCallable(local_118);
    pcVar6 = local_118;
    plVar16 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar16 = local_f0;
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    (*pcVar6)(uVar13);
    QueryPerformanceCounter(local_138);
    dVar7 = (double)local_138[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar10;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_e8.Data,(int)local_e0);
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    if (local_118 != (code *)0x0) {
      plVar16 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar16 = local_f0;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._0_8_);
    }
  }
LAB_14ac492cd:
  UnlockMutableThread(this);
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TryLaunchMutableTaskLowPriority @ 14ac49340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMutableTaskGraph::TryLaunchMutableTaskLowPriority(FMutableTaskGraph *this,bool param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  float fVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  double dVar6;
  undefined4 uVar7;
  FTaskBase *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  TConsoleVariableData<bool> *pTVar14;
  TConsoleVariableData<float> *pTVar15;
  FTaskHandle *pFVar16;
  TUniqueFunction<void___cdecl(void)> *pTVar17;
  bool bVar18;
  bool bVar19;
  longlong lVar20;
  FTaskHandle FVar21;
  undefined ***pppuVar22;
  longlong *plVar23;
  wchar_t *pwVar24;
  ForAnyElementType FVar25;
  bool bVar26;
  undefined1 auStackY_278 [32];
  ForAnyElementType local_238;
  int local_230;
  int local_22c;
  FTaskHandle local_228;
  FTaskHandle *local_220;
  undefined8 local_218;
  TUniqueFunction<void___cdecl(void)> *local_210;
  undefined8 local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  FString local_1e8;
  FMutableTaskGraph *local_1d8;
  undefined4 local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  longlong local_1a8;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong *local_180;
  longlong local_178;
  FMutableTaskGraph *local_168;
  undefined4 local_158;
  void *local_150;
  undefined8 local_148;
  longlong local_138;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_f8;
  longlong local_e8 [3];
  longlong *local_d0;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_c8;
  undefined **local_b8;
  FMutableTaskGraph *local_b0;
  undefined ***local_a0;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_98;
  longlong local_88 [3];
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_278;
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId175,"Mutable_TryLaunchMutableTaskLowPriority",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0xaf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId175);
  }
  if (((this->QueueMutableTasksLowPriority).ArrayNum == 0) ||
     ((pFVar8 = (this->LastMutableTaskLowPriority).Pimpl.Reference, pFVar8 != (FTaskBase *)0x0 &&
      ((pFVar8->Subsequents).bIsClosed == (atomic<bool>)0x0)))) goto LAB_14ac49aba;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (((this->QueueMutableTasksLowPriority).ArrayNum != 0) &&
     ((pFVar8 = (this->LastMutableTaskLowPriority).Pimpl.Reference, pFVar8 == (FTaskBase *)0x0 ||
      ((pFVar8->Subsequents).bIsClosed != (atomic<bool>)0x0)))) {
    if (((this->QueueMutableTasksLowPriority).ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar15 = CVarMutableTaskLowPriorityMaxWaitTime.Ref;
    pFVar9 = (this->QueueMutableTasksLowPriority).AllocatorInstance.Data;
    bVar18 = IsInParallelGameThread();
    if (bVar18) {
LAB_14ac4949d:
      lVar20 = 0;
    }
    else {
      bVar18 = IsInGameThread();
      lVar20 = 4;
      if (bVar18) goto LAB_14ac4949d;
    }
    fVar3 = *(float *)((longlong)pTVar15->ShadowedValue + lVar20);
    dVar6 = *(double *)(pFVar9 + 0x50);
    dVar13 = FWindowsPlatformTime::Seconds();
    pTVar14 = CVarFixLowPriorityTasksOverlap.Ref;
    bVar18 = (double)fVar3 <= dVar13 - dVar6;
    if ((this->bAllowLaunchMutableTaskLowPriority != false) &&
       ((!param_1 ||
        (((pFVar8 = (this->LastMutableTask).Pimpl.Reference, pFVar8 != (FTaskBase *)0x0 &&
          ((pFVar8->Subsequents).bIsClosed == (atomic<bool>)0x0)) || (bVar18)))))) {
      bVar19 = IsInParallelGameThread();
      if (bVar19) {
LAB_14ac49517:
        lVar20 = 0;
      }
      else {
        bVar19 = IsInGameThread();
        lVar20 = 1;
        if (bVar19) goto LAB_14ac49517;
      }
      bVar19 = pTVar14->ShadowedValue[lVar20];
      this->LastMutableTaskLowPriorityID = *(uint *)pFVar9;
      lVar20 = *(longlong *)(pFVar9 + 8);
      *(undefined8 *)(pFVar9 + 8) = 0;
      uVar7 = *(undefined4 *)(pFVar9 + 0x10);
      *(undefined8 *)(pFVar9 + 0x10) = 0;
      lVar10 = *(longlong *)(pFVar9 + 0x20);
      lVar11 = *(longlong *)(pFVar9 + 0x48);
      *(undefined8 *)(pFVar9 + 0x48) = 0;
      if (bVar19 == false) {
        local_210 = (TUniqueFunction<void___cdecl(void)> *)0x0;
        local_208 = 0;
        if (lVar10 != 0) {
          *(undefined8 *)(pFVar9 + 0x20) = 0;
        }
        local_108 = *(longlong *)(pFVar9 + 0x50);
        local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168 = this;
        local_158 = *(undefined4 *)pFVar9;
        local_150 = (void *)lVar20;
        local_138 = lVar10;
        local_128 = *(longlong *)(pFVar9 + 0x30);
        lStack_120 = *(longlong *)(pFVar9 + 0x38);
        local_118 = *(longlong *)(pFVar9 + 0x40);
        local_110 = (longlong *)lVar11;
        local_148._0_4_ = uVar7;
        local_148._4_4_ = *(undefined4 *)(pFVar9 + 0x14);
        local_70 = FMemory::Malloc(0x80,0x10);
        *local_70 = (longlong)
                    &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::`23'::<lambda_3>,1,1>
                     ::_vftable_;
        local_70[2] = (longlong)local_168;
        local_70[5] = 0;
        *(undefined4 *)(local_70 + 4) = local_158;
        local_70[5] = (longlong)local_150;
        local_150 = (void *)0x0;
        *(undefined4 *)(local_70 + 6) = (undefined4)local_148;
        *(undefined4 *)((longlong)local_70 + 0x34) = local_148._4_4_;
        local_148 = 0;
        local_70[8] = local_138;
        local_70[0xd] = (longlong)local_110;
        local_110 = (longlong *)0x0;
        local_70[10] = local_128;
        local_70[0xb] = lStack_120;
        local_70[0xc] = local_118;
        if (local_70[8] != 0) {
          local_138 = 0;
        }
        local_70[0xe] = local_108;
        if (local_70 + 2 != (longlong *)0x0) {
          local_98.AllocatorInstance.Data =
               (FScriptContainerElement *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l23::<lambda_3>,void>
               ::Call;
        }
        if (*(int *)(pFVar9 + 0x10) == 0) {
          pwVar24 = L"";
        }
        else {
          pwVar24 = *(wchar_t **)(pFVar9 + 8);
        }
        FVar21 = AddMutableThreadTask
                           (this,(wchar_t *)&local_1f0,
                            (TUniqueFunction<void___cdecl(void)> *)pwVar24,&local_98);
        UE::Tasks::Private::FTaskHandle::operator=
                  (&this->LastMutableTaskLowPriority,(FTaskHandle *)FVar21.Pimpl.Reference);
        if (local_1f0 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_1f0 + 6);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)*local_1f0)(local_1f0,1);
          }
        }
        if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          plVar23 = local_88;
          if (local_70 != (longlong *)0x0) {
            plVar23 = local_70;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        if (local_138 != 0) {
          plVar23 = &local_128;
          if (local_110 != (longlong *)0x0) {
            plVar23 = local_110;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        if (local_150 != (void *)0x0) {
          FMemory::Free(local_150);
        }
        pTVar17 = local_210;
        DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_210,(int)local_208);
        local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar17;
      }
      else {
        local_220 = (FTaskHandle *)0x0;
        local_218 = 0;
        if (lVar10 != 0) {
          *(undefined8 *)(pFVar9 + 0x20) = 0;
        }
        local_178 = *(longlong *)(pFVar9 + 0x50);
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8 = this;
        local_1c8 = *(undefined4 *)pFVar9;
        local_1c0 = (void *)lVar20;
        local_1a8 = lVar10;
        local_198 = *(longlong *)(pFVar9 + 0x30);
        lStack_190 = *(longlong *)(pFVar9 + 0x38);
        local_188 = *(longlong *)(pFVar9 + 0x40);
        local_180 = (longlong *)lVar11;
        local_1b8._0_4_ = uVar7;
        local_1b8._4_4_ = *(undefined4 *)(pFVar9 + 0x14);
        local_d0 = FMemory::Malloc(0x80,0x10);
        *local_d0 = (longlong)
                    &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::`21'::<lambda_1>,1,1>
                     ::_vftable_;
        local_d0[2] = (longlong)local_1d8;
        local_d0[5] = 0;
        *(undefined4 *)(local_d0 + 4) = local_1c8;
        local_d0[5] = (longlong)local_1c0;
        local_1c0 = (void *)0x0;
        *(undefined4 *)(local_d0 + 6) = (undefined4)local_1b8;
        *(undefined4 *)((longlong)local_d0 + 0x34) = local_1b8._4_4_;
        local_1b8 = 0;
        local_d0[8] = local_1a8;
        local_d0[0xd] = (longlong)local_180;
        local_180 = (longlong *)0x0;
        local_d0[10] = local_198;
        local_d0[0xb] = lStack_190;
        local_d0[0xc] = local_188;
        if (local_d0[8] != 0) {
          local_1a8 = 0;
        }
        local_d0[0xe] = local_178;
        if (local_d0 + 2 != (longlong *)0x0) {
          local_f8.AllocatorInstance.Data =
               (FScriptContainerElement *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_1>,void>
               ::Call;
        }
        if (*(int *)(pFVar9 + 0x10) == 0) {
          pwVar24 = L"";
        }
        else {
          pwVar24 = *(wchar_t **)(pFVar9 + 8);
        }
        FVar21 = AddMutableThreadTask
                           (this,(wchar_t *)&local_200,
                            (TUniqueFunction<void___cdecl(void)> *)pwVar24,&local_f8);
        UE::Tasks::Private::FTaskHandle::operator=
                  (&this->LastMutableTaskLowPriority,(FTaskHandle *)FVar21.Pimpl.Reference);
        if (local_200 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_200 + 6);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)*local_200)(local_200,1);
          }
        }
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          plVar23 = local_e8;
          if (local_d0 != (longlong *)0x0) {
            plVar23 = local_d0;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        if (local_1a8 != 0) {
          plVar23 = &local_198;
          if (local_180 != (longlong *)0x0) {
            plVar23 = local_180;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        if (local_1c0 != (void *)0x0) {
          FMemory::Free(local_1c0);
        }
        pFVar16 = local_220;
        DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_220,(int)local_218);
        if (pFVar16 != (FTaskHandle *)0x0) {
          FMemory::Free(pFVar16);
        }
        ::FString::ConcatFC(&local_1e8,(FString *)(pFVar9 + 8),L" End");
        local_228.Pimpl.Reference =
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
             (this->LastMutableTaskLowPriority).Pimpl.Reference;
        if (local_228.Pimpl.Reference != (FTaskBase *)0x0) {
          LOCK();
          ((FTaskBase *)local_228.Pimpl.Reference)->RefCount =
               (atomic<unsigned_int>)((int)((FTaskBase *)local_228.Pimpl.Reference)->RefCount + 1);
          UNLOCK();
        }
        local_230 = 1;
        local_238.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,1,0,&local_238,1,&local_22c);
        ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
                  (local_238.Data,&local_228,1);
        local_b8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::`21'::<lambda_2>,1,0>
                    ::_vftable_;
        FVar25.Data = (FScriptContainerElement *)L"";
        if (local_1e8.Data.ArrayNum != 0) {
          FVar25.Data = local_1e8.Data.AllocatorInstance.Data;
        }
        local_c8.AllocatorInstance.Data =
             (FScriptContainerElement *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_2>,void>
             ::Call;
        local_a0 = (undefined ***)0x0;
        local_b0 = this;
        AddMutableThreadTask
                  (this,(wchar_t *)&local_1f8,(TUniqueFunction<void___cdecl(void)> *)FVar25.Data,
                   &local_c8);
        if (local_1f8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_1f8 + 6);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)*local_1f8)(local_1f8,1);
          }
        }
        if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          pppuVar22 = &local_b8;
          if (local_a0 != (undefined ***)0x0) {
            pppuVar22 = local_a0;
          }
          (*(code *)(*pppuVar22)[2])();
        }
        DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_238.Data,local_230);
        if (local_238.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data);
        }
        if (local_228.Pimpl.Reference != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = (atomic<unsigned_int> *)((longlong)local_228.Pimpl.Reference + 0x30);
          aVar5 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar5 == (atomic<unsigned_int>)0x1) {
            (*(code *)**(undefined8 **)local_228.Pimpl.Reference)();
          }
        }
      }
      if ((TUniqueFunction<void___cdecl(void)> *)local_1e8.Data.AllocatorInstance.Data !=
          (TUniqueFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      TArray<FMutableTaskGraph::FMutableThreadLowPriorityTask,TSizedDefaultAllocator<32>_>::RemoveAt
                (&this->QueueMutableTasksLowPriority,0,Default);
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
      if ((bVar18) && (5 < (byte)LogMutable._0_1_)) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      }
      goto LAB_14ac49aba;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
LAB_14ac49aba:
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnlockMutableThread @ 14ac4a540

void __thiscall FMutableTaskGraph::UnlockMutableThread(FMutableTaskGraph *this)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<bool> aVar3;
  atomic<unsigned_int> aVar4;
  FTaskBase *pFVar5;
  FTaskEvent this_00;
  code *pcVar6;
  bool bVar7;
  wchar_t *pwVar8;
  bool bVar9;
  longlong local_18 [2];
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId425,"Mutable_FMutableTaskGraph::UnlockMutableThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0x1a9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId425);
  }
  if (this == (FMutableTaskGraph *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((this->MutableThreadUnlockEvent == (FTaskEvent)0x0) ||
     (*(char *)((longlong)this->MutableThreadUnlockEvent + 0xd0) != '\0')) goto LAB_14ac4a6b2;
  pFVar5 = (this->LastMutableTaskBeforeLock).Pimpl.Reference;
  pFVar1 = &this->LastMutableTaskBeforeLock;
  if ((pFVar5 != (FTaskBase *)0x0) && ((pFVar5->Subsequents).bIsClosed == (atomic<bool>)0x0))
  goto LAB_14ac4a6b2;
  if (RegionLockStatus != Unlocked) {
    if (RegionLockStatus == Requested) {
      pwVar8 = L"Mutable Thread Request Lock";
LAB_14ac4a636:
      FMiscTrace::OutputEndRegion(pwVar8);
    }
    else {
      if (RegionLockStatus == Locked) {
        pwVar8 = L"Mutable Thread Lock";
        goto LAB_14ac4a636;
      }
      if ((RegionLockStatus != Unlocked) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Unimplemented function called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
                             ,0x16b,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    RegionLockStatus = Unlocked;
  }
  if (pFVar1 != (FTaskHandle *)local_18) {
    pFVar5 = (pFVar1->Pimpl).Reference;
    (pFVar1->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar5->RefCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  if ((this->MutableThreadUnlockEvent != (FTaskEvent)0x0) &&
     (*(char *)((longlong)this->MutableThreadUnlockEvent + 0xd0) == '\0')) {
    this_00 = this->MutableThreadUnlockEvent;
    LOCK();
    aVar3 = *(atomic<bool> *)((longlong)this_00 + 0x45);
    *(atomic<bool> *)((longlong)this_00 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)this_00 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_00 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0xd8);
    }
  }
LAB_14ac4a6b2:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WaitForLaunchedLowPriorityTask @ 14ac4c870

void __thiscall
FMutableTaskGraph::WaitForLaunchedLowPriorityTask(FMutableTaskGraph *this,uint param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *this_00;
  
  if (this == (FMutableTaskGraph *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((this->LastMutableTaskLowPriorityID == param_1) &&
     (this_00 = (this->LastMutableTaskLowPriority).Pimpl.Reference, this_00 != (FTaskBase *)0x0)) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    UE::Tasks::Private::FTaskBase::Wait(this_00);
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ac4c8d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)this_00->_padding_)(this_00,1);
      return;
    }
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return;
}

// WaitForMutableTasks @ 14ac4c900

void __thiscall FMutableTaskGraph::WaitForMutableTasks(FMutableTaskGraph *this)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  longlong local_18 [2];
  
  if (this != (FMutableTaskGraph *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    pFVar4 = (this->LastMutableTask).Pimpl.Reference;
    pFVar1 = &this->LastMutableTask;
    if (pFVar4 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar4);
      if (pFVar1 != (FTaskHandle *)local_18) {
        pFVar4 = (pFVar1->Pimpl).Reference;
        (pFVar1->Pimpl).Reference = (FTaskBase *)0x0;
        if (pFVar4 != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = &pFVar4->RefCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<unsigned_int>)0x1) {
            (**(code **)pFVar4->_padding_)(pFVar4,1);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014ac4c96a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

