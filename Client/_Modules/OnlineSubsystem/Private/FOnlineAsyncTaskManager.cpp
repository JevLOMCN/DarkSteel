// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 13

// FOnlineAsyncTaskManager @ 14eb30670

FOnlineAsyncTaskManager * __thiscall
FOnlineAsyncTaskManager::FOnlineAsyncTaskManager(FOnlineAsyncTaskManager *this)

{
  bool bVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FEvent *pFVar4;
  uint local_res8 [2];
  
  *(undefined ***)this = &_vftable__for__FRunnable__;
  pTVar3 = (TNode *)0x0;
  this->ActiveSerialTask = (FOnlineAsyncTask *)0x0;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FSingleThreadRunnable__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActiveSerialTaskLock,4000);
  this->ActiveSerialTaskStartTime = 0.0;
  this->bActiveSerialTaskBreachReported = (atomic<bool>)0x0;
  (this->OnlineThreadTickInfo).bIsTicking = false;
  (this->OnlineThreadTickInfo).TickStartTime = 0.0;
  (this->OnlineThreadTickInfo).CurrentTask = (FOnlineAsyncTask *)0x0;
  (this->OnlineThreadTickInfo).bBreachReported = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnlineThreadTickInfoLock,4000);
  this->bEnableReportBreach = false;
  this->ConfigBreachTimeSeconds = 60.0;
  (this->QueuedSerialTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedSerialTasks).ArrayNum = 0;
  (this->QueuedSerialTasks).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->QueuedSerialTasksLock,4000);
  this->MaxParallelTasks = 8;
  this->bReloadMaxParallelTasksConfig = (atomic<bool>)0x0;
  pTVar2 = ::operator_new(0x10);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    pTVar2->Item = (FOnlineAsyncTask *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    pTVar3 = pTVar2;
  }
  (this->QueuedParallelTasks).Tail = pTVar3;
  (this->QueuedParallelTasks).Head = pTVar3;
  (this->ParallelTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParallelTasks).ArrayNum = 0;
  (this->ParallelTasks).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ParallelTasksLock,4000);
  (this->OutQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutQueue).ArrayNum = 0;
  (this->OutQueue).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OutQueueLock,4000);
  pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->WorkEvent = pFVar4;
  this->PollingInterval = 0x14;
  this->bRequestingExit = (FThreadSafeBool)0x0;
  this->OnlineThreadId = 0;
  local_res8[0] = 0x14;
  bVar1 = FConfigCacheIni::GetInt
                    (GConfig,L"OnlineSubsystem",L"PollingIntervalInMs",(int *)local_res8,&GEngineIni
                    );
  if (bVar1) {
    this->PollingInterval = local_res8[0];
  }
  FConfigCacheIni::GetInt
            (GConfig,L"OnlineSubsystem",L"MaxParallelTasks",&this->MaxParallelTasks,&GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"OnlineSubsystem",L"bEnableReportBreach",&this->bEnableReportBreach,
             &GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"OnlineSubsystem",L"BreachTimeSeconds",&this->ConfigBreachTimeSeconds,
             &GEngineIni);
  return this;
}

// ~FOnlineAsyncTaskManager @ 14eb34f30

void __thiscall FOnlineAsyncTaskManager::~FOnlineAsyncTaskManager(FOnlineAsyncTaskManager *this)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  
  *(undefined ***)this = &_vftable__for__FRunnable__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FSingleThreadRunnable__;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->WorkEvent);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OutQueueLock);
  pFVar1 = (this->OutQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ParallelTasksLock);
  pFVar1 = (this->ParallelTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->QueuedParallelTasks).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->QueuedParallelTasks).Tail = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x10);
    pTVar2 = (this->QueuedParallelTasks).Tail;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueuedSerialTasksLock);
  pFVar1 = (this->QueuedSerialTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnlineThreadTickInfoLock);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActiveSerialTaskLock);
  *(undefined ***)&this->field_0x8 = &___7FSingleThreadRunnable__6B_;
  *(undefined ***)this = &___7FRunnable__6B_;
  return;
}

// AddToInQueue @ 14ebb7560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineAsyncTaskManager::AddToInQueue(FOnlineAsyncTaskManager *this,FOnlineAsyncTask *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineAsyncTask *local_res10 [3];
  FString local_28;
  void *local_18 [2];
  
  local_res10[0] = param_1;
  if (6 < (byte)LogOnline._0_1_) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1,local_18);
    ::FString::PrintfImpl(&local_28,L"FOnlineAsyncTaskManager::AddToInQueue [%s]");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  lpCriticalSection = &this->QueuedSerialTasksLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar6 = &this->QueuedSerialTasks;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar2 + (longlong)(this->QueuedSerialTasks).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->QueuedSerialTasks).ArrayNum;
  piVar1 = &(this->QueuedSerialTasks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->QueuedSerialTasks).ArrayNum = iVar5 + 1;
  *(FOnlineAsyncTask **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10[0];
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// AddToOutQueue @ 14ebb7b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineAsyncTaskManager::AddToOutQueue(FOnlineAsyncTaskManager *this,FOnlineAsyncItem *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FOnlineAsyncItem_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineAsyncItem *local_res10 [3];
  FString local_28;
  void *local_18 [2];
  
  local_res10[0] = param_1;
  if (6 < (byte)LogOnline._0_1_) {
    (**(code **)(param_1->_padding_ + 8))(param_1,local_18);
    ::FString::PrintfImpl(&local_28,L"FOnlineAsyncTaskManager::AddToOutQueue [%s]");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  lpCriticalSection = &this->OutQueueLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar6 = &this->OutQueue;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->OutQueue).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->OutQueue).ArrayNum;
  piVar1 = &(this->OutQueue).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->OutQueue).ArrayNum = iVar5 + 1;
  *(FOnlineAsyncItem **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10[0];
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// AddToParallelTasks @ 14ebb7cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineAsyncTaskManager::AddToParallelTasks(FOnlineAsyncTaskManager *this,FOnlineAsyncTask *param_1)

{
  TQueue<FOnlineAsyncTask_*,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FString local_28;
  void *local_18 [2];
  
  if (6 < (byte)LogOnline._0_1_) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1,local_18);
    ::FString::PrintfImpl(&local_28,L"FOnlineAsyncTaskManager::AddToParallelTasks [%s]");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  pTVar1 = &this->QueuedParallelTasks;
  LOCK();
  this->bReloadMaxParallelTasksConfig = (atomic<bool>)0x1;
  UNLOCK();
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    pTVar3->Item = param_1;
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  return;
}

// Exit @ 14ebf82c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineAsyncTaskManager::Exit(FOnlineAsyncTaskManager *this)

{
  FString local_18;
  
  if (6 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FOnlineAsyncTaskManager::Exit() started");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->OnlineThreadId = 0;
  InvocationCount = InvocationCount + -1;
  if (6 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FOnlineAsyncTaskManager::Exit() finished");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GameTick @ 14ebfaff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineAsyncTaskManager::GameTick(FOnlineAsyncTaskManager *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *pFVar2;
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FOnlineAsyncItem_*,TSizedDefaultAllocator<32>_> *pTVar4;
  float fVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  FScriptContainerElement *pFVar8;
  FOnlineAsyncTask *pFVar9;
  FName FVar10;
  code *pcVar11;
  double dVar12;
  TConsoleVariableData<float> *pTVar13;
  bool bVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_Online_AsyncTasks> FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ForAnyElementType FVar18;
  int iVar19;
  uint uVar20;
  longlong *plVar21;
  uint local_res8;
  uint uStackX_c;
  uint local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FOnlineAsyncTask *local_188;
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_> local_180;
  LARGE_INTEGER local_170;
  FName local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FStatMessage local_100;
  FName local_f0;
  void *local_e8 [2];
  void *local_d8 [2];
  void *local_c8 [2];
  void *local_b8 [2];
  void *local_a8 [2];
  void *local_98 [11];
  
  local_res10 = 0;
  bVar14 = IsInGameThread();
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Private\\OnlineAsyncTaskManager.cpp"
                          ,0x96,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (this->bReloadMaxParallelTasksConfig != (atomic<bool>)0x0) {
    LOCK();
    this->bReloadMaxParallelTasksConfig = (atomic<bool>)0x0;
    UNLOCK();
    FConfigCacheIni::GetInt
              (GConfig,L"OnlineSubsystem",L"MaxParallelTasks",&this->MaxParallelTasks,&GEngineIni);
  }
  pFVar2 = &this->ParallelTasksLock;
  if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    iVar19 = this->MaxParallelTasks - (this->ParallelTasks).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    local_188 = (FOnlineAsyncTask *)0x0;
    pTVar13 = OSSConsoleVariables::CVarDelayAsyncTaskOutQueue.Ref;
    while (OSSConsoleVariables::CVarDelayAsyncTaskOutQueue.Ref = pTVar13, 0 < iVar19) {
      iVar19 = iVar19 + -1;
      pTVar6 = ((this->QueuedParallelTasks).Tail)->NextNode;
      if (pTVar6 == (TNode *)0x0) break;
      local_188 = pTVar6->Item;
      pTVar7 = (this->QueuedParallelTasks).Tail;
      (this->QueuedParallelTasks).Tail = pTVar6;
      pTVar6->Item = (FOnlineAsyncTask *)0x0;
      ::operator_delete(pTVar7,0x10);
      if (6 < (byte)LogOnline._0_1_) {
        (**(code **)(*(longlong *)local_188 + 8))(local_188,local_e8);
        ::FString::PrintfImpl
                  (&local_160,L"FOnlineAsyncTaskManager::GameTick Starting parallel task [%s]");
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (local_e8[0] != (void *)0x0) {
          FMemory::Free(local_e8[0]);
        }
      }
      (**(code **)(*(longlong *)local_188 + 0x20))();
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
      pTVar3 = &this->ParallelTasks;
      pFVar8 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_188) &&
          ((FScriptContainerElement *)&local_188 <
           pFVar8 + (longlong)(this->ParallelTasks).ArrayMax * 8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = (this->ParallelTasks).ArrayNum;
      piVar1 = &(this->ParallelTasks).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->ParallelTasks).ArrayNum = iVar15 + 1;
      *(FOnlineAsyncTask **)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_188;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      pTVar13 = OSSConsoleVariables::CVarDelayAsyncTaskOutQueue.Ref;
    }
    bVar14 = IsInParallelGameThread();
    if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    dVar12 = __real_4170000000000000;
    fVar5 = pTVar13->ShadowedValue[0];
    pFVar2 = &this->OutQueueLock;
    do {
      plVar21 = (longlong *)0x0;
      if ((pFVar2 == (FWindowsRecursiveMutex *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
      iVar19 = (this->OutQueue).ArrayNum;
      if (0 < iVar19) {
        pTVar4 = &this->OutQueue;
        plVar21 = *(longlong **)(pTVar4->AllocatorInstance).Data;
        if ((plVar21 == (longlong *)0x0) ||
           (QueryPerformanceCounter(&local_res18),
           ((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12) -
           (double)plVar21[1] < (double)fVar5)) {
          if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          }
          break;
        }
        if (((this->OutQueue).ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar8 = (pTVar4->AllocatorInstance).Data;
        iVar15 = (this->OutQueue).ArrayNum + -1;
        if (iVar15 != 0) {
          memmove(pFVar8,pFVar8 + 8,(longlong)iVar15 << 3);
        }
        piVar1 = &(this->OutQueue).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar4->AllocatorInstance,(this->OutQueue).ArrayNum,
                   &(this->OutQueue).ArrayMax);
      }
      if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      }
      if (plVar21 != (longlong *)0x0) {
        if ((0.0 < fVar5) && (5 < (byte)LogOnline._0_1_)) {
          QueryPerformanceCounter(&local_res20);
          (**(code **)(*plVar21 + 8))(plVar21,local_d8);
          ::FString::PrintfImpl(&local_150,L"Async task \'%s\' finalizing after %f seconds");
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          if (local_d8[0] != (void *)0x0) {
            FMemory::Free(local_d8[0]);
          }
        }
        (**(code **)(*plVar21 + 0x10))(plVar21);
        (**(code **)(*plVar21 + 0x18))(plVar21);
        (**(code **)*plVar21)(plVar21,1);
      }
    } while (1 < iVar19);
    QueryPerformanceCounter(&local_170);
    dVar12 = (double)local_170.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
    if (this->bEnableReportBreach != false) {
      pFVar2 = &this->OnlineThreadTickInfoLock;
      if (pFVar2 == (FWindowsRecursiveMutex *)0x0) goto LAB_14ebfbbe4;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
      if ((((this->OnlineThreadTickInfo).bIsTicking == false) ||
          ((this->OnlineThreadTickInfo).bBreachReported != false)) ||
         (dVar12 <= (double)this->ConfigBreachTimeSeconds +
                    (this->OnlineThreadTickInfo).TickStartTime)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      }
      else {
        pFVar9 = (this->OnlineThreadTickInfo).CurrentTask;
        (this->OnlineThreadTickInfo).bBreachReported = true;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
        if (2 < (byte)LogOnline._0_1_) {
          uVar20 = local_res10;
          if (pFVar9 != (FOnlineAsyncTask *)0x0) {
            (**(code **)(*(longlong *)pFVar9 + 8))(pFVar9,local_c8);
            uVar20 = 1;
          }
          ::FString::PrintfImpl
                    (&local_140,
                     L"OnlineAsyncTaskManager::GameTick online thread tick breached, Task=[%s]");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          if (((uVar20 & 1) != 0) && (local_c8[0] != (void *)0x0)) {
            FMemory::Free(local_c8[0]);
          }
        }
      }
    }
    pFVar2 = &this->QueuedSerialTasksLock;
    if ((pFVar2 == (FWindowsRecursiveMutex *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    local_res10 = (this->QueuedSerialTasks).ArrayNum;
    if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    }
    lpCriticalSection = &this->ActiveSerialTaskLock;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar9 = this->ActiveSerialTask;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pFVar9 == (FOnlineAsyncTask *)0x0) {
        uVar20 = local_res10;
        if (0 < (int)local_res10) {
          if ((pFVar2 == (FWindowsRecursiveMutex *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                  ,0x1b,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
          if (((this->QueuedSerialTasks).ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = *(FOnlineAsyncTask **)(this->QueuedSerialTasks).AllocatorInstance.Data;
          if (((this->QueuedSerialTasks).ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar8 = (this->QueuedSerialTasks).AllocatorInstance.Data;
          iVar19 = (this->QueuedSerialTasks).ArrayNum + -1;
          if (iVar19 != 0) {
            memmove(pFVar8,pFVar8 + 8,(longlong)iVar19 << 3);
          }
          iVar19 = (this->QueuedSerialTasks).ArrayNum + -1;
          (this->QueuedSerialTasks).ArrayNum = iVar19;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->QueuedSerialTasks).AllocatorInstance,iVar19,
                     &(this->QueuedSerialTasks).ArrayMax);
          if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          }
          if (6 < (byte)LogOnline._0_1_) {
            (**(code **)(*(longlong *)pFVar9 + 8))(pFVar9,local_98);
            ::FString::PrintfImpl
                      (&local_110,L"FOnlineAsyncTaskManager::GameTick Starting serial task [%s]");
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            if (local_98[0] != (void *)0x0) {
              FMemory::Free(local_98[0]);
            }
          }
          (**(code **)(*(longlong *)pFVar9 + 0x20))(pFVar9);
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          this->ActiveSerialTask = pFVar9;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          this->ActiveSerialTaskStartTime = dVar12;
          LOCK();
          this->bActiveSerialTaskBreachReported = (atomic<bool>)0x0;
          UNLOCK();
          (**(code **)(this->WorkEvent->_padding_ + 0x10))();
          uVar20 = local_res10;
        }
      }
      else {
        uVar20 = local_res10 + 1;
        if (((this->bEnableReportBreach != false) &&
            (this->bActiveSerialTaskBreachReported == (atomic<bool>)0x0)) &&
           ((double)this->ConfigBreachTimeSeconds + this->ActiveSerialTaskStartTime < dVar12)) {
          LOCK();
          this->bActiveSerialTaskBreachReported = (atomic<bool>)0x1;
          UNLOCK();
          if (2 < (byte)LogOnline._0_1_) {
            (**(code **)(*(longlong *)pFVar9 + 8))(pFVar9,local_b8);
            ::FString::PrintfImpl
                      (&local_130,
                       L"OnlineAsyncTaskManager::GameTick serial task breached, Task=[%s]");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            if (local_b8[0] != (void *)0x0) {
              FMemory::Free(local_b8[0]);
            }
          }
          local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_180.ArrayNum = 0;
          local_180.ArrayMax = 0;
          if ((pFVar2 == (FWindowsRecursiveMutex *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                  ,0x1b,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::operator=
                    (&local_180,&this->QueuedSerialTasks);
          if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          }
          iVar19 = local_180.ArrayNum;
          pFVar8 = local_180.AllocatorInstance.Data + (longlong)local_180.ArrayNum * 8;
          FVar18.Data = local_180.AllocatorInstance.Data;
          while( true ) {
            if (local_180.ArrayNum != iVar19) {
              `TCheckedPointerIterator<FOnlineAsyncTask_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_res8);
            }
            if (FVar18.Data == pFVar8) break;
            if (2 < (byte)LogOnline._0_1_) {
              (**(code **)(**(longlong **)FVar18.Data + 8))(*(longlong **)FVar18.Data,local_a8);
              ::FString::PrintfImpl(&local_120,L"\tblocked task [%s]");
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u__s_s_153020100,
                         (FLogCategoryBase *)&LogOnline);
              if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_120.Data.AllocatorInstance.Data);
              }
              if (local_a8[0] != (void *)0x0) {
                FMemory::Free(local_a8[0]);
              }
            }
            FVar18.Data = FVar18.Data + 8;
          }
          if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.AllocatorInstance.Data);
          }
        }
      }
      FVar17 = StatPtr_STAT_Online_AsyncTasks;
      if (StatPtr_STAT_Online_AsyncTasks == (FThreadSafeStaticStat<FStat_STAT_Online_AsyncTasks>)0x0
         ) {
        pFVar16 = ::FName::FName(&local_f0,"STAT_Online_AsyncTasks");
        FVar17 = (FThreadSafeStaticStat<FStat_STAT_Online_AsyncTasks>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Online_AsyncTasks,*pFVar16,
                            L"NumTasks","STATGROUP_Online","STATCAT_Advanced",L"Online",true,false,
                            ST_int64,false,false,MCR_Invalid);
      }
      FVar10 = *(FName *)FVar17;
      if (((FVar10 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res8 = FVar10.ComparisonIndex.Value.Value;
        uStackX_c = FVar10.Number;
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_100.NameAndInfo.Number = FVar10.Number & 0xffff8fff | 0x8000;
        local_168 = FVar10;
        local_100.StatData.Pad = (uchar  [8])(longlong)(int)uVar20;
        local_100.NameAndInfo.Index.Value = FVar10.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_100);
        FStatsTrace::Set(&local_168,(longlong)(int)uVar20);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
      return;
    }
  }
LAB_14ebfbbe4:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSingleThreadInterface @ 14ec02a50

FSingleThreadRunnable * __thiscall
FOnlineAsyncTaskManager::GetSingleThreadInterface(FOnlineAsyncTaskManager *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->field_0x8;
  if (this == (FOnlineAsyncTaskManager *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// Init @ 14ec09820

bool __thiscall FOnlineAsyncTaskManager::Init(FOnlineAsyncTaskManager *this)

{
  return this->WorkEvent != (FEvent *)0x0;
}

// RemoveFromParallelTasks @ 14ec10310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineAsyncTaskManager::RemoveFromParallelTasks
          (FOnlineAsyncTaskManager *this,FOnlineAsyncTask *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineAsyncTask *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FOnlineAsyncTask *local_res10;
  FString local_58;
  void *local_48 [2];
  
  local_res10 = param_1;
  if (6 < (byte)LogOnline._0_1_) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1,local_48);
    ::FString::PrintfImpl(&local_58,L"FOnlineAsyncTaskManager::RemoveFromParallelTasks [%s]");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  lpCriticalSection = &this->ParallelTasksLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->ParallelTasks).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->ParallelTasks).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->ParallelTasks).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->ParallelTasks).AllocatorInstance.Data;
    bVar4 = *(FOnlineAsyncTask **)pFVar2 != local_res10;
    lVar8 = 0;
    pFVar5 = local_res10;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        if (iVar1 <= lVar8) break;
      } while (bVar4 == (*(FOnlineAsyncTask **)(pFVar2 + lVar8 * 8) != pFVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pFVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < iVar1);
    (this->ParallelTasks).ArrayNum = iVar9;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Run @ 14ec11220

uint __thiscall FOnlineAsyncTaskManager::Run(FOnlineAsyncTaskManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_OnlineSubsystem.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_OnlineSubsystem.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  InvocationCount = InvocationCount + 1;
  if (this->OnlineThreadId != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OnlineThreadId == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Private\\OnlineAsyncTaskManager.cpp"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  DVar4 = GetCurrentThreadId();
  LOCK();
  this->OnlineThreadId = DVar4;
  UNLOCK();
  do {
    (**(code **)(this->WorkEvent->_padding_ + 0x20))(this->WorkEvent,this->PollingInterval,0);
    if (this->bRequestingExit == (FThreadSafeBool)0x0) {
      (**(code **)(*(longlong *)&this->field_0x8 + 8))(&this->field_0x8);
    }
  } while (this->bRequestingExit == (FThreadSafeBool)0x0);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return 0;
}

// Stop @ 14ec12fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineAsyncTaskManager::Stop(FOnlineAsyncTaskManager *this)

{
  FWindowsRecursiveMutex *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  pFVar1 = &this->QueuedSerialTasksLock;
  if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  }
  pFVar1 = &this->OutQueueLock;
  if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  }
  if (6 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl
              (&local_18,L"FOnlineAsyncTaskManager::Stop() ActiveSerialTask:%p Tasks[%d/%d]");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  LOCK();
  this->bRequestingExit = (FThreadSafeBool)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00014ec13119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->WorkEvent->_padding_ + 0x10))();
  return;
}

// Tick @ 14ec133b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineAsyncTaskManager::Tick(FOnlineAsyncTaskManager *this)

{
  bool *pbVar1;
  FOnlineAsyncTask **lpCriticalSection;
  int *lpCriticalSection_00;
  TNode **ppTVar2;
  int iVar3;
  TNode *_Src;
  FOnlineAsyncItem *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_Online_Async> FVar14;
  void **ppvVar15;
  void *pvVar16;
  FName FVar17;
  uint uVar18;
  double dVar19;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  ForAnyElementType local_158;
  undefined8 local_150;
  FName local_148;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FName local_c8;
  void *local_c0 [2];
  void *local_b0 [2];
  void *local_a0 [2];
  void *local_90 [2];
  void *local_80 [8];
  
  uVar18 = 0;
  FVar14 = StatPtr_STAT_Online_Async;
  if (StatPtr_STAT_Online_Async == (FThreadSafeStaticStat<FStat_STAT_Online_Async>)0x0) {
    pFVar13 = ::FName::FName(&local_c8,"STAT_Online_Async");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Online_Async>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Online_Async,*pFVar13,
                        L"OnlineAsync","STATGROUP_Online","STATCAT_Advanced",L"Online",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar14;
  bVar7 = false;
  bVar6 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
LAB_14ec1351f:
    bVar7 = bVar10;
    bVar6 = bVar9;
    bVar9 = false;
    FVar17 = local_148;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_res18.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Private\\OnlineAsyncTaskManager.cpp"
                   ,0x13c);
        bVar7 = true;
        bVar6 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec1351f;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar9 = true;
  }
  dVar8 = __real_4170000000000000;
  if (*(char *)((this->OnlineThreadTickInfoLock).CriticalSection.Opaque3 + 2) != '\0') {
    pbVar1 = &(this->OnlineThreadTickInfo).bBreachReported;
    if (pbVar1 == (bool *)0x0) goto LAB_14ec13bcd;
    EnterCriticalSection((LPCRITICAL_SECTION)pbVar1);
    this->bActiveSerialTaskBreachReported = (atomic<bool>)0x1;
    QueryPerformanceCounter(&local_res20);
    dVar19 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    (this->OnlineThreadTickInfo).TickStartTime = 0.0;
    *(undefined1 *)&(this->OnlineThreadTickInfo).CurrentTask = 0;
    *(double *)&this->OnlineThreadTickInfo = dVar19 + dVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)pbVar1);
  }
  (**(code **)(*(longlong *)&this[-1].field_0x178 + 0x30))(&this[-1].field_0x178);
  lpCriticalSection_00 = &(this->ParallelTasks).ArrayNum;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  if (lpCriticalSection_00 == (int *)0x0) {
LAB_14ec13bd3:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  ppTVar2 = &(this->QueuedParallelTasks).Tail;
  if (&local_158 != (ForAnyElementType *)ppTVar2) {
    iVar3 = *(int *)&(this->ParallelTasks).AllocatorInstance.Data;
    _Src = *ppTVar2;
    local_150 = CONCAT44(local_150._4_4_,iVar3);
    if (((iVar3 != 0) || (local_150._4_4_ != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar3,local_150._4_4_,&local_158,iVar3,(int *)((longlong)&local_150 + 4)),
       iVar3 != 0)) {
      memcpy(local_158.Data,_Src,(longlong)iVar3 << 3);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  for (; (ppvVar15 = (this->OnlineThreadTickInfoLock).CriticalSection.Opaque3 + 2, -1 < (int)uVar18
         && ((int)uVar18 < (int)local_150)); uVar18 = uVar18 + 1) {
    uVar12 = 0;
    if ((int)uVar18 < (int)local_150) {
      uVar12 = ~uVar18 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = *(FOnlineAsyncItem **)(local_158.Data + (longlong)(int)uVar18 * 8);
    if (*(char *)((this->OnlineThreadTickInfoLock).CriticalSection.Opaque3 + 2) != '\0') {
      pbVar1 = &(this->OnlineThreadTickInfo).bBreachReported;
      if (pbVar1 == (bool *)0x0) goto LAB_14ec13bd3;
      EnterCriticalSection((LPCRITICAL_SECTION)pbVar1);
      (this->OnlineThreadTickInfo).TickStartTime = (double)pFVar4;
      LeaveCriticalSection((LPCRITICAL_SECTION)pbVar1);
    }
    (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4);
    (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4);
    cVar11 = (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4);
    if (cVar11 != '\0') {
      cVar11 = (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4);
      if (cVar11 == '\0') {
        if (2 < (byte)LogOnline._0_1_) {
          QueryPerformanceCounter(&local_130);
          (**(code **)(pFVar4->_padding_ + 8))(pFVar4,local_b0);
          ::FString::PrintfImpl(&local_108,L"Async task \'%s\' failed in %f seconds (Parallel)");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          pvVar16 = local_b0[0];
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
            pvVar16 = local_b0[0];
          }
          goto LAB_14ec13865;
        }
      }
      else if (5 < (byte)LogOnline._0_1_) {
        QueryPerformanceCounter(&local_138);
        (**(code **)(pFVar4->_padding_ + 8))(pFVar4,local_c0);
        ::FString::PrintfImpl(&local_118,L"Async task \'%s\' succeeded in %f seconds (Parallel)");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        pvVar16 = local_c0[0];
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          pvVar16 = local_c0[0];
        }
LAB_14ec13865:
        if (pvVar16 != (void *)0x0) {
          FMemory::Free(pvVar16);
        }
      }
      RemoveFromParallelTasks
                ((FOnlineAsyncTaskManager *)&this[-1].field_0x178,(FOnlineAsyncTask *)pFVar4);
      AddToOutQueue((FOnlineAsyncTaskManager *)&this[-1].field_0x178,pFVar4);
    }
  }
  pbVar1 = &(this->OnlineThreadTickInfo).bBreachReported;
  if (*(char *)ppvVar15 != '\0') {
    if (pbVar1 == (bool *)0x0) goto LAB_14ec13bd3;
    EnterCriticalSection((LPCRITICAL_SECTION)pbVar1);
    (this->OnlineThreadTickInfo).TickStartTime = 0.0;
    LeaveCriticalSection((LPCRITICAL_SECTION)pbVar1);
  }
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  lpCriticalSection = &this->ActiveSerialTask;
  if (lpCriticalSection == (FOnlineAsyncTask **)0x0) goto LAB_14ec13bcd;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar4 = *(FOnlineAsyncItem **)&this->field_0x8;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (pFVar4 != (FOnlineAsyncItem *)0x0) {
    if (*(char *)ppvVar15 != '\0') {
      if (pbVar1 == (bool *)0x0) goto LAB_14ec13bcd;
      EnterCriticalSection((LPCRITICAL_SECTION)pbVar1);
      (this->OnlineThreadTickInfo).TickStartTime = (double)pFVar4;
      LeaveCriticalSection((LPCRITICAL_SECTION)pbVar1);
    }
    (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4);
    (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4);
    cVar11 = (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4);
    if (cVar11 != '\0') {
      cVar11 = (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4);
      if (cVar11 == '\0') {
        if (2 < (byte)LogOnline._0_1_) {
          QueryPerformanceCounter(&local_120);
          (**(code **)(pFVar4->_padding_ + 8))(pFVar4,local_90);
          ::FString::PrintfImpl(&local_e8,L"Async task \'%s\' failed in %f seconds");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          goto LAB_14ec13a96;
        }
      }
      else if (5 < (byte)LogOnline._0_1_) {
        QueryPerformanceCounter(&local_128);
        (**(code **)(pFVar4->_padding_ + 8))(pFVar4,local_a0);
        ::FString::PrintfImpl(&local_f8,L"Async task \'%s\' succeeded in %f seconds");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        local_90[0] = local_a0[0];
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          local_90[0] = local_a0[0];
        }
LAB_14ec13a96:
        if (local_90[0] != (void *)0x0) {
          FMemory::Free(local_90[0]);
        }
      }
      AddToOutQueue((FOnlineAsyncTaskManager *)&this[-1].field_0x178,pFVar4);
      if ((*(char *)&this->ActiveSerialTaskStartTime != '\0') && (2 < (byte)LogOnline._0_1_)) {
        (**(code **)(pFVar4->_padding_ + 8))(pFVar4,local_80);
        ::FString::PrintfImpl(&local_d8,L"The breached serial task eventually completed, Task=[%s]")
        ;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_80[0] != (void *)0x0) {
          FMemory::Free(local_80[0]);
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      *(undefined8 *)&this->field_0x8 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  if (*(char *)((this->OnlineThreadTickInfoLock).CriticalSection.Opaque3 + 2) != '\0') {
    pbVar1 = &(this->OnlineThreadTickInfo).bBreachReported;
    if (pbVar1 == (bool *)0x0) {
LAB_14ec13bcd:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pbVar1);
    this->bActiveSerialTaskBreachReported = (atomic<bool>)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)pbVar1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

