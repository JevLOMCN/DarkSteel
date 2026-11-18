// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// ~FOutputDeviceRedirectorState @ 1418bf1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Private::FOutputDeviceRedirectorState::~FOutputDeviceRedirectorState
          (FOutputDeviceRedirectorState *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  FVar1 = (this->UnbufferedOutputDevicesCanBeUsedOnPanicThread).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->BufferedOutputDevicesCanBeUsedOnPanicThread).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ThreadLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ThreadLock);
  }
  ::FThread::~FThread(&this->Thread);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->BacklogLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->BacklogLock);
  }
  DestructItems<FBufferedLine,int>
            ((FBufferedLine *)(this->BacklogLines).AllocatorInstance.Data,
             (this->BacklogLines).ArrayNum);
  pFVar2 = (this->BacklogLines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UnbufferedOutputDevices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BufferedOutputDevices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::
  ~TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>
            (&this->BufferedItems);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001418bf2da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// operator() @ 1418c10e0

void __thiscall
`UE::Private::FOutputDeviceRedirectorState::RemoveOutputDevice'::__l2::<lambda_1>::operator()
          (void *this,TArray<FOutputDevice_*,TSizedDefaultAllocator<32>_> *param_1,
          TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar1 + (longlong)param_1->ArrayNum * 8;
  if (pFVar7 != pFVar1) {
    while (pFVar7 = pFVar7 + -8, *(longlong *)pFVar7 != *(longlong *)this) {
      if (pFVar7 == pFVar1) {
        return;
      }
    }
    uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
    if (uVar6 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_1->ArrayNum + ~uVar6;
      pFVar7 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
      if (iVar5 != 0) {
        memmove(pFVar7,pFVar7 + 8,(longlong)iVar5 << 3);
      }
      param_1->ArrayNum = param_1->ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::RemoveAt(param_2,uVar6,1)
      ;
    }
  }
  return;
}

// AddOutputDevice @ 1418c6b50

void __thiscall
UE::Private::FOutputDeviceRedirectorState::AddOutputDevice
          (FOutputDeviceRedirectorState *this,FOutputDevice *param_1)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  atomic<unsigned_int> aVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  ForElementType<unsigned_int> this_00;
  ForElementType<unsigned_int> FVar11;
  bool bVar12;
  bool bVar13;
  FOutputDevice *local_res8;
  
  bVar12 = -1 < CpuChannel->Enabled;
  local_res8 = param_1;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_UE::Private::FOutputDevicesWriteScopeLock::FOutputDevicesWriteScopeLock(UE::Private::FOutputDeviceRedirectorState&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId331,"FOutputDevicesWriteScopeLock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
               ,0x14b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_UE::Private::FOutputDevicesWriteScopeLock::FOutputDevicesWriteScopeLock(UE::Private::FOutputDeviceRedirectorState&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId331);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  this->LockedThreadId = aVar5;
  aVar5 = this->OutputDevicesLockState;
  do {
    LOCK();
    aVar1 = this->OutputDevicesLockState;
    bVar13 = aVar5 == aVar1;
    if (bVar13) {
      this->OutputDevicesLockState = (atomic<unsigned_int>)((uint)aVar5 | 1);
      aVar1 = aVar5;
    }
    aVar5 = aVar1;
    UNLOCK();
  } while (!bVar13);
  if ((((uint)aVar5 & 1) != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(LockState & 1) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
                          ,0x151,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  while (1 < (uint)aVar5) {
    FWindowsPlatformProcess::Sleep(0.0);
    aVar5 = this->OutputDevicesLockState;
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  cVar3 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  if (cVar3 == '\0') {
    iVar7 = (this->BufferedOutputDevices).ArrayNum;
    this_00 = (ForElementType<unsigned_int>)&this->BufferedOutputDevicesCanBeUsedOnPanicThread;
    iVar6 = TArray<FOutputDevice_*,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FOutputDevice_*_const_&>(&this->BufferedOutputDevices,&local_res8);
    if (iVar6 != iVar7) goto LAB_1418c6ce4;
    bVar4 = (**(code **)(local_res8->_padding_ + 0x50))();
    iVar7 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                      ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                       this_00,1);
    FVar11 = (this->BufferedOutputDevicesCanBeUsedOnPanicThread).AllocatorInstance.SecondaryData;
  }
  else {
    iVar7 = (this->UnbufferedOutputDevices).ArrayNum;
    this_00 = (ForElementType<unsigned_int>)&this->UnbufferedOutputDevicesCanBeUsedOnPanicThread;
    iVar6 = TArray<FOutputDevice_*,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FOutputDevice_*_const_&>(&this->UnbufferedOutputDevices,&local_res8);
    if (iVar6 != iVar7) goto LAB_1418c6ce4;
    bVar4 = (**(code **)(local_res8->_padding_ + 0x50))();
    iVar7 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                      ((TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                       this_00,1);
    FVar11 = (this->UnbufferedOutputDevicesCanBeUsedOnPanicThread).AllocatorInstance.SecondaryData;
  }
  uVar9 = iVar7 >> 0x1f & 0x1f;
  iVar7 = iVar7 + uVar9;
  bVar8 = ((byte)iVar7 & 0x1f) - (char)uVar9;
  lVar10 = (longlong)(iVar7 >> 5);
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = this_00;
  }
  *(uint *)((longlong)FVar11 + lVar10 * 4) =
       ~(1 << (bVar8 & 0x1f)) & *(uint *)((longlong)FVar11 + lVar10 * 4) |
       (uint)bVar4 << (bVar8 & 0x1f);
LAB_1418c6ce4:
  aVar5 = this->OutputDevicesLockState;
  do {
    LOCK();
    aVar1 = this->OutputDevicesLockState;
    bVar12 = aVar5 == aVar1;
    if (bVar12) {
      this->OutputDevicesLockState = (atomic<unsigned_int>)((uint)aVar5 & 0xfffffffe);
      aVar1 = aVar5;
    }
    aVar5 = aVar1;
    UNLOCK();
  } while (!bVar12);
  if ((((uint)aVar5 & 1) == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(LockState & 1) == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
                          ,0x162,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// AddToBacklog @ 1418c6f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Private::FOutputDeviceRedirectorState::AddToBacklog
          (FOutputDeviceRedirectorState *this,FLogRecord *param_1)

{
  Type TVar1;
  double dVar2;
  undefined1 auStackY_488 [32];
  LARGE_INTEGER local_458 [2];
  TStringBuilderBase<wchar_t> local_448;
  wchar_t local_428 [512];
  ulonglong local_28 [4];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_448.bIsDynamic = false;
  local_448.bIsExternal = false;
  local_448.Base = local_428;
  local_448.CurPos = local_428;
  local_448.End = (wchar_t *)local_28;
  FLogRecord::FormatMessageTo(param_1,&local_448);
  QueryPerformanceCounter(local_458);
  TVar1 = param_1->Verbosity;
  dVar2 = ((double)local_458[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) - GStartTime;
  if (local_448.End < local_448.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_448,1);
  }
  *local_448.CurPos = L'\0';
  AddToBacklog(this,local_448.Base,TVar1,&param_1->Category,dVar2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_448);
  return;
}

// AddToBacklog @ 1418c7030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Private::FOutputDeviceRedirectorState::AddToBacklog
          (FOutputDeviceRedirectorState *this,wchar_t *param_1,Type param_2,FName *param_3,
          double param_4)

{
  int *piVar1;
  int iVar2;
  
  if (this->SerializeBacklogCount == (atomic<unsigned_int>)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->BacklogLock);
    iVar2 = (this->BacklogLines).ArrayNum;
    piVar1 = &(this->BacklogLines).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->BacklogLines).AllocatorInstance,piVar1);
    }
    (this->BacklogLines).ArrayNum = iVar2 + 1;
    FBufferedLine::FBufferedLine
              ((FBufferedLine *)
               ((this->BacklogLines).AllocatorInstance.Data + (longlong)iVar2 * 0x28),param_1,
               param_3,param_2,param_4);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->BacklogLock);
  }
  return;
}

// ConditionalFlushBufferedItems @ 1418cf240

void __thiscall
UE::Private::FOutputDeviceRedirectorState::ConditionalFlushBufferedItems
          (FOutputDeviceRedirectorState *this,EOutputDeviceRedirectorFlushOptions param_1)

{
  TEventCount<unsigned_int> *pTVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  FOutputDevicesPrimaryScopeLock local_28;
  FWaitState local_18;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ThreadLock);
  if (this->bThreadStarted == (atomic<bool>)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)&this->ThreadLock);
    FOutputDevicesPrimaryScopeLock::FOutputDevicesPrimaryScopeLock(&local_28,this);
    if (local_28.bLocked != false) {
      FlushBufferedItems(this);
      (local_28.State)->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
    }
    if (local_28.bNeedsUnlock != false) {
      ReleaseSRWLockExclusive((PSRWLOCK)local_28.State);
    }
    return;
  }
  if ((param_1 & Async) == None) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId522,"FOutputDeviceRedirector::FlushThreadedLogs",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
                 ,0x20a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId522);
    }
    uVar3 = (uint)(this->ThreadIdleEvent).Count & 0xfffffffe;
    LOCK();
    (this->ThreadIdleEvent).Count = (atomic<unsigned_int>)((uint)(this->ThreadIdleEvent).Count | 1);
    UNLOCK();
    pTVar1 = &this->ThreadWakeEvent;
    LOCK();
    aVar2 = pTVar1->Count;
    pTVar1->Count = pTVar1->Count;
    UNLOCK();
    if (((uint)aVar2 & 1) != 0) {
      LOCK();
      bVar5 = aVar2 == pTVar1->Count;
      if (bVar5) {
        pTVar1->Count = (atomic<unsigned_int>)((int)aVar2 + 1);
      }
      UNLOCK();
      if (bVar5) {
        ParkingLot::WakeAll(pTVar1);
      }
    }
    pTVar1 = &this->ThreadIdleEvent;
    if (((uint)pTVar1->Count & 0xfffffffe) == uVar3) {
      local_28.State = (FOutputDeviceRedirectorState *)pTVar1;
      local_28._8_4_ = uVar3;
      ParkingLot::Private::Wait
                (&local_18,pTVar1,
                 TFunctionWithContext<bool___cdecl(void)>::
                 Call<_UE::TEventCount<unsigned_int>::Wait_::__l5::<lambda_1>_>,&local_28,
                 (_func___cdecl_void_void_ptr *)0x0,(void *)0x0);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001418cf35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->ThreadLock);
  return;
}

// CreateFence @ 1418d4330

ulong64 __thiscall
UE::Private::FOutputDeviceRedirectorState::CreateFence(FOutputDeviceRedirectorState *this)

{
  atomic<unsigned___int64> *paVar1;
  TEventCount<unsigned_int> *pTVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned___int64> aVar4;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar5;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar6;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar7;
  bool bVar8;
  
  LOCK();
  paVar1 = &this->FenceCreateIndex;
  aVar4 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  aVar5 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
           )TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Malloc(0x68,8);
  *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
    *)aVar5 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
               )0x0;
  *(ulong64 *)((longlong)aVar5 + 8) = (longlong)aVar4 + 1U;
  *(undefined1 *)((longlong)aVar5 + 0x60) = 2;
  aVar6 = (this->BufferedItems).Head;
  do {
    aVar7 = aVar6;
    *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
      *)aVar5 = aVar7;
    LOCK();
    aVar6 = (this->BufferedItems).Head;
    bVar8 = aVar7 == aVar6;
    if (bVar8) {
      (this->BufferedItems).Head = aVar5;
      aVar6 = aVar7;
    }
    UNLOCK();
  } while (!bVar8);
  if (aVar7 == (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                )0x0) {
    pTVar2 = &this->ThreadWakeEvent;
    LOCK();
    aVar3 = pTVar2->Count;
    pTVar2->Count = pTVar2->Count;
    UNLOCK();
    if (((uint)aVar3 & 1) != 0) {
      LOCK();
      bVar8 = aVar3 == pTVar2->Count;
      if (bVar8) {
        pTVar2->Count = (atomic<unsigned_int>)((int)aVar3 + 1);
      }
      UNLOCK();
      if (bVar8) {
        ParkingLot::WakeAll(pTVar2);
      }
    }
  }
  return (ulong64)(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                   )((longlong)aVar4 + 1U);
}

// EnableBacklog @ 1418d7270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Private::FOutputDeviceRedirectorState::EnableBacklog
          (FOutputDeviceRedirectorState *this,bool param_1)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar7;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar8;
  char cVar9;
  bool bVar10;
  FOutputDevicesPrimaryScopeLock local_58;
  FOutputDeviceRedirectorState *local_48;
  atomic<unsigned_int> local_40;
  char local_3c;
  FOutputDeviceRedirectorState *local_38;
  FOutputDeviceRedirectorState **local_30;
  
  SRWLock = &this->BacklogLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar10 = this->bEnableBacklog;
  this->bEnableBacklog = param_1;
  if (param_1) {
    if (bVar10 == false) {
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      FOutputDevicesPrimaryScopeLock::FOutputDevicesPrimaryScopeLock(&local_58,this);
      cVar9 = local_58.bLocked;
      if (local_58.bLocked != false) {
        if (((aVar6 == this->PrimaryThreadId) && ((this->BufferedOutputDevices).ArrayNum == 0)) &&
           (local_3c = aVar6 == this->PanicThreadId, local_48 = this, local_40 = aVar6,
           (this->BufferedItems).Head !=
           (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
            )0x0)) {
          bVar10 = -1 < CpuChannel->Enabled;
          if (bVar10) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId575,"FOutputDeviceRedirector::FlushBufferedItems",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
                       ,0x23f);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId575);
          }
          aVar8 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                   )0x0;
          LOCK();
          aVar2 = (this->BufferedItems).Head;
          (this->BufferedItems).Head =
               (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                )0x0;
          UNLOCK();
          if (aVar2 != (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                        )0x0) {
            do {
              aVar7 = aVar2;
              LOCK();
              aVar2 = *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                        *)aVar7;
              *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                *)aVar7 = aVar8;
              UNLOCK();
              aVar8 = aVar7;
            } while (aVar2 != (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                               )0x0);
            while (aVar7 != (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                             )0x0) {
              aVar2 = *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                        *)aVar7;
              if ((local_3c == '\0') && (this->PanicThreadId != (atomic<unsigned_int>)0xffffffff)) {
                TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>
                ::ProduceItem<UE::Private::FOutputDeviceItem>
                          (&this->BufferedItems,(FOutputDeviceItem *)((longlong)aVar7 + 8));
              }
              else {
                local_30 = &local_48;
                local_38 = this;
                (*(code *)(&
                          PTR_VisitApplyEncoded<0,0,__UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<_UE::Private::FOutputDeviceRedirectorState::EnableBacklog_::__l12::FVisitor>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&>_1506aef40
                          )[*(byte *)((longlong)aVar7 + 0x60)])
                          (&local_38,(longlong *)((longlong)aVar7 + 8));
              }
              bVar3 = *(byte *)((longlong)aVar7 + 0x60);
              if ((2 < (ulonglong)bVar3) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[bVar3])((longlong *)((longlong)aVar7 + 8));
              TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Free
                        ((void *)aVar7);
              aVar7 = aVar2;
              cVar9 = local_58.bLocked;
            }
          }
          if (bVar10) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        if (cVar9 != '\0') {
          (local_58.State)->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
        }
      }
      if (local_58.bNeedsUnlock != false) {
        ReleaseSRWLockExclusive((PSRWLOCK)local_58.State);
      }
    }
  }
  else {
    DestructItems<FBufferedLine,int>
              ((FBufferedLine *)(this->BacklogLines).AllocatorInstance.Data,
               (this->BacklogLines).ArrayNum);
    piVar1 = &(this->BacklogLines).ArrayMax;
    (this->BacklogLines).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->BacklogLines).AllocatorInstance,0,piVar1);
                    /* WARNING: Could not recover jumptable at 0x0001418d72ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001418d74f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// FlushBufferedItems @ 1418daee0

void __thiscall
UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems(FOutputDeviceRedirectorState *this)

{
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar5;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar6;
  bool bVar7;
  FOutputDeviceRedirectorState *local_48;
  atomic<unsigned_int> local_40;
  char local_3c;
  FOutputDeviceRedirectorState *local_38;
  FOutputDeviceRedirectorState **local_30;
  
  if ((this->BufferedItems).Head !=
      (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
       )0x0) {
    local_48 = this;
    local_40 = (atomic<unsigned_int>)GetCurrentThreadId();
    local_3c = local_40 == local_48->PanicThreadId;
    if ((this->BufferedItems).Head !=
        (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
         )0x0) {
      bVar7 = -1 < CpuChannel->Enabled;
      if (bVar7) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId575,"FOutputDeviceRedirector::FlushBufferedItems",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
                   ,0x23f);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId575);
      }
      aVar6 = (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
               )0x0;
      LOCK();
      aVar1 = (this->BufferedItems).Head;
      (this->BufferedItems).Head =
           (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
            )0x0;
      UNLOCK();
      if (aVar1 != (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                    )0x0) {
        do {
          aVar5 = aVar1;
          LOCK();
          aVar1 = *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                    *)aVar5;
          *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
            *)aVar5 = aVar6;
          UNLOCK();
          aVar6 = aVar5;
        } while (aVar1 != (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                           )0x0);
        while (aVar5 != (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                         )0x0) {
          aVar1 = *(atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                    *)aVar5;
          if ((local_3c == '\0') && (this->PanicThreadId != (atomic<unsigned_int>)0xffffffff)) {
            TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>
            ::ProduceItem<UE::Private::FOutputDeviceItem>
                      (&this->BufferedItems,(FOutputDeviceItem *)((longlong)aVar5 + 8));
          }
          else {
            local_30 = &local_48;
            local_38 = this;
            (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,__UE::Private::FOutputDeviceRedirectorState::FlushBufferedItemsTo<_UE::Private::FOutputDeviceRedirectorState::FlushBufferedItems_::__l2::FVisitor>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>,TVariant<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>_&>_1506aeef8
                      )[*(byte *)((longlong)aVar5 + 0x60)])
                      (&local_38,(longlong *)((longlong)aVar5 + 8));
          }
          bVar2 = *(byte *)((longlong)aVar5 + 0x60);
          if ((2 < (ulonglong)bVar2) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Private::FOutputDeviceLine,UE::FLogRecord,unsigned___int64>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])((longlong *)((longlong)aVar5 + 8));
          TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Free((void *)aVar5);
          aVar5 = aVar1;
        }
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  return;
}

// RemoveOutputDevice @ 1418f2cb0

void __thiscall
UE::Private::FOutputDeviceRedirectorState::RemoveOutputDevice
          (FOutputDeviceRedirectorState *this,FOutputDevice *param_1)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  bool bVar5;
  FOutputDevice *local_res8;
  
  bVar4 = -1 < CpuChannel->Enabled;
  local_res8 = param_1;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_UE::Private::FOutputDevicesWriteScopeLock::FOutputDevicesWriteScopeLock(UE::Private::FOutputDeviceRedirectorState&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId331,"FOutputDevicesWriteScopeLock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
               ,0x14b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_UE::Private::FOutputDevicesWriteScopeLock::FOutputDevicesWriteScopeLock(UE::Private::FOutputDeviceRedirectorState&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId331);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  this->LockedThreadId = aVar3;
  aVar3 = this->OutputDevicesLockState;
  do {
    LOCK();
    aVar1 = this->OutputDevicesLockState;
    bVar5 = aVar3 == aVar1;
    if (bVar5) {
      this->OutputDevicesLockState = (atomic<unsigned_int>)((uint)aVar3 | 1);
      aVar1 = aVar3;
    }
    aVar3 = aVar1;
    UNLOCK();
  } while (!bVar5);
  if ((((uint)aVar3 & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LockState & 1) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
                         ,0x151,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  while (1 < (uint)aVar3) {
    FWindowsPlatformProcess::Sleep(0.0);
    aVar3 = this->OutputDevicesLockState;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  `UE::Private::FOutputDeviceRedirectorState::RemoveOutputDevice'::__l2::<lambda_1>::operator()
            (&local_res8,&this->BufferedOutputDevices,
             &this->BufferedOutputDevicesCanBeUsedOnPanicThread);
  `UE::Private::FOutputDeviceRedirectorState::RemoveOutputDevice'::__l2::<lambda_1>::operator()
            (&local_res8,&this->UnbufferedOutputDevices,
             &this->UnbufferedOutputDevicesCanBeUsedOnPanicThread);
  aVar3 = this->OutputDevicesLockState;
  do {
    LOCK();
    aVar1 = this->OutputDevicesLockState;
    bVar4 = aVar3 == aVar1;
    if (bVar4) {
      this->OutputDevicesLockState = (atomic<unsigned_int>)((uint)aVar3 & 0xfffffffe);
      aVar1 = aVar3;
    }
    aVar3 = aVar1;
    UNLOCK();
  } while (!bVar4);
  if ((((uint)aVar3 & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LockState & 1) == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceRedirector.cpp"
                         ,0x162,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0001418f2e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// SerializeBacklog @ 1418f6b60

void __thiscall
UE::Private::FOutputDeviceRedirectorState::SerializeBacklog
          (FOutputDeviceRedirectorState *this,TNotNull<FOutputDevice_*> param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&this->BacklogLock);
  LOCK();
  this->SerializeBacklogCount = (atomic<unsigned_int>)((int)this->SerializeBacklogCount + 1);
  UNLOCK();
  iVar3 = (this->BacklogLines).ArrayNum;
  pFVar5 = (this->BacklogLines).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar3 * 0x28;
  while( true ) {
    if ((this->BacklogLines).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FBufferedLine,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar2 = *(undefined8 *)(pFVar5 + 0x18);
    pcVar4 = *(code **)((param_1.Val)->_padding_ + 8);
    FLazyName::Resolve((FLazyName *)(pFVar5 + 8));
    (*pcVar4)(param_1.Val,*(undefined8 *)pFVar5,pFVar5[0x20],local_res18,uVar2);
    pFVar5 = pFVar5 + 0x28;
  }
  LOCK();
  this->SerializeBacklogCount = (atomic<unsigned_int>)((int)this->SerializeBacklogCount + -1);
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001418f6c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->BacklogLock);
  return;
}

// ThreadLoop @ 1418fa550

void __thiscall
UE::Private::FOutputDeviceRedirectorState::ThreadLoop(FOutputDeviceRedirectorState *this)

{
  TEventCount<unsigned_int> *pTVar1;
  TEventCount<unsigned_int> *pTVar2;
  atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
  aVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  atomic<unsigned_int> *local_48;
  uint local_40;
  FWaitState local_38;
  
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  bVar7 = false;
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar5 == this->LockedThreadId) ||
     ((this->PanicThreadId != (atomic<unsigned_int>)0xffffffff && (this->PanicThreadId != aVar5))))
  goto LAB_1418fa5de;
  if (aVar5 == this->PanicThreadId) {
LAB_1418fa5b9:
    this->LockedThreadId = aVar5;
    this->PrimaryThreadId = aVar4;
    this->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
    if (!bVar7) goto LAB_1418fa5de;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    if ((aVar5 != this->LockedThreadId) &&
       ((this->PanicThreadId == (atomic<unsigned_int>)0xffffffff || (this->PanicThreadId == aVar5)))
       ) {
      bVar7 = true;
      goto LAB_1418fa5b9;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this);
LAB_1418fa5de:
  aVar5 = (this->ThreadWakeEvent).Count;
  LOCK();
  (this->ThreadWakeEvent).Count = (atomic<unsigned_int>)((uint)(this->ThreadWakeEvent).Count | 1);
  UNLOCK();
  if (this->bThreadStarted != (atomic<bool>)0x0) {
    pTVar1 = &this->ThreadWakeEvent;
    do {
      aVar3 = (this->BufferedItems).Head;
      while ((aVar3 != (atomic<UE::TConsumeAllMpmcQueue<UE::Private::FOutputDeviceItem,UE::Private::FOutputDeviceLinearAllocator>::FNode_*>
                        )0x0 && (aVar4 == this->PrimaryThreadId))) {
        bVar7 = false;
        aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
        if ((aVar6 != this->LockedThreadId) &&
           ((this->PanicThreadId == (atomic<unsigned_int>)0xffffffff ||
            (this->PanicThreadId == aVar6)))) {
          if (aVar6 == this->PanicThreadId) {
LAB_1418fa6a2:
            this->LockedThreadId = aVar6;
            FlushBufferedItems(this);
            this->LockedThreadId = (atomic<unsigned_int>)0xffffffff;
            if (!bVar7) goto LAB_1418fa6c8;
          }
          else {
            AcquireSRWLockExclusive((PSRWLOCK)this);
            if ((aVar6 != this->LockedThreadId) &&
               ((this->PanicThreadId == (atomic<unsigned_int>)0xffffffff ||
                (this->PanicThreadId == aVar6)))) {
              bVar7 = true;
              goto LAB_1418fa6a2;
            }
          }
          ReleaseSRWLockExclusive((PSRWLOCK)this);
        }
LAB_1418fa6c8:
        aVar3 = (this->BufferedItems).Head;
      }
      LOCK();
      pTVar2 = &this->ThreadIdleEvent;
      aVar6 = pTVar2->Count;
      pTVar2->Count = pTVar2->Count;
      UNLOCK();
      if (((uint)aVar6 & 1) != 0) {
        LOCK();
        bVar7 = aVar6 == (this->ThreadIdleEvent).Count;
        if (bVar7) {
          (this->ThreadIdleEvent).Count = (atomic<unsigned_int>)((int)aVar6 + 1);
        }
        UNLOCK();
        if (bVar7) {
          ParkingLot::WakeAll(&this->ThreadIdleEvent);
        }
      }
      if (((uint)pTVar1->Count & 0xfffffffe) == ((uint)aVar5 & 0xfffffffe)) {
        local_48 = &pTVar1->Count;
        local_40 = (uint)aVar5 & 0xfffffffe;
        ParkingLot::Private::Wait
                  (&local_38,pTVar1,
                   TFunctionWithContext<bool___cdecl(void)>::
                   Call<_UE::TEventCount<unsigned_int>::Wait_::__l5::<lambda_1>_>,&local_48,
                   (_func___cdecl_void_void_ptr *)0x0,(void *)0x0);
      }
      aVar5 = pTVar1->Count;
      LOCK();
      pTVar1->Count = (atomic<unsigned_int>)((uint)pTVar1->Count | 1);
      UNLOCK();
    } while (this->bThreadStarted != (atomic<bool>)0x0);
  }
  return;
}

// TryStartThread @ 1418fdd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Private::FOutputDeviceRedirectorState::TryStartThread(FOutputDeviceRedirectorState *this)

{
  atomic<bool> aVar1;
  FThread *pFVar2;
  undefined ***pppuVar3;
  undefined1 auStackY_a8 [32];
  FThreadAffinity local_68;
  FThread local_58;
  code *local_48 [2];
  undefined **local_38;
  FOutputDeviceRedirectorState *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  AcquireSRWLockExclusive((PSRWLOCK)&this->ThreadLock);
  LOCK();
  aVar1 = this->bThreadStarted;
  this->bThreadStarted = (atomic<bool>)0x1;
  UNLOCK();
  if (aVar1 == (atomic<bool>)0x0) {
    local_20 = (undefined ***)0x0;
    local_68.ProcessorGroup = 0;
    local_68._10_6_ = 0;
    local_38 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Private::FOutputDeviceRedirectorState::TryStartThread'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Private::FOutputDeviceRedirectorState::TryStartThread'::__l5::<lambda_1>,void>
                  ::Call;
    local_68.ThreadAffinityMask = 0xffffffffffffffff;
    local_30 = this;
    pFVar2 = ::FThread::FThread(&local_58,L"OutputDeviceRedirector",
                                (TUniqueFunction<void___cdecl(void)> *)local_48,0,TPri_Normal,
                                &local_68,NonForkable);
    ::FThread::operator=(&this->Thread,pFVar2);
    ::FThread::~FThread(&local_58);
    if (local_48[0] != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ThreadLock);
  return true;
}

// TryStopThread @ 1418fde80

bool __thiscall
UE::Private::FOutputDeviceRedirectorState::TryStopThread(FOutputDeviceRedirectorState *this)

{
  TEventCount<unsigned_int> *pTVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->ThreadLock);
  LOCK();
  aVar2 = this->bThreadStarted;
  this->bThreadStarted = (atomic<bool>)0x0;
  UNLOCK();
  if (aVar2 != (atomic<bool>)0x0) {
    pTVar1 = &this->ThreadWakeEvent;
    LOCK();
    aVar3 = pTVar1->Count;
    pTVar1->Count = pTVar1->Count;
    UNLOCK();
    if (((uint)aVar3 & 1) != 0) {
      LOCK();
      bVar4 = aVar3 == pTVar1->Count;
      if (bVar4) {
        pTVar1->Count = (atomic<unsigned_int>)((int)aVar3 + 1);
      }
      UNLOCK();
      if (bVar4) {
        ParkingLot::WakeAll(pTVar1);
      }
    }
    ::FThread::Join(&this->Thread);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ThreadLock);
  return true;
}

// WaitFence @ 141900120

void __thiscall
UE::Private::FOutputDeviceRedirectorState::WaitFence
          (FOutputDeviceRedirectorState *this,ulong64 param_1)

{
  TEventCount<unsigned_int> *pTVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  atomic<unsigned_int> *local_28;
  uint local_20;
  FWaitState local_18;
  
  if ((ulonglong)this->FenceCompleteIndex < param_1) {
    pTVar1 = &this->FenceCompleteEvent;
    do {
      ConditionalFlushBufferedItems(this,Async);
      aVar2 = pTVar1->Count;
      LOCK();
      pTVar1->Count = (atomic<unsigned_int>)((uint)pTVar1->Count | 1);
      UNLOCK();
      if (param_1 <= (ulonglong)this->FenceCompleteIndex) {
        return;
      }
      uVar3 = (uint)aVar2 & 0xfffffffe;
      if (((uint)pTVar1->Count & 0xfffffffe) == uVar3) {
        local_28 = &pTVar1->Count;
        local_20 = uVar3;
        ParkingLot::Private::Wait
                  (&local_18,pTVar1,
                   TFunctionWithContext<bool___cdecl(void)>::
                   Call<_UE::TEventCount<unsigned_int>::Wait_::__l5::<lambda_1>_>,&local_28,
                   (_func___cdecl_void_void_ptr *)0x0,(void *)0x0);
      }
    } while ((ulonglong)this->FenceCompleteIndex < param_1);
  }
  return;
}

