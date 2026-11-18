// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 20

// FInterchangeWorkerHandler @ 14e660a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInterchangeWorkerHandler * __thiscall
UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler
          (FInterchangeWorkerHandler *this,FInterchangeDispatcher *param_1,FString *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  FString *pFVar5;
  FThread *pFVar6;
  undefined ***pppuVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_d8 [32];
  FThreadAffinity local_98;
  FString local_88;
  LARGE_INTEGER local_78 [2];
  code *local_68 [2];
  undefined **local_58;
  FInterchangeWorkerHandler *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pTVar4 = (TNode *)0x0;
  *(undefined8 *)&(this->OnWorkerHandlerExitLoop).field_0x18 = 2;
  *(undefined8 *)&this->OnWorkerHandlerExitLoop = 0;
  *(undefined8 *)&(this->OnWorkerHandlerExitLoop).field_0x8 = 0;
  *(undefined8 *)&(this->OnWorkerHandlerExitLoop).field_0x10 = 0;
  this->Dispatcher = param_1;
  FNetworkServerNode::FNetworkServerNode(&this->NetworkInterface);
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Object = (ICommand *)0x0;
    (pTVar3->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Object = (ICommand *)0x0;
    (pTVar3->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar4 = pTVar3;
  }
  (this->CommandIO).InCommands.Tail = pTVar4;
  pFVar1 = &this->ThreadName;
  (this->CommandIO).InCommands.Head = pTVar4;
  (this->CommandIO).NetworkInterface = (FNetworkNode *)0x0;
  (this->IOThread).Impl.Object = (FThreadImpl *)0x0;
  (this->IOThread).Impl.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadName).Data.ArrayNum = 0;
  (this->ThreadName).Data.ArrayMax = 0;
  this->WorkerHandle = (FProcHandle)0x0;
  this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x0;
  this->ErrorState = Ok;
  ::FString::FString(&this->ResultFolder,param_2);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CurrentTasksLock,4000);
  (this->CurrentTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentTasks).ArrayNum = 0;
  (this->CurrentTasks).ArrayMax = 0;
  this->bShouldTerminate = false;
  this->bPingCommandReceived = false;
  QueryPerformanceCounter(local_78);
  local_98.ThreadAffinityMask = 0;
  local_98.ProcessorGroup = 0;
  local_98._10_6_ = 0;
  ::FString::AppendInt((FString *)&local_98,local_78[0].s.LowPart & 0xefffffff);
  pFVar5 = ::FString::FString((FString *)&local_78[0].s,L"InterchangeWorkerHandler_");
  ::FString::ConcatFF(&local_88,pFVar5,(FString *)&local_98);
  if (pFVar1 != &local_88) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    (this->ThreadName).Data.ArrayNum = local_88.Data.ArrayNum;
    (this->ThreadName).Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((void *)CONCAT44(local_78[0].s.HighPart,local_78[0].s.LowPart) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_78[0].s.HighPart,local_78[0].s.LowPart));
  }
  if ((void *)local_98.ThreadAffinityMask != (void *)0x0) {
    FMemory::Free((void *)local_98.ThreadAffinityMask);
  }
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler'::__l2::<lambda_1>,void>
                ::Call;
  local_98.ProcessorGroup = 0;
  local_98._10_6_ = 0;
  local_40 = (undefined ***)0x0;
  if ((this->ThreadName).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  local_98.ThreadAffinityMask = 0xffffffffffffffff;
  local_50 = this;
  pFVar6 = ::FThread::FThread((FThread *)&local_78[0].s,pwVar8,
                              (TUniqueFunction<void___cdecl(void)> *)local_68,0,TPri_Normal,
                              &local_98,NonForkable);
  ::FThread::operator=(&this->IOThread,pFVar6);
  ::FThread::~FThread((FThread *)&local_78[0].s);
  if (local_68[0] != (code *)0x0) {
    pppuVar7 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar7 = local_40;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  QueryPerformanceCounter(local_78);
  this->LastProgressMessageTime =
       (double)CONCAT44(local_78[0].s.HighPart,local_78[0].s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  return this;
}

// ~FInterchangeWorkerHandler @ 14e6610a0

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::~FInterchangeWorkerHandler
          (FInterchangeWorkerHandler *this)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  FSocket *pFVar3;
  void *pvVar4;
  bool bVar5;
  ISocketSubsystem *pIVar6;
  FName local_res8;
  
  this->bShouldTerminate = true;
  bVar5 = ::FThread::IsJoinable(&this->IOThread);
  if (bVar5) {
    ::FThread::Join(&this->IOThread);
  }
  pFVar1 = (this->CurrentTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CurrentTasksLock);
  pFVar1 = (this->ResultFolder).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ThreadName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ::FThread::~FThread(&this->IOThread);
  pTVar2 = (this->CommandIO).InCommands.Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->CommandIO).InCommands.Tail = pTVar2->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar2->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->CommandIO).InCommands.Tail;
  }
  (this->NetworkInterface)._padding_ = (longlong)&___7FNetworkServerNode_Interchange_UE__6B_;
  pFVar3 = (this->NetworkInterface).ListeningSocket;
  if (pFVar3 != (FSocket *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x10))();
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pIVar6 = ISocketSubsystem::Get(&local_res8);
    (**(code **)(pIVar6->_padding_ + 0x38))(pIVar6,(this->NetworkInterface).ListeningSocket);
    (this->NetworkInterface).ListeningSocket = (FSocket *)0x0;
  }
  FNetworkNode::~FNetworkNode((FNetworkNode *)&this->NetworkInterface);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWorkerHandlerExitLoop).field_0x8,
             *(int *)&(this->OnWorkerHandlerExitLoop).field_0x10);
  pvVar4 = *(void **)&(this->OnWorkerHandlerExitLoop).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// operator() @ 14e661510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler'::__l2::<lambda_1>::
operator()(void *this)

{
  FInterchangeWorkerHandler *this_00;
  
  this_00 = *(FInterchangeWorkerHandler **)this;
  LOCK();
  this_00->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x0;
  UNLOCK();
  UE::Interchange::FInterchangeWorkerHandler::RunInternal(this_00);
  LOCK();
  this_00->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x8;
  UNLOCK();
  if ((3 < (byte)LogInterchangeDispatcher._0_1_) && (this_00->ErrorState != Ok)) {
    switch(this_00->ErrorState) {
    case ConnectionFailed_NotBound:
      break;
    case ConnectionFailed_NoClient:
      break;
    case ConnectionLost:
      break;
    case ConnectionLost_SendFailed:
      break;
    case WorkerProcess_CantCreate:
      break;
    case WorkerProcess_Lost:
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
    return;
  }
  return;
}

// operator() @ 14e6615f0

/* WARNING: Removing unreachable block (ram,0x00014e66180d) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UE::Interchange::FInterchangeWorkerHandler::RunInternal'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  FInterchangeDispatcher *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType *pFVar6;
  bool bVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  ICommand local_98;
  FString local_90;
  int local_80 [2];
  TOptional<UE::Interchange::FTask> local_78;
  
  UE::Interchange::FInterchangeDispatcher::GetNextTask
            (*(FInterchangeDispatcher **)(*(longlong *)this + 0x20),&local_78);
  bVar7 = false;
  if (local_78.bIsSet != false) {
    local_98 = (ICommand)&___7FRunTaskCommand_Interchange_UE__6B_;
    ::FString::FString(&local_90,(FString *)&local_78);
    local_80[0] = local_78.TypedValue.Index;
    lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0xf0);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    lVar1 = *(longlong *)this;
    pFVar6 = (ForAnyElementType *)(lVar1 + 0x118);
    if (((pFVar6->Data <= (FScriptContainerElement *)local_80) &&
        ((FScriptContainerElement *)local_80 < pFVar6->Data + (longlong)*(int *)(lVar1 + 0x124) * 4)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = *(int *)(lVar1 + 0x120);
    if (iVar5 == *(int *)(lVar1 + 0x124)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar6,(int *)(lVar1 + 0x124));
      *(int *)(lVar1 + 0x120) = iVar5 + 1;
    }
    else {
      *(int *)(lVar1 + 0x120) = iVar5 + 1;
    }
    *(int *)(pFVar6->Data + (longlong)iVar5 * 4) = local_80[0];
    LeaveCriticalSection(lpCriticalSection);
    bVar3 = UE::Interchange::FCommandQueue::SendCommand
                      ((FCommandQueue *)(*(longlong *)this + 0x90),&local_98,__real_3ff0000000000000
                      );
    if (bVar3) {
      if (5 < (byte)LogInterchangeDispatcher._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
      }
      bVar7 = true;
    }
    else {
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      this_00 = *(FInterchangeDispatcher **)(*(longlong *)this + 0x20);
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      if ((local_78.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      UE::Interchange::FInterchangeDispatcher::SetTaskState
                (this_00,local_78.TypedValue.Index,ProcessFailed,&local_a8,&local_b8);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      LOCK();
      *(undefined1 *)(*(longlong *)this + 0xd8) = 4;
      UNLOCK();
      *(undefined4 *)(*(longlong *)this + 0xdc) = 4;
      DestructItems<FString,int>((FString *)0x0,0);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_78.bIsSet != false) {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_78.TypedValue.OnTaskCompleted);
      DestructItems<FString,int>
                ((FString *)local_78.TypedValue.JsonMessages.AllocatorInstance.Data,
                 local_78.TypedValue.JsonMessages.ArrayNum);
      if (local_78.TypedValue.JsonMessages.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_78.TypedValue.JsonMessages.AllocatorInstance.Data);
      }
      if (local_78.TypedValue.JsonResult.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.TypedValue.JsonResult.Data.AllocatorInstance.Data);
      }
      if (local_78.TypedValue.JsonDescription.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.TypedValue.JsonDescription.Data.AllocatorInstance.Data);
      }
    }
  }
  return bVar7;
}

// operator() @ 14e661930

void __thiscall
`UE::Interchange::FInterchangeWorkerHandler::RunInternal'::__l2::<lambda_2>::operator()(void *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  LOCK();
  *(undefined1 *)(*(longlong *)this + 0xd8) = 8;
  UNLOCK();
  return;
}

// EWorkerErrorStateAsString @ 14e6630f0

wchar_t * __thiscall
UE::Interchange::FInterchangeWorkerHandler::EWorkerErrorStateAsString
          (FInterchangeWorkerHandler *this,EWorkerErrorState param_1)

{
  switch(param_1) {
  case Ok:
    return L"Ok";
  case ConnectionFailed_NotBound:
    return L"Connection failed (socket not bound)";
  case ConnectionFailed_NoClient:
    return L"Connection failed (No connection from client)";
  case ConnectionLost:
    return L"Connection lost";
  case ConnectionLost_SendFailed:
    return L"Connection lost (send failed)";
  case WorkerProcess_CantCreate:
    return L"Worker process issue (cannot create worker process)";
  case WorkerProcess_Lost:
    return L"Worker process issue (worker lost)";
  default:
    return L"unknown";
  }
}

// IsAlive @ 14e6663b0

bool __thiscall UE::Interchange::FInterchangeWorkerHandler::IsAlive(FInterchangeWorkerHandler *this)

{
  return (bool)(~((byte)this->WorkerState >> 3) & 1);
}

// KillAllCurrentTasks @ 14e666510

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::KillAllCurrentTasks(FInterchangeWorkerHandler *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FString local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  lpCriticalSection = &this->CurrentTasksLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->CurrentTasks).AllocatorInstance.Data;
    iVar3 = (this->CurrentTasks).ArrayNum;
    pFVar2 = pFVar4 + (longlong)iVar3 * 4;
    while( true ) {
      if ((this->CurrentTasks).ArrayNum != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar2) break;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      FInterchangeDispatcher::SetTaskState
                (this->Dispatcher,*(int *)pFVar4,ProcessFailed,&local_48,&local_38);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)0x0,0);
      pFVar4 = pFVar4 + 4;
    }
    piVar1 = &(this->CurrentTasks).ArrayMax;
    (this->CurrentTasks).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->CurrentTasks).AllocatorInstance,0,piVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e66661b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// ProcessCommand @ 14e666700

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::ProcessCommand
          (FInterchangeWorkerHandler *this,FCompletedQueryTaskProgressCommand *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  FInterchangeDispatcher *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint local_res10 [2];
  FScriptContainerElement *local_res18;
  FString local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  
  iVar1 = (param_1->TaskStates).ArrayNum;
  pFVar7 = (param_1->TaskStates).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0xc;
  uVar8 = local_res10[0];
  local_res18 = pFVar6;
  do {
    if ((param_1->TaskStates).ArrayNum != iVar1) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TCheckedPointerIterator<UE::Interchange::FCompletedQueryTaskProgressCommand::FTaskProgressData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar6) {
      return;
    }
    if (*(uint *)(pFVar7 + 4) != 1) {
      pFVar3 = this->Dispatcher;
      uVar2 = *(uint *)pFVar7;
      lpCriticalSection = &pFVar3->TaskPoolCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (((int)uVar2 < 0) || ((pFVar3->TaskPool).ArrayNum <= (int)uVar2)) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2789720497296768891>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcher.cpp"
                           ,0x85,"TaskPool.IsValidIndex(TaskIndex)");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        uVar8 = 0;
        if ((int)uVar2 < (pFVar3->TaskPool).ArrayNum) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(uint *)((pFVar3->TaskPool).AllocatorInstance.Data +
                         (longlong)(int)uVar2 * 0x58 + 0x14);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar6 = local_res18;
      if (uVar8 == 1) {
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
        FInterchangeDispatcher::SetTaskState
                  (this->Dispatcher,*(uint *)pFVar7,ProcessFailed,&local_58,&local_48);
        DestructItems<FString,int>((FString *)0x0,0);
        pFVar6 = local_res18;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
          pFVar6 = local_res18;
        }
      }
    }
    pFVar7 = pFVar7 + 0xc;
  } while( true );
}

// ProcessCommand @ 14e6668b0

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::ProcessCommand
          (FInterchangeWorkerHandler *this,FCompletedTaskCommand *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  lpCriticalSection = &this->CurrentTasksLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->CurrentTasks).AllocatorInstance.Data;
  piVar1 = &param_1->TaskIndex;
  if (((pFVar2 <= piVar1) && (piVar1 < pFVar2 + (longlong)(this->CurrentTasks).ArrayMax * 4)) &&
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
  iVar6 = (this->CurrentTasks).ArrayNum;
  lVar5 = (longlong)iVar6;
  if (iVar6 != 0) {
    iVar9 = 0;
    pFVar2 = (this->CurrentTasks).AllocatorInstance.Data;
    bVar4 = *(int *)pFVar2 != *piVar1;
    lVar8 = 0;
    iVar6 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar7 = iVar6 + 1;
      if (lVar8 < lVar5) {
        do {
          if (bVar4 != (*(int *)(pFVar2 + lVar8 * 4) != *piVar1)) break;
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar5);
      }
      if (bVar4 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar2 + (longlong)iVar9 * 4,pFVar2 + (longlong)iVar6 * 4,
                  (longlong)(iVar7 - iVar6) << 2);
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < lVar5);
    (this->CurrentTasks).ArrayNum = iVar9;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FInterchangeDispatcher::SetTaskState
            (this->Dispatcher,param_1->TaskIndex,param_1->ProcessResult,&param_1->JSonResult,
             &param_1->JSonMessages);
  LOCK();
  this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x2;
  UNLOCK();
  return;
}

// ProcessCommand @ 14e666a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::ProcessCommand
          (FInterchangeWorkerHandler *this,FErrorCommand *param_1)

{
  FString *pFVar1;
  FInterchangeDispatcher *pFVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  ICommand local_res8;
  
  pFVar1 = &param_1->ErrorMessage;
  if (3 < (byte)LogInterchangeDispatcher._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
  }
  pFVar2 = this->Dispatcher;
  pFVar4 = &pFVar2->InterchangeWorkerFatalError;
  if (pFVar4 != pFVar1) {
    pFVar3 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->InterchangeWorkerFatalError).Data.ArrayNum = (param_1->ErrorMessage).Data.ArrayNum;
    (pFVar2->InterchangeWorkerFatalError).Data.ArrayMax = (param_1->ErrorMessage).Data.ArrayMax;
    (param_1->ErrorMessage).Data.ArrayNum = 0;
    (param_1->ErrorMessage).Data.ArrayMax = 0;
  }
  local_res8 = (ICommand)&___7FTerminateCommand_Interchange_UE__6B_;
  FCommandQueue::SendCommand(&this->CommandIO,&local_res8,0.0);
  return;
}

// ProcessCommand @ 14e666b40

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::ProcessCommand
          (FInterchangeWorkerHandler *this,FPingCommand *param_1)

{
  ICommand local_res8 [4];
  
  this->bPingCommandReceived = true;
  local_res8[0] = (ICommand)&___7FBackPingCommand_Interchange_UE__6B_;
  FCommandQueue::SendCommand(&this->CommandIO,local_res8,0.0);
  return;
}

// ProcessCommand @ 14e666b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::ProcessCommand
          (FInterchangeWorkerHandler *this,ICommand *param_1)

{
  FInterchangeDispatcher *pFVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  ICommand *pIVar4;
  FString *pFVar5;
  ICommand local_res10;
  
  cVar3 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (cVar3 == '\x01') {
    pIVar4 = param_1 + 1;
    if (3 < (byte)LogInterchangeDispatcher._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
    }
    pFVar1 = this->Dispatcher;
    pFVar5 = &pFVar1->InterchangeWorkerFatalError;
    if ((ICommand *)pFVar5 != pIVar4) {
      pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)*pIVar4;
      *pIVar4 = (ICommand)0x0;
      (pFVar1->InterchangeWorkerFatalError).Data.ArrayNum = *(int *)(param_1 + 2);
      (pFVar1->InterchangeWorkerFatalError).Data.ArrayMax = *(int *)&param_1[2].field_0x4;
      param_1[2] = (ICommand)0x0;
    }
    local_res10 = (ICommand)&___7FTerminateCommand_Interchange_UE__6B_;
    FCommandQueue::SendCommand(&this->CommandIO,&local_res10,0.0);
  }
  else {
    if (cVar3 == '\x02') {
      this->bPingCommandReceived = true;
      local_res10 = (ICommand)&___7FBackPingCommand_Interchange_UE__6B_;
      FCommandQueue::SendCommand(&this->CommandIO,&local_res10,0.0);
      return;
    }
    if (cVar3 == '\x05') {
      ProcessCommand(this,(FCompletedTaskCommand *)param_1);
      return;
    }
    if (cVar3 == '\a') {
      ProcessCommand(this,(FCompletedQueryTaskProgressCommand *)param_1);
      return;
    }
  }
  return;
}

// Run @ 14e667280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Interchange::FInterchangeWorkerHandler::Run(FInterchangeWorkerHandler *this)

{
  LOCK();
  this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x0;
  UNLOCK();
  RunInternal(this);
  LOCK();
  this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x8;
  UNLOCK();
  if ((3 < (byte)LogInterchangeDispatcher._0_1_) && (this->ErrorState != Ok)) {
    switch(this->ErrorState) {
    case ConnectionFailed_NotBound:
      break;
    case ConnectionFailed_NoClient:
      break;
    case ConnectionLost:
      break;
    case ConnectionLost_SendFailed:
      break;
    case WorkerProcess_CantCreate:
      break;
    case WorkerProcess_Lost:
    }
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
    return;
  }
  return;
}

// RunInternal @ 14e667360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::RunInternal(FInterchangeWorkerHandler *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  TAtomic<UE::Interchange::EWorkerState> TVar3;
  FNetworkNode *pFVar4;
  longlong *plVar5;
  FSocket *pFVar6;
  code *pcVar7;
  double dVar8;
  FInterchangeWorkerHandler *this_00;
  double dVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  ICommand *pIVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  ISocketSubsystem *pIVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  FInterchangeWorkerHandler *pFVar24;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  FInterchangeWorkerHandler *local_res20;
  TSharedPtr<UE::Interchange::ICommand,1> local_138;
  FName local_128;
  FString local_120;
  ICommand local_110;
  FInterchangeWorkerHandler *local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f0;
  TSharedPtr<UE::Interchange::ICommand,1> local_e0;
  FDestructionSentinel local_d0 [6];
  
  dVar13 = __real_4170000030000000;
  dVar12 = __real_3fb999999999999a;
  fVar11 = __real_3dcccccd;
  fVar10 = __real_3f000000;
  dVar9 = __real_4170000000000000;
  pFVar24 = this;
  local_res20 = this;
  local_108 = this;
LAB_14e6673ec:
  iVar20 = 0;
LAB_14e667400:
  while( true ) {
    if (((byte)this->WorkerState & 8) != 0) {
      return;
    }
    TVar3 = this->WorkerState;
    if (TVar3 != (TAtomic<UE::Interchange::EWorkerState>)0x0) break;
    this->ErrorState = Ok;
    StartWorkerProcess(this);
    if (this->ErrorState == Ok) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FString::FString(&SocketDescription,L"InterchangeWorkerHandler");
        atexit(`UE::Interchange::FInterchangeWorkerHandler::RunInternal'::__l7::
               _dynamic_atexit_destructor_for__SocketDescription__);
        _Init_thread_footer(&::_TSS0);
      }
      plVar5 = (longlong *)(this->NetworkInterface)._padding_;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
        local_128.ComparisonIndex.Value = 0;
        local_128.Number = 0;
        pIVar19 = ISocketSubsystem::Get(&local_128);
        (**(code **)(pIVar19->_padding_ + 0x38))(pIVar19,(this->NetworkInterface)._padding_);
        (this->NetworkInterface)._padding_ = 0;
      }
      pFVar6 = (this->NetworkInterface).ListeningSocket;
      (**(code **)(pFVar6->_padding_ + 0xa0))(pFVar6,1);
      QueryPerformanceCounter(&local_100);
      dVar8 = (double)local_100.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      do {
        pFVar6 = (this->NetworkInterface).ListeningSocket;
        lVar21 = (**(code **)(pFVar6->_padding_ + 0x50))(pFVar6,&SocketDescription);
        (this->NetworkInterface)._padding_ = lVar21;
        if (lVar21 != 0) {
          (this->CommandIO).NetworkInterface = (FNetworkNode *)&this->NetworkInterface;
          goto LAB_14e6679a7;
        }
        FWindowsPlatformProcess::Sleep(fVar11);
        QueryPerformanceCounter(&local_f8);
      } while ((double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9 <
               dVar8 + dVar13);
      this->ErrorState = ConnectionFailed_NoClient;
LAB_14e6679a7:
      if (this->ErrorState == Ok) {
        LOCK();
        this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x2;
        UNLOCK();
      }
      else {
        LOCK();
        this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x4;
        UNLOCK();
      }
    }
    else {
      `UE::Interchange::FInterchangeWorkerHandler::RunInternal'::__l2::<lambda_2>::operator()
                (&local_res20);
    }
  }
  if (TVar3 == (TAtomic<UE::Interchange::EWorkerState>)0x1) {
    ValidateConnection(this);
    if (this->ErrorState != WorkerProcess_Lost) {
      FCommandQueue::GetNextCommand(&this->CommandIO,&local_e0,dVar12);
      pIVar14 = local_e0.Object;
      if (local_e0.Object != (ICommand *)0x0) {
        if ((local_e0.Object == (ICommand *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ProcessCommand(this,pIVar14);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.SharedReferenceCount.ReferenceController);
      if (this->bShouldTerminate == false) {
        if (this->WorkerState == (TAtomic<UE::Interchange::EWorkerState>)0x1) {
          FWindowsPlatformProcess::Sleep(fVar10);
        }
      }
      else {
        if (5 < (byte)LogInterchangeDispatcher._0_1_) {
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher)
          ;
        }
        LOCK();
        this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x4;
        UNLOCK();
      }
      goto LAB_14e667400;
    }
  }
  else {
    if (TVar3 != (TAtomic<UE::Interchange::EWorkerState>)0x2) {
      if (TVar3 == (TAtomic<UE::Interchange::EWorkerState>)0x4) goto LAB_14e66744a;
      local_res8[0] = 0;
      `UE::Interchange::FInterchangeWorkerHandler::RunInternal'::__l104::<lambda_3>::operator()
                (local_res8);
      goto LAB_14e667400;
    }
    ValidateConnection(this);
    if (this->ErrorState != WorkerProcess_Lost) {
      bVar15 = `UE::Interchange::FInterchangeWorkerHandler::RunInternal'::__l2::<lambda_1>::
               operator()(&local_108);
      if (bVar15) {
        LOCK();
        this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x1;
        UNLOCK();
      }
      else if (this->bShouldTerminate == false) {
        if (this->WorkerState == (TAtomic<UE::Interchange::EWorkerState>)0x2) {
          FWindowsPlatformProcess::Sleep(fVar11);
        }
      }
      else {
        if ((byte)LogInterchangeDispatcher._0_1_ < 6) goto LAB_14e6677b0;
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
        LOCK();
        this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x4;
        UNLOCK();
      }
      goto LAB_14e667400;
    }
  }
LAB_14e6677b0:
  LOCK();
  this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x4;
  UNLOCK();
  goto LAB_14e667400;
LAB_14e66744a:
  if (this->WorkerHandle == (FProcHandle)0x0) goto LAB_14e6674d0;
  pFVar4 = (this->CommandIO).NetworkInterface;
  if (pFVar4 == (FNetworkNode *)0x0) {
LAB_14e667476:
    bVar15 = FWindowsPlatformProcess::IsProcRunning(&this->WorkerHandle);
    if (bVar15) {
      local_110 = (ICommand)&___7FTerminateCommand_Interchange_UE__6B_;
      FCommandQueue::SendCommand(&this->CommandIO,&local_110,0.0);
      do {
        bVar15 = FWindowsPlatformProcess::IsProcRunning(&this->WorkerHandle);
        if (!bVar15) goto LAB_14e6674d0;
        FWindowsPlatformProcess::Sleep(fVar11);
        iVar20 = iVar20 + 1;
      } while (iVar20 < 10);
    }
  }
  else {
    if ((pFVar4->bReadError == false) && (pFVar4->bWriteError == false)) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    if (bVar15) goto LAB_14e667476;
  }
  FWindowsPlatformProcess::TerminateProc(&this->WorkerHandle,true);
LAB_14e6674d0:
  bVar15 = FCommandQueue::Poll(&this->CommandIO,0.0);
  if (bVar15) {
    do {
      bVar15 = FCommandQueue::Poll(&this->CommandIO,0.0);
    } while (bVar15);
  }
  (this->CommandIO).NetworkInterface = (FNetworkNode *)0x0;
  FCommandQueue::GetNextCommand(&this->CommandIO,&local_138,0.0);
  this_00 = pFVar24;
  while (local_138.Object != (ICommand *)0x0) {
    ProcessCommand(this,local_138.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
    FCommandQueue::GetNextCommand(&this->CommandIO,&local_138,0.0);
    this_00 = local_res20;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  lpCriticalSection = &this->CurrentTasksLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar23 = (this->CurrentTasks).AllocatorInstance.Data;
  iVar20 = (this->CurrentTasks).ArrayNum;
  pFVar2 = pFVar23 + (longlong)iVar20 * 4;
  while( true ) {
    if ((this->CurrentTasks).ArrayNum != iVar20) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar23 == pFVar2) break;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.Data.ArrayNum = 0;
    local_120.Data.ArrayMax = 0;
    FInterchangeDispatcher::SetTaskState
              (this->Dispatcher,*(int *)pFVar23,ProcessFailed,&local_120,&local_f0);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)0x0,0);
    pFVar23 = pFVar23 + 4;
  }
  piVar1 = &(this->CurrentTasks).ArrayMax;
  (this->CurrentTasks).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CurrentTasks).AllocatorInstance,0,piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)local_d0);
  piVar1 = (int *)&(this_00->OnWorkerHandlerExitLoop).field_0x1c;
  *piVar1 = *piVar1 + 1;
  bVar15 = false;
  uVar22 = *(int *)&(this_00->OnWorkerHandlerExitLoop).field_0x10 - 1;
  pFVar24 = this_00;
  if (-1 < (int)uVar22) {
    lVar21 = (longlong)(int)uVar22 << 4;
    bVar15 = false;
    do {
      uVar18 = 0;
      if ((int)uVar22 < *(int *)&(this_00->OnWorkerHandlerExitLoop).field_0x10) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar2 = (((TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
                  *)&(this_00->OnWorkerHandlerExitLoop).field_0x8)->AllocatorInstance).Data;
      if (((*(int *)(pFVar2 + lVar21 + 8) == 0) ||
          (plVar5 = *(longlong **)(pFVar2 + lVar21), plVar5 == (longlong *)0x0)) ||
         (cVar17 = (**(code **)(*plVar5 + 0x68))(), cVar17 == '\0')) {
        bVar15 = true;
      }
      lVar21 = lVar21 + -0x10;
      uVar22 = uVar22 - 1;
      pFVar24 = local_res20;
    } while (-1 < (int)uVar22);
  }
  piVar1 = (int *)&(this_00->OnWorkerHandlerExitLoop).field_0x1c;
  *piVar1 = *piVar1 + -1;
  if (bVar15) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
  }
  if (local_d0[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0[0].Accessor,local_d0);
  }
  LOCK();
  pFVar24->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x8;
  UNLOCK();
  goto LAB_14e6673ec;
}

// StartWorkerProcess @ 14e668660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::StartWorkerProcess(FInterchangeWorkerHandler *this)

{
  FInterchangeDispatcher *pFVar1;
  FScriptContainerElement *pFVar2;
  FSocket *pFVar3;
  code *pcVar4;
  bool bVar5;
  EBuildConfiguration EVar6;
  int iVar7;
  DWORD DVar8;
  wchar_t *pwVar9;
  FString *pFVar10;
  FProcHandle FVar11;
  longlong lVar12;
  undefined1 uVar13;
  int iVar14;
  ForAnyElementType FVar15;
  int iVar16;
  uint local_res8 [2];
  wchar_t local_res10 [4];
  int in_stack_fffffffffffffe80;
  undefined4 in_stack_fffffffffffffe84;
  uint in_stack_fffffffffffffe94;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar16 = 0;
  local_res8[0] = 0;
  if ((this->ErrorState != Ok) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2171659220045266990>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeWorkerHandler.cpp"
                         ,0x2e,"ErrorState == EWorkerErrorState::Ok"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = this->Dispatcher;
  if ((pFVar1->WorkerApplicationPath).Data.ArrayNum < 2) {
    pwVar9 = (wchar_t *)(**(code **)(pFVar1->_padding_ + 0x18))(pFVar1);
    ::FString::FString(&local_e8,pwVar9);
    EVar6 = FApp::GetBuildConfiguration();
    FWindowsPlatformProcess::GenerateApplicationPath(&local_148,&local_e8,EVar6);
    bVar5 = FPaths::FileExists(&local_148);
    if (!bVar5) {
      pFVar10 = FWindowsPlatformProcess::GenerateApplicationPath(&local_58,&local_e8,Development);
      if (&local_148 != pFVar10) {
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        local_148.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        local_148.Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = FPaths::FileExists(&local_148);
    if ((!bVar5) && (3 < (byte)LogInterchangeDispatcher._0_1_)) {
      FPaths::ConvertRelativePathToFull(&local_48,&local_148);
      Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_InterchangeWork_152f146f0,
                 (FLogCategoryBase *)&LogInterchangeDispatcher);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    pFVar10 = &pFVar1->WorkerApplicationPath;
    if (pFVar10 != &local_148) {
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar10->Data).AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
      (pFVar1->WorkerApplicationPath).Data.ArrayNum = local_148.Data.ArrayNum;
      (pFVar1->WorkerApplicationPath).Data.ArrayMax = local_148.Data.ArrayMax;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = (pFVar1->WorkerApplicationPath).Data.ArrayNum;
  lVar12 = (longlong)iVar7;
  pFVar2 = (pFVar1->WorkerApplicationPath).Data.AllocatorInstance.Data;
  local_128.Data.ArrayNum = iVar7;
  if (iVar7 == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)&local_128,iVar7,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,pFVar2,lVar12 * 2);
    in_stack_fffffffffffffe80 = iVar7;
  }
  bVar5 = FPaths::FileExists(&local_128);
  if (bVar5) {
    pFVar3 = (this->NetworkInterface).ListeningSocket;
    if ((pFVar3 == (FSocket *)0x0) ||
       (iVar7 = (**(code **)(pFVar3->_padding_ + 0x120))(), iVar7 == 0)) {
      this->ErrorState = ConnectionFailed_NotBound;
      goto LAB_14e668b95;
    }
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    pwVar9 = FWindowsPlatformProcess::BaseDir();
    ::FString::FString(&local_68,pwVar9);
    ::FString::ConcatCF(&local_88,L" -basedir=\"",&local_68);
    ::FString::ConcatFC(&local_d8,&local_88,L"\"");
    iVar14 = local_d8.Data.ArrayNum + -1;
    if (local_d8.Data.ArrayNum == 0) {
      iVar14 = iVar16;
    }
    ::FString::AppendChars(&local_138,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar14);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    DVar8 = FWindowsPlatformProcess::GetCurrentProcessId();
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_118,DVar8);
    ::FString::ConcatCF(&local_c8,L" -ServerPID ",&local_118);
    iVar14 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar14 = iVar16;
    }
    ::FString::AppendChars(&local_138,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar14);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_108,iVar7);
    ::FString::ConcatCF(&local_b8,L" -ServerPort ",&local_108);
    iVar7 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iVar7 = iVar16;
    }
    ::FString::AppendChars(&local_138,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar7);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pFVar10 = DispatcherCommandVersion::ToString(&local_38);
    ::FString::ConcatCF((FString *)&local_a8,L" -InterchangeDispatcherVersion \"",pFVar10);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_f8,&local_a8,2 - (uint)(local_a8.ArrayNum != 0));
    ::FString::AppendChar((FString *)&local_f8,L'\"');
    iVar16 = local_f8.ArrayNum + -1;
    if (local_f8.ArrayNum == 0) {
      iVar16 = 0;
    }
    ::FString::AppendChars(&local_138,(wchar_t *)local_f8.AllocatorInstance.Data,iVar16);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatCF(&local_78,L" -ResultFolder \"",&this->ResultFolder);
    ::FString::ConcatFC(&local_98,&local_78,L"\"");
    iVar16 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    ::FString::AppendChars(&local_138,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar16);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (5 < (byte)LogInterchangeDispatcher._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
    }
    uVar13 = 0x6c;
    if (local_138.Data.ArrayNum != 0) {
      uVar13 = (char)local_138.Data.AllocatorInstance.Data;
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar15.Data = local_128.Data.AllocatorInstance.Data;
    }
    FVar11 = FWindowsPlatformProcess::CreateProc
                       (local_res10,(wchar_t *)FVar15.Data,(bool)uVar13,true,false,
                        (uint *)(CONCAT44(in_stack_fffffffffffffe84,in_stack_fffffffffffffe80) &
                                0xffffffffffffff00),(int)local_res8,
                        (wchar_t *)((ulonglong)in_stack_fffffffffffffe94 << 0x20),(void *)0x0,
                        (void *)0x0);
    this->WorkerHandle = *(FProcHandle *)FVar11;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if (((this->WorkerHandle == (FProcHandle)0x0) ||
      (bVar5 = FWindowsPlatformProcess::IsProcRunning(&this->WorkerHandle), !bVar5)) ||
     (bVar5 = FWindowsPlatformProcess::IsApplicationRunning(local_res8[0]), !bVar5)) {
    this->ErrorState = WorkerProcess_CantCreate;
  }
LAB_14e668b95:
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

// Stop @ 14e668bd0

void __thiscall UE::Interchange::FInterchangeWorkerHandler::Stop(FInterchangeWorkerHandler *this)

{
  this->bShouldTerminate = true;
  return;
}

// StopBlocking @ 14e668be0

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::StopBlocking(FInterchangeWorkerHandler *this)

{
  bool bVar1;
  
  this->bShouldTerminate = true;
  bVar1 = ::FThread::IsJoinable(&this->IOThread);
  if (bVar1) {
    ::FThread::Join(&this->IOThread);
    return;
  }
  return;
}

// ValidateConnection @ 14e66a850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Interchange::FInterchangeWorkerHandler::ValidateConnection(FInterchangeWorkerHandler *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  undefined8 uVar1;
  uint uVar2;
  FInterchangeDispatcher *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  ForAnyElementType _Src;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  double dVar13;
  uint uVar14;
  undefined4 uVar15;
  uint local_res8;
  undefined4 uStackX_c;
  uint local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  uint local_b8 [2];
  FScriptContainerElement *local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ICommand local_98;
  ForAnyElementType local_90;
  int local_88;
  int local_84 [17];
  
  if (((char)(this->NetworkInterface)._padding_ == '\0') &&
     (*(char *)((longlong)&(this->NetworkInterface)._padding_ + 1) == '\0')) {
    if ((this->WorkerHandle != (FProcHandle)0x0) &&
       (bVar8 = FWindowsPlatformProcess::IsProcRunning(&this->WorkerHandle), !bVar8)) {
      if (3 < (byte)LogInterchangeDispatcher._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
      }
      LOCK();
      this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x4;
      UNLOCK();
      this->ErrorState = WorkerProcess_Lost;
    }
  }
  else {
    if (3 < (byte)LogInterchangeDispatcher._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
    }
    LOCK();
    this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x4;
    UNLOCK();
    this->ErrorState = ConnectionLost;
  }
  QueryPerformanceCounter(&local_res18);
  dVar7 = __real_4014000000000000;
  dVar6 = __real_4170000000000000;
  dVar13 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if (__real_4014000000000000 < dVar13 - this->LastProgressMessageTime) {
    lpCriticalSection_00 = &this->CurrentTasksLock;
    this->LastProgressMessageTime = dVar13;
    if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    local_res10 = (this->CurrentTasks).ArrayNum;
    uVar10 = (ulonglong)(int)local_res10;
    local_a0._0_4_ = 0;
    pFVar11 = (this->CurrentTasks).AllocatorInstance.Data;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_b0 = pFVar11 + uVar10 * 4;
    local_a0 = 0;
    uVar14 = local_res8;
    uVar15 = uStackX_c;
    uVar12 = local_res8;
    while( true ) {
      pFVar4 = local_b0;
      iVar9 = (int)local_a0;
      if ((this->CurrentTasks).ArrayNum != (int)uVar10) {
        local_res8 = local_res8 & 0xffffff00;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8);
        iVar9 = (int)local_a0;
      }
      _Src.Data = local_a8.Data;
      if (pFVar11 == pFVar4) break;
      pFVar3 = this->Dispatcher;
      uVar2 = *(uint *)pFVar11;
      lpCriticalSection = &pFVar3->TaskPoolCriticalSection;
      local_b8[0] = uVar2;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (((int)uVar2 < 0) || ((pFVar3->TaskPool).ArrayNum <= (int)uVar2)) {
        bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2789720497296768891>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcher.cpp"
                           ,0x85,"TaskPool.IsValidIndex(TaskIndex)");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar12 = 0;
        if ((int)uVar2 < (pFVar3->TaskPool).ArrayNum) {
          uVar12 = ~uVar2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pFVar3->TaskPool).AllocatorInstance.Data;
        uVar12 = *(uint *)(pFVar4 + (longlong)(int)uVar2 * 0x58 + 0x14);
        uVar1 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar2 * 0x58 + 0x50);
        uVar14 = (uint)uVar1;
        uVar15 = (undefined4)((ulonglong)uVar1 >> 0x20);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((uVar12 == 1) &&
         (QueryPerformanceCounter(&local_res20),
         dVar7 < ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6) -
                 (double)CONCAT44(uVar15,uVar14))) {
        if ((local_a8.Data <= (FScriptContainerElement *)local_b8) &&
           (((FScriptContainerElement *)local_b8 < local_a8.Data + (longlong)local_a0._4_4_ * 4 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (int)local_a0;
        if ((int)local_a0 == local_a0._4_4_) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_a8,(int *)((longlong)&local_a0 + 4));
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar9 + 1);
        *(uint *)(local_a8.Data + (longlong)iVar9 * 4) = local_b8[0];
      }
      pFVar11 = pFVar11 + 4;
      uVar10 = (ulonglong)local_res10;
    }
    local_98 = (ICommand)&___7FQueryTaskProgressCommand_Interchange_UE__6B_;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_84[0] = 0;
    local_88 = iVar9;
    if (iVar9 != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar9,0,&local_90,iVar9,local_84);
      memcpy(local_90.Data,_Src.Data,(longlong)iVar9 << 2);
    }
    bVar8 = FCommandQueue::SendCommand(&this->CommandIO,&local_98,__real_3ff0000000000000);
    if (bVar8) {
      if (5 < (byte)LogInterchangeDispatcher._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
      }
    }
    else {
      LOCK();
      this->WorkerState = (TAtomic<UE::Interchange::EWorkerState>)0x4;
      UNLOCK();
      this->ErrorState = ConnectionLost_SendFailed;
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  return;
}

// operator() @ 1505982e0

bool __thiscall
`UE::Interchange::FInterchangeWorkerHandler::RunInternal'::__l104::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2171659220045267283>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2171659220045267283>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

