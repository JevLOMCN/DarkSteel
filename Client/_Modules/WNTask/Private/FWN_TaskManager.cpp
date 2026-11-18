// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 14

// FWN_TaskManager @ 14a6ac1d0

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_TaskManager * __thiscall FWN_TaskManager::FWN_TaskManager(FWN_TaskManager *this)

{
  TNode *_Dst;
  TNode *pTVar1;
  
  pTVar1 = (TNode *)0x0;
  this->NumWorkers = 0;
  (this->Scheduler).Object = (FWN_TaskScheduler *)0x0;
  (this->Scheduler).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TaskMapCS,4000);
  *(undefined8 *)&this->TaskMap = 0;
  *(undefined8 *)&(this->TaskMap).field_0x8 = 0;
  *(undefined8 *)&(this->TaskMap).field_0x20 = 0;
  *(undefined4 *)&(this->TaskMap).field_0x28 = 0;
  *(undefined4 *)&(this->TaskMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TaskMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaskMap).field_0x34 = 0;
  *(undefined8 *)&(this->TaskMap).field_0x40 = 0;
  *(undefined4 *)&(this->TaskMap).field_0x48 = 0;
  _Dst = ::operator_new(0x148);
  if (_Dst != (TNode *)0x0) {
    memset(_Dst,0,0x148);
    _Dst->NextNode = (TNode *)0x0;
    FWN_Task::FWN_Task(&_Dst->Item);
    pTVar1 = _Dst;
  }
  (this->ScheduledQueue).Tail = pTVar1;
  (this->ScheduledQueue).Head = pTVar1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FreedTasksCS,4000);
  (this->FreedTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreedTasks).ArrayNum = 0;
  (this->FreedTasks).ArrayMax = 0;
  return this;
}

// ~FWN_TaskManager @ 14a6ac8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskManager::~FWN_TaskManager(FWN_TaskManager *this)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  void *pvVar3;
  
  pFVar1 = (this->FreedTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FreedTasksCS);
  pTVar2 = (this->ScheduledQueue).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->ScheduledQueue).Tail = pTVar2->NextNode;
    FWN_Task::~FWN_Task(&pTVar2->Item);
    ::operator_delete(pTVar2,0x148);
    pTVar2 = (this->ScheduledQueue).Tail;
  }
  *(undefined4 *)&(this->TaskMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TaskMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FWN_TaskHandle,FWN_Task_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWN_TaskHandle,FWN_Task_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWN_TaskHandle,FWN_Task_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TaskMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TaskMapCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Scheduler).SharedReferenceCount.ReferenceController);
  return;
}

// AddTaskToMap @ 14a6acf90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskManager::AddTaskToMap(FWN_TaskManager *this,FWN_Task *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  TPairInitializer<FWN_TaskHandle_const_&,FWN_Task_*_const_&> local_res8;
  FWN_TaskHandle *local_28;
  FWN_Task ***local_20;
  
  lpCriticalSection = &this->TaskMapCS;
  local_res8.Value = (FWN_Task **)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  while( true ) {
    local_28 = (FWN_TaskHandle *)((longlong)local_res8.Value + 0x130);
    uVar2 = local_28->Identifier;
    if (*(int *)&(this->TaskMap).field_0x8 == *(int *)&(this->TaskMap).field_0x34) break;
    puVar3 = *(undefined1 **)&(this->TaskMap).field_0x40;
    puVar5 = &(this->TaskMap).field_0x38;
    if (puVar3 != (undefined1 *)0x0) {
      puVar5 = puVar3;
    }
    iVar4 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->TaskMap).field_0x48 - 1) &
                              (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
    if (iVar4 == -1) break;
    while (lVar1 = *(longlong *)&this->TaskMap + (longlong)iVar4 * 0x18,
          *(ulonglong *)(*(longlong *)&this->TaskMap + (longlong)iVar4 * 0x18) != uVar2) {
      iVar4 = *(int *)(lVar1 + 0x10);
      if (iVar4 == -1) goto LAB_14a6ad028;
    }
    lVar6 = lVar1 + 8;
    if (lVar1 == 0) {
      lVar6 = 0;
    }
    if (lVar6 == 0) break;
    FWN_TaskHandle::ReallocateIdentifier(local_28);
  }
LAB_14a6ad028:
  local_20 = &local_res8.Value;
  TSet<TTuple<FWN_TaskHandle,FWN_Task_*>,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FWN_TaskHandle_const_&,FWN_Task_*_const_&>_>
            ((TSet<TTuple<FWN_TaskHandle,FWN_Task_*>,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>,FDefaultSetAllocator>
              *)&this->TaskMap,&local_res8,(bool *)&local_28);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// BeginAccessTask @ 14a6ad090

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_Task * __thiscall
FWN_TaskManager::BeginAccessTask(FWN_TaskManager *this,FWN_TaskHandle *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_Task **ppFVar1;
  
  lpCriticalSection = &this->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar1 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&this->TaskMap,param_1);
  if (ppFVar1 != (FWN_Task **)0x0) {
    LOCK();
    (*ppFVar1)->NumAccessors = (*ppFVar1)->NumAccessors + 1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return *ppFVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (FWN_Task *)0x0;
}

// CreateTask @ 14a6ad3c0

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_Task * __thiscall FWN_TaskManager::CreateTask(FWN_TaskManager *this,FWN_TaskCreateInfo *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_Task *pFVar1;
  int iVar2;
  
  pFVar1 = (FWN_Task *)0x0;
  lpCriticalSection = &this->FreedTasksCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (0 < (this->FreedTasks).ArrayNum) {
      iVar2 = (this->FreedTasks).ArrayNum;
      pFVar1 = *(FWN_Task **)((this->FreedTasks).AllocatorInstance.Data + (longlong)iVar2 * 8 + -8);
      iVar2 = iVar2 + -1;
      (this->FreedTasks).ArrayNum = iVar2;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->FreedTasks).AllocatorInstance,iVar2,&(this->FreedTasks).ArrayMax);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pFVar1 == (FWN_Task *)0x0) {
      pFVar1 = ::operator_new(0x140);
      if (pFVar1 == (FWN_Task *)0x0) {
        pFVar1 = (FWN_Task *)0x0;
      }
      else {
        pFVar1 = FWN_Task::FWN_Task(pFVar1);
      }
    }
    FWN_Task::Initialize(pFVar1,param_1);
    AddTaskToMap(this,pFVar1);
    return pFVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Deinitialize @ 14a6ad550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskManager::Deinitialize(FWN_TaskManager *this)

{
  char cVar1;
  FWN_TaskScheduler *pFVar2;
  code *pcVar3;
  bool bVar4;
  int local_res8 [2];
  int *local_res10 [3];
  
  LOCK();
  bVar4 = FWN_Task::S_Statistics.NumTasks == 0;
  if (bVar4) {
    FWN_Task::S_Statistics.NumTasks = 0;
  }
  UNLOCK();
  local_res8[0] = FWN_Task::S_Statistics.NumTasks;
  if (!bVar4) {
    local_res10[0] = local_res8;
    `FWN_TaskManager::Deinitialize'::__l2::<lambda_1>::operator()(local_res10);
  }
  if (((this->Scheduler).Object == (FWN_TaskScheduler *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Scheduler).Object;
  cVar1 = pFVar2->bIsStopped;
  pFVar2->bShouldStop = true;
  while (cVar1 == '\0') {
    (**(code **)(pFVar2->Event->_padding_ + 0x10))();
    cVar1 = pFVar2->bIsStopped;
  }
  return;
}

// EndAccessTask @ 14a6ad5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskManager::EndAccessTask(FWN_TaskManager *this,FWN_Task *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (FWN_Task *)0x0) {
    LOCK();
    param_1->NumAccessors = param_1->NumAccessors + -1;
    UNLOCK();
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InTask != nullptr",
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskManager.cpp"
                     ,0x91,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  iRam00000000000000fc = iRam00000000000000fc + -1;
  UNLOCK();
  return;
}

// ExecuteTask @ 14a6ad9c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_TaskManager::ExecuteTask(FWN_TaskManager *this,FWN_Task *param_1)

{
  uint *puVar1;
  uint uVar2;
  FWN_TaskScheduler *pFVar3;
  TNode *pTVar4;
  FWN_Task *pFVar5;
  TNode *pTVar6;
  DoubleBufferedTaskQueue *lpCriticalSection;
  FWN_Task *local_res10;
  FWN_Task **local_res18;
  
  local_res10 = param_1;
  if (Ready < param_1->Step) {
    local_res18 = &local_res10;
    `FWN_TaskManager::ExecuteTask'::__l5::<lambda_1>::operator()(&local_res18);
    return false;
  }
  FWN_Task::SetStep(param_1,Ready);
  pFVar5 = local_res10;
  pFVar3 = (this->Scheduler).Object;
  FWN_Task::SetStep(local_res10,Scheduling);
  lpCriticalSection = &pFVar3->PendingSchedulingQueue;
  if (lpCriticalSection != (DoubleBufferedTaskQueue *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = (pFVar3->PendingSchedulingQueue).FrontQueueIndex;
    pTVar6 = ::operator_new(0x10);
    if (pTVar6 != (TNode *)0x0) {
      pTVar6->NextNode = (TNode *)0x0;
      pTVar6->Item = pFVar5;
      pTVar4 = (lpCriticalSection->TaskQueues).Elements[uVar2].Head;
      (lpCriticalSection->TaskQueues).Elements[uVar2].Head = pTVar6;
      pTVar4->NextNode = pTVar6;
    }
    puVar1 = &(pFVar3->PendingSchedulingQueue).NumFrontTasks;
    *puVar1 = *puVar1 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Get @ 14a6adce0

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_TaskManager * __cdecl FWN_TaskManager::Get(void)

{
  TNode *_Dst;
  TNode *pTVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&sInst.TaskMapCS,4000);
    pTVar1 = (TNode *)0x0;
    sInst.TaskMap._44_4_ = 0x80;
    sInst.TaskMap._0_8_ = 0;
    sInst.TaskMap._8_8_ = 0;
    sInst.TaskMap._32_8_ = 0;
    sInst.TaskMap._40_4_ = 0;
    sInst.TaskMap._52_4_ = 0;
    sInst.TaskMap._64_8_ = 0;
    sInst.TaskMap._72_4_ = 0;
    sInst.TaskMap._48_4_ = 0xffffffff;
    _Dst = ::operator_new(0x148);
    if (_Dst != (TNode *)0x0) {
      memset(_Dst,0,0x148);
      _Dst->NextNode = (TNode *)0x0;
      FWN_Task::FWN_Task(&_Dst->Item);
      pTVar1 = _Dst;
    }
    sInst.ScheduledQueue.Head = pTVar1;
    sInst.ScheduledQueue.Tail = pTVar1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&sInst.FreedTasksCS,4000);
    sInst.FreedTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    sInst.FreedTasks.ArrayNum = 0;
    sInst.FreedTasks.ArrayMax = 0;
    atexit(`FWN_TaskManager::Get'::__l2::_dynamic_atexit_destructor_for__sInst__);
    _Init_thread_footer(&::_TSS0);
    return &sInst;
  }
  return &sInst;
}

// Initialize @ 14a6ae4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskManager::Initialize(FWN_TaskManager *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TStaticArray<unsigned_int_volatile_,14,4294967295> *pTVar7;
  FTaskGraphInterface *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FRunnableThread *pFVar10;
  longlong lVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedPtr<FWN_TaskScheduler,1> *pTVar13;
  FWN_TaskScheduler *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  longlong local_28 [2];
  
  pTVar7 = &FWN_Task::S_Statistics.TaskCounts;
  lVar11 = 0xe;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  FWN_Task::S_Statistics.NumTasks = 0;
  FWN_Task::S_Statistics.NumGraphTasks = 0;
  do {
    pTVar7->Elements[0] = 0;
    pTVar7 = (TStaticArray<unsigned_int_volatile_,14,4294967295> *)(pTVar7->Elements + 1);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  pFVar8 = FTaskGraphInterface::Get();
  uVar6 = (**(code **)((longlong)*pFVar8 + 0x20))(pFVar8);
  this->NumWorkers = uVar6;
  pTVar9 = ::operator_new(0x150);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FWN_TaskScheduler *)&DAT_00000010;
    pTVar9 = pTVar15;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWN_TaskScheduler___00_SharedPointerInternals__6B_;
    FWN_TaskScheduler::FWN_TaskScheduler((FWN_TaskScheduler *)(pTVar9 + 1),this);
    pFVar14 = (FWN_TaskScheduler *)(pTVar9 + 1);
    if (pFVar14 == (FWN_TaskScheduler *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = &this->Scheduler;
  pTVar12 = pTVar9;
  if (pTVar13 != (TSharedPtr<FWN_TaskScheduler,1> *)local_28) {
    pTVar13->Object = pFVar14;
    pTVar3 = (this->Scheduler).SharedReferenceCount.ReferenceController;
    if (pTVar9 != pTVar3) {
      (this->Scheduler).SharedReferenceCount.ReferenceController = pTVar9;
      pTVar12 = pTVar15;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar3->_padding_)(pTVar3);
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (pTVar13->Object == (FWN_TaskScheduler *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar14 = pTVar13->Object;
  pFVar10 = FRunnableThread::Create
                      ((FRunnable *)pFVar14,L"WNTaskScheduler",0x80000,TPri_Normal,
                       0xffffffffffffffff,None);
  pFVar14->Thread = pFVar10;
  if (pFVar10 == (FRunnableThread *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskScheduler.cpp"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// RemoveTaskFromMap @ 14a6b15e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskManager::RemoveTaskFromMap(FWN_TaskManager *this,FWN_Task *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulong64 uVar1;
  
  lpCriticalSection = &this->TaskMapCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(this->TaskMap).field_0x8 != *(int *)&(this->TaskMap).field_0x34) {
      uVar1 = (param_1->Handle).Identifier;
      TSet<TTuple<FWN_TaskHandle,FWN_Task_*>,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FWN_TaskHandle>
                ((TSet<TTuple<FWN_TaskHandle,FWN_Task_*>,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>,FDefaultSetAllocator>
                  *)&this->TaskMap,(int)(uVar1 >> 0x20) * 0x17 + (int)uVar1,&param_1->Handle);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FWN_Task::SetStep(param_1,GCed);
    FWN_Task::Reset(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RemoveTasksFromMap @ 14a6b1670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWN_TaskManager::RemoveTasksFromMap
          (FWN_TaskManager *this,TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulong64 uVar3;
  FWN_Task *this_00;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->TaskMapCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FWN_Task_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      if (*(int *)&(this->TaskMap).field_0x8 != *(int *)&(this->TaskMap).field_0x34) {
        uVar3 = ((FWN_TaskHandle *)(*(longlong *)pFVar4 + 0x130))->Identifier;
        TSet<TTuple<FWN_TaskHandle,FWN_Task_*>,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FWN_TaskHandle>
                  ((TSet<TTuple<FWN_TaskHandle,FWN_Task_*>,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>,FDefaultSetAllocator>
                    *)&this->TaskMap,(int)(uVar3 >> 0x20) * 0x17 + (int)uVar3,
                   (FWN_TaskHandle *)(*(longlong *)pFVar4 + 0x130));
      }
      pFVar4 = pFVar4 + 8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FWN_Task_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      this_00 = *(FWN_Task **)pFVar4;
      FWN_Task::SetStep(this_00,GCed);
      FWN_Task::Reset(this_00);
      pFVar4 = pFVar4 + 8;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 1505506c0

bool __thiscall `FWN_TaskManager::Deinitialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3069069572570087339>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3069069572570087339>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505508b0

bool __thiscall `FWN_TaskManager::ExecuteTask'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3069069572570087368>);
  if (bVar2) {
    ::FName::ToString((FName *)(**(longlong **)this + 4),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3069069572570087368>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055091e;
    }
  }
  bVar2 = false;
LAB_15055091e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

