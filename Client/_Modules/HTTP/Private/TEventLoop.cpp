// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 30

// ~TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> @ 14314f1f0

void __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::
~TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>
          (TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(undefined ***)this =
       &
       ___7__TEventLoop_VFCurlMultiPollIOManager__UFEventLoopDefaultTraits_EventLoop_UE___EventLoop_UE__6B_
  ;
  DestructItems<TUniqueFunction<void___cdecl(void)>,int>
            ((TUniqueFunction<void___cdecl(void)> *)(this->ShutdownRequests).AllocatorInstance.Data,
             (this->ShutdownRequests).ArrayNum);
  pFVar3 = (this->ShutdownRequests).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  ~TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>(&this->AsyncTasks);
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::
  ~TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>(&this->TimerManager);
  if (*(longlong *)&(this->IOManager).Params.ProcessCurlRequests != 0) {
    plVar4 = *(longlong **)&(this->IOManager).Params.ProcessCurlRequests.field_0x28;
    plVar5 = (longlong *)&(this->IOManager).Params.ProcessCurlRequests.field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  plVar4 = *(longlong **)&this->field_0x10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014314f27f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// ~TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits> @ 14314f290

void __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
~TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
          (TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
           *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TEventLoop_VFIOManagerBSDSocketSelect_EventLoop_UE__UFEventLoopDefaultTraits_23__EventLoop_UE__6B_
  ;
  DestructItems<TUniqueFunction<void___cdecl(void)>,int>
            ((TUniqueFunction<void___cdecl(void)> *)(this->ShutdownRequests).AllocatorInstance.Data,
             (this->ShutdownRequests).ArrayNum);
  pFVar3 = (this->ShutdownRequests).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  ~TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>(&this->AsyncTasks);
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::
  ~TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>(&this->TimerManager);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->IOManager).Impl.SharedReferenceCount.ReferenceController);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014314f309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// ~TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> @ 14314f320

void __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
~TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>
          (TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TEventLoop_VFIOManagerNull_EventLoop_UE__UFEventLoopDefaultTraits_23__EventLoop_UE__6B_
  ;
  DestructItems<TUniqueFunction<void___cdecl(void)>,int>
            ((TUniqueFunction<void___cdecl(void)> *)(this->ShutdownRequests).AllocatorInstance.Data,
             (this->ShutdownRequests).ArrayNum);
  pFVar3 = (this->ShutdownRequests).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  ~TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>(&this->AsyncTasks);
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::
  ~TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>(&this->TimerManager);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014314f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// ClearTimer @ 143158470

void __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::
ClearTimer(TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this,
          TResourceHandle<UE::EventLoop::FTimerHandleTraits> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::ClearTimer
            (&this->TimerManager,param_1,param_2);
  TryNotify(this);
  return;
}

// ClearTimer @ 1431584a0

void __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
ClearTimer(TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
           *this,TResourceHandle<UE::EventLoop::FTimerHandleTraits> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::ClearTimer
            (&this->TimerManager,param_1,param_2);
  TryNotify(this);
  return;
}

// ClearTimer @ 1431584d0

void __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
ClearTimer(TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *this,
          TResourceHandle<UE::EventLoop::FTimerHandleTraits> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::ClearTimer
            (&this->TimerManager,param_1,param_2);
  TryNotify(this);
  return;
}

// GetLoopTime @ 143162f40

FTimespan __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::
GetLoopTime(TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this)

{
  code *pcVar1;
  bool bVar2;
  FTimespan FVar3;
  long64 *in_RDX;
  
  if (this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized(EventLoopThreadId)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Ticks = (*pcVar1)();
      return (FTimespan)FVar3.Ticks;
    }
  }
  *in_RDX = (this->LoopTime).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetLoopTime @ 143162fa0

FTimespan __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
GetLoopTime(TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
            *this)

{
  code *pcVar1;
  bool bVar2;
  FTimespan FVar3;
  long64 *in_RDX;
  
  if (this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized(EventLoopThreadId)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Ticks = (*pcVar1)();
      return (FTimespan)FVar3.Ticks;
    }
  }
  *in_RDX = (this->LoopTime).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetLoopTime @ 143163000

FTimespan __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
GetLoopTime(TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *this)

{
  code *pcVar1;
  bool bVar2;
  FTimespan FVar3;
  long64 *in_RDX;
  
  if (this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized(EventLoopThreadId)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Ticks = (*pcVar1)();
      return (FTimespan)FVar3.Ticks;
    }
  }
  *in_RDX = (this->LoopTime).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// Init @ 14316aa40

bool __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::Init
          (TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  undefined1 uVar3;
  TAtomic<unsigned_int> TVar4;
  int iVar5;
  bool bVar6;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->InitMutex;
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(this_00);
  }
  if ((this->EventLoopThreadId != (TAtomic<unsigned_int>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInitialized(EventLoopThreadId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                         ,0x32,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  QueryPerformanceCounter(&local_res8);
  (this->LoopTime).Ticks =
       (longlong)
       (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) * __real_416312d000000000);
  if (((this->TimerManager).Storage.ManagerThreadId != (TAtomic<unsigned_int>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ManagerThreadId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopManagedStorage.h"
                         ,0x26,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  TVar4 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  (this->TimerManager).Storage.ManagerThreadId = TVar4;
  UNLOCK();
  if ((*(longlong *)&(this->IOManager).Params.ProcessCurlRequests == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.ProcessCurlRequests",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                         ,0x1c,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  TVar4 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->EventLoopThreadId = TVar4;
  UNLOCK();
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if ((this->bNotifyOnInit != (TAtomic<bool>)0x0) &&
     (iVar5 = curl_multi_wakeup((this->IOManager).Params.MultiHandle), iVar5 != 0)) {
    curl_multi_strerror(iVar5);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Code == CURLM_OK",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                       ,0x40,L"Error in curl_multi operation: %hs");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
  }
  return true;
}

// Init @ 14316abc0

bool __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::Init
          (TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
           *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  undefined1 uVar3;
  TAtomic<unsigned_int> TVar4;
  bool bVar5;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->InitMutex;
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    FMutex::LockSlow(this_00);
  }
  if ((this->EventLoopThreadId != (TAtomic<unsigned_int>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInitialized(EventLoopThreadId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                         ,0x32,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  QueryPerformanceCounter(&local_res8);
  (this->LoopTime).Ticks =
       (longlong)
       (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) * __real_416312d000000000);
  if (((this->TimerManager).Storage.ManagerThreadId != (TAtomic<unsigned_int>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ManagerThreadId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopManagedStorage.h"
                         ,0x26,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  TVar4 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  (this->TimerManager).Storage.ManagerThreadId = TVar4;
  UNLOCK();
  bVar5 = FIOManagerBSDSocketSelect::Init(&this->IOManager);
  TVar4 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->EventLoopThreadId = TVar4;
  UNLOCK();
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (this->bNotifyOnInit != (TAtomic<bool>)0x0) {
    FIOManagerBSDSocketSelect::Notify(&this->IOManager);
  }
  return bVar5;
}

// Init @ 14316ad00

bool __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
Init(TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *this)

{
  FManualResetEvent *pFVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  code *pcVar3;
  undefined1 uVar4;
  TAtomic<unsigned_int> TVar5;
  bool bVar6;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->InitMutex;
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(this_00);
  }
  if ((this->EventLoopThreadId != (TAtomic<unsigned_int>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInitialized(EventLoopThreadId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                         ,0x32,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
  QueryPerformanceCounter(&local_res8);
  (this->LoopTime).Ticks =
       (longlong)
       (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) * __real_416312d000000000);
  if (((this->TimerManager).Storage.ManagerThreadId != (TAtomic<unsigned_int>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ManagerThreadId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoopManagedStorage.h"
                         ,0x26,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
  TVar5 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  (this->TimerManager).Storage.ManagerThreadId = TVar5;
  UNLOCK();
  TVar5 = (TAtomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->EventLoopThreadId = TVar5;
  UNLOCK();
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (this->bNotifyOnInit != (TAtomic<bool>)0x0) {
    LOCK();
    pFVar1 = &(this->IOManager).Event;
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)0x1;
    UNLOCK();
    if (((byte)aVar2 & 3) == 2) {
      ParkingLot::WakeAll(&(this->IOManager).Event);
    }
  }
  return true;
}

// PostAsyncTask @ 143172ba0

void __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::
PostAsyncTask(TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this,
             TUniqueFunction<void___cdecl(void)> *param_1)

{
  TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  Enqueue<TUniqueFunction<void___cdecl(void)>_>(&this->AsyncTasks,param_1);
  TryNotify(this);
  return;
}

// PostAsyncTask @ 143172bd0

void __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
PostAsyncTask(TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
              *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  Enqueue<TUniqueFunction<void___cdecl(void)>_>(&this->AsyncTasks,param_1);
  TryNotify(this);
  return;
}

// PostAsyncTask @ 143172c00

void __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
PostAsyncTask(TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *this
             ,TUniqueFunction<void___cdecl(void)> *param_1)

{
  TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  Enqueue<TUniqueFunction<void___cdecl(void)>_>(&this->AsyncTasks,param_1);
  TryNotify(this);
  return;
}

// RequestShutdown @ 143178e70

void __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::
RequestShutdown(TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this,
               TUniqueFunction<void___cdecl(void)> *param_1)

{
  int *piVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  TUniqueFunction<void___cdecl(void)> *pTVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  
  bVar6 = false;
  this_00 = &this->ShutdownMutex;
  LOCK();
  bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(this_00);
  }
  LOCK();
  bVar12 = this->bShutdownRequested == (TAtomic<bool>)0x0;
  if (bVar12) {
    this->bShutdownRequested = (TAtomic<bool>)0x1;
  }
  UNLOCK();
  if (bVar12) {
    pTVar11 = &this->ShutdownRequests;
    pTVar3 = (TUniqueFunction<void___cdecl(void)> *)(pTVar11->AllocatorInstance).Data;
    if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->ShutdownRequests).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->ShutdownRequests).ArrayNum;
    piVar1 = &(this->ShutdownRequests).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar11->AllocatorInstance,piVar1);
    }
    (this->ShutdownRequests).ArrayNum = iVar7 + 1;
    pFVar10 = (pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
    *(longlong *)pFVar10 = *(longlong *)param_1;
    *(longlong *)(pFVar10 + 0x28) = *(longlong *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    lVar5 = *(longlong *)&param_1->field_0x18;
    *(longlong *)(pFVar10 + 0x10) = *(longlong *)&param_1->field_0x10;
    *(longlong *)(pFVar10 + 0x18) = lVar5;
    *(longlong *)(pFVar10 + 0x20) = *(longlong *)&param_1->field_0x20;
    if (*(longlong *)pFVar10 != 0) {
      *(undefined8 *)param_1 = 0;
    }
    TryNotify(this);
    bVar6 = false;
  }
  else if (this->bShutdownCompleted == (TAtomic<bool>)0x0) {
    pTVar11 = &this->ShutdownRequests;
    pTVar3 = (TUniqueFunction<void___cdecl(void)> *)(pTVar11->AllocatorInstance).Data;
    if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->ShutdownRequests).ArrayMax)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->ShutdownRequests).ArrayNum;
    piVar1 = &(this->ShutdownRequests).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar11->AllocatorInstance,piVar1);
    }
    (this->ShutdownRequests).ArrayNum = iVar7 + 1;
    pFVar10 = (pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
    *(longlong *)pFVar10 = *(longlong *)param_1;
    *(longlong *)(pFVar10 + 0x28) = *(longlong *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    lVar5 = *(longlong *)&param_1->field_0x18;
    *(longlong *)(pFVar10 + 0x10) = *(longlong *)&param_1->field_0x10;
    *(longlong *)(pFVar10 + 0x18) = lVar5;
    *(longlong *)(pFVar10 + 0x20) = *(longlong *)&param_1->field_0x20;
    if (*(longlong *)pFVar10 != 0) {
      *(undefined8 *)param_1 = 0;
    }
  }
  else {
    bVar6 = true;
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if ((bVar6) && (*(void **)param_1 != (void *)0x0)) {
    Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar4 = *(code **)param_1;
    plVar9 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_1->field_0x28;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar4)(uVar8);
  }
  return;
}

// RequestShutdown @ 1431790d0

void __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
RequestShutdown(TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
                *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  int *piVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  TUniqueFunction<void___cdecl(void)> *pTVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  
  bVar6 = false;
  this_00 = &this->ShutdownMutex;
  LOCK();
  bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(this_00);
  }
  LOCK();
  bVar12 = this->bShutdownRequested == (TAtomic<bool>)0x0;
  if (bVar12) {
    this->bShutdownRequested = (TAtomic<bool>)0x1;
  }
  UNLOCK();
  if (bVar12) {
    pTVar11 = &this->ShutdownRequests;
    pTVar3 = (TUniqueFunction<void___cdecl(void)> *)(pTVar11->AllocatorInstance).Data;
    if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->ShutdownRequests).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->ShutdownRequests).ArrayNum;
    piVar1 = &(this->ShutdownRequests).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar11->AllocatorInstance,piVar1);
    }
    (this->ShutdownRequests).ArrayNum = iVar7 + 1;
    pFVar10 = (pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
    *(longlong *)pFVar10 = *(longlong *)param_1;
    *(longlong *)(pFVar10 + 0x28) = *(longlong *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    lVar5 = *(longlong *)&param_1->field_0x18;
    *(longlong *)(pFVar10 + 0x10) = *(longlong *)&param_1->field_0x10;
    *(longlong *)(pFVar10 + 0x18) = lVar5;
    *(longlong *)(pFVar10 + 0x20) = *(longlong *)&param_1->field_0x20;
    if (*(longlong *)pFVar10 != 0) {
      *(undefined8 *)param_1 = 0;
    }
    TryNotify(this);
    bVar6 = false;
  }
  else if (this->bShutdownCompleted == (TAtomic<bool>)0x0) {
    pTVar11 = &this->ShutdownRequests;
    pTVar3 = (TUniqueFunction<void___cdecl(void)> *)(pTVar11->AllocatorInstance).Data;
    if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->ShutdownRequests).ArrayMax)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->ShutdownRequests).ArrayNum;
    piVar1 = &(this->ShutdownRequests).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar11->AllocatorInstance,piVar1);
    }
    (this->ShutdownRequests).ArrayNum = iVar7 + 1;
    pFVar10 = (pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
    *(longlong *)pFVar10 = *(longlong *)param_1;
    *(longlong *)(pFVar10 + 0x28) = *(longlong *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    lVar5 = *(longlong *)&param_1->field_0x18;
    *(longlong *)(pFVar10 + 0x10) = *(longlong *)&param_1->field_0x10;
    *(longlong *)(pFVar10 + 0x18) = lVar5;
    *(longlong *)(pFVar10 + 0x20) = *(longlong *)&param_1->field_0x20;
    if (*(longlong *)pFVar10 != 0) {
      *(undefined8 *)param_1 = 0;
    }
  }
  else {
    bVar6 = true;
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if ((bVar6) && (*(void **)param_1 != (void *)0x0)) {
    Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar4 = *(code **)param_1;
    plVar9 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_1->field_0x28;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar4)(uVar8);
  }
  return;
}

// RequestShutdown @ 143179330

void __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
RequestShutdown(TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>
                *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  int *piVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  TUniqueFunction<void___cdecl(void)> *pTVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  
  bVar6 = false;
  this_00 = &this->ShutdownMutex;
  LOCK();
  bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(this_00);
  }
  LOCK();
  bVar12 = this->bShutdownRequested == (TAtomic<bool>)0x0;
  if (bVar12) {
    this->bShutdownRequested = (TAtomic<bool>)0x1;
  }
  UNLOCK();
  if (bVar12) {
    pTVar11 = &this->ShutdownRequests;
    pTVar3 = (TUniqueFunction<void___cdecl(void)> *)(pTVar11->AllocatorInstance).Data;
    if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->ShutdownRequests).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->ShutdownRequests).ArrayNum;
    piVar1 = &(this->ShutdownRequests).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar11->AllocatorInstance,piVar1);
    }
    (this->ShutdownRequests).ArrayNum = iVar7 + 1;
    pFVar10 = (pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
    *(longlong *)pFVar10 = *(longlong *)param_1;
    *(longlong *)(pFVar10 + 0x28) = *(longlong *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    lVar5 = *(longlong *)&param_1->field_0x18;
    *(longlong *)(pFVar10 + 0x10) = *(longlong *)&param_1->field_0x10;
    *(longlong *)(pFVar10 + 0x18) = lVar5;
    *(longlong *)(pFVar10 + 0x20) = *(longlong *)&param_1->field_0x20;
    if (*(longlong *)pFVar10 != 0) {
      *(undefined8 *)param_1 = 0;
    }
    TryNotify(this);
    bVar6 = false;
  }
  else if (this->bShutdownCompleted == (TAtomic<bool>)0x0) {
    pTVar11 = &this->ShutdownRequests;
    pTVar3 = (TUniqueFunction<void___cdecl(void)> *)(pTVar11->AllocatorInstance).Data;
    if (((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->ShutdownRequests).ArrayMax)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->ShutdownRequests).ArrayNum;
    piVar1 = &(this->ShutdownRequests).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar11->AllocatorInstance,piVar1);
    }
    (this->ShutdownRequests).ArrayNum = iVar7 + 1;
    pFVar10 = (pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
    *(longlong *)pFVar10 = *(longlong *)param_1;
    *(longlong *)(pFVar10 + 0x28) = *(longlong *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    lVar5 = *(longlong *)&param_1->field_0x18;
    *(longlong *)(pFVar10 + 0x10) = *(longlong *)&param_1->field_0x10;
    *(longlong *)(pFVar10 + 0x18) = lVar5;
    *(longlong *)(pFVar10 + 0x20) = *(longlong *)&param_1->field_0x20;
    if (*(longlong *)pFVar10 != 0) {
      *(undefined8 *)param_1 = 0;
    }
  }
  else {
    bVar6 = true;
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if ((bVar6) && (*(void **)param_1 != (void *)0x0)) {
    Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar4 = *(code **)param_1;
    plVar9 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_1->field_0x28;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar4)(uVar8);
  }
  return;
}

// Run @ 143179fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::Run
          (TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_EventLoop_TEventLoop_Run = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName(&local_res20,"STAT_EventLoop_TEventLoop_Run");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                ::__l2::StatPtr_STAT_EventLoop_TEventLoop_Run,*pFVar7,
               L"STAT_EventLoop_TEventLoop_Run","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_EventLoop_TEventLoop_Run;
  if (_StatPtr_STAT_EventLoop_TEventLoop_Run == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_EventLoop_TEventLoop_Run");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                         ::__l2::StatPtr_STAT_EventLoop_TEventLoop_Run,*pFVar7,
                        L"STAT_EventLoop_TEventLoop_Run","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                   ,0xc9);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14317a116;
    }
  }
  bVar4 = false;
  FVar11 = local_50;
LAB_14317a116:
  if ((this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized(EventLoopThreadId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                         ,0x2d,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    bVar6 = RunOnce(this,(FTimespan)0x7fffffffffffffff);
  } while (bVar6);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Run @ 14317a300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::Run
          (TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
           *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_EventLoop_TEventLoop_Run = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName(&local_res20,"STAT_EventLoop_TEventLoop_Run");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                ::__l2::StatPtr_STAT_EventLoop_TEventLoop_Run,*pFVar7,
               L"STAT_EventLoop_TEventLoop_Run","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_EventLoop_TEventLoop_Run;
  if (_StatPtr_STAT_EventLoop_TEventLoop_Run == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_EventLoop_TEventLoop_Run");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                         ::__l2::StatPtr_STAT_EventLoop_TEventLoop_Run,*pFVar7,
                        L"STAT_EventLoop_TEventLoop_Run","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                   ,0xc9);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14317a476;
    }
  }
  bVar4 = false;
  FVar11 = local_50;
LAB_14317a476:
  if ((this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized(EventLoopThreadId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                         ,0x2d,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    bVar6 = RunOnce(this,(FTimespan)0x7fffffffffffffff);
  } while (bVar6);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Run @ 14317a660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::Run
          (TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_EventLoop_TEventLoop_Run = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName(&local_res20,"STAT_EventLoop_TEventLoop_Run");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                ::__l2::StatPtr_STAT_EventLoop_TEventLoop_Run,*pFVar7,
               L"STAT_EventLoop_TEventLoop_Run","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_EventLoop_TEventLoop_Run;
  if (_StatPtr_STAT_EventLoop_TEventLoop_Run == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_EventLoop_TEventLoop_Run");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_virtual_void___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::Run(void)___ptr64'
                         ::__l2::StatPtr_STAT_EventLoop_TEventLoop_Run,*pFVar7,
                        L"STAT_EventLoop_TEventLoop_Run","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                   ,0xc9);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14317a7d6;
    }
  }
  bVar4 = false;
  FVar11 = local_50;
LAB_14317a7d6:
  if ((this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized(EventLoopThreadId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                         ,0x2d,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    bVar6 = RunOnce(this,(FTimespan)0x7fffffffffffffff);
  } while (bVar6);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RunOnce @ 14317b1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014317b55b) */
/* WARNING: Removing unreachable block (ram,0x00014317b6a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce
          (TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this,
          FTimespan param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  FName *pFVar16;
  TStatIdData *pTVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong *plVar21;
  FTimespan FVar22;
  FName FVar23;
  int iVar24;
  TUniqueFunction<void___cdecl(void)> *pTVar25;
  TUniqueFunction<void___cdecl(void)> *pTVar26;
  FName FVar27;
  TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar28;
  undefined1 auStackY_1a8 [32];
  FName local_140;
  FColor_u_0 local_138 [2];
  FName local_130;
  FName local_128;
  LARGE_INTEGER local_118;
  LARGE_INTEGER local_110;
  code *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong *local_e0;
  char local_d8;
  code *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *plStack_a0;
  char local_98;
  FName local_88;
  FName local_80;
  undefined8 local_78 [2];
  code *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar25 = (TUniqueFunction<void___cdecl(void)> *)0x0;
  iVar24 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_EventLoop_TEventLoop_RunOnce = (TStatIdData *)0x0;
    pFVar16 = ::FName::FName(&local_88,"STAT_EventLoop_TEventLoop_RunOnce");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                ::__l2::StatPtr_STAT_EventLoop_TEventLoop_RunOnce,*pFVar16,
               L"STAT_EventLoop_TEventLoop_RunOnce","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar17 = _StatPtr_STAT_EventLoop_TEventLoop_RunOnce;
  if (_StatPtr_STAT_EventLoop_TEventLoop_RunOnce == (TStatIdData *)0x0) {
    pFVar16 = ::FName::FName(&local_80,"STAT_EventLoop_TEventLoop_RunOnce");
    pTVar17 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                          ::__l2::StatPtr_STAT_EventLoop_TEventLoop_RunOnce,*pFVar16,
                         L"STAT_EventLoop_TEventLoop_RunOnce","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)&pTVar17->Name;
  bVar5 = false;
  bVar6 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(pTVar17->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar6 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_130.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(pTVar17->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                   ,0xda);
        bVar5 = true;
        bVar6 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar13 = true;
      goto LAB_14317b362;
    }
  }
  bVar6 = bVar14;
  bVar5 = bVar13;
  bVar13 = false;
  FVar27 = local_128;
LAB_14317b362:
  if ((this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInitialized(EventLoopThreadId)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                          ,0x2d,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    uVar15 = (*pcVar3)();
    return (bool)uVar15;
  }
  if (this->bShutdownCompleted == (TAtomic<bool>)0x0) {
    local_140.ComparisonIndex.Value = 0;
    local_140.Number = 0;
    bVar14 = TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::GetNextTimeout
                       (&this->TimerManager,(FTimespan *)&local_140);
    FVar23 = (FName)param_1.Ticks;
    if ((bVar14) && (FVar23 = local_140, param_1.Ticks < (longlong)local_140)) {
      FVar23 = (FName)param_1.Ticks;
    }
    FCurlMultiPollIOManager::Poll(&this->IOManager,(FTimespan)FVar23);
    QueryPerformanceCounter(&local_118);
    lVar20 = (longlong)
             ((double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle *
              __real_416312d000000000 + __real_42e312d000000000);
    lVar18 = lVar20 - (this->LoopTime).Ticks;
    (this->LoopTime).Ticks = lVar20;
    FVar22.Ticks = (long64)pTVar25;
    if (0 < lVar18) {
      FVar22.Ticks = lVar18;
    }
    TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(&this->TimerManager,FVar22);
    if ((this->TimerManager).PendingRepeatTimers.ArrayNum != 0) {
      QueryPerformanceCounter(&local_110);
      lVar20 = (longlong)
               ((double)local_110.QuadPart * FGenericPlatformTime::SecondsPerCycle *
                __real_416312d000000000 + __real_42e312d000000000);
      lVar18 = lVar20 - (this->LoopTime).Ticks;
      (this->LoopTime).Ticks = lVar20;
      FVar22.Ticks = (long64)pTVar25;
      if (0 < lVar18) {
        FVar22.Ticks = lVar18;
      }
      TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(&this->TimerManager,FVar22);
    }
    local_68 = (code *)0x0;
    plStack_40 = (longlong *)0x0;
    while (aVar2 = ((this->AsyncTasks).Tail)->Next,
          aVar2 != (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
      local_108 = *(code **)((longlong)aVar2 + 0x10);
      local_e0 = *(longlong **)((longlong)aVar2 + 0x38);
      *(undefined8 *)((longlong)aVar2 + 0x38) = 0;
      local_f8 = *(undefined4 *)((longlong)aVar2 + 0x20);
      uStack_f4 = *(undefined4 *)((longlong)aVar2 + 0x24);
      uStack_f0 = *(undefined4 *)((longlong)aVar2 + 0x28);
      uStack_ec = *(undefined4 *)((longlong)aVar2 + 0x2c);
      local_e8 = *(undefined8 *)((longlong)aVar2 + 0x30);
      if (local_108 != (code *)0x0) {
        *(undefined8 *)((longlong)aVar2 + 0x10) = 0;
      }
      local_d8 = '\x01';
      if (*(longlong *)((longlong)aVar2 + 0x10) != 0) {
        plVar21 = *(longlong **)((longlong)aVar2 + 0x38);
        if (*(longlong **)((longlong)aVar2 + 0x38) == (longlong *)0x0) {
          plVar21 = (longlong *)((longlong)aVar2 + 0x20);
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      FMemory::Free((this->AsyncTasks).Tail);
      plVar12 = plStack_40;
      uVar11 = uStack_4c;
      uVar10 = uStack_50;
      uVar9 = uStack_54;
      uVar8 = local_58;
      uVar19 = uStack_60;
      pcVar7 = local_68;
      plVar21 = local_e0;
      pcVar3 = local_108;
      (this->AsyncTasks).Tail = (FNode *)aVar2;
      local_98 = local_d8;
      if (local_d8 == '\0') break;
      local_c8 = local_108;
      plStack_a0 = local_e0;
      local_e0 = (longlong *)0x0;
      local_b8 = local_f8;
      uStack_b4 = uStack_f4;
      uStack_b0 = uStack_f0;
      uStack_ac = uStack_ec;
      local_a8 = local_e8;
      if (local_108 != (code *)0x0) {
        local_108 = (code *)0x0;
      }
      if (local_d8 == '\0') break;
      uVar4 = CONCAT44(uStack_44,local_48);
      local_68 = pcVar3;
      uStack_60 = uStack_c0;
      local_a8._0_4_ = (undefined4)local_e8;
      local_a8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
      local_48 = (undefined4)local_a8;
      uStack_44 = local_a8._4_4_;
      plStack_40 = plVar21;
      local_58 = local_f8;
      uStack_54 = uStack_f4;
      uStack_50 = uStack_f0;
      uStack_4c = uStack_ec;
      local_c8 = pcVar7;
      uStack_c0 = uVar19;
      local_b8 = uVar8;
      uStack_b4 = uVar9;
      uStack_b0 = uVar10;
      uStack_ac = uVar11;
      local_a8 = uVar4;
      plStack_a0 = plVar12;
      if (pcVar7 != (code *)0x0) {
        plVar21 = (longlong *)&local_b8;
        if (plVar12 != (longlong *)0x0) {
          plVar21 = plVar12;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      Core::Private::Function::CheckCallable(local_68);
      pcVar3 = local_68;
      plVar21 = (longlong *)&local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar21 = plStack_40;
      }
      (**(code **)(*plVar21 + 8))();
      (*pcVar3)();
    }
    if (local_68 != (code *)0x0) {
      plVar21 = (longlong *)&local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar21 = plStack_40;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (this->bShutdownRequested == (TAtomic<bool>)0x0) {
      bVar14 = true;
    }
    else {
      this_00 = &this->ShutdownMutex;
      LOCK();
      bVar14 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar14) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar14) {
        FMutex::LockSlow(this_00);
      }
      LOCK();
      this->bShutdownCompleted = (TAtomic<bool>)0x1;
      UNLOCK();
      pTVar28 = &this->ShutdownRequests;
      if ((TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *)local_78 !=
          pTVar28) {
        DestructItems<TUniqueFunction<void___cdecl(void)>,int>
                  ((TUniqueFunction<void___cdecl(void)> *)0x0,0);
        pTVar25 = (TUniqueFunction<void___cdecl(void)> *)(pTVar28->AllocatorInstance).Data;
        (pTVar28->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar24 = (this->ShutdownRequests).ArrayNum;
        (this->ShutdownRequests).ArrayNum = 0;
        (this->ShutdownRequests).ArrayMax = 0;
      }
      LOCK();
      aVar1 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      for (pTVar26 = pTVar25; pTVar26 != pTVar25 + iVar24; pTVar26 = pTVar26 + 1) {
        if (*(void **)pTVar26 != (void *)0x0) {
          Core::Private::Function::CheckCallable(*(void **)pTVar26);
          plVar21 = *(longlong **)&pTVar26->field_0x28;
          pcVar3 = *(code **)pTVar26;
          if (plVar21 == (longlong *)0x0) {
            plVar21 = (longlong *)&pTVar26->field_0x10;
          }
          uVar19 = (**(code **)(*plVar21 + 8))();
          (*pcVar3)(uVar19);
        }
      }
      DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar25,iVar24);
      if (pTVar25 != (TUniqueFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(pTVar25);
      }
      bVar14 = false;
    }
  }
  else {
    bVar14 = false;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return bVar14;
}

// RunOnce @ 14317b810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014317bb9b) */
/* WARNING: Removing unreachable block (ram,0x00014317bcf5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce
          (TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
           *this,FTimespan param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  FName *pFVar16;
  TStatIdData *pTVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong *plVar21;
  FTimespan FVar22;
  FName FVar23;
  int iVar24;
  TUniqueFunction<void___cdecl(void)> *pTVar25;
  TUniqueFunction<void___cdecl(void)> *pTVar26;
  FName FVar27;
  TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar28;
  undefined1 auStackY_1a8 [32];
  FName local_140;
  FColor_u_0 local_138 [2];
  FName local_130;
  FName local_128;
  LARGE_INTEGER local_118;
  LARGE_INTEGER local_110;
  code *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong *local_e0;
  char local_d8;
  code *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *plStack_a0;
  char local_98;
  FName local_88;
  FName local_80;
  undefined8 local_78 [2];
  code *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar25 = (TUniqueFunction<void___cdecl(void)> *)0x0;
  iVar24 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_EventLoop_TEventLoop_RunOnce = (TStatIdData *)0x0;
    pFVar16 = ::FName::FName(&local_88,"STAT_EventLoop_TEventLoop_RunOnce");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                ::__l2::StatPtr_STAT_EventLoop_TEventLoop_RunOnce,*pFVar16,
               L"STAT_EventLoop_TEventLoop_RunOnce","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar17 = _StatPtr_STAT_EventLoop_TEventLoop_RunOnce;
  if (_StatPtr_STAT_EventLoop_TEventLoop_RunOnce == (TStatIdData *)0x0) {
    pFVar16 = ::FName::FName(&local_80,"STAT_EventLoop_TEventLoop_RunOnce");
    pTVar17 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                          ::__l2::StatPtr_STAT_EventLoop_TEventLoop_RunOnce,*pFVar16,
                         L"STAT_EventLoop_TEventLoop_RunOnce","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)&pTVar17->Name;
  bVar5 = false;
  bVar6 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(pTVar17->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar6 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_130.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(pTVar17->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                   ,0xda);
        bVar5 = true;
        bVar6 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar13 = true;
      goto LAB_14317b9a2;
    }
  }
  bVar6 = bVar14;
  bVar5 = bVar13;
  bVar13 = false;
  FVar27 = local_128;
LAB_14317b9a2:
  if ((this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInitialized(EventLoopThreadId)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                          ,0x2d,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    uVar15 = (*pcVar3)();
    return (bool)uVar15;
  }
  if (this->bShutdownCompleted == (TAtomic<bool>)0x0) {
    local_140.ComparisonIndex.Value = 0;
    local_140.Number = 0;
    bVar14 = TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::GetNextTimeout
                       (&this->TimerManager,(FTimespan *)&local_140);
    FVar23 = (FName)param_1.Ticks;
    if ((bVar14) && (FVar23 = local_140, param_1.Ticks < (longlong)local_140)) {
      FVar23 = (FName)param_1.Ticks;
    }
    FIOManagerBSDSocketSelect::Poll(&this->IOManager,(FTimespan)FVar23);
    QueryPerformanceCounter(&local_118);
    lVar20 = (longlong)
             ((double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle *
              __real_416312d000000000 + __real_42e312d000000000);
    lVar18 = lVar20 - (this->LoopTime).Ticks;
    (this->LoopTime).Ticks = lVar20;
    FVar22.Ticks = (long64)pTVar25;
    if (0 < lVar18) {
      FVar22.Ticks = lVar18;
    }
    TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(&this->TimerManager,FVar22);
    if ((this->TimerManager).PendingRepeatTimers.ArrayNum != 0) {
      QueryPerformanceCounter(&local_110);
      lVar20 = (longlong)
               ((double)local_110.QuadPart * FGenericPlatformTime::SecondsPerCycle *
                __real_416312d000000000 + __real_42e312d000000000);
      lVar18 = lVar20 - (this->LoopTime).Ticks;
      (this->LoopTime).Ticks = lVar20;
      FVar22.Ticks = (long64)pTVar25;
      if (0 < lVar18) {
        FVar22.Ticks = lVar18;
      }
      TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(&this->TimerManager,FVar22);
    }
    local_68 = (code *)0x0;
    plStack_40 = (longlong *)0x0;
    while (aVar2 = ((this->AsyncTasks).Tail)->Next,
          aVar2 != (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
      local_108 = *(code **)((longlong)aVar2 + 0x10);
      local_e0 = *(longlong **)((longlong)aVar2 + 0x38);
      *(undefined8 *)((longlong)aVar2 + 0x38) = 0;
      local_f8 = *(undefined4 *)((longlong)aVar2 + 0x20);
      uStack_f4 = *(undefined4 *)((longlong)aVar2 + 0x24);
      uStack_f0 = *(undefined4 *)((longlong)aVar2 + 0x28);
      uStack_ec = *(undefined4 *)((longlong)aVar2 + 0x2c);
      local_e8 = *(undefined8 *)((longlong)aVar2 + 0x30);
      if (local_108 != (code *)0x0) {
        *(undefined8 *)((longlong)aVar2 + 0x10) = 0;
      }
      local_d8 = '\x01';
      if (*(longlong *)((longlong)aVar2 + 0x10) != 0) {
        plVar21 = *(longlong **)((longlong)aVar2 + 0x38);
        if (*(longlong **)((longlong)aVar2 + 0x38) == (longlong *)0x0) {
          plVar21 = (longlong *)((longlong)aVar2 + 0x20);
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      FMemory::Free((this->AsyncTasks).Tail);
      plVar12 = plStack_40;
      uVar11 = uStack_4c;
      uVar10 = uStack_50;
      uVar9 = uStack_54;
      uVar8 = local_58;
      uVar19 = uStack_60;
      pcVar7 = local_68;
      plVar21 = local_e0;
      pcVar3 = local_108;
      (this->AsyncTasks).Tail = (FNode *)aVar2;
      local_98 = local_d8;
      if (local_d8 == '\0') break;
      local_c8 = local_108;
      plStack_a0 = local_e0;
      local_e0 = (longlong *)0x0;
      local_b8 = local_f8;
      uStack_b4 = uStack_f4;
      uStack_b0 = uStack_f0;
      uStack_ac = uStack_ec;
      local_a8 = local_e8;
      if (local_108 != (code *)0x0) {
        local_108 = (code *)0x0;
      }
      if (local_d8 == '\0') break;
      uVar4 = CONCAT44(uStack_44,local_48);
      local_68 = pcVar3;
      uStack_60 = uStack_c0;
      local_a8._0_4_ = (undefined4)local_e8;
      local_a8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
      local_48 = (undefined4)local_a8;
      uStack_44 = local_a8._4_4_;
      plStack_40 = plVar21;
      local_58 = local_f8;
      uStack_54 = uStack_f4;
      uStack_50 = uStack_f0;
      uStack_4c = uStack_ec;
      local_c8 = pcVar7;
      uStack_c0 = uVar19;
      local_b8 = uVar8;
      uStack_b4 = uVar9;
      uStack_b0 = uVar10;
      uStack_ac = uVar11;
      local_a8 = uVar4;
      plStack_a0 = plVar12;
      if (pcVar7 != (code *)0x0) {
        plVar21 = (longlong *)&local_b8;
        if (plVar12 != (longlong *)0x0) {
          plVar21 = plVar12;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      Core::Private::Function::CheckCallable(local_68);
      pcVar3 = local_68;
      plVar21 = (longlong *)&local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar21 = plStack_40;
      }
      uVar19 = (**(code **)(*plVar21 + 8))();
      (*pcVar3)(uVar19);
    }
    if (local_68 != (code *)0x0) {
      plVar21 = (longlong *)&local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar21 = plStack_40;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (this->bShutdownRequested == (TAtomic<bool>)0x0) {
      bVar14 = true;
    }
    else {
      FIOManagerBSDSocketSelect::Shutdown(&this->IOManager);
      this_00 = &this->ShutdownMutex;
      LOCK();
      bVar14 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar14) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar14) {
        FMutex::LockSlow(this_00);
      }
      LOCK();
      this->bShutdownCompleted = (TAtomic<bool>)0x1;
      UNLOCK();
      pTVar28 = &this->ShutdownRequests;
      if ((TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *)local_78 !=
          pTVar28) {
        DestructItems<TUniqueFunction<void___cdecl(void)>,int>
                  ((TUniqueFunction<void___cdecl(void)> *)0x0,0);
        pTVar25 = (TUniqueFunction<void___cdecl(void)> *)(pTVar28->AllocatorInstance).Data;
        (pTVar28->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar24 = (this->ShutdownRequests).ArrayNum;
        (this->ShutdownRequests).ArrayNum = 0;
        (this->ShutdownRequests).ArrayMax = 0;
      }
      LOCK();
      aVar1 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      for (pTVar26 = pTVar25; pTVar26 != pTVar25 + iVar24; pTVar26 = pTVar26 + 1) {
        if (*(void **)pTVar26 != (void *)0x0) {
          Core::Private::Function::CheckCallable(*(void **)pTVar26);
          plVar21 = *(longlong **)&pTVar26->field_0x28;
          pcVar3 = *(code **)pTVar26;
          if (plVar21 == (longlong *)0x0) {
            plVar21 = (longlong *)&pTVar26->field_0x10;
          }
          uVar19 = (**(code **)(*plVar21 + 8))();
          (*pcVar3)(uVar19);
        }
      }
      DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar25,iVar24);
      if (pTVar25 != (TUniqueFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(pTVar25);
      }
      bVar14 = false;
    }
  }
  else {
    bVar14 = false;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return bVar14;
}

// RunOnce @ 14317be60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014317c2ab) */
/* WARNING: Removing unreachable block (ram,0x00014317c40a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
RunOnce(TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *this,
       FTimespan param_1)

{
  FManualResetEvent *pFVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  FName *pFVar19;
  TStatIdData *pTVar20;
  FMonotonicTimePoint FVar21;
  FMonotonicTimePoint FVar22;
  longlong lVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong *plVar26;
  FTimespan FVar27;
  FName FVar28;
  int iVar29;
  TUniqueFunction<void___cdecl(void)> *pTVar30;
  TUniqueFunction<void___cdecl(void)> *pTVar31;
  FName FVar32;
  TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar33;
  undefined1 auStackY_1f8 [32];
  FName local_190;
  FColor_u_0 local_188 [2];
  FName local_180;
  FName local_178;
  atomic<unsigned_char> *local_168;
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158 [2];
  code *local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong *local_120;
  char local_118;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong *plStack_e0;
  char local_d8;
  FName local_c8;
  FName local_c0 [3];
  FWaitState local_a8;
  undefined8 local_98 [2];
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar30 = (TUniqueFunction<void___cdecl(void)> *)0x0;
  iVar29 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_EventLoop_TEventLoop_RunOnce = (TStatIdData *)0x0;
    pFVar19 = ::FName::FName(&local_c8,"STAT_EventLoop_TEventLoop_RunOnce");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                ::__l2::StatPtr_STAT_EventLoop_TEventLoop_RunOnce,*pFVar19,
               L"STAT_EventLoop_TEventLoop_RunOnce","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar20 = _StatPtr_STAT_EventLoop_TEventLoop_RunOnce;
  if (_StatPtr_STAT_EventLoop_TEventLoop_RunOnce == (TStatIdData *)0x0) {
    pFVar19 = ::FName::FName(local_c0,"STAT_EventLoop_TEventLoop_RunOnce");
    pTVar20 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_bool___cdecl_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce(FTimespan)___ptr64'
                          ::__l2::StatPtr_STAT_EventLoop_TEventLoop_RunOnce,*pFVar19,
                         L"STAT_EventLoop_TEventLoop_RunOnce","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)&pTVar20->Name;
  bVar7 = false;
  bVar8 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar16 = false;
  bVar17 = false;
  if ((FVar32.ComparisonIndex.Value.Value != 0) || (FVar32.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188[0]._s_0,(pTVar20->StatDescriptionAnsi).Ptr);
      bVar7 = false;
      bVar8 = true;
      bVar16 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_180.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_180.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_180,(pTVar20->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                   ,0xda);
        bVar7 = true;
        bVar8 = true;
        bVar16 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190 = FVar32;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar16 = true;
      goto LAB_14317bffc;
    }
  }
  bVar8 = bVar17;
  bVar7 = bVar16;
  bVar16 = false;
  FVar32 = local_178;
LAB_14317bffc:
  if ((this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInitialized(EventLoopThreadId)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Experimental\\EventLoop\\Public\\EventLoop\\EventLoop.h"
                          ,0x2d,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    uVar18 = (*pcVar4)();
    return (bool)uVar18;
  }
  if (this->bShutdownCompleted == (TAtomic<bool>)0x0) {
    local_190.ComparisonIndex.Value = 0;
    local_190.Number = 0;
    bVar17 = TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::GetNextTimeout
                       (&this->TimerManager,(FTimespan *)&local_190);
    FVar28 = (FName)param_1.Ticks;
    if ((bVar17) && (FVar28 = local_190, param_1.Ticks < (longlong)local_190)) {
      FVar28 = (FName)param_1.Ticks;
    }
    pFVar1 = &(this->IOManager).Event;
    dVar5 = (double)(longlong)FVar28 * __real_3e7ad7f29abcaf48;
    if (dVar5 != 0.0) {
      FVar21 = FMonotonicTimePoint::Now();
      dVar9 = __real_7ff0000000000000;
      aVar2 = pFVar1->State;
                    /* WARNING: Load size is inaccurate */
      FVar21.Time = dVar5 + *FVar21.Time;
                    /* WARNING: Load size is inaccurate */
      while ((((byte)aVar2 & 1) == 0 &&
             ((FVar21.Time == dVar9 ||
              (FVar22 = FMonotonicTimePoint::Now(),
              *FVar22.Time <= FVar21.Time && FVar21.Time != *FVar22.Time))))) {
        if (((byte)aVar2 & 2) == 0) {
          LOCK();
          bVar17 = aVar2 == pFVar1->State;
          if (bVar17) {
            pFVar1->State = (atomic<unsigned_char>)0x2;
          }
          UNLOCK();
          if (bVar17) goto LAB_14317c0e4;
        }
        else {
LAB_14317c0e4:
          local_168 = &pFVar1->State;
          ParkingLot::Private::WaitUntil
                    (&local_a8,pFVar1,
                     TFunctionWithContext<bool___cdecl(void)>::
                     Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,&local_168,
                     (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar21);
        }
        aVar2 = pFVar1->State;
      }
    }
    LOCK();
    pFVar1->State = (atomic<unsigned_char>)((byte)pFVar1->State & 0xfe);
    UNLOCK();
    QueryPerformanceCounter(&local_160);
    dVar9 = __real_42e312d000000000;
    dVar5 = __real_416312d000000000;
    lVar25 = (longlong)
             ((double)local_160.QuadPart * FGenericPlatformTime::SecondsPerCycle *
              __real_416312d000000000 + __real_42e312d000000000);
    lVar23 = lVar25 - (this->LoopTime).Ticks;
    (this->LoopTime).Ticks = lVar25;
    FVar27.Ticks = (long64)pTVar30;
    if (0 < lVar23) {
      FVar27.Ticks = lVar23;
    }
    TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(&this->TimerManager,FVar27);
    if ((this->TimerManager).PendingRepeatTimers.ArrayNum != 0) {
      QueryPerformanceCounter(local_158);
      lVar25 = (longlong)
               ((double)local_158[0].QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar5 +
               dVar9);
      lVar23 = lVar25 - (this->LoopTime).Ticks;
      (this->LoopTime).Ticks = lVar25;
      FVar27.Ticks = (long64)pTVar30;
      if (0 < lVar23) {
        FVar27.Ticks = lVar23;
      }
      TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::Tick(&this->TimerManager,FVar27);
    }
    local_88 = (code *)0x0;
    plStack_60 = (longlong *)0x0;
    while (aVar3 = ((this->AsyncTasks).Tail)->Next,
          aVar3 != (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
      local_148 = *(code **)((longlong)aVar3 + 0x10);
      local_120 = *(longlong **)((longlong)aVar3 + 0x38);
      *(undefined8 *)((longlong)aVar3 + 0x38) = 0;
      local_138 = *(undefined4 *)((longlong)aVar3 + 0x20);
      uStack_134 = *(undefined4 *)((longlong)aVar3 + 0x24);
      uStack_130 = *(undefined4 *)((longlong)aVar3 + 0x28);
      uStack_12c = *(undefined4 *)((longlong)aVar3 + 0x2c);
      local_128 = *(undefined8 *)((longlong)aVar3 + 0x30);
      if (local_148 != (code *)0x0) {
        *(undefined8 *)((longlong)aVar3 + 0x10) = 0;
      }
      local_118 = '\x01';
      if (*(longlong *)((longlong)aVar3 + 0x10) != 0) {
        plVar26 = *(longlong **)((longlong)aVar3 + 0x38);
        if (*(longlong **)((longlong)aVar3 + 0x38) == (longlong *)0x0) {
          plVar26 = (longlong *)((longlong)aVar3 + 0x20);
        }
        (**(code **)(*plVar26 + 0x10))();
      }
      FMemory::Free((this->AsyncTasks).Tail);
      plVar15 = plStack_60;
      uVar14 = uStack_6c;
      uVar13 = uStack_70;
      uVar12 = uStack_74;
      uVar11 = local_78;
      uVar24 = uStack_80;
      pcVar10 = local_88;
      plVar26 = local_120;
      pcVar4 = local_148;
      (this->AsyncTasks).Tail = (FNode *)aVar3;
      local_d8 = local_118;
      if (local_118 == '\0') break;
      local_108 = local_148;
      plStack_e0 = local_120;
      local_120 = (longlong *)0x0;
      local_f8 = local_138;
      uStack_f4 = uStack_134;
      uStack_f0 = uStack_130;
      uStack_ec = uStack_12c;
      local_e8 = local_128;
      if (local_148 != (code *)0x0) {
        local_148 = (code *)0x0;
      }
      if (local_118 == '\0') break;
      uVar6 = CONCAT44(uStack_64,local_68);
      local_88 = pcVar4;
      uStack_80 = uStack_100;
      local_e8._0_4_ = (undefined4)local_128;
      local_e8._4_4_ = (undefined4)((ulonglong)local_128 >> 0x20);
      local_68 = (undefined4)local_e8;
      uStack_64 = local_e8._4_4_;
      plStack_60 = plVar26;
      local_78 = local_138;
      uStack_74 = uStack_134;
      uStack_70 = uStack_130;
      uStack_6c = uStack_12c;
      local_108 = pcVar10;
      uStack_100 = uVar24;
      local_f8 = uVar11;
      uStack_f4 = uVar12;
      uStack_f0 = uVar13;
      uStack_ec = uVar14;
      local_e8 = uVar6;
      plStack_e0 = plVar15;
      if (pcVar10 != (code *)0x0) {
        plVar26 = (longlong *)&local_f8;
        if (plVar15 != (longlong *)0x0) {
          plVar26 = plVar15;
        }
        (**(code **)(*plVar26 + 0x10))();
      }
      Core::Private::Function::CheckCallable(local_88);
      pcVar4 = local_88;
      plVar26 = (longlong *)&local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar26 = plStack_60;
      }
      (**(code **)(*plVar26 + 8))();
      (*pcVar4)();
    }
    if (local_88 != (code *)0x0) {
      plVar26 = (longlong *)&local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar26 = plStack_60;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    if (this->bShutdownRequested == (TAtomic<bool>)0x0) {
      bVar17 = true;
    }
    else {
      this_00 = &this->ShutdownMutex;
      LOCK();
      bVar17 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar17) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar17) {
        FMutex::LockSlow(this_00);
      }
      LOCK();
      this->bShutdownCompleted = (TAtomic<bool>)0x1;
      UNLOCK();
      pTVar33 = &this->ShutdownRequests;
      if ((TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *)local_98 !=
          pTVar33) {
        DestructItems<TUniqueFunction<void___cdecl(void)>,int>
                  ((TUniqueFunction<void___cdecl(void)> *)0x0,0);
        pTVar30 = (TUniqueFunction<void___cdecl(void)> *)(pTVar33->AllocatorInstance).Data;
        (pTVar33->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar29 = (this->ShutdownRequests).ArrayNum;
        (this->ShutdownRequests).ArrayNum = 0;
        (this->ShutdownRequests).ArrayMax = 0;
      }
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      for (pTVar31 = pTVar30; pTVar31 != pTVar30 + iVar29; pTVar31 = pTVar31 + 1) {
        if (*(void **)pTVar31 != (void *)0x0) {
          Core::Private::Function::CheckCallable(*(void **)pTVar31);
          plVar26 = *(longlong **)&pTVar31->field_0x28;
          pcVar4 = *(code **)pTVar31;
          if (plVar26 == (longlong *)0x0) {
            plVar26 = (longlong *)&pTVar31->field_0x10;
          }
          uVar24 = (**(code **)(*plVar26 + 8))();
          (*pcVar4)(uVar24);
        }
      }
      DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar30,iVar29);
      if (pTVar30 != (TUniqueFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(pTVar30);
      }
      bVar17 = false;
    }
  }
  else {
    bVar17 = false;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return bVar17;
}

// SetTimer @ 14317f650

TResourceHandle<UE::EventLoop::FTimerHandleTraits> __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::SetTimer
          (TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this,
          TUniqueFunction<void___cdecl(void)> *param_1,FTimespan param_2,bool param_3,
          TOptional<FTimespan> *param_4)

{
  undefined7 in_stack_ffffffffffffffd9;
  
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::SetTimer
            (&this->TimerManager,param_1,param_2,param_3,
             (TOptional<FTimespan> *)CONCAT71(in_stack_ffffffffffffffd9,param_4._0_1_));
  TryNotify(this);
  return (TResourceHandle<UE::EventLoop::FTimerHandleTraits>)(ulong64)param_1;
}

// SetTimer @ 14317f6c0

TResourceHandle<UE::EventLoop::FTimerHandleTraits> __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
SetTimer(TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
         *this,TUniqueFunction<void___cdecl(void)> *param_1,FTimespan param_2,bool param_3,
        TOptional<FTimespan> *param_4)

{
  undefined7 in_stack_ffffffffffffffd9;
  
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::SetTimer
            (&this->TimerManager,param_1,param_2,param_3,
             (TOptional<FTimespan> *)CONCAT71(in_stack_ffffffffffffffd9,param_4._0_1_));
  TryNotify(this);
  return (TResourceHandle<UE::EventLoop::FTimerHandleTraits>)(ulong64)param_1;
}

// SetTimer @ 14317f730

TResourceHandle<UE::EventLoop::FTimerHandleTraits> __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
SetTimer(TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *this,
        TUniqueFunction<void___cdecl(void)> *param_1,FTimespan param_2,bool param_3,
        TOptional<FTimespan> *param_4)

{
  undefined7 in_stack_ffffffffffffffd9;
  
  TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::SetTimer
            (&this->TimerManager,param_1,param_2,param_3,
             (TOptional<FTimespan> *)CONCAT71(in_stack_ffffffffffffffd9,param_4._0_1_));
  TryNotify(this);
  return (TResourceHandle<UE::EventLoop::FTimerHandleTraits>)(ulong64)param_1;
}

// TryNotify @ 143188bf0

void __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::TryNotify
          (TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
    this_00 = &this->InitMutex;
    LOCK();
    bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar3) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar3) {
      FMutex::LockSlow(this_00);
    }
    if (this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
      LOCK();
      this->bNotifyOnInit = (TAtomic<bool>)0x1;
      UNLOCK();
    }
    else {
      iVar4 = curl_multi_wakeup((this->IOManager).Params.MultiHandle);
      if (iVar4 != 0) {
        curl_multi_strerror(iVar4);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Code == CURLM_OK",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                           ,0x40,L"Error in curl_multi operation: %hs");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
  }
  else {
    iVar4 = curl_multi_wakeup((this->IOManager).Params.MultiHandle);
    if (iVar4 != 0) {
      curl_multi_strerror(iVar4);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Code == CURLM_OK",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlMultiPollEventLoopHttpThread.cpp"
                         ,0x40,L"Error in curl_multi operation: %hs");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// TryNotify @ 143188d00

void __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
TryNotify(TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
          *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  bool bVar2;
  
  if (this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
    this_00 = &this->InitMutex;
    LOCK();
    bVar2 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar2) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar2) {
      FMutex::LockSlow(this_00);
    }
    if (this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
      LOCK();
      this->bNotifyOnInit = (TAtomic<bool>)0x1;
      UNLOCK();
    }
    else {
      FIOManagerBSDSocketSelect::Notify(&this->IOManager);
    }
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
    return;
  }
  FIOManagerBSDSocketSelect::Notify(&this->IOManager);
  return;
}

// TryNotify @ 143188da0

void __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
TryNotify(TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *this)

{
  FManualResetEvent *pFVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  if (this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
    this_00 = &this->InitMutex;
    LOCK();
    bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar3) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar3) {
      FMutex::LockSlow(this_00);
    }
    if (this->EventLoopThreadId == (TAtomic<unsigned_int>)0x0) {
      LOCK();
      this->bNotifyOnInit = (TAtomic<bool>)0x1;
      UNLOCK();
    }
    else {
      LOCK();
      pFVar1 = &(this->IOManager).Event;
      aVar2 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)0x1;
      UNLOCK();
      if (((byte)aVar2 & 3) == 2) {
        ParkingLot::WakeAll(&(this->IOManager).Event);
      }
    }
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
  }
  else {
    LOCK();
    pFVar1 = &(this->IOManager).Event;
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)0x1;
    UNLOCK();
    if (((byte)aVar2 & 3) == 2) {
      ParkingLot::WakeAll(&(this->IOManager).Event);
      return;
    }
  }
  return;
}

