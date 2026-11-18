// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 38

// FWN_Task @ 14a6ac0a0

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_Task * __thiscall FWN_Task::FWN_Task(FWN_Task *this)

{
  this->bIsCanceled = false;
  this->bInvokeRemainCallbacks = true;
  this->bIsWaiting = false;
  this->bIsWaitingEventSignaled = false;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->UserDatas).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDatas).Buffer.ArrayNum = 0;
  (this->UserDatas).Buffer.ArrayMax = 0;
  (this->UserDatas).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDatas).Items.ArrayNum = 0;
  (this->UserDatas).Items.ArrayMax = 0;
  this->WaitingEvent = (FEvent *)0x0;
  this->CompletionThreadType = UnusedAnchor;
  this->CreationCycles = 0xffffffff;
  this->Step = Undefined;
  (this->Priority).PriorityBits = 0x380000000000000;
  this->LastCallbackResult = Undefined;
  this->Result = Undefined;
  *(undefined8 *)&(this->Scheduling).Callback = 0;
  *(undefined8 *)&(this->Scheduling).Callback.field_0x8 = 0;
  *(undefined4 *)&(this->Scheduling).Callback.field_0x10 = 0;
  (this->Scheduling).InvocationCount = 0;
  (this->Scheduling).bEnableAutoDependency = true;
  *(undefined8 *)&(this->Processing).Callback = 0;
  *(undefined8 *)&(this->Processing).Callback.field_0x8 = 0;
  *(undefined4 *)&(this->Processing).Callback.field_0x10 = 0;
  (this->Processing).InvocationCount = 0;
  (this->Processing).bEnableAutoDependency = true;
  *(undefined8 *)&(this->ProcessingCompleted).Callback = 0;
  *(undefined8 *)&(this->ProcessingCompleted).Callback.field_0x8 = 0;
  *(undefined4 *)&(this->ProcessingCompleted).Callback.field_0x10 = 0;
  (this->ProcessingCompleted).InvocationCount = 0;
  (this->ProcessingCompleted).bEnableAutoDependency = true;
  *(undefined8 *)&(this->Processed).Callback = 0;
  *(undefined8 *)&(this->Processed).Callback.field_0x8 = 0;
  *(undefined4 *)&(this->Processed).Callback.field_0x10 = 0;
  (this->Processed).InvocationCount = 0;
  (this->Processed).bEnableAutoDependency = true;
  *(undefined8 *)&(this->Completed).Callback = 0;
  *(undefined8 *)&(this->Completed).Callback.field_0x8 = 0;
  *(undefined4 *)&(this->Completed).Callback.field_0x10 = 0;
  (this->Completed).InvocationCount = 0;
  (this->Completed).bEnableAutoDependency = true;
  this->NumPrerequisiteTasks = 0;
  this->NumAccessors = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SubsequentTasksCS,4000);
  this->SubsequentTasks = (TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *)0x0;
  (this->Handle).Identifier = 0xffffffffffffffff;
  this->GraphTask = (FWN_GraphTaskForStep *)0x0;
  LOCK();
  S_Statistics.TaskCounts.Elements[0xd] = S_Statistics.TaskCounts.Elements[0xd] - 1;
  UNLOCK();
  return this;
}

// ~FWN_Task @ 14a6ac7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_Task::~FWN_Task(FWN_Task *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SubsequentTasksCS);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Completed);
  pvVar1 = *(void **)&(this->Completed).Callback.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Completed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Processed);
  pvVar1 = *(void **)&(this->Processed).Callback.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Processed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ProcessingCompleted);
  pvVar1 = *(void **)&(this->ProcessingCompleted).Callback.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ProcessingCompleted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Processing);
  pvVar1 = *(void **)&(this->Processing).Callback.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Processing);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Scheduling);
  pvVar1 = *(void **)&(this->Scheduling).Callback.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Scheduling);
  FWN_Variant::Reset(&this->UserDatas);
  pFVar2 = (this->UserDatas).Items.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UserDatas).Buffer.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddSubsequentTask @ 14a6acdc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_Task::AddSubsequentTask(FWN_Task *this,FWN_Task *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  FWN_Task *local_res10;
  
  if (this->Step < Completed) {
    LOCK();
    param_1->NumPrerequisiteTasks = param_1->NumPrerequisiteTasks + 1;
    UNLOCK();
    lpCriticalSection = &this->SubsequentTasksCS;
    local_res10 = param_1;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = this->SubsequentTasks;
    if (pTVar5 == (TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&S_SubsequentTaskArrayPool);
      if (S_SubsequentTaskArrayPool.FreedTasksArray.ArrayNum < 1) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&S_SubsequentTaskArrayPool);
        pTVar5 = ::operator_new(0x10);
        if (pTVar5 != (TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *)0x0) {
          (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar5->ArrayNum = 0;
          pTVar5->ArrayMax = 0;
        }
      }
      else {
        uVar6 = S_SubsequentTaskArrayPool.FreedTasksArray.ArrayNum - 1;
        pTVar5 = *(TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> **)
                  (S_SubsequentTaskArrayPool.FreedTasksArray.AllocatorInstance.Data +
                  (longlong)(int)uVar6 * 8);
        if (~uVar6 + S_SubsequentTaskArrayPool.FreedTasksArray.ArrayNum != 0) {
          memmove(S_SubsequentTaskArrayPool.FreedTasksArray.AllocatorInstance.Data +
                  (longlong)(int)uVar6 * 8,
                  S_SubsequentTaskArrayPool.FreedTasksArray.AllocatorInstance.Data +
                  (longlong)(int)uVar6 * 8 + 8,
                  (longlong)(int)(~uVar6 + S_SubsequentTaskArrayPool.FreedTasksArray.ArrayNum) << 3)
          ;
        }
        S_SubsequentTaskArrayPool.FreedTasksArray.ArrayNum =
             S_SubsequentTaskArrayPool.FreedTasksArray.ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&S_SubsequentTaskArrayPool.FreedTasksArray.AllocatorInstance,
                   S_SubsequentTaskArrayPool.FreedTasksArray.ArrayNum,
                   &S_SubsequentTaskArrayPool.FreedTasksArray.ArrayMax);
        LeaveCriticalSection((LPCRITICAL_SECTION)&S_SubsequentTaskArrayPool);
      }
      this->SubsequentTasks = pTVar5;
    }
    pFVar1 = (pTVar5->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = pTVar5->ArrayNum;
    if (iVar4 == pTVar5->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
    }
    pTVar5->ArrayNum = iVar4 + 1;
    *(FWN_Task **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_res10;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// HasAccessor @ 14a6ae240

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_Task::HasAccessor(FWN_Task *this)

{
  bool bVar1;
  
  LOCK();
  bVar1 = this->NumPrerequisiteTasks == 0;
  if (bVar1) {
    this->NumPrerequisiteTasks = 0;
  }
  UNLOCK();
  return !bVar1;
}

// HasPrerequisiteTasks @ 14a6ae260

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_Task::HasPrerequisiteTasks(FWN_Task *this)

{
  bool bVar1;
  
  LOCK();
  bVar1 = this->NumPrerequisiteTasks == 0;
  if (bVar1) {
    this->NumPrerequisiteTasks = 0;
  }
  UNLOCK();
  return !bVar1;
}

// Initialize @ 14a6ae290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_Task::Initialize(FWN_Task *this,FWN_TaskCreateInfo *param_1)

{
  int iVar1;
  longlong lVar2;
  FWN_Task *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  LARGE_INTEGER local_res8;
  
  if (this->Step != Undefined) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Step == EWN_TaskStep::Undefined",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTask.cpp"
                       ,0x1df,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->TaskName == (FName)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCreateInfo.TaskName != NAME_None",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTask.cpp"
                       ,0x1e1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  S_Statistics.NumTasks = S_Statistics.NumTasks + 1;
  UNLOCK();
  this->Name = param_1->TaskName;
  this->CompletionThreadType = param_1->CompletionThreadType;
  FWN_Variant::operator=(&this->UserDatas,&param_1->UserDatas);
  QueryPerformanceCounter(&local_res8);
  this->CreationCycles = local_res8.s.LowPart;
  this->Step = Undefined;
  (this->Priority).PriorityBits = (param_1->InitialPriority).PriorityBits;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Scheduling,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Scheduling);
  (this->Scheduling).InvocationCount = (param_1->Scheduling).InvocationCount;
  (this->Scheduling).bEnableAutoDependency = (param_1->Scheduling).bEnableAutoDependency;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Processing,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Processing);
  (this->Processing).InvocationCount = (param_1->Processing).InvocationCount;
  (this->Processing).bEnableAutoDependency = (param_1->Processing).bEnableAutoDependency;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ProcessingCompleted,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->ProcessingCompleted);
  (this->ProcessingCompleted).InvocationCount = (param_1->ProcessingCompleted).InvocationCount;
  (this->ProcessingCompleted).bEnableAutoDependency =
       (param_1->ProcessingCompleted).bEnableAutoDependency;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Processed,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Processed);
  (this->Processed).InvocationCount = (param_1->Processed).InvocationCount;
  (this->Processed).bEnableAutoDependency = (param_1->Processed).bEnableAutoDependency;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Completed,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Completed);
  (this->Completed).InvocationCount = (param_1->Completed).InvocationCount;
  (this->Completed).bEnableAutoDependency = false;
  FWN_TaskHandle::ReallocateIdentifier(&this->Handle);
  SetStep(this,Initialized);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(char *)(lVar2 + 0x9a80) != '\0') {
    iVar1 = *(int *)(lVar2 + 0x9a90);
    if (0 < iVar1) {
      uVar5 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar5 = ~(iVar1 - 1U) >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_00 = *(FWN_Task **)
                 (*(longlong *)(lVar2 + 0x9a88) + -8 + (longlong)*(int *)(lVar2 + 0x9a90) * 8);
      if (this_00 != (FWN_Task *)0x0) {
        AddSubsequentTask(this_00,this);
      }
    }
  }
  return;
}

// IsComplete @ 14a6ae710

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_Task::IsComplete(FWN_Task *this)

{
  return Completed < this->Step;
}

// MakeResult @ 14a6ae800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_Task::MakeResult(FWN_Task *this)

{
  FWN_Task *local_res8 [4];
  
  if (this->bIsCanceled != false) {
    this->Result = Canceled;
    return;
  }
  if (this->LastCallbackResult != Succeeded) {
    if (this->LastCallbackResult == Failed) {
      this->Result = Failed;
      return;
    }
    local_res8[0] = this;
    `FWN_Task::MakeResult'::__l9::<lambda_1>::operator()(local_res8);
  }
  this->Result = Succeeded;
  return;
}

// RemoveSubsequentTask @ 14a6b13c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_Task::RemoveSubsequentTask(FWN_Task *this,FWN_Task *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FWN_Task *pFVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FWN_Task *local_res10;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> **local_res20;
  
  if (WaitingForCompleted < this->Step) {
    return;
  }
  lpCriticalSection = &this->SubsequentTasksCS;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res20 = &this->SubsequentTasks;
  pTVar2 = *local_res20;
  local_res18 = pTVar2;
  if (pTVar2 == (TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14a6b15ad;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar3 + (longlong)pTVar2->ArrayMax * 8)) &&
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
  iVar1 = pTVar2->ArrayNum;
  if (iVar1 == 0) {
LAB_14a6b1581:
    LOCK();
    local_res10->NumPrerequisiteTasks = local_res10->NumPrerequisiteTasks + -1;
    UNLOCK();
  }
  else {
    iVar10 = 0;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    bVar5 = *(FWN_Task **)pFVar3 != local_res10;
    lVar9 = 0;
    pFVar6 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar9 = lVar9 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar9) break;
      } while (bVar5 == (*(FWN_Task **)(pFVar3 + lVar9 * 8) != pFVar6));
      if (bVar5 != false) {
        if (iVar10 != iVar7) {
          memmove(pFVar3 + (longlong)iVar10 * 8,pFVar3 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pFVar6 = local_res10;
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar7 = iVar8;
    } while (lVar9 < iVar1);
    local_res18->ArrayNum = iVar10;
    if (iVar1 - iVar10 != -1) goto LAB_14a6b1581;
  }
  if ((*local_res20)->ArrayNum == 0) {
    FWN_SubsequentTaskArrayPool::Free(&S_SubsequentTaskArrayPool,local_res20);
  }
LAB_14a6b15ad:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Reset @ 14a6b1760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_Task::Reset(FWN_Task *this)

{
  code *pcVar1;
  bool bVar2;
  
  LOCK();
  S_Statistics.NumTasks = S_Statistics.NumTasks + -1;
  UNLOCK();
  LOCK();
  bVar2 = this->NumAccessors == 0;
  if (bVar2) {
    this->NumAccessors = 0;
  }
  UNLOCK();
  while (!bVar2) {
    LOCK();
    bVar2 = this->NumAccessors == 0;
    if (bVar2) {
      this->NumAccessors = 0;
    }
    UNLOCK();
  }
  this->bIsCanceled = false;
  this->bInvokeRemainCallbacks = true;
  this->bIsWaiting = false;
  this->bIsWaitingEventSignaled = false;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->CompletionThreadType = UnusedAnchor;
  this->CreationCycles = 0xffffffff;
  if ((this->WaitingEvent != (FEvent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaitingEvent == nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTask.cpp"
                         ,0x1c9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->WaitingEvent = (FEvent *)0x0;
  FWN_Variant::Reset(&this->UserDatas);
  if ((this->Step != GCed) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Step == EWN_TaskStep::GCed",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTask.cpp"
                         ,0x1cc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->LastCallbackResult = Undefined;
  this->Result = Undefined;
  (this->Priority).PriorityBits = 0x380000000000000;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Scheduling);
  (this->Scheduling).InvocationCount = 0;
  (this->Scheduling).bEnableAutoDependency = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Processing);
  (this->Processing).InvocationCount = 0;
  (this->Processing).bEnableAutoDependency = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ProcessingCompleted);
  (this->ProcessingCompleted).InvocationCount = 0;
  (this->ProcessingCompleted).bEnableAutoDependency = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Processed);
  (this->Processed).InvocationCount = 0;
  (this->Processed).bEnableAutoDependency = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Completed);
  (this->Completed).InvocationCount = 0;
  (this->Completed).bEnableAutoDependency = true;
  if ((this->NumPrerequisiteTasks != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumPrerequisiteTasks == 0",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTask.cpp"
                         ,0x1d5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->SubsequentTasks != (TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubsequentTasks == nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTask.cpp"
                         ,0x1d6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->Handle).Identifier = 0xffffffffffffffff;
  if ((this->GraphTask != (FWN_GraphTaskForStep *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphTask == nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTask.cpp"
                         ,0x1d8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SetStep(this,Undefined);
  return;
}

// ResetSubsequentTasks @ 14a6b1a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_Task::ResetSubsequentTasks(FWN_Task *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> **ppTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->SubsequentTasksCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ppTVar1 = &this->SubsequentTasks;
    pTVar4 = *ppTVar1;
    if (pTVar4 != (TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      iVar3 = pTVar4->ArrayNum;
      pFVar2 = pFVar5 + (longlong)iVar3 * 8;
      while( true ) {
        if (pTVar4->ArrayNum != iVar3) {
          `TCheckedPointerIterator<FWN_Task_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar5 == pFVar2) break;
        LOCK();
        *(int *)(*(longlong *)pFVar5 + 0xf8) = *(int *)(*(longlong *)pFVar5 + 0xf8) + -1;
        UNLOCK();
        pFVar5 = pFVar5 + 8;
      }
      pTVar4 = *ppTVar1;
      pTVar4->ArrayNum = 0;
      if (pTVar4->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
      }
      FWN_SubsequentTaskArrayPool::Free(&S_SubsequentTaskArrayPool,ppTVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014a6b1b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetStep @ 14a6b1c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_Task::SetStep(FWN_Task *this,EWN_TaskStep param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  FString local_198;
  FString local_188;
  FWN_Task *local_178;
  FString *local_170;
  FString *local_168;
  FWN_Task *local_160;
  FString *local_158;
  FString *local_150;
  FWN_Task *local_148;
  FString *local_140;
  FString *local_138;
  FWN_Task *local_130;
  FString *local_128;
  FString *local_120;
  FWN_Task *local_118;
  FString *local_110;
  FString *local_108;
  FWN_Task *local_100;
  FString *local_f8;
  FString *local_f0;
  FWN_Task *local_e8;
  FString *local_e0;
  FString *local_d8;
  FWN_Task *local_d0;
  FString *local_c8;
  FString *local_c0;
  FWN_Task *local_b8;
  FString *local_b0;
  FString *local_a8;
  FWN_Task *local_a0;
  FString *local_98;
  FString *local_90;
  FWN_Task *local_88;
  FString *local_80;
  FString *local_78;
  FWN_Task *local_70;
  FString *local_68;
  FString *local_60;
  FWN_Task *local_58;
  FString *local_50;
  FString *local_48;
  FWN_Task *local_40;
  FString *local_38;
  FString *local_30;
  FWN_Task *local_28;
  FString *local_20;
  FString *local_18;
  
  uVar4 = (ulonglong)param_1;
  if ((param_1 == this->Step) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStep != Step",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTask.cpp"
                         ,0x1fe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FName::ToString(S_TaskStepNames + this->Step,&local_188);
  ::FName::ToString(S_TaskStepNames + uVar4,&local_198);
  switch(uVar4) {
  case 0:
    if (this->Step != Undefined) {
      local_158 = &local_188;
      local_150 = &local_198;
      local_160 = this;
      `FWN_Task::SetStep'::__l11::<lambda_2>::operator()(&local_160);
    }
    break;
  case 1:
    if (this->Step != Initialized) {
      local_140 = &local_188;
      local_138 = &local_198;
      local_148 = this;
      `FWN_Task::SetStep'::__l11::<lambda_3>::operator()(&local_148);
    }
    break;
  case 2:
    if (this->Step != Ready) {
      local_128 = &local_188;
      local_120 = &local_198;
      local_130 = this;
      `FWN_Task::SetStep'::__l11::<lambda_4>::operator()(&local_130);
    }
    break;
  case 3:
    if ((this->Step != Ready) && (this->Step != Scheduling)) {
      local_110 = &local_188;
      local_108 = &local_198;
      local_118 = this;
      `FWN_Task::SetStep'::__l11::<lambda_5>::operator()(&local_118);
    }
    break;
  case 4:
    if (this->Step != Scheduled) {
      local_f8 = &local_188;
      local_f0 = &local_198;
      local_100 = this;
      `FWN_Task::SetStep'::__l11::<lambda_6>::operator()(&local_100);
    }
    break;
  case 5:
    if ((this->Step != Scheduled) && (this->Step != WaitingForProcessing)) {
      local_e0 = &local_188;
      local_d8 = &local_198;
      local_e8 = this;
      `FWN_Task::SetStep'::__l11::<lambda_7>::operator()(&local_e8);
    }
    break;
  case 6:
    if (this->Step != Processing) {
      local_c8 = &local_188;
      local_c0 = &local_198;
      local_d0 = this;
      `FWN_Task::SetStep'::__l11::<lambda_8>::operator()(&local_d0);
    }
    break;
  case 7:
    if ((this->Step != Processing) && (this->Step != WaitingForProcessingCompleted)) {
      local_b0 = &local_188;
      local_a8 = &local_198;
      local_b8 = this;
      `FWN_Task::SetStep'::__l11::<lambda_9>::operator()(&local_b8);
    }
    break;
  case 8:
    if (this->Step != ProcessingCompleted) {
      local_98 = &local_188;
      local_90 = &local_198;
      local_a0 = this;
      `FWN_Task::SetStep'::__l11::<lambda_10>::operator()(&local_a0);
    }
    break;
  case 9:
    if ((this->Step == Initialized) || (WaitingForProcessed < this->Step)) {
      local_80 = &local_188;
      local_78 = &local_198;
      local_88 = this;
      `FWN_Task::SetStep'::__l11::<lambda_11>::operator()(&local_88);
    }
    break;
  case 10:
    if (this->Step != Processed) {
      local_68 = &local_188;
      local_60 = &local_198;
      local_70 = this;
      `FWN_Task::SetStep'::__l11::<lambda_12>::operator()(&local_70);
    }
    break;
  case 0xb:
    if ((this->Step != Processed) && (this->Step != WaitingForCompleted)) {
      local_50 = &local_188;
      local_48 = &local_198;
      local_58 = this;
      `FWN_Task::SetStep'::__l11::<lambda_13>::operator()(&local_58);
    }
    break;
  case 0xc:
    if ((this->Step != Initialized) && (this->Step != Completed)) {
      local_38 = &local_188;
      local_30 = &local_198;
      local_40 = this;
      `FWN_Task::SetStep'::__l11::<lambda_14>::operator()(&local_40);
    }
    break;
  case 0xd:
    if (this->Step != GCed) {
      local_170 = &local_188;
      local_168 = &local_198;
      local_178 = this;
      `FWN_Task::SetStep'::__l11::<lambda_1>::operator()(&local_178);
    }
    break;
  default:
    local_20 = &local_188;
    local_18 = &local_198;
    local_28 = this;
    `FWN_Task::SetStep'::__l11::<lambda_15>::operator()(&local_28);
  }
  this->Step = param_1;
  LOCK();
  puVar1 = S_Statistics.TaskCounts.Elements + uVar4;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  LOCK();
  puVar1 = S_Statistics.TaskCounts.Elements + uVar4;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return;
}

// TryInvokeCallback @ 14a6b22e0

/* WARNING: Enum "Type": Some values do not have unique names */

EWN_TaskCallbackResult __thiscall FWN_Task::TryInvokeCallback(FWN_Task *this,EWN_TaskStep param_1)

{
  bool *this_00;
  bool bVar1;
  char cVar2;
  EWN_TaskCallbackResult EVar3;
  longlong lVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TVar5;
  FWN_TaskStack *this_01;
  char *pcVar6;
  FMRSWRecursiveAccessDetector local_res10;
  FWN_Task *local_res18;
  FWN_Task *local_48;
  FMRSWRecursiveAccessDetector *local_40;
  
  bVar1 = true;
  local_res10.State._0_1_ = param_1;
  if (param_1 == Processing) {
    lVar4 = 0x78;
  }
  else if (param_1 == ProcessingCompleted) {
    bVar1 = false;
    lVar4 = 0x98;
  }
  else if (param_1 == Processed) {
    bVar1 = false;
    lVar4 = 0xb8;
  }
  else {
    if (param_1 != Completed) {
      local_res18 = this;
      `FWN_Task::TryInvokeCallback'::__l4::<lambda_1>::operator()(&local_res18);
      return Undefined;
    }
    lVar4 = 0xd8;
  }
  this_00 = &this->bIsCanceled + lVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)&local_48);
  if (((*(uint *)(this_00 + 0x10) == 0) ||
      (((atomic<unsigned___int64>)*(FMRSWRecursiveAccessDetector *)(this_00 + 8)).State ==
       (atomic<unsigned___int64>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)*(FMRSWRecursiveAccessDetector *)(this_00 + 8) + 0x38))(),
     cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_48);
    if (this->Step == Processing) {
      local_res18 = this;
      `FWN_Task::TryInvokeCallback'::__l7::<lambda_2>::operator()(&local_res18);
    }
    if (local_res10.State._0_1_ == Completed) {
      MakeResult(this);
      ResetSubsequentTasks(this);
    }
    return Undefined;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if ((!bVar1) && (0 < *(int *)(this_00 + 0x18))) {
    local_res18 = this;
    `FWN_Task::TryInvokeCallback'::__l13::<lambda_3>::operator()(&local_res18);
    return Undefined;
  }
  if (this->bInvokeRemainCallbacks == false) {
    return Canceled;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar6 = (char *)(lVar4 + 0x9d48);
  if (*pcVar6 == '\0') {
    __dyn_tls_on_demand_init();
  }
  this_01 = (FWN_TaskStack *)(lVar4 + 0x9a80);
  FWN_TaskStack::Push(this_01,this);
  if (*pcVar6 == '\0') {
    __dyn_tls_on_demand_init();
  }
  this_01->bIsActive = this_00[0x1c];
  EVar3 = this->LastCallbackResult;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)&local_48);
  if (*(uint *)(this_00 + 0x10) == 0) {
    TVar5.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  }
  else {
    TVar5.AccessDetector.State = *(FMRSWRecursiveAccessDetector *)(this_00 + 8);
  }
  EVar3 = (**(code **)(*(longlong *)TVar5.AccessDetector.State + 0x60))
                    (TVar5.AccessDetector.State,&this->Handle,&this->UserDatas,EVar3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x18) + 1;
  this->LastCallbackResult = EVar3;
  if (EVar3 == Undefined) {
    local_40 = &local_res10;
    local_48 = this;
    `FWN_Task::TryInvokeCallback'::__l21::<lambda_4>::operator()(&local_48);
  }
  else if (EVar3 == Continued) {
    if ((local_res10.State._0_1_ != Scheduling) && (local_res10.State._0_1_ != Processing)) {
      local_40 = &local_res10;
      local_48 = this;
      `FWN_Task::TryInvokeCallback'::__l28::<lambda_5>::operator()(&local_48);
      EVar3 = Succeeded;
    }
  }
  else if (EVar3 == Canceled) {
    this->bIsCanceled = true;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined1 *)(lVar4 + 0x9a80) = 1;
  if (*(char *)(lVar4 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FWN_TaskStack::Pop((FWN_TaskStack *)(lVar4 + 0x9a80));
  if (local_res10.State._0_1_ != Completed) {
    return EVar3;
  }
  if (this->bIsCanceled != false) {
    this->Result = Canceled;
    ResetSubsequentTasks(this);
    return EVar3;
  }
  if (this->LastCallbackResult != Succeeded) {
    if (this->LastCallbackResult == Failed) {
      this->Result = Failed;
      goto LAB_14a6b2545;
    }
    local_res18 = this;
    `FWN_Task::MakeResult'::__l9::<lambda_1>::operator()(&local_res18);
  }
  this->Result = Succeeded;
LAB_14a6b2545:
  ResetSubsequentTasks(this);
  return EVar3;
}

// TryInvokeSchedulingCallback @ 14a6b25c0

/* WARNING: Enum "Type": Some values do not have unique names */

EWN_TaskCallbackResult __thiscall FWN_Task::TryInvokeSchedulingCallback(FWN_Task *this)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  EWN_TaskCallbackResult EVar4;
  longlong *plVar5;
  FWN_TaskStack *this_00;
  FWN_TaskPriority local_res8;
  FWN_Task *local_res10;
  FReadAccessScope local_48;
  
  local_res8.PriorityBits = (this->Priority).PriorityBits;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Scheduling,&local_48);
  if ((*(int *)&(this->Scheduling).Callback.field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->Scheduling).Callback.field_0x8, plVar5 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar5 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (this->bInvokeRemainCallbacks != false) {
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar2 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        this_00 = (FWN_TaskStack *)(lVar2 + 0x9a80);
        FWN_TaskStack::Push(this_00,this);
        if (*(char *)(lVar2 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        this_00->bIsActive = (this->Scheduling).bEnableAutoDependency;
        EVar4 = this->LastCallbackResult;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Scheduling,
                   &local_48);
        if (*(int *)&(this->Scheduling).Callback.field_0x10 == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)&(this->Scheduling).Callback.field_0x8;
        }
        EVar4 = (**(code **)(*plVar5 + 0x60))
                          (plVar5,&this->Handle,&this->UserDatas,EVar4,&local_res8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        piVar1 = &(this->Scheduling).InvocationCount;
        *piVar1 = *piVar1 + 1;
        (this->Priority).PriorityBits = local_res8.PriorityBits;
        this->LastCallbackResult = EVar4;
        if (EVar4 == Undefined) {
          local_res10 = this;
          `FWN_Task::TryInvokeSchedulingCallback'::__l13::<lambda_1>::operator()(&local_res10);
        }
        else if (EVar4 == Canceled) {
          this->bIsCanceled = true;
        }
        if (*(char *)(lVar2 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        cVar3 = *(char *)(lVar2 + 0x9d48);
        this_00->bIsActive = true;
        if (cVar3 == '\0') {
          __dyn_tls_on_demand_init();
        }
        FWN_TaskStack::Pop(this_00);
        return EVar4;
      }
      return Canceled;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  return Undefined;
}

// Wait @ 14a6b27f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_Task::Wait(FWN_Task *this)

{
  FEvent **ppFVar1;
  FEvent *pFVar2;
  code *pcVar3;
  bool bVar4;
  FEvent *pFVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&S_TaskEventPool);
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  LeaveCriticalSection((LPCRITICAL_SECTION)&S_TaskEventPool);
  ppFVar1 = &this->WaitingEvent;
  if (((ulonglong)ppFVar1 & 7) != 0) {
    FWindowsPlatformAtomics::HandleAtomicsFailure
              (L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes")
    ;
  }
  LOCK();
  if (*ppFVar1 == (FEvent *)0x0) {
    *ppFVar1 = pFVar5;
  }
  UNLOCK();
  pFVar5 = *ppFVar1;
  this->bIsWaiting = true;
  (**(code **)(pFVar5->_padding_ + 0x20))(pFVar5,0xffffffff,0);
  this->bIsWaiting = false;
  do {
    if (((ulonglong)ppFVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (
                L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    pFVar2 = *ppFVar1;
    if (pFVar2 == (FEvent *)0x0) {
      *ppFVar1 = (FEvent *)0x0;
    }
    UNLOCK();
  } while (pFVar2 == (FEvent *)0x0);
  if ((*ppFVar1 != pFVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaitingEvent == eventBackup",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTask.cpp"
                         ,0x34f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pFVar5 != (FEvent *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&S_TaskEventPool);
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar5);
    LeaveCriticalSection((LPCRITICAL_SECTION)&S_TaskEventPool);
  }
  return;
}

// Wait @ 14a6b2900

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_Task::Wait(FWN_Task *this,double param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  FEvent *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&S_TaskEventPool);
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  LeaveCriticalSection((LPCRITICAL_SECTION)&S_TaskEventPool);
  uVar8 = (int)this + 0x18U & 7;
  if (uVar8 != 0) {
    FWindowsPlatformAtomics::HandleAtomicsFailure
              (L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes")
    ;
  }
  LOCK();
  if (this->WaitingEvent == (FEvent *)0x0) {
    this->WaitingEvent = pFVar5;
  }
  UNLOCK();
  dVar2 = param_1 * __real_40c3880000000000;
  pFVar5 = this->WaitingEvent;
  this->bIsWaiting = true;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar2 + __real_3fe0000000000000;
  auVar9 = roundpd(auVar9,auVar9,1);
  if (((longlong)auVar9._0_8_ < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaitTime.GetTicks() >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\Event.h"
                         ,0x58,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  uVar7 = (longlong)auVar9._0_8_ / 10000;
  uVar6 = 0xffffffff;
  if ((longlong)uVar7 < 0xffffffff) {
    uVar6 = uVar7;
  }
  uVar7 = 0;
  if (0 < (longlong)uVar6) {
    uVar7 = uVar6 & 0xffffffff;
  }
  uVar4 = (**(code **)(pFVar5->_padding_ + 0x20))(pFVar5,uVar7,0);
  this->bIsWaiting = false;
  do {
    if (uVar8 != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (
                L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar3 = this->WaitingEvent == (FEvent *)0x0;
    if (bVar3) {
      this->WaitingEvent = (FEvent *)0x0;
    }
    UNLOCK();
  } while (bVar3);
  if ((this->WaitingEvent != pFVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("WaitingEvent == eventBackup",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTask.cpp"
                         ,0x360,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (this->WaitingEvent != (FEvent *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&S_TaskEventPool);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->WaitingEvent);
    LeaveCriticalSection((LPCRITICAL_SECTION)&S_TaskEventPool);
    this->WaitingEvent = (FEvent *)0x0;
  }
  return (bool)uVar4;
}

// operator() @ 15054ffe0

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_10>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804811>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804811>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505500b4;
    }
  }
  bVar2 = false;
LAB_1505500b4:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505500f0

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_11>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804806>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804806>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505501c4;
    }
  }
  bVar2 = false;
LAB_1505501c4:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150550200

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_12>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804801>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804801>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505502d4;
    }
  }
  bVar2 = false;
LAB_1505502d4:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150550310

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_13>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804796>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804796>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505503e4;
    }
  }
  bVar2 = false;
LAB_1505503e4:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150550420

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_14>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804791>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804791>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505504f4;
    }
  }
  bVar2 = false;
LAB_1505504f4:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150550530

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_15>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804786>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804786>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150550604;
    }
  }
  bVar2 = false;
LAB_150550604:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150550710

bool __thiscall `FWN_Task::TryInvokeCallback'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804752>);
  if (bVar4) {
    ::FName::ToString(S_TaskStepNames + *(byte *)(*(longlong *)this + 0x40),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804752>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505507bb;
    }
  }
  bVar4 = false;
LAB_1505507bb:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150550990

bool __thiscall `FWN_Task::MakeResult'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804557>);
  if (bVar4) {
    ::FName::ToString(S_TaskCallbackResultNames + *(byte *)(*(longlong *)this + 0x50),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804557>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150550a3b;
    }
  }
  bVar4 = false;
LAB_150550a3b:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150550b30

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804856>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804856>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150550c04;
    }
  }
  bVar2 = false;
LAB_150550c04:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150550c40

bool __thiscall `FWN_Task::TryInvokeSchedulingCallback'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804659>);
  if (bVar4) {
    ::FName::ToString(S_TaskStepNames + 2,&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804659>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150550ce0;
    }
  }
  bVar4 = false;
LAB_150550ce0:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150550d30

bool __thiscall `FWN_Task::TryInvokeCallback'::__l7::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804746>);
  if (bVar4) {
    ::FName::ToString(S_TaskStepNames + *(byte *)(*(longlong *)this + 0x40),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804746>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150550ddb;
    }
  }
  bVar4 = false;
LAB_150550ddb:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150550e30

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804851>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804851>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150550f04;
    }
  }
  bVar2 = false;
LAB_150550f04:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150550f40

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804846>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804846>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150551014;
    }
  }
  bVar2 = false;
LAB_150551014:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150551050

bool __thiscall `FWN_Task::TryInvokeCallback'::__l13::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804735>);
  if (bVar4) {
    ::FName::ToString(S_TaskStepNames + *(byte *)(*(longlong *)this + 0x40),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804735>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505510fb;
    }
  }
  bVar4 = false;
LAB_1505510fb:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150551150

bool __thiscall `FWN_Task::TryInvokeCallback'::__l21::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804718>);
  if (bVar4) {
    ::FName::ToString(S_TaskStepNames + **(byte **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804718>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505511fb;
    }
  }
  bVar4 = false;
LAB_1505511fb:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150551250

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804841>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804841>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150551324;
    }
  }
  bVar2 = false;
LAB_150551324:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150551360

bool __thiscall `FWN_Task::TryInvokeCallback'::__l28::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804710>);
  if (bVar4) {
    ::FName::ToString(S_TaskStepNames + **(byte **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804710>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15055140b;
    }
  }
  bVar4 = false;
LAB_15055140b:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150551460

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804836>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804836>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150551534;
    }
  }
  bVar2 = false;
LAB_150551534:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150551570

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804831>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804831>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150551644;
    }
  }
  bVar2 = false;
LAB_150551644:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150551680

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_7>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804826>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804826>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150551754;
    }
  }
  bVar2 = false;
LAB_150551754:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150551790

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_8>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804821>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804821>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150551864;
    }
  }
  bVar2 = false;
LAB_150551864:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505518a0

bool __thiscall `FWN_Task::SetStep'::__l11::<lambda_9>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824804816>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_28);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824804816>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150551974;
    }
  }
  bVar2 = false;
LAB_150551974:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

