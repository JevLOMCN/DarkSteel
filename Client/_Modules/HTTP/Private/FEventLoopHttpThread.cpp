// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 15

// FEventLoopHttpThread @ 14314cdc0

FEventLoopHttpThread * __thiscall
FEventLoopHttpThread::FEventLoopHttpThread(FEventLoopHttpThread *this)

{
  uint *puVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  FUserAgentImpl *this_00;
  FString *pFVar4;
  FString local_28;
  FString local_18;
  
  FHttpThreadBase::FHttpThreadBase((FHttpThreadBase *)this);
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  (this->RequestTickTimer).ID = 0;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  ::FString::FString(&local_28,L"http-eventloop");
  this_00 = FUserAgentImpl::Get();
  AcquireSRWLockExclusive((PSRWLOCK)this_00);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
            (&(this_00->Builder).ProjectComments,&local_28);
  puVar1 = &(this_00->Builder).AgentVersion;
  *puVar1 = *puVar1 + 1;
  pFVar4 = FUserAgentImpl::BuildUserAgentString(this_00,&local_18);
  pFVar2 = &this_00->CachedUserAgent;
  if (pFVar2 != pFVar4) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->CachedUserAgent).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this_00->CachedUserAgent).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this_00);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FEventLoopHttpThread @ 143150380

void __thiscall FEventLoopHttpThread::~FEventLoopHttpThread(FEventLoopHttpThread *this)

{
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  FHttpThreadBase::~FHttpThreadBase((FHttpThreadBase *)this);
  return;
}

// AddHttpThreadTask @ 143154380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<IHttpTaskTimerHandle,1> * __thiscall
FEventLoopHttpThread::AddHttpThreadTask
          (FEventLoopHttpThread *this,TSharedPtr<IHttpTaskTimerHandle,1> *__return_storage_ptr__,
          TFunction<void___cdecl(void)> *param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<IHttpTaskTimerHandle,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88;
  longlong local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0xb0))();
  local_88 = 0;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_50 = (longlong *)0x0;
  pcVar1 = *(code **)(*plVar4 + 0x18);
  local_78[0] = *(longlong *)param_1;
  auVar9._0_8_ = (double)(param_2 * __real_4b189680 + __real_3f000000);
  auVar9._8_8_ = 0;
  auVar9 = roundpd(auVar9,auVar9,1);
  if (local_78[0] != 0) {
    puVar5 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar5)(auVar9._0_8_,local_68);
  }
  local_a0 = local_90;
  local_a8 = 0;
  puVar5 = (undefined8 *)(*pcVar1)(plVar4,local_98,local_78,(longlong)auVar9._0_8_);
  pTVar6 = ::operator_new(0x20);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IHttpTaskTimerHandle *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFHttpTaskTimerHandleEventLoop___00_SharedPointerInternals__6B_
    ;
    uVar2 = *puVar5;
    pTVar6[1].SharedReferenceCount = (atomic<int>)(int)uVar2;
    pTVar6[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar2 >> 0x20);
    pTVar6[1]._padding_ = (longlong)&___7FHttpTaskTimerHandleEventLoop__6B_;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TSharedPtr<IHttpTaskTimerHandle,1> *)(*pcVar1)();
        return pTVar7;
      }
    }
    __return_storage_ptr__->Object = (IHttpTaskTimerHandle *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (local_78[0] != 0) {
    plVar4 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar4 = local_50;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AddRequest @ 143154920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FEventLoopHttpThread::AddRequest(FEventLoopHttpThread *this,FHttpRequestCommon *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FEventLoopHttpThread *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  puVar2 = FMemory::Malloc(0x10,8);
  *puVar2 = 0;
  puVar2[1] = param_1;
  LOCK();
  puVar1 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0xa8))(this);
  if (plVar3 != (longlong *)0x0) {
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FEventLoopHttpThread::AddRequest'::`5'::<lambda_1>,1,0>::
                _vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FEventLoopHttpThread::AddRequest'::__l5::<lambda_1>,void>::
                  Call;
    local_30 = this;
    (**(code **)(*plVar3 + 0x28))(plVar3,local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar4 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar4 = local_20;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// CancelRequest @ 143157170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FEventLoopHttpThread::CancelRequest(FEventLoopHttpThread *this,FHttpRequestCommon *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FEventLoopHttpThread *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  puVar2 = FMemory::Malloc(0x10,8);
  *puVar2 = 0;
  puVar2[1] = param_1;
  LOCK();
  puVar1 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0xa8))(this);
  if (plVar3 != (longlong *)0x0) {
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FEventLoopHttpThread::CancelRequest'::`5'::<lambda_1>,1,0>::
                _vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FEventLoopHttpThread::CancelRequest'::__l5::<lambda_1>,void>::
                  Call;
    local_30 = this;
    (**(code **)(*plVar3 + 0x28))(plVar3,local_48);
    if (local_48[0] != (code *)0x0) {
      pppuVar4 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar4 = local_20;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// GetCompletedRequests @ 1431618d0

void __thiscall
FEventLoopHttpThread::GetCompletedRequests
          (FEventLoopHttpThread *this,
          TArray<FHttpRequestCommon_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 auStack_18 [2];
  
  do {
    lVar1 = *(longlong *)this->_padding_;
    if (lVar1 == 0) {
      return;
    }
    auStack_18[0] = *(undefined8 *)(lVar1 + 8);
    this->_padding_ = lVar1;
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + -1;
    UNLOCK();
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)auStack_18) &&
       ((FScriptContainerElement *)auStack_18 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
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
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar5;
    }
    param_1->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = auStack_18[0];
  } while( true );
}

// Init @ 14316ae80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FEventLoopHttpThread::Init(FEventLoopHttpThread *this)

{
  char cVar1;
  longlong *plVar2;
  LARGE_INTEGER local_res8 [4];
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0xb0))();
  cVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (cVar1 == '\0') {
    if (1 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    return false;
  }
  QueryPerformanceCounter(local_res8);
  this->_padding_ =
       (longlong)
       ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000);
  (**(code **)(this->_padding_ + 0x58))(this);
  return true;
}

// RemoveTimerHandle @ 143178730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FEventLoopHttpThread::RemoveTimerHandle
          (FEventLoopHttpThread *this,TResourceHandle<UE::EventLoop::FTimerHandleTraits> param_1)

{
  longlong *plVar1;
  ulong64 local_res10 [3];
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_res10[0] = param_1.ID;
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0xb0))();
  local_48[0] = 0;
  local_20 = (longlong *)0x0;
  (**(code **)(*plVar1 + 0x20))(plVar1,local_res10,local_48);
  if (local_48[0] != 0) {
    plVar1 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// RemoveTimerHandle @ 1431787b0

void __thiscall
FEventLoopHttpThread::RemoveTimerHandle
          (FEventLoopHttpThread *this,TWeakPtr<FTSTicker::FElement,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\EventLoopHttpThread.cpp"
                     ,0xbe,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000143178804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ResetTickTimer @ 143179860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FEventLoopHttpThread::ResetTickTimer(FEventLoopHttpThread *this)

{
  code *pcVar1;
  longlong *plVar2;
  FHttpModule *pFVar3;
  ulong64 *puVar4;
  undefined ***pppuVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58;
  code *local_48 [2];
  undefined **local_38;
  FEventLoopHttpThread *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0xb0))();
  local_48[0] = (code *)0x0;
  local_20 = (undefined ***)0x0;
  (**(code **)(*plVar2 + 0x20))(plVar2,&this->RequestTickTimer,local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar5 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar5 = local_20;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  local_58 = 0;
  pcVar1 = *(code **)(*plVar2 + 0x18);
  pFVar3 = FHttpModule::Get();
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FEventLoopHttpThread::ResetTickTimer'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FEventLoopHttpThread::ResetTickTimer'::__l2::<lambda_1>,void>::
                Call;
  local_70 = local_60;
  local_20 = (undefined ***)0x0;
  local_78 = 1;
  auVar6._0_8_ = (double)(pFVar3->HttpEventLoopThreadTickIntervalInSeconds * __real_4b189680 +
                         __real_3f000000);
  auVar6._8_8_ = 0;
  auVar6 = roundpd(auVar6,auVar6,1);
  local_30 = this;
  puVar4 = (ulong64 *)(*pcVar1)(plVar2,local_68,local_48,(longlong)auVar6._0_8_);
  (this->RequestTickTimer).ID = *puVar4;
  if (local_48[0] != (code *)0x0) {
    pppuVar5 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar5 = local_20;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Run @ 14317a9c0

uint __thiscall FEventLoopHttpThread::Run(FEventLoopHttpThread *this)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0xb0))();
  (**(code **)(*plVar1 + 0x30))(plVar1);
  return 0;
}

// StartThread @ 143183bf0

void __thiscall FEventLoopHttpThread::StartThread(FEventLoopHttpThread *this)

{
  (**(code **)(this->_padding_ + 0x90))();
  ResetTickTimer(this);
  FHttpThreadBase::StartThread((FHttpThreadBase *)this);
  return;
}

// StopThread @ 1431859a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143185a9b) */
/* WARNING: Removing unreachable block (ram,0x000143185aa6) */
/* WARNING: Removing unreachable block (ram,0x000143185abd) */
/* WARNING: Removing unreachable block (ram,0x000143185ae2) */

void __thiscall FEventLoopHttpThread::StopThread(FEventLoopHttpThread *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  FManualResetEvent FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  TAtomic<unsigned_int> TVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStackY_698 [32];
  undefined7 in_stack_fffffffffffff989;
  LARGE_INTEGER local_660;
  LARGE_INTEGER local_658;
  undefined1 local_650 [24];
  undefined1 local_638;
  undefined1 local_628;
  code *local_618 [2];
  undefined **local_608;
  TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *local_600;
  undefined ***local_5f0;
  code *local_5e8 [2];
  undefined **local_5d8;
  double local_5d0;
  undefined ***local_5c0;
  code *local_5b8 [2];
  undefined **local_5a8;
  longlong *local_5a0;
  undefined ***local_590;
  TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> local_588;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_698;
  plVar11 = (longlong *)(**(code **)(this->_padding_ + 0xa8))();
  if (plVar11 != (longlong *)0x0) {
    local_588._padding_ =
         (longlong)
         &
         ___7__TEventLoop_VFIOManagerNull_EventLoop_UE__UFEventLoopDefaultTraits_23__EventLoop_UE__6B_
    ;
    local_588.IOManager._padding_ = (longlong)&___7FIOManagerNull_EventLoop_UE__6B_;
    local_588._padding_ = 0;
    local_588._padding_ = 0;
    local_588.IOManager.Event.State = (atomic<unsigned_char>)0x0;
    memset(&local_588.TimerManager,0,0x4e0);
    UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::
    TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>(&local_588.TimerManager);
    local_588.AsyncTasks.Head =
         (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
    local_588.AsyncTasks.Head =
         (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
         FMemory::Malloc(0x40,0x10);
    *(undefined8 *)local_588.AsyncTasks.Head = 0;
    LOCK();
    UNLOCK();
    local_588.ShutdownMutex.State = (atomic<unsigned_char>)0x0;
    local_588.EventLoopThreadId = (TAtomic<unsigned_int>)0x0;
    local_588.bShutdownRequested = (TAtomic<bool>)0x0;
    local_588.bShutdownCompleted = (TAtomic<bool>)0x0;
    local_588.bNotifyOnInit = (TAtomic<bool>)0x0;
    local_588.InitMutex.State = (atomic<unsigned_char>)0x1;
    local_588.LoopTime.Ticks = 0;
    local_588.ShutdownRequests.ArrayNum = 0;
    local_588.ShutdownRequests.ArrayMax = 0;
    local_588.ShutdownRequests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_588.AsyncTasks.Tail = (FNode *)local_588.AsyncTasks.Head;
    QueryPerformanceCounter(&local_660);
    dVar5 = __real_4170000000000000;
    local_588.LoopTime.Ticks =
         (long64)(((double)local_660.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                  __real_4170000000000000) * __real_416312d000000000);
    if ((local_588.TimerManager.Storage.ManagerThreadId != (TAtomic<unsigned_int>)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ManagerThreadId == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopManagedStorage.h"
                           ,0x26,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_588.TimerManager.Storage.ManagerThreadId = (TAtomic<unsigned_int>)GetCurrentThreadId();
    LOCK();
    UNLOCK();
    TVar10 = (TAtomic<unsigned_int>)GetCurrentThreadId();
    uVar7 = local_588._1328_8_;
    LOCK();
    local_588.EventLoopThreadId = TVar10;
    uVar8 = local_588._1328_8_;
    UNLOCK();
    LOCK();
    local_588.InitMutex.State = SUB81(uVar7,7);
    local_588._1328_7_ = SUB87(uVar8,0);
    local_588.InitMutex.State = (atomic<unsigned_char>)((char)local_588.InitMutex.State + -1);
    UNLOCK();
    if ((uVar7 & 0x200000000000000) != 0) {
      UE::FMutex::WakeWaitingThread(&local_588.InitMutex);
    }
    FVar6.State = local_588.IOManager.Event.State;
    if (local_588.bNotifyOnInit != (TAtomic<bool>)0x0) {
      LOCK();
      local_588.IOManager.Event.State = (atomic<unsigned_char>)0x1;
      UNLOCK();
      if (((byte)FVar6.State & 3) == 2) {
        UE::ParkingLot::WakeAll(&local_588.IOManager.Event);
      }
    }
    local_5f0 = (undefined ***)0x0;
    local_608 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::`5'::<lambda_1>,1,0>::
                 _vftable_;
    local_600 = &local_588;
    local_618[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FEventLoopHttpThread::StopThread'::__l5::<lambda_1>,void>::
                   Call;
    (**(code **)(*plVar11 + 0x10))(plVar11,local_618);
    if (local_618[0] != (code *)0x0) {
      pppuVar12 = &local_608;
      if (local_5f0 != (undefined ***)0x0) {
        pppuVar12 = local_5f0;
      }
      (*(code *)(*pppuVar12)[2])();
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = __real_4197d78402000000;
    auVar13 = roundpd(auVar13,auVar13,1);
    QueryPerformanceCounter(&local_658);
    local_5c0 = (undefined ***)0x0;
    local_638 = 0;
    local_5d8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::`5'::<lambda_2>,1,0>::
                 _vftable_;
    local_5e8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FEventLoopHttpThread::StopThread'::__l5::<lambda_2>,void>::
                   Call;
    local_5d0 = (double)local_658.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
    UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::SetTimer
              (&local_588.TimerManager,(TUniqueFunction<void___cdecl(void)> *)local_650,
               (FTimespan)local_5e8,SUB81((longlong)auVar13._0_8_,0),
               (TOptional<FTimespan> *)CONCAT71(in_stack_fffffffffffff989,1));
    FVar6.State = local_588.IOManager.Event.State;
    if (local_588.EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
      LOCK();
      bVar9 = local_588.InitMutex.State == (atomic<unsigned_char>)0x0;
      if (bVar9) {
        local_588.InitMutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar9) {
        UE::FMutex::LockSlow(&local_588.InitMutex);
      }
      FVar6.State = local_588.IOManager.Event.State;
      if (local_588.EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
        LOCK();
        local_588.bNotifyOnInit = (TAtomic<bool>)0x1;
        UNLOCK();
      }
      else {
        LOCK();
        local_588.IOManager.Event.State = (atomic<unsigned_char>)0x1;
        UNLOCK();
        if (((byte)FVar6.State & 3) == 2) {
          UE::ParkingLot::WakeAll(&local_588.IOManager.Event);
        }
      }
      uVar7 = local_588._1328_8_;
      LOCK();
      local_588.InitMutex.State = (atomic<unsigned_char>)((char)local_588.InitMutex.State + -1);
      UNLOCK();
      if ((uVar7 & 0x200000000000000) != 0) {
        UE::FMutex::WakeWaitingThread(&local_588.InitMutex);
      }
    }
    else {
      LOCK();
      local_588.IOManager.Event.State = (atomic<unsigned_char>)0x1;
      UNLOCK();
      if (((byte)FVar6.State & 3) == 2) {
        UE::ParkingLot::WakeAll(&local_588.IOManager.Event);
      }
    }
    if (local_5e8[0] != (code *)0x0) {
      pppuVar12 = &local_5d8;
      if (local_5c0 != (undefined ***)0x0) {
        pppuVar12 = local_5c0;
      }
      (*(code *)(*pppuVar12)[2])();
    }
    if ((char)this->_padding_ != '\0') {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = __real_40c3884000000000;
      local_5a8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::`15'::<lambda_3>,1,0>::
                   _vftable_;
      auVar13 = roundpd(auVar14,auVar14,1);
      local_590 = (undefined ***)0x0;
      local_5b8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FEventLoopHttpThread::StopThread'::__l15::<lambda_3>,void>
                     ::Call;
      local_628 = 0;
      local_5a0 = plVar11;
      UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::SetTimer
                (&local_588.TimerManager,(TUniqueFunction<void___cdecl(void)> *)(local_650 + 8),
                 (FTimespan)local_5b8,SUB81((longlong)auVar13._0_8_,0),
                 (TOptional<FTimespan> *)CONCAT71(in_stack_fffffffffffff989,1));
      FVar6.State = local_588.IOManager.Event.State;
      if (local_588.EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
        LOCK();
        bVar9 = local_588.InitMutex.State == (atomic<unsigned_char>)0x0;
        if (bVar9) {
          local_588.InitMutex.State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar9) {
          UE::FMutex::LockSlow(&local_588.InitMutex);
        }
        FVar6.State = local_588.IOManager.Event.State;
        if (local_588.EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
          LOCK();
          local_588.bNotifyOnInit = (TAtomic<bool>)0x1;
          UNLOCK();
        }
        else {
          LOCK();
          local_588.IOManager.Event.State = (atomic<unsigned_char>)0x1;
          UNLOCK();
          if (((byte)FVar6.State & 3) == 2) {
            UE::ParkingLot::WakeAll(&local_588.IOManager.Event);
          }
        }
        uVar7 = local_588._1328_8_;
        LOCK();
        local_588.InitMutex.State = (atomic<unsigned_char>)((char)local_588.InitMutex.State + -1);
        UNLOCK();
        if ((uVar7 & 0x200000000000000) != 0) {
          UE::FMutex::WakeWaitingThread(&local_588.InitMutex);
        }
      }
      else {
        LOCK();
        local_588.IOManager.Event.State = (atomic<unsigned_char>)0x1;
        UNLOCK();
        if (((byte)FVar6.State & 3) == 2) {
          UE::ParkingLot::WakeAll(&local_588.IOManager.Event);
        }
      }
      if (local_5b8[0] != (code *)0x0) {
        pppuVar12 = &local_5a8;
        if (local_590 != (undefined ***)0x0) {
          pppuVar12 = local_590;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
    UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>
    ::Run(&local_588);
    local_588._padding_ =
         (longlong)
         &
         ___7__TEventLoop_VFIOManagerNull_EventLoop_UE__UFEventLoopDefaultTraits_23__EventLoop_UE__6B_
    ;
    DestructItems<TUniqueFunction<void___cdecl(void)>,int>
              ((TUniqueFunction<void___cdecl(void)> *)
               local_588.ShutdownRequests.AllocatorInstance.Data,local_588.ShutdownRequests.ArrayNum
              );
    if ((TUniqueFunction<void___cdecl(void)> *)local_588.ShutdownRequests.AllocatorInstance.Data !=
        (TUniqueFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_588.ShutdownRequests.AllocatorInstance.Data);
    }
    TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
    ~TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>(&local_588.AsyncTasks);
    UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::
    ~TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>(&local_588.TimerManager);
    if ((longlong *)local_588._padding_ != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)(local_588._padding_ + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)local_588._padding_ + 8))(local_588._padding_,1);
      }
    }
  }
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = (longlong *)this->_padding_;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,1);
    }
    this->_padding_ = 0;
  }
  *(undefined2 *)&this->_padding_ = 0x101;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(this->_padding_ + 0x98))(this);
  }
  return;
}

// Tick @ 143187920

void __thiscall FEventLoopHttpThread::Tick(FEventLoopHttpThread *this)

{
  double dVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  double dVar6;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  uVar2 = this[-1].RequestTickTimer.ID;
  dVar6 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar1 = (double)this->_padding_;
  this->_padding_ = (longlong)dVar6;
  (**(code **)(uVar2 + 0x78))(&this[-1].RequestTickTimer,(float)(dVar6 - dVar1));
  if ((char)this->_padding_ == '\0') {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2210108694991994737>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\EventLoopHttpThread.cpp"
                       ,0x8f,"NeedsSingleThreadTick()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    plVar5 = (longlong *)
             (**(code **)(this[-1].RequestTickTimer.ID + 0xb0))(&this[-1].RequestTickTimer);
    (**(code **)(*plVar5 + 0x38))(plVar5,0);
  }
  return;
}

// UpdateConfigs @ 14318a5f0

void __thiscall FEventLoopHttpThread::UpdateConfigs(FEventLoopHttpThread *this)

{
  ResetTickTimer(this);
                    /* WARNING: Could not recover jumptable at 0x00014318a609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa0))(this);
  return;
}

