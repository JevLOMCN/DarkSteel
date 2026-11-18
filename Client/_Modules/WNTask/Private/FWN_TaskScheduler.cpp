// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 22

// FWN_TaskScheduler @ 14a6ac2d0

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_TaskScheduler * __thiscall
FWN_TaskScheduler::FWN_TaskScheduler(FWN_TaskScheduler *this,FWN_TaskManager *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  int *piVar7;
  FEvent *pFVar8;
  FWN_TaskScheduler *pFVar9;
  TStaticArray<TQueue<FWN_Task_*,1>,2,4294967295> *pTVar10;
  int *piVar11;
  longlong lVar12;
  
  this->TaskManager = param_1;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->bShouldStop = false;
  this->bIsStopped = true;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->Event = (FEvent *)0x0;
  this->Thread = (FRunnableThread *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PendingSchedulingQueue,4000);
  (this->PendingSchedulingQueue).FrontQueueIndex = 0;
  (this->PendingSchedulingQueue).NumFrontTasks = 0;
  lVar12 = 2;
  pTVar10 = &(this->PendingSchedulingQueue).TaskQueues;
  do {
    lVar12 = lVar12 + -1;
    pTVar5 = ::operator_new(0x10);
    pTVar6 = (TNode *)0x0;
    if (pTVar5 != (TNode *)0x0) {
      pTVar5->NextNode = (TNode *)0x0;
      pTVar5->Item = (FWN_Task *)0x0;
      pTVar5->NextNode = (TNode *)0x0;
      pTVar6 = pTVar5;
    }
    pTVar10->Elements[0].Tail = pTVar6;
    pTVar10->Elements[0].Head = pTVar6;
    pTVar10 = (TStaticArray<TQueue<FWN_Task_*,1>,2,4294967295> *)(pTVar10->Elements + 1);
  } while (lVar12 != 0);
  (this->SchedulingTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SchedulingTasks).ArrayNum = 0;
  piVar11 = &(this->SchedulingTasks).ArrayMax;
  *piVar11 = 0;
  piVar1 = &(this->ProcessedTasks).ArrayMax;
  (this->ScheduledTasksArray).Elements[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduledTasksArray).Elements[0].ArrayNum = 0;
  (this->ScheduledTasksArray).Elements[0].ArrayMax = 0;
  (this->ScheduledTasksArray).Elements[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduledTasksArray).Elements[1].ArrayNum = 0;
  (this->ScheduledTasksArray).Elements[1].ArrayMax = 0;
  (this->ScheduledTasksArray).Elements[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduledTasksArray).Elements[2].ArrayNum = 0;
  (this->ScheduledTasksArray).Elements[2].ArrayMax = 0;
  (this->ScheduledTasksArray).Elements[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduledTasksArray).Elements[3].ArrayNum = 0;
  (this->ScheduledTasksArray).Elements[3].ArrayMax = 0;
  (this->ScheduledTasksArray).Elements[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduledTasksArray).Elements[4].ArrayNum = 0;
  (this->ScheduledTasksArray).Elements[4].ArrayMax = 0;
  (this->ScheduledTasksArray).Elements[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduledTasksArray).Elements[5].ArrayNum = 0;
  (this->ScheduledTasksArray).Elements[5].ArrayMax = 0;
  (this->ScheduledTasksArray).Elements[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduledTasksArray).Elements[6].ArrayNum = 0;
  (this->ScheduledTasksArray).Elements[6].ArrayMax = 0;
  (this->ProcessingTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcessingTasks).ArrayNum = 0;
  piVar7 = &(this->ProcessingTasks).ArrayMax;
  (this->ProcessingCompletedTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcessingCompletedTasks).ArrayNum = 0;
  (this->ProcessingCompletedTasks).ArrayMax = 0;
  (this->ProcessedTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar7 = 0;
  (this->ProcessedTasks).ArrayNum = 0;
  *piVar1 = 0;
  (this->CompletedTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompletedTasks).ArrayNum = 0;
  piVar2 = &(this->CompletedTasks).ArrayMax;
  *piVar2 = 0;
  pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->Event = pFVar8;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskScheduler.cpp"
                         ,0xa4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FWN_TaskScheduler *)(*pcVar3)();
    return pFVar9;
  }
  if (*piVar11 < 0x2000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x2000,&(this->SchedulingTasks).AllocatorInstance,
               (this->SchedulingTasks).ArrayNum,piVar11);
  }
  piVar11 = &(this->ScheduledTasksArray).Elements[0].ArrayMax;
  lVar12 = 7;
  do {
    if (*piVar11 < 0x2000) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0x2000,(ForAnyElementType *)(piVar11 + -3),piVar11[-1],piVar11);
    }
    piVar11 = piVar11 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  if (*piVar7 < 0x2000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x2000,&(this->ProcessingTasks).AllocatorInstance,
               (this->ProcessingTasks).ArrayNum,piVar7);
  }
  piVar11 = &(this->ProcessingCompletedTasks).ArrayMax;
  if (*piVar11 < 0x2000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x2000,&(this->ProcessingCompletedTasks).AllocatorInstance,
               (this->ProcessingCompletedTasks).ArrayNum,piVar11);
  }
  if (*piVar1 < 0x2000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x2000,&(this->ProcessedTasks).AllocatorInstance,(this->ProcessedTasks).ArrayNum,
               piVar1);
  }
  if (*piVar2 < 0x2000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x2000,&(this->CompletedTasks).AllocatorInstance,(this->CompletedTasks).ArrayNum,
               piVar2);
  }
  return this;
}

// ~DoubleBufferedTaskQueue @ 14a6ac700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWN_TaskScheduler::DoubleBufferedTaskQueue::~DoubleBufferedTaskQueue(DoubleBufferedTaskQueue *this)

{
  undefined8 *puVar1;
  long *plVar2;
  longlong lVar3;
  
  plVar2 = this[1].FrontQueueIndexCS.CriticalSection.Opaque2;
  lVar3 = 2;
  do {
    puVar1 = (undefined8 *)(plVar2 + -4);
    plVar2 = plVar2 + -4;
    lVar3 = lVar3 + -1;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)plVar2 = *puVar1;
      ::operator_delete(puVar1,0x10);
      puVar1 = *(undefined8 **)plVar2;
    }
  } while (lVar3 != 0);
                    /* WARNING: Could not recover jumptable at 0x00014a6ac762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~FWN_TaskScheduler @ 14a6ac9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::~FWN_TaskScheduler(FWN_TaskScheduler *this)

{
  FEvent *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  pFVar1 = this->Event;
  if (pFVar1 != (FEvent *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
  }
  pFVar2 = (this->CompletedTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProcessedTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProcessingCompletedTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pTVar4 = &this->ProcessingTasks;
  pFVar2 = (pTVar4->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  lVar3 = 7;
  do {
    pFVar2 = pTVar4[-1].AllocatorInstance.Data;
    pTVar4 = pTVar4 + -1;
    lVar3 = lVar3 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar3 != 0);
  pFVar2 = (this->SchedulingTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DoubleBufferedTaskQueue::~DoubleBufferedTaskQueue(&this->PendingSchedulingQueue);
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// EnqueueTask @ 14a6ad650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::EnqueueTask(FWN_TaskScheduler *this,FWN_Task *param_1)

{
  uint *puVar1;
  uint uVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  DoubleBufferedTaskQueue *lpCriticalSection;
  
  FWN_Task::SetStep(param_1,Scheduling);
  lpCriticalSection = &this->PendingSchedulingQueue;
  if (lpCriticalSection != (DoubleBufferedTaskQueue *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = (this->PendingSchedulingQueue).FrontQueueIndex;
    pTVar4 = ::operator_new(0x10);
    if (pTVar4 != (TNode *)0x0) {
      pTVar4->NextNode = (TNode *)0x0;
      pTVar4->Item = param_1;
      pTVar3 = (lpCriticalSection->TaskQueues).Elements[uVar2].Head;
      (lpCriticalSection->TaskQueues).Elements[uVar2].Head = pTVar4;
      pTVar3->NextNode = pTVar4;
    }
    puVar1 = &(this->PendingSchedulingQueue).NumFrontTasks;
    *puVar1 = *puVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x00014a6ad6c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Exit @ 14a6adb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::Exit(FWN_TaskScheduler *this)

{
  return;
}

// GetSingleThreadInterface @ 14a6ae070

/* WARNING: Enum "Type": Some values do not have unique names */

FSingleThreadRunnable * __thiscall
FWN_TaskScheduler::GetSingleThreadInterface(FWN_TaskScheduler *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->_padding_;
  if (this == (FWN_TaskScheduler *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// Init @ 14a6ae280

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_TaskScheduler::Init(FWN_TaskScheduler *this)

{
  this->bIsStopped = false;
  return true;
}

// Pop @ 14a6ae850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWN_TaskScheduler::DoubleBufferedTaskQueue::Pop
          (DoubleBufferedTaskQueue *this,TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FWN_Task *local_28 [2];
  
  if (this == (DoubleBufferedTaskQueue *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar2 = this->FrontQueueIndex;
  uVar3 = this->NumFrontTasks;
  this->NumFrontTasks = 0;
  this->FrontQueueIndex = uVar2 - 1 & 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  uVar3 = param_1->ArrayNum + uVar3;
  if (-1 < (int)uVar3) {
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    do {
      pTVar4 = ((this->TaskQueues).Elements[uVar2].Tail)->NextNode;
      if (pTVar4 == (TNode *)0x0) {
        return;
      }
      local_28[0] = pTVar4->Item;
      pTVar5 = (this->TaskQueues).Elements[uVar2].Tail;
      (this->TaskQueues).Elements[uVar2].Tail = pTVar4;
      pTVar4->Item = (FWN_Task *)0x0;
      ::operator_delete(pTVar5,0x10);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 < pFVar6 + (longlong)*piVar1 * 8)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(FWN_Task **)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_28[0];
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// ProcessCompletedStep @ 14a6aea80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::ProcessCompletedStep(FWN_TaskScheduler *this)

{
  TArray<FWN_VariantItemBase_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  FWN_Task *pFVar9;
  char cVar10;
  Type TVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  FIdentityFunctor local_res8 [8];
  EWN_TaskStep local_res10 [8];
  undefined1 local_res18 [8];
  Type local_res20;
  FWN_Task *local_88;
  FWN_Task *local_80;
  FConstructor local_78;
  FWN_Task *local_70;
  FScriptContainerElement *local_68;
  FReadAccessScope local_60;
  
  uVar8 = S_SkippedTasks._8_8_;
  iVar13 = S_SkippedTasks.ArrayMax;
  S_SkippedTasks._8_8_ = (ulonglong)(uint)S_SkippedTasks.ArrayMax << 0x20;
  TVar11 = MainQueue;
  if (((longlong)uVar8 < 0) && (TVar11 = MainQueue, iVar13 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&S_SkippedTasks.AllocatorInstance,0,&S_SkippedTasks.ArrayMax);
    iVar13 = S_SkippedTasks.ArrayMax;
    TVar11 = S_SkippedTasks.ArrayNum;
  }
  uVar5 = (this->ProcessedTasks).ArrayNum;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (iVar13 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,&S_SkippedTasks.AllocatorInstance,TVar11,&S_SkippedTasks.ArrayMax);
  }
  pTVar3 = &this->ProcessedTasks;
  AlgoImpl::
  IntroSortInternal<FWN_Task_*,int,FIdentityFunctor,TDereferenceWrapper<FWN_Task_*,_WN_SortTasksByPriorityDescending_::__l2::<lambda_1>_>_>
            ((FWN_Task **)(pTVar3->AllocatorInstance).Data,(this->ProcessedTasks).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res18);
  pFVar15 = (pTVar3->AllocatorInstance).Data;
  iVar13 = (this->ProcessedTasks).ArrayNum;
  local_68 = pFVar15 + (longlong)iVar13 * 8;
  pFVar14 = local_68;
  while( true ) {
    while( true ) {
      if ((this->ProcessedTasks).ArrayNum != iVar13) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FWN_Task_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar14) {
        bVar16 = (longlong)S_TempTasks._8_8_ < 0;
        S_TempTasks._8_8_ = S_TempTasks._8_8_ & 0xffffffff00000000;
        if (bVar16) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&S_TempTasks.AllocatorInstance,0,&S_TempTasks.ArrayMax);
        }
        if (pTVar3 != &S_TempTasks) {
          if (S_TempTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(S_TempTasks.AllocatorInstance.Data);
          }
          S_TempTasks.AllocatorInstance.Data = (pTVar3->AllocatorInstance).Data;
          (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          S_TempTasks.ArrayNum = (this->ProcessedTasks).ArrayNum;
          S_TempTasks.ArrayMax = (this->ProcessedTasks).ArrayMax;
          (this->ProcessedTasks).ArrayNum = 0;
          (this->ProcessedTasks).ArrayMax = 0;
        }
        if (pTVar3 != &S_SkippedTasks) {
          pFVar15 = (pTVar3->AllocatorInstance).Data;
          if (pFVar15 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar15);
          }
          (pTVar3->AllocatorInstance).Data = S_SkippedTasks.AllocatorInstance.Data;
          S_SkippedTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->ProcessedTasks).ArrayNum = S_SkippedTasks.ArrayNum;
          (this->ProcessedTasks).ArrayMax = S_SkippedTasks.ArrayMax;
          S_SkippedTasks.ArrayNum = 0;
          S_SkippedTasks.ArrayMax = 0;
        }
        if (S_SkippedTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(S_SkippedTasks.AllocatorInstance.Data);
        }
        S_SkippedTasks.AllocatorInstance = S_TempTasks.AllocatorInstance;
        S_SkippedTasks.ArrayNum = S_TempTasks.ArrayNum;
        S_SkippedTasks.ArrayMax = S_TempTasks.ArrayMax;
        S_TempTasks.ArrayNum = 0;
        S_TempTasks.ArrayMax = 0;
        S_TempTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        return;
      }
      local_88 = *(FWN_Task **)pFVar15;
      LOCK();
      bVar16 = local_88->NumPrerequisiteTasks == 0;
      if (bVar16) {
        local_88->NumPrerequisiteTasks = 0;
      }
      UNLOCK();
      if (bVar16) break;
      if (local_88->Step == Processed) {
        FWN_Task::SetStep(local_88,WaitingForCompleted);
      }
      if (((S_SkippedTasks.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           S_SkippedTasks.AllocatorInstance.Data + (longlong)S_SkippedTasks.ArrayMax * 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = S_SkippedTasks.ArrayNum;
      if (S_SkippedTasks.ArrayNum == S_SkippedTasks.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&S_SkippedTasks.AllocatorInstance,&S_SkippedTasks.ArrayMax);
      }
      pFVar15 = pFVar15 + 8;
      S_SkippedTasks.ArrayNum = iVar12 + 1;
      *(FWN_Task **)(S_SkippedTasks.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_88;
    }
    FWN_Task::SetStep(local_88,Completed);
    pFVar9 = local_88;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_88->Completed,
               &local_60);
    if (((*(int *)&(pFVar9->Completed).Callback.field_0x10 == 0) ||
        (plVar6 = *(longlong **)&(pFVar9->Completed).Callback.field_0x8, plVar6 == (longlong *)0x0))
       || (cVar10 = (**(code **)(*plVar6 + 0x38))(), cVar10 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
      pFVar9 = local_88;
      local_80 = local_88;
      local_res10[0] = local_88->Step;
      TVar11 = local_88->CompletionThreadType;
      if ((local_88->GraphTask != (FWN_GraphTaskForStep *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InWNTask->GraphTask == nullptr",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskScheduler.cpp"
                              ,0x56,L""), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      cVar10 = *(char *)((longlong)&(pFVar9->Priority).PriorityBits + 7);
      if (cVar10 == '\x02') {
        local_res20 = BackgroundThreadPriority|HighTaskPriority;
      }
      else {
        local_res20 = MainQueue;
        if (cVar10 != '\x03') {
          if (cVar10 == '\x04') {
            local_res20 = HighTaskPriority;
          }
          else {
            local_res20 = BackgroundThreadPriority;
            if (cVar10 == '\x05') {
              local_res20 = HighThreadPriority;
            }
          }
        }
      }
      local_res20 = local_res20 | TVar11;
      local_78.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FWN_GraphTaskForStep>::FConstructor::
      ConstructAndDispatchWhenReady<FWN_Task_*_&,enum_EWN_TaskStep_const_&,enum_ENamedThreads::Type>
                (&local_78,&local_70,(EWN_TaskStep *)&local_80,(Type *)local_res10);
      if (local_70 != (FWN_Task *)0x0) {
        LOCK();
        pTVar1 = &(local_70->UserDatas).Items;
        iVar12 = *(int *)&(pTVar1->AllocatorInstance).Data;
        *(int *)&(pTVar1->AllocatorInstance).Data = *(int *)&(pTVar1->AllocatorInstance).Data + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (*(code *)**(undefined8 **)local_70)(local_70,1);
        }
      }
    }
    pTVar4 = &this->CompletedTasks;
    pFVar14 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar14 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar14 + (longlong)(this->CompletedTasks).ArrayMax * 8)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) break;
    iVar12 = (this->CompletedTasks).ArrayNum;
    piVar2 = &(this->CompletedTasks).ArrayMax;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar4->AllocatorInstance,piVar2);
    }
    pFVar15 = pFVar15 + 8;
    (this->CompletedTasks).ArrayNum = iVar12 + 1;
    *(FWN_Task **)((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_88;
    pFVar14 = local_68;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// ProcessGCedStep @ 14a6aef80

/* WARNING: Removing unreachable block (ram,0x00014a6af5a5) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::ProcessGCedStep(FWN_TaskScheduler *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FWN_TaskManager *pFVar4;
  ulong64 uVar5;
  FWN_Task *this_00;
  code *pcVar6;
  ForAnyElementType FVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  bool bVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_48 [2];
  
  uVar8 = S_TempTasks._8_8_;
  iVar9 = S_TempTasks.ArrayMax;
  S_TempTasks._8_8_ = (ulonglong)(uint)S_TempTasks.ArrayMax << 0x20;
  uVar15 = 0;
  if (((longlong)uVar8 < 0) && (iVar9 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&S_TempTasks.AllocatorInstance,0,&S_TempTasks.ArrayMax);
    iVar9 = S_TempTasks.ArrayMax;
    uVar15 = S_TempTasks.ArrayNum;
  }
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (iVar9 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar15,&S_TempTasks.AllocatorInstance,uVar15,&S_TempTasks.ArrayMax);
  }
  uVar8 = S_SkippedTasks._8_8_;
  iVar9 = S_SkippedTasks.ArrayMax;
  S_SkippedTasks._8_8_ = (ulonglong)(uint)S_SkippedTasks.ArrayMax << 0x20;
  uVar15 = 0;
  if (((longlong)uVar8 < 0) && (iVar9 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&S_SkippedTasks.AllocatorInstance,0,&S_SkippedTasks.ArrayMax);
    uVar15 = S_SkippedTasks.ArrayNum;
    iVar9 = S_SkippedTasks.ArrayMax;
  }
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (iVar9 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar15,&S_SkippedTasks.AllocatorInstance,uVar15,&S_SkippedTasks.ArrayMax);
  }
  pTVar1 = &this->CompletedTasks;
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  iVar9 = (this->CompletedTasks).ArrayNum;
  pFVar2 = pFVar13 + (longlong)iVar9 * 8;
  do {
    while( true ) {
      if ((this->CompletedTasks).ArrayNum != iVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FWN_Task_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar13 == pFVar2) {
        pFVar4 = this->TaskManager;
        lpCriticalSection = &pFVar4->TaskMapCS;
        if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          iVar9 = S_TempTasks.ArrayNum;
          pFVar2 = S_TempTasks.AllocatorInstance.Data + (longlong)S_TempTasks.ArrayNum * 8;
          FVar14 = S_TempTasks.AllocatorInstance;
          while( true ) {
            if (S_TempTasks.ArrayNum != iVar9) {
              `TCheckedPointerIterator<FWN_Task_*_const,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (FVar14.Data == pFVar2) break;
            if (*(int *)&(pFVar4->TaskMap).field_0x8 != *(int *)&(pFVar4->TaskMap).field_0x34) {
              uVar5 = ((FWN_TaskHandle *)(*(longlong *)FVar14.Data + 0x130))->Identifier;
              TSet<TTuple<FWN_TaskHandle,FWN_Task_*>,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>,FDefaultSetAllocator>
              ::RemoveImpl<FWN_TaskHandle>
                        ((TSet<TTuple<FWN_TaskHandle,FWN_Task_*>,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>,FDefaultSetAllocator>
                          *)&pFVar4->TaskMap,(int)(uVar5 >> 0x20) * 0x17 + (int)uVar5,
                         (FWN_TaskHandle *)(*(longlong *)FVar14.Data + 0x130));
            }
            FVar14.Data = FVar14.Data + 8;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          iVar9 = S_TempTasks.ArrayNum;
          pFVar2 = S_TempTasks.AllocatorInstance.Data + (longlong)S_TempTasks.ArrayNum * 8;
          FVar14 = S_TempTasks.AllocatorInstance;
          while( true ) {
            if (S_TempTasks.ArrayNum != iVar9) {
              `TCheckedPointerIterator<FWN_Task_*_const,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res20);
            }
            uVar8 = S_TempTasks._8_8_;
            FVar7.Data = S_TempTasks.AllocatorInstance.Data;
            if (FVar14.Data == pFVar2) break;
            this_00 = *(FWN_Task **)FVar14.Data;
            FWN_Task::SetStep(this_00,GCed);
            FWN_Task::Reset(this_00);
            FVar14.Data = FVar14.Data + 8;
          }
          S_TempTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          S_TempTasks.ArrayNum = 0;
          S_TempTasks.ArrayMax = 0;
          if (pTVar1 != &S_TempTasks) {
            S_TempTasks.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
            (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            S_TempTasks.ArrayNum = (this->CompletedTasks).ArrayNum;
            S_TempTasks.ArrayMax = (this->CompletedTasks).ArrayMax;
            (this->CompletedTasks).ArrayNum = 0;
            (this->CompletedTasks).ArrayMax = 0;
          }
          if (pTVar1 != &S_SkippedTasks) {
            pFVar2 = (pTVar1->AllocatorInstance).Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            (pTVar1->AllocatorInstance).Data = S_SkippedTasks.AllocatorInstance.Data;
            S_SkippedTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (this->CompletedTasks).ArrayNum = S_SkippedTasks.ArrayNum;
            (this->CompletedTasks).ArrayMax = S_SkippedTasks.ArrayMax;
            S_SkippedTasks.ArrayNum = 0;
            S_SkippedTasks.ArrayMax = 0;
          }
          if (S_SkippedTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(S_SkippedTasks.AllocatorInstance.Data);
          }
          S_SkippedTasks.AllocatorInstance = S_TempTasks.AllocatorInstance;
          S_SkippedTasks.ArrayNum = S_TempTasks.ArrayNum;
          S_SkippedTasks.ArrayMax = S_TempTasks.ArrayMax;
          S_TempTasks.AllocatorInstance = FVar7;
          S_TempTasks._8_8_ = uVar8;
          return;
        }
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      local_48[0] = *(longlong *)pFVar13;
      LOCK();
      bVar16 = *(int *)(local_48[0] + 0xf8) == 0;
      if (bVar16) {
        *(int *)(local_48[0] + 0xf8) = 0;
      }
      UNLOCK();
      if (bVar16) break;
      if (((S_SkippedTasks.AllocatorInstance.Data <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 <
           S_SkippedTasks.AllocatorInstance.Data + (longlong)S_SkippedTasks.ArrayMax * 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = S_SkippedTasks.ArrayNum;
      if (S_SkippedTasks.ArrayNum == S_SkippedTasks.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&S_SkippedTasks.AllocatorInstance,&S_SkippedTasks.ArrayMax);
      }
LAB_14a6af195:
      pFVar13 = pFVar13 + 8;
      S_SkippedTasks.ArrayNum = iVar10 + 1;
      *(longlong *)(S_SkippedTasks.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_48[0];
    }
    LOCK();
    bVar16 = *(int *)(local_48[0] + 0xf8) == 0;
    if (bVar16) {
      *(int *)(local_48[0] + 0xf8) = 0;
    }
    UNLOCK();
    if (bVar16) {
      if (((S_TempTasks.AllocatorInstance.Data <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 <
           S_TempTasks.AllocatorInstance.Data + (longlong)S_TempTasks.ArrayMax * 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = S_TempTasks.ArrayNum;
      if (S_TempTasks.ArrayNum == S_TempTasks.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&S_TempTasks.AllocatorInstance,&S_TempTasks.ArrayMax);
      }
      pFVar13 = pFVar13 + 8;
      S_TempTasks.ArrayNum = iVar10 + 1;
      *(longlong *)(S_TempTasks.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_48[0];
    }
    else {
      if (*(char *)(local_48[0] + 2) != '\0') {
        lVar3 = *(longlong *)(local_48[0] + 0x18);
        plVar12 = (longlong *)(local_48[0] + 0x18);
        if (((ulonglong)plVar12 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        lVar11 = *plVar12;
        if (lVar3 == lVar11) {
          *plVar12 = 0;
          lVar11 = lVar3;
        }
        UNLOCK();
        if ((lVar11 != 0) && (*(char *)(local_48[0] + 3) == '\0')) {
          (**(code **)(**(longlong **)(local_48[0] + 0x18) + 0x10))();
          *(undefined1 *)(local_48[0] + 3) = 1;
        }
        plVar12 = (longlong *)(local_48[0] + 0x18);
        if (((ulonglong)plVar12 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        if (*plVar12 == 0) {
          *plVar12 = lVar11;
        }
        UNLOCK();
      }
      if (((S_SkippedTasks.AllocatorInstance.Data <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 <
           S_SkippedTasks.AllocatorInstance.Data + (longlong)S_SkippedTasks.ArrayMax * 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = S_SkippedTasks.ArrayNum;
      if (S_SkippedTasks.ArrayNum != S_SkippedTasks.ArrayMax) goto LAB_14a6af195;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&S_SkippedTasks.AllocatorInstance,&S_SkippedTasks.ArrayMax);
      pFVar13 = pFVar13 + 8;
      S_SkippedTasks.ArrayNum = iVar10 + 1;
      *(longlong *)(S_SkippedTasks.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_48[0];
    }
  } while( true );
}

// ProcessProcessedStep @ 14a6af610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::ProcessProcessedStep(FWN_TaskScheduler *this)

{
  int *piVar1;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  FWN_Task *pFVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  FWN_Task *local_58;
  FReadAccessScope local_50;
  
  uVar9 = S_SkippedTasks._8_8_;
  iVar14 = S_SkippedTasks.ArrayMax;
  S_SkippedTasks._8_8_ = (ulonglong)(uint)S_SkippedTasks.ArrayMax << 0x20;
  iVar13 = 0;
  if (((longlong)uVar9 < 0) && (iVar13 = 0, iVar14 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&S_SkippedTasks.AllocatorInstance,0,&S_SkippedTasks.ArrayMax);
    iVar14 = S_SkippedTasks.ArrayMax;
    iVar13 = S_SkippedTasks.ArrayNum;
  }
  uVar4 = (this->ProcessingCompletedTasks).ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (iVar14 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&S_SkippedTasks.AllocatorInstance,iVar13,&S_SkippedTasks.ArrayMax);
  }
  pTVar2 = &this->ProcessingCompletedTasks;
  AlgoImpl::
  IntroSortInternal<FWN_Task_*,int,FIdentityFunctor,TDereferenceWrapper<FWN_Task_*,_WN_SortTasksByPriorityDescending_::__l2::<lambda_1>_>_>
            ((FWN_Task **)(pTVar2->AllocatorInstance).Data,(this->ProcessingCompletedTasks).ArrayNum
             ,local_res8[0],(<lambda_1> *)local_res10);
  pFVar15 = (pTVar2->AllocatorInstance).Data;
  iVar14 = (this->ProcessingCompletedTasks).ArrayNum;
  pFVar7 = pFVar15 + (longlong)iVar14 * 8;
  do {
    while( true ) {
      if ((this->ProcessingCompletedTasks).ArrayNum != iVar14) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FWN_Task_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar7) {
        bVar12 = (longlong)S_TempTasks._8_8_ < 0;
        S_TempTasks._8_8_ = S_TempTasks._8_8_ & 0xffffffff00000000;
        if (bVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&S_TempTasks.AllocatorInstance,0,&S_TempTasks.ArrayMax);
        }
        if (pTVar2 != &S_TempTasks) {
          if (S_TempTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(S_TempTasks.AllocatorInstance.Data);
          }
          S_TempTasks.AllocatorInstance.Data = (pTVar2->AllocatorInstance).Data;
          (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          S_TempTasks.ArrayNum = (this->ProcessingCompletedTasks).ArrayNum;
          S_TempTasks.ArrayMax = (this->ProcessingCompletedTasks).ArrayMax;
          (this->ProcessingCompletedTasks).ArrayNum = 0;
          (this->ProcessingCompletedTasks).ArrayMax = 0;
        }
        if (pTVar2 != &S_SkippedTasks) {
          pFVar7 = (pTVar2->AllocatorInstance).Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          (pTVar2->AllocatorInstance).Data = S_SkippedTasks.AllocatorInstance.Data;
          S_SkippedTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->ProcessingCompletedTasks).ArrayNum = S_SkippedTasks.ArrayNum;
          (this->ProcessingCompletedTasks).ArrayMax = S_SkippedTasks.ArrayMax;
          S_SkippedTasks.ArrayNum = 0;
          S_SkippedTasks.ArrayMax = 0;
        }
        if (S_SkippedTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(S_SkippedTasks.AllocatorInstance.Data);
        }
        S_SkippedTasks.AllocatorInstance = S_TempTasks.AllocatorInstance;
        S_SkippedTasks.ArrayNum = S_TempTasks.ArrayNum;
        S_SkippedTasks.ArrayMax = S_TempTasks.ArrayMax;
        S_TempTasks.ArrayNum = 0;
        S_TempTasks.ArrayMax = 0;
        S_TempTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        return;
      }
      local_58 = *(FWN_Task **)pFVar15;
      if (local_58->bIsCanceled == false) break;
      FWN_Task::SetStep(local_58,Processed);
LAB_14a6af862:
      pTVar3 = &this->ProcessedTasks;
      pFVar6 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar6 + (longlong)(this->ProcessedTasks).ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar13 = (this->ProcessedTasks).ArrayNum;
      piVar1 = &(this->ProcessedTasks).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar3->AllocatorInstance,piVar1);
      }
      pFVar15 = pFVar15 + 8;
      (this->ProcessedTasks).ArrayNum = iVar13 + 1;
      *(FWN_Task **)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_58;
    }
    LOCK();
    bVar12 = local_58->NumPrerequisiteTasks == 0;
    if (bVar12) {
      local_58->NumPrerequisiteTasks = 0;
    }
    UNLOCK();
    if (bVar12) {
      FWN_Task::SetStep(local_58,Processed);
      pFVar10 = local_58;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_58->Processed,
                 &local_50);
      if (((*(int *)&(pFVar10->Processed).Callback.field_0x10 == 0) ||
          (plVar5 = *(longlong **)&(pFVar10->Processed).Callback.field_0x8,
          plVar5 == (longlong *)0x0)) || (cVar11 = (**(code **)(*plVar5 + 0x38))(), cVar11 == '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        FWN_GraphTaskForStep::CreateGraphTask
                  (local_58,local_58->Step,local_58->CompletionThreadType);
      }
      goto LAB_14a6af862;
    }
    if (local_58->Step == ProcessingCompleted) {
      FWN_Task::SetStep(local_58,WaitingForProcessed);
    }
    if (((S_SkippedTasks.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         S_SkippedTasks.AllocatorInstance.Data + (longlong)S_SkippedTasks.ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar13 = S_SkippedTasks.ArrayNum;
    if (S_SkippedTasks.ArrayNum == S_SkippedTasks.ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&S_SkippedTasks.AllocatorInstance,&S_SkippedTasks.ArrayMax);
    }
    pFVar15 = pFVar15 + 8;
    S_SkippedTasks.ArrayNum = iVar13 + 1;
    *(FWN_Task **)(S_SkippedTasks.AllocatorInstance.Data + (longlong)iVar13 * 8) = local_58;
  } while( true );
}

// ProcessProcessingCompletedStep @ 14a6afa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::ProcessProcessingCompletedStep(FWN_TaskScheduler *this)

{
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  FWN_Task *pFVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  FWN_Task *local_58;
  FReadAccessScope local_50;
  
  uVar7 = S_SkippedTasks._8_8_;
  iVar12 = S_SkippedTasks.ArrayMax;
  S_SkippedTasks._8_8_ = (ulonglong)(uint)S_SkippedTasks.ArrayMax << 0x20;
  iVar11 = 0;
  if (((longlong)uVar7 < 0) && (iVar11 = 0, iVar12 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&S_SkippedTasks.AllocatorInstance,0,&S_SkippedTasks.ArrayMax);
    iVar12 = S_SkippedTasks.ArrayMax;
    iVar11 = S_SkippedTasks.ArrayNum;
  }
  uVar2 = (this->ProcessingTasks).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (iVar12 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&S_SkippedTasks.AllocatorInstance,iVar11,&S_SkippedTasks.ArrayMax);
  }
  pTVar1 = &this->ProcessingTasks;
  AlgoImpl::
  IntroSortInternal<FWN_Task_*,int,FIdentityFunctor,TDereferenceWrapper<FWN_Task_*,_WN_SortTasksByPriorityDescending_::__l2::<lambda_1>_>_>
            ((FWN_Task **)(pTVar1->AllocatorInstance).Data,(this->ProcessingTasks).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res10);
  pFVar14 = (pTVar1->AllocatorInstance).Data;
  iVar12 = (this->ProcessingTasks).ArrayNum;
  pFVar5 = pFVar14 + (longlong)iVar12 * 8;
  do {
    while( true ) {
      if ((this->ProcessingTasks).ArrayNum != iVar12) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FWN_Task_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar14 == pFVar5) {
        bVar10 = (longlong)S_TempTasks._8_8_ < 0;
        S_TempTasks._8_8_ = S_TempTasks._8_8_ & 0xffffffff00000000;
        if (bVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&S_TempTasks.AllocatorInstance,0,&S_TempTasks.ArrayMax);
        }
        if (pTVar1 != &S_TempTasks) {
          if (S_TempTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(S_TempTasks.AllocatorInstance.Data);
          }
          S_TempTasks.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
          (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          S_TempTasks.ArrayNum = (this->ProcessingTasks).ArrayNum;
          S_TempTasks.ArrayMax = (this->ProcessingTasks).ArrayMax;
          (this->ProcessingTasks).ArrayNum = 0;
          (this->ProcessingTasks).ArrayMax = 0;
        }
        if (pTVar1 != &S_SkippedTasks) {
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (pTVar1->AllocatorInstance).Data = S_SkippedTasks.AllocatorInstance.Data;
          S_SkippedTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->ProcessingTasks).ArrayNum = S_SkippedTasks.ArrayNum;
          (this->ProcessingTasks).ArrayMax = S_SkippedTasks.ArrayMax;
          S_SkippedTasks.ArrayNum = 0;
          S_SkippedTasks.ArrayMax = 0;
        }
        if (S_SkippedTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(S_SkippedTasks.AllocatorInstance.Data);
        }
        S_SkippedTasks.AllocatorInstance = S_TempTasks.AllocatorInstance;
        S_SkippedTasks.ArrayNum = S_TempTasks.ArrayNum;
        S_SkippedTasks.ArrayMax = S_TempTasks.ArrayMax;
        S_TempTasks.ArrayNum = 0;
        S_TempTasks.ArrayMax = 0;
        S_TempTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        return;
      }
      local_58 = *(FWN_Task **)pFVar14;
      if (local_58->bIsCanceled == false) break;
      FWN_Task::SetStep(local_58,Processed);
      pTVar13 = &this->ProcessedTasks;
LAB_14a6afcb2:
      pFVar4 = (pTVar13->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)pTVar13->ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = pTVar13->ArrayNum;
      if (iVar11 == pTVar13->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
      }
      pFVar14 = pFVar14 + 8;
      pTVar13->ArrayNum = iVar11 + 1;
      *(FWN_Task **)((pTVar13->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_58;
    }
    LOCK();
    bVar10 = local_58->NumPrerequisiteTasks == 0;
    if (bVar10) {
      local_58->NumPrerequisiteTasks = 0;
    }
    UNLOCK();
    if (bVar10) {
      FWN_Task::SetStep(local_58,ProcessingCompleted);
      pFVar8 = local_58;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &local_58->ProcessingCompleted,&local_50);
      if (((*(int *)&(pFVar8->ProcessingCompleted).Callback.field_0x10 == 0) ||
          (plVar3 = *(longlong **)&(pFVar8->ProcessingCompleted).Callback.field_0x8,
          plVar3 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar3 + 0x38))(), cVar9 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        FWN_GraphTaskForStep::CreateGraphTask(local_58,local_58->Step,AnyNormalThreadNormalTask);
      }
      pTVar13 = &this->ProcessingCompletedTasks;
      goto LAB_14a6afcb2;
    }
    if (local_58->Step == Processing) {
      FWN_Task::SetStep(local_58,WaitingForProcessingCompleted);
    }
    if (((S_SkippedTasks.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         S_SkippedTasks.AllocatorInstance.Data + (longlong)S_SkippedTasks.ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = S_SkippedTasks.ArrayNum;
    if (S_SkippedTasks.ArrayNum == S_SkippedTasks.ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&S_SkippedTasks.AllocatorInstance,&S_SkippedTasks.ArrayMax);
    }
    pFVar14 = pFVar14 + 8;
    S_SkippedTasks.ArrayNum = iVar11 + 1;
    *(FWN_Task **)(S_SkippedTasks.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_58;
  } while( true );
}

// ProcessProcessingStep @ 14a6afe90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::ProcessProcessingStep(FWN_TaskScheduler *this)

{
  TArray<FWN_VariantItemBase_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  undefined8 uVar9;
  FWN_Task *pFVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar17;
  int iVar18;
  undefined1 local_res10 [8];
  EWN_TaskStep local_res18 [8];
  undefined1 local_res20 [8];
  EWN_TaskStep local_a8 [8];
  FWN_Task *local_a0;
  FWN_Task *local_98;
  uint local_90;
  uint local_8c;
  FWN_Task *local_88;
  FWN_Task *local_80;
  longlong local_78;
  FConstructor local_70;
  FWN_Task *local_68;
  FConstructor local_60;
  FWN_Task *local_58 [3];
  
  uVar9 = S_SkippedTasks._8_8_;
  iVar18 = S_SkippedTasks.ArrayMax;
  pTVar17 = (this->ScheduledTasksArray).Elements + 6;
  S_SkippedTasks._8_8_ = (ulonglong)(uint)S_SkippedTasks.ArrayMax << 0x20;
  iVar12 = 0;
  if (((longlong)uVar9 < 0) && (iVar12 = 0, iVar18 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&S_SkippedTasks.AllocatorInstance,0,&S_SkippedTasks.ArrayMax);
    iVar18 = S_SkippedTasks.ArrayMax;
    iVar12 = S_SkippedTasks.ArrayNum;
  }
  uVar4 = (this->ScheduledTasksArray).Elements[6].ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (iVar18 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&S_SkippedTasks.AllocatorInstance,iVar12,&S_SkippedTasks.ArrayMax);
  }
  pFVar16 = (pTVar17->AllocatorInstance).Data;
  iVar18 = (this->ScheduledTasksArray).Elements[6].ArrayNum;
  pFVar6 = pFVar16 + (longlong)iVar18 * 8;
LAB_14a6aff54:
  do {
    if ((this->ScheduledTasksArray).Elements[6].ArrayNum != iVar18) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FWN_Task_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar16 == pFVar6) {
      bVar11 = (longlong)S_TempTasks._8_8_ < 0;
      S_TempTasks._8_8_ = S_TempTasks._8_8_ & 0xffffffff00000000;
      if (bVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&S_TempTasks.AllocatorInstance,0,&S_TempTasks.ArrayMax);
      }
      if (pTVar17 != &S_TempTasks) {
        if (S_TempTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(S_TempTasks.AllocatorInstance.Data);
        }
        S_TempTasks.AllocatorInstance.Data = (pTVar17->AllocatorInstance).Data;
        (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        S_TempTasks.ArrayNum = (this->ScheduledTasksArray).Elements[6].ArrayNum;
        S_TempTasks.ArrayMax = (this->ScheduledTasksArray).Elements[6].ArrayMax;
        (this->ScheduledTasksArray).Elements[6].ArrayNum = 0;
        (this->ScheduledTasksArray).Elements[6].ArrayMax = 0;
      }
      if (pTVar17 != &S_SkippedTasks) {
        pFVar6 = (pTVar17->AllocatorInstance).Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (pTVar17->AllocatorInstance).Data = S_SkippedTasks.AllocatorInstance.Data;
        S_SkippedTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->ScheduledTasksArray).Elements[6].ArrayNum = S_SkippedTasks.ArrayNum;
        (this->ScheduledTasksArray).Elements[6].ArrayMax = S_SkippedTasks.ArrayMax;
        S_SkippedTasks.ArrayNum = 0;
        S_SkippedTasks.ArrayMax = 0;
      }
      if (S_SkippedTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(S_SkippedTasks.AllocatorInstance.Data);
      }
      pTVar8 = CVarMaxProcessingTasks.Ref;
      S_SkippedTasks.AllocatorInstance = S_TempTasks.AllocatorInstance;
      S_SkippedTasks.ArrayNum = S_TempTasks.ArrayNum;
      S_SkippedTasks.ArrayMax = S_TempTasks.ArrayMax;
      S_TempTasks.ArrayNum = 0;
      S_TempTasks.ArrayMax = 0;
      S_TempTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar11 = IsInParallelGameThread();
      if (!bVar11) {
        bVar11 = IsInGameThread();
        lVar14 = 4;
        if (!bVar11) goto LAB_14a6b0310;
      }
      lVar14 = 0;
LAB_14a6b0310:
      iVar18 = *(int *)((longlong)pTVar8->ShadowedValue + lVar14);
      local_78 = 5;
      pTVar17 = (this->ScheduledTasksArray).Elements + 5;
      do {
        S_SkippedTasks.ArrayNum = 0;
        iVar12 = S_SkippedTasks.ArrayNum;
        S_SkippedTasks.ArrayNum = 0;
        if ((S_SkippedTasks.ArrayMax < 0) && (S_SkippedTasks.ArrayMax != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&S_SkippedTasks.AllocatorInstance,0,&S_SkippedTasks.ArrayMax);
          iVar12 = S_SkippedTasks.ArrayNum;
        }
        S_SkippedTasks.ArrayNum = iVar12;
        uVar4 = pTVar17->ArrayNum;
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
        }
        if (S_SkippedTasks.ArrayMax < (int)uVar4) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar4,&S_SkippedTasks.AllocatorInstance,S_SkippedTasks.ArrayNum,
                     &S_SkippedTasks.ArrayMax);
        }
        pFVar16 = (pTVar17->AllocatorInstance).Data;
        iVar12 = pTVar17->ArrayNum;
        pFVar6 = pFVar16 + (longlong)iVar12 * 8;
        while( true ) {
          if (pTVar17->ArrayNum != iVar12) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FWN_Task_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar16 == pFVar6) break;
          local_98 = *(FWN_Task **)pFVar16;
          if (local_98->bIsCanceled == false) {
            LOCK();
            bVar11 = local_98->NumPrerequisiteTasks == 0;
            if (bVar11) {
              local_98->NumPrerequisiteTasks = 0;
            }
            UNLOCK();
            if (bVar11) {
              FWN_Task::SetStep(local_98,Processing);
              pFVar10 = local_98;
              local_80 = local_98;
              local_a8[0] = local_98->Step;
              if ((local_98->GraphTask != (FWN_GraphTaskForStep *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InWNTask->GraphTask == nullptr",
                                      "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskScheduler.cpp"
                                      ,0x56,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              cVar3 = *(char *)((longlong)&(pFVar10->Priority).PriorityBits + 7);
              if (cVar3 == '\x02') {
                local_8c = 0xa00;
              }
              else {
                local_8c = 0;
                if (cVar3 != '\x03') {
                  if (cVar3 == '\x04') {
                    local_8c = 0x200;
                  }
                  else {
                    local_8c = 0x800;
                    if (cVar3 == '\x05') {
                      local_8c = 0x400;
                    }
                  }
                }
              }
              local_8c = local_8c | 0xff;
              local_60.Prerequisites =
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0;
              TGraphTask<FWN_GraphTaskForStep>::FConstructor::
              ConstructAndDispatchWhenReady<FWN_Task_*_&,enum_EWN_TaskStep_const_&,enum_ENamedThreads::Type>
                        (&local_60,local_58,(EWN_TaskStep *)&local_80,(Type *)local_a8);
              if (local_58[0] != (FWN_Task *)0x0) {
                LOCK();
                pTVar1 = &(local_58[0]->UserDatas).Items;
                iVar13 = *(int *)&(pTVar1->AllocatorInstance).Data;
                *(int *)&(pTVar1->AllocatorInstance).Data =
                     *(int *)&(pTVar1->AllocatorInstance).Data + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (*(code *)**(undefined8 **)local_58[0])(local_58[0],1);
                }
              }
              pTVar15 = &this->ProcessingTasks;
              pFVar5 = (pTVar15->AllocatorInstance).Data;
              if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
                  ((FScriptContainerElement *)&local_98 <
                   pFVar5 + (longlong)(this->ProcessingTasks).ArrayMax * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = (this->ProcessingTasks).ArrayNum;
              piVar2 = &(this->ProcessingTasks).ArrayMax;
              if (iVar13 == *piVar2) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar15->AllocatorInstance,piVar2);
              }
              iVar18 = iVar18 + -1;
              goto LAB_14a6b06b4;
            }
            if (local_98->Step == Scheduled) {
              FWN_Task::SetStep(local_98,WaitingForProcessing);
            }
            if (((S_SkippedTasks.AllocatorInstance.Data <= (FScriptContainerElement *)&local_98) &&
                ((FScriptContainerElement *)&local_98 <
                 S_SkippedTasks.AllocatorInstance.Data + (longlong)S_SkippedTasks.ArrayMax * 8)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (S_SkippedTasks.ArrayNum == S_SkippedTasks.ArrayMax) {
              S_SkippedTasks.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&S_SkippedTasks.AllocatorInstance,&S_SkippedTasks.ArrayMax);
            }
            pFVar16 = pFVar16 + 8;
            lVar14 = (longlong)S_SkippedTasks.ArrayNum;
            S_SkippedTasks.ArrayNum = S_SkippedTasks.ArrayNum + 1;
            *(FWN_Task **)(S_SkippedTasks.AllocatorInstance.Data + lVar14 * 8) = local_98;
          }
          else {
            FWN_Task::SetStep(local_98,Processed);
            pTVar15 = &this->ProcessedTasks;
            pFVar5 = (pTVar15->AllocatorInstance).Data;
            if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
                ((FScriptContainerElement *)&local_98 <
                 pFVar5 + (longlong)(this->ProcessedTasks).ArrayMax * 8)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar13 = (this->ProcessedTasks).ArrayNum;
            piVar2 = &(this->ProcessedTasks).ArrayMax;
            if (iVar13 == *piVar2) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar15->AllocatorInstance,piVar2);
            }
LAB_14a6b06b4:
            pFVar16 = pFVar16 + 8;
            pTVar15->ArrayNum = iVar13 + 1;
            *(FWN_Task **)((pTVar15->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_98;
          }
        }
        bVar11 = (longlong)S_TempTasks._8_8_ < 0;
        S_TempTasks._8_8_ = S_TempTasks._8_8_ & 0xffffffff00000000;
        if (bVar11) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&S_TempTasks.AllocatorInstance,0,&S_TempTasks.ArrayMax);
        }
        if (pTVar17 != &S_TempTasks) {
          if (S_TempTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(S_TempTasks.AllocatorInstance.Data);
          }
          S_TempTasks.AllocatorInstance.Data = (pTVar17->AllocatorInstance).Data;
          (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          S_TempTasks.ArrayNum = pTVar17->ArrayNum;
          S_TempTasks.ArrayMax = pTVar17->ArrayMax;
          pTVar17->ArrayNum = 0;
          pTVar17->ArrayMax = 0;
        }
        if (pTVar17 != &S_SkippedTasks) {
          pFVar6 = (pTVar17->AllocatorInstance).Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pTVar17->AllocatorInstance).Data = S_SkippedTasks.AllocatorInstance.Data;
          S_SkippedTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pTVar17->ArrayNum = S_SkippedTasks.ArrayNum;
          pTVar17->ArrayMax = S_SkippedTasks.ArrayMax;
          S_SkippedTasks.ArrayNum = 0;
          S_SkippedTasks.ArrayMax = 0;
        }
        if (S_SkippedTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(S_SkippedTasks.AllocatorInstance.Data);
        }
        S_SkippedTasks.AllocatorInstance.Data = S_TempTasks.AllocatorInstance.Data;
        S_SkippedTasks.ArrayNum = S_TempTasks.ArrayNum;
        S_SkippedTasks.ArrayMax = S_TempTasks.ArrayMax;
        S_TempTasks.ArrayNum = 0;
        S_TempTasks.ArrayMax = 0;
        S_TempTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar18 == 0) {
          S_TempTasks.AllocatorInstance = (ForAnyElementType)0x0;
          S_TempTasks.ArrayNum = 0;
          S_TempTasks.ArrayMax = 0;
          return;
        }
        pTVar17 = pTVar17 + -1;
        local_78 = local_78 + -1;
        if (local_78 < 0) {
          return;
        }
      } while( true );
    }
    local_a0 = *(FWN_Task **)pFVar16;
    if (local_a0->bIsCanceled != false) {
      FWN_Task::SetStep(local_a0,Processed);
      pTVar15 = &this->ProcessedTasks;
LAB_14a6b0143:
      pFVar5 = (pTVar15->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < pFVar5 + (longlong)pTVar15->ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = pTVar15->ArrayNum;
      if (iVar12 == pTVar15->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
      }
      pFVar16 = pFVar16 + 8;
      pTVar15->ArrayNum = iVar12 + 1;
      *(FWN_Task **)((pTVar15->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_a0;
      goto LAB_14a6aff54;
    }
    LOCK();
    bVar11 = local_a0->NumPrerequisiteTasks == 0;
    if (bVar11) {
      local_a0->NumPrerequisiteTasks = 0;
    }
    UNLOCK();
    if (bVar11) {
      FWN_Task::SetStep(local_a0,Processing);
      pFVar10 = local_a0;
      local_88 = local_a0;
      local_res18[0] = local_a0->Step;
      if ((local_a0->GraphTask != (FWN_GraphTaskForStep *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InWNTask->GraphTask == nullptr",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskScheduler.cpp"
                              ,0x56,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      cVar3 = *(char *)((longlong)&(pFVar10->Priority).PriorityBits + 7);
      if (cVar3 == '\x02') {
        local_90 = 0xa00;
      }
      else {
        local_90 = 0;
        if (cVar3 != '\x03') {
          if (cVar3 == '\x04') {
            local_90 = 0x200;
          }
          else {
            local_90 = 0x800;
            if (cVar3 == '\x05') {
              local_90 = 0x400;
            }
          }
        }
      }
      local_90 = local_90 | 0xff;
      local_70.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FWN_GraphTaskForStep>::FConstructor::
      ConstructAndDispatchWhenReady<FWN_Task_*_&,enum_EWN_TaskStep_const_&,enum_ENamedThreads::Type>
                (&local_70,&local_68,(EWN_TaskStep *)&local_88,(Type *)local_res18);
      if (local_68 != (FWN_Task *)0x0) {
        LOCK();
        pTVar1 = &(local_68->UserDatas).Items;
        iVar12 = *(int *)&(pTVar1->AllocatorInstance).Data;
        *(int *)&(pTVar1->AllocatorInstance).Data = *(int *)&(pTVar1->AllocatorInstance).Data + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (*(code *)**(undefined8 **)local_68)(local_68,1);
        }
      }
      pTVar15 = &this->ProcessingTasks;
      goto LAB_14a6b0143;
    }
    if (local_a0->Step == Scheduled) {
      FWN_Task::SetStep(local_a0,WaitingForProcessing);
    }
    if (((S_SkippedTasks.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 <
         S_SkippedTasks.AllocatorInstance.Data + (longlong)S_SkippedTasks.ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = S_SkippedTasks.ArrayNum;
    if (S_SkippedTasks.ArrayNum == S_SkippedTasks.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&S_SkippedTasks.AllocatorInstance,&S_SkippedTasks.ArrayMax);
    }
    pFVar16 = pFVar16 + 8;
    S_SkippedTasks.ArrayNum = iVar12 + 1;
    *(FWN_Task **)(S_SkippedTasks.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_a0;
  } while( true );
}

// ProcessSchedulingStep @ 14a6b0840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::ProcessSchedulingStep(FWN_TaskScheduler *this)

{
  int *piVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  FWN_Task *pFVar6;
  bool bVar7;
  char cVar8;
  EWN_TaskCallbackResult EVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  char *pcVar16;
  longlong lVar17;
  TStaticArray<TArray<FWN_Task_*,TSizedDefaultAllocator<32>_>,7,4294967295> *pTVar18;
  FWN_TaskStack *this_00;
  FIdentityFunctor local_res8 [8];
  uint local_res10;
  FWN_TaskPriority local_res18;
  longlong local_res20;
  FWN_Task *local_a8;
  FWN_Task *local_a0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  DoubleBufferedTaskQueue::Pop(&this->PendingSchedulingQueue,&this->SchedulingTasks);
  uVar5 = S_SkippedTasks._8_8_;
  iVar12 = S_SkippedTasks.ArrayMax;
  S_SkippedTasks._8_8_ = (ulonglong)(uint)S_SkippedTasks.ArrayMax << 0x20;
  iVar10 = 0;
  if (((longlong)uVar5 < 0) && (iVar12 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&S_SkippedTasks.AllocatorInstance,0,&S_SkippedTasks.ArrayMax);
    iVar12 = S_SkippedTasks.ArrayMax;
    iVar10 = S_SkippedTasks.ArrayNum;
  }
  uVar11 = (this->SchedulingTasks).ArrayNum;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (iVar12 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&S_SkippedTasks.AllocatorInstance,iVar10,&S_SkippedTasks.ArrayMax);
  }
  local_res10 = 0;
  if (0 < (this->SchedulingTasks).ArrayNum) {
    local_res20 = 0;
    plVar13 = (longlong *)0x0;
    do {
      lVar17 = local_res20;
      uVar15 = (uint)plVar13;
      uVar11 = 0;
      if ((int)uVar15 < (this->SchedulingTasks).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_a8 = *(FWN_Task **)((this->SchedulingTasks).AllocatorInstance.Data + lVar17);
      if ((local_a8->Step != Scheduling) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("task->Step == EWN_TaskStep::Scheduling",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskScheduler.cpp"
                             ,0x10a,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar6 = local_a8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_a8->Scheduling,
                 &local_80);
      if (((*(int *)&(pFVar6->Scheduling).Callback.field_0x10 == 0) ||
          (plVar13 = *(longlong **)&(pFVar6->Scheduling).Callback.field_0x8,
          plVar13 == (longlong *)0x0)) || (cVar8 = (**(code **)(*plVar13 + 0x38))(), cVar8 == '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
LAB_14a6b0c61:
        bVar2 = *(byte *)((longlong)&(local_a8->Priority).PriorityBits + 7);
        FWN_Task::SetStep(local_a8,Scheduled);
        pTVar14 = (this->ScheduledTasksArray).Elements + bVar2;
LAB_14a6b0c7b:
        pFVar3 = (pTVar14->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar3 + (longlong)pTVar14->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = pTVar14->ArrayNum;
        if (iVar12 == pTVar14->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
        }
        pTVar14->ArrayNum = iVar12 + 1;
        *(FWN_Task **)((pTVar14->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_a8;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
        pFVar6 = local_a8;
        local_res18.PriorityBits = (local_a8->Priority).PriorityBits;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_a8->Scheduling,
                   &local_98);
        if (((*(int *)&(pFVar6->Scheduling).Callback.field_0x10 == 0) ||
            (plVar13 = *(longlong **)&(pFVar6->Scheduling).Callback.field_0x8,
            plVar13 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar13 + 0x38))(), cVar8 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_98);
          EVar9 = Undefined;
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_98);
          if (pFVar6->bInvokeRemainCallbacks == false) {
            EVar9 = Canceled;
          }
          else {
            lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            pcVar16 = (char *)(lVar17 + 0x9d48);
            if (*pcVar16 == '\0') {
              __dyn_tls_on_demand_init();
            }
            this_00 = (FWN_TaskStack *)(lVar17 + 0x9a80);
            FWN_TaskStack::Push(this_00,pFVar6);
            if (*pcVar16 == '\0') {
              __dyn_tls_on_demand_init();
            }
            this_00->bIsActive = (pFVar6->Scheduling).bEnableAutoDependency;
            EVar9 = pFVar6->LastCallbackResult;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->Scheduling
                       ,&local_68);
            plVar13 = (longlong *)0x0;
            if (*(int *)&(pFVar6->Scheduling).Callback.field_0x10 != 0) {
              plVar13 = *(longlong **)&(pFVar6->Scheduling).Callback.field_0x8;
            }
            EVar9 = (**(code **)(*plVar13 + 0x60))
                              (plVar13,&pFVar6->Handle,&pFVar6->UserDatas,EVar9,&local_res18);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_68);
            piVar1 = &(pFVar6->Scheduling).InvocationCount;
            *piVar1 = *piVar1 + 1;
            (pFVar6->Priority).PriorityBits = local_res18.PriorityBits;
            pFVar6->LastCallbackResult = EVar9;
            if (EVar9 == Undefined) {
              local_a0 = pFVar6;
              `FWN_Task::TryInvokeSchedulingCallback'::__l13::<lambda_1>::operator()(&local_a0);
            }
            else if (EVar9 == Canceled) {
              pFVar6->bIsCanceled = true;
            }
            if (*pcVar16 == '\0') {
              __dyn_tls_on_demand_init();
            }
            cVar8 = *pcVar16;
            this_00->bIsActive = true;
            if (cVar8 == '\0') {
              __dyn_tls_on_demand_init();
            }
            FWN_TaskStack::Pop(this_00);
            lVar17 = local_res20;
            uVar15 = local_res10;
          }
        }
        if (EVar9 != Continued) {
          if (EVar9 == Succeeded) goto LAB_14a6b0c61;
          if (EVar9 != Failed) {
            if (EVar9 != Canceled) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskScheduler.cpp"
                                 ,299,L"");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              goto LAB_14a6b0d10;
            }
            local_a8->bIsCanceled = true;
          }
          FWN_Task::SetStep(local_a8,Processed);
          pTVar14 = &this->ProcessedTasks;
          goto LAB_14a6b0c7b;
        }
        if (((S_SkippedTasks.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 <
             S_SkippedTasks.AllocatorInstance.Data + (longlong)S_SkippedTasks.ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = S_SkippedTasks.ArrayNum;
        if (S_SkippedTasks.ArrayNum == S_SkippedTasks.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&S_SkippedTasks.AllocatorInstance,&S_SkippedTasks.ArrayMax);
        }
        S_SkippedTasks.ArrayNum = iVar12 + 1;
        *(FWN_Task **)(S_SkippedTasks.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_a8;
      }
LAB_14a6b0d10:
      local_res10 = uVar15 + 1;
      plVar13 = (longlong *)(ulonglong)local_res10;
      local_res20 = lVar17 + 8;
    } while ((int)local_res10 < (this->SchedulingTasks).ArrayNum);
  }
  pTVar14 = &this->SchedulingTasks;
  bVar7 = (longlong)S_TempTasks._8_8_ < 0;
  S_TempTasks._8_8_ = S_TempTasks._8_8_ & 0xffffffff00000000;
  if (bVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&S_TempTasks.AllocatorInstance,0,&S_TempTasks.ArrayMax);
  }
  if (pTVar14 != &S_TempTasks) {
    if (S_TempTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(S_TempTasks.AllocatorInstance.Data);
    }
    S_TempTasks.AllocatorInstance.Data = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    S_TempTasks.ArrayNum = (this->SchedulingTasks).ArrayNum;
    S_TempTasks.ArrayMax = (this->SchedulingTasks).ArrayMax;
    (this->SchedulingTasks).ArrayNum = 0;
    (this->SchedulingTasks).ArrayMax = 0;
  }
  pTVar14 = &this->SchedulingTasks;
  if (pTVar14 != &S_SkippedTasks) {
    pFVar3 = (pTVar14->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar14->AllocatorInstance).Data = S_SkippedTasks.AllocatorInstance.Data;
    S_SkippedTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SchedulingTasks).ArrayNum = S_SkippedTasks.ArrayNum;
    (this->SchedulingTasks).ArrayMax = S_SkippedTasks.ArrayMax;
    S_SkippedTasks.ArrayNum = 0;
    S_SkippedTasks.ArrayMax = 0;
  }
  if (S_SkippedTasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(S_SkippedTasks.AllocatorInstance.Data);
  }
  pTVar18 = &this->ScheduledTasksArray;
  lVar17 = 7;
  S_SkippedTasks.AllocatorInstance = S_TempTasks.AllocatorInstance;
  S_SkippedTasks.ArrayNum = S_TempTasks.ArrayNum;
  S_SkippedTasks.ArrayMax = S_TempTasks.ArrayMax;
  S_TempTasks.ArrayNum = 0;
  S_TempTasks.ArrayMax = 0;
  S_TempTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  do {
    AlgoImpl::
    IntroSortInternal<FWN_Task_*,int,FIdentityFunctor,TDereferenceWrapper<FWN_Task_*,_WN_SortTasksByPriorityDescending_::__l2::<lambda_1>_>_>
              ((FWN_Task **)pTVar18->Elements[0].AllocatorInstance.Data,
               pTVar18->Elements[0].ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
    pTVar18 = (TStaticArray<TArray<FWN_Task_*,TSizedDefaultAllocator<32>_>,7,4294967295> *)
              (pTVar18->Elements + 1);
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  return;
}

// Push @ 14a6b0eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWN_TaskScheduler::DoubleBufferedTaskQueue::Push(DoubleBufferedTaskQueue *this,FWN_Task *param_1)

{
  uint uVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  if (this != (DoubleBufferedTaskQueue *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    uVar1 = this->FrontQueueIndex;
    pTVar3 = ::operator_new(0x10);
    if (pTVar3 != (TNode *)0x0) {
      pTVar3->NextNode = (TNode *)0x0;
      pTVar3->Item = param_1;
      pTVar2 = (this->TaskQueues).Elements[uVar1].Head;
      (this->TaskQueues).Elements[uVar1].Head = pTVar3;
      pTVar2->NextNode = pTVar3;
    }
    this->NumFrontTasks = this->NumFrontTasks + 1;
                    /* WARNING: Could not recover jumptable at 0x00014a6b0f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Run @ 14a6b1b70

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FWN_TaskScheduler::Run(FWN_TaskScheduler *this)

{
  bool bVar1;
  
  if (this->bShouldStop == false) {
    do {
      ProcessSchedulingStep(this);
      ProcessProcessingStep(this);
      ProcessProcessingCompletedStep(this);
      ProcessProcessedStep(this);
      ProcessCompletedStep(this);
      ProcessGCedStep(this);
      LOCK();
      bVar1 = FWN_Task::S_Statistics.NumTasks == 0;
      if (bVar1) {
        FWN_Task::S_Statistics.NumTasks = 0;
      }
      UNLOCK();
      (**(code **)(this->Event->_padding_ + 0x20))(this->Event,bVar1,0);
    } while (this->bShouldStop == false);
    this->bIsStopped = true;
    return 0;
  }
  this->bIsStopped = true;
  return 0;
}

// ScheduleTasks @ 14a6b1c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::ScheduleTasks(FWN_TaskScheduler *this)

{
  FEvent *pFVar1;
  bool bVar2;
  
  ProcessSchedulingStep(this);
  ProcessProcessingStep(this);
  ProcessProcessingCompletedStep(this);
  ProcessProcessedStep(this);
  ProcessCompletedStep(this);
  ProcessGCedStep(this);
  LOCK();
  bVar2 = FWN_Task::S_Statistics.NumTasks == 0;
  if (bVar2) {
    FWN_Task::S_Statistics.NumTasks = 0;
  }
  UNLOCK();
  pFVar1 = this->Event;
  if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014a6b1c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6b1c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0,0);
  return;
}

// StartThread @ 14a6b21f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::StartThread(FWN_TaskScheduler *this)

{
  code *pcVar1;
  bool bVar2;
  FRunnableThread *pFVar3;
  
  pFVar3 = FRunnableThread::Create
                     ((FRunnable *)this,L"WNTaskScheduler",0x80000,TPri_Normal,0xffffffffffffffff,
                      None);
  this->Thread = pFVar3;
  if (pFVar3 == (FRunnableThread *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskScheduler.cpp"
                       ,0xc2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Stop @ 14a6b2280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::Stop(FWN_TaskScheduler *this)

{
  return;
}

// StopThread @ 14a6b2290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::StopThread(FWN_TaskScheduler *this)

{
  char cVar1;
  
  cVar1 = this->bIsStopped;
  this->bShouldStop = true;
  while (cVar1 == '\0') {
    (**(code **)(this->Event->_padding_ + 0x10))();
    cVar1 = this->bIsStopped;
  }
  return;
}

// Tick @ 14a6b22d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::Tick(FWN_TaskScheduler *this)

{
  ScheduleTasks((FWN_TaskScheduler *)&this[-1].CompletedTasks.ArrayNum);
  return;
}

// WakeThread @ 14a6b2ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskScheduler::WakeThread(FWN_TaskScheduler *this)

{
  char cVar1;
  
  cVar1 = this->bIsStopped;
  while (cVar1 == '\0') {
    (**(code **)(this->Event->_padding_ + 0x10))();
    cVar1 = this->bIsStopped;
  }
  return;
}

