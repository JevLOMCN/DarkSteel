// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 9

// ~FImpl @ 14456bfb0

void __thiscall UE::IoStore::HTTP::FEventLoop::FImpl::~FImpl(FImpl *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->BusyCount != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BusyCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x3b9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<UE::IoStore::HTTP::FHostGroup,int>
            ((FHostGroup *)(this->Groups).AllocatorInstance.Data,(this->Groups).ArrayNum);
  pFVar1 = (this->Groups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->Pending).Head != (FActivityNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Head == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0xc5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014456c034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Cancel @ 14456ff50

void __thiscall UE::IoStore::HTTP::FEventLoop::FImpl::Cancel(FImpl *this,ulong64 param_1)

{
  LOCK();
  this->Cancels = (atomic<unsigned___int64>)((ulonglong)this->Cancels | param_1);
  UNLOCK();
  return;
}

// IsIdle @ 144578a80

bool __thiscall UE::IoStore::HTTP::FEventLoop::FImpl::IsIdle(FImpl *this)

{
  return this->FreeSlots == (atomic<unsigned___int64>)0xffffffffffffffff;
}

// ReceiveWork @ 14457cef0

void __thiscall UE::IoStore::HTTP::FEventLoop::FImpl::ReceiveWork(FImpl *this)

{
  FActivityNode *pFVar1;
  FActivityNode *pFVar2;
  FHost *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FHostGroup *pFVar7;
  FHostGroup *pFVar8;
  
  if (this->FreeSlots != (atomic<unsigned___int64>)this->PrevFreeSlots) {
    this->PrevFreeSlots = (ulong64)this->FreeSlots;
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    pFVar1 = (this->Pending).Head;
    (this->Pending).Head = (FActivityNode *)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    while (pFVar1 != (FActivityNode *)0x0) {
      pFVar2 = pFVar1->Next;
      pFVar1->Next = (FActivityNode *)0x0;
      if ((2 < *(byte *)pFVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("State <= EState::RecvMessage",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                             ,0x155,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (FHostGroup *)(this->Groups).AllocatorInstance.Data;
      iVar6 = (this->Groups).ArrayNum;
      pFVar3 = *(FHost **)&pFVar1->field_0x38;
      pFVar8 = pFVar7 + iVar6;
      for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 1) {
        if (pFVar7->Host == pFVar3) {
          if (pFVar7 != (FHostGroup *)0x0) goto LAB_14457cfef;
          break;
        }
      }
      if (iVar6 == (this->Groups).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&(this->Groups).AllocatorInstance,&(this->Groups).ArrayMax);
        (this->Groups).ArrayNum = iVar6;
      }
      iVar6 = (this->Groups).ArrayNum;
      (this->Groups).ArrayNum = iVar6 + 1;
      pFVar7 = FHostGroup::FHostGroup
                         ((FHostGroup *)
                          ((this->Groups).AllocatorInstance.Data + (longlong)iVar6 * 0x38),pFVar3);
LAB_14457cfef:
      if (pFVar1->Next != (FActivityNode *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Activity->Next == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x160,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pFVar1->Next != (FActivityNode *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Node->Next == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                               ,0x102,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar1->Next = (pFVar7->Work).List.Head;
      (pFVar7->Work).List.Head = pFVar1;
      (pFVar7->Work).ActiveSlots =
           (pFVar7->Work).ActiveSlots | 1L << ((longlong)pFVar1->Slot & 0x3fU);
      this->BusyCount = this->BusyCount + 1;
      pFVar1 = pFVar2;
    }
  }
  return;
}

// Request @ 1445804e0

FRequest __thiscall
UE::IoStore::HTTP::FEventLoop::FImpl::Request(FImpl *this,FActivityNode *param_1)

{
  FActivity *in_R8;
  
  Trace(in_R8,ActivityCreate,0);
  *(FActivity **)param_1 = in_R8;
  return (FRequest)param_1;
}

// Send @ 144581140

ulong64 __thiscall UE::IoStore::HTTP::FEventLoop::FImpl::Send(FImpl *this,FActivityNode *param_1)

{
  atomic<unsigned___int64> aVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  schar sVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  
  if (this == (FImpl *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  while( true ) {
    aVar1 = this->FreeSlots;
    if ((aVar1 == (atomic<unsigned___int64>)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x3d6,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    uVar7 = -(longlong)aVar1 & (ulonglong)aVar1;
    LOCK();
    bVar4 = aVar1 == this->FreeSlots;
    if (bVar4) {
      this->FreeSlots = (atomic<unsigned___int64>)((longlong)aVar1 - uVar7);
    }
    UNLOCK();
    if (bVar4) break;
    FWindowsPlatformProcess::SleepNoStats(0.0);
  }
  lVar2 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  sVar5 = (schar)lVar2;
  if (uVar7 == 0) {
    sVar5 = -1;
  }
  param_1->Slot = sVar5;
  if ((param_1->Next != (FActivityNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node->Next == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                         ,0x102,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  param_1->Next = (this->Pending).Head;
  (this->Pending).Head = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return uVar7;
}

// SetFailTimeout @ 1445818a0

void __thiscall UE::IoStore::HTTP::FEventLoop::FImpl::SetFailTimeout(FImpl *this,int param_1)

{
  int iVar1;
  
  iVar1 = GIdleMs;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  this->FailTimeoutMs = iVar1;
  return;
}

// Throttle @ 144581f00

void __thiscall UE::IoStore::HTTP::FEventLoop::FImpl::Throttle(FImpl *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1 < 0x80000) {
    uVar1 = param_1;
  }
  uVar2 = uVar1;
  if ((uVar1 != 0) && (uVar2 = 0x20, 0x20 < uVar1)) {
    uVar2 = uVar1;
  }
  (this->Throttler).Limit = uVar2 << 10;
  return;
}

// Tick @ 144582370

uint __thiscall UE::IoStore::HTTP::FEventLoop::FImpl::Tick(FImpl *this,int param_1)

{
  long64 *plVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<unsigned___int64> aVar3;
  ulong64 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  FHostGroup *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  FHostGroup *this_00;
  ulonglong uVar18;
  FActivityList FVar19;
  uint uVar20;
  bool bVar21;
  double dVar22;
  undefined1 local_88 [4];
  int local_84;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  atomic<unsigned___int64> local_70;
  FTickState local_68;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1074,"IasHttp::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
               ,0x432);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1074);
  }
  ReceiveWork(this);
  local_84 = FThrottler::GetAllowance(&this->Throttler);
  if (local_84 < 1) {
    if (param_1 != 0) {
      iVar11 = -local_84;
      iVar12 = iVar11;
      if ((0 < param_1) && (iVar12 = param_1, iVar11 < param_1)) {
        iVar12 = iVar11;
      }
      FWindowsPlatformProcess::SleepNoStats((float)iVar12 * __real_3a83126f);
      local_84 = FThrottler::GetAllowance(&this->Throttler);
      if (0 < local_84) goto LAB_14458242c;
    }
    uVar9 = this->BusyCount;
  }
  else {
LAB_14458242c:
    aVar3 = this->Cancels;
    local_70 = aVar3;
    if (Freq == 0) {
      lVar13 = 0;
      dVar22 = __real_3ff0000000000000 / FGenericPlatformTime::SecondsPerCycle64;
      if ((__real_43e0000000000000 <= dVar22) &&
         (dVar22 = dVar22 - __real_43e0000000000000, dVar22 < __real_43e0000000000000)) {
        lVar13 = -0x8000000000000000;
      }
      Freq = (longlong)dVar22 + lVar13;
      QueryPerformanceCounter(&local_80);
      Base = local_80.QuadPart;
    }
    QueryPerformanceCounter(&local_78);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = Freq;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (local_78.QuadPart - Base) * 1000;
    local_68.NowMs = SUB164(auVar6 / auVar5,0);
    if (((ulonglong)local_68.NowMs != SUB168(auVar6 / auVar5,0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NowMs == NowBig",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x45b,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return uVar9;
    }
    iVar12 = (this->Groups).ArrayNum;
    local_68.RecvAllowance = &local_84;
    uVar16 = 0;
    uVar9 = 0;
    this_00 = (FHostGroup *)(this->Groups).AllocatorInstance.Data;
    pFVar15 = this_00 + iVar12;
    local_68.FailTimeoutMs = this->FailTimeoutMs;
    local_68.DoneList.Head = (FActivityNode *)0x0;
    local_68.Work = (FWorkQueue *)0x0;
    local_68.Cancels = (ulong64)aVar3;
    local_68.PollTimeoutMs = param_1;
    while( true ) {
      if ((this->Groups).ArrayNum != iVar12) {
        local_88[0] = 0;
        `TCheckedPointerIterator<UE::IoStore::HTTP::FHostGroup,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_88);
      }
      if (this_00 == pFVar15) break;
      FHostGroup::Tick(this_00,&local_68);
      this_00 = this_00 + 1;
    }
    uVar20 = (this->Groups).ArrayNum;
    uVar18 = uVar16;
    if (uVar20 != 0) {
      do {
        uVar17 = (uint)uVar18;
        uVar10 = 0;
        if ((int)uVar17 < (this->Groups).ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return uVar9;
        }
        if (*(int *)((this->Groups).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x38 + 0x30) ==
            0) {
          uVar10 = 0;
          if ((int)uVar17 < (this->Groups).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return uVar9;
          }
          TArray<UE::IoStore::HTTP::FHostGroup,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->Groups,uVar17);
          uVar20 = uVar20 - 1;
          uVar17 = uVar17 - 1;
        }
        uVar18 = (ulonglong)(uVar17 + 1);
      } while (uVar17 + 1 < uVar20);
    }
    FVar19.Head = local_68.DoneList.Head;
    uVar20 = (this->Throttler).Limit;
    if ((uVar20 != 0) && (local_84 != 0)) {
      plVar1 = &(this->Throttler).CycleLast;
      *plVar1 = *plVar1 - ((longlong)local_84 * (this->Throttler).CycleFreq) /
                          (longlong)(ulonglong)uVar20;
    }
    local_68.DoneList.Head = (FActivityNode *)0x0;
    if (FVar19.Head != (FActivityNode *)0x0) {
      do {
        uVar16 = uVar16 | 1L << ((longlong)*(char *)((longlong)FVar19.Head + 0xa0) & 0x3fU);
        uVar4 = *(ulong64 *)((longlong)FVar19.Head + 0x98);
        LaneEstate_Demolish(GActivityTraceEstate,(FLanePostcode)FVar19.Head);
        if ((*(void **)((longlong)FVar19.Head + 0x88) != (void *)0x0) &&
           (-1 < *(int *)((longlong)FVar19.Head + 0x94))) {
          FMemory::Free(*(void **)((longlong)FVar19.Head + 0x88));
        }
        FTransactRef::~FTransactRef((FTransactRef *)((longlong)FVar19.Head + 0x80));
        if (*(longlong *)((longlong)FVar19.Head + 0x50) != 0) {
          plVar14 = *(longlong **)((longlong)FVar19.Head + 0x78);
          if (plVar14 == (longlong *)0x0) {
            plVar14 = (longlong *)((longlong)FVar19.Head + 0x60);
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        FMemory::Free(FVar19.Head);
        this->BusyCount = this->BusyCount - 1;
        FVar19.Head = (FActivityNode *)uVar4;
      } while (uVar4 != 0);
      if (uVar16 != 0) {
        LOCK();
        paVar2 = &this->FreeSlots;
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + uVar16);
        UNLOCK();
        uVar9 = (uint)(aVar3 != (atomic<unsigned___int64>)this->PrevFreeSlots);
        this->PrevFreeSlots = this->PrevFreeSlots + uVar16;
      }
    }
    if ((uVar16 | (ulonglong)local_70) != 0) {
      LOCK();
      this->Cancels =
           (atomic<unsigned___int64>)((ulonglong)this->Cancels & ~(uVar16 | (ulonglong)local_70));
      UNLOCK();
    }
    uVar9 = this->BusyCount + uVar9;
    if ((local_68.DoneList.Head != (FActivityNode *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0xc5,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return uVar9;
    }
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar9;
}

